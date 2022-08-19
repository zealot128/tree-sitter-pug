#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 338
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 85
#define ALIAS_COUNT 2
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_doctype = 1,
  anon_sym_html = 2,
  anon_sym_strict = 3,
  anon_sym_xml = 4,
  anon_sym_PIPE = 5,
  anon_sym_if = 6,
  anon_sym_elseif = 7,
  anon_sym_unless = 8,
  anon_sym_else = 9,
  anon_sym_case = 10,
  anon_sym_COLON = 11,
  anon_sym_when = 12,
  aux_sym__when_keyword_token1 = 13,
  anon_sym_default = 14,
  anon_sym_BANG_EQ = 15,
  anon_sym_EQ = 16,
  anon_sym_ = 17,
  anon_sym_DOT = 18,
  anon_sym_LPAREN = 19,
  anon_sym_COMMA = 20,
  anon_sym_RPAREN = 21,
  aux_sym__attribute_token1 = 22,
  aux_sym__attribute_token2 = 23,
  aux_sym__attribute_token3 = 24,
  anon_sym_SLASH_SLASH = 25,
  sym_tag_name = 26,
  sym_class = 27,
  sym_id = 28,
  aux_sym_js_attribute_name_token1 = 29,
  aux_sym_js_attribute_name_token2 = 30,
  aux_sym_js_attribute_name_token3 = 31,
  anon_sym_SQUOTE = 32,
  aux_sym_quoted_javascript_token1 = 33,
  anon_sym_DQUOTE = 34,
  aux_sym_quoted_javascript_token2 = 35,
  sym_content = 36,
  sym__comment_content = 37,
  anon_sym_LBRACE_LBRACE = 38,
  anon_sym_RBRACE_RBRACE = 39,
  sym__delimited_javascript = 40,
  sym__un_delimited_javascript_line = 41,
  anon_sym_DASH = 42,
  aux_sym_unbuffered_code_token1 = 43,
  sym__newline = 44,
  sym__indent = 45,
  sym__dedent = 46,
  sym_source_file = 47,
  sym_doctype = 48,
  sym_pipe = 49,
  sym_conditional = 50,
  sym_case = 51,
  sym__when_content = 52,
  sym__when_keyword = 53,
  sym_when = 54,
  sym_unescaped_buffered_code = 55,
  sym_buffered_code = 56,
  sym_tag = 57,
  sym__content_after_dot = 58,
  sym_attributes = 59,
  sym_attribute = 60,
  sym__attribute = 61,
  sym__js_attribute = 62,
  sym_children = 63,
  sym__children_choice = 64,
  sym_comment = 65,
  sym_js_attribute_name = 66,
  sym_attribute_name = 67,
  sym_quoted_javascript = 68,
  sym_quoted_attribute_value = 69,
  aux_sym__content_or_javascript = 70,
  sym__un_delimited_javascript = 71,
  aux_sym__un_delimited_javascript_multiline = 72,
  sym__single_line_buf_code = 73,
  sym__multi_line_buf_code = 74,
  sym_unbuffered_code = 75,
  aux_sym_source_file_repeat1 = 76,
  aux_sym_conditional_repeat1 = 77,
  aux_sym_case_repeat1 = 78,
  aux_sym_tag_repeat1 = 79,
  aux_sym__content_after_dot_repeat1 = 80,
  aux_sym_attributes_repeat1 = 81,
  aux_sym__attribute_repeat1 = 82,
  aux_sym_children_repeat1 = 83,
  aux_sym_comment_repeat1 = 84,
  alias_sym_attribute_modifier = 85,
  alias_sym_attribute_value = 86,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_doctype] = "doctype",
  [anon_sym_html] = "doctype_name",
  [anon_sym_strict] = "doctype_name",
  [anon_sym_xml] = "doctype_name",
  [anon_sym_PIPE] = "|",
  [anon_sym_if] = "if",
  [anon_sym_elseif] = "else if",
  [anon_sym_unless] = "unless",
  [anon_sym_else] = "else",
  [anon_sym_case] = "case",
  [anon_sym_COLON] = ":",
  [anon_sym_when] = "when",
  [aux_sym__when_keyword_token1] = "javascript",
  [anon_sym_default] = "default",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_EQ] = "=",
  [anon_sym_] = " ",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [aux_sym__attribute_token1] = "_attribute_token1",
  [aux_sym__attribute_token2] = "_attribute_token2",
  [aux_sym__attribute_token3] = "javascript",
  [anon_sym_SLASH_SLASH] = "//",
  [sym_tag_name] = "tag_name",
  [sym_class] = "class",
  [sym_id] = "id",
  [aux_sym_js_attribute_name_token1] = "js_attribute_name_token1",
  [aux_sym_js_attribute_name_token2] = "js_attribute_name_token2",
  [aux_sym_js_attribute_name_token3] = "js_attribute_name_token3",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_javascript_token1] = "javascript",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_javascript_token2] = "javascript",
  [sym_content] = "content",
  [sym__comment_content] = "_comment_content",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [sym__delimited_javascript] = "_delimited_javascript",
  [sym__un_delimited_javascript_line] = "_un_delimited_javascript_line",
  [anon_sym_DASH] = "-",
  [aux_sym_unbuffered_code_token1] = "unbuffered_code_token1",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_source_file] = "source_file",
  [sym_doctype] = "doctype",
  [sym_pipe] = "pipe",
  [sym_conditional] = "conditional",
  [sym_case] = "case",
  [sym__when_content] = "_when_content",
  [sym__when_keyword] = "_when_keyword",
  [sym_when] = "when",
  [sym_unescaped_buffered_code] = "unescaped_buffered_code",
  [sym_buffered_code] = "buffered_code",
  [sym_tag] = "tag",
  [sym__content_after_dot] = "_content_after_dot",
  [sym_attributes] = "attributes",
  [sym_attribute] = "attribute",
  [sym__attribute] = "_attribute",
  [sym__js_attribute] = "_js_attribute",
  [sym_children] = "children",
  [sym__children_choice] = "_children_choice",
  [sym_comment] = "comment",
  [sym_js_attribute_name] = "attribute_name",
  [sym_attribute_name] = "attribute_name",
  [sym_quoted_javascript] = "quoted_javascript",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [aux_sym__content_or_javascript] = "_content_or_javascript",
  [sym__un_delimited_javascript] = "javascript",
  [aux_sym__un_delimited_javascript_multiline] = "_un_delimited_javascript_multiline",
  [sym__single_line_buf_code] = "_single_line_buf_code",
  [sym__multi_line_buf_code] = "_multi_line_buf_code",
  [sym_unbuffered_code] = "unbuffered_code",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_conditional_repeat1] = "conditional_repeat1",
  [aux_sym_case_repeat1] = "case_repeat1",
  [aux_sym_tag_repeat1] = "tag_repeat1",
  [aux_sym__content_after_dot_repeat1] = "_content_after_dot_repeat1",
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
  [aux_sym__attribute_repeat1] = "_attribute_repeat1",
  [aux_sym_children_repeat1] = "children_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [alias_sym_attribute_modifier] = "attribute_modifier",
  [alias_sym_attribute_value] = "attribute_value",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_doctype] = anon_sym_doctype,
  [anon_sym_html] = anon_sym_html,
  [anon_sym_strict] = anon_sym_html,
  [anon_sym_xml] = anon_sym_html,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_elseif] = anon_sym_elseif,
  [anon_sym_unless] = anon_sym_unless,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_when] = anon_sym_when,
  [aux_sym__when_keyword_token1] = aux_sym__when_keyword_token1,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_] = anon_sym_,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym__attribute_token1] = aux_sym__attribute_token1,
  [aux_sym__attribute_token2] = aux_sym__attribute_token2,
  [aux_sym__attribute_token3] = aux_sym__when_keyword_token1,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [sym_tag_name] = sym_tag_name,
  [sym_class] = sym_class,
  [sym_id] = sym_id,
  [aux_sym_js_attribute_name_token1] = aux_sym_js_attribute_name_token1,
  [aux_sym_js_attribute_name_token2] = aux_sym_js_attribute_name_token2,
  [aux_sym_js_attribute_name_token3] = aux_sym_js_attribute_name_token3,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_javascript_token1] = aux_sym__when_keyword_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_javascript_token2] = aux_sym__when_keyword_token1,
  [sym_content] = sym_content,
  [sym__comment_content] = sym__comment_content,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [sym__delimited_javascript] = sym__delimited_javascript,
  [sym__un_delimited_javascript_line] = sym__un_delimited_javascript_line,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_unbuffered_code_token1] = aux_sym_unbuffered_code_token1,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_source_file] = sym_source_file,
  [sym_doctype] = sym_doctype,
  [sym_pipe] = sym_pipe,
  [sym_conditional] = sym_conditional,
  [sym_case] = sym_case,
  [sym__when_content] = sym__when_content,
  [sym__when_keyword] = sym__when_keyword,
  [sym_when] = sym_when,
  [sym_unescaped_buffered_code] = sym_unescaped_buffered_code,
  [sym_buffered_code] = sym_buffered_code,
  [sym_tag] = sym_tag,
  [sym__content_after_dot] = sym__content_after_dot,
  [sym_attributes] = sym_attributes,
  [sym_attribute] = sym_attribute,
  [sym__attribute] = sym__attribute,
  [sym__js_attribute] = sym__js_attribute,
  [sym_children] = sym_children,
  [sym__children_choice] = sym__children_choice,
  [sym_comment] = sym_comment,
  [sym_js_attribute_name] = sym_attribute_name,
  [sym_attribute_name] = sym_attribute_name,
  [sym_quoted_javascript] = sym_quoted_javascript,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [aux_sym__content_or_javascript] = aux_sym__content_or_javascript,
  [sym__un_delimited_javascript] = aux_sym__when_keyword_token1,
  [aux_sym__un_delimited_javascript_multiline] = aux_sym__un_delimited_javascript_multiline,
  [sym__single_line_buf_code] = sym__single_line_buf_code,
  [sym__multi_line_buf_code] = sym__multi_line_buf_code,
  [sym_unbuffered_code] = sym_unbuffered_code,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_conditional_repeat1] = aux_sym_conditional_repeat1,
  [aux_sym_case_repeat1] = aux_sym_case_repeat1,
  [aux_sym_tag_repeat1] = aux_sym_tag_repeat1,
  [aux_sym__content_after_dot_repeat1] = aux_sym__content_after_dot_repeat1,
  [aux_sym_attributes_repeat1] = aux_sym_attributes_repeat1,
  [aux_sym__attribute_repeat1] = aux_sym__attribute_repeat1,
  [aux_sym_children_repeat1] = aux_sym_children_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [alias_sym_attribute_modifier] = alias_sym_attribute_modifier,
  [alias_sym_attribute_value] = alias_sym_attribute_value,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_doctype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_html] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_strict] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_xml] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elseif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unless] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_when] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__when_keyword_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__attribute_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__attribute_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__attribute_token3] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_class] = {
    .visible = true,
    .named = true,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_js_attribute_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_js_attribute_name_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_js_attribute_name_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_javascript_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_javascript_token2] = {
    .visible = true,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [sym__comment_content] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym__delimited_javascript] = {
    .visible = false,
    .named = true,
  },
  [sym__un_delimited_javascript_line] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_unbuffered_code_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_doctype] = {
    .visible = true,
    .named = true,
  },
  [sym_pipe] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional] = {
    .visible = true,
    .named = true,
  },
  [sym_case] = {
    .visible = true,
    .named = true,
  },
  [sym__when_content] = {
    .visible = false,
    .named = true,
  },
  [sym__when_keyword] = {
    .visible = false,
    .named = true,
  },
  [sym_when] = {
    .visible = true,
    .named = true,
  },
  [sym_unescaped_buffered_code] = {
    .visible = true,
    .named = true,
  },
  [sym_buffered_code] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__content_after_dot] = {
    .visible = false,
    .named = true,
  },
  [sym_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__js_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym_children] = {
    .visible = true,
    .named = true,
  },
  [sym__children_choice] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_js_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_javascript] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__content_or_javascript] = {
    .visible = false,
    .named = false,
  },
  [sym__un_delimited_javascript] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__un_delimited_javascript_multiline] = {
    .visible = false,
    .named = false,
  },
  [sym__single_line_buf_code] = {
    .visible = false,
    .named = true,
  },
  [sym__multi_line_buf_code] = {
    .visible = false,
    .named = true,
  },
  [sym_unbuffered_code] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conditional_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_case_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__content_after_dot_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__attribute_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_children_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_attribute_modifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = aux_sym__when_keyword_token1,
  },
  [2] = {
    [1] = alias_sym_attribute_modifier,
  },
  [3] = {
    [0] = aux_sym__when_keyword_token1,
  },
  [4] = {
    [3] = sym_children,
  },
  [5] = {
    [1] = alias_sym_attribute_value,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__un_delimited_javascript_multiline, 2,
    aux_sym__un_delimited_javascript_multiline,
    aux_sym__when_keyword_token1,
  aux_sym__content_after_dot_repeat1, 2,
    aux_sym__content_after_dot_repeat1,
    sym_children,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(69);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '"') ADVANCE(218);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(215);
      if (lookahead == '(') ADVANCE(117);
      if (lookahead == ')') ADVANCE(119);
      if (lookahead == '*') ADVANCE(61);
      if (lookahead == ',') ADVANCE(118);
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ':') ADVANCE(99);
      if (lookahead == '=') ADVANCE(111);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == 'c') ADVANCE(17);
      if (lookahead == 'd') ADVANCE(24);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'h') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(27);
      if (lookahead == 's') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(41);
      if (lookahead == 'w') ADVANCE(30);
      if (lookahead == 'x') ADVANCE(38);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(221);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(244);
      if (lookahead != 0) ADVANCE(247);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(236);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '(') ADVANCE(117);
      if (lookahead == ')') ADVANCE(119);
      if (lookahead == ',') ADVANCE(118);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == ':') ADVANCE(99);
      if (lookahead == '=') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(114);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == ')') ADVANCE(119);
      if (lookahead == ',') ADVANCE(118);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == ':') ADVANCE(99);
      if (lookahead == '=') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(224);
      if (lookahead != 0) ADVANCE(232);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '=') ADVANCE(111);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(218);
      if (lookahead == '\'') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(216);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == ')') ADVANCE(119);
      if (lookahead == '*') ADVANCE(61);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 13:
      if (lookahead == ')') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(125);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(108);
      END_STATE();
    case 16:
      if (lookahead == ']') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(80);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(84);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(18);
      END_STATE();
    case 30:
      if (lookahead == 'h') ADVANCE(25);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 42:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 53:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 54:
      if (lookahead == 'y') ADVANCE(42);
      END_STATE();
    case 55:
      if (lookahead == '{') ADVANCE(233);
      END_STATE();
    case 56:
      if (lookahead == '}') ADVANCE(234);
      END_STATE();
    case 57:
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 58:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(124);
      END_STATE();
    case 59:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 60:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 61:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 62:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 63:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 64:
      if (eof) ADVANCE(69);
      if (lookahead == '\n') SKIP(64)
      if (lookahead == '!') ADVANCE(240);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == '/') ADVANCE(239);
      if (lookahead == '=') ADVANCE(112);
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead == 'd') ADVANCE(145);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == 'u') ADVANCE(170);
      if (lookahead == 'w') ADVANCE(157);
      if (lookahead == '|') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0) ADVANCE(247);
      END_STATE();
    case 65:
      if (eof) ADVANCE(69);
      if (lookahead == '\n') SKIP(65)
      if (lookahead == '!') ADVANCE(240);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == '/') ADVANCE(239);
      if (lookahead == '=') ADVANCE(112);
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == 'u') ADVANCE(170);
      if (lookahead == '|') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0) ADVANCE(247);
      END_STATE();
    case 66:
      if (eof) ADVANCE(69);
      if (lookahead == ' ') SKIP(66)
      if (lookahead == '!') ADVANCE(226);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(230);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead == '=') ADVANCE(113);
      if (lookahead == 'c') ADVANCE(132);
      if (lookahead == 'd') ADVANCE(174);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == 'u') ADVANCE(171);
      if (lookahead == '|') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0) ADVANCE(232);
      END_STATE();
    case 67:
      if (eof) ADVANCE(69);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ':') ADVANCE(99);
      if (lookahead == '=') ADVANCE(111);
      if (lookahead == 'c') ADVANCE(128);
      if (lookahead == 'd') ADVANCE(142);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead == 'u') ADVANCE(169);
      if (lookahead == 'w') ADVANCE(158);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(67)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 68:
      if (eof) ADVANCE(69);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '=') ADVANCE(111);
      if (lookahead == 'c') ADVANCE(128);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead == 'u') ADVANCE(169);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(68)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_doctype);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_strict);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(242);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(228);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__when_keyword_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__when_keyword_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym__attribute_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__attribute_token2);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__attribute_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(121);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__attribute_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__attribute_token3);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(190);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(192);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == 'o') ADVANCE(133);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == 'o') ADVANCE(134);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(129);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(131);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(146);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(143);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(191);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(193);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(144);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(151);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(181);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(189);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(101);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(102);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(133);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(134);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(135);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(138);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(141);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(150);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(136);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(139);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(90);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(179);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(140);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(148);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(149);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(197);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(199);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(159);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(160);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(176);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(177);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(208);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_js_attribute_name_token1);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_js_attribute_name_token2);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_js_attribute_name_token3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(217);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(220);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(223);
      if (lookahead == ' ') ADVANCE(223);
      if (lookahead == '!') ADVANCE(226);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(230);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead == '=') ADVANCE(113);
      if (lookahead == 'c') ADVANCE(132);
      if (lookahead == 'd') ADVANCE(174);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == 'u') ADVANCE(171);
      if (lookahead == '|') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0) ADVANCE(232);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(224);
      if (lookahead == ' ') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(224);
      if (lookahead != 0) ADVANCE(232);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '/') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == 'i') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(208);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__delimited_javascript);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(236);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__delimited_javascript);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(240);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == '/') ADVANCE(239);
      if (lookahead == '=') ADVANCE(112);
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead == 'd') ADVANCE(145);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == 'u') ADVANCE(170);
      if (lookahead == 'w') ADVANCE(157);
      if (lookahead == '|') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(240);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(245);
      if (lookahead == '/') ADVANCE(239);
      if (lookahead == '=') ADVANCE(112);
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == 'u') ADVANCE(170);
      if (lookahead == '|') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '=') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'f') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'i') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_unbuffered_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(251);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 68},
  [2] = {.lex_state = 68},
  [3] = {.lex_state = 68},
  [4] = {.lex_state = 67, .external_lex_state = 2},
  [5] = {.lex_state = 67, .external_lex_state = 2},
  [6] = {.lex_state = 67, .external_lex_state = 3},
  [7] = {.lex_state = 67, .external_lex_state = 2},
  [8] = {.lex_state = 67, .external_lex_state = 2},
  [9] = {.lex_state = 68, .external_lex_state = 2},
  [10] = {.lex_state = 67, .external_lex_state = 2},
  [11] = {.lex_state = 67, .external_lex_state = 4},
  [12] = {.lex_state = 67, .external_lex_state = 4},
  [13] = {.lex_state = 67, .external_lex_state = 4},
  [14] = {.lex_state = 67, .external_lex_state = 4},
  [15] = {.lex_state = 67},
  [16] = {.lex_state = 67, .external_lex_state = 4},
  [17] = {.lex_state = 67, .external_lex_state = 3},
  [18] = {.lex_state = 67, .external_lex_state = 4},
  [19] = {.lex_state = 67, .external_lex_state = 2},
  [20] = {.lex_state = 64, .external_lex_state = 2},
  [21] = {.lex_state = 68, .external_lex_state = 2},
  [22] = {.lex_state = 68, .external_lex_state = 2},
  [23] = {.lex_state = 64, .external_lex_state = 2},
  [24] = {.lex_state = 67},
  [25] = {.lex_state = 67, .external_lex_state = 2},
  [26] = {.lex_state = 67, .external_lex_state = 4},
  [27] = {.lex_state = 67, .external_lex_state = 4},
  [28] = {.lex_state = 64, .external_lex_state = 2},
  [29] = {.lex_state = 67, .external_lex_state = 2},
  [30] = {.lex_state = 67, .external_lex_state = 2},
  [31] = {.lex_state = 68, .external_lex_state = 4},
  [32] = {.lex_state = 67, .external_lex_state = 2},
  [33] = {.lex_state = 68, .external_lex_state = 4},
  [34] = {.lex_state = 66, .external_lex_state = 2},
  [35] = {.lex_state = 66, .external_lex_state = 2},
  [36] = {.lex_state = 68, .external_lex_state = 4},
  [37] = {.lex_state = 67, .external_lex_state = 2},
  [38] = {.lex_state = 67, .external_lex_state = 2},
  [39] = {.lex_state = 67, .external_lex_state = 2},
  [40] = {.lex_state = 65, .external_lex_state = 2},
  [41] = {.lex_state = 68, .external_lex_state = 4},
  [42] = {.lex_state = 67, .external_lex_state = 2},
  [43] = {.lex_state = 67, .external_lex_state = 2},
  [44] = {.lex_state = 66, .external_lex_state = 2},
  [45] = {.lex_state = 65, .external_lex_state = 2},
  [46] = {.lex_state = 66, .external_lex_state = 2},
  [47] = {.lex_state = 66, .external_lex_state = 2},
  [48] = {.lex_state = 67, .external_lex_state = 2},
  [49] = {.lex_state = 67, .external_lex_state = 2},
  [50] = {.lex_state = 67, .external_lex_state = 2},
  [51] = {.lex_state = 67, .external_lex_state = 2},
  [52] = {.lex_state = 67, .external_lex_state = 2},
  [53] = {.lex_state = 67, .external_lex_state = 2},
  [54] = {.lex_state = 67, .external_lex_state = 2},
  [55] = {.lex_state = 67, .external_lex_state = 2},
  [56] = {.lex_state = 68, .external_lex_state = 4},
  [57] = {.lex_state = 67, .external_lex_state = 2},
  [58] = {.lex_state = 67, .external_lex_state = 2},
  [59] = {.lex_state = 67, .external_lex_state = 2},
  [60] = {.lex_state = 67, .external_lex_state = 2},
  [61] = {.lex_state = 67, .external_lex_state = 2},
  [62] = {.lex_state = 67, .external_lex_state = 2},
  [63] = {.lex_state = 68, .external_lex_state = 4},
  [64] = {.lex_state = 67, .external_lex_state = 2},
  [65] = {.lex_state = 67, .external_lex_state = 2},
  [66] = {.lex_state = 65, .external_lex_state = 2},
  [67] = {.lex_state = 68, .external_lex_state = 5},
  [68] = {.lex_state = 68, .external_lex_state = 5},
  [69] = {.lex_state = 66, .external_lex_state = 2},
  [70] = {.lex_state = 68, .external_lex_state = 5},
  [71] = {.lex_state = 68, .external_lex_state = 4},
  [72] = {.lex_state = 68},
  [73] = {.lex_state = 68},
  [74] = {.lex_state = 68, .external_lex_state = 5},
  [75] = {.lex_state = 67},
  [76] = {.lex_state = 68, .external_lex_state = 5},
  [77] = {.lex_state = 68},
  [78] = {.lex_state = 67},
  [79] = {.lex_state = 68, .external_lex_state = 5},
  [80] = {.lex_state = 68, .external_lex_state = 2},
  [81] = {.lex_state = 68, .external_lex_state = 2},
  [82] = {.lex_state = 68, .external_lex_state = 2},
  [83] = {.lex_state = 68, .external_lex_state = 2},
  [84] = {.lex_state = 68, .external_lex_state = 2},
  [85] = {.lex_state = 68, .external_lex_state = 2},
  [86] = {.lex_state = 68, .external_lex_state = 2},
  [87] = {.lex_state = 68, .external_lex_state = 2},
  [88] = {.lex_state = 68, .external_lex_state = 2},
  [89] = {.lex_state = 68, .external_lex_state = 2},
  [90] = {.lex_state = 68, .external_lex_state = 2},
  [91] = {.lex_state = 68, .external_lex_state = 2},
  [92] = {.lex_state = 68, .external_lex_state = 2},
  [93] = {.lex_state = 68, .external_lex_state = 2},
  [94] = {.lex_state = 68, .external_lex_state = 2},
  [95] = {.lex_state = 68, .external_lex_state = 5},
  [96] = {.lex_state = 68, .external_lex_state = 2},
  [97] = {.lex_state = 68, .external_lex_state = 2},
  [98] = {.lex_state = 68, .external_lex_state = 5},
  [99] = {.lex_state = 68, .external_lex_state = 2},
  [100] = {.lex_state = 68, .external_lex_state = 5},
  [101] = {.lex_state = 68, .external_lex_state = 2},
  [102] = {.lex_state = 68},
  [103] = {.lex_state = 68},
  [104] = {.lex_state = 68},
  [105] = {.lex_state = 68},
  [106] = {.lex_state = 68},
  [107] = {.lex_state = 68},
  [108] = {.lex_state = 68},
  [109] = {.lex_state = 68},
  [110] = {.lex_state = 68},
  [111] = {.lex_state = 68},
  [112] = {.lex_state = 68},
  [113] = {.lex_state = 68},
  [114] = {.lex_state = 68},
  [115] = {.lex_state = 68},
  [116] = {.lex_state = 68},
  [117] = {.lex_state = 68},
  [118] = {.lex_state = 68},
  [119] = {.lex_state = 68},
  [120] = {.lex_state = 68},
  [121] = {.lex_state = 68},
  [122] = {.lex_state = 68},
  [123] = {.lex_state = 68},
  [124] = {.lex_state = 68},
  [125] = {.lex_state = 5, .external_lex_state = 6},
  [126] = {.lex_state = 5, .external_lex_state = 6},
  [127] = {.lex_state = 5, .external_lex_state = 6},
  [128] = {.lex_state = 5, .external_lex_state = 6},
  [129] = {.lex_state = 5, .external_lex_state = 6},
  [130] = {.lex_state = 5, .external_lex_state = 6},
  [131] = {.lex_state = 5, .external_lex_state = 6},
  [132] = {.lex_state = 5, .external_lex_state = 6},
  [133] = {.lex_state = 8},
  [134] = {.lex_state = 8},
  [135] = {.lex_state = 8},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 8},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 8},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 12},
  [146] = {.lex_state = 12},
  [147] = {.lex_state = 12},
  [148] = {.lex_state = 5, .external_lex_state = 6},
  [149] = {.lex_state = 8, .external_lex_state = 2},
  [150] = {.lex_state = 6, .external_lex_state = 6},
  [151] = {.lex_state = 6, .external_lex_state = 6},
  [152] = {.lex_state = 6, .external_lex_state = 6},
  [153] = {.lex_state = 6, .external_lex_state = 6},
  [154] = {.lex_state = 8, .external_lex_state = 2},
  [155] = {.lex_state = 6, .external_lex_state = 6},
  [156] = {.lex_state = 6, .external_lex_state = 6},
  [157] = {.lex_state = 6, .external_lex_state = 6},
  [158] = {.lex_state = 6, .external_lex_state = 6},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 8, .external_lex_state = 4},
  [164] = {.lex_state = 8, .external_lex_state = 4},
  [165] = {.lex_state = 8, .external_lex_state = 4},
  [166] = {.lex_state = 8, .external_lex_state = 4},
  [167] = {.lex_state = 8, .external_lex_state = 4},
  [168] = {.lex_state = 8, .external_lex_state = 4},
  [169] = {.lex_state = 6},
  [170] = {.lex_state = 6, .external_lex_state = 6},
  [171] = {.lex_state = 6, .external_lex_state = 6},
  [172] = {.lex_state = 8, .external_lex_state = 2},
  [173] = {.lex_state = 6, .external_lex_state = 6},
  [174] = {.lex_state = 8, .external_lex_state = 4},
  [175] = {.lex_state = 8, .external_lex_state = 2},
  [176] = {.lex_state = 6},
  [177] = {.lex_state = 6},
  [178] = {.lex_state = 8, .external_lex_state = 2},
  [179] = {.lex_state = 6},
  [180] = {.lex_state = 6},
  [181] = {.lex_state = 8, .external_lex_state = 2},
  [182] = {.lex_state = 8, .external_lex_state = 2},
  [183] = {.lex_state = 8, .external_lex_state = 2},
  [184] = {.lex_state = 8, .external_lex_state = 2},
  [185] = {.lex_state = 12},
  [186] = {.lex_state = 1, .external_lex_state = 2},
  [187] = {.lex_state = 8, .external_lex_state = 2},
  [188] = {.lex_state = 8, .external_lex_state = 2},
  [189] = {.lex_state = 8, .external_lex_state = 2},
  [190] = {.lex_state = 8, .external_lex_state = 2},
  [191] = {.lex_state = 6},
  [192] = {.lex_state = 8, .external_lex_state = 2},
  [193] = {.lex_state = 8},
  [194] = {.lex_state = 8},
  [195] = {.lex_state = 1, .external_lex_state = 2},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 6},
  [198] = {.lex_state = 8, .external_lex_state = 2},
  [199] = {.lex_state = 8, .external_lex_state = 2},
  [200] = {.lex_state = 8, .external_lex_state = 2},
  [201] = {.lex_state = 8},
  [202] = {.lex_state = 8, .external_lex_state = 2},
  [203] = {.lex_state = 8, .external_lex_state = 2},
  [204] = {.lex_state = 1, .external_lex_state = 2},
  [205] = {.lex_state = 8},
  [206] = {.lex_state = 8, .external_lex_state = 2},
  [207] = {.lex_state = 8, .external_lex_state = 2},
  [208] = {.lex_state = 6},
  [209] = {.lex_state = 8, .external_lex_state = 2},
  [210] = {.lex_state = 1, .external_lex_state = 2},
  [211] = {.lex_state = 1, .external_lex_state = 2},
  [212] = {.lex_state = 8, .external_lex_state = 2},
  [213] = {.lex_state = 8},
  [214] = {.lex_state = 8, .external_lex_state = 2},
  [215] = {.lex_state = 8},
  [216] = {.lex_state = 8},
  [217] = {.lex_state = 1, .external_lex_state = 6},
  [218] = {.lex_state = 1, .external_lex_state = 6},
  [219] = {.lex_state = 1, .external_lex_state = 6},
  [220] = {.lex_state = 1, .external_lex_state = 6},
  [221] = {.lex_state = 8},
  [222] = {.lex_state = 9},
  [223] = {.lex_state = 1, .external_lex_state = 6},
  [224] = {.lex_state = 8},
  [225] = {.lex_state = 1, .external_lex_state = 6},
  [226] = {.lex_state = 8},
  [227] = {.lex_state = 1, .external_lex_state = 6},
  [228] = {.lex_state = 1, .external_lex_state = 6},
  [229] = {.lex_state = 1, .external_lex_state = 6},
  [230] = {.lex_state = 8},
  [231] = {.lex_state = 1, .external_lex_state = 6},
  [232] = {.lex_state = 1},
  [233] = {.lex_state = 1, .external_lex_state = 6},
  [234] = {.lex_state = 8},
  [235] = {.lex_state = 8},
  [236] = {.lex_state = 1, .external_lex_state = 6},
  [237] = {.lex_state = 1, .external_lex_state = 6},
  [238] = {.lex_state = 9},
  [239] = {.lex_state = 8},
  [240] = {.lex_state = 1, .external_lex_state = 6},
  [241] = {.lex_state = 1},
  [242] = {.lex_state = 1, .external_lex_state = 6},
  [243] = {.lex_state = 1, .external_lex_state = 6},
  [244] = {.lex_state = 8},
  [245] = {.lex_state = 1},
  [246] = {.lex_state = 8},
  [247] = {.lex_state = 8},
  [248] = {.lex_state = 1, .external_lex_state = 6},
  [249] = {.lex_state = 1, .external_lex_state = 6},
  [250] = {.lex_state = 2, .external_lex_state = 6},
  [251] = {.lex_state = 8},
  [252] = {.lex_state = 1, .external_lex_state = 6},
  [253] = {.lex_state = 1, .external_lex_state = 6},
  [254] = {.lex_state = 1},
  [255] = {.lex_state = 1, .external_lex_state = 6},
  [256] = {.lex_state = 1, .external_lex_state = 6},
  [257] = {.lex_state = 2, .external_lex_state = 6},
  [258] = {.lex_state = 5},
  [259] = {.lex_state = 1},
  [260] = {.lex_state = 1},
  [261] = {.lex_state = 2},
  [262] = {.lex_state = 1},
  [263] = {.lex_state = 2},
  [264] = {.lex_state = 1},
  [265] = {.lex_state = 5},
  [266] = {.lex_state = 5},
  [267] = {.lex_state = 2},
  [268] = {.lex_state = 1},
  [269] = {.lex_state = 1},
  [270] = {.lex_state = 5},
  [271] = {.lex_state = 5},
  [272] = {.lex_state = 1, .external_lex_state = 6},
  [273] = {.lex_state = 1},
  [274] = {.lex_state = 2},
  [275] = {.lex_state = 2},
  [276] = {.lex_state = 1},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 1},
  [279] = {.lex_state = 5},
  [280] = {.lex_state = 5},
  [281] = {.lex_state = 5},
  [282] = {.lex_state = 1, .external_lex_state = 2},
  [283] = {.lex_state = 8},
  [284] = {.lex_state = 1},
  [285] = {.lex_state = 2},
  [286] = {.lex_state = 5},
  [287] = {.lex_state = 5},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 5},
  [290] = {.lex_state = 2},
  [291] = {.lex_state = 2},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 1},
  [294] = {.lex_state = 5},
  [295] = {.lex_state = 2},
  [296] = {.lex_state = 2},
  [297] = {.lex_state = 1},
  [298] = {.lex_state = 10},
  [299] = {.lex_state = 11},
  [300] = {.lex_state = 5},
  [301] = {.lex_state = 2},
  [302] = {.lex_state = 7, .external_lex_state = 6},
  [303] = {.lex_state = 10},
  [304] = {.lex_state = 11},
  [305] = {.lex_state = 0, .external_lex_state = 6},
  [306] = {.lex_state = 2},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0, .external_lex_state = 6},
  [309] = {.lex_state = 0, .external_lex_state = 6},
  [310] = {.lex_state = 58},
  [311] = {.lex_state = 0, .external_lex_state = 6},
  [312] = {.lex_state = 3},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 251},
  [315] = {.lex_state = 251},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 58},
  [318] = {.lex_state = 0, .external_lex_state = 5},
  [319] = {.lex_state = 0, .external_lex_state = 6},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0, .external_lex_state = 6},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0, .external_lex_state = 5},
  [325] = {.lex_state = 0, .external_lex_state = 6},
  [326] = {.lex_state = 0, .external_lex_state = 6},
  [327] = {.lex_state = 0, .external_lex_state = 5},
  [328] = {.lex_state = 0, .external_lex_state = 5},
  [329] = {.lex_state = 0, .external_lex_state = 6},
  [330] = {.lex_state = 12},
  [331] = {.lex_state = 4},
  [332] = {.lex_state = 0, .external_lex_state = 5},
  [333] = {.lex_state = 0, .external_lex_state = 5},
  [334] = {.lex_state = 0, .external_lex_state = 5},
  [335] = {.lex_state = 0, .external_lex_state = 6},
  [336] = {.lex_state = 0, .external_lex_state = 6},
  [337] = {.lex_state = 0, .external_lex_state = 6},
};

