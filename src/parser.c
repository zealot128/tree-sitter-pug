#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 243
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 74
#define ALIAS_COUNT 2
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 5

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
  anon_sym_EQ = 10,
  anon_sym_COLON = 11,
  anon_sym_ = 12,
  anon_sym_DOT = 13,
  anon_sym_LPAREN = 14,
  anon_sym_COMMA = 15,
  anon_sym_RPAREN = 16,
  aux_sym__attribute_token1 = 17,
  aux_sym__attribute_token2 = 18,
  aux_sym__attribute_token3 = 19,
  anon_sym_SLASH_SLASH = 20,
  sym_tag_name = 21,
  sym_class = 22,
  sym_id = 23,
  aux_sym_js_attribute_name_token1 = 24,
  aux_sym_js_attribute_name_token2 = 25,
  aux_sym_js_attribute_name_token3 = 26,
  anon_sym_SQUOTE = 27,
  aux_sym_quoted_javascript_token1 = 28,
  anon_sym_DQUOTE = 29,
  aux_sym_quoted_javascript_token2 = 30,
  sym_content = 31,
  sym__comment_content = 32,
  anon_sym_LBRACE_LBRACE = 33,
  anon_sym_RBRACE_RBRACE = 34,
  sym__delimited_javascript = 35,
  sym__un_delimited_javascript_line = 36,
  anon_sym_DASH = 37,
  aux_sym_unbuffered_code_token1 = 38,
  sym__newline = 39,
  sym__indent = 40,
  sym__dedent = 41,
  sym_source_file = 42,
  sym_doctype = 43,
  sym_pipe_content = 44,
  sym_conditional = 45,
  sym_buffered_code = 46,
  sym_tag = 47,
  sym__content_after_dot = 48,
  sym_attributes = 49,
  sym_attribute = 50,
  sym__attribute = 51,
  sym__js_attribute = 52,
  sym_children = 53,
  sym__children_choice = 54,
  sym_comment = 55,
  sym_js_attribute_name = 56,
  sym_attribute_name = 57,
  sym_quoted_javascript = 58,
  sym_quoted_attribute_value = 59,
  aux_sym__content_or_javascript = 60,
  sym__un_delimited_javascript = 61,
  aux_sym__un_delimited_javascript_multiline = 62,
  sym__single_line_buf_code = 63,
  sym__multi_line_buf_code = 64,
  sym_unbuffered_code = 65,
  aux_sym_source_file_repeat1 = 66,
  aux_sym_conditional_repeat1 = 67,
  aux_sym_tag_repeat1 = 68,
  aux_sym__content_after_dot_repeat1 = 69,
  aux_sym_attributes_repeat1 = 70,
  aux_sym__attribute_repeat1 = 71,
  aux_sym_children_repeat1 = 72,
  aux_sym_comment_repeat1 = 73,
  alias_sym_attribute_modifier = 74,
  alias_sym_attribute_value = 75,
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
  [anon_sym_EQ] = "=",
  [anon_sym_COLON] = ":",
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
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_] = anon_sym_,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym__attribute_token1] = aux_sym__attribute_token1,
  [aux_sym__attribute_token2] = aux_sym__attribute_token2,
  [aux_sym__attribute_token3] = aux_sym__attribute_token3,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [sym_tag_name] = sym_tag_name,
  [sym_class] = sym_class,
  [sym_id] = sym_id,
  [aux_sym_js_attribute_name_token1] = aux_sym_js_attribute_name_token1,
  [aux_sym_js_attribute_name_token2] = aux_sym_js_attribute_name_token2,
  [aux_sym_js_attribute_name_token3] = aux_sym_js_attribute_name_token3,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_javascript_token1] = aux_sym__attribute_token3,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_javascript_token2] = aux_sym__attribute_token3,
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
  [sym__un_delimited_javascript] = aux_sym__attribute_token3,
  [aux_sym__un_delimited_javascript_multiline] = aux_sym__un_delimited_javascript_multiline,
  [sym__single_line_buf_code] = sym__single_line_buf_code,
  [sym__multi_line_buf_code] = sym__multi_line_buf_code,
  [sym_unbuffered_code] = sym_unbuffered_code,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_conditional_repeat1] = aux_sym_conditional_repeat1,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
    [1] = alias_sym_attribute_modifier,
  },
  [2] = {
    [0] = aux_sym__attribute_token3,
  },
  [3] = {
    [3] = sym_children,
  },
  [4] = {
    [1] = alias_sym_attribute_value,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__un_delimited_javascript_multiline, 2,
    aux_sym__un_delimited_javascript_multiline,
    aux_sym__attribute_token3,
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
      if (eof) ADVANCE(54);
      if (lookahead == '"') ADVANCE(159);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '\'') ADVANCE(156);
      if (lookahead == '(') ADVANCE(85);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'h') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(30);
      if (lookahead == 'x') ADVANCE(28);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '}') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(162);
      if (lookahead != 0) ADVANCE(163);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0) ADVANCE(185);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(176);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '(') ADVANCE(85);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == ' ') SKIP(6)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(165);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(159);
      if (lookahead == '\'') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 12:
      if (lookahead == ')') ADVANCE(154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(93);
      END_STATE();
    case 14:
      if (lookahead == ']') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(63);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(67);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 28:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 29:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 41:
      if (lookahead == 'y') ADVANCE(32);
      END_STATE();
    case 42:
      if (lookahead == '{') ADVANCE(173);
      END_STATE();
    case 43:
      if (lookahead == '}') ADVANCE(174);
      END_STATE();
    case 44:
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 45:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(92);
      END_STATE();
    case 46:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(147);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 47:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 48:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 49:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 50:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 51:
      if (eof) ADVANCE(54);
      if (lookahead == '\n') SKIP(51)
      if (lookahead == '#') ADVANCE(184);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(183);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == 'd') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == 'u') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0) ADVANCE(185);
      END_STATE();
    case 52:
      if (eof) ADVANCE(54);
      if (lookahead == ' ') SKIP(52)
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '=') ADVANCE(79);
      if (lookahead == 'd') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == 'u') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 53:
      if (eof) ADVANCE(54);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == 'd') ADVANCE(120);
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(117);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_doctype);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_strict);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(147);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__attribute_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__attribute_token2);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__attribute_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(89);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__attribute_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__attribute_token3);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(135);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(136);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(137);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(64);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(65);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(126);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(128);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(103);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(96);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(97);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(100);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(102);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(106);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(99);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(71);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(101);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(72);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(73);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(129);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(130);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(140);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(123);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(124);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(125);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(147);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(148);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(149);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_js_attribute_name_token1);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_js_attribute_name_token2);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_js_attribute_name_token3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(164);
      if (lookahead == ' ') ADVANCE(164);
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(170);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '=') ADVANCE(79);
      if (lookahead == 'd') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == 'u') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(165);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == 'i') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(148);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__delimited_javascript);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(176);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__delimited_javascript);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '#') ADVANCE(184);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(183);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == 'd') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == 'u') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'i') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(149);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_unbuffered_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(189);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 53},
  [2] = {.lex_state = 53},
  [3] = {.lex_state = 53},
  [4] = {.lex_state = 53, .external_lex_state = 2},
  [5] = {.lex_state = 53, .external_lex_state = 2},
  [6] = {.lex_state = 53, .external_lex_state = 2},
  [7] = {.lex_state = 53, .external_lex_state = 3},
  [8] = {.lex_state = 53, .external_lex_state = 3},
  [9] = {.lex_state = 53, .external_lex_state = 3},
  [10] = {.lex_state = 53, .external_lex_state = 3},
  [11] = {.lex_state = 53, .external_lex_state = 3},
  [12] = {.lex_state = 53, .external_lex_state = 3},
  [13] = {.lex_state = 52, .external_lex_state = 2},
  [14] = {.lex_state = 52, .external_lex_state = 2},
  [15] = {.lex_state = 52, .external_lex_state = 2},
  [16] = {.lex_state = 51, .external_lex_state = 2},
  [17] = {.lex_state = 51, .external_lex_state = 2},
  [18] = {.lex_state = 52, .external_lex_state = 2},
  [19] = {.lex_state = 52, .external_lex_state = 2},
  [20] = {.lex_state = 53, .external_lex_state = 3},
  [21] = {.lex_state = 53, .external_lex_state = 2},
  [22] = {.lex_state = 53, .external_lex_state = 2},
  [23] = {.lex_state = 53, .external_lex_state = 2},
  [24] = {.lex_state = 53, .external_lex_state = 2},
  [25] = {.lex_state = 53, .external_lex_state = 2},
  [26] = {.lex_state = 53, .external_lex_state = 4},
  [27] = {.lex_state = 53, .external_lex_state = 2},
  [28] = {.lex_state = 53, .external_lex_state = 2},
  [29] = {.lex_state = 53},
  [30] = {.lex_state = 53},
  [31] = {.lex_state = 53, .external_lex_state = 2},
  [32] = {.lex_state = 53, .external_lex_state = 2},
  [33] = {.lex_state = 53, .external_lex_state = 2},
  [34] = {.lex_state = 53, .external_lex_state = 2},
  [35] = {.lex_state = 53, .external_lex_state = 4},
  [36] = {.lex_state = 53, .external_lex_state = 4},
  [37] = {.lex_state = 53},
  [38] = {.lex_state = 52, .external_lex_state = 2},
  [39] = {.lex_state = 53, .external_lex_state = 2},
  [40] = {.lex_state = 51, .external_lex_state = 2},
  [41] = {.lex_state = 53, .external_lex_state = 4},
  [42] = {.lex_state = 53, .external_lex_state = 4},
  [43] = {.lex_state = 53, .external_lex_state = 2},
  [44] = {.lex_state = 53, .external_lex_state = 2},
  [45] = {.lex_state = 53, .external_lex_state = 4},
  [46] = {.lex_state = 53, .external_lex_state = 2},
  [47] = {.lex_state = 53, .external_lex_state = 2},
  [48] = {.lex_state = 53, .external_lex_state = 2},
  [49] = {.lex_state = 53, .external_lex_state = 2},
  [50] = {.lex_state = 53, .external_lex_state = 4},
  [51] = {.lex_state = 53, .external_lex_state = 4},
  [52] = {.lex_state = 53, .external_lex_state = 4},
  [53] = {.lex_state = 53},
  [54] = {.lex_state = 53},
  [55] = {.lex_state = 4, .external_lex_state = 5},
  [56] = {.lex_state = 4, .external_lex_state = 5},
  [57] = {.lex_state = 4, .external_lex_state = 5},
  [58] = {.lex_state = 4, .external_lex_state = 5},
  [59] = {.lex_state = 53},
  [60] = {.lex_state = 4, .external_lex_state = 5},
  [61] = {.lex_state = 53},
  [62] = {.lex_state = 53},
  [63] = {.lex_state = 53},
  [64] = {.lex_state = 53},
  [65] = {.lex_state = 4, .external_lex_state = 5},
  [66] = {.lex_state = 53},
  [67] = {.lex_state = 53},
  [68] = {.lex_state = 53},
  [69] = {.lex_state = 53},
  [70] = {.lex_state = 53},
  [71] = {.lex_state = 53},
  [72] = {.lex_state = 53},
  [73] = {.lex_state = 53},
  [74] = {.lex_state = 53},
  [75] = {.lex_state = 53},
  [76] = {.lex_state = 53},
  [77] = {.lex_state = 53},
  [78] = {.lex_state = 53},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 11},
  [81] = {.lex_state = 11},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 9},
  [89] = {.lex_state = 9},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 9, .external_lex_state = 2},
  [92] = {.lex_state = 4, .external_lex_state = 5},
  [93] = {.lex_state = 9, .external_lex_state = 2},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 9, .external_lex_state = 3},
  [98] = {.lex_state = 9, .external_lex_state = 3},
  [99] = {.lex_state = 5, .external_lex_state = 5},
  [100] = {.lex_state = 9, .external_lex_state = 3},
  [101] = {.lex_state = 5, .external_lex_state = 5},
  [102] = {.lex_state = 5, .external_lex_state = 5},
  [103] = {.lex_state = 9, .external_lex_state = 3},
  [104] = {.lex_state = 9, .external_lex_state = 3},
  [105] = {.lex_state = 9, .external_lex_state = 3},
  [106] = {.lex_state = 5, .external_lex_state = 5},
  [107] = {.lex_state = 5, .external_lex_state = 5},
  [108] = {.lex_state = 5, .external_lex_state = 5},
  [109] = {.lex_state = 9, .external_lex_state = 2},
  [110] = {.lex_state = 9, .external_lex_state = 2},
  [111] = {.lex_state = 9, .external_lex_state = 2},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 9, .external_lex_state = 2},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 9, .external_lex_state = 3},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 9, .external_lex_state = 2},
  [120] = {.lex_state = 9, .external_lex_state = 2},
  [121] = {.lex_state = 11},
  [122] = {.lex_state = 5, .external_lex_state = 5},
  [123] = {.lex_state = 1, .external_lex_state = 2},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 5, .external_lex_state = 5},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 5, .external_lex_state = 5},
  [128] = {.lex_state = 9},
  [129] = {.lex_state = 9, .external_lex_state = 2},
  [130] = {.lex_state = 1, .external_lex_state = 2},
  [131] = {.lex_state = 9, .external_lex_state = 2},
  [132] = {.lex_state = 9, .external_lex_state = 2},
  [133] = {.lex_state = 9, .external_lex_state = 2},
  [134] = {.lex_state = 1, .external_lex_state = 2},
  [135] = {.lex_state = 9, .external_lex_state = 2},
  [136] = {.lex_state = 9, .external_lex_state = 2},
  [137] = {.lex_state = 9, .external_lex_state = 2},
  [138] = {.lex_state = 9, .external_lex_state = 2},
  [139] = {.lex_state = 9},
  [140] = {.lex_state = 9, .external_lex_state = 2},
  [141] = {.lex_state = 9, .external_lex_state = 2},
  [142] = {.lex_state = 9, .external_lex_state = 2},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 9, .external_lex_state = 2},
  [145] = {.lex_state = 9, .external_lex_state = 2},
  [146] = {.lex_state = 9},
  [147] = {.lex_state = 9},
  [148] = {.lex_state = 9, .external_lex_state = 2},
  [149] = {.lex_state = 9},
  [150] = {.lex_state = 1, .external_lex_state = 2},
  [151] = {.lex_state = 1, .external_lex_state = 5},
  [152] = {.lex_state = 1, .external_lex_state = 5},
  [153] = {.lex_state = 1, .external_lex_state = 5},
  [154] = {.lex_state = 2, .external_lex_state = 5},
  [155] = {.lex_state = 1, .external_lex_state = 5},
  [156] = {.lex_state = 9},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 9},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 1, .external_lex_state = 5},
  [161] = {.lex_state = 9},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 1, .external_lex_state = 5},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 9},
  [166] = {.lex_state = 1, .external_lex_state = 5},
  [167] = {.lex_state = 1, .external_lex_state = 5},
  [168] = {.lex_state = 1, .external_lex_state = 5},
  [169] = {.lex_state = 9},
  [170] = {.lex_state = 9},
  [171] = {.lex_state = 1, .external_lex_state = 5},
  [172] = {.lex_state = 1, .external_lex_state = 5},
  [173] = {.lex_state = 9},
  [174] = {.lex_state = 1, .external_lex_state = 5},
  [175] = {.lex_state = 1, .external_lex_state = 5},
  [176] = {.lex_state = 9},
  [177] = {.lex_state = 9},
  [178] = {.lex_state = 1, .external_lex_state = 5},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 1, .external_lex_state = 5},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 4},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 1, .external_lex_state = 5},
  [193] = {.lex_state = 1, .external_lex_state = 2},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 4},
  [197] = {.lex_state = 2},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 4},
  [200] = {.lex_state = 4},
  [201] = {.lex_state = 4},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 2},
  [206] = {.lex_state = 4},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 2},
  [210] = {.lex_state = 9},
  [211] = {.lex_state = 1},
  [212] = {.lex_state = 10},
  [213] = {.lex_state = 6, .external_lex_state = 5},
  [214] = {.lex_state = 4},
  [215] = {.lex_state = 8},
  [216] = {.lex_state = 2},
  [217] = {.lex_state = 8},
  [218] = {.lex_state = 10},
  [219] = {.lex_state = 0, .external_lex_state = 4},
  [220] = {.lex_state = 189},
  [221] = {.lex_state = 0, .external_lex_state = 5},
  [222] = {.lex_state = 0, .external_lex_state = 5},
  [223] = {.lex_state = 11},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0, .external_lex_state = 5},
  [226] = {.lex_state = 0, .external_lex_state = 5},
  [227] = {.lex_state = 0, .external_lex_state = 5},
  [228] = {.lex_state = 0, .external_lex_state = 4},
  [229] = {.lex_state = 0, .external_lex_state = 5},
  [230] = {.lex_state = 0, .external_lex_state = 5},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 45},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 3},
  [238] = {.lex_state = 45},
  [239] = {.lex_state = 0, .external_lex_state = 4},
  [240] = {.lex_state = 0, .external_lex_state = 4},
  [241] = {.lex_state = 0, .external_lex_state = 5},
  [242] = {.lex_state = 0, .external_lex_state = 5},
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

