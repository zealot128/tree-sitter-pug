#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 334
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
  sym_pipe_content = 49,
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
  [sym_pipe_content] = "pipe_content",
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
  [sym_pipe_content] = sym_pipe_content,
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
  [sym_pipe_content] = {
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
      if (lookahead == '"') ADVANCE(216);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(213);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == ')') ADVANCE(117);
      if (lookahead == '*') ADVANCE(61);
      if (lookahead == ',') ADVANCE(116);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(114);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == '=') ADVANCE(109);
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
          lookahead == ' ') ADVANCE(219);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(242);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(234);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(102);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(112);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == ')') ADVANCE(117);
      if (lookahead == ',') ADVANCE(116);
      if (lookahead == '.') ADVANCE(114);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == '=') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(112);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == ')') ADVANCE(117);
      if (lookahead == ',') ADVANCE(116);
      if (lookahead == '.') ADVANCE(113);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == '=') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(222);
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '=') ADVANCE(109);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(216);
      if (lookahead == '\'') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0) ADVANCE(119);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(217);
      if (lookahead != 0) ADVANCE(218);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == ')') ADVANCE(117);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 13:
      if (lookahead == ')') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(123);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(106);
      END_STATE();
    case 16:
      if (lookahead == ']') ADVANCE(210);
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
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(91);
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
      if (lookahead == 'f') ADVANCE(78);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(82);
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
      if (lookahead == 'n') ADVANCE(98);
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
      if (lookahead == 's') ADVANCE(85);
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
      if (lookahead == 't') ADVANCE(103);
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
      if (lookahead == '{') ADVANCE(231);
      END_STATE();
    case 56:
      if (lookahead == '}') ADVANCE(232);
      END_STATE();
    case 57:
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 58:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(122);
      END_STATE();
    case 59:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(204);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 60:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 61:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
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
      if (lookahead == '!') ADVANCE(238);
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '-') ADVANCE(247);
      if (lookahead == '.') ADVANCE(243);
      if (lookahead == '/') ADVANCE(237);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead == 'c') ADVANCE(128);
      if (lookahead == 'd') ADVANCE(143);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == 'i') ADVANCE(151);
      if (lookahead == 'u') ADVANCE(168);
      if (lookahead == 'w') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 65:
      if (eof) ADVANCE(69);
      if (lookahead == '\n') SKIP(65)
      if (lookahead == '!') ADVANCE(238);
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '-') ADVANCE(247);
      if (lookahead == '.') ADVANCE(243);
      if (lookahead == '/') ADVANCE(237);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead == 'c') ADVANCE(128);
      if (lookahead == 'd') ADVANCE(171);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == 'i') ADVANCE(151);
      if (lookahead == 'u') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 66:
      if (eof) ADVANCE(69);
      if (lookahead == ' ') SKIP(66)
      if (lookahead == '!') ADVANCE(224);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '.') ADVANCE(228);
      if (lookahead == '/') ADVANCE(223);
      if (lookahead == '=') ADVANCE(111);
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == 'u') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 67:
      if (eof) ADVANCE(69);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == '=') ADVANCE(109);
      if (lookahead == 'c') ADVANCE(126);
      if (lookahead == 'd') ADVANCE(140);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == 'i') ADVANCE(150);
      if (lookahead == 'u') ADVANCE(167);
      if (lookahead == 'w') ADVANCE(156);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(67)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 68:
      if (eof) ADVANCE(69);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '=') ADVANCE(109);
      if (lookahead == 'c') ADVANCE(126);
      if (lookahead == 'd') ADVANCE(170);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == 'i') ADVANCE(150);
      if (lookahead == 'u') ADVANCE(167);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(68)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
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
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(240);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(226);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__when_keyword_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__when_keyword_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(204);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__attribute_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__attribute_token2);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym__attribute_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(119);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__attribute_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__attribute_token3);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(188);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(190);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(192);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == 'o') ADVANCE(131);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == 'o') ADVANCE(132);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(129);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(144);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(141);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(189);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(191);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(142);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(145);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(149);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(179);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(187);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(99);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(100);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(159);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(160);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(131);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(132);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(133);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(136);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(139);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(148);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(134);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(87);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(177);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(138);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(181);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(146);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(195);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(196);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(197);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(157);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(158);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(173);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(204);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(205);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_js_attribute_name_token1);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_js_attribute_name_token2);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_js_attribute_name_token3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(215);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(220);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == ' ') ADVANCE(221);
      if (lookahead == '!') ADVANCE(224);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '.') ADVANCE(228);
      if (lookahead == '/') ADVANCE(223);
      if (lookahead == '=') ADVANCE(111);
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == 'u') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead == ' ') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(222);
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '=') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == 'f') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == 'i') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(206);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__delimited_javascript);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__delimited_javascript);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(238);
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '-') ADVANCE(247);
      if (lookahead == '.') ADVANCE(243);
      if (lookahead == '/') ADVANCE(237);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead == 'c') ADVANCE(128);
      if (lookahead == 'd') ADVANCE(143);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == 'i') ADVANCE(151);
      if (lookahead == 'u') ADVANCE(168);
      if (lookahead == 'w') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(238);
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '-') ADVANCE(247);
      if (lookahead == '.') ADVANCE(243);
      if (lookahead == '/') ADVANCE(237);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead == 'c') ADVANCE(128);
      if (lookahead == 'd') ADVANCE(171);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == 'i') ADVANCE(151);
      if (lookahead == 'u') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '/') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '=') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'i') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(205);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_unbuffered_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(249);
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
  [6] = {.lex_state = 67, .external_lex_state = 2},
  [7] = {.lex_state = 67, .external_lex_state = 3},
  [8] = {.lex_state = 68, .external_lex_state = 2},
  [9] = {.lex_state = 67, .external_lex_state = 2},
  [10] = {.lex_state = 67, .external_lex_state = 3},
  [11] = {.lex_state = 68, .external_lex_state = 2},
  [12] = {.lex_state = 67, .external_lex_state = 3},
  [13] = {.lex_state = 68, .external_lex_state = 2},
  [14] = {.lex_state = 67, .external_lex_state = 3},
  [15] = {.lex_state = 67, .external_lex_state = 3},
  [16] = {.lex_state = 67, .external_lex_state = 3},
  [17] = {.lex_state = 67, .external_lex_state = 4},
  [18] = {.lex_state = 67, .external_lex_state = 2},
  [19] = {.lex_state = 64, .external_lex_state = 2},
  [20] = {.lex_state = 67, .external_lex_state = 4},
  [21] = {.lex_state = 67},
  [22] = {.lex_state = 67},
  [23] = {.lex_state = 67, .external_lex_state = 3},
  [24] = {.lex_state = 64, .external_lex_state = 2},
  [25] = {.lex_state = 67, .external_lex_state = 2},
  [26] = {.lex_state = 67, .external_lex_state = 2},
  [27] = {.lex_state = 67, .external_lex_state = 2},
  [28] = {.lex_state = 67, .external_lex_state = 2},
  [29] = {.lex_state = 67, .external_lex_state = 2},
  [30] = {.lex_state = 68, .external_lex_state = 3},
  [31] = {.lex_state = 67, .external_lex_state = 2},
  [32] = {.lex_state = 67, .external_lex_state = 2},
  [33] = {.lex_state = 68, .external_lex_state = 3},
  [34] = {.lex_state = 64, .external_lex_state = 2},
  [35] = {.lex_state = 68, .external_lex_state = 3},
  [36] = {.lex_state = 67, .external_lex_state = 2},
  [37] = {.lex_state = 67, .external_lex_state = 2},
  [38] = {.lex_state = 68, .external_lex_state = 3},
  [39] = {.lex_state = 67, .external_lex_state = 3},
  [40] = {.lex_state = 68, .external_lex_state = 3},
  [41] = {.lex_state = 67, .external_lex_state = 2},
  [42] = {.lex_state = 67, .external_lex_state = 2},
  [43] = {.lex_state = 67, .external_lex_state = 2},
  [44] = {.lex_state = 67, .external_lex_state = 2},
  [45] = {.lex_state = 67, .external_lex_state = 2},
  [46] = {.lex_state = 68, .external_lex_state = 3},
  [47] = {.lex_state = 67, .external_lex_state = 2},
  [48] = {.lex_state = 67, .external_lex_state = 2},
  [49] = {.lex_state = 67, .external_lex_state = 2},
  [50] = {.lex_state = 67, .external_lex_state = 2},
  [51] = {.lex_state = 67, .external_lex_state = 2},
  [52] = {.lex_state = 66, .external_lex_state = 2},
  [53] = {.lex_state = 66, .external_lex_state = 2},
  [54] = {.lex_state = 65, .external_lex_state = 2},
  [55] = {.lex_state = 65, .external_lex_state = 2},
  [56] = {.lex_state = 67, .external_lex_state = 2},
  [57] = {.lex_state = 67, .external_lex_state = 2},
  [58] = {.lex_state = 67, .external_lex_state = 2},
  [59] = {.lex_state = 66, .external_lex_state = 2},
  [60] = {.lex_state = 66, .external_lex_state = 2},
  [61] = {.lex_state = 68, .external_lex_state = 3},
  [62] = {.lex_state = 67, .external_lex_state = 2},
  [63] = {.lex_state = 67, .external_lex_state = 2},
  [64] = {.lex_state = 66, .external_lex_state = 2},
  [65] = {.lex_state = 67, .external_lex_state = 2},
  [66] = {.lex_state = 67, .external_lex_state = 2},
  [67] = {.lex_state = 67},
  [68] = {.lex_state = 68, .external_lex_state = 5},
  [69] = {.lex_state = 68, .external_lex_state = 2},
  [70] = {.lex_state = 68, .external_lex_state = 2},
  [71] = {.lex_state = 67},
  [72] = {.lex_state = 65, .external_lex_state = 2},
  [73] = {.lex_state = 68, .external_lex_state = 5},
  [74] = {.lex_state = 68, .external_lex_state = 5},
  [75] = {.lex_state = 68},
  [76] = {.lex_state = 68, .external_lex_state = 2},
  [77] = {.lex_state = 68, .external_lex_state = 2},
  [78] = {.lex_state = 68, .external_lex_state = 2},
  [79] = {.lex_state = 68},
  [80] = {.lex_state = 68, .external_lex_state = 2},
  [81] = {.lex_state = 68, .external_lex_state = 2},
  [82] = {.lex_state = 68, .external_lex_state = 2},
  [83] = {.lex_state = 68, .external_lex_state = 5},
  [84] = {.lex_state = 68, .external_lex_state = 2},
  [85] = {.lex_state = 68, .external_lex_state = 5},
  [86] = {.lex_state = 68, .external_lex_state = 5},
  [87] = {.lex_state = 68, .external_lex_state = 2},
  [88] = {.lex_state = 68, .external_lex_state = 2},
  [89] = {.lex_state = 68, .external_lex_state = 2},
  [90] = {.lex_state = 68, .external_lex_state = 2},
  [91] = {.lex_state = 68},
  [92] = {.lex_state = 68, .external_lex_state = 2},
  [93] = {.lex_state = 68, .external_lex_state = 2},
  [94] = {.lex_state = 66, .external_lex_state = 2},
  [95] = {.lex_state = 68, .external_lex_state = 2},
  [96] = {.lex_state = 68, .external_lex_state = 2},
  [97] = {.lex_state = 68, .external_lex_state = 2},
  [98] = {.lex_state = 68, .external_lex_state = 2},
  [99] = {.lex_state = 68, .external_lex_state = 5},
  [100] = {.lex_state = 68, .external_lex_state = 5},
  [101] = {.lex_state = 68, .external_lex_state = 5},
  [102] = {.lex_state = 68},
  [103] = {.lex_state = 68},
  [104] = {.lex_state = 68},
  [105] = {.lex_state = 68},
  [106] = {.lex_state = 68},
  [107] = {.lex_state = 68},
  [108] = {.lex_state = 68},
  [109] = {.lex_state = 5, .external_lex_state = 6},
  [110] = {.lex_state = 68},
  [111] = {.lex_state = 5, .external_lex_state = 6},
  [112] = {.lex_state = 68},
  [113] = {.lex_state = 68},
  [114] = {.lex_state = 68},
  [115] = {.lex_state = 68},
  [116] = {.lex_state = 68},
  [117] = {.lex_state = 68},
  [118] = {.lex_state = 5, .external_lex_state = 6},
  [119] = {.lex_state = 68},
  [120] = {.lex_state = 68},
  [121] = {.lex_state = 68},
  [122] = {.lex_state = 68},
  [123] = {.lex_state = 5, .external_lex_state = 6},
  [124] = {.lex_state = 5, .external_lex_state = 6},
  [125] = {.lex_state = 68},
  [126] = {.lex_state = 68},
  [127] = {.lex_state = 5, .external_lex_state = 6},
  [128] = {.lex_state = 5, .external_lex_state = 6},
  [129] = {.lex_state = 68},
  [130] = {.lex_state = 5, .external_lex_state = 6},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 8},
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
  [143] = {.lex_state = 12},
  [144] = {.lex_state = 12},
  [145] = {.lex_state = 12},
  [146] = {.lex_state = 5, .external_lex_state = 6},
  [147] = {.lex_state = 8, .external_lex_state = 2},
  [148] = {.lex_state = 6, .external_lex_state = 6},
  [149] = {.lex_state = 6, .external_lex_state = 6},
  [150] = {.lex_state = 6, .external_lex_state = 6},
  [151] = {.lex_state = 6, .external_lex_state = 6},
  [152] = {.lex_state = 6, .external_lex_state = 6},
  [153] = {.lex_state = 6, .external_lex_state = 6},
  [154] = {.lex_state = 6, .external_lex_state = 6},
  [155] = {.lex_state = 6, .external_lex_state = 6},
  [156] = {.lex_state = 8, .external_lex_state = 2},
  [157] = {.lex_state = 8},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 8, .external_lex_state = 3},
  [162] = {.lex_state = 8, .external_lex_state = 3},
  [163] = {.lex_state = 8, .external_lex_state = 3},
  [164] = {.lex_state = 8, .external_lex_state = 3},
  [165] = {.lex_state = 8, .external_lex_state = 3},
  [166] = {.lex_state = 8, .external_lex_state = 3},
  [167] = {.lex_state = 6},
  [168] = {.lex_state = 6, .external_lex_state = 6},
  [169] = {.lex_state = 8, .external_lex_state = 2},
  [170] = {.lex_state = 6},
  [171] = {.lex_state = 8, .external_lex_state = 2},
  [172] = {.lex_state = 6, .external_lex_state = 6},
  [173] = {.lex_state = 6},
  [174] = {.lex_state = 6},
  [175] = {.lex_state = 8, .external_lex_state = 3},
  [176] = {.lex_state = 8, .external_lex_state = 2},
  [177] = {.lex_state = 6, .external_lex_state = 6},
  [178] = {.lex_state = 6},
  [179] = {.lex_state = 8, .external_lex_state = 2},
  [180] = {.lex_state = 8, .external_lex_state = 2},
  [181] = {.lex_state = 8, .external_lex_state = 2},
  [182] = {.lex_state = 8, .external_lex_state = 2},
  [183] = {.lex_state = 8},
  [184] = {.lex_state = 8},
  [185] = {.lex_state = 1, .external_lex_state = 2},
  [186] = {.lex_state = 1, .external_lex_state = 2},
  [187] = {.lex_state = 6},
  [188] = {.lex_state = 8},
  [189] = {.lex_state = 6},
  [190] = {.lex_state = 6},
  [191] = {.lex_state = 8, .external_lex_state = 2},
  [192] = {.lex_state = 1, .external_lex_state = 2},
  [193] = {.lex_state = 1, .external_lex_state = 2},
  [194] = {.lex_state = 12},
  [195] = {.lex_state = 8, .external_lex_state = 2},
  [196] = {.lex_state = 8, .external_lex_state = 2},
  [197] = {.lex_state = 8, .external_lex_state = 2},
  [198] = {.lex_state = 8, .external_lex_state = 2},
  [199] = {.lex_state = 8, .external_lex_state = 2},
  [200] = {.lex_state = 1, .external_lex_state = 2},
  [201] = {.lex_state = 8},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 8},
  [204] = {.lex_state = 8, .external_lex_state = 2},
  [205] = {.lex_state = 8, .external_lex_state = 2},
  [206] = {.lex_state = 8, .external_lex_state = 2},
  [207] = {.lex_state = 8, .external_lex_state = 2},
  [208] = {.lex_state = 8, .external_lex_state = 2},
  [209] = {.lex_state = 8, .external_lex_state = 2},
  [210] = {.lex_state = 8, .external_lex_state = 2},
  [211] = {.lex_state = 8, .external_lex_state = 2},
  [212] = {.lex_state = 8},
  [213] = {.lex_state = 8, .external_lex_state = 2},
  [214] = {.lex_state = 1, .external_lex_state = 6},
  [215] = {.lex_state = 1, .external_lex_state = 6},
  [216] = {.lex_state = 8},
  [217] = {.lex_state = 8},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 1, .external_lex_state = 6},
  [220] = {.lex_state = 8},
  [221] = {.lex_state = 1, .external_lex_state = 6},
  [222] = {.lex_state = 1, .external_lex_state = 6},
  [223] = {.lex_state = 1, .external_lex_state = 6},
  [224] = {.lex_state = 1, .external_lex_state = 6},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 1, .external_lex_state = 6},
  [227] = {.lex_state = 8},
  [228] = {.lex_state = 9},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 1, .external_lex_state = 6},
  [231] = {.lex_state = 1, .external_lex_state = 6},
  [232] = {.lex_state = 8},
  [233] = {.lex_state = 1, .external_lex_state = 6},
  [234] = {.lex_state = 1, .external_lex_state = 6},
  [235] = {.lex_state = 2, .external_lex_state = 6},
  [236] = {.lex_state = 1, .external_lex_state = 6},
  [237] = {.lex_state = 1},
  [238] = {.lex_state = 8},
  [239] = {.lex_state = 1, .external_lex_state = 6},
  [240] = {.lex_state = 8},
  [241] = {.lex_state = 8},
  [242] = {.lex_state = 1, .external_lex_state = 6},
  [243] = {.lex_state = 8},
  [244] = {.lex_state = 8},
  [245] = {.lex_state = 9},
  [246] = {.lex_state = 1, .external_lex_state = 6},
  [247] = {.lex_state = 1, .external_lex_state = 6},
  [248] = {.lex_state = 8},
  [249] = {.lex_state = 2, .external_lex_state = 6},
  [250] = {.lex_state = 1, .external_lex_state = 6},
  [251] = {.lex_state = 8},
  [252] = {.lex_state = 1, .external_lex_state = 6},
  [253] = {.lex_state = 1, .external_lex_state = 6},
  [254] = {.lex_state = 2},
  [255] = {.lex_state = 1},
  [256] = {.lex_state = 1},
  [257] = {.lex_state = 2},
  [258] = {.lex_state = 5},
  [259] = {.lex_state = 5},
  [260] = {.lex_state = 2},
  [261] = {.lex_state = 5},
  [262] = {.lex_state = 1},
  [263] = {.lex_state = 1},
  [264] = {.lex_state = 2},
  [265] = {.lex_state = 5},
  [266] = {.lex_state = 2},
  [267] = {.lex_state = 1},
  [268] = {.lex_state = 8},
  [269] = {.lex_state = 1},
  [270] = {.lex_state = 1},
  [271] = {.lex_state = 2},
  [272] = {.lex_state = 2},
  [273] = {.lex_state = 2},
  [274] = {.lex_state = 1},
  [275] = {.lex_state = 1, .external_lex_state = 6},
  [276] = {.lex_state = 1},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 1, .external_lex_state = 2},
  [279] = {.lex_state = 1},
  [280] = {.lex_state = 1},
  [281] = {.lex_state = 5},
  [282] = {.lex_state = 5},
  [283] = {.lex_state = 5},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 2},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 5},
  [288] = {.lex_state = 5},
  [289] = {.lex_state = 5},
  [290] = {.lex_state = 1},
  [291] = {.lex_state = 5},
  [292] = {.lex_state = 5},
  [293] = {.lex_state = 2},
  [294] = {.lex_state = 5},
  [295] = {.lex_state = 10},
  [296] = {.lex_state = 7, .external_lex_state = 6},
  [297] = {.lex_state = 10},
  [298] = {.lex_state = 2},
  [299] = {.lex_state = 11},
  [300] = {.lex_state = 11},
  [301] = {.lex_state = 0, .external_lex_state = 5},
  [302] = {.lex_state = 0, .external_lex_state = 6},
  [303] = {.lex_state = 3},
  [304] = {.lex_state = 12},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0, .external_lex_state = 6},
  [307] = {.lex_state = 0, .external_lex_state = 6},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 2},
  [310] = {.lex_state = 4},
  [311] = {.lex_state = 249},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0, .external_lex_state = 6},
  [314] = {.lex_state = 0, .external_lex_state = 5},
  [315] = {.lex_state = 0, .external_lex_state = 6},
  [316] = {.lex_state = 0, .external_lex_state = 6},
  [317] = {.lex_state = 0, .external_lex_state = 6},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 58},
  [320] = {.lex_state = 0, .external_lex_state = 6},
  [321] = {.lex_state = 0, .external_lex_state = 5},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 249},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 58},
  [326] = {.lex_state = 0, .external_lex_state = 5},
  [327] = {.lex_state = 0, .external_lex_state = 6},
  [328] = {.lex_state = 0, .external_lex_state = 5},
  [329] = {.lex_state = 0, .external_lex_state = 5},
  [330] = {.lex_state = 0, .external_lex_state = 5},
  [331] = {.lex_state = 0, .external_lex_state = 6},
  [332] = {.lex_state = 0, .external_lex_state = 6},
  [333] = {.lex_state = 0, .external_lex_state = 6},
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
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
  [4] = {
    [ts_external_token__newline] = true,
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
    [sym_source_file] = STATE(322),
    [sym_doctype] = STATE(3),
    [sym_conditional] = STATE(3),
    [sym_case] = STATE(3),
    [sym_unescaped_buffered_code] = STATE(3),
    [sym_buffered_code] = STATE(3),
    [sym_tag] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_unbuffered_code] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_doctype] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_elseif] = ACTIONS(9),
    [anon_sym_unless] = ACTIONS(7),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_case] = ACTIONS(13),
    [anon_sym_BANG_EQ] = ACTIONS(15),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_SLASH_SLASH] = ACTIONS(19),
    [sym_tag_name] = ACTIONS(21),
    [sym_class] = ACTIONS(23),
    [sym_id] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_doctype,
    ACTIONS(35), 1,
      anon_sym_elseif,
    ACTIONS(38), 1,
      anon_sym_else,
    ACTIONS(41), 1,
      anon_sym_case,
    ACTIONS(44), 1,
      anon_sym_BANG_EQ,
    ACTIONS(47), 1,
      anon_sym_EQ,
    ACTIONS(50), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(53), 1,
      sym_tag_name,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(32), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(56), 2,
      sym_class,
      sym_id,
    STATE(2), 9,
      sym_doctype,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_tag,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_source_file_repeat1,
  [50] = 13,
    ACTIONS(5), 1,
      anon_sym_doctype,
    ACTIONS(9), 1,
      anon_sym_elseif,
    ACTIONS(11), 1,
      anon_sym_else,
    ACTIONS(13), 1,
      anon_sym_case,
    ACTIONS(15), 1,
      anon_sym_BANG_EQ,
    ACTIONS(17), 1,
      anon_sym_EQ,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      sym_tag_name,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(23), 2,
      sym_class,
      sym_id,
    STATE(2), 9,
      sym_doctype,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_tag,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_source_file_repeat1,
  [100] = 6,
    ACTIONS(68), 1,
      anon_sym_PIPE,
    ACTIONS(71), 1,
      sym_tag_name,
    ACTIONS(74), 2,
      sym_class,
      sym_id,
    STATE(4), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(64), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
    ACTIONS(66), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
  [135] = 7,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    ACTIONS(83), 1,
      sym_tag_name,
    ACTIONS(87), 1,
      sym__dedent,
    ACTIONS(85), 2,
      sym_class,
      sym_id,
    STATE(4), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(77), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
    ACTIONS(79), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
  [172] = 7,
    ACTIONS(83), 1,
      sym_tag_name,
    ACTIONS(93), 1,
      anon_sym_DASH,
    STATE(56), 1,
      sym_unbuffered_code,
    ACTIONS(85), 2,
      sym_class,
      sym_id,
    STATE(25), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(89), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
    ACTIONS(91), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
  [207] = 4,
    ACTIONS(99), 1,
      sym__indent,
    STATE(43), 1,
      sym_children,
    ACTIONS(97), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(95), 10,
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
  [236] = 7,
    ACTIONS(101), 1,
      anon_sym_PIPE,
    ACTIONS(103), 1,
      sym_tag_name,
    ACTIONS(107), 1,
      sym__dedent,
    ACTIONS(105), 2,
      sym_class,
      sym_id,
    STATE(13), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(79), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
    ACTIONS(77), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [271] = 7,
    ACTIONS(83), 1,
      sym_tag_name,
    ACTIONS(93), 1,
      anon_sym_DASH,
    STATE(57), 1,
      sym_unbuffered_code,
    ACTIONS(85), 2,
      sym_class,
      sym_id,
    STATE(26), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(109), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
    ACTIONS(111), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
  [306] = 4,
    ACTIONS(117), 1,
      sym__indent,
    STATE(29), 1,
      sym_children,
    ACTIONS(115), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(113), 10,
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
  [335] = 7,
    ACTIONS(101), 1,
      anon_sym_PIPE,
    ACTIONS(103), 1,
      sym_tag_name,
    ACTIONS(119), 1,
      sym__dedent,
    ACTIONS(105), 2,
      sym_class,
      sym_id,
    STATE(13), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(79), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
    ACTIONS(77), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [370] = 4,
    ACTIONS(125), 1,
      sym__indent,
    STATE(37), 1,
      sym_children,
    ACTIONS(123), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(121), 10,
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
  [399] = 6,
    ACTIONS(127), 1,
      anon_sym_PIPE,
    ACTIONS(130), 1,
      sym_tag_name,
    ACTIONS(133), 2,
      sym_class,
      sym_id,
    STATE(13), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(66), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
    ACTIONS(64), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [432] = 4,
    ACTIONS(125), 1,
      sym__indent,
    STATE(41), 1,
      sym_children,
    ACTIONS(138), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(136), 10,
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
  [461] = 4,
    ACTIONS(140), 1,
      sym__indent,
    STATE(41), 1,
      sym_children,
    ACTIONS(138), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(136), 10,
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
  [490] = 4,
    ACTIONS(125), 1,
      sym__indent,
    STATE(31), 1,
      sym_children,
    ACTIONS(144), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(142), 10,
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
  [519] = 6,
    ACTIONS(150), 1,
      anon_sym_COLON,
    ACTIONS(152), 1,
      sym__newline,
    ACTIONS(154), 1,
      sym__dedent,
    STATE(65), 1,
      sym__when_content,
    ACTIONS(146), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(148), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
  [552] = 5,
    ACTIONS(160), 1,
      sym_tag_name,
    ACTIONS(163), 2,
      sym_class,
      sym_id,
    STATE(18), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(156), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
    ACTIONS(158), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
  [582] = 4,
    ACTIONS(170), 1,
      sym__un_delimited_javascript_line,
    STATE(24), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(166), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(168), 15,
      anon_sym_doctype,
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
  [610] = 2,
    ACTIONS(174), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(172), 11,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [634] = 6,
    ACTIONS(180), 1,
      anon_sym_when,
    ACTIONS(183), 1,
      anon_sym_default,
    STATE(17), 1,
      sym__when_keyword,
    STATE(21), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(178), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(176), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [666] = 6,
    ACTIONS(190), 1,
      anon_sym_when,
    ACTIONS(192), 1,
      anon_sym_default,
    STATE(17), 1,
      sym__when_keyword,
    STATE(21), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(188), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(186), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [698] = 3,
    ACTIONS(198), 1,
      sym__indent,
    ACTIONS(196), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(194), 10,
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
  [724] = 4,
    ACTIONS(204), 1,
      sym__un_delimited_javascript_line,
    STATE(24), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(200), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(202), 15,
      anon_sym_doctype,
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
  [752] = 5,
    ACTIONS(83), 1,
      sym_tag_name,
    ACTIONS(85), 2,
      sym_class,
      sym_id,
    STATE(18), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(109), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
    ACTIONS(111), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
  [782] = 5,
    ACTIONS(83), 1,
      sym_tag_name,
    ACTIONS(85), 2,
      sym_class,
      sym_id,
    STATE(18), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(207), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
    ACTIONS(209), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
  [812] = 2,
    ACTIONS(138), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(136), 10,
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
  [835] = 2,
    ACTIONS(213), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(211), 10,
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
  [858] = 2,
    ACTIONS(138), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(136), 10,
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
  [881] = 4,
    ACTIONS(215), 1,
      sym__indent,
    STATE(77), 1,
      sym_children,
    ACTIONS(138), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(136), 10,
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
  [908] = 2,
    ACTIONS(123), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(121), 10,
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
  [931] = 2,
    ACTIONS(123), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(121), 10,
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
  [954] = 4,
    ACTIONS(217), 1,
      sym__indent,
    STATE(96), 1,
      sym_children,
    ACTIONS(144), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(142), 10,
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
  [981] = 2,
    ACTIONS(219), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(221), 16,
      anon_sym_doctype,
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
  [1004] = 4,
    ACTIONS(223), 1,
      sym__indent,
    STATE(88), 1,
      sym_children,
    ACTIONS(97), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(95), 10,
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
  [1031] = 2,
    ACTIONS(227), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(225), 10,
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
  [1054] = 2,
    ACTIONS(231), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(229), 10,
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
  [1077] = 4,
    ACTIONS(217), 1,
      sym__indent,
    STATE(84), 1,
      sym_children,
    ACTIONS(123), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(121), 10,
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
  [1104] = 4,
    ACTIONS(237), 1,
      sym__indent,
    ACTIONS(239), 1,
      sym__dedent,
    ACTIONS(233), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(235), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
  [1131] = 4,
    ACTIONS(217), 1,
      sym__indent,
    STATE(77), 1,
      sym_children,
    ACTIONS(138), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(136), 10,
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
  [1158] = 2,
    ACTIONS(144), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(142), 10,
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
  [1181] = 2,
    ACTIONS(115), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(113), 10,
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
  [1204] = 2,
    ACTIONS(115), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(113), 10,
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
  [1227] = 2,
    ACTIONS(144), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(142), 10,
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
  [1250] = 2,
    ACTIONS(97), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(95), 10,
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
  [1273] = 4,
    ACTIONS(241), 1,
      sym__indent,
    STATE(80), 1,
      sym_children,
    ACTIONS(115), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(113), 10,
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
  [1300] = 2,
    ACTIONS(245), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(243), 10,
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
  [1323] = 2,
    ACTIONS(249), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(247), 10,
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
  [1346] = 2,
    ACTIONS(253), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(251), 10,
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
  [1369] = 2,
    ACTIONS(257), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(255), 10,
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
  [1392] = 2,
    ACTIONS(261), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(259), 10,
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
  [1415] = 5,
    ACTIONS(263), 1,
      ts_builtin_sym_end,
    ACTIONS(267), 1,
      sym__comment_content,
    ACTIONS(269), 1,
      sym__dedent,
    STATE(59), 1,
      aux_sym_comment_repeat1,
    ACTIONS(265), 13,
      anon_sym_doctype,
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
  [1443] = 5,
    ACTIONS(267), 1,
      sym__comment_content,
    ACTIONS(271), 1,
      ts_builtin_sym_end,
    ACTIONS(275), 1,
      sym__dedent,
    STATE(64), 1,
      aux_sym_comment_repeat1,
    ACTIONS(273), 13,
      anon_sym_doctype,
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
  [1471] = 4,
    ACTIONS(277), 1,
      sym__un_delimited_javascript_line,
    STATE(55), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(166), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(168), 13,
      anon_sym_doctype,
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
  [1497] = 4,
    ACTIONS(279), 1,
      sym__un_delimited_javascript_line,
    STATE(55), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(200), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(202), 13,
      anon_sym_doctype,
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
  [1523] = 2,
    ACTIONS(111), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(109), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1545] = 2,
    ACTIONS(209), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(207), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1567] = 2,
    ACTIONS(284), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(282), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1589] = 5,
    ACTIONS(267), 1,
      sym__comment_content,
    ACTIONS(286), 1,
      ts_builtin_sym_end,
    ACTIONS(290), 1,
      sym__dedent,
    STATE(60), 1,
      aux_sym_comment_repeat1,
    ACTIONS(288), 13,
      anon_sym_doctype,
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
  [1617] = 4,
    ACTIONS(296), 1,
      sym__comment_content,
    STATE(60), 1,
      aux_sym_comment_repeat1,
    ACTIONS(292), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(294), 13,
      anon_sym_doctype,
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
  [1643] = 3,
    ACTIONS(299), 1,
      sym__indent,
    ACTIONS(196), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(194), 10,
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
  [1667] = 3,
    ACTIONS(305), 1,
      sym__dedent,
    ACTIONS(301), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(303), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
  [1691] = 3,
    ACTIONS(311), 1,
      sym__dedent,
    ACTIONS(307), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(309), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
  [1715] = 5,
    ACTIONS(263), 1,
      ts_builtin_sym_end,
    ACTIONS(267), 1,
      sym__comment_content,
    ACTIONS(269), 1,
      sym__dedent,
    STATE(60), 1,
      aux_sym_comment_repeat1,
    ACTIONS(265), 13,
      anon_sym_doctype,
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
  [1743] = 3,
    ACTIONS(239), 1,
      sym__dedent,
    ACTIONS(233), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(235), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
  [1767] = 2,
    ACTIONS(315), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(313), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1789] = 2,
    ACTIONS(317), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(319), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
  [1810] = 4,
    ACTIONS(321), 1,
      sym__indent,
    STATE(108), 1,
      sym_children,
    ACTIONS(123), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(121), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1835] = 2,
    ACTIONS(227), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(225), 10,
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
  [1856] = 2,
    ACTIONS(257), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(255), 10,
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
  [1877] = 2,
    ACTIONS(233), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
    ACTIONS(235), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
  [1898] = 2,
    ACTIONS(219), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(221), 14,
      anon_sym_doctype,
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
  [1919] = 4,
    ACTIONS(321), 1,
      sym__indent,
    STATE(106), 1,
      sym_children,
    ACTIONS(138), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(136), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1944] = 4,
    ACTIONS(321), 1,
      sym__indent,
    STATE(116), 1,
      sym_children,
    ACTIONS(144), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(142), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1969] = 5,
    ACTIONS(323), 1,
      sym_tag_name,
    ACTIONS(326), 2,
      sym_class,
      sym_id,
    STATE(75), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(158), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
    ACTIONS(156), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [1996] = 2,
    ACTIONS(144), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(142), 10,
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
  [2017] = 2,
    ACTIONS(144), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(142), 10,
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
  [2038] = 2,
    ACTIONS(213), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(211), 10,
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
  [2059] = 3,
    STATE(75), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(331), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(329), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2082] = 2,
    ACTIONS(138), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(136), 10,
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
  [2103] = 2,
    ACTIONS(253), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(251), 10,
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
  [2124] = 2,
    ACTIONS(138), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(136), 10,
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
  [2145] = 4,
    ACTIONS(333), 1,
      sym__indent,
    STATE(110), 1,
      sym_children,
    ACTIONS(115), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(113), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2170] = 2,
    ACTIONS(231), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(229), 10,
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
  [2191] = 4,
    ACTIONS(335), 1,
      sym__indent,
    STATE(106), 1,
      sym_children,
    ACTIONS(138), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(136), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2216] = 4,
    ACTIONS(337), 1,
      sym__indent,
    STATE(104), 1,
      sym_children,
    ACTIONS(97), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(95), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2241] = 2,
    ACTIONS(115), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(113), 10,
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
  [2262] = 2,
    ACTIONS(115), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(113), 10,
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
  [2283] = 2,
    ACTIONS(249), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(247), 10,
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
  [2304] = 2,
    ACTIONS(245), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(243), 10,
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
  [2325] = 3,
    STATE(75), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(341), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(339), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2348] = 2,
    ACTIONS(261), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(259), 10,
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
  [2369] = 2,
    ACTIONS(97), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(95), 10,
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
  [2390] = 2,
    ACTIONS(292), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(294), 14,
      anon_sym_doctype,
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
  [2411] = 2,
    ACTIONS(123), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(121), 10,
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
  [2432] = 2,
    ACTIONS(123), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(121), 10,
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
  [2453] = 3,
    ACTIONS(343), 1,
      sym__dedent,
    ACTIONS(303), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(301), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2475] = 3,
    ACTIONS(345), 1,
      sym__dedent,
    ACTIONS(309), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(307), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2497] = 3,
    ACTIONS(347), 1,
      sym__indent,
    ACTIONS(196), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(194), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2519] = 3,
    ACTIONS(349), 1,
      sym__indent,
    ACTIONS(273), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(271), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2541] = 3,
    ACTIONS(355), 1,
      sym__indent,
    ACTIONS(353), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(351), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2563] = 2,
    ACTIONS(359), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(357), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2582] = 2,
    ACTIONS(227), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(225), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2601] = 2,
    ACTIONS(115), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(113), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2620] = 2,
    ACTIONS(315), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(313), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2639] = 2,
    ACTIONS(144), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(142), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2658] = 2,
    ACTIONS(288), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(286), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2677] = 2,
    ACTIONS(231), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(229), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2696] = 11,
    ACTIONS(361), 1,
      anon_sym_COLON,
    ACTIONS(363), 1,
      anon_sym_BANG_EQ,
    ACTIONS(365), 1,
      anon_sym_EQ,
    ACTIONS(367), 1,
      anon_sym_,
    ACTIONS(369), 1,
      anon_sym_DOT,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      sym__newline,
    STATE(118), 1,
      aux_sym_tag_repeat1,
    STATE(153), 1,
      sym_attributes,
    ACTIONS(373), 2,
      sym_class,
      sym_id,
    STATE(113), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [2733] = 2,
    ACTIONS(138), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(136), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2752] = 11,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(377), 1,
      anon_sym_COLON,
    ACTIONS(379), 1,
      anon_sym_BANG_EQ,
    ACTIONS(381), 1,
      anon_sym_EQ,
    ACTIONS(383), 1,
      anon_sym_,
    ACTIONS(385), 1,
      anon_sym_DOT,
    ACTIONS(389), 1,
      sym__newline,
    STATE(123), 1,
      aux_sym_tag_repeat1,
    STATE(152), 1,
      sym_attributes,
    ACTIONS(387), 2,
      sym_class,
      sym_id,
    STATE(93), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [2789] = 2,
    ACTIONS(284), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(282), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2808] = 2,
    ACTIONS(97), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(95), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2827] = 2,
    ACTIONS(265), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(263), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2846] = 2,
    ACTIONS(123), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(121), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2865] = 2,
    ACTIONS(123), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(121), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2884] = 2,
    ACTIONS(213), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(211), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2903] = 11,
    ACTIONS(363), 1,
      anon_sym_BANG_EQ,
    ACTIONS(365), 1,
      anon_sym_EQ,
    ACTIONS(369), 1,
      anon_sym_DOT,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      anon_sym_COLON,
    ACTIONS(393), 1,
      anon_sym_,
    ACTIONS(397), 1,
      sym__newline,
    STATE(146), 1,
      aux_sym_tag_repeat1,
    STATE(155), 1,
      sym_attributes,
    ACTIONS(395), 2,
      sym_class,
      sym_id,
    STATE(125), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [2940] = 2,
    ACTIONS(401), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(399), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2959] = 2,
    ACTIONS(144), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(142), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2978] = 2,
    ACTIONS(245), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(243), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2997] = 2,
    ACTIONS(257), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(255), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3016] = 11,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      anon_sym_BANG_EQ,
    ACTIONS(381), 1,
      anon_sym_EQ,
    ACTIONS(385), 1,
      anon_sym_DOT,
    ACTIONS(403), 1,
      anon_sym_COLON,
    ACTIONS(405), 1,
      anon_sym_,
    ACTIONS(407), 1,
      sym__newline,
    STATE(146), 1,
      aux_sym_tag_repeat1,
    STATE(150), 1,
      sym_attributes,
    ACTIONS(395), 2,
      sym_class,
      sym_id,
    STATE(87), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3053] = 11,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(409), 1,
      anon_sym_COLON,
    ACTIONS(411), 1,
      anon_sym_BANG_EQ,
    ACTIONS(413), 1,
      anon_sym_EQ,
    ACTIONS(415), 1,
      anon_sym_,
    ACTIONS(417), 1,
      anon_sym_DOT,
    ACTIONS(419), 1,
      sym__newline,
    STATE(146), 1,
      aux_sym_tag_repeat1,
    STATE(151), 1,
      sym_attributes,
    ACTIONS(395), 2,
      sym_class,
      sym_id,
    STATE(42), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3090] = 2,
    ACTIONS(115), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(113), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3109] = 2,
    ACTIONS(249), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(247), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3128] = 11,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      anon_sym_COLON,
    ACTIONS(423), 1,
      anon_sym_BANG_EQ,
    ACTIONS(425), 1,
      anon_sym_EQ,
    ACTIONS(427), 1,
      anon_sym_,
    ACTIONS(429), 1,
      anon_sym_DOT,
    ACTIONS(433), 1,
      sym__newline,
    STATE(128), 1,
      aux_sym_tag_repeat1,
    STATE(148), 1,
      sym_attributes,
    ACTIONS(431), 2,
      sym_class,
      sym_id,
    STATE(206), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3165] = 11,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(423), 1,
      anon_sym_BANG_EQ,
    ACTIONS(425), 1,
      anon_sym_EQ,
    ACTIONS(429), 1,
      anon_sym_DOT,
    ACTIONS(435), 1,
      anon_sym_COLON,
    ACTIONS(437), 1,
      anon_sym_,
    ACTIONS(439), 1,
      sym__newline,
    STATE(146), 1,
      aux_sym_tag_repeat1,
    STATE(154), 1,
      sym_attributes,
    ACTIONS(395), 2,
      sym_class,
      sym_id,
    STATE(181), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3202] = 2,
    ACTIONS(138), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(136), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3221] = 11,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    ACTIONS(411), 1,
      anon_sym_BANG_EQ,
    ACTIONS(413), 1,
      anon_sym_EQ,
    ACTIONS(417), 1,
      anon_sym_DOT,
    ACTIONS(441), 1,
      anon_sym_COLON,
    ACTIONS(443), 1,
      anon_sym_,
    ACTIONS(447), 1,
      sym__newline,
    STATE(124), 1,
      aux_sym_tag_repeat1,
    STATE(149), 1,
      sym_attributes,
    ACTIONS(445), 2,
      sym_class,
      sym_id,
    STATE(45), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3258] = 6,
    ACTIONS(15), 1,
      anon_sym_BANG_EQ,
    ACTIONS(17), 1,
      anon_sym_EQ,
    ACTIONS(101), 1,
      anon_sym_PIPE,
    STATE(120), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(105), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(11), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3283] = 6,
    ACTIONS(101), 1,
      anon_sym_PIPE,
    ACTIONS(449), 1,
      anon_sym_BANG_EQ,
    ACTIONS(451), 1,
      anon_sym_EQ,
    STATE(76), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(105), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(8), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3308] = 6,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    ACTIONS(453), 1,
      anon_sym_BANG_EQ,
    ACTIONS(455), 1,
      anon_sym_EQ,
    STATE(32), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(85), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(5), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3333] = 6,
    ACTIONS(15), 1,
      anon_sym_BANG_EQ,
    ACTIONS(17), 1,
      anon_sym_EQ,
    ACTIONS(101), 1,
      anon_sym_PIPE,
    STATE(115), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(105), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(11), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3358] = 6,
    ACTIONS(15), 1,
      anon_sym_BANG_EQ,
    ACTIONS(17), 1,
      anon_sym_EQ,
    ACTIONS(101), 1,
      anon_sym_PIPE,
    STATE(129), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(105), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(11), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3383] = 6,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    ACTIONS(453), 1,
      anon_sym_BANG_EQ,
    ACTIONS(455), 1,
      anon_sym_EQ,
    STATE(44), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(85), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(5), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3408] = 6,
    ACTIONS(101), 1,
      anon_sym_PIPE,
    ACTIONS(449), 1,
      anon_sym_BANG_EQ,
    ACTIONS(451), 1,
      anon_sym_EQ,
    STATE(82), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(105), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(8), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3433] = 6,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    ACTIONS(453), 1,
      anon_sym_BANG_EQ,
    ACTIONS(455), 1,
      anon_sym_EQ,
    STATE(27), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(85), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(5), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3458] = 6,
    ACTIONS(101), 1,
      anon_sym_PIPE,
    ACTIONS(449), 1,
      anon_sym_BANG_EQ,
    ACTIONS(451), 1,
      anon_sym_EQ,
    STATE(95), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(105), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(8), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3483] = 6,
    ACTIONS(457), 1,
      anon_sym_PIPE,
    ACTIONS(459), 1,
      anon_sym_BANG_EQ,
    ACTIONS(461), 1,
      anon_sym_EQ,
    STATE(196), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(463), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(147), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3508] = 6,
    ACTIONS(457), 1,
      anon_sym_PIPE,
    ACTIONS(459), 1,
      anon_sym_BANG_EQ,
    ACTIONS(461), 1,
      anon_sym_EQ,
    STATE(211), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(463), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(147), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3533] = 6,
    ACTIONS(457), 1,
      anon_sym_PIPE,
    ACTIONS(459), 1,
      anon_sym_BANG_EQ,
    ACTIONS(461), 1,
      anon_sym_EQ,
    STATE(208), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(463), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(147), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3558] = 8,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
    ACTIONS(467), 1,
      aux_sym__attribute_token1,
    STATE(145), 1,
      aux_sym_attributes_repeat1,
    STATE(173), 1,
      sym_js_attribute_name,
    STATE(174), 1,
      sym_attribute_name,
    STATE(282), 1,
      sym_attribute,
    STATE(291), 2,
      sym__attribute,
      sym__js_attribute,
    ACTIONS(469), 3,
      aux_sym_js_attribute_name_token1,
      aux_sym_js_attribute_name_token2,
      aux_sym_js_attribute_name_token3,
  [3586] = 8,
    ACTIONS(467), 1,
      aux_sym__attribute_token1,
    ACTIONS(471), 1,
      anon_sym_RPAREN,
    STATE(143), 1,
      aux_sym_attributes_repeat1,
    STATE(173), 1,
      sym_js_attribute_name,
    STATE(174), 1,
      sym_attribute_name,
    STATE(289), 1,
      sym_attribute,
    STATE(291), 2,
      sym__attribute,
      sym__js_attribute,
    ACTIONS(469), 3,
      aux_sym_js_attribute_name_token1,
      aux_sym_js_attribute_name_token2,
      aux_sym_js_attribute_name_token3,
  [3614] = 8,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    ACTIONS(475), 1,
      aux_sym__attribute_token1,
    STATE(145), 1,
      aux_sym_attributes_repeat1,
    STATE(173), 1,
      sym_js_attribute_name,
    STATE(174), 1,
      sym_attribute_name,
    STATE(294), 1,
      sym_attribute,
    STATE(291), 2,
      sym__attribute,
      sym__js_attribute,
    ACTIONS(478), 3,
      aux_sym_js_attribute_name_token1,
      aux_sym_js_attribute_name_token2,
      aux_sym_js_attribute_name_token3,
  [3642] = 4,
    STATE(146), 1,
      aux_sym_tag_repeat1,
    ACTIONS(483), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(485), 2,
      sym_class,
      sym_id,
    ACTIONS(481), 5,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LPAREN,
  [3661] = 4,
    ACTIONS(457), 1,
      anon_sym_PIPE,
    ACTIONS(488), 1,
      sym__dedent,
    ACTIONS(463), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(156), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3679] = 7,
    ACTIONS(423), 1,
      anon_sym_BANG_EQ,
    ACTIONS(425), 1,
      anon_sym_EQ,
    ACTIONS(429), 1,
      anon_sym_DOT,
    ACTIONS(435), 1,
      anon_sym_COLON,
    ACTIONS(437), 1,
      anon_sym_,
    ACTIONS(439), 1,
      sym__newline,
    STATE(181), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3703] = 7,
    ACTIONS(409), 1,
      anon_sym_COLON,
    ACTIONS(411), 1,
      anon_sym_BANG_EQ,
    ACTIONS(413), 1,
      anon_sym_EQ,
    ACTIONS(415), 1,
      anon_sym_,
    ACTIONS(417), 1,
      anon_sym_DOT,
    ACTIONS(419), 1,
      sym__newline,
    STATE(42), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3727] = 7,
    ACTIONS(379), 1,
      anon_sym_BANG_EQ,
    ACTIONS(381), 1,
      anon_sym_EQ,
    ACTIONS(385), 1,
      anon_sym_DOT,
    ACTIONS(490), 1,
      anon_sym_COLON,
    ACTIONS(492), 1,
      anon_sym_,
    ACTIONS(494), 1,
      sym__newline,
    STATE(82), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3751] = 7,
    ACTIONS(411), 1,
      anon_sym_BANG_EQ,
    ACTIONS(413), 1,
      anon_sym_EQ,
    ACTIONS(417), 1,
      anon_sym_DOT,
    ACTIONS(496), 1,
      anon_sym_COLON,
    ACTIONS(498), 1,
      anon_sym_,
    ACTIONS(500), 1,
      sym__newline,
    STATE(27), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3775] = 7,
    ACTIONS(379), 1,
      anon_sym_BANG_EQ,
    ACTIONS(381), 1,
      anon_sym_EQ,
    ACTIONS(385), 1,
      anon_sym_DOT,
    ACTIONS(403), 1,
      anon_sym_COLON,
    ACTIONS(405), 1,
      anon_sym_,
    ACTIONS(407), 1,
      sym__newline,
    STATE(87), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3799] = 7,
    ACTIONS(363), 1,
      anon_sym_BANG_EQ,
    ACTIONS(365), 1,
      anon_sym_EQ,
    ACTIONS(369), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_COLON,
    ACTIONS(393), 1,
      anon_sym_,
    ACTIONS(397), 1,
      sym__newline,
    STATE(125), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3823] = 7,
    ACTIONS(423), 1,
      anon_sym_BANG_EQ,
    ACTIONS(425), 1,
      anon_sym_EQ,
    ACTIONS(429), 1,
      anon_sym_DOT,
    ACTIONS(502), 1,
      anon_sym_COLON,
    ACTIONS(504), 1,
      anon_sym_,
    ACTIONS(506), 1,
      sym__newline,
    STATE(211), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3847] = 7,
    ACTIONS(363), 1,
      anon_sym_BANG_EQ,
    ACTIONS(365), 1,
      anon_sym_EQ,
    ACTIONS(369), 1,
      anon_sym_DOT,
    ACTIONS(508), 1,
      anon_sym_COLON,
    ACTIONS(510), 1,
      anon_sym_,
    ACTIONS(512), 1,
      sym__newline,
    STATE(129), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3871] = 4,
    ACTIONS(64), 1,
      sym__dedent,
    ACTIONS(514), 1,
      anon_sym_PIPE,
    ACTIONS(517), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(156), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3889] = 3,
    ACTIONS(457), 1,
      anon_sym_PIPE,
    ACTIONS(463), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(147), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3904] = 3,
    ACTIONS(101), 1,
      anon_sym_PIPE,
    ACTIONS(105), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(8), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3919] = 3,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    ACTIONS(85), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(5), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3934] = 3,
    ACTIONS(101), 1,
      anon_sym_PIPE,
    ACTIONS(105), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(11), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3949] = 3,
    ACTIONS(520), 1,
      sym__indent,
    STATE(195), 1,
      sym_children,
    ACTIONS(121), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [3963] = 3,
    ACTIONS(522), 1,
      sym__indent,
    STATE(213), 1,
      sym_children,
    ACTIONS(113), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [3977] = 3,
    ACTIONS(520), 1,
      sym__indent,
    STATE(210), 1,
      sym_children,
    ACTIONS(136), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [3991] = 3,
    ACTIONS(524), 1,
      sym__indent,
    STATE(209), 1,
      sym_children,
    ACTIONS(95), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4005] = 3,
    ACTIONS(520), 1,
      sym__indent,
    STATE(197), 1,
      sym_children,
    ACTIONS(142), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4019] = 3,
    ACTIONS(526), 1,
      sym__indent,
    STATE(210), 1,
      sym_children,
    ACTIONS(136), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4033] = 5,
    ACTIONS(528), 1,
      anon_sym_EQ,
    ACTIONS(530), 1,
      anon_sym_,
    ACTIONS(532), 1,
      anon_sym_DOT,
    STATE(170), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(534), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4050] = 2,
    ACTIONS(538), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(536), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [4061] = 3,
    ACTIONS(540), 1,
      sym__dedent,
    STATE(179), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(463), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4074] = 4,
    ACTIONS(544), 1,
      anon_sym_,
    ACTIONS(546), 1,
      anon_sym_DOT,
    STATE(170), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(542), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4089] = 3,
    ACTIONS(549), 1,
      sym__dedent,
    STATE(179), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(463), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4102] = 2,
    ACTIONS(553), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(551), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [4113] = 5,
    ACTIONS(532), 1,
      anon_sym_DOT,
    ACTIONS(555), 1,
      anon_sym_EQ,
    ACTIONS(557), 1,
      anon_sym_,
    STATE(167), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(559), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4130] = 5,
    ACTIONS(532), 1,
      anon_sym_DOT,
    ACTIONS(561), 1,
      anon_sym_EQ,
    ACTIONS(563), 1,
      anon_sym_,
    STATE(178), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(565), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4147] = 2,
    ACTIONS(567), 1,
      sym__indent,
    ACTIONS(194), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4158] = 3,
    ACTIONS(569), 1,
      sym__dedent,
    STATE(179), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(463), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4171] = 2,
    ACTIONS(573), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(571), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [4182] = 5,
    ACTIONS(532), 1,
      anon_sym_DOT,
    ACTIONS(575), 1,
      anon_sym_EQ,
    ACTIONS(577), 1,
      anon_sym_,
    STATE(170), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(579), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4199] = 3,
    ACTIONS(156), 1,
      sym__dedent,
    STATE(179), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(581), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4212] = 3,
    ACTIONS(584), 1,
      sym__dedent,
    STATE(179), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(463), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4225] = 1,
    ACTIONS(113), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4233] = 1,
    ACTIONS(211), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4241] = 2,
    STATE(176), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(463), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4251] = 2,
    STATE(79), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(23), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4261] = 5,
    ACTIONS(586), 1,
      sym_content,
    ACTIONS(588), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(590), 1,
      sym__dedent,
    STATE(192), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(221), 1,
      aux_sym__content_or_javascript,
  [4277] = 5,
    ACTIONS(586), 1,
      sym_content,
    ACTIONS(588), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(592), 1,
      sym__dedent,
    STATE(192), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(221), 1,
      aux_sym__content_or_javascript,
  [4293] = 2,
    ACTIONS(596), 1,
      anon_sym_,
    ACTIONS(594), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4303] = 2,
    STATE(171), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(463), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4313] = 2,
    ACTIONS(600), 1,
      anon_sym_,
    ACTIONS(598), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4323] = 2,
    ACTIONS(604), 1,
      anon_sym_,
    ACTIONS(602), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4333] = 1,
    ACTIONS(259), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4341] = 5,
    ACTIONS(606), 1,
      sym_content,
    ACTIONS(609), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(612), 1,
      sym__dedent,
    STATE(192), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(221), 1,
      aux_sym__content_or_javascript,
  [4357] = 5,
    ACTIONS(586), 1,
      sym_content,
    ACTIONS(588), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(614), 1,
      sym__dedent,
    STATE(192), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(221), 1,
      aux_sym__content_or_javascript,
  [4373] = 1,
    ACTIONS(473), 5,
      anon_sym_RPAREN,
      aux_sym__attribute_token1,
      aux_sym_js_attribute_name_token1,
      aux_sym_js_attribute_name_token2,
      aux_sym_js_attribute_name_token3,
  [4381] = 1,
    ACTIONS(229), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4389] = 1,
    ACTIONS(121), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4397] = 1,
    ACTIONS(121), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4405] = 1,
    ACTIONS(251), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4413] = 1,
    ACTIONS(225), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4421] = 5,
    ACTIONS(586), 1,
      sym_content,
    ACTIONS(588), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(616), 1,
      sym__dedent,
    STATE(192), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(221), 1,
      aux_sym__content_or_javascript,
  [4437] = 2,
    STATE(180), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(463), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4447] = 4,
    ACTIONS(618), 1,
      anon_sym_when,
    ACTIONS(620), 1,
      anon_sym_default,
    STATE(17), 1,
      sym__when_keyword,
    STATE(22), 2,
      sym_when,
      aux_sym_case_repeat1,
  [4461] = 2,
    STATE(91), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(23), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4471] = 1,
    ACTIONS(247), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4479] = 1,
    ACTIONS(243), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4487] = 1,
    ACTIONS(95), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4495] = 1,
    ACTIONS(255), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4503] = 1,
    ACTIONS(142), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4511] = 1,
    ACTIONS(113), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4519] = 1,
    ACTIONS(142), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4527] = 1,
    ACTIONS(136), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4535] = 2,
    STATE(169), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(463), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4545] = 1,
    ACTIONS(136), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4553] = 4,
    ACTIONS(588), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(622), 1,
      sym_content,
    ACTIONS(624), 1,
      sym__newline,
    STATE(247), 1,
      aux_sym__content_or_javascript,
  [4566] = 4,
    ACTIONS(588), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(626), 1,
      sym_content,
    ACTIONS(628), 1,
      sym__newline,
    STATE(224), 1,
      aux_sym__content_or_javascript,
  [4579] = 2,
    STATE(129), 1,
      sym_tag,
    ACTIONS(23), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4588] = 2,
    STATE(76), 1,
      sym_tag,
    ACTIONS(105), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4597] = 4,
    ACTIONS(586), 1,
      sym_content,
    ACTIONS(588), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(185), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(221), 1,
      aux_sym__content_or_javascript,
  [4610] = 4,
    ACTIONS(588), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(626), 1,
      sym_content,
    ACTIONS(630), 1,
      sym__newline,
    STATE(224), 1,
      aux_sym__content_or_javascript,
  [4623] = 2,
    STATE(42), 1,
      sym_tag,
    ACTIONS(85), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4632] = 4,
    ACTIONS(588), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(626), 1,
      sym_content,
    ACTIONS(632), 1,
      sym__newline,
    STATE(224), 1,
      aux_sym__content_or_javascript,
  [4645] = 4,
    ACTIONS(588), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(626), 1,
      sym_content,
    ACTIONS(634), 1,
      sym__newline,
    STATE(224), 1,
      aux_sym__content_or_javascript,
  [4658] = 4,
    ACTIONS(588), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(626), 1,
      sym_content,
    ACTIONS(636), 1,
      sym__newline,
    STATE(224), 1,
      aux_sym__content_or_javascript,
  [4671] = 4,
    ACTIONS(638), 1,
      sym_content,
    ACTIONS(641), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(644), 1,
      sym__newline,
    STATE(224), 1,
      aux_sym__content_or_javascript,
  [4684] = 4,
    ACTIONS(586), 1,
      sym_content,
    ACTIONS(588), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(200), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(221), 1,
      aux_sym__content_or_javascript,
  [4697] = 4,
    ACTIONS(588), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(626), 1,
      sym_content,
    ACTIONS(646), 1,
      sym__newline,
    STATE(224), 1,
      aux_sym__content_or_javascript,
  [4710] = 2,
    STATE(27), 1,
      sym_tag,
    ACTIONS(85), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4719] = 4,
    ACTIONS(648), 1,
      aux_sym__attribute_token2,
    ACTIONS(650), 1,
      anon_sym_SQUOTE,
    ACTIONS(652), 1,
      anon_sym_DQUOTE,
    STATE(261), 1,
      sym_quoted_attribute_value,
  [4732] = 4,
    ACTIONS(586), 1,
      sym_content,
    ACTIONS(588), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(186), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(221), 1,
      aux_sym__content_or_javascript,
  [4745] = 4,
    ACTIONS(588), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(626), 1,
      sym_content,
    ACTIONS(654), 1,
      sym__newline,
    STATE(224), 1,
      aux_sym__content_or_javascript,
  [4758] = 4,
    ACTIONS(588), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(626), 1,
      sym_content,
    ACTIONS(656), 1,
      sym__newline,
    STATE(224), 1,
      aux_sym__content_or_javascript,
  [4771] = 2,
    STATE(208), 1,
      sym_tag,
    ACTIONS(463), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4780] = 4,
    ACTIONS(588), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(626), 1,
      sym_content,
    ACTIONS(658), 1,
      sym__newline,
    STATE(224), 1,
      aux_sym__content_or_javascript,
  [4793] = 4,
    ACTIONS(588), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(626), 1,
      sym_content,
    ACTIONS(660), 1,
      sym__newline,
    STATE(224), 1,
      aux_sym__content_or_javascript,
  [4806] = 4,
    ACTIONS(662), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(664), 1,
      sym__newline,
    STATE(97), 1,
      sym__single_line_buf_code,
    STATE(327), 1,
      sym__un_delimited_javascript,
  [4819] = 4,
    ACTIONS(588), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(666), 1,
      sym_content,
    ACTIONS(668), 1,
      sym__newline,
    STATE(226), 1,
      aux_sym__content_or_javascript,
  [4832] = 4,
    ACTIONS(586), 1,
      sym_content,
    ACTIONS(588), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(193), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(221), 1,
      aux_sym__content_or_javascript,
  [4845] = 2,
    STATE(211), 1,
      sym_tag,
    ACTIONS(463), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4854] = 4,
    ACTIONS(588), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(626), 1,
      sym_content,
    ACTIONS(670), 1,
      sym__newline,
    STATE(224), 1,
      aux_sym__content_or_javascript,
  [4867] = 2,
    STATE(125), 1,
      sym_tag,
    ACTIONS(23), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4876] = 2,
    STATE(181), 1,
      sym_tag,
    ACTIONS(463), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4885] = 4,
    ACTIONS(588), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(626), 1,
      sym_content,
    ACTIONS(672), 1,
      sym__newline,
    STATE(224), 1,
      aux_sym__content_or_javascript,
  [4898] = 2,
    STATE(120), 1,
      sym_tag,
    ACTIONS(23), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4907] = 2,
    STATE(44), 1,
      sym_tag,
    ACTIONS(85), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4916] = 4,
    ACTIONS(650), 1,
      anon_sym_SQUOTE,
    ACTIONS(652), 1,
      anon_sym_DQUOTE,
    ACTIONS(674), 1,
      aux_sym__attribute_token2,
    STATE(283), 1,
      sym_quoted_attribute_value,
  [4929] = 4,
    ACTIONS(588), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(626), 1,
      sym_content,
    ACTIONS(676), 1,
      sym__newline,
    STATE(224), 1,
      aux_sym__content_or_javascript,
  [4942] = 4,
    ACTIONS(588), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(626), 1,
      sym_content,
    ACTIONS(678), 1,
      sym__newline,
    STATE(224), 1,
      aux_sym__content_or_javascript,
  [4955] = 2,
    STATE(87), 1,
      sym_tag,
    ACTIONS(105), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4964] = 4,
    ACTIONS(662), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(680), 1,
      sym__newline,
    STATE(62), 1,
      sym__single_line_buf_code,
    STATE(313), 1,
      sym__un_delimited_javascript,
  [4977] = 4,
    ACTIONS(588), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(626), 1,
      sym_content,
    ACTIONS(682), 1,
      sym__newline,
    STATE(224), 1,
      aux_sym__content_or_javascript,
  [4990] = 2,
    STATE(82), 1,
      sym_tag,
    ACTIONS(105), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4999] = 4,
    ACTIONS(588), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(684), 1,
      sym_content,
    ACTIONS(686), 1,
      sym__newline,
    STATE(246), 1,
      aux_sym__content_or_javascript,
  [5012] = 4,
    ACTIONS(588), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(626), 1,
      sym_content,
    ACTIONS(688), 1,
      sym__newline,
    STATE(224), 1,
      aux_sym__content_or_javascript,
  [5025] = 3,
    ACTIONS(662), 1,
      sym__un_delimited_javascript_line,
    STATE(48), 1,
      sym__single_line_buf_code,
    STATE(313), 1,
      sym__un_delimited_javascript,
  [5035] = 3,
    ACTIONS(588), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(690), 1,
      sym_content,
    STATE(253), 1,
      aux_sym__content_or_javascript,
  [5045] = 3,
    ACTIONS(588), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(692), 1,
      sym_content,
    STATE(233), 1,
      aux_sym__content_or_javascript,
  [5055] = 3,
    ACTIONS(662), 1,
      sym__un_delimited_javascript_line,
    STATE(90), 1,
      sym__single_line_buf_code,
    STATE(327), 1,
      sym__un_delimited_javascript,
  [5065] = 2,
    ACTIONS(694), 1,
      anon_sym_,
    ACTIONS(696), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5073] = 2,
    ACTIONS(698), 1,
      anon_sym_,
    ACTIONS(700), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5081] = 3,
    ACTIONS(662), 1,
      sym__un_delimited_javascript_line,
    STATE(121), 1,
      sym__single_line_buf_code,
    STATE(315), 1,
      sym__un_delimited_javascript,
  [5091] = 2,
    ACTIONS(702), 1,
      anon_sym_,
    ACTIONS(704), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5099] = 3,
    ACTIONS(588), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(706), 1,
      sym_content,
    STATE(230), 1,
      aux_sym__content_or_javascript,
  [5109] = 3,
    ACTIONS(588), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(708), 1,
      sym_content,
    STATE(222), 1,
      aux_sym__content_or_javascript,
  [5119] = 3,
    ACTIONS(710), 1,
      sym__un_delimited_javascript_line,
    STATE(19), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(63), 1,
      sym__multi_line_buf_code,
  [5129] = 2,
    ACTIONS(712), 1,
      anon_sym_,
    ACTIONS(714), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5137] = 3,
    ACTIONS(662), 1,
      sym__un_delimited_javascript_line,
    STATE(89), 1,
      sym__single_line_buf_code,
    STATE(327), 1,
      sym__un_delimited_javascript,
  [5147] = 3,
    ACTIONS(588), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(716), 1,
      sym_content,
    STATE(219), 1,
      aux_sym__content_or_javascript,
  [5157] = 1,
    ACTIONS(718), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5163] = 3,
    ACTIONS(588), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(720), 1,
      sym_content,
    STATE(234), 1,
      aux_sym__content_or_javascript,
  [5173] = 3,
    ACTIONS(588), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(722), 1,
      sym_content,
    STATE(239), 1,
      aux_sym__content_or_javascript,
  [5183] = 3,
    ACTIONS(662), 1,
      sym__un_delimited_javascript_line,
    STATE(204), 1,
      sym__single_line_buf_code,
    STATE(317), 1,
      sym__un_delimited_javascript,
  [5193] = 3,
    ACTIONS(662), 1,
      sym__un_delimited_javascript_line,
    STATE(205), 1,
      sym__single_line_buf_code,
    STATE(317), 1,
      sym__un_delimited_javascript,
  [5203] = 3,
    ACTIONS(662), 1,
      sym__un_delimited_javascript_line,
    STATE(126), 1,
      sym__single_line_buf_code,
    STATE(315), 1,
      sym__un_delimited_javascript,
  [5213] = 3,
    ACTIONS(588), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(724), 1,
      sym_content,
    STATE(242), 1,
      aux_sym__content_or_javascript,
  [5223] = 2,
    ACTIONS(728), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(726), 2,
      sym__newline,
      sym_content,
  [5231] = 3,
    ACTIONS(588), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(730), 1,
      sym_content,
    STATE(250), 1,
      aux_sym__content_or_javascript,
  [5241] = 1,
    ACTIONS(732), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [5247] = 2,
    ACTIONS(734), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(612), 2,
      sym__dedent,
      sym_content,
  [5255] = 3,
    ACTIONS(588), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(736), 1,
      sym_content,
    STATE(223), 1,
      aux_sym__content_or_javascript,
  [5265] = 3,
    ACTIONS(588), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(738), 1,
      sym_content,
    STATE(231), 1,
      aux_sym__content_or_javascript,
  [5275] = 2,
    ACTIONS(740), 1,
      anon_sym_,
    ACTIONS(742), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5283] = 3,
    ACTIONS(744), 1,
      anon_sym_,
    ACTIONS(746), 1,
      anon_sym_COMMA,
    ACTIONS(748), 1,
      anon_sym_RPAREN,
  [5293] = 2,
    ACTIONS(750), 1,
      anon_sym_,
    ACTIONS(752), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5301] = 3,
    ACTIONS(754), 1,
      anon_sym_SQUOTE,
    ACTIONS(756), 1,
      anon_sym_DQUOTE,
    STATE(288), 1,
      sym_quoted_javascript,
  [5311] = 3,
    ACTIONS(758), 1,
      sym__un_delimited_javascript_line,
    STATE(54), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(98), 1,
      sym__multi_line_buf_code,
  [5321] = 3,
    ACTIONS(754), 1,
      anon_sym_SQUOTE,
    ACTIONS(756), 1,
      anon_sym_DQUOTE,
    STATE(292), 1,
      sym_quoted_javascript,
  [5331] = 2,
    ACTIONS(760), 1,
      anon_sym_,
    ACTIONS(762), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5339] = 2,
    ACTIONS(764), 1,
      anon_sym_,
    ACTIONS(766), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5347] = 3,
    ACTIONS(744), 1,
      anon_sym_,
    ACTIONS(746), 1,
      anon_sym_COMMA,
    ACTIONS(768), 1,
      anon_sym_RPAREN,
  [5357] = 3,
    ACTIONS(588), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(770), 1,
      sym_content,
    STATE(215), 1,
      aux_sym__content_or_javascript,
  [5367] = 2,
    ACTIONS(772), 1,
      anon_sym_,
    ACTIONS(774), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5375] = 2,
    ACTIONS(776), 1,
      anon_sym_,
    ACTIONS(778), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5383] = 3,
    ACTIONS(662), 1,
      sym__un_delimited_javascript_line,
    STATE(47), 1,
      sym__single_line_buf_code,
    STATE(313), 1,
      sym__un_delimited_javascript,
  [5393] = 2,
    ACTIONS(744), 1,
      anon_sym_,
    ACTIONS(746), 1,
      anon_sym_COMMA,
  [5400] = 2,
    ACTIONS(780), 1,
      anon_sym_DQUOTE,
    ACTIONS(782), 1,
      aux_sym_quoted_javascript_token2,
  [5407] = 2,
    ACTIONS(784), 1,
      sym__comment_content,
    ACTIONS(786), 1,
      sym__newline,
  [5414] = 2,
    ACTIONS(788), 1,
      anon_sym_DQUOTE,
    ACTIONS(790), 1,
      aux_sym_quoted_javascript_token2,
  [5421] = 2,
    ACTIONS(792), 1,
      sym__un_delimited_javascript_line,
    STATE(184), 1,
      sym__un_delimited_javascript,
  [5428] = 2,
    ACTIONS(788), 1,
      anon_sym_SQUOTE,
    ACTIONS(794), 1,
      aux_sym_quoted_javascript_token1,
  [5435] = 2,
    ACTIONS(780), 1,
      anon_sym_SQUOTE,
    ACTIONS(796), 1,
      aux_sym_quoted_javascript_token1,
  [5442] = 1,
    ACTIONS(798), 1,
      sym__indent,
  [5446] = 1,
    ACTIONS(800), 1,
      sym__newline,
  [5450] = 1,
    ACTIONS(802), 1,
      sym__delimited_javascript,
  [5454] = 1,
    ACTIONS(804), 1,
      aux_sym__attribute_token1,
  [5458] = 1,
    ACTIONS(806), 1,
      anon_sym_DQUOTE,
  [5462] = 1,
    ACTIONS(808), 1,
      sym__newline,
  [5466] = 1,
    ACTIONS(810), 1,
      sym__newline,
  [5470] = 1,
    ACTIONS(812), 1,
      anon_sym_SQUOTE,
  [5474] = 1,
    ACTIONS(814), 1,
      sym__un_delimited_javascript_line,
  [5478] = 1,
    ACTIONS(816), 1,
      aux_sym__when_keyword_token1,
  [5482] = 1,
    ACTIONS(818), 1,
      aux_sym_unbuffered_code_token1,
  [5486] = 1,
    ACTIONS(812), 1,
      anon_sym_DQUOTE,
  [5490] = 1,
    ACTIONS(820), 1,
      sym__newline,
  [5494] = 1,
    ACTIONS(822), 1,
      sym__indent,
  [5498] = 1,
    ACTIONS(824), 1,
      sym__newline,
  [5502] = 1,
    ACTIONS(718), 1,
      sym__newline,
  [5506] = 1,
    ACTIONS(826), 1,
      sym__newline,
  [5510] = 1,
    ACTIONS(828), 1,
      anon_sym_RBRACE_RBRACE,
  [5514] = 1,
    ACTIONS(830), 1,
      aux_sym__attribute_token3,
  [5518] = 1,
    ACTIONS(832), 1,
      sym__newline,
  [5522] = 1,
    ACTIONS(834), 1,
      sym__indent,
  [5526] = 1,
    ACTIONS(836), 1,
      ts_builtin_sym_end,
  [5530] = 1,
    ACTIONS(838), 1,
      aux_sym_unbuffered_code_token1,
  [5534] = 1,
    ACTIONS(806), 1,
      anon_sym_SQUOTE,
  [5538] = 1,
    ACTIONS(840), 1,
      aux_sym__attribute_token3,
  [5542] = 1,
    ACTIONS(842), 1,
      sym__indent,
  [5546] = 1,
    ACTIONS(844), 1,
      sym__newline,
  [5550] = 1,
    ACTIONS(846), 1,
      sym__indent,
  [5554] = 1,
    ACTIONS(848), 1,
      sym__indent,
  [5558] = 1,
    ACTIONS(850), 1,
      sym__indent,
  [5562] = 1,
    ACTIONS(852), 1,
      sym__newline,
  [5566] = 1,
    ACTIONS(854), 1,
      sym__newline,
  [5570] = 1,
    ACTIONS(856), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 50,
  [SMALL_STATE(4)] = 100,
  [SMALL_STATE(5)] = 135,
  [SMALL_STATE(6)] = 172,
  [SMALL_STATE(7)] = 207,
  [SMALL_STATE(8)] = 236,
  [SMALL_STATE(9)] = 271,
  [SMALL_STATE(10)] = 306,
  [SMALL_STATE(11)] = 335,
  [SMALL_STATE(12)] = 370,
  [SMALL_STATE(13)] = 399,
  [SMALL_STATE(14)] = 432,
  [SMALL_STATE(15)] = 461,
  [SMALL_STATE(16)] = 490,
  [SMALL_STATE(17)] = 519,
  [SMALL_STATE(18)] = 552,
  [SMALL_STATE(19)] = 582,
  [SMALL_STATE(20)] = 610,
  [SMALL_STATE(21)] = 634,
  [SMALL_STATE(22)] = 666,
  [SMALL_STATE(23)] = 698,
  [SMALL_STATE(24)] = 724,
  [SMALL_STATE(25)] = 752,
  [SMALL_STATE(26)] = 782,
  [SMALL_STATE(27)] = 812,
  [SMALL_STATE(28)] = 835,
  [SMALL_STATE(29)] = 858,
  [SMALL_STATE(30)] = 881,
  [SMALL_STATE(31)] = 908,
  [SMALL_STATE(32)] = 931,
  [SMALL_STATE(33)] = 954,
  [SMALL_STATE(34)] = 981,
  [SMALL_STATE(35)] = 1004,
  [SMALL_STATE(36)] = 1031,
  [SMALL_STATE(37)] = 1054,
  [SMALL_STATE(38)] = 1077,
  [SMALL_STATE(39)] = 1104,
  [SMALL_STATE(40)] = 1131,
  [SMALL_STATE(41)] = 1158,
  [SMALL_STATE(42)] = 1181,
  [SMALL_STATE(43)] = 1204,
  [SMALL_STATE(44)] = 1227,
  [SMALL_STATE(45)] = 1250,
  [SMALL_STATE(46)] = 1273,
  [SMALL_STATE(47)] = 1300,
  [SMALL_STATE(48)] = 1323,
  [SMALL_STATE(49)] = 1346,
  [SMALL_STATE(50)] = 1369,
  [SMALL_STATE(51)] = 1392,
  [SMALL_STATE(52)] = 1415,
  [SMALL_STATE(53)] = 1443,
  [SMALL_STATE(54)] = 1471,
  [SMALL_STATE(55)] = 1497,
  [SMALL_STATE(56)] = 1523,
  [SMALL_STATE(57)] = 1545,
  [SMALL_STATE(58)] = 1567,
  [SMALL_STATE(59)] = 1589,
  [SMALL_STATE(60)] = 1617,
  [SMALL_STATE(61)] = 1643,
  [SMALL_STATE(62)] = 1667,
  [SMALL_STATE(63)] = 1691,
  [SMALL_STATE(64)] = 1715,
  [SMALL_STATE(65)] = 1743,
  [SMALL_STATE(66)] = 1767,
  [SMALL_STATE(67)] = 1789,
  [SMALL_STATE(68)] = 1810,
  [SMALL_STATE(69)] = 1835,
  [SMALL_STATE(70)] = 1856,
  [SMALL_STATE(71)] = 1877,
  [SMALL_STATE(72)] = 1898,
  [SMALL_STATE(73)] = 1919,
  [SMALL_STATE(74)] = 1944,
  [SMALL_STATE(75)] = 1969,
  [SMALL_STATE(76)] = 1996,
  [SMALL_STATE(77)] = 2017,
  [SMALL_STATE(78)] = 2038,
  [SMALL_STATE(79)] = 2059,
  [SMALL_STATE(80)] = 2082,
  [SMALL_STATE(81)] = 2103,
  [SMALL_STATE(82)] = 2124,
  [SMALL_STATE(83)] = 2145,
  [SMALL_STATE(84)] = 2170,
  [SMALL_STATE(85)] = 2191,
  [SMALL_STATE(86)] = 2216,
  [SMALL_STATE(87)] = 2241,
  [SMALL_STATE(88)] = 2262,
  [SMALL_STATE(89)] = 2283,
  [SMALL_STATE(90)] = 2304,
  [SMALL_STATE(91)] = 2325,
  [SMALL_STATE(92)] = 2348,
  [SMALL_STATE(93)] = 2369,
  [SMALL_STATE(94)] = 2390,
  [SMALL_STATE(95)] = 2411,
  [SMALL_STATE(96)] = 2432,
  [SMALL_STATE(97)] = 2453,
  [SMALL_STATE(98)] = 2475,
  [SMALL_STATE(99)] = 2497,
  [SMALL_STATE(100)] = 2519,
  [SMALL_STATE(101)] = 2541,
  [SMALL_STATE(102)] = 2563,
  [SMALL_STATE(103)] = 2582,
  [SMALL_STATE(104)] = 2601,
  [SMALL_STATE(105)] = 2620,
  [SMALL_STATE(106)] = 2639,
  [SMALL_STATE(107)] = 2658,
  [SMALL_STATE(108)] = 2677,
  [SMALL_STATE(109)] = 2696,
  [SMALL_STATE(110)] = 2733,
  [SMALL_STATE(111)] = 2752,
  [SMALL_STATE(112)] = 2789,
  [SMALL_STATE(113)] = 2808,
  [SMALL_STATE(114)] = 2827,
  [SMALL_STATE(115)] = 2846,
  [SMALL_STATE(116)] = 2865,
  [SMALL_STATE(117)] = 2884,
  [SMALL_STATE(118)] = 2903,
  [SMALL_STATE(119)] = 2940,
  [SMALL_STATE(120)] = 2959,
  [SMALL_STATE(121)] = 2978,
  [SMALL_STATE(122)] = 2997,
  [SMALL_STATE(123)] = 3016,
  [SMALL_STATE(124)] = 3053,
  [SMALL_STATE(125)] = 3090,
  [SMALL_STATE(126)] = 3109,
  [SMALL_STATE(127)] = 3128,
  [SMALL_STATE(128)] = 3165,
  [SMALL_STATE(129)] = 3202,
  [SMALL_STATE(130)] = 3221,
  [SMALL_STATE(131)] = 3258,
  [SMALL_STATE(132)] = 3283,
  [SMALL_STATE(133)] = 3308,
  [SMALL_STATE(134)] = 3333,
  [SMALL_STATE(135)] = 3358,
  [SMALL_STATE(136)] = 3383,
  [SMALL_STATE(137)] = 3408,
  [SMALL_STATE(138)] = 3433,
  [SMALL_STATE(139)] = 3458,
  [SMALL_STATE(140)] = 3483,
  [SMALL_STATE(141)] = 3508,
  [SMALL_STATE(142)] = 3533,
  [SMALL_STATE(143)] = 3558,
  [SMALL_STATE(144)] = 3586,
  [SMALL_STATE(145)] = 3614,
  [SMALL_STATE(146)] = 3642,
  [SMALL_STATE(147)] = 3661,
  [SMALL_STATE(148)] = 3679,
  [SMALL_STATE(149)] = 3703,
  [SMALL_STATE(150)] = 3727,
  [SMALL_STATE(151)] = 3751,
  [SMALL_STATE(152)] = 3775,
  [SMALL_STATE(153)] = 3799,
  [SMALL_STATE(154)] = 3823,
  [SMALL_STATE(155)] = 3847,
  [SMALL_STATE(156)] = 3871,
  [SMALL_STATE(157)] = 3889,
  [SMALL_STATE(158)] = 3904,
  [SMALL_STATE(159)] = 3919,
  [SMALL_STATE(160)] = 3934,
  [SMALL_STATE(161)] = 3949,
  [SMALL_STATE(162)] = 3963,
  [SMALL_STATE(163)] = 3977,
  [SMALL_STATE(164)] = 3991,
  [SMALL_STATE(165)] = 4005,
  [SMALL_STATE(166)] = 4019,
  [SMALL_STATE(167)] = 4033,
  [SMALL_STATE(168)] = 4050,
  [SMALL_STATE(169)] = 4061,
  [SMALL_STATE(170)] = 4074,
  [SMALL_STATE(171)] = 4089,
  [SMALL_STATE(172)] = 4102,
  [SMALL_STATE(173)] = 4113,
  [SMALL_STATE(174)] = 4130,
  [SMALL_STATE(175)] = 4147,
  [SMALL_STATE(176)] = 4158,
  [SMALL_STATE(177)] = 4171,
  [SMALL_STATE(178)] = 4182,
  [SMALL_STATE(179)] = 4199,
  [SMALL_STATE(180)] = 4212,
  [SMALL_STATE(181)] = 4225,
  [SMALL_STATE(182)] = 4233,
  [SMALL_STATE(183)] = 4241,
  [SMALL_STATE(184)] = 4251,
  [SMALL_STATE(185)] = 4261,
  [SMALL_STATE(186)] = 4277,
  [SMALL_STATE(187)] = 4293,
  [SMALL_STATE(188)] = 4303,
  [SMALL_STATE(189)] = 4313,
  [SMALL_STATE(190)] = 4323,
  [SMALL_STATE(191)] = 4333,
  [SMALL_STATE(192)] = 4341,
  [SMALL_STATE(193)] = 4357,
  [SMALL_STATE(194)] = 4373,
  [SMALL_STATE(195)] = 4381,
  [SMALL_STATE(196)] = 4389,
  [SMALL_STATE(197)] = 4397,
  [SMALL_STATE(198)] = 4405,
  [SMALL_STATE(199)] = 4413,
  [SMALL_STATE(200)] = 4421,
  [SMALL_STATE(201)] = 4437,
  [SMALL_STATE(202)] = 4447,
  [SMALL_STATE(203)] = 4461,
  [SMALL_STATE(204)] = 4471,
  [SMALL_STATE(205)] = 4479,
  [SMALL_STATE(206)] = 4487,
  [SMALL_STATE(207)] = 4495,
  [SMALL_STATE(208)] = 4503,
  [SMALL_STATE(209)] = 4511,
  [SMALL_STATE(210)] = 4519,
  [SMALL_STATE(211)] = 4527,
  [SMALL_STATE(212)] = 4535,
  [SMALL_STATE(213)] = 4545,
  [SMALL_STATE(214)] = 4553,
  [SMALL_STATE(215)] = 4566,
  [SMALL_STATE(216)] = 4579,
  [SMALL_STATE(217)] = 4588,
  [SMALL_STATE(218)] = 4597,
  [SMALL_STATE(219)] = 4610,
  [SMALL_STATE(220)] = 4623,
  [SMALL_STATE(221)] = 4632,
  [SMALL_STATE(222)] = 4645,
  [SMALL_STATE(223)] = 4658,
  [SMALL_STATE(224)] = 4671,
  [SMALL_STATE(225)] = 4684,
  [SMALL_STATE(226)] = 4697,
  [SMALL_STATE(227)] = 4710,
  [SMALL_STATE(228)] = 4719,
  [SMALL_STATE(229)] = 4732,
  [SMALL_STATE(230)] = 4745,
  [SMALL_STATE(231)] = 4758,
  [SMALL_STATE(232)] = 4771,
  [SMALL_STATE(233)] = 4780,
  [SMALL_STATE(234)] = 4793,
  [SMALL_STATE(235)] = 4806,
  [SMALL_STATE(236)] = 4819,
  [SMALL_STATE(237)] = 4832,
  [SMALL_STATE(238)] = 4845,
  [SMALL_STATE(239)] = 4854,
  [SMALL_STATE(240)] = 4867,
  [SMALL_STATE(241)] = 4876,
  [SMALL_STATE(242)] = 4885,
  [SMALL_STATE(243)] = 4898,
  [SMALL_STATE(244)] = 4907,
  [SMALL_STATE(245)] = 4916,
  [SMALL_STATE(246)] = 4929,
  [SMALL_STATE(247)] = 4942,
  [SMALL_STATE(248)] = 4955,
  [SMALL_STATE(249)] = 4964,
  [SMALL_STATE(250)] = 4977,
  [SMALL_STATE(251)] = 4990,
  [SMALL_STATE(252)] = 4999,
  [SMALL_STATE(253)] = 5012,
  [SMALL_STATE(254)] = 5025,
  [SMALL_STATE(255)] = 5035,
  [SMALL_STATE(256)] = 5045,
  [SMALL_STATE(257)] = 5055,
  [SMALL_STATE(258)] = 5065,
  [SMALL_STATE(259)] = 5073,
  [SMALL_STATE(260)] = 5081,
  [SMALL_STATE(261)] = 5091,
  [SMALL_STATE(262)] = 5099,
  [SMALL_STATE(263)] = 5109,
  [SMALL_STATE(264)] = 5119,
  [SMALL_STATE(265)] = 5129,
  [SMALL_STATE(266)] = 5137,
  [SMALL_STATE(267)] = 5147,
  [SMALL_STATE(268)] = 5157,
  [SMALL_STATE(269)] = 5163,
  [SMALL_STATE(270)] = 5173,
  [SMALL_STATE(271)] = 5183,
  [SMALL_STATE(272)] = 5193,
  [SMALL_STATE(273)] = 5203,
  [SMALL_STATE(274)] = 5213,
  [SMALL_STATE(275)] = 5223,
  [SMALL_STATE(276)] = 5231,
  [SMALL_STATE(277)] = 5241,
  [SMALL_STATE(278)] = 5247,
  [SMALL_STATE(279)] = 5255,
  [SMALL_STATE(280)] = 5265,
  [SMALL_STATE(281)] = 5275,
  [SMALL_STATE(282)] = 5283,
  [SMALL_STATE(283)] = 5293,
  [SMALL_STATE(284)] = 5301,
  [SMALL_STATE(285)] = 5311,
  [SMALL_STATE(286)] = 5321,
  [SMALL_STATE(287)] = 5331,
  [SMALL_STATE(288)] = 5339,
  [SMALL_STATE(289)] = 5347,
  [SMALL_STATE(290)] = 5357,
  [SMALL_STATE(291)] = 5367,
  [SMALL_STATE(292)] = 5375,
  [SMALL_STATE(293)] = 5383,
  [SMALL_STATE(294)] = 5393,
  [SMALL_STATE(295)] = 5400,
  [SMALL_STATE(296)] = 5407,
  [SMALL_STATE(297)] = 5414,
  [SMALL_STATE(298)] = 5421,
  [SMALL_STATE(299)] = 5428,
  [SMALL_STATE(300)] = 5435,
  [SMALL_STATE(301)] = 5442,
  [SMALL_STATE(302)] = 5446,
  [SMALL_STATE(303)] = 5450,
  [SMALL_STATE(304)] = 5454,
  [SMALL_STATE(305)] = 5458,
  [SMALL_STATE(306)] = 5462,
  [SMALL_STATE(307)] = 5466,
  [SMALL_STATE(308)] = 5470,
  [SMALL_STATE(309)] = 5474,
  [SMALL_STATE(310)] = 5478,
  [SMALL_STATE(311)] = 5482,
  [SMALL_STATE(312)] = 5486,
  [SMALL_STATE(313)] = 5490,
  [SMALL_STATE(314)] = 5494,
  [SMALL_STATE(315)] = 5498,
  [SMALL_STATE(316)] = 5502,
  [SMALL_STATE(317)] = 5506,
  [SMALL_STATE(318)] = 5510,
  [SMALL_STATE(319)] = 5514,
  [SMALL_STATE(320)] = 5518,
  [SMALL_STATE(321)] = 5522,
  [SMALL_STATE(322)] = 5526,
  [SMALL_STATE(323)] = 5530,
  [SMALL_STATE(324)] = 5534,
  [SMALL_STATE(325)] = 5538,
  [SMALL_STATE(326)] = 5542,
  [SMALL_STATE(327)] = 5546,
  [SMALL_STATE(328)] = 5550,
  [SMALL_STATE(329)] = 5554,
  [SMALL_STATE(330)] = 5558,
  [SMALL_STATE(331)] = 5562,
  [SMALL_STATE(332)] = 5566,
  [SMALL_STATE(333)] = 5570,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(277),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(298),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(298),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(203),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(309),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(273),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(260),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(296),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(109),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(109),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(323),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(236),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(130),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(130),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(214),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(111),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(111),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(130),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(130),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 3),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_keyword, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_keyword, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(310),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(17),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 5, .production_id = 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 5, .production_id = 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(34),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 5, .production_id = 4),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 5, .production_id = 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 7),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffered_code, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffered_code, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unescaped_buffered_code, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unescaped_buffered_code, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_content, 3),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_content, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 5),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 5),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_content, 2),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_content, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(72),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 6),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 6),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 5),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 5),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(320),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 5),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 5),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 4),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 3),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(109),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(109),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 3),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 2),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 2),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 2),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 6),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 6),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(189),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(190),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [485] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(146),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(252),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(127),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 2),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 2),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [546] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2), SHIFT_REPEAT(304),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 1),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 1),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 1),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 1),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 2),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 2),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(127),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 2),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 2),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_name, 1),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_attribute_name, 1),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_attribute_name, 1),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(221),
  [609] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(303),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(224),
  [641] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(303),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 5),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 5),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 5),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 5),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 3),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 3),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 3),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 3),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__un_delimited_javascript, 1),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 3),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 3),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 4),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 4),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 2),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 2),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 4),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 4),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 3),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 3),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [836] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
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
