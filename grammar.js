module.exports = grammar({
  name: "pug",
  externals: ($) => [$._newline, $._indent, $._dedent],
  rules: {
    source_file: ($) => repeat(
      choice(
        $.conditional,
        $.comment,
        $.tag,
        $.doctype,
        $.unbuffered_code,
        $.buffered_code,
        $.unescaped_buffered_code,
        $.case,
      ),
    ),
    doctype: ($) =>
      seq("doctype", alias(choice("html", "strict", "xml"), $.doctype_name)),
    pipe_content: ($) =>
      seq("|", optional($._content_or_javascript), $._newline),
    conditional: ($) =>
      prec.left(
        seq(
          choice(
            seq(
              choice(
                'if',
                'else if',
                'unless',
              ),
              alias($._un_delimited_javascript, $.javascript),
            ),
            'else',
          ),
          repeat1($.tag),
        ),
      ),
    case: ($) =>
      seq(
        'case',
        alias($._un_delimited_javascript_line, $.javascript),
        $._newline,
        $._indent,
        repeat1(
          $.when,
        ),
      ),
    _when_content: ($) => 
      prec.right(
        seq(
          choice(
            // Where the content is on the next line
            seq(
              $._newline,
              $._indent,
            ),
            // Where the content follows a : on the same line
            ':'
          ),
          choice(
            repeat($.tag),
            $.unbuffered_code,
          ),
        ),
      ),
    _when_keyword: ($) => 
      choice(
        seq(
          'when',
          // `when`s don't work with properly with objects, so removing : from regex is fine.
          alias(/[^:\n]+?/, $.javascript),
        ),
        'default',
      ),
    when: ($) => 
      seq(
        $._when_keyword,
        choice(
          optional($._when_content),
          // There are newlines between each when case, but not the last when
          optional($._newline), 
        ),
        optional($._dedent)
      ),
    unescaped_buffered_code: ($) =>
      seq(
        '!=',
        $._single_line_buf_code,
      ),
    buffered_code: ($) =>
      seq(
        '=',
        $._single_line_buf_code,
      ),
    tag: ($) =>
      seq(
        choice($.tag_name, $.id, $.class),
        optional(repeat1(choice($.id, $.class))),
        optional($.attributes),
        choice(
          seq(":", $.tag),
          $._content_after_dot,
          seq(
            optional(
              seq(
                $._newline,
                $._indent,
              ),
            ),
            choice($.buffered_code, $.unescaped_buffered_code),
          ),
          prec.left(seq(
            optional(seq(" ", $._content_or_javascript)),
            $._newline,
            optional($.children)
          ))
        )
      ),
    _content_after_dot: ($) =>
      seq(
        ".",
        $._newline,
        $._indent,
        alias(
          repeat1(seq($._content_or_javascript, $._newline)),
          $.children
        ),
        $._dedent
      ),

    attributes: ($) =>
      seq(
        "(",
        repeat(seq($.attribute, choice(",", " "))),
        optional($.attribute),
        ")"
      ),
    attribute: ($) =>
      choice(
        $._attribute,
        $._js_attribute,
      ),
    _attribute: ($) =>
      seq(
        $.attribute_name,
        optional(repeat1(seq(".", alias(/[\w@\-:]+/, $.attribute_modifier)))),
        choice(
          optional(seq("=", $.quoted_attribute_value)),
          optional(seq("=", /[^'"]/, alias(/[^)]+/, $.javascript))),
        )
      ),
    _js_attribute: ($) => 
      seq(
        alias($.js_attribute_name, $.attribute_name),
        optional(repeat1(seq(".", alias(/[\w@\-:]+/, $.attribute_modifier)))),
        optional(seq("=", $.quoted_javascript))
      ),

    children: ($) => prec.right(seq($._indent, repeat1($._children_choice), optional($._dedent))),
    _children_choice: ($) => choice($.pipe_content, $.tag),

    comment: ($) =>
      seq(
        "//",
        optional($._comment_content),
        $._newline,
        optional(
          seq($._indent, repeat(seq($._comment_content, $._newline)), optional($._dedent))
        )
      ),

    tag_name: () => /\w(?:[-:\w]*\w)?/,
    class: () => /\.[_a-z0-9\-]*[_a-zA-Z][_a-zA-Z0-9\-]*/i,
    id: () => /#[\w-]+/,

    js_attribute_name: () => 
      choice(
        /\[[\w@\-:]+\]/,
        /\([\w@\-:]+\)/,
        /\*[\w@\-:]+/,
      ),
    attribute_name: () => /[\w@\-:]+/,

    quoted_javascript: ($) =>
      choice(
        seq("'", optional(alias(/[^']+/, $.javascript)), "'"),
        seq('"', optional(alias(/[^"]+/, $.javascript)), '"')
      ),
    quoted_attribute_value: ($) =>
      choice(
        seq("'", optional(alias(/[^']+/, $.attribute_value)), "'"),
        seq('"', optional(alias(/[^"]+/, $.attribute_value)), '"')
      ),

    content: () => /[^\n\{]+/,
    _comment_content: () => /[^ ][^\n]*/,
    _content_or_javascript: ($) =>
      repeat1(choice(seq("{{", $._delimited_javascript, "}}"), $.content)),

    // TODO: can _delimited_javascript and _un_delimited_javascript be merged?
    _delimited_javascript: ($) => /[^\n}]+/,
    // I only want this node to be exposed sometimes
    _un_delimited_javascript: ($) => $._un_delimited_javascript_line,
    _un_delimited_javascript_line: ($) => /(.)+?/,
    _un_delimited_javascript_multiline: ($) => repeat1(prec(1, $._un_delimited_javascript_line)),
    _single_line_buf_code: ($) => 
       prec.right(     
        seq(
          alias($._un_delimited_javascript, $.javascript),
          choice(
            seq(
              $._newline,
              $._indent,
              repeat1($.tag),
              $._dedent,
            ),
            $._newline,
          ),
        ),
      ), 
    _multi_line_buf_code: ($) => 
      alias(seq(
        $._un_delimited_javascript_multiline,
      ), $.javascript),
    unbuffered_code: ($) =>
      prec.right(
        seq(
          '-',
          token.immediate(/( |\t)*/),
          choice(
            seq(
              $._single_line_buf_code,
            ),
            seq(
              $._newline,
              $._indent,
              $._multi_line_buf_code,
            ),
          ),
          optional($._dedent),
        )
      )
  },
});