static const bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
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
    [ts_external_token__indent] = true,
  },
  [5] = {
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
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
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
    [sym_source_file] = STATE(224),
    [sym_doctype] = STATE(2),
    [sym_conditional] = STATE(2),
    [sym_buffered_code] = STATE(2),
    [sym_tag] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_unbuffered_code] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_doctype] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_elseif] = ACTIONS(9),
    [anon_sym_unless] = ACTIONS(7),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_EQ] = ACTIONS(13),
    [anon_sym_SLASH_SLASH] = ACTIONS(15),
    [sym_tag_name] = ACTIONS(17),
    [sym_class] = ACTIONS(19),
    [sym_id] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(5), 1,
      anon_sym_doctype,
    ACTIONS(9), 1,
      anon_sym_elseif,
    ACTIONS(11), 1,
      anon_sym_else,
    ACTIONS(13), 1,
      anon_sym_EQ,
    ACTIONS(15), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      sym_tag_name,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(19), 2,
      sym_class,
      sym_id,
    STATE(3), 7,
      sym_doctype,
      sym_conditional,
      sym_buffered_code,
      sym_tag,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_source_file_repeat1,
  [42] = 11,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_doctype,
    ACTIONS(33), 1,
      anon_sym_elseif,
    ACTIONS(36), 1,
      anon_sym_else,
    ACTIONS(39), 1,
      anon_sym_EQ,
    ACTIONS(42), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(45), 1,
      sym_tag_name,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(30), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(48), 2,
      sym_class,
      sym_id,
    STATE(3), 7,
      sym_doctype,
      sym_conditional,
      sym_buffered_code,
      sym_tag,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_source_file_repeat1,
  [84] = 7,
    ACTIONS(58), 1,
      anon_sym_PIPE,
    ACTIONS(60), 1,
      sym_tag_name,
    ACTIONS(64), 1,
      sym__dedent,
    ACTIONS(62), 2,
      sym_class,
      sym_id,
    ACTIONS(56), 4,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
    STATE(5), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(54), 5,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [117] = 6,
    ACTIONS(70), 1,
      anon_sym_PIPE,
    ACTIONS(73), 1,
      sym_tag_name,
    ACTIONS(76), 2,
      sym_class,
      sym_id,
    ACTIONS(68), 4,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
    STATE(5), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(66), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [148] = 7,
    ACTIONS(58), 1,
      anon_sym_PIPE,
    ACTIONS(60), 1,
      sym_tag_name,
    ACTIONS(79), 1,
      sym__dedent,
    ACTIONS(62), 2,
      sym_class,
      sym_id,
    ACTIONS(56), 4,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
    STATE(5), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(54), 5,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [181] = 4,
    ACTIONS(85), 1,
      sym__indent,
    STATE(34), 1,
      sym_children,
    ACTIONS(83), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(81), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [206] = 4,
    ACTIONS(91), 1,
      sym__indent,
    STATE(32), 1,
      sym_children,
    ACTIONS(89), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(87), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [231] = 4,
    ACTIONS(91), 1,
      sym__indent,
    STATE(28), 1,
      sym_children,
    ACTIONS(95), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(93), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [256] = 4,
    ACTIONS(101), 1,
      sym__indent,
    STATE(43), 1,
      sym_children,
    ACTIONS(99), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(97), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [281] = 4,
    ACTIONS(91), 1,
      sym__indent,
    STATE(43), 1,
      sym_children,
    ACTIONS(99), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(97), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [306] = 4,
    ACTIONS(107), 1,
      sym__indent,
    STATE(25), 1,
      sym_children,
    ACTIONS(105), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(103), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [331] = 5,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(113), 1,
      sym__comment_content,
    ACTIONS(115), 1,
      sym__dedent,
    STATE(15), 1,
      aux_sym_comment_repeat1,
    ACTIONS(111), 11,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [357] = 5,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(113), 1,
      sym__comment_content,
    ACTIONS(115), 1,
      sym__dedent,
    STATE(19), 1,
      aux_sym_comment_repeat1,
    ACTIONS(111), 11,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [383] = 5,
    ACTIONS(113), 1,
      sym__comment_content,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 1,
      sym__dedent,
    STATE(19), 1,
      aux_sym_comment_repeat1,
    ACTIONS(119), 11,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [409] = 4,
    ACTIONS(127), 1,
      sym__un_delimited_javascript_line,
    STATE(17), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(123), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(125), 11,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [433] = 4,
    ACTIONS(133), 1,
      sym__un_delimited_javascript_line,
    STATE(17), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(129), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(131), 11,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [457] = 5,
    ACTIONS(113), 1,
      sym__comment_content,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    ACTIONS(140), 1,
      sym__dedent,
    STATE(14), 1,
      aux_sym_comment_repeat1,
    ACTIONS(138), 11,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [483] = 4,
    ACTIONS(146), 1,
      sym__comment_content,
    STATE(19), 1,
      aux_sym_comment_repeat1,
    ACTIONS(142), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(144), 11,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [507] = 3,
    ACTIONS(153), 1,
      sym__indent,
    ACTIONS(151), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(149), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [529] = 2,
    ACTIONS(105), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(103), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [548] = 2,
    ACTIONS(157), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(155), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [567] = 2,
    ACTIONS(99), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(97), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [586] = 2,
    ACTIONS(83), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(81), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [605] = 2,
    ACTIONS(83), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(81), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [624] = 4,
    ACTIONS(159), 1,
      sym__indent,
    STATE(73), 1,
      sym_children,
    ACTIONS(99), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(97), 7,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [647] = 2,
    ACTIONS(163), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(161), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [666] = 2,
    ACTIONS(167), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(165), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [685] = 3,
    STATE(30), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(171), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(169), 7,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [706] = 5,
    ACTIONS(177), 1,
      sym_tag_name,
    ACTIONS(180), 2,
      sym_class,
      sym_id,
    STATE(30), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(175), 4,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
    ACTIONS(173), 5,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [731] = 2,
    ACTIONS(95), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(93), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [750] = 2,
    ACTIONS(95), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(93), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [769] = 2,
    ACTIONS(185), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(183), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [788] = 2,
    ACTIONS(99), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(97), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [807] = 4,
    ACTIONS(159), 1,
      sym__indent,
    STATE(67), 1,
      sym_children,
    ACTIONS(95), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(93), 7,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [830] = 4,
    ACTIONS(187), 1,
      sym__indent,
    STATE(70), 1,
      sym_children,
    ACTIONS(105), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(103), 7,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [853] = 3,
    STATE(30), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(191), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(189), 7,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [874] = 2,
    ACTIONS(142), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(144), 12,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      sym__comment_content,
      anon_sym_DASH,
  [893] = 2,
    ACTIONS(195), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(193), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [912] = 2,
    ACTIONS(197), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(199), 12,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      sym__un_delimited_javascript_line,
      anon_sym_DASH,
  [931] = 4,
    ACTIONS(159), 1,
      sym__indent,
    STATE(75), 1,
      sym_children,
    ACTIONS(89), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(87), 7,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [954] = 4,
    ACTIONS(201), 1,
      sym__indent,
    STATE(71), 1,
      sym_children,
    ACTIONS(83), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(81), 7,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [977] = 2,
    ACTIONS(89), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(87), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [996] = 2,
    ACTIONS(205), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(203), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1015] = 4,
    ACTIONS(207), 1,
      sym__indent,
    STATE(73), 1,
      sym_children,
    ACTIONS(99), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(97), 7,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1038] = 2,
    ACTIONS(89), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(87), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1057] = 2,
    ACTIONS(211), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(209), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1076] = 3,
    ACTIONS(217), 1,
      sym__dedent,
    ACTIONS(215), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(213), 7,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1096] = 3,
    ACTIONS(223), 1,
      sym__dedent,
    ACTIONS(221), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(219), 7,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1116] = 3,
    ACTIONS(225), 1,
      sym__indent,
    ACTIONS(138), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(136), 7,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1136] = 3,
    ACTIONS(231), 1,
      sym__indent,
    ACTIONS(229), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(227), 7,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1156] = 3,
    ACTIONS(233), 1,
      sym__indent,
    ACTIONS(151), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(149), 7,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1176] = 2,
    ACTIONS(237), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(235), 7,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1193] = 2,
    ACTIONS(241), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(239), 7,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1210] = 10,
    ACTIONS(243), 1,
      anon_sym_EQ,
    ACTIONS(245), 1,
      anon_sym_COLON,
    ACTIONS(247), 1,
      anon_sym_,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 1,
      sym__newline,
    STATE(92), 1,
      aux_sym_tag_repeat1,
    STATE(108), 1,
      sym_attributes,
    ACTIONS(253), 2,
      sym_class,
      sym_id,
    STATE(141), 2,
      sym_buffered_code,
      sym__content_after_dot,
  [1243] = 10,
    ACTIONS(243), 1,
      anon_sym_EQ,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_COLON,
    ACTIONS(259), 1,
      anon_sym_,
    ACTIONS(263), 1,
      sym__newline,
    STATE(55), 1,
      aux_sym_tag_repeat1,
    STATE(99), 1,
      sym_attributes,
    ACTIONS(261), 2,
      sym_class,
      sym_id,
    STATE(144), 2,
      sym_buffered_code,
      sym__content_after_dot,
  [1276] = 10,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_EQ,
    ACTIONS(267), 1,
      anon_sym_COLON,
    ACTIONS(269), 1,
      anon_sym_,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(273), 1,
      sym__newline,
    STATE(92), 1,
      aux_sym_tag_repeat1,
    STATE(101), 1,
      sym_attributes,
    ACTIONS(253), 2,
      sym_class,
      sym_id,
    STATE(24), 2,
      sym_buffered_code,
      sym__content_after_dot,
  [1309] = 10,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_EQ,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(275), 1,
      anon_sym_COLON,
    ACTIONS(277), 1,
      anon_sym_,
    ACTIONS(281), 1,
      sym__newline,
    STATE(57), 1,
      aux_sym_tag_repeat1,
    STATE(107), 1,
      sym_attributes,
    ACTIONS(279), 2,
      sym_class,
      sym_id,
    STATE(21), 2,
      sym_buffered_code,
      sym__content_after_dot,
  [1342] = 2,
    ACTIONS(195), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(193), 7,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1359] = 10,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    ACTIONS(283), 1,
      anon_sym_EQ,
    ACTIONS(285), 1,
      anon_sym_COLON,
    ACTIONS(287), 1,
      anon_sym_,
    ACTIONS(289), 1,
      anon_sym_DOT,
    ACTIONS(293), 1,
      sym__newline,
    STATE(65), 1,
      aux_sym_tag_repeat1,
    STATE(106), 1,
      sym_attributes,
    ACTIONS(291), 2,
      sym_class,
      sym_id,
    STATE(64), 2,
      sym_buffered_code,
      sym__content_after_dot,
  [1392] = 2,
    ACTIONS(297), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(295), 7,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1409] = 2,
    ACTIONS(163), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(161), 7,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1426] = 2,
    ACTIONS(89), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(87), 7,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1443] = 2,
    ACTIONS(105), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(103), 7,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1460] = 10,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    ACTIONS(283), 1,
      anon_sym_EQ,
    ACTIONS(289), 1,
      anon_sym_DOT,
    ACTIONS(299), 1,
      anon_sym_COLON,
    ACTIONS(301), 1,
      anon_sym_,
    ACTIONS(303), 1,
      sym__newline,
    STATE(92), 1,
      aux_sym_tag_repeat1,
    STATE(102), 1,
      sym_attributes,
    ACTIONS(253), 2,
      sym_class,
      sym_id,
    STATE(74), 2,
      sym_buffered_code,
      sym__content_after_dot,
  [1493] = 2,
    ACTIONS(111), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(109), 7,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1510] = 2,
    ACTIONS(167), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(165), 7,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1527] = 2,
    ACTIONS(185), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(183), 7,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1544] = 2,
    ACTIONS(99), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(97), 7,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1561] = 2,
    ACTIONS(83), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(81), 7,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1578] = 2,
    ACTIONS(99), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(97), 7,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1595] = 2,
    ACTIONS(211), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(209), 7,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1612] = 2,
    ACTIONS(89), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(87), 7,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1629] = 2,
    ACTIONS(83), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(81), 7,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1646] = 2,
    ACTIONS(95), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(93), 7,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1663] = 2,
    ACTIONS(307), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(305), 7,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1680] = 2,
    ACTIONS(95), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(93), 7,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1697] = 2,
    ACTIONS(119), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(117), 7,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1714] = 8,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
    ACTIONS(311), 1,
      aux_sym__attribute_token1,
    STATE(80), 1,
      aux_sym_attributes_repeat1,
    STATE(116), 1,
      sym_js_attribute_name,
    STATE(118), 1,
      sym_attribute_name,
    STATE(191), 1,
      sym_attribute,
    STATE(206), 2,
      sym__attribute,
      sym__js_attribute,
    ACTIONS(313), 3,
      aux_sym_js_attribute_name_token1,
      aux_sym_js_attribute_name_token2,
      aux_sym_js_attribute_name_token3,
  [1742] = 8,
    ACTIONS(311), 1,
      aux_sym__attribute_token1,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_attributes_repeat1,
    STATE(116), 1,
      sym_js_attribute_name,
    STATE(118), 1,
      sym_attribute_name,
    STATE(207), 1,
      sym_attribute,
    STATE(206), 2,
      sym__attribute,
      sym__js_attribute,
    ACTIONS(313), 3,
      aux_sym_js_attribute_name_token1,
      aux_sym_js_attribute_name_token2,
      aux_sym_js_attribute_name_token3,
  [1770] = 8,
    ACTIONS(317), 1,
      anon_sym_RPAREN,
    ACTIONS(319), 1,
      aux_sym__attribute_token1,
    STATE(81), 1,
      aux_sym_attributes_repeat1,
    STATE(116), 1,
      sym_js_attribute_name,
    STATE(118), 1,
      sym_attribute_name,
    STATE(214), 1,
      sym_attribute,
    STATE(206), 2,
      sym__attribute,
      sym__js_attribute,
    ACTIONS(322), 3,
      aux_sym_js_attribute_name_token1,
      aux_sym_js_attribute_name_token2,
      aux_sym_js_attribute_name_token3,
  [1798] = 5,
    ACTIONS(58), 1,
      anon_sym_PIPE,
    ACTIONS(325), 1,
      anon_sym_EQ,
    STATE(23), 1,
      sym_buffered_code,
    ACTIONS(62), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(6), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [1819] = 5,
    ACTIONS(58), 1,
      anon_sym_PIPE,
    ACTIONS(325), 1,
      anon_sym_EQ,
    STATE(46), 1,
      sym_buffered_code,
    ACTIONS(62), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(6), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [1840] = 5,
    ACTIONS(327), 1,
      anon_sym_PIPE,
    ACTIONS(329), 1,
      anon_sym_EQ,
    STATE(135), 1,
      sym_buffered_code,
    ACTIONS(331), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(91), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [1861] = 5,
    ACTIONS(13), 1,
      anon_sym_EQ,
    ACTIONS(58), 1,
      anon_sym_PIPE,
    STATE(77), 1,
      sym_buffered_code,
    ACTIONS(62), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(4), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [1882] = 5,
    ACTIONS(327), 1,
      anon_sym_PIPE,
    ACTIONS(329), 1,
      anon_sym_EQ,
    STATE(140), 1,
      sym_buffered_code,
    ACTIONS(331), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(91), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [1903] = 5,
    ACTIONS(327), 1,
      anon_sym_PIPE,
    ACTIONS(329), 1,
      anon_sym_EQ,
    STATE(131), 1,
      sym_buffered_code,
    ACTIONS(331), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(91), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [1924] = 5,
    ACTIONS(58), 1,
      anon_sym_PIPE,
    ACTIONS(325), 1,
      anon_sym_EQ,
    STATE(31), 1,
      sym_buffered_code,
    ACTIONS(62), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(6), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [1945] = 5,
    ACTIONS(13), 1,
      anon_sym_EQ,
    ACTIONS(58), 1,
      anon_sym_PIPE,
    STATE(69), 1,
      sym_buffered_code,
    ACTIONS(62), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(4), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [1966] = 5,
    ACTIONS(13), 1,
      anon_sym_EQ,
    ACTIONS(58), 1,
      anon_sym_PIPE,
    STATE(63), 1,
      sym_buffered_code,
    ACTIONS(62), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(4), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [1987] = 4,
    ACTIONS(327), 1,
      anon_sym_PIPE,
    ACTIONS(333), 1,
      sym__dedent,
    ACTIONS(331), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(93), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2005] = 4,
    STATE(92), 1,
      aux_sym_tag_repeat1,
    ACTIONS(337), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(339), 2,
      sym_class,
      sym_id,
    ACTIONS(335), 4,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_LPAREN,
  [2023] = 4,
    ACTIONS(66), 1,
      sym__dedent,
    ACTIONS(342), 1,
      anon_sym_PIPE,
    ACTIONS(345), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(93), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2041] = 3,
    ACTIONS(58), 1,
      anon_sym_PIPE,
    ACTIONS(62), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(6), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2056] = 3,
    ACTIONS(327), 1,
      anon_sym_PIPE,
    ACTIONS(331), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(91), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2071] = 3,
    ACTIONS(58), 1,
      anon_sym_PIPE,
    ACTIONS(62), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(4), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2086] = 3,
    ACTIONS(348), 1,
      sym__indent,
    STATE(142), 1,
      sym_children,
    ACTIONS(103), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2100] = 3,
    ACTIONS(350), 1,
      sym__indent,
    STATE(119), 1,
      sym_children,
    ACTIONS(87), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2114] = 6,
    ACTIONS(243), 1,
      anon_sym_EQ,
    ACTIONS(245), 1,
      anon_sym_COLON,
    ACTIONS(247), 1,
      anon_sym_,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(255), 1,
      sym__newline,
    STATE(141), 2,
      sym_buffered_code,
      sym__content_after_dot,
  [2134] = 3,
    ACTIONS(350), 1,
      sym__indent,
    STATE(129), 1,
      sym_children,
    ACTIONS(93), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2148] = 6,
    ACTIONS(265), 1,
      anon_sym_EQ,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(352), 1,
      anon_sym_COLON,
    ACTIONS(354), 1,
      anon_sym_,
    ACTIONS(356), 1,
      sym__newline,
    STATE(23), 2,
      sym_buffered_code,
      sym__content_after_dot,
  [2168] = 6,
    ACTIONS(283), 1,
      anon_sym_EQ,
    ACTIONS(289), 1,
      anon_sym_DOT,
    ACTIONS(358), 1,
      anon_sym_COLON,
    ACTIONS(360), 1,
      anon_sym_,
    ACTIONS(362), 1,
      sym__newline,
    STATE(69), 2,
      sym_buffered_code,
      sym__content_after_dot,
  [2188] = 3,
    ACTIONS(364), 1,
      sym__indent,
    STATE(136), 1,
      sym_children,
    ACTIONS(97), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2202] = 3,
    ACTIONS(350), 1,
      sym__indent,
    STATE(136), 1,
      sym_children,
    ACTIONS(97), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2216] = 3,
    ACTIONS(366), 1,
      sym__indent,
    STATE(138), 1,
      sym_children,
    ACTIONS(81), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2230] = 6,
    ACTIONS(283), 1,
      anon_sym_EQ,
    ACTIONS(289), 1,
      anon_sym_DOT,
    ACTIONS(299), 1,
      anon_sym_COLON,
    ACTIONS(301), 1,
      anon_sym_,
    ACTIONS(303), 1,
      sym__newline,
    STATE(74), 2,
      sym_buffered_code,
      sym__content_after_dot,
  [2250] = 6,
    ACTIONS(265), 1,
      anon_sym_EQ,
    ACTIONS(267), 1,
      anon_sym_COLON,
    ACTIONS(269), 1,
      anon_sym_,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(273), 1,
      sym__newline,
    STATE(24), 2,
      sym_buffered_code,
      sym__content_after_dot,
  [2270] = 6,
    ACTIONS(243), 1,
      anon_sym_EQ,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_COLON,
    ACTIONS(370), 1,
      anon_sym_,
    ACTIONS(372), 1,
      sym__newline,
    STATE(140), 2,
      sym_buffered_code,
      sym__content_after_dot,
  [2290] = 3,
    ACTIONS(173), 1,
      sym__dedent,
    STATE(109), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(374), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2303] = 3,
    ACTIONS(377), 1,
      sym__dedent,
    STATE(109), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(331), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2316] = 3,
    ACTIONS(379), 1,
      sym__dedent,
    STATE(109), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(331), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2329] = 5,
    ACTIONS(381), 1,
      anon_sym_EQ,
    ACTIONS(383), 1,
      anon_sym_,
    ACTIONS(385), 1,
      anon_sym_DOT,
    STATE(117), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(387), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2346] = 3,
    ACTIONS(389), 1,
      sym__dedent,
    STATE(109), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(331), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2359] = 5,
    ACTIONS(385), 1,
      anon_sym_DOT,
    ACTIONS(391), 1,
      anon_sym_EQ,
    ACTIONS(393), 1,
      anon_sym_,
    STATE(117), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(395), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2376] = 2,
    ACTIONS(397), 1,
      sym__indent,
    ACTIONS(149), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2387] = 5,
    ACTIONS(385), 1,
      anon_sym_DOT,
    ACTIONS(399), 1,
      anon_sym_EQ,
    ACTIONS(401), 1,
      anon_sym_,
    STATE(114), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(403), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2404] = 4,
    ACTIONS(407), 1,
      anon_sym_,
    ACTIONS(409), 1,
      anon_sym_DOT,
    STATE(117), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(405), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2419] = 5,
    ACTIONS(385), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      anon_sym_EQ,
    ACTIONS(414), 1,
      anon_sym_,
    STATE(112), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(416), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2436] = 1,
    ACTIONS(93), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2444] = 1,
    ACTIONS(203), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2452] = 1,
    ACTIONS(317), 5,
      anon_sym_RPAREN,
      aux_sym__attribute_token1,
      aux_sym_js_attribute_name_token1,
      aux_sym_js_attribute_name_token2,
      aux_sym_js_attribute_name_token3,
  [2460] = 2,
    ACTIONS(420), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(418), 3,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_DOT,
  [2470] = 5,
    ACTIONS(422), 1,
      sym_content,
    ACTIONS(424), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(426), 1,
      sym__dedent,
    STATE(130), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(178), 1,
      aux_sym__content_or_javascript,
  [2486] = 2,
    ACTIONS(430), 1,
      anon_sym_,
    ACTIONS(428), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2496] = 2,
    ACTIONS(434), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(432), 3,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_DOT,
  [2506] = 2,
    ACTIONS(438), 1,
      anon_sym_,
    ACTIONS(436), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2516] = 2,
    ACTIONS(442), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(440), 3,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_DOT,
  [2526] = 2,
    STATE(111), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(331), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2536] = 1,
    ACTIONS(165), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2544] = 5,
    ACTIONS(444), 1,
      sym_content,
    ACTIONS(447), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(450), 1,
      sym__dedent,
    STATE(130), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(178), 1,
      aux_sym__content_or_javascript,
  [2560] = 1,
    ACTIONS(93), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2568] = 1,
    ACTIONS(183), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2576] = 1,
    ACTIONS(209), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2584] = 5,
    ACTIONS(422), 1,
      sym_content,
    ACTIONS(424), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(452), 1,
      sym__dedent,
    STATE(130), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(178), 1,
      aux_sym__content_or_javascript,
  [2600] = 1,
    ACTIONS(87), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2608] = 1,
    ACTIONS(87), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2616] = 1,
    ACTIONS(193), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2624] = 1,
    ACTIONS(97), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2632] = 2,
    STATE(113), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(331), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2642] = 1,
    ACTIONS(97), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2650] = 1,
    ACTIONS(81), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2658] = 1,
    ACTIONS(81), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2666] = 2,
    ACTIONS(456), 1,
      anon_sym_,
    ACTIONS(454), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2676] = 1,
    ACTIONS(103), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2684] = 1,
    ACTIONS(161), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2692] = 2,
    STATE(37), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(19), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2702] = 2,
    STATE(29), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(19), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2712] = 1,
    ACTIONS(155), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2720] = 2,
    STATE(110), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(331), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2730] = 5,
    ACTIONS(422), 1,
      sym_content,
    ACTIONS(424), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(458), 1,
      sym__dedent,
    STATE(130), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(178), 1,
      aux_sym__content_or_javascript,
  [2746] = 4,
    ACTIONS(424), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(460), 1,
      sym_content,
    ACTIONS(462), 1,
      sym__newline,
    STATE(166), 1,
      aux_sym__content_or_javascript,
  [2759] = 4,
    ACTIONS(424), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(464), 1,
      sym_content,
    ACTIONS(466), 1,
      sym__newline,
    STATE(151), 1,
      aux_sym__content_or_javascript,
  [2772] = 4,
    ACTIONS(424), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(460), 1,
      sym_content,
    ACTIONS(468), 1,
      sym__newline,
    STATE(166), 1,
      aux_sym__content_or_javascript,
  [2785] = 4,
    ACTIONS(470), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(472), 1,
      sym__newline,
    STATE(48), 1,
      sym__single_line_buf_code,
    STATE(221), 1,
      sym__un_delimited_javascript,
  [2798] = 4,
    ACTIONS(424), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(460), 1,
      sym_content,
    ACTIONS(474), 1,
      sym__newline,
    STATE(166), 1,
      aux_sym__content_or_javascript,
  [2811] = 2,
    STATE(140), 1,
      sym_tag,
    ACTIONS(331), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2820] = 4,
    ACTIONS(422), 1,
      sym_content,
    ACTIONS(424), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(134), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(178), 1,
      aux_sym__content_or_javascript,
  [2833] = 2,
    STATE(74), 1,
      sym_tag,
    ACTIONS(19), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2842] = 4,
    ACTIONS(476), 1,
      aux_sym__attribute_token2,
    ACTIONS(478), 1,
      anon_sym_SQUOTE,
    ACTIONS(480), 1,
      anon_sym_DQUOTE,
    STATE(183), 1,
      sym_quoted_attribute_value,
  [2855] = 4,
    ACTIONS(424), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(460), 1,
      sym_content,
    ACTIONS(482), 1,
      sym__newline,
    STATE(166), 1,
      aux_sym__content_or_javascript,
  [2868] = 2,
    STATE(141), 1,
      sym_tag,
    ACTIONS(331), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2877] = 4,
    ACTIONS(478), 1,
      anon_sym_SQUOTE,
    ACTIONS(480), 1,
      anon_sym_DQUOTE,
    ACTIONS(484), 1,
      aux_sym__attribute_token2,
    STATE(199), 1,
      sym_quoted_attribute_value,
  [2890] = 4,
    ACTIONS(424), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(460), 1,
      sym_content,
    ACTIONS(486), 1,
      sym__newline,
    STATE(166), 1,
      aux_sym__content_or_javascript,
  [2903] = 4,
    ACTIONS(422), 1,
      sym_content,
    ACTIONS(424), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(150), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(178), 1,
      aux_sym__content_or_javascript,
  [2916] = 2,
    STATE(135), 1,
      sym_tag,
    ACTIONS(331), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2925] = 4,
    ACTIONS(488), 1,
      sym_content,
    ACTIONS(491), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(494), 1,
      sym__newline,
    STATE(166), 1,
      aux_sym__content_or_javascript,
  [2938] = 4,
    ACTIONS(424), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(460), 1,
      sym_content,
    ACTIONS(496), 1,
      sym__newline,
    STATE(166), 1,
      aux_sym__content_or_javascript,
  [2951] = 4,
    ACTIONS(424), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(460), 1,
      sym_content,
    ACTIONS(498), 1,
      sym__newline,
    STATE(166), 1,
      aux_sym__content_or_javascript,
  [2964] = 2,
    STATE(63), 1,
      sym_tag,
    ACTIONS(19), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2973] = 2,
    STATE(46), 1,
      sym_tag,
    ACTIONS(62), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2982] = 4,
    ACTIONS(424), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(460), 1,
      sym_content,
    ACTIONS(500), 1,
      sym__newline,
    STATE(166), 1,
      aux_sym__content_or_javascript,
  [2995] = 4,
    ACTIONS(424), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(502), 1,
      sym_content,
    ACTIONS(504), 1,
      sym__newline,
    STATE(168), 1,
      aux_sym__content_or_javascript,
  [3008] = 2,
    STATE(23), 1,
      sym_tag,
    ACTIONS(62), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [3017] = 4,
    ACTIONS(424), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(460), 1,
      sym_content,
    ACTIONS(506), 1,
      sym__newline,
    STATE(166), 1,
      aux_sym__content_or_javascript,
  [3030] = 4,
    ACTIONS(424), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(460), 1,
      sym_content,
    ACTIONS(508), 1,
      sym__newline,
    STATE(166), 1,
      aux_sym__content_or_javascript,
  [3043] = 2,
    STATE(24), 1,
      sym_tag,
    ACTIONS(62), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [3052] = 2,
    STATE(69), 1,
      sym_tag,
    ACTIONS(19), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [3061] = 4,
    ACTIONS(424), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(460), 1,
      sym_content,
    ACTIONS(510), 1,
      sym__newline,
    STATE(166), 1,
      aux_sym__content_or_javascript,
  [3074] = 4,
    ACTIONS(422), 1,
      sym_content,
    ACTIONS(424), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(123), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(178), 1,
      aux_sym__content_or_javascript,
  [3087] = 4,
    ACTIONS(424), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(460), 1,
      sym_content,
    ACTIONS(512), 1,
      sym__newline,
    STATE(166), 1,
      aux_sym__content_or_javascript,
  [3100] = 2,
    ACTIONS(514), 1,
      anon_sym_,
    ACTIONS(516), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3108] = 3,
    ACTIONS(424), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(518), 1,
      sym_content,
    STATE(153), 1,
      aux_sym__content_or_javascript,
  [3118] = 2,
    ACTIONS(520), 1,
      anon_sym_,
    ACTIONS(522), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3126] = 3,
    ACTIONS(424), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(524), 1,
      sym_content,
    STATE(160), 1,
      aux_sym__content_or_javascript,
  [3136] = 3,
    ACTIONS(424), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(526), 1,
      sym_content,
    STATE(174), 1,
      aux_sym__content_or_javascript,
  [3146] = 3,
    ACTIONS(424), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(528), 1,
      sym_content,
    STATE(180), 1,
      aux_sym__content_or_javascript,
  [3156] = 3,
    ACTIONS(424), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(530), 1,
      sym_content,
    STATE(163), 1,
      aux_sym__content_or_javascript,
  [3166] = 2,
    ACTIONS(532), 1,
      anon_sym_,
    ACTIONS(534), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3174] = 3,
    ACTIONS(470), 1,
      sym__un_delimited_javascript_line,
    STATE(27), 1,
      sym__single_line_buf_code,
    STATE(221), 1,
      sym__un_delimited_javascript,
  [3184] = 1,
    ACTIONS(536), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [3190] = 3,
    ACTIONS(538), 1,
      anon_sym_,
    ACTIONS(540), 1,
      anon_sym_COMMA,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
  [3200] = 2,
    ACTIONS(546), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(544), 2,
      sym__newline,
      sym_content,
  [3208] = 2,
    ACTIONS(548), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(450), 2,
      sym__dedent,
      sym_content,
  [3216] = 3,
    ACTIONS(424), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(550), 1,
      sym_content,
    STATE(175), 1,
      aux_sym__content_or_javascript,
  [3226] = 3,
    ACTIONS(424), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(552), 1,
      sym_content,
    STATE(171), 1,
      aux_sym__content_or_javascript,
  [3236] = 2,
    ACTIONS(554), 1,
      anon_sym_,
    ACTIONS(556), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3244] = 3,
    ACTIONS(558), 1,
      sym__un_delimited_javascript_line,
    STATE(16), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(49), 1,
      sym__multi_line_buf_code,
  [3254] = 2,
    ACTIONS(560), 1,
      anon_sym_,
    ACTIONS(562), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3262] = 2,
    ACTIONS(564), 1,
      anon_sym_,
    ACTIONS(566), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3270] = 2,
    ACTIONS(568), 1,
      anon_sym_,
    ACTIONS(570), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3278] = 2,
    ACTIONS(572), 1,
      anon_sym_,
    ACTIONS(574), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3286] = 2,
    ACTIONS(576), 1,
      anon_sym_,
    ACTIONS(578), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3294] = 3,
    ACTIONS(580), 1,
      anon_sym_SQUOTE,
    ACTIONS(582), 1,
      anon_sym_DQUOTE,
    STATE(196), 1,
      sym_quoted_javascript,
  [3304] = 3,
    ACTIONS(580), 1,
      anon_sym_SQUOTE,
    ACTIONS(582), 1,
      anon_sym_DQUOTE,
    STATE(181), 1,
      sym_quoted_javascript,
  [3314] = 3,
    ACTIONS(470), 1,
      sym__un_delimited_javascript_line,
    STATE(62), 1,
      sym__single_line_buf_code,
    STATE(225), 1,
      sym__un_delimited_javascript,
  [3324] = 2,
    ACTIONS(584), 1,
      anon_sym_,
    ACTIONS(586), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3332] = 3,
    ACTIONS(538), 1,
      anon_sym_,
    ACTIONS(540), 1,
      anon_sym_COMMA,
    ACTIONS(588), 1,
      anon_sym_RPAREN,
  [3342] = 3,
    ACTIONS(424), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(590), 1,
      sym_content,
    STATE(167), 1,
      aux_sym__content_or_javascript,
  [3352] = 3,
    ACTIONS(470), 1,
      sym__un_delimited_javascript_line,
    STATE(145), 1,
      sym__single_line_buf_code,
    STATE(222), 1,
      sym__un_delimited_javascript,
  [3362] = 1,
    ACTIONS(592), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [3368] = 3,
    ACTIONS(424), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(594), 1,
      sym_content,
    STATE(155), 1,
      aux_sym__content_or_javascript,
  [3378] = 2,
    ACTIONS(596), 1,
      anon_sym_SQUOTE,
    ACTIONS(598), 1,
      aux_sym_quoted_javascript_token1,
  [3385] = 2,
    ACTIONS(600), 1,
      sym__comment_content,
    ACTIONS(602), 1,
      sym__newline,
  [3392] = 2,
    ACTIONS(538), 1,
      anon_sym_,
    ACTIONS(540), 1,
      anon_sym_COMMA,
  [3399] = 2,
    ACTIONS(596), 1,
      anon_sym_DQUOTE,
    ACTIONS(604), 1,
      aux_sym_quoted_javascript_token2,
  [3406] = 2,
    ACTIONS(606), 1,
      sym__un_delimited_javascript_line,
    STATE(147), 1,
      sym__un_delimited_javascript,
  [3413] = 2,
    ACTIONS(608), 1,
      anon_sym_DQUOTE,
    ACTIONS(610), 1,
      aux_sym_quoted_javascript_token2,
  [3420] = 2,
    ACTIONS(608), 1,
      anon_sym_SQUOTE,
    ACTIONS(612), 1,
      aux_sym_quoted_javascript_token1,
  [3427] = 1,
    ACTIONS(614), 1,
      sym__indent,
  [3431] = 1,
    ACTIONS(616), 1,
      aux_sym_unbuffered_code_token1,
  [3435] = 1,
    ACTIONS(618), 1,
      sym__newline,
  [3439] = 1,
    ACTIONS(620), 1,
      sym__newline,
  [3443] = 1,
    ACTIONS(622), 1,
      aux_sym__attribute_token1,
  [3447] = 1,
    ACTIONS(624), 1,
      ts_builtin_sym_end,
  [3451] = 1,
    ACTIONS(626), 1,
      sym__newline,
  [3455] = 1,
    ACTIONS(628), 1,
      sym__newline,
  [3459] = 1,
    ACTIONS(630), 1,
      sym__newline,
  [3463] = 1,
    ACTIONS(632), 1,
      sym__indent,
  [3467] = 1,
    ACTIONS(634), 1,
      sym__newline,
  [3471] = 1,
    ACTIONS(592), 1,
      sym__newline,
  [3475] = 1,
    ACTIONS(636), 1,
      anon_sym_RBRACE_RBRACE,
  [3479] = 1,
    ACTIONS(638), 1,
      aux_sym__attribute_token3,
  [3483] = 1,
    ACTIONS(640), 1,
      anon_sym_DQUOTE,
  [3487] = 1,
    ACTIONS(640), 1,
      anon_sym_SQUOTE,
  [3491] = 1,
    ACTIONS(642), 1,
      anon_sym_DQUOTE,
  [3495] = 1,
    ACTIONS(642), 1,
      anon_sym_SQUOTE,
  [3499] = 1,
    ACTIONS(644), 1,
      sym__delimited_javascript,
  [3503] = 1,
    ACTIONS(646), 1,
      aux_sym__attribute_token3,
  [3507] = 1,
    ACTIONS(648), 1,
      sym__indent,
  [3511] = 1,
    ACTIONS(650), 1,
      sym__indent,
  [3515] = 1,
    ACTIONS(652), 1,
      sym__newline,
  [3519] = 1,
    ACTIONS(654), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 117,
  [SMALL_STATE(6)] = 148,
  [SMALL_STATE(7)] = 181,
  [SMALL_STATE(8)] = 206,
  [SMALL_STATE(9)] = 231,
  [SMALL_STATE(10)] = 256,
  [SMALL_STATE(11)] = 281,
  [SMALL_STATE(12)] = 306,
  [SMALL_STATE(13)] = 331,
  [SMALL_STATE(14)] = 357,
  [SMALL_STATE(15)] = 383,
  [SMALL_STATE(16)] = 409,
  [SMALL_STATE(17)] = 433,
  [SMALL_STATE(18)] = 457,
  [SMALL_STATE(19)] = 483,
  [SMALL_STATE(20)] = 507,
  [SMALL_STATE(21)] = 529,
  [SMALL_STATE(22)] = 548,
  [SMALL_STATE(23)] = 567,
  [SMALL_STATE(24)] = 586,
  [SMALL_STATE(25)] = 605,
  [SMALL_STATE(26)] = 624,
  [SMALL_STATE(27)] = 647,
  [SMALL_STATE(28)] = 666,
  [SMALL_STATE(29)] = 685,
  [SMALL_STATE(30)] = 706,
  [SMALL_STATE(31)] = 731,
  [SMALL_STATE(32)] = 750,
  [SMALL_STATE(33)] = 769,
  [SMALL_STATE(34)] = 788,
  [SMALL_STATE(35)] = 807,
  [SMALL_STATE(36)] = 830,
  [SMALL_STATE(37)] = 853,
  [SMALL_STATE(38)] = 874,
  [SMALL_STATE(39)] = 893,
  [SMALL_STATE(40)] = 912,
  [SMALL_STATE(41)] = 931,
  [SMALL_STATE(42)] = 954,
  [SMALL_STATE(43)] = 977,
  [SMALL_STATE(44)] = 996,
  [SMALL_STATE(45)] = 1015,
  [SMALL_STATE(46)] = 1038,
  [SMALL_STATE(47)] = 1057,
  [SMALL_STATE(48)] = 1076,
  [SMALL_STATE(49)] = 1096,
  [SMALL_STATE(50)] = 1116,
  [SMALL_STATE(51)] = 1136,
  [SMALL_STATE(52)] = 1156,
  [SMALL_STATE(53)] = 1176,
  [SMALL_STATE(54)] = 1193,
  [SMALL_STATE(55)] = 1210,
  [SMALL_STATE(56)] = 1243,
  [SMALL_STATE(57)] = 1276,
  [SMALL_STATE(58)] = 1309,
  [SMALL_STATE(59)] = 1342,
  [SMALL_STATE(60)] = 1359,
  [SMALL_STATE(61)] = 1392,
  [SMALL_STATE(62)] = 1409,
  [SMALL_STATE(63)] = 1426,
  [SMALL_STATE(64)] = 1443,
  [SMALL_STATE(65)] = 1460,
  [SMALL_STATE(66)] = 1493,
  [SMALL_STATE(67)] = 1510,
  [SMALL_STATE(68)] = 1527,
  [SMALL_STATE(69)] = 1544,
  [SMALL_STATE(70)] = 1561,
  [SMALL_STATE(71)] = 1578,
  [SMALL_STATE(72)] = 1595,
  [SMALL_STATE(73)] = 1612,
  [SMALL_STATE(74)] = 1629,
  [SMALL_STATE(75)] = 1646,
  [SMALL_STATE(76)] = 1663,
  [SMALL_STATE(77)] = 1680,
  [SMALL_STATE(78)] = 1697,
  [SMALL_STATE(79)] = 1714,
  [SMALL_STATE(80)] = 1742,
  [SMALL_STATE(81)] = 1770,
  [SMALL_STATE(82)] = 1798,
  [SMALL_STATE(83)] = 1819,
  [SMALL_STATE(84)] = 1840,
  [SMALL_STATE(85)] = 1861,
  [SMALL_STATE(86)] = 1882,
  [SMALL_STATE(87)] = 1903,
  [SMALL_STATE(88)] = 1924,
  [SMALL_STATE(89)] = 1945,
  [SMALL_STATE(90)] = 1966,
  [SMALL_STATE(91)] = 1987,
  [SMALL_STATE(92)] = 2005,
  [SMALL_STATE(93)] = 2023,
  [SMALL_STATE(94)] = 2041,
  [SMALL_STATE(95)] = 2056,
  [SMALL_STATE(96)] = 2071,
  [SMALL_STATE(97)] = 2086,
  [SMALL_STATE(98)] = 2100,
  [SMALL_STATE(99)] = 2114,
  [SMALL_STATE(100)] = 2134,
  [SMALL_STATE(101)] = 2148,
  [SMALL_STATE(102)] = 2168,
  [SMALL_STATE(103)] = 2188,
  [SMALL_STATE(104)] = 2202,
  [SMALL_STATE(105)] = 2216,
  [SMALL_STATE(106)] = 2230,
  [SMALL_STATE(107)] = 2250,
  [SMALL_STATE(108)] = 2270,
  [SMALL_STATE(109)] = 2290,
  [SMALL_STATE(110)] = 2303,
  [SMALL_STATE(111)] = 2316,
  [SMALL_STATE(112)] = 2329,
  [SMALL_STATE(113)] = 2346,
  [SMALL_STATE(114)] = 2359,
  [SMALL_STATE(115)] = 2376,
  [SMALL_STATE(116)] = 2387,
  [SMALL_STATE(117)] = 2404,
  [SMALL_STATE(118)] = 2419,
  [SMALL_STATE(119)] = 2436,
  [SMALL_STATE(120)] = 2444,
  [SMALL_STATE(121)] = 2452,
  [SMALL_STATE(122)] = 2460,
  [SMALL_STATE(123)] = 2470,
  [SMALL_STATE(124)] = 2486,
  [SMALL_STATE(125)] = 2496,
  [SMALL_STATE(126)] = 2506,
  [SMALL_STATE(127)] = 2516,
  [SMALL_STATE(128)] = 2526,
  [SMALL_STATE(129)] = 2536,
  [SMALL_STATE(130)] = 2544,
  [SMALL_STATE(131)] = 2560,
  [SMALL_STATE(132)] = 2568,
  [SMALL_STATE(133)] = 2576,
  [SMALL_STATE(134)] = 2584,
  [SMALL_STATE(135)] = 2600,
  [SMALL_STATE(136)] = 2608,
  [SMALL_STATE(137)] = 2616,
  [SMALL_STATE(138)] = 2624,
  [SMALL_STATE(139)] = 2632,
  [SMALL_STATE(140)] = 2642,
  [SMALL_STATE(141)] = 2650,
  [SMALL_STATE(142)] = 2658,
  [SMALL_STATE(143)] = 2666,
  [SMALL_STATE(144)] = 2676,
  [SMALL_STATE(145)] = 2684,
  [SMALL_STATE(146)] = 2692,
  [SMALL_STATE(147)] = 2702,
  [SMALL_STATE(148)] = 2712,
  [SMALL_STATE(149)] = 2720,
  [SMALL_STATE(150)] = 2730,
  [SMALL_STATE(151)] = 2746,
  [SMALL_STATE(152)] = 2759,
  [SMALL_STATE(153)] = 2772,
  [SMALL_STATE(154)] = 2785,
  [SMALL_STATE(155)] = 2798,
  [SMALL_STATE(156)] = 2811,
  [SMALL_STATE(157)] = 2820,
  [SMALL_STATE(158)] = 2833,
  [SMALL_STATE(159)] = 2842,
  [SMALL_STATE(160)] = 2855,
  [SMALL_STATE(161)] = 2868,
  [SMALL_STATE(162)] = 2877,
  [SMALL_STATE(163)] = 2890,
  [SMALL_STATE(164)] = 2903,
  [SMALL_STATE(165)] = 2916,
  [SMALL_STATE(166)] = 2925,
  [SMALL_STATE(167)] = 2938,
  [SMALL_STATE(168)] = 2951,
  [SMALL_STATE(169)] = 2964,
  [SMALL_STATE(170)] = 2973,
  [SMALL_STATE(171)] = 2982,
  [SMALL_STATE(172)] = 2995,
  [SMALL_STATE(173)] = 3008,
  [SMALL_STATE(174)] = 3017,
  [SMALL_STATE(175)] = 3030,
  [SMALL_STATE(176)] = 3043,
  [SMALL_STATE(177)] = 3052,
  [SMALL_STATE(178)] = 3061,
  [SMALL_STATE(179)] = 3074,
  [SMALL_STATE(180)] = 3087,
  [SMALL_STATE(181)] = 3100,
  [SMALL_STATE(182)] = 3108,
  [SMALL_STATE(183)] = 3118,
  [SMALL_STATE(184)] = 3126,
  [SMALL_STATE(185)] = 3136,
  [SMALL_STATE(186)] = 3146,
  [SMALL_STATE(187)] = 3156,
  [SMALL_STATE(188)] = 3166,
  [SMALL_STATE(189)] = 3174,
  [SMALL_STATE(190)] = 3184,
  [SMALL_STATE(191)] = 3190,
  [SMALL_STATE(192)] = 3200,
  [SMALL_STATE(193)] = 3208,
  [SMALL_STATE(194)] = 3216,
  [SMALL_STATE(195)] = 3226,
  [SMALL_STATE(196)] = 3236,
  [SMALL_STATE(197)] = 3244,
  [SMALL_STATE(198)] = 3254,
  [SMALL_STATE(199)] = 3262,
  [SMALL_STATE(200)] = 3270,
  [SMALL_STATE(201)] = 3278,
  [SMALL_STATE(202)] = 3286,
  [SMALL_STATE(203)] = 3294,
  [SMALL_STATE(204)] = 3304,
  [SMALL_STATE(205)] = 3314,
  [SMALL_STATE(206)] = 3324,
  [SMALL_STATE(207)] = 3332,
  [SMALL_STATE(208)] = 3342,
  [SMALL_STATE(209)] = 3352,
  [SMALL_STATE(210)] = 3362,
  [SMALL_STATE(211)] = 3368,
  [SMALL_STATE(212)] = 3378,
  [SMALL_STATE(213)] = 3385,
  [SMALL_STATE(214)] = 3392,
  [SMALL_STATE(215)] = 3399,
  [SMALL_STATE(216)] = 3406,
  [SMALL_STATE(217)] = 3413,
  [SMALL_STATE(218)] = 3420,
  [SMALL_STATE(219)] = 3427,
  [SMALL_STATE(220)] = 3431,
  [SMALL_STATE(221)] = 3435,
  [SMALL_STATE(222)] = 3439,
  [SMALL_STATE(223)] = 3443,
  [SMALL_STATE(224)] = 3447,
  [SMALL_STATE(225)] = 3451,
  [SMALL_STATE(226)] = 3455,
  [SMALL_STATE(227)] = 3459,
  [SMALL_STATE(228)] = 3463,
  [SMALL_STATE(229)] = 3467,
  [SMALL_STATE(230)] = 3471,
  [SMALL_STATE(231)] = 3475,
  [SMALL_STATE(232)] = 3479,
  [SMALL_STATE(233)] = 3483,
  [SMALL_STATE(234)] = 3487,
  [SMALL_STATE(235)] = 3491,
  [SMALL_STATE(236)] = 3495,
  [SMALL_STATE(237)] = 3499,
  [SMALL_STATE(238)] = 3503,
  [SMALL_STATE(239)] = 3507,
  [SMALL_STATE(240)] = 3511,
  [SMALL_STATE(241)] = 3515,
  [SMALL_STATE(242)] = 3519,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(190),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(216),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(216),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(146),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(205),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(213),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(220),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(152),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(58),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(58),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 5),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 5),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(40),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(229),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_content, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_content, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffered_code, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffered_code, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 7),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(60),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(60),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 5, .production_id = 3),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 5, .production_id = 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_content, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_content, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 5),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 5),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 3),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 5),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 5),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 6),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 6),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 6),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 6),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 2),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 2),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 4),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 4),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(124),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(126),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(92),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(172),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(56),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(56),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 2),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 2),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 1),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 1),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [409] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2), SHIFT_REPEAT(223),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 1),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 1),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_name, 1),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_attribute_name, 1),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_attribute_name, 1),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(178),
  [447] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(237),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 1),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(166),
  [491] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(237),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 4),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 4),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 4),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 4),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 2),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 2),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 3),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 3),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 3),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 3),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 3),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 3),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 3),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 3),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 4),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 4),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 5),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 5),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__un_delimited_javascript, 1),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [624] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
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
