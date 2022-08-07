module.exports = grammar({
  name: "pug",
  externals: ($) => [$._newline, $._indent, $._dedent],
  rules: {
    source_file: ($) => repeat(choice($.comment, $.tag, $.doctype)),
    doctype: ($) =>
      seq("doctype", alias(choice("html", "strict", "xml"), $.doctype_name)),
    pipe_content: ($) =>
      seq("|", optional($._content_or_javascript), $._newline),
    tag: ($) =>
      seq(
        choice($.tag_name, $.id, $.class),
        optional(repeat1(choice($.id, $.class))),
        optional($.attributes),
        choice(
          seq(":", $.tag),
          $._content_after_dot,
          seq(
            optional(seq(" ", $._content_or_javascript)),
            $._newline,
            optional($.children)
          )
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
        optional(seq("=", $.quoted_attribute_value))
      ),
    _js_attribute: ($) => 
      seq(
        $.js_attribute_name,
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
    tag_name: ($) => /\w(?:[-:\w]*\w)?/,
    class: ($) => /\.[_a-z0-9\-]*[_a-zA-Z][_a-zA-Z0-9\-]*/i,
    id: ($) => /#[\w-]+/,
    js_attribute_name: ($) => /\[[\w@\-:]+\]/,
    attribute_name: ($) => /[\w@\-:]+/,
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
    javascript: ($) => /[^\n}]+/,
    content: ($) => /[^\n\{]+/,
    _content_or_javascript: ($) =>
      repeat1(choice(seq("{{", $.javascript, "}}"), $.content)),
    _comment_content: ($) => /[^ ][^\n]*/,
  },
});