enum {
  ts_external_token__newline = 0,
  ts_external_token__indent = 1,
  ts_external_token__dedent = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
};

static const bool ts_external_scanner_states[7][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
  [2] = {
    [ts_external_token__dedent] = true,
  },
  [3] = {
    [ts_external_token__newline] = true,
    [ts_external_token__dedent] = true,
  },
  [4] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
  [5] = {
    [ts_external_token__indent] = true,
  },
  [6] = {
    [ts_external_token__newline] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_doctype] = ACTIONS(1),
    [anon_sym_html] = ACTIONS(1),
    [anon_sym_strict] = ACTIONS(1),
    [anon_sym_xml] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_elseif] = ACTIONS(1),
    [anon_sym_unless] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_when] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [sym_class] = ACTIONS(1),
    [sym_id] = ACTIONS(1),
    [aux_sym_js_attribute_name_token1] = ACTIONS(1),
    [aux_sym_js_attribute_name_token3] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(316),
    [sym_doctype] = STATE(2),
    [sym_pipe] = STATE(2),
    [sym_conditional] = STATE(2),
    [sym_case] = STATE(2),
    [sym_unescaped_buffered_code] = STATE(2),
    [sym_buffered_code] = STATE(2),
    [sym_tag] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_unbuffered_code] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_doctype] = ACTIONS(5),
    [anon_sym_PIPE] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_elseif] = ACTIONS(11),
    [anon_sym_unless] = ACTIONS(9),
    [anon_sym_else] = ACTIONS(13),
    [anon_sym_case] = ACTIONS(15),
    [anon_sym_BANG_EQ] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(19),
    [anon_sym_SLASH_SLASH] = ACTIONS(21),
    [sym_tag_name] = ACTIONS(23),
    [sym_class] = ACTIONS(25),
    [sym_id] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(5), 1,
      anon_sym_doctype,
    ACTIONS(7), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_elseif,
    ACTIONS(13), 1,
      anon_sym_else,
    ACTIONS(15), 1,
      anon_sym_case,
    ACTIONS(17), 1,
      anon_sym_BANG_EQ,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      sym_tag_name,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(25), 2,
      sym_class,
      sym_id,
    STATE(3), 10,
      sym_doctype,
      sym_pipe,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_tag,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_source_file_repeat1,
  [54] = 14,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_doctype,
    ACTIONS(36), 1,
      anon_sym_PIPE,
    ACTIONS(42), 1,
      anon_sym_elseif,
    ACTIONS(45), 1,
      anon_sym_else,
    ACTIONS(48), 1,
      anon_sym_case,
    ACTIONS(51), 1,
      anon_sym_BANG_EQ,
    ACTIONS(54), 1,
      anon_sym_EQ,
    ACTIONS(57), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(60), 1,
      sym_tag_name,
    ACTIONS(66), 1,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(63), 2,
      sym_class,
      sym_id,
    STATE(3), 10,
      sym_doctype,
      sym_pipe,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_tag,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_source_file_repeat1,
  [108] = 6,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(76), 1,
      sym_tag_name,
    ACTIONS(79), 2,
      sym_class,
      sym_id,
    STATE(4), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(69), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
    ACTIONS(71), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
  [143] = 7,
    ACTIONS(86), 1,
      anon_sym_PIPE,
    ACTIONS(88), 1,
      sym_tag_name,
    ACTIONS(92), 1,
      sym__dedent,
    ACTIONS(90), 2,
      sym_class,
      sym_id,
    STATE(4), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(82), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
    ACTIONS(84), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
  [180] = 6,
    ACTIONS(98), 1,
      anon_sym_COLON,
    ACTIONS(100), 1,
      sym__newline,
    ACTIONS(102), 1,
      sym__dedent,
    STATE(30), 1,
      sym__when_content,
    ACTIONS(96), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(94), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [214] = 7,
    ACTIONS(88), 1,
      sym_tag_name,
    ACTIONS(108), 1,
      anon_sym_DASH,
    STATE(38), 1,
      sym_unbuffered_code,
    ACTIONS(90), 2,
      sym_class,
      sym_id,
    STATE(10), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(104), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
    ACTIONS(106), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
  [250] = 7,
    ACTIONS(88), 1,
      sym_tag_name,
    ACTIONS(108), 1,
      anon_sym_DASH,
    STATE(37), 1,
      sym_unbuffered_code,
    ACTIONS(90), 2,
      sym_class,
      sym_id,
    STATE(19), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(110), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
    ACTIONS(112), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
  [286] = 7,
    ACTIONS(114), 1,
      anon_sym_PIPE,
    ACTIONS(116), 1,
      sym_tag_name,
    ACTIONS(120), 1,
      sym__dedent,
    ACTIONS(118), 2,
      sym_class,
      sym_id,
    STATE(22), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(84), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
    ACTIONS(82), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [321] = 5,
    ACTIONS(88), 1,
      sym_tag_name,
    ACTIONS(90), 2,
      sym_class,
      sym_id,
    STATE(25), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(112), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(110), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [352] = 4,
    ACTIONS(126), 1,
      sym__indent,
    STATE(60), 1,
      sym_children,
    ACTIONS(124), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(122), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [381] = 4,
    ACTIONS(132), 1,
      sym__indent,
    STATE(53), 1,
      sym_children,
    ACTIONS(130), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(128), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [410] = 4,
    ACTIONS(132), 1,
      sym__indent,
    STATE(50), 1,
      sym_children,
    ACTIONS(136), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(134), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [439] = 4,
    ACTIONS(142), 1,
      sym__indent,
    STATE(62), 1,
      sym_children,
    ACTIONS(140), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(138), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [468] = 6,
    ACTIONS(148), 1,
      anon_sym_when,
    ACTIONS(151), 1,
      anon_sym_default,
    STATE(6), 1,
      sym__when_keyword,
    STATE(15), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(146), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(144), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [501] = 4,
    ACTIONS(158), 1,
      sym__indent,
    STATE(49), 1,
      sym_children,
    ACTIONS(156), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(154), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [530] = 2,
    ACTIONS(162), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(160), 12,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [555] = 4,
    ACTIONS(132), 1,
      sym__indent,
    STATE(60), 1,
      sym_children,
    ACTIONS(124), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(122), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [584] = 5,
    ACTIONS(88), 1,
      sym_tag_name,
    ACTIONS(90), 2,
      sym_class,
      sym_id,
    STATE(25), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(166), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(164), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [615] = 4,
    ACTIONS(172), 1,
      sym__un_delimited_javascript_line,
    STATE(23), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(168), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(170), 16,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [644] = 7,
    ACTIONS(114), 1,
      anon_sym_PIPE,
    ACTIONS(116), 1,
      sym_tag_name,
    ACTIONS(174), 1,
      sym__dedent,
    ACTIONS(118), 2,
      sym_class,
      sym_id,
    STATE(22), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(84), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
    ACTIONS(82), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [679] = 6,
    ACTIONS(176), 1,
      anon_sym_PIPE,
    ACTIONS(179), 1,
      sym_tag_name,
    ACTIONS(182), 2,
      sym_class,
      sym_id,
    STATE(22), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(71), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
    ACTIONS(69), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [712] = 4,
    ACTIONS(189), 1,
      sym__un_delimited_javascript_line,
    STATE(23), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(185), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(187), 16,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [741] = 6,
    ACTIONS(196), 1,
      anon_sym_when,
    ACTIONS(198), 1,
      anon_sym_default,
    STATE(6), 1,
      sym__when_keyword,
    STATE(15), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(194), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(192), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [774] = 5,
    ACTIONS(204), 1,
      sym_tag_name,
    ACTIONS(207), 2,
      sym_class,
      sym_id,
    STATE(25), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(202), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(200), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [805] = 3,
    ACTIONS(214), 1,
      sym__indent,
    ACTIONS(212), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(210), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [831] = 4,
    ACTIONS(220), 1,
      sym__indent,
    ACTIONS(222), 1,
      sym__dedent,
    ACTIONS(218), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(216), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [859] = 2,
    ACTIONS(224), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(226), 17,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      sym__un_delimited_javascript_line,
      anon_sym_DASH,
  [883] = 2,
    ACTIONS(230), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(228), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [906] = 3,
    ACTIONS(222), 1,
      sym__dedent,
    ACTIONS(218), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(216), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [931] = 4,
    ACTIONS(232), 1,
      sym__indent,
    STATE(97), 1,
      sym_children,
    ACTIONS(136), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(134), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [958] = 2,
    ACTIONS(236), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(234), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [981] = 4,
    ACTIONS(238), 1,
      sym__indent,
    STATE(84), 1,
      sym_children,
    ACTIONS(140), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(138), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1008] = 5,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    ACTIONS(244), 1,
      sym__comment_content,
    ACTIONS(246), 1,
      sym__dedent,
    STATE(35), 1,
      aux_sym_comment_repeat1,
    ACTIONS(242), 14,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1037] = 4,
    ACTIONS(252), 1,
      sym__comment_content,
    STATE(35), 1,
      aux_sym_comment_repeat1,
    ACTIONS(248), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(250), 14,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1064] = 4,
    ACTIONS(255), 1,
      sym__indent,
    STATE(80), 1,
      sym_children,
    ACTIONS(156), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(154), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1091] = 2,
    ACTIONS(166), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(164), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1114] = 2,
    ACTIONS(112), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(110), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1137] = 2,
    ACTIONS(259), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(257), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1160] = 4,
    ACTIONS(261), 1,
      sym__un_delimited_javascript_line,
    STATE(40), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(185), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(187), 14,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1187] = 4,
    ACTIONS(232), 1,
      sym__indent,
    STATE(96), 1,
      sym_children,
    ACTIONS(130), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(128), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1214] = 2,
    ACTIONS(124), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(122), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1237] = 2,
    ACTIONS(140), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(138), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1260] = 5,
    ACTIONS(244), 1,
      sym__comment_content,
    ACTIONS(264), 1,
      ts_builtin_sym_end,
    ACTIONS(268), 1,
      sym__dedent,
    STATE(46), 1,
      aux_sym_comment_repeat1,
    ACTIONS(266), 14,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1289] = 4,
    ACTIONS(270), 1,
      sym__un_delimited_javascript_line,
    STATE(40), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(168), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(170), 14,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1316] = 5,
    ACTIONS(244), 1,
      sym__comment_content,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
    ACTIONS(276), 1,
      sym__dedent,
    STATE(35), 1,
      aux_sym_comment_repeat1,
    ACTIONS(274), 14,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1345] = 5,
    ACTIONS(244), 1,
      sym__comment_content,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
    ACTIONS(276), 1,
      sym__dedent,
    STATE(34), 1,
      aux_sym_comment_repeat1,
    ACTIONS(274), 14,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1374] = 3,
    ACTIONS(282), 1,
      sym__dedent,
    ACTIONS(280), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(278), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1399] = 2,
    ACTIONS(124), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(122), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1422] = 2,
    ACTIONS(286), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(284), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1445] = 2,
    ACTIONS(290), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(288), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1468] = 2,
    ACTIONS(136), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(134), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1491] = 2,
    ACTIONS(136), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(134), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1514] = 2,
    ACTIONS(294), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(292), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1537] = 2,
    ACTIONS(298), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(296), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1560] = 4,
    ACTIONS(300), 1,
      sym__indent,
    STATE(86), 1,
      sym_children,
    ACTIONS(124), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(122), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1587] = 2,
    ACTIONS(130), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(128), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1610] = 2,
    ACTIONS(304), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(302), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1633] = 2,
    ACTIONS(156), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(154), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1656] = 2,
    ACTIONS(130), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(128), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1679] = 2,
    ACTIONS(308), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(306), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1702] = 2,
    ACTIONS(156), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(154), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1725] = 4,
    ACTIONS(232), 1,
      sym__indent,
    STATE(86), 1,
      sym_children,
    ACTIONS(124), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(122), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1752] = 3,
    ACTIONS(314), 1,
      sym__dedent,
    ACTIONS(312), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(310), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1777] = 2,
    ACTIONS(318), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(316), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1800] = 2,
    ACTIONS(224), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(226), 15,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      sym__un_delimited_javascript_line,
      anon_sym_DASH,
  [1822] = 4,
    ACTIONS(320), 1,
      sym__indent,
    STATE(107), 1,
      sym_children,
    ACTIONS(136), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(134), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1848] = 4,
    ACTIONS(322), 1,
      sym__indent,
    STATE(104), 1,
      sym_children,
    ACTIONS(140), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(138), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1874] = 2,
    ACTIONS(248), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(250), 15,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      sym__comment_content,
      anon_sym_DASH,
  [1896] = 4,
    ACTIONS(320), 1,
      sym__indent,
    STATE(115), 1,
      sym_children,
    ACTIONS(130), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(128), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1922] = 3,
    ACTIONS(324), 1,
      sym__indent,
    ACTIONS(212), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(210), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1946] = 5,
    ACTIONS(326), 1,
      sym_tag_name,
    ACTIONS(329), 2,
      sym_class,
      sym_id,
    STATE(72), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(202), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
    ACTIONS(200), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [1974] = 3,
    STATE(72), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(334), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(332), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1998] = 4,
    ACTIONS(336), 1,
      sym__indent,
    STATE(111), 1,
      sym_children,
    ACTIONS(124), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(122), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2024] = 2,
    ACTIONS(218), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(216), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2046] = 4,
    ACTIONS(338), 1,
      sym__indent,
    STATE(118), 1,
      sym_children,
    ACTIONS(156), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(154), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2072] = 3,
    STATE(72), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(342), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(340), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2096] = 2,
    ACTIONS(346), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(344), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2118] = 4,
    ACTIONS(320), 1,
      sym__indent,
    STATE(111), 1,
      sym_children,
    ACTIONS(124), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(122), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2144] = 2,
    ACTIONS(124), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(122), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2165] = 3,
    ACTIONS(348), 1,
      sym__dedent,
    ACTIONS(280), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(278), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2188] = 2,
    ACTIONS(124), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(122), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2209] = 2,
    ACTIONS(136), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(134), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2230] = 2,
    ACTIONS(156), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(154), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2251] = 2,
    ACTIONS(308), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(306), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2272] = 2,
    ACTIONS(130), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(128), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2293] = 2,
    ACTIONS(130), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(128), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2314] = 2,
    ACTIONS(230), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(228), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2335] = 2,
    ACTIONS(259), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(257), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2356] = 2,
    ACTIONS(304), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(302), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2377] = 3,
    ACTIONS(350), 1,
      sym__dedent,
    ACTIONS(312), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(310), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2400] = 2,
    ACTIONS(156), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(154), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2421] = 2,
    ACTIONS(140), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(138), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2442] = 2,
    ACTIONS(318), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(316), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2463] = 3,
    ACTIONS(356), 1,
      sym__indent,
    ACTIONS(354), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(352), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2486] = 2,
    ACTIONS(136), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(134), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2507] = 2,
    ACTIONS(286), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(284), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2528] = 3,
    ACTIONS(358), 1,
      sym__indent,
    ACTIONS(266), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(264), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2551] = 2,
    ACTIONS(294), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(292), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2572] = 3,
    ACTIONS(360), 1,
      sym__indent,
    ACTIONS(212), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(210), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2595] = 2,
    ACTIONS(298), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(296), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2616] = 2,
    ACTIONS(290), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(288), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2636] = 2,
    ACTIONS(364), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(362), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2656] = 2,
    ACTIONS(156), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(154), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2676] = 2,
    ACTIONS(242), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(240), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2696] = 2,
    ACTIONS(156), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(154), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2716] = 2,
    ACTIONS(286), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(284), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2736] = 2,
    ACTIONS(308), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(306), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2756] = 2,
    ACTIONS(140), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(138), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2776] = 2,
    ACTIONS(274), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(272), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2796] = 2,
    ACTIONS(130), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(128), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2816] = 2,
    ACTIONS(236), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(234), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2836] = 2,
    ACTIONS(124), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(122), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2856] = 2,
    ACTIONS(136), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(134), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2876] = 2,
    ACTIONS(136), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(134), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2896] = 2,
    ACTIONS(368), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(366), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2916] = 2,
    ACTIONS(230), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(228), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2936] = 2,
    ACTIONS(124), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(122), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2956] = 2,
    ACTIONS(304), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(302), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2976] = 2,
    ACTIONS(259), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(257), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2996] = 2,
    ACTIONS(130), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(128), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3016] = 2,
    ACTIONS(294), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(292), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3036] = 2,
    ACTIONS(298), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(296), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3056] = 2,
    ACTIONS(318), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(316), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3076] = 11,
    ACTIONS(370), 1,
      anon_sym_COLON,
    ACTIONS(372), 1,
      anon_sym_BANG_EQ,
    ACTIONS(374), 1,
      anon_sym_EQ,
    ACTIONS(376), 1,
      anon_sym_,
    ACTIONS(378), 1,
      anon_sym_DOT,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(384), 1,
      sym__newline,
    STATE(148), 1,
      aux_sym_tag_repeat1,
    STATE(157), 1,
      sym_attributes,
    ACTIONS(382), 2,
      sym_class,
      sym_id,
    STATE(92), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3113] = 11,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(386), 1,
      anon_sym_COLON,
    ACTIONS(388), 1,
      anon_sym_BANG_EQ,
    ACTIONS(390), 1,
      anon_sym_EQ,
    ACTIONS(392), 1,
      anon_sym_,
    ACTIONS(394), 1,
      anon_sym_DOT,
    ACTIONS(396), 1,
      sym__newline,
    STATE(148), 1,
      aux_sym_tag_repeat1,
    STATE(151), 1,
      sym_attributes,
    ACTIONS(382), 2,
      sym_class,
      sym_id,
    STATE(106), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3150] = 11,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      anon_sym_COLON,
    ACTIONS(400), 1,
      anon_sym_BANG_EQ,
    ACTIONS(402), 1,
      anon_sym_EQ,
    ACTIONS(404), 1,
      anon_sym_,
    ACTIONS(406), 1,
      anon_sym_DOT,
    ACTIONS(410), 1,
      sym__newline,
    STATE(129), 1,
      aux_sym_tag_repeat1,
    STATE(152), 1,
      sym_attributes,
    ACTIONS(408), 2,
      sym_class,
      sym_id,
    STATE(202), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3187] = 11,
    ACTIONS(372), 1,
      anon_sym_BANG_EQ,
    ACTIONS(374), 1,
      anon_sym_EQ,
    ACTIONS(378), 1,
      anon_sym_DOT,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_COLON,
    ACTIONS(414), 1,
      anon_sym_,
    ACTIONS(418), 1,
      sym__newline,
    STATE(125), 1,
      aux_sym_tag_repeat1,
    STATE(156), 1,
      sym_attributes,
    ACTIONS(416), 2,
      sym_class,
      sym_id,
    STATE(93), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3224] = 11,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      anon_sym_BANG_EQ,
    ACTIONS(402), 1,
      anon_sym_EQ,
    ACTIONS(406), 1,
      anon_sym_DOT,
    ACTIONS(420), 1,
      anon_sym_COLON,
    ACTIONS(422), 1,
      anon_sym_,
    ACTIONS(424), 1,
      sym__newline,
    STATE(148), 1,
      aux_sym_tag_repeat1,
    STATE(153), 1,
      sym_attributes,
    ACTIONS(382), 2,
      sym_class,
      sym_id,
    STATE(207), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3261] = 11,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(426), 1,
      anon_sym_COLON,
    ACTIONS(428), 1,
      anon_sym_BANG_EQ,
    ACTIONS(430), 1,
      anon_sym_EQ,
    ACTIONS(432), 1,
      anon_sym_,
    ACTIONS(434), 1,
      anon_sym_DOT,
    ACTIONS(436), 1,
      sym__newline,
    STATE(148), 1,
      aux_sym_tag_repeat1,
    STATE(150), 1,
      sym_attributes,
    ACTIONS(382), 2,
      sym_class,
      sym_id,
    STATE(59), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3298] = 11,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(428), 1,
      anon_sym_BANG_EQ,
    ACTIONS(430), 1,
      anon_sym_EQ,
    ACTIONS(434), 1,
      anon_sym_DOT,
    ACTIONS(438), 1,
      anon_sym_COLON,
    ACTIONS(440), 1,
      anon_sym_,
    ACTIONS(444), 1,
      sym__newline,
    STATE(130), 1,
      aux_sym_tag_repeat1,
    STATE(155), 1,
      sym_attributes,
    ACTIONS(442), 2,
      sym_class,
      sym_id,
    STATE(43), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3335] = 11,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_BANG_EQ,
    ACTIONS(390), 1,
      anon_sym_EQ,
    ACTIONS(394), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_COLON,
    ACTIONS(448), 1,
      anon_sym_,
    ACTIONS(452), 1,
      sym__newline,
    STATE(126), 1,
      aux_sym_tag_repeat1,
    STATE(158), 1,
      sym_attributes,
    ACTIONS(450), 2,
      sym_class,
      sym_id,
    STATE(109), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3372] = 6,
    ACTIONS(454), 1,
      anon_sym_PIPE,
    ACTIONS(456), 1,
      anon_sym_BANG_EQ,
    ACTIONS(458), 1,
      anon_sym_EQ,
    STATE(190), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(460), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(149), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3397] = 6,
    ACTIONS(86), 1,
      anon_sym_PIPE,
    ACTIONS(462), 1,
      anon_sym_BANG_EQ,
    ACTIONS(464), 1,
      anon_sym_EQ,
    STATE(52), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(90), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(5), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3422] = 6,
    ACTIONS(17), 1,
      anon_sym_BANG_EQ,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(114), 1,
      anon_sym_PIPE,
    STATE(114), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(118), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(9), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3447] = 6,
    ACTIONS(86), 1,
      anon_sym_PIPE,
    ACTIONS(462), 1,
      anon_sym_BANG_EQ,
    ACTIONS(464), 1,
      anon_sym_EQ,
    STATE(42), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(90), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(5), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3472] = 6,
    ACTIONS(114), 1,
      anon_sym_PIPE,
    ACTIONS(466), 1,
      anon_sym_BANG_EQ,
    ACTIONS(468), 1,
      anon_sym_EQ,
    STATE(82), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(118), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(21), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3497] = 6,
    ACTIONS(454), 1,
      anon_sym_PIPE,
    ACTIONS(456), 1,
      anon_sym_BANG_EQ,
    ACTIONS(458), 1,
      anon_sym_EQ,
    STATE(209), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(460), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(149), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3522] = 6,
    ACTIONS(86), 1,
      anon_sym_PIPE,
    ACTIONS(462), 1,
      anon_sym_BANG_EQ,
    ACTIONS(464), 1,
      anon_sym_EQ,
    STATE(57), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(90), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(5), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3547] = 6,
    ACTIONS(17), 1,
      anon_sym_BANG_EQ,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(114), 1,
      anon_sym_PIPE,
    STATE(121), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(118), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(9), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3572] = 6,
    ACTIONS(114), 1,
      anon_sym_PIPE,
    ACTIONS(466), 1,
      anon_sym_BANG_EQ,
    ACTIONS(468), 1,
      anon_sym_EQ,
    STATE(83), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(118), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(21), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3597] = 6,
    ACTIONS(454), 1,
      anon_sym_PIPE,
    ACTIONS(456), 1,
      anon_sym_BANG_EQ,
    ACTIONS(458), 1,
      anon_sym_EQ,
    STATE(200), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(460), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(149), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3622] = 6,
    ACTIONS(114), 1,
      anon_sym_PIPE,
    ACTIONS(466), 1,
      anon_sym_BANG_EQ,
    ACTIONS(468), 1,
      anon_sym_EQ,
    STATE(87), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(118), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(21), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3647] = 6,
    ACTIONS(17), 1,
      anon_sym_BANG_EQ,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(114), 1,
      anon_sym_PIPE,
    STATE(113), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(118), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(9), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3672] = 8,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    ACTIONS(472), 1,
      aux_sym__attribute_token1,
    STATE(146), 1,
      aux_sym_attributes_repeat1,
    STATE(177), 1,
      sym_js_attribute_name,
    STATE(180), 1,
      sym_attribute_name,
    STATE(271), 1,
      sym_attribute,
    STATE(266), 2,
      sym__attribute,
      sym__js_attribute,
    ACTIONS(474), 3,
      aux_sym_js_attribute_name_token1,
      aux_sym_js_attribute_name_token2,
      aux_sym_js_attribute_name_token3,
  [3700] = 8,
    ACTIONS(476), 1,
      anon_sym_RPAREN,
    ACTIONS(478), 1,
      aux_sym__attribute_token1,
    STATE(146), 1,
      aux_sym_attributes_repeat1,
    STATE(177), 1,
      sym_js_attribute_name,
    STATE(180), 1,
      sym_attribute_name,
    STATE(300), 1,
      sym_attribute,
    STATE(266), 2,
      sym__attribute,
      sym__js_attribute,
    ACTIONS(481), 3,
      aux_sym_js_attribute_name_token1,
      aux_sym_js_attribute_name_token2,
      aux_sym_js_attribute_name_token3,
  [3728] = 8,
    ACTIONS(472), 1,
      aux_sym__attribute_token1,
    ACTIONS(484), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      aux_sym_attributes_repeat1,
    STATE(177), 1,
      sym_js_attribute_name,
    STATE(180), 1,
      sym_attribute_name,
    STATE(265), 1,
      sym_attribute,
    STATE(266), 2,
      sym__attribute,
      sym__js_attribute,
    ACTIONS(474), 3,
      aux_sym_js_attribute_name_token1,
      aux_sym_js_attribute_name_token2,
      aux_sym_js_attribute_name_token3,
  [3756] = 4,
    STATE(148), 1,
      aux_sym_tag_repeat1,
    ACTIONS(488), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(490), 2,
      sym_class,
      sym_id,
    ACTIONS(486), 5,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LPAREN,
  [3775] = 4,
    ACTIONS(454), 1,
      anon_sym_PIPE,
    ACTIONS(493), 1,
      sym__dedent,
    ACTIONS(460), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(154), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3793] = 7,
    ACTIONS(428), 1,
      anon_sym_BANG_EQ,
    ACTIONS(430), 1,
      anon_sym_EQ,
    ACTIONS(434), 1,
      anon_sym_DOT,
    ACTIONS(495), 1,
      anon_sym_COLON,
    ACTIONS(497), 1,
      anon_sym_,
    ACTIONS(499), 1,
      sym__newline,
    STATE(42), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3817] = 7,
    ACTIONS(388), 1,
      anon_sym_BANG_EQ,
    ACTIONS(390), 1,
      anon_sym_EQ,
    ACTIONS(394), 1,
      anon_sym_DOT,
    ACTIONS(501), 1,
      anon_sym_COLON,
    ACTIONS(503), 1,
      anon_sym_,
    ACTIONS(505), 1,
      sym__newline,
    STATE(113), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3841] = 7,
    ACTIONS(400), 1,
      anon_sym_BANG_EQ,
    ACTIONS(402), 1,
      anon_sym_EQ,
    ACTIONS(406), 1,
      anon_sym_DOT,
    ACTIONS(420), 1,
      anon_sym_COLON,
    ACTIONS(422), 1,
      anon_sym_,
    ACTIONS(424), 1,
      sym__newline,
    STATE(207), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3865] = 7,
    ACTIONS(400), 1,
      anon_sym_BANG_EQ,
    ACTIONS(402), 1,
      anon_sym_EQ,
    ACTIONS(406), 1,
      anon_sym_DOT,
    ACTIONS(507), 1,
      anon_sym_COLON,
    ACTIONS(509), 1,
      anon_sym_,
    ACTIONS(511), 1,
      sym__newline,
    STATE(209), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3889] = 4,
    ACTIONS(69), 1,
      sym__dedent,
    ACTIONS(513), 1,
      anon_sym_PIPE,
    ACTIONS(516), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(154), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3907] = 7,
    ACTIONS(426), 1,
      anon_sym_COLON,
    ACTIONS(428), 1,
      anon_sym_BANG_EQ,
    ACTIONS(430), 1,
      anon_sym_EQ,
    ACTIONS(432), 1,
      anon_sym_,
    ACTIONS(434), 1,
      anon_sym_DOT,
    ACTIONS(436), 1,
      sym__newline,
    STATE(59), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3931] = 7,
    ACTIONS(370), 1,
      anon_sym_COLON,
    ACTIONS(372), 1,
      anon_sym_BANG_EQ,
    ACTIONS(374), 1,
      anon_sym_EQ,
    ACTIONS(376), 1,
      anon_sym_,
    ACTIONS(378), 1,
      anon_sym_DOT,
    ACTIONS(384), 1,
      sym__newline,
    STATE(92), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3955] = 7,
    ACTIONS(372), 1,
      anon_sym_BANG_EQ,
    ACTIONS(374), 1,
      anon_sym_EQ,
    ACTIONS(378), 1,
      anon_sym_DOT,
    ACTIONS(519), 1,
      anon_sym_COLON,
    ACTIONS(521), 1,
      anon_sym_,
    ACTIONS(523), 1,
      sym__newline,
    STATE(82), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3979] = 7,
    ACTIONS(386), 1,
      anon_sym_COLON,
    ACTIONS(388), 1,
      anon_sym_BANG_EQ,
    ACTIONS(390), 1,
      anon_sym_EQ,
    ACTIONS(392), 1,
      anon_sym_,
    ACTIONS(394), 1,
      anon_sym_DOT,
    ACTIONS(396), 1,
      sym__newline,
    STATE(106), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4003] = 3,
    ACTIONS(114), 1,
      anon_sym_PIPE,
    ACTIONS(118), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(21), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4018] = 3,
    ACTIONS(454), 1,
      anon_sym_PIPE,
    ACTIONS(460), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(149), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4033] = 3,
    ACTIONS(114), 1,
      anon_sym_PIPE,
    ACTIONS(118), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(9), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4048] = 3,
    ACTIONS(86), 1,
      anon_sym_PIPE,
    ACTIONS(90), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(5), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4063] = 3,
    ACTIONS(525), 1,
      sym__indent,
    STATE(212), 1,
      sym_children,
    ACTIONS(154), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4077] = 3,
    ACTIONS(527), 1,
      sym__indent,
    STATE(206), 1,
      sym_children,
    ACTIONS(138), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4091] = 3,
    ACTIONS(529), 1,
      sym__indent,
    STATE(183), 1,
      sym_children,
    ACTIONS(134), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4105] = 3,
    ACTIONS(529), 1,
      sym__indent,
    STATE(189), 1,
      sym_children,
    ACTIONS(128), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4119] = 3,
    ACTIONS(529), 1,
      sym__indent,
    STATE(192), 1,
      sym_children,
    ACTIONS(122), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4133] = 3,
    ACTIONS(531), 1,
      sym__indent,
    STATE(192), 1,
      sym_children,
    ACTIONS(122), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4147] = 5,
    ACTIONS(533), 1,
      anon_sym_EQ,
    ACTIONS(535), 1,
      anon_sym_,
    ACTIONS(537), 1,
      anon_sym_DOT,
    STATE(179), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(539), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4164] = 2,
    ACTIONS(543), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(541), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [4175] = 2,
    ACTIONS(547), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(545), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [4186] = 3,
    ACTIONS(549), 1,
      sym__dedent,
    STATE(182), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(460), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4199] = 2,
    ACTIONS(553), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(551), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [4210] = 2,
    ACTIONS(555), 1,
      sym__indent,
    ACTIONS(210), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4221] = 3,
    ACTIONS(557), 1,
      sym__dedent,
    STATE(182), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(460), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4234] = 5,
    ACTIONS(537), 1,
      anon_sym_DOT,
    ACTIONS(559), 1,
      anon_sym_EQ,
    ACTIONS(561), 1,
      anon_sym_,
    STATE(179), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(563), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4251] = 5,
    ACTIONS(537), 1,
      anon_sym_DOT,
    ACTIONS(565), 1,
      anon_sym_EQ,
    ACTIONS(567), 1,
      anon_sym_,
    STATE(176), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(569), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4268] = 3,
    ACTIONS(571), 1,
      sym__dedent,
    STATE(182), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(460), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4281] = 4,
    ACTIONS(575), 1,
      anon_sym_,
    ACTIONS(577), 1,
      anon_sym_DOT,
    STATE(179), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(573), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4296] = 5,
    ACTIONS(537), 1,
      anon_sym_DOT,
    ACTIONS(580), 1,
      anon_sym_EQ,
    ACTIONS(582), 1,
      anon_sym_,
    STATE(169), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(584), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4313] = 3,
    ACTIONS(586), 1,
      sym__dedent,
    STATE(182), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(460), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4326] = 3,
    ACTIONS(200), 1,
      sym__dedent,
    STATE(182), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(588), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4339] = 1,
    ACTIONS(284), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4347] = 1,
    ACTIONS(302), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4355] = 1,
    ACTIONS(476), 5,
      anon_sym_RPAREN,
      aux_sym__attribute_token1,
      aux_sym_js_attribute_name_token1,
      aux_sym_js_attribute_name_token2,
      aux_sym_js_attribute_name_token3,
  [4363] = 5,
    ACTIONS(591), 1,
      sym_content,
    ACTIONS(594), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(597), 1,
      sym__dedent,
    STATE(186), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(231), 1,
      aux_sym__content_or_javascript,
  [4379] = 1,
    ACTIONS(296), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4387] = 1,
    ACTIONS(292), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4395] = 1,
    ACTIONS(134), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4403] = 1,
    ACTIONS(134), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4411] = 2,
    ACTIONS(601), 1,
      anon_sym_,
    ACTIONS(599), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4421] = 1,
    ACTIONS(128), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4429] = 2,
    STATE(175), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(460), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4439] = 2,
    STATE(172), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(460), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4449] = 5,
    ACTIONS(603), 1,
      sym_content,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(607), 1,
      sym__dedent,
    STATE(186), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(231), 1,
      aux_sym__content_or_javascript,
  [4465] = 4,
    ACTIONS(609), 1,
      anon_sym_when,
    ACTIONS(611), 1,
      anon_sym_default,
    STATE(6), 1,
      sym__when_keyword,
    STATE(24), 2,
      sym_when,
      aux_sym_case_repeat1,
  [4479] = 2,
    ACTIONS(615), 1,
      anon_sym_,
    ACTIONS(613), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4489] = 1,
    ACTIONS(228), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4497] = 1,
    ACTIONS(257), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4505] = 1,
    ACTIONS(128), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4513] = 2,
    STATE(77), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(25), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4523] = 1,
    ACTIONS(138), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4531] = 1,
    ACTIONS(316), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4539] = 5,
    ACTIONS(603), 1,
      sym_content,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(617), 1,
      sym__dedent,
    STATE(186), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(231), 1,
      aux_sym__content_or_javascript,
  [4555] = 2,
    STATE(73), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(25), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4565] = 1,
    ACTIONS(154), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4573] = 1,
    ACTIONS(154), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4581] = 2,
    ACTIONS(621), 1,
      anon_sym_,
    ACTIONS(619), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4591] = 1,
    ACTIONS(122), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4599] = 5,
    ACTIONS(603), 1,
      sym_content,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(623), 1,
      sym__dedent,
    STATE(186), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(231), 1,
      aux_sym__content_or_javascript,
  [4615] = 5,
    ACTIONS(603), 1,
      sym_content,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(625), 1,
      sym__dedent,
    STATE(186), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(231), 1,
      aux_sym__content_or_javascript,
  [4631] = 1,
    ACTIONS(122), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4639] = 2,
    STATE(181), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(460), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4649] = 1,
    ACTIONS(306), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4657] = 2,
    STATE(178), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(460), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4667] = 2,
    STATE(92), 1,
      sym_tag,
    ACTIONS(118), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4676] = 4,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(627), 1,
      sym_content,
    ACTIONS(629), 1,
      sym__newline,
    STATE(255), 1,
      aux_sym__content_or_javascript,
  [4689] = 4,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(627), 1,
      sym_content,
    ACTIONS(631), 1,
      sym__newline,
    STATE(255), 1,
      aux_sym__content_or_javascript,
  [4702] = 4,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(633), 1,
      sym_content,
    ACTIONS(635), 1,
      sym__newline,
    STATE(217), 1,
      aux_sym__content_or_javascript,
  [4715] = 4,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(627), 1,
      sym_content,
    ACTIONS(637), 1,
      sym__newline,
    STATE(255), 1,
      aux_sym__content_or_javascript,
  [4728] = 2,
    STATE(57), 1,
      sym_tag,
    ACTIONS(90), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4737] = 4,
    ACTIONS(639), 1,
      aux_sym__attribute_token2,
    ACTIONS(641), 1,
      anon_sym_SQUOTE,
    ACTIONS(643), 1,
      anon_sym_DQUOTE,
    STATE(258), 1,
      sym_quoted_attribute_value,
  [4750] = 4,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(627), 1,
      sym_content,
    ACTIONS(645), 1,
      sym__newline,
    STATE(255), 1,
      aux_sym__content_or_javascript,
  [4763] = 2,
    STATE(42), 1,
      sym_tag,
    ACTIONS(90), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4772] = 4,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(627), 1,
      sym_content,
    ACTIONS(647), 1,
      sym__newline,
    STATE(255), 1,
      aux_sym__content_or_javascript,
  [4785] = 2,
    STATE(59), 1,
      sym_tag,
    ACTIONS(90), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4794] = 4,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(627), 1,
      sym_content,
    ACTIONS(649), 1,
      sym__newline,
    STATE(255), 1,
      aux_sym__content_or_javascript,
  [4807] = 4,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(651), 1,
      sym_content,
    ACTIONS(653), 1,
      sym__newline,
    STATE(227), 1,
      aux_sym__content_or_javascript,
  [4820] = 4,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(627), 1,
      sym_content,
    ACTIONS(655), 1,
      sym__newline,
    STATE(255), 1,
      aux_sym__content_or_javascript,
  [4833] = 2,
    STATE(200), 1,
      sym_tag,
    ACTIONS(460), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4842] = 4,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(627), 1,
      sym_content,
    ACTIONS(657), 1,
      sym__newline,
    STATE(255), 1,
      aux_sym__content_or_javascript,
  [4855] = 4,
    ACTIONS(603), 1,
      sym_content,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(211), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(231), 1,
      aux_sym__content_or_javascript,
  [4868] = 4,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(627), 1,
      sym_content,
    ACTIONS(659), 1,
      sym__newline,
    STATE(255), 1,
      aux_sym__content_or_javascript,
  [4881] = 2,
    STATE(209), 1,
      sym_tag,
    ACTIONS(460), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4890] = 2,
    STATE(121), 1,
      sym_tag,
    ACTIONS(25), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4899] = 4,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(627), 1,
      sym_content,
    ACTIONS(661), 1,
      sym__newline,
    STATE(255), 1,
      aux_sym__content_or_javascript,
  [4912] = 4,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(627), 1,
      sym_content,
    ACTIONS(663), 1,
      sym__newline,
    STATE(255), 1,
      aux_sym__content_or_javascript,
  [4925] = 4,
    ACTIONS(641), 1,
      anon_sym_SQUOTE,
    ACTIONS(643), 1,
      anon_sym_DQUOTE,
    ACTIONS(665), 1,
      aux_sym__attribute_token2,
    STATE(280), 1,
      sym_quoted_attribute_value,
  [4938] = 2,
    STATE(207), 1,
      sym_tag,
    ACTIONS(460), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4947] = 4,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(627), 1,
      sym_content,
    ACTIONS(667), 1,
      sym__newline,
    STATE(255), 1,
      aux_sym__content_or_javascript,
  [4960] = 4,
    ACTIONS(603), 1,
      sym_content,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(210), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(231), 1,
      aux_sym__content_or_javascript,
  [4973] = 4,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(669), 1,
      sym_content,
    ACTIONS(671), 1,
      sym__newline,
    STATE(240), 1,
      aux_sym__content_or_javascript,
  [4986] = 4,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(627), 1,
      sym_content,
    ACTIONS(673), 1,
      sym__newline,
    STATE(255), 1,
      aux_sym__content_or_javascript,
  [4999] = 2,
    STATE(106), 1,
      sym_tag,
    ACTIONS(25), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5008] = 4,
    ACTIONS(603), 1,
      sym_content,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(195), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(231), 1,
      aux_sym__content_or_javascript,
  [5021] = 2,
    STATE(113), 1,
      sym_tag,
    ACTIONS(25), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5030] = 2,
    STATE(87), 1,
      sym_tag,
    ACTIONS(118), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5039] = 4,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(627), 1,
      sym_content,
    ACTIONS(675), 1,
      sym__newline,
    STATE(255), 1,
      aux_sym__content_or_javascript,
  [5052] = 4,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(677), 1,
      sym_content,
    ACTIONS(679), 1,
      sym__newline,
    STATE(253), 1,
      aux_sym__content_or_javascript,
  [5065] = 4,
    ACTIONS(681), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(683), 1,
      sym__newline,
    STATE(91), 1,
      sym__single_line_buf_code,
    STATE(326), 1,
      sym__un_delimited_javascript,
  [5078] = 2,
    STATE(82), 1,
      sym_tag,
    ACTIONS(118), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5087] = 4,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(627), 1,
      sym_content,
    ACTIONS(685), 1,
      sym__newline,
    STATE(255), 1,
      aux_sym__content_or_javascript,
  [5100] = 4,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(627), 1,
      sym_content,
    ACTIONS(687), 1,
      sym__newline,
    STATE(255), 1,
      aux_sym__content_or_javascript,
  [5113] = 4,
    ACTIONS(603), 1,
      sym_content,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(204), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(231), 1,
      aux_sym__content_or_javascript,
  [5126] = 4,
    ACTIONS(689), 1,
      sym_content,
    ACTIONS(692), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(695), 1,
      sym__newline,
    STATE(255), 1,
      aux_sym__content_or_javascript,
  [5139] = 4,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(627), 1,
      sym_content,
    ACTIONS(697), 1,
      sym__newline,
    STATE(255), 1,
      aux_sym__content_or_javascript,
  [5152] = 4,
    ACTIONS(681), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(699), 1,
      sym__newline,
    STATE(64), 1,
      sym__single_line_buf_code,
    STATE(308), 1,
      sym__un_delimited_javascript,
  [5165] = 2,
    ACTIONS(701), 1,
      anon_sym_,
    ACTIONS(703), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5173] = 3,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(705), 1,
      sym_content,
    STATE(225), 1,
      aux_sym__content_or_javascript,
  [5183] = 3,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(707), 1,
      sym_content,
    STATE(229), 1,
      aux_sym__content_or_javascript,
  [5193] = 3,
    ACTIONS(681), 1,
      sym__un_delimited_javascript_line,
    STATE(90), 1,
      sym__single_line_buf_code,
    STATE(326), 1,
      sym__un_delimited_javascript,
  [5203] = 3,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(709), 1,
      sym_content,
    STATE(237), 1,
      aux_sym__content_or_javascript,
  [5213] = 3,
    ACTIONS(681), 1,
      sym__un_delimited_javascript_line,
    STATE(89), 1,
      sym__single_line_buf_code,
    STATE(326), 1,
      sym__un_delimited_javascript,
  [5223] = 3,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(711), 1,
      sym_content,
    STATE(243), 1,
      aux_sym__content_or_javascript,
  [5233] = 3,
    ACTIONS(713), 1,
      anon_sym_,
    ACTIONS(715), 1,
      anon_sym_COMMA,
    ACTIONS(717), 1,
      anon_sym_RPAREN,
  [5243] = 2,
    ACTIONS(719), 1,
      anon_sym_,
    ACTIONS(721), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5251] = 3,
    ACTIONS(723), 1,
      sym__un_delimited_javascript_line,
    STATE(20), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(48), 1,
      sym__multi_line_buf_code,
  [5261] = 3,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(725), 1,
      sym_content,
    STATE(236), 1,
      aux_sym__content_or_javascript,
  [5271] = 3,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(727), 1,
      sym_content,
    STATE(256), 1,
      aux_sym__content_or_javascript,
  [5281] = 2,
    ACTIONS(729), 1,
      anon_sym_,
    ACTIONS(731), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5289] = 3,
    ACTIONS(713), 1,
      anon_sym_,
    ACTIONS(715), 1,
      anon_sym_COMMA,
    ACTIONS(733), 1,
      anon_sym_RPAREN,
  [5299] = 2,
    ACTIONS(737), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(735), 2,
      sym__newline,
      sym_content,
  [5307] = 3,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(739), 1,
      sym_content,
    STATE(223), 1,
      aux_sym__content_or_javascript,
  [5317] = 3,
    ACTIONS(681), 1,
      sym__un_delimited_javascript_line,
    STATE(199), 1,
      sym__single_line_buf_code,
    STATE(319), 1,
      sym__un_delimited_javascript,
  [5327] = 3,
    ACTIONS(681), 1,
      sym__un_delimited_javascript_line,
    STATE(184), 1,
      sym__single_line_buf_code,
    STATE(319), 1,
      sym__un_delimited_javascript,
  [5337] = 3,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(741), 1,
      sym_content,
    STATE(220), 1,
      aux_sym__content_or_javascript,
  [5347] = 3,
    ACTIONS(743), 1,
      anon_sym_SQUOTE,
    ACTIONS(745), 1,
      anon_sym_DQUOTE,
    STATE(289), 1,
      sym_quoted_javascript,
  [5357] = 3,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(747), 1,
      sym_content,
    STATE(248), 1,
      aux_sym__content_or_javascript,
  [5367] = 2,
    ACTIONS(749), 1,
      anon_sym_,
    ACTIONS(751), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5375] = 2,
    ACTIONS(753), 1,
      anon_sym_,
    ACTIONS(755), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5383] = 2,
    ACTIONS(757), 1,
      anon_sym_,
    ACTIONS(759), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5391] = 2,
    ACTIONS(761), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(597), 2,
      sym__dedent,
      sym_content,
  [5399] = 1,
    ACTIONS(763), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5405] = 3,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(765), 1,
      sym_content,
    STATE(252), 1,
      aux_sym__content_or_javascript,
  [5415] = 3,
    ACTIONS(767), 1,
      sym__un_delimited_javascript_line,
    STATE(45), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(81), 1,
      sym__multi_line_buf_code,
  [5425] = 2,
    ACTIONS(769), 1,
      anon_sym_,
    ACTIONS(771), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5433] = 2,
    ACTIONS(773), 1,
      anon_sym_,
    ACTIONS(775), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5441] = 1,
    ACTIONS(777), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [5447] = 2,
    ACTIONS(779), 1,
      anon_sym_,
    ACTIONS(781), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5455] = 3,
    ACTIONS(681), 1,
      sym__un_delimited_javascript_line,
    STATE(39), 1,
      sym__single_line_buf_code,
    STATE(308), 1,
      sym__un_delimited_javascript,
  [5465] = 3,
    ACTIONS(681), 1,
      sym__un_delimited_javascript_line,
    STATE(58), 1,
      sym__single_line_buf_code,
    STATE(308), 1,
      sym__un_delimited_javascript,
  [5475] = 3,
    ACTIONS(743), 1,
      anon_sym_SQUOTE,
    ACTIONS(745), 1,
      anon_sym_DQUOTE,
    STATE(270), 1,
      sym_quoted_javascript,
  [5485] = 3,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(783), 1,
      sym_content,
    STATE(218), 1,
      aux_sym__content_or_javascript,
  [5495] = 2,
    ACTIONS(785), 1,
      anon_sym_,
    ACTIONS(787), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5503] = 3,
    ACTIONS(681), 1,
      sym__un_delimited_javascript_line,
    STATE(119), 1,
      sym__single_line_buf_code,
    STATE(309), 1,
      sym__un_delimited_javascript,
  [5513] = 3,
    ACTIONS(681), 1,
      sym__un_delimited_javascript_line,
    STATE(120), 1,
      sym__single_line_buf_code,
    STATE(309), 1,
      sym__un_delimited_javascript,
  [5523] = 3,
    ACTIONS(605), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(789), 1,
      sym_content,
    STATE(233), 1,
      aux_sym__content_or_javascript,
  [5533] = 2,
    ACTIONS(791), 1,
      anon_sym_DQUOTE,
    ACTIONS(793), 1,
      aux_sym_quoted_javascript_token2,
  [5540] = 2,
    ACTIONS(791), 1,
      anon_sym_SQUOTE,
    ACTIONS(795), 1,
      aux_sym_quoted_javascript_token1,
  [5547] = 2,
    ACTIONS(713), 1,
      anon_sym_,
    ACTIONS(715), 1,
      anon_sym_COMMA,
  [5554] = 2,
    ACTIONS(797), 1,
      sym__un_delimited_javascript_line,
    STATE(201), 1,
      sym__un_delimited_javascript,
  [5561] = 2,
    ACTIONS(799), 1,
      sym__comment_content,
    ACTIONS(801), 1,
      sym__newline,
  [5568] = 2,
    ACTIONS(803), 1,
      anon_sym_DQUOTE,
    ACTIONS(805), 1,
      aux_sym_quoted_javascript_token2,
  [5575] = 2,
    ACTIONS(803), 1,
      anon_sym_SQUOTE,
    ACTIONS(807), 1,
      aux_sym_quoted_javascript_token1,
  [5582] = 1,
    ACTIONS(809), 1,
      sym__newline,
  [5586] = 1,
    ACTIONS(811), 1,
      sym__un_delimited_javascript_line,
  [5590] = 1,
    ACTIONS(813), 1,
      anon_sym_DQUOTE,
  [5594] = 1,
    ACTIONS(815), 1,
      sym__newline,
  [5598] = 1,
    ACTIONS(817), 1,
      sym__newline,
  [5602] = 1,
    ACTIONS(819), 1,
      aux_sym__attribute_token3,
  [5606] = 1,
    ACTIONS(821), 1,
      sym__newline,
  [5610] = 1,
    ACTIONS(823), 1,
      sym__delimited_javascript,
  [5614] = 1,
    ACTIONS(813), 1,
      anon_sym_SQUOTE,
  [5618] = 1,
    ACTIONS(825), 1,
      aux_sym_unbuffered_code_token1,
  [5622] = 1,
    ACTIONS(827), 1,
      aux_sym_unbuffered_code_token1,
  [5626] = 1,
    ACTIONS(829), 1,
      ts_builtin_sym_end,
  [5630] = 1,
    ACTIONS(831), 1,
      aux_sym__attribute_token3,
  [5634] = 1,
    ACTIONS(833), 1,
      sym__indent,
  [5638] = 1,
    ACTIONS(835), 1,
      sym__newline,
  [5642] = 1,
    ACTIONS(837), 1,
      anon_sym_SQUOTE,
  [5646] = 1,
    ACTIONS(837), 1,
      anon_sym_DQUOTE,
  [5650] = 1,
    ACTIONS(839), 1,
      sym__newline,
  [5654] = 1,
    ACTIONS(841), 1,
      anon_sym_RBRACE_RBRACE,
  [5658] = 1,
    ACTIONS(843), 1,
      sym__indent,
  [5662] = 1,
    ACTIONS(763), 1,
      sym__newline,
  [5666] = 1,
    ACTIONS(845), 1,
      sym__newline,
  [5670] = 1,
    ACTIONS(847), 1,
      sym__indent,
  [5674] = 1,
    ACTIONS(849), 1,
      sym__indent,
  [5678] = 1,
    ACTIONS(851), 1,
      sym__newline,
  [5682] = 1,
    ACTIONS(853), 1,
      aux_sym__attribute_token1,
  [5686] = 1,
    ACTIONS(855), 1,
      aux_sym__when_keyword_token1,
  [5690] = 1,
    ACTIONS(857), 1,
      sym__indent,
  [5694] = 1,
    ACTIONS(859), 1,
      sym__indent,
  [5698] = 1,
    ACTIONS(861), 1,
      sym__indent,
  [5702] = 1,
    ACTIONS(863), 1,
      sym__newline,
  [5706] = 1,
    ACTIONS(865), 1,
      sym__newline,
  [5710] = 1,
    ACTIONS(867), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 54,
  [SMALL_STATE(4)] = 108,
  [SMALL_STATE(5)] = 143,
  [SMALL_STATE(6)] = 180,
  [SMALL_STATE(7)] = 214,
  [SMALL_STATE(8)] = 250,
  [SMALL_STATE(9)] = 286,
  [SMALL_STATE(10)] = 321,
  [SMALL_STATE(11)] = 352,
  [SMALL_STATE(12)] = 381,
  [SMALL_STATE(13)] = 410,
  [SMALL_STATE(14)] = 439,
  [SMALL_STATE(15)] = 468,
  [SMALL_STATE(16)] = 501,
  [SMALL_STATE(17)] = 530,
  [SMALL_STATE(18)] = 555,
  [SMALL_STATE(19)] = 584,
  [SMALL_STATE(20)] = 615,
  [SMALL_STATE(21)] = 644,
  [SMALL_STATE(22)] = 679,
  [SMALL_STATE(23)] = 712,
  [SMALL_STATE(24)] = 741,
  [SMALL_STATE(25)] = 774,
  [SMALL_STATE(26)] = 805,
  [SMALL_STATE(27)] = 831,
  [SMALL_STATE(28)] = 859,
  [SMALL_STATE(29)] = 883,
  [SMALL_STATE(30)] = 906,
  [SMALL_STATE(31)] = 931,
  [SMALL_STATE(32)] = 958,
  [SMALL_STATE(33)] = 981,
  [SMALL_STATE(34)] = 1008,
  [SMALL_STATE(35)] = 1037,
  [SMALL_STATE(36)] = 1064,
  [SMALL_STATE(37)] = 1091,
  [SMALL_STATE(38)] = 1114,
  [SMALL_STATE(39)] = 1137,
  [SMALL_STATE(40)] = 1160,
  [SMALL_STATE(41)] = 1187,
  [SMALL_STATE(42)] = 1214,
  [SMALL_STATE(43)] = 1237,
  [SMALL_STATE(44)] = 1260,
  [SMALL_STATE(45)] = 1289,
  [SMALL_STATE(46)] = 1316,
  [SMALL_STATE(47)] = 1345,
  [SMALL_STATE(48)] = 1374,
  [SMALL_STATE(49)] = 1399,
  [SMALL_STATE(50)] = 1422,
  [SMALL_STATE(51)] = 1445,
  [SMALL_STATE(52)] = 1468,
  [SMALL_STATE(53)] = 1491,
  [SMALL_STATE(54)] = 1514,
  [SMALL_STATE(55)] = 1537,
  [SMALL_STATE(56)] = 1560,
  [SMALL_STATE(57)] = 1587,
  [SMALL_STATE(58)] = 1610,
  [SMALL_STATE(59)] = 1633,
  [SMALL_STATE(60)] = 1656,
  [SMALL_STATE(61)] = 1679,
  [SMALL_STATE(62)] = 1702,
  [SMALL_STATE(63)] = 1725,
  [SMALL_STATE(64)] = 1752,
  [SMALL_STATE(65)] = 1777,
  [SMALL_STATE(66)] = 1800,
  [SMALL_STATE(67)] = 1822,
  [SMALL_STATE(68)] = 1848,
  [SMALL_STATE(69)] = 1874,
  [SMALL_STATE(70)] = 1896,
  [SMALL_STATE(71)] = 1922,
  [SMALL_STATE(72)] = 1946,
  [SMALL_STATE(73)] = 1974,
  [SMALL_STATE(74)] = 1998,
  [SMALL_STATE(75)] = 2024,
  [SMALL_STATE(76)] = 2046,
  [SMALL_STATE(77)] = 2072,
  [SMALL_STATE(78)] = 2096,
  [SMALL_STATE(79)] = 2118,
  [SMALL_STATE(80)] = 2144,
  [SMALL_STATE(81)] = 2165,
  [SMALL_STATE(82)] = 2188,
  [SMALL_STATE(83)] = 2209,
  [SMALL_STATE(84)] = 2230,
  [SMALL_STATE(85)] = 2251,
  [SMALL_STATE(86)] = 2272,
  [SMALL_STATE(87)] = 2293,
  [SMALL_STATE(88)] = 2314,
  [SMALL_STATE(89)] = 2335,
  [SMALL_STATE(90)] = 2356,
  [SMALL_STATE(91)] = 2377,
  [SMALL_STATE(92)] = 2400,
  [SMALL_STATE(93)] = 2421,
  [SMALL_STATE(94)] = 2442,
  [SMALL_STATE(95)] = 2463,
  [SMALL_STATE(96)] = 2486,
  [SMALL_STATE(97)] = 2507,
  [SMALL_STATE(98)] = 2528,
  [SMALL_STATE(99)] = 2551,
  [SMALL_STATE(100)] = 2572,
  [SMALL_STATE(101)] = 2595,
  [SMALL_STATE(102)] = 2616,
  [SMALL_STATE(103)] = 2636,
  [SMALL_STATE(104)] = 2656,
  [SMALL_STATE(105)] = 2676,
  [SMALL_STATE(106)] = 2696,
  [SMALL_STATE(107)] = 2716,
  [SMALL_STATE(108)] = 2736,
  [SMALL_STATE(109)] = 2756,
  [SMALL_STATE(110)] = 2776,
  [SMALL_STATE(111)] = 2796,
  [SMALL_STATE(112)] = 2816,
  [SMALL_STATE(113)] = 2836,
  [SMALL_STATE(114)] = 2856,
  [SMALL_STATE(115)] = 2876,
  [SMALL_STATE(116)] = 2896,
  [SMALL_STATE(117)] = 2916,
  [SMALL_STATE(118)] = 2936,
  [SMALL_STATE(119)] = 2956,
  [SMALL_STATE(120)] = 2976,
  [SMALL_STATE(121)] = 2996,
  [SMALL_STATE(122)] = 3016,
  [SMALL_STATE(123)] = 3036,
  [SMALL_STATE(124)] = 3056,
  [SMALL_STATE(125)] = 3076,
  [SMALL_STATE(126)] = 3113,
  [SMALL_STATE(127)] = 3150,
  [SMALL_STATE(128)] = 3187,
  [SMALL_STATE(129)] = 3224,
  [SMALL_STATE(130)] = 3261,
  [SMALL_STATE(131)] = 3298,
  [SMALL_STATE(132)] = 3335,
  [SMALL_STATE(133)] = 3372,
  [SMALL_STATE(134)] = 3397,
  [SMALL_STATE(135)] = 3422,
  [SMALL_STATE(136)] = 3447,
  [SMALL_STATE(137)] = 3472,
  [SMALL_STATE(138)] = 3497,
  [SMALL_STATE(139)] = 3522,
  [SMALL_STATE(140)] = 3547,
  [SMALL_STATE(141)] = 3572,
  [SMALL_STATE(142)] = 3597,
  [SMALL_STATE(143)] = 3622,
  [SMALL_STATE(144)] = 3647,
  [SMALL_STATE(145)] = 3672,
  [SMALL_STATE(146)] = 3700,
  [SMALL_STATE(147)] = 3728,
  [SMALL_STATE(148)] = 3756,
  [SMALL_STATE(149)] = 3775,
  [SMALL_STATE(150)] = 3793,
  [SMALL_STATE(151)] = 3817,
  [SMALL_STATE(152)] = 3841,
  [SMALL_STATE(153)] = 3865,
  [SMALL_STATE(154)] = 3889,
  [SMALL_STATE(155)] = 3907,
  [SMALL_STATE(156)] = 3931,
  [SMALL_STATE(157)] = 3955,
  [SMALL_STATE(158)] = 3979,
  [SMALL_STATE(159)] = 4003,
  [SMALL_STATE(160)] = 4018,
  [SMALL_STATE(161)] = 4033,
  [SMALL_STATE(162)] = 4048,
  [SMALL_STATE(163)] = 4063,
  [SMALL_STATE(164)] = 4077,
  [SMALL_STATE(165)] = 4091,
  [SMALL_STATE(166)] = 4105,
  [SMALL_STATE(167)] = 4119,
  [SMALL_STATE(168)] = 4133,
  [SMALL_STATE(169)] = 4147,
  [SMALL_STATE(170)] = 4164,
  [SMALL_STATE(171)] = 4175,
  [SMALL_STATE(172)] = 4186,
  [SMALL_STATE(173)] = 4199,
  [SMALL_STATE(174)] = 4210,
  [SMALL_STATE(175)] = 4221,
  [SMALL_STATE(176)] = 4234,
  [SMALL_STATE(177)] = 4251,
  [SMALL_STATE(178)] = 4268,
  [SMALL_STATE(179)] = 4281,
  [SMALL_STATE(180)] = 4296,
  [SMALL_STATE(181)] = 4313,
  [SMALL_STATE(182)] = 4326,
  [SMALL_STATE(183)] = 4339,
  [SMALL_STATE(184)] = 4347,
  [SMALL_STATE(185)] = 4355,
  [SMALL_STATE(186)] = 4363,
  [SMALL_STATE(187)] = 4379,
  [SMALL_STATE(188)] = 4387,
  [SMALL_STATE(189)] = 4395,
  [SMALL_STATE(190)] = 4403,
  [SMALL_STATE(191)] = 4411,
  [SMALL_STATE(192)] = 4421,
  [SMALL_STATE(193)] = 4429,
  [SMALL_STATE(194)] = 4439,
  [SMALL_STATE(195)] = 4449,
  [SMALL_STATE(196)] = 4465,
  [SMALL_STATE(197)] = 4479,
  [SMALL_STATE(198)] = 4489,
  [SMALL_STATE(199)] = 4497,
  [SMALL_STATE(200)] = 4505,
  [SMALL_STATE(201)] = 4513,
  [SMALL_STATE(202)] = 4523,
  [SMALL_STATE(203)] = 4531,
  [SMALL_STATE(204)] = 4539,
  [SMALL_STATE(205)] = 4555,
  [SMALL_STATE(206)] = 4565,
  [SMALL_STATE(207)] = 4573,
  [SMALL_STATE(208)] = 4581,
  [SMALL_STATE(209)] = 4591,
  [SMALL_STATE(210)] = 4599,
  [SMALL_STATE(211)] = 4615,
  [SMALL_STATE(212)] = 4631,
  [SMALL_STATE(213)] = 4639,
  [SMALL_STATE(214)] = 4649,
  [SMALL_STATE(215)] = 4657,
  [SMALL_STATE(216)] = 4667,
  [SMALL_STATE(217)] = 4676,
  [SMALL_STATE(218)] = 4689,
  [SMALL_STATE(219)] = 4702,
  [SMALL_STATE(220)] = 4715,
  [SMALL_STATE(221)] = 4728,
  [SMALL_STATE(222)] = 4737,
  [SMALL_STATE(223)] = 4750,
  [SMALL_STATE(224)] = 4763,
  [SMALL_STATE(225)] = 4772,
  [SMALL_STATE(226)] = 4785,
  [SMALL_STATE(227)] = 4794,
  [SMALL_STATE(228)] = 4807,
  [SMALL_STATE(229)] = 4820,
  [SMALL_STATE(230)] = 4833,
  [SMALL_STATE(231)] = 4842,
  [SMALL_STATE(232)] = 4855,
  [SMALL_STATE(233)] = 4868,
  [SMALL_STATE(234)] = 4881,
  [SMALL_STATE(235)] = 4890,
  [SMALL_STATE(236)] = 4899,
  [SMALL_STATE(237)] = 4912,
  [SMALL_STATE(238)] = 4925,
  [SMALL_STATE(239)] = 4938,
  [SMALL_STATE(240)] = 4947,
  [SMALL_STATE(241)] = 4960,
  [SMALL_STATE(242)] = 4973,
  [SMALL_STATE(243)] = 4986,
  [SMALL_STATE(244)] = 4999,
  [SMALL_STATE(245)] = 5008,
  [SMALL_STATE(246)] = 5021,
  [SMALL_STATE(247)] = 5030,
  [SMALL_STATE(248)] = 5039,
  [SMALL_STATE(249)] = 5052,
  [SMALL_STATE(250)] = 5065,
  [SMALL_STATE(251)] = 5078,
  [SMALL_STATE(252)] = 5087,
  [SMALL_STATE(253)] = 5100,
  [SMALL_STATE(254)] = 5113,
  [SMALL_STATE(255)] = 5126,
  [SMALL_STATE(256)] = 5139,
  [SMALL_STATE(257)] = 5152,
  [SMALL_STATE(258)] = 5165,
  [SMALL_STATE(259)] = 5173,
  [SMALL_STATE(260)] = 5183,
  [SMALL_STATE(261)] = 5193,
  [SMALL_STATE(262)] = 5203,
  [SMALL_STATE(263)] = 5213,
  [SMALL_STATE(264)] = 5223,
  [SMALL_STATE(265)] = 5233,
  [SMALL_STATE(266)] = 5243,
  [SMALL_STATE(267)] = 5251,
  [SMALL_STATE(268)] = 5261,
  [SMALL_STATE(269)] = 5271,
  [SMALL_STATE(270)] = 5281,
  [SMALL_STATE(271)] = 5289,
  [SMALL_STATE(272)] = 5299,
  [SMALL_STATE(273)] = 5307,
  [SMALL_STATE(274)] = 5317,
  [SMALL_STATE(275)] = 5327,
  [SMALL_STATE(276)] = 5337,
  [SMALL_STATE(277)] = 5347,
  [SMALL_STATE(278)] = 5357,
  [SMALL_STATE(279)] = 5367,
  [SMALL_STATE(280)] = 5375,
  [SMALL_STATE(281)] = 5383,
  [SMALL_STATE(282)] = 5391,
  [SMALL_STATE(283)] = 5399,
  [SMALL_STATE(284)] = 5405,
  [SMALL_STATE(285)] = 5415,
  [SMALL_STATE(286)] = 5425,
  [SMALL_STATE(287)] = 5433,
  [SMALL_STATE(288)] = 5441,
  [SMALL_STATE(289)] = 5447,
  [SMALL_STATE(290)] = 5455,
  [SMALL_STATE(291)] = 5465,
  [SMALL_STATE(292)] = 5475,
  [SMALL_STATE(293)] = 5485,
  [SMALL_STATE(294)] = 5495,
  [SMALL_STATE(295)] = 5503,
  [SMALL_STATE(296)] = 5513,
  [SMALL_STATE(297)] = 5523,
  [SMALL_STATE(298)] = 5533,
  [SMALL_STATE(299)] = 5540,
  [SMALL_STATE(300)] = 5547,
  [SMALL_STATE(301)] = 5554,
  [SMALL_STATE(302)] = 5561,
  [SMALL_STATE(303)] = 5568,
  [SMALL_STATE(304)] = 5575,
  [SMALL_STATE(305)] = 5582,
  [SMALL_STATE(306)] = 5586,
  [SMALL_STATE(307)] = 5590,
  [SMALL_STATE(308)] = 5594,
  [SMALL_STATE(309)] = 5598,
  [SMALL_STATE(310)] = 5602,
  [SMALL_STATE(311)] = 5606,
  [SMALL_STATE(312)] = 5610,
  [SMALL_STATE(313)] = 5614,
  [SMALL_STATE(314)] = 5618,
  [SMALL_STATE(315)] = 5622,
  [SMALL_STATE(316)] = 5626,
  [SMALL_STATE(317)] = 5630,
  [SMALL_STATE(318)] = 5634,
  [SMALL_STATE(319)] = 5638,
  [SMALL_STATE(320)] = 5642,
  [SMALL_STATE(321)] = 5646,
  [SMALL_STATE(322)] = 5650,
  [SMALL_STATE(323)] = 5654,
  [SMALL_STATE(324)] = 5658,
  [SMALL_STATE(325)] = 5662,
  [SMALL_STATE(326)] = 5666,
  [SMALL_STATE(327)] = 5670,
  [SMALL_STATE(328)] = 5674,
  [SMALL_STATE(329)] = 5678,
  [SMALL_STATE(330)] = 5682,
  [SMALL_STATE(331)] = 5686,
  [SMALL_STATE(332)] = 5690,
  [SMALL_STATE(333)] = 5694,
  [SMALL_STATE(334)] = 5698,
  [SMALL_STATE(335)] = 5702,
  [SMALL_STATE(336)] = 5706,
  [SMALL_STATE(337)] = 5710,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(288),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(219),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(301),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(301),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(205),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(306),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(296),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(295),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(302),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(132),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(132),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(314),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(228),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(131),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(131),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(331),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(6),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_keyword, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_keyword, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(249),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(128),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(128),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(28),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 5, .production_id = 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 5, .production_id = 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(131),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(131),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 2),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 2),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 6),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 6),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 5),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 5),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(329),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unescaped_buffered_code, 2),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unescaped_buffered_code, 2),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(66),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 5),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 5),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 7),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 4),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 4),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 5, .production_id = 4),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 5, .production_id = 4),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 5),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 5),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffered_code, 2),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffered_code, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 3),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 3),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(132),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(132),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 2),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 3),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 6),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 6),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 2),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 2),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(208),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(191),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [490] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(148),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(242),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(127),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 2),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 2),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 2),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 2),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 1),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 1),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [577] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2), SHIFT_REPEAT(330),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 1),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 1),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(127),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(231),
  [594] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(312),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_attribute_name, 1),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_attribute_name, 1),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 2),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 2),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_name, 1),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [689] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(255),
  [692] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(312),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 4),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 4),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 4),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 4),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 3),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 3),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 5),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 5),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 3),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 3),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 5),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 5),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__un_delimited_javascript, 1),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 2),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 2),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 3),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 3),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 3),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 3),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [829] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_pug_external_scanner_create(void);
void tree_sitter_pug_external_scanner_destroy(void *);
bool tree_sitter_pug_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_pug_external_scanner_serialize(void *, char *);
void tree_sitter_pug_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_pug(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_pug_external_scanner_create,
      tree_sitter_pug_external_scanner_destroy,
      tree_sitter_pug_external_scanner_scan,
      tree_sitter_pug_external_scanner_serialize,
      tree_sitter_pug_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
