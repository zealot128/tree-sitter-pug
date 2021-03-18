module.exports = grammar({
  name: 'pug',
  externals: $ => [
    $._newline,
    $._indent,
    $._dedent
  ],
  rules: {
    source_file: $ => repeat(choice($.comment, $.tag)),
    tag: $ => seq(
      $.tag_name,
      optional(repeat(choice($.id, $.class))),
      optional($.attributes),
      optional(seq(' ', $.content)),
      $._newline,
      optional($.children),
    ),
    attributes: $ => seq(
      '(',
      repeat(seq(
        $.attribute,
        choice(',', ' ')
      )),
      optional($.attribute),
      ')',
    ),
    attribute: $ => seq(
      $.attribute_name,
      optional(seq(
        '=',
        $.quoted_attribute_value
      ))
    ),
    children: $ => choice(
      seq($._indent, repeat($.tag), $._dedent),
    ),
    comment: $ => seq(
      '//',
      optional($._comment_content),
      $._newline,
      optional(seq($._indent, seq($._comment_content, $._newline), $._dedent))
    ),
    tag_name: $ => /\w(?:[-:\w]*\w)?/,
    class: $ => /\.[_a-z0-9\-]*[_a-z][_a-z0-9\-]*/i,
    id: $ => /#[\w-]+/,
    attribute_name: $ => /[\w@\-:]+/,
    quoted_attribute_value: $ => choice(
      seq("'", optional(alias(/[^']+/, $.attribute_value)), "'"),
      seq('"', optional(alias(/[^"]+/, $.attribute_value)), '"')
    ),
    content: $ => /[^\n]+/,
    _comment_content: $ => /[^ ][^\n]*/
  }
})
