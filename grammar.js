// TODO: support `tag(attr='hello' + goodbye)`
// TODO: support multiple levels of function calls in pug js attrs: `tag(attr=true.call(false.toString()))`
// TODO: don't break if there are singular { or # in content
// TODO: add extends keyword
// TODO: add block keyword
// TODO: add mixin keyword
// TODO: add whatever the +list syntax is (mixins?)
// TODO: support #[p(prop)] nested pug syntax
module.exports = grammar({
  name: "pug",
  externals: ($) => [$._newline, $._indent, $._dedent],
  rules: {
    source_file: ($) => repeat(
      choice(
        $.conditional,
        $.comment,
        $.script_block,
        $.tag,
        $.doctype,
        $.unbuffered_code,
        $.buffered_code,
        $.unescaped_buffered_code,
        $.case,
        $.pipe,
        $.filter,
      ),
    ),
    doctype: ($) =>
      seq("doctype", alias(choice("html", "strict", "xml"), $.doctype_name)),
    pipe: ($) =>
      seq("|", optional($._content_or_javascript), $._newline),

    filter: ($) =>
      prec.right(
        seq(
          ':',
          $.filter_name,
          optional($.attributes),
          optional(
            alias($.filter_content, $.content),
          ),
      ),
    ),
    filter_name: () => /[\w-]+/,
    filter_content: ($) =>
      choice(
        $.filter,
        seq(
          /( |\t)+/,
          /[^\n]*/,
        ),
        seq(
          $._newline,
          $._indent,
          repeat(
            seq(
              /[^\n]*/,
              $._newline,
            ),
          ),
          $._dedent,
        )
      ),

    conditional: ($) =>
      seq(
        choice(
          seq(
            choice(
              'unless',
              'if',
              'else if',
            ),
            alias($._un_delimited_javascript, $.javascript),
          ),
          'else',
        ),
        $._newline,
        $.children,
      ),
    case: ($) =>
      prec.right(
        seq(
          'case',
          alias($._un_delimited_javascript_line, $.javascript),
          $._newline,
          $._indent,
          repeat1(
            $.when,
          ),
        ),
      ),
    _when_content: ($) =>
      seq(
        choice(
          // Where the content is on the next line
          seq(
            $._newline,
            $.children,
          ),
          // Where the content follows a : on the same line
          seq(
            ':',
            alias($._dummy_tag, $.children),
          ),
        ),
      ),
    _dummy_tag: ($) => $.tag,
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
      prec.left(
        seq(
          $._when_keyword,
          choice(
            $._when_content,
            // There are newlines between each when case, but not the last when
            $._newline,
          ),
          optional($._dedent)
        ),
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
    script_block: ($) =>
      seq(
        'script.',
        $._newline,
        $._indent,
        alias(
          repeat1(
            seq(
              optional(/[^\n]+/),
              $._newline,
            )
          ),
          $.javascript
        ),
        $._dedent,
      ),
    tag: ($) =>
      seq(
        choice($.tag_name, $.id, $.class),
        optional(repeat1(choice($.id, $.class))),
        optional($.attributes),
        optional(alias('/', $.self_close_slash)),
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
          seq(
            optional(seq(" ", $._content_or_javascript)),
            $._newline,
            optional($.children)
          )
        )
      ),
    _content_after_dot: ($) =>
      seq(
        optional(
          seq(
            $._newline,
            $._indent,
          )
        ),
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
        $._angular_attribute,
      ),
    _ternary_attribute_value: ($) =>
      seq(
        "=",
        alias(
          token(
            seq(
              /[^'"{\[][^?]+?/,
              '?',
              /[^)?]+?/,
              choice(
                /[^ )]*?/,
                choice(
                  /'.*'/,
                  /".*"/,
                  /`.*`/,
                ),
              ),
            )
          ),
          $.javascript
        ),
      ),
    _string_attribute_value: ($) =>
      seq(
        "=",
        $.quoted_attribute_value
      ),
    _variable_attribute_value: ($) =>
      seq(
        "=",
        alias(
          // No function calls, nor spaces allowed in javascript attributes
          /[^'"{\[][^ ()]+(\([^)]*?\))?/,
          $.javascript
        ),
      ),
    _object_attribute_value: ($) =>
      seq(
        "=",
        alias(
          token(
            seq(
              "{",
              /([^\[\]()]*?(, ?)?)*?/,
              "}",
            ),
          ),
          $.javascript,
        ),
      ),
    _template_attribute_value: ($) =>
      seq(
        "=",
        alias(
          token(
            seq(
              "`",
              /[^`]*?/,
              "`",
            ),
          ),
          $.javascript,
        ),
      ),
    _array_attribute_value: ($) =>
      seq(
        "=",
        alias(
          token(
            seq(
              "[",
              /[^\[\]()]*?/,
              "]",
            ),
          ),
          $.javascript,
        ),
      ),
    _attribute: ($) =>
      seq(
        $.attribute_name,
        optional(repeat1(seq(".", alias(/[\w@\-:]+/, $.attribute_modifier)))),
        optional(
          choice(
            $._string_attribute_value,
            $._ternary_attribute_value,
            $._variable_attribute_value,
            $._array_attribute_value,
            $._object_attribute_value,
            $._template_attribute_value,
          ),
        ),
      ),
    _angular_attribute: ($) =>
      seq(
        alias($.angular_attribute_name, $.attribute_name),
        optional(seq("=", $.quoted_javascript))
      ),

    children: ($) => prec.right(
      seq(
        $._indent,
        repeat1($._children_choice),
        optional($._dedent),
      ),
    ),
    // TODO: add all other types of element in here too
    _children_choice: ($) =>
      prec(1,
        choice(
          $.buffered_code,
          $.case,
          $.comment,
          $.conditional,
          $.doctype,
          $.pipe,
          $.script_block,
          $.tag,
          $.unbuffered_code,
          $.unescaped_buffered_code,
          $.filter,
          $._newline,
        ),
      ),

    comment: ($) =>
      choice(
        $._comment,
        $._comment_not_first_line,
      ),
    _comment: ($) =>
      prec.left(
        seq(
          choice("//", "//-"),
          $._comment_content,
          $._newline,
          optional(
            seq(
              $._indent,
              repeat1(
                seq(
                  $._comment_content,
                  $._newline,
                ),
              ),
            ),
          ),
        ),
      ),
    _comment_not_first_line: ($) =>
      seq(
        choice("//", "//-"),
        $._newline,
        $._indent,
        repeat1(
          seq(
            $._comment_content,
            $._newline,
          ),
        ),
        $._dedent,
      ),

    tag_name: () => /\w(?:[-:\w]*\w)?/,
    class: () => /\.[_a-z0-9\-]*[_a-zA-Z][_a-zA-Z0-9\-]*/i,
    id: () => /#[\w-]+/,

    angular_attribute_name: () =>
      choice(
        /\[[\w@\-:\.]+\]/,
        /\([\w@\-:\.]+\)/,
        /\*[\w@\-:\.]+/,
      ),
    attribute_name: () => /#?[\w@\-:]+/,

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

    content: ($) =>
      prec.right(
        repeat1(
          seq(
            /[^\n{#]+?/,
            optional('#'),
            optional('{')
          ),
        ),
      ),
    _comment_content: () => /[^\n]*/,
    _content_or_javascript: ($) =>
      repeat1(
        choice(
          seq(
            "#{",
            alias($._delimited_javascript, $.javascript),
            "}"
          ),
          seq(
            "{{",
            alias($._delimited_javascript, $.javascript),
            "}}"
          ),
          $.content
        ),
      ),

    // TODO: can _delimited_javascript and _un_delimited_javascript be merged?
    _delimited_javascript: ($) => /[^\n}]+/,
    // I only want this node to be exposed sometimes
    _un_delimited_javascript: ($) => $._un_delimited_javascript_line,
    _un_delimited_javascript_line: ($) => /(.)+?/,
    _un_delimited_javascript_multiline: ($) => repeat1(prec(1, $._un_delimited_javascript_line)),
    _single_line_buf_code: ($) =>
      prec.left(
        seq(
          alias($._un_delimited_javascript, $.javascript),
          choice(
            seq(
              $._newline,
              $._indent,
              repeat1(
                choice(
                  $.tag,
                  $._newline,
                ),
              ),
              $._dedent,
            ),
            $._newline,
          ),
          optional($._dedent),
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
