#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 212
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 73
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
  anon_sym_COLON = 10,
  anon_sym_ = 11,
  anon_sym_DOT = 12,
  anon_sym_LPAREN = 13,
  anon_sym_COMMA = 14,
  anon_sym_RPAREN = 15,
  aux_sym__attribute_token1 = 16,
  anon_sym_EQ = 17,
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
  sym_tag = 46,
  sym__content_after_dot = 47,
  sym_attributes = 48,
  sym_attribute = 49,
  sym__attribute = 50,
  sym__js_attribute = 51,
  sym_children = 52,
  sym__children_choice = 53,
  sym_comment = 54,
  sym_js_attribute_name = 55,
  sym_attribute_name = 56,
  sym_quoted_javascript = 57,
  sym_quoted_attribute_value = 58,
  aux_sym__content_or_javascript = 59,
  sym__un_delimited_javascript = 60,
  aux_sym__un_delimited_javascript_multiline = 61,
  sym__single_line_buf_code = 62,
  sym__multi_line_buf_code = 63,
  sym_unbuffered_code = 64,
  aux_sym_source_file_repeat1 = 65,
  aux_sym_conditional_repeat1 = 66,
  aux_sym_tag_repeat1 = 67,
  aux_sym__content_after_dot_repeat1 = 68,
  aux_sym_attributes_repeat1 = 69,
  aux_sym__attribute_repeat1 = 70,
  aux_sym_children_repeat1 = 71,
  aux_sym_comment_repeat1 = 72,
  alias_sym_attribute_modifier = 73,
  alias_sym_attribute_value = 74,
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
  [anon_sym_COLON] = ":",
  [anon_sym_] = " ",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [aux_sym__attribute_token1] = "_attribute_token1",
  [anon_sym_EQ] = "=",
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
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_] = anon_sym_,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym__attribute_token1] = aux_sym__attribute_token1,
  [anon_sym_EQ] = anon_sym_EQ,
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
  [anon_sym_EQ] = {
    .visible = true,
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
      if (lookahead == '"') ADVANCE(157);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '\'') ADVANCE(154);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead == '=') ADVANCE(86);
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
          lookahead == ' ') ADVANCE(160);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(180);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(174);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(79);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(79);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead == '=') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == ' ') SKIP(6)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(163);
      if (lookahead != 0) ADVANCE(170);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(157);
      if (lookahead == '\'') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(158);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(155);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == ')') ADVANCE(84);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 12:
      if (lookahead == ')') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(91);
      END_STATE();
    case 14:
      if (lookahead == ']') ADVANCE(151);
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
      if (lookahead == '{') ADVANCE(171);
      END_STATE();
    case 43:
      if (lookahead == '}') ADVANCE(172);
      END_STATE();
    case 44:
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 45:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(90);
      END_STATE();
    case 46:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(145);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 47:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 48:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
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
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == '-') ADVANCE(185);
      if (lookahead == '.') ADVANCE(181);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == 'd') ADVANCE(119);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'u') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 52:
      if (eof) ADVANCE(54);
      if (lookahead == ' ') SKIP(52)
      if (lookahead == '#') ADVANCE(169);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '/') ADVANCE(164);
      if (lookahead == 'd') ADVANCE(120);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (lookahead != 0) ADVANCE(170);
      END_STATE();
    case 53:
      if (eof) ADVANCE(54);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 'u') ADVANCE(115);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(166);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(145);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__attribute_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__attribute_token2);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__attribute_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(87);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__attribute_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__attribute_token3);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(133);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(134);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(135);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(64);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(65);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(124);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(126);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(102);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(131);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(95);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(96);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(100);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(71);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(99);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(72);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(73);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(125);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(128);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(137);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(121);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(122);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(123);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(145);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(146);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(147);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_js_attribute_name_token1);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_js_attribute_name_token2);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_js_attribute_name_token3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == ' ') ADVANCE(162);
      if (lookahead == '#') ADVANCE(169);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '/') ADVANCE(164);
      if (lookahead == 'd') ADVANCE(120);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (lookahead != 0) ADVANCE(170);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == ' ') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(163);
      if (lookahead != 0) ADVANCE(170);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(147);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__delimited_javascript);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__delimited_javascript);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '#') ADVANCE(182);
      if (lookahead == '-') ADVANCE(185);
      if (lookahead == '.') ADVANCE(181);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == 'd') ADVANCE(119);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'u') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'i') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(146);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(183);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(170);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_unbuffered_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(187);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 53},
  [2] = {.lex_state = 53, .external_lex_state = 2},
  [3] = {.lex_state = 53, .external_lex_state = 2},
  [4] = {.lex_state = 53},
  [5] = {.lex_state = 53, .external_lex_state = 2},
  [6] = {.lex_state = 53},
  [7] = {.lex_state = 53, .external_lex_state = 3},
  [8] = {.lex_state = 53, .external_lex_state = 3},
  [9] = {.lex_state = 53, .external_lex_state = 3},
  [10] = {.lex_state = 53, .external_lex_state = 3},
  [11] = {.lex_state = 53, .external_lex_state = 3},
  [12] = {.lex_state = 51, .external_lex_state = 2},
  [13] = {.lex_state = 52, .external_lex_state = 2},
  [14] = {.lex_state = 52, .external_lex_state = 2},
  [15] = {.lex_state = 52, .external_lex_state = 2},
  [16] = {.lex_state = 52, .external_lex_state = 2},
  [17] = {.lex_state = 51, .external_lex_state = 2},
  [18] = {.lex_state = 52, .external_lex_state = 2},
  [19] = {.lex_state = 53, .external_lex_state = 2},
  [20] = {.lex_state = 51, .external_lex_state = 2},
  [21] = {.lex_state = 53, .external_lex_state = 2},
  [22] = {.lex_state = 53, .external_lex_state = 2},
  [23] = {.lex_state = 53, .external_lex_state = 2},
  [24] = {.lex_state = 53, .external_lex_state = 3},
  [25] = {.lex_state = 53, .external_lex_state = 2},
  [26] = {.lex_state = 53},
  [27] = {.lex_state = 53},
  [28] = {.lex_state = 53, .external_lex_state = 2},
  [29] = {.lex_state = 53, .external_lex_state = 2},
  [30] = {.lex_state = 53, .external_lex_state = 4},
  [31] = {.lex_state = 53, .external_lex_state = 2},
  [32] = {.lex_state = 53, .external_lex_state = 2},
  [33] = {.lex_state = 53, .external_lex_state = 4},
  [34] = {.lex_state = 53, .external_lex_state = 4},
  [35] = {.lex_state = 53},
  [36] = {.lex_state = 53, .external_lex_state = 4},
  [37] = {.lex_state = 53, .external_lex_state = 2},
  [38] = {.lex_state = 52, .external_lex_state = 2},
  [39] = {.lex_state = 53, .external_lex_state = 2},
  [40] = {.lex_state = 53, .external_lex_state = 4},
  [41] = {.lex_state = 53, .external_lex_state = 2},
  [42] = {.lex_state = 53, .external_lex_state = 2},
  [43] = {.lex_state = 53, .external_lex_state = 2},
  [44] = {.lex_state = 53, .external_lex_state = 4},
  [45] = {.lex_state = 53, .external_lex_state = 2},
  [46] = {.lex_state = 53, .external_lex_state = 4},
  [47] = {.lex_state = 53, .external_lex_state = 2},
  [48] = {.lex_state = 53},
  [49] = {.lex_state = 53},
  [50] = {.lex_state = 53},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 53},
  [53] = {.lex_state = 53},
  [54] = {.lex_state = 53},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 53},
  [57] = {.lex_state = 11},
  [58] = {.lex_state = 53},
  [59] = {.lex_state = 53},
  [60] = {.lex_state = 53},
  [61] = {.lex_state = 53},
  [62] = {.lex_state = 53},
  [63] = {.lex_state = 53},
  [64] = {.lex_state = 53},
  [65] = {.lex_state = 53},
  [66] = {.lex_state = 53},
  [67] = {.lex_state = 53},
  [68] = {.lex_state = 4, .external_lex_state = 5},
  [69] = {.lex_state = 4, .external_lex_state = 5},
  [70] = {.lex_state = 4, .external_lex_state = 5},
  [71] = {.lex_state = 4, .external_lex_state = 5},
  [72] = {.lex_state = 4, .external_lex_state = 5},
  [73] = {.lex_state = 4, .external_lex_state = 5},
  [74] = {.lex_state = 9, .external_lex_state = 2},
  [75] = {.lex_state = 9, .external_lex_state = 2},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 4, .external_lex_state = 5},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 9, .external_lex_state = 3},
  [81] = {.lex_state = 9, .external_lex_state = 3},
  [82] = {.lex_state = 9, .external_lex_state = 3},
  [83] = {.lex_state = 9, .external_lex_state = 3},
  [84] = {.lex_state = 9, .external_lex_state = 3},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 9, .external_lex_state = 2},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 9, .external_lex_state = 2},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 1, .external_lex_state = 2},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 1, .external_lex_state = 2},
  [97] = {.lex_state = 5, .external_lex_state = 5},
  [98] = {.lex_state = 5, .external_lex_state = 5},
  [99] = {.lex_state = 1, .external_lex_state = 2},
  [100] = {.lex_state = 5, .external_lex_state = 5},
  [101] = {.lex_state = 5, .external_lex_state = 5},
  [102] = {.lex_state = 5, .external_lex_state = 5},
  [103] = {.lex_state = 9, .external_lex_state = 2},
  [104] = {.lex_state = 9, .external_lex_state = 2},
  [105] = {.lex_state = 9, .external_lex_state = 2},
  [106] = {.lex_state = 9, .external_lex_state = 2},
  [107] = {.lex_state = 9, .external_lex_state = 2},
  [108] = {.lex_state = 9, .external_lex_state = 2},
  [109] = {.lex_state = 9, .external_lex_state = 2},
  [110] = {.lex_state = 9, .external_lex_state = 2},
  [111] = {.lex_state = 9, .external_lex_state = 2},
  [112] = {.lex_state = 9, .external_lex_state = 2},
  [113] = {.lex_state = 9},
  [114] = {.lex_state = 9, .external_lex_state = 2},
  [115] = {.lex_state = 1, .external_lex_state = 2},
  [116] = {.lex_state = 9},
  [117] = {.lex_state = 9, .external_lex_state = 2},
  [118] = {.lex_state = 11},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 9, .external_lex_state = 2},
  [121] = {.lex_state = 5, .external_lex_state = 5},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 1, .external_lex_state = 5},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1, .external_lex_state = 5},
  [127] = {.lex_state = 9},
  [128] = {.lex_state = 1, .external_lex_state = 5},
  [129] = {.lex_state = 1, .external_lex_state = 5},
  [130] = {.lex_state = 9},
  [131] = {.lex_state = 1, .external_lex_state = 5},
  [132] = {.lex_state = 9},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 1, .external_lex_state = 5},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 2, .external_lex_state = 5},
  [137] = {.lex_state = 1, .external_lex_state = 5},
  [138] = {.lex_state = 1, .external_lex_state = 5},
  [139] = {.lex_state = 9},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 1, .external_lex_state = 5},
  [142] = {.lex_state = 1, .external_lex_state = 5},
  [143] = {.lex_state = 1, .external_lex_state = 5},
  [144] = {.lex_state = 1, .external_lex_state = 5},
  [145] = {.lex_state = 9},
  [146] = {.lex_state = 9},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 5, .external_lex_state = 5},
  [149] = {.lex_state = 5, .external_lex_state = 5},
  [150] = {.lex_state = 5, .external_lex_state = 5},
  [151] = {.lex_state = 1, .external_lex_state = 5},
  [152] = {.lex_state = 1, .external_lex_state = 5},
  [153] = {.lex_state = 1, .external_lex_state = 5},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 1, .external_lex_state = 2},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 1, .external_lex_state = 5},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 9},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 4},
  [184] = {.lex_state = 10},
  [185] = {.lex_state = 6, .external_lex_state = 5},
  [186] = {.lex_state = 2},
  [187] = {.lex_state = 8},
  [188] = {.lex_state = 10},
  [189] = {.lex_state = 8},
  [190] = {.lex_state = 45},
  [191] = {.lex_state = 0, .external_lex_state = 4},
  [192] = {.lex_state = 11},
  [193] = {.lex_state = 0, .external_lex_state = 5},
  [194] = {.lex_state = 0, .external_lex_state = 4},
  [195] = {.lex_state = 0, .external_lex_state = 5},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0, .external_lex_state = 5},
  [198] = {.lex_state = 0, .external_lex_state = 5},
  [199] = {.lex_state = 0, .external_lex_state = 5},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 187},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 3},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 45},
  [208] = {.lex_state = 0, .external_lex_state = 4},
  [209] = {.lex_state = 0, .external_lex_state = 4},
  [210] = {.lex_state = 0, .external_lex_state = 5},
  [211] = {.lex_state = 0, .external_lex_state = 5},
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
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
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
    [sym_source_file] = STATE(200),
    [sym_doctype] = STATE(4),
    [sym_conditional] = STATE(4),
    [sym_tag] = STATE(4),
    [sym_comment] = STATE(4),
    [sym_unbuffered_code] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_doctype] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_elseif] = ACTIONS(9),
    [anon_sym_unless] = ACTIONS(7),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_SLASH_SLASH] = ACTIONS(13),
    [sym_tag_name] = ACTIONS(15),
    [sym_class] = ACTIONS(17),
    [sym_id] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(25), 1,
      anon_sym_PIPE,
    ACTIONS(27), 1,
      sym_tag_name,
    ACTIONS(31), 1,
      sym__dedent,
    ACTIONS(29), 2,
      sym_class,
      sym_id,
    ACTIONS(21), 4,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
    ACTIONS(23), 4,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
    STATE(5), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [32] = 7,
    ACTIONS(25), 1,
      anon_sym_PIPE,
    ACTIONS(27), 1,
      sym_tag_name,
    ACTIONS(33), 1,
      sym__dedent,
    ACTIONS(29), 2,
      sym_class,
      sym_id,
    ACTIONS(21), 4,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
    ACTIONS(23), 4,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
    STATE(5), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [64] = 10,
    ACTIONS(5), 1,
      anon_sym_doctype,
    ACTIONS(9), 1,
      anon_sym_elseif,
    ACTIONS(11), 1,
      anon_sym_else,
    ACTIONS(13), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(15), 1,
      sym_tag_name,
    ACTIONS(19), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(17), 2,
      sym_class,
      sym_id,
    STATE(6), 6,
      sym_doctype,
      sym_conditional,
      sym_tag,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_source_file_repeat1,
  [102] = 6,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    ACTIONS(44), 1,
      sym_tag_name,
    ACTIONS(47), 2,
      sym_class,
      sym_id,
    ACTIONS(39), 4,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
    STATE(5), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(37), 5,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [132] = 10,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 1,
      anon_sym_doctype,
    ACTIONS(58), 1,
      anon_sym_elseif,
    ACTIONS(61), 1,
      anon_sym_else,
    ACTIONS(64), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      sym_tag_name,
    ACTIONS(73), 1,
      anon_sym_DASH,
    ACTIONS(55), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(70), 2,
      sym_class,
      sym_id,
    STATE(6), 6,
      sym_doctype,
      sym_conditional,
      sym_tag,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_source_file_repeat1,
  [170] = 4,
    ACTIONS(80), 1,
      sym__indent,
    STATE(25), 1,
      sym_children,
    ACTIONS(78), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(76), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [194] = 4,
    ACTIONS(80), 1,
      sym__indent,
    STATE(29), 1,
      sym_children,
    ACTIONS(84), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(82), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [218] = 4,
    ACTIONS(80), 1,
      sym__indent,
    STATE(22), 1,
      sym_children,
    ACTIONS(88), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(86), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [242] = 4,
    ACTIONS(80), 1,
      sym__indent,
    STATE(42), 1,
      sym_children,
    ACTIONS(92), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(90), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [266] = 4,
    ACTIONS(80), 1,
      sym__indent,
    STATE(28), 1,
      sym_children,
    ACTIONS(96), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(94), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [290] = 4,
    ACTIONS(102), 1,
      sym__un_delimited_javascript_line,
    STATE(12), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(98), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(100), 10,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [313] = 5,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      sym__comment_content,
    ACTIONS(111), 1,
      sym__dedent,
    STATE(16), 1,
      aux_sym_comment_repeat1,
    ACTIONS(107), 10,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [338] = 5,
    ACTIONS(109), 1,
      sym__comment_content,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 1,
      sym__dedent,
    STATE(13), 1,
      aux_sym_comment_repeat1,
    ACTIONS(115), 10,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [363] = 5,
    ACTIONS(109), 1,
      sym__comment_content,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 1,
      sym__dedent,
    STATE(16), 1,
      aux_sym_comment_repeat1,
    ACTIONS(115), 10,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [388] = 4,
    ACTIONS(123), 1,
      sym__comment_content,
    STATE(16), 1,
      aux_sym_comment_repeat1,
    ACTIONS(119), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(121), 10,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [411] = 4,
    ACTIONS(130), 1,
      sym__un_delimited_javascript_line,
    STATE(12), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(126), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(128), 10,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [434] = 5,
    ACTIONS(109), 1,
      sym__comment_content,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    ACTIONS(136), 1,
      sym__dedent,
    STATE(15), 1,
      aux_sym_comment_repeat1,
    ACTIONS(134), 10,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [459] = 2,
    ACTIONS(92), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(90), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [477] = 2,
    ACTIONS(138), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(140), 11,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      sym__un_delimited_javascript_line,
      anon_sym_DASH,
  [495] = 2,
    ACTIONS(96), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(94), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [513] = 2,
    ACTIONS(96), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(94), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [531] = 2,
    ACTIONS(88), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(86), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [549] = 3,
    ACTIONS(146), 1,
      sym__indent,
    ACTIONS(144), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(142), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [569] = 2,
    ACTIONS(150), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(148), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [587] = 3,
    STATE(27), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(154), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(152), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [607] = 5,
    ACTIONS(160), 1,
      sym_tag_name,
    ACTIONS(163), 2,
      sym_class,
      sym_id,
    STATE(27), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(156), 4,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
    ACTIONS(158), 4,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
  [631] = 2,
    ACTIONS(92), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(90), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [649] = 2,
    ACTIONS(78), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(76), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [667] = 4,
    ACTIONS(166), 1,
      sym__indent,
    STATE(66), 1,
      sym_children,
    ACTIONS(78), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(76), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [689] = 2,
    ACTIONS(170), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(168), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [707] = 2,
    ACTIONS(174), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(172), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [725] = 4,
    ACTIONS(166), 1,
      sym__indent,
    STATE(61), 1,
      sym_children,
    ACTIONS(96), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(94), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [747] = 4,
    ACTIONS(166), 1,
      sym__indent,
    STATE(49), 1,
      sym_children,
    ACTIONS(88), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(86), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [769] = 3,
    STATE(27), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(178), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(176), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [789] = 4,
    ACTIONS(166), 1,
      sym__indent,
    STATE(59), 1,
      sym_children,
    ACTIONS(84), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(82), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [811] = 2,
    ACTIONS(182), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(180), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [829] = 2,
    ACTIONS(119), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(121), 11,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      sym__comment_content,
      anon_sym_DASH,
  [847] = 2,
    ACTIONS(84), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(82), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [865] = 4,
    ACTIONS(166), 1,
      sym__indent,
    STATE(56), 1,
      sym_children,
    ACTIONS(92), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(90), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [887] = 2,
    ACTIONS(186), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(184), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [905] = 2,
    ACTIONS(84), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(82), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [923] = 3,
    ACTIONS(192), 1,
      sym__dedent,
    ACTIONS(190), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(188), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [942] = 3,
    ACTIONS(198), 1,
      sym__indent,
    ACTIONS(196), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(194), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [961] = 3,
    ACTIONS(204), 1,
      sym__dedent,
    ACTIONS(202), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(200), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [980] = 3,
    ACTIONS(206), 1,
      sym__indent,
    ACTIONS(134), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(132), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [999] = 2,
    ACTIONS(210), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(208), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1016] = 2,
    ACTIONS(84), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(82), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1032] = 2,
    ACTIONS(96), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(94), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1048] = 2,
    ACTIONS(214), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(212), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1064] = 8,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
    ACTIONS(218), 1,
      aux_sym__attribute_token1,
    STATE(51), 1,
      aux_sym_attributes_repeat1,
    STATE(90), 1,
      sym_attribute_name,
    STATE(91), 1,
      sym_js_attribute_name,
    STATE(183), 1,
      sym_attribute,
    STATE(176), 2,
      sym__attribute,
      sym__js_attribute,
    ACTIONS(221), 3,
      aux_sym_js_attribute_name_token1,
      aux_sym_js_attribute_name_token2,
      aux_sym_js_attribute_name_token3,
  [1092] = 2,
    ACTIONS(88), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(86), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1108] = 2,
    ACTIONS(174), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(172), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1124] = 2,
    ACTIONS(96), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(94), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1140] = 8,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
    ACTIONS(226), 1,
      aux_sym__attribute_token1,
    STATE(51), 1,
      aux_sym_attributes_repeat1,
    STATE(90), 1,
      sym_attribute_name,
    STATE(91), 1,
      sym_js_attribute_name,
    STATE(156), 1,
      sym_attribute,
    STATE(176), 2,
      sym__attribute,
      sym__js_attribute,
    ACTIONS(228), 3,
      aux_sym_js_attribute_name_token1,
      aux_sym_js_attribute_name_token2,
      aux_sym_js_attribute_name_token3,
  [1168] = 2,
    ACTIONS(84), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(82), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1184] = 8,
    ACTIONS(226), 1,
      aux_sym__attribute_token1,
    ACTIONS(230), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_attributes_repeat1,
    STATE(90), 1,
      sym_attribute_name,
    STATE(91), 1,
      sym_js_attribute_name,
    STATE(164), 1,
      sym_attribute,
    STATE(176), 2,
      sym__attribute,
      sym__js_attribute,
    ACTIONS(228), 3,
      aux_sym_js_attribute_name_token1,
      aux_sym_js_attribute_name_token2,
      aux_sym_js_attribute_name_token3,
  [1212] = 2,
    ACTIONS(92), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(90), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1228] = 2,
    ACTIONS(78), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(76), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1244] = 2,
    ACTIONS(186), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(184), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1260] = 2,
    ACTIONS(92), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(90), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1276] = 2,
    ACTIONS(115), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(113), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1292] = 2,
    ACTIONS(107), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(105), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1308] = 2,
    ACTIONS(234), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(232), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1324] = 2,
    ACTIONS(238), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(236), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1340] = 2,
    ACTIONS(150), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(148), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1356] = 2,
    ACTIONS(242), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(240), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1372] = 9,
    ACTIONS(244), 1,
      anon_sym_COLON,
    ACTIONS(246), 1,
      anon_sym_,
    ACTIONS(248), 1,
      anon_sym_DOT,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      sym__newline,
    STATE(52), 1,
      sym__content_after_dot,
    STATE(72), 1,
      aux_sym_tag_repeat1,
    STATE(121), 1,
      sym_attributes,
    ACTIONS(252), 2,
      sym_class,
      sym_id,
  [1401] = 9,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      anon_sym_COLON,
    ACTIONS(258), 1,
      anon_sym_,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(264), 1,
      sym__newline,
    STATE(23), 1,
      sym__content_after_dot,
    STATE(70), 1,
      aux_sym_tag_repeat1,
    STATE(102), 1,
      sym_attributes,
    ACTIONS(262), 2,
      sym_class,
      sym_id,
  [1430] = 9,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(266), 1,
      anon_sym_COLON,
    ACTIONS(268), 1,
      anon_sym_,
    ACTIONS(272), 1,
      sym__newline,
    STATE(21), 1,
      sym__content_after_dot,
    STATE(78), 1,
      aux_sym_tag_repeat1,
    STATE(100), 1,
      sym_attributes,
    ACTIONS(270), 2,
      sym_class,
      sym_id,
  [1459] = 9,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_COLON,
    ACTIONS(276), 1,
      anon_sym_,
    ACTIONS(278), 1,
      anon_sym_DOT,
    ACTIONS(282), 1,
      sym__newline,
    STATE(73), 1,
      aux_sym_tag_repeat1,
    STATE(98), 1,
      sym_attributes,
    STATE(114), 1,
      sym__content_after_dot,
    ACTIONS(280), 2,
      sym_class,
      sym_id,
  [1488] = 9,
    ACTIONS(248), 1,
      anon_sym_DOT,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      anon_sym_COLON,
    ACTIONS(286), 1,
      anon_sym_,
    ACTIONS(288), 1,
      sym__newline,
    STATE(54), 1,
      sym__content_after_dot,
    STATE(78), 1,
      aux_sym_tag_repeat1,
    STATE(101), 1,
      sym_attributes,
    ACTIONS(270), 2,
      sym_class,
      sym_id,
  [1517] = 9,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      anon_sym_DOT,
    ACTIONS(290), 1,
      anon_sym_COLON,
    ACTIONS(292), 1,
      anon_sym_,
    ACTIONS(294), 1,
      sym__newline,
    STATE(78), 1,
      aux_sym_tag_repeat1,
    STATE(97), 1,
      sym_attributes,
    STATE(111), 1,
      sym__content_after_dot,
    ACTIONS(270), 2,
      sym_class,
      sym_id,
  [1546] = 4,
    ACTIONS(296), 1,
      anon_sym_PIPE,
    ACTIONS(300), 1,
      sym__dedent,
    ACTIONS(298), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(75), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [1564] = 4,
    ACTIONS(37), 1,
      sym__dedent,
    ACTIONS(302), 1,
      anon_sym_PIPE,
    ACTIONS(305), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(75), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [1582] = 3,
    ACTIONS(25), 1,
      anon_sym_PIPE,
    ACTIONS(29), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(2), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [1597] = 3,
    ACTIONS(25), 1,
      anon_sym_PIPE,
    ACTIONS(29), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(3), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [1612] = 4,
    STATE(78), 1,
      aux_sym_tag_repeat1,
    ACTIONS(310), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(312), 2,
      sym_class,
      sym_id,
    ACTIONS(308), 3,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_LPAREN,
  [1629] = 3,
    ACTIONS(296), 1,
      anon_sym_PIPE,
    ACTIONS(298), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(74), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [1644] = 3,
    ACTIONS(315), 1,
      sym__indent,
    STATE(112), 1,
      sym_children,
    ACTIONS(86), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [1658] = 3,
    ACTIONS(315), 1,
      sym__indent,
    STATE(110), 1,
      sym_children,
    ACTIONS(94), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [1672] = 3,
    ACTIONS(315), 1,
      sym__indent,
    STATE(107), 1,
      sym_children,
    ACTIONS(90), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [1686] = 3,
    ACTIONS(315), 1,
      sym__indent,
    STATE(104), 1,
      sym_children,
    ACTIONS(82), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [1700] = 3,
    ACTIONS(315), 1,
      sym__indent,
    STATE(103), 1,
      sym_children,
    ACTIONS(76), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [1714] = 5,
    ACTIONS(317), 1,
      anon_sym_,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_EQ,
    STATE(88), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(321), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1731] = 3,
    ACTIONS(156), 1,
      sym__dedent,
    STATE(86), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(325), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1744] = 5,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(328), 1,
      anon_sym_,
    ACTIONS(332), 1,
      anon_sym_EQ,
    STATE(88), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(330), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1761] = 4,
    ACTIONS(334), 1,
      anon_sym_,
    ACTIONS(336), 1,
      anon_sym_DOT,
    STATE(88), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(339), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1776] = 3,
    ACTIONS(341), 1,
      sym__dedent,
    STATE(86), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(298), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1789] = 5,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(343), 1,
      anon_sym_,
    ACTIONS(347), 1,
      anon_sym_EQ,
    STATE(87), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(345), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1806] = 5,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(349), 1,
      anon_sym_,
    ACTIONS(353), 1,
      anon_sym_EQ,
    STATE(85), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(351), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1823] = 5,
    ACTIONS(355), 1,
      sym_content,
    ACTIONS(357), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(359), 1,
      sym__dedent,
    STATE(115), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(143), 1,
      aux_sym__content_or_javascript,
  [1839] = 2,
    ACTIONS(361), 1,
      anon_sym_,
    ACTIONS(363), 4,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1849] = 2,
    ACTIONS(365), 1,
      anon_sym_,
    ACTIONS(367), 4,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1859] = 2,
    ACTIONS(369), 1,
      anon_sym_,
    ACTIONS(371), 4,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1869] = 5,
    ACTIONS(355), 1,
      sym_content,
    ACTIONS(357), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(373), 1,
      sym__dedent,
    STATE(115), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(143), 1,
      aux_sym__content_or_javascript,
  [1885] = 5,
    ACTIONS(278), 1,
      anon_sym_DOT,
    ACTIONS(375), 1,
      anon_sym_COLON,
    ACTIONS(377), 1,
      anon_sym_,
    ACTIONS(379), 1,
      sym__newline,
    STATE(109), 1,
      sym__content_after_dot,
  [1901] = 5,
    ACTIONS(278), 1,
      anon_sym_DOT,
    ACTIONS(290), 1,
      anon_sym_COLON,
    ACTIONS(292), 1,
      anon_sym_,
    ACTIONS(294), 1,
      sym__newline,
    STATE(111), 1,
      sym__content_after_dot,
  [1917] = 5,
    ACTIONS(355), 1,
      sym_content,
    ACTIONS(357), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(381), 1,
      sym__dedent,
    STATE(115), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(143), 1,
      aux_sym__content_or_javascript,
  [1933] = 5,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(383), 1,
      anon_sym_COLON,
    ACTIONS(385), 1,
      anon_sym_,
    ACTIONS(387), 1,
      sym__newline,
    STATE(19), 1,
      sym__content_after_dot,
  [1949] = 5,
    ACTIONS(248), 1,
      anon_sym_DOT,
    ACTIONS(389), 1,
      anon_sym_COLON,
    ACTIONS(391), 1,
      anon_sym_,
    ACTIONS(393), 1,
      sym__newline,
    STATE(58), 1,
      sym__content_after_dot,
  [1965] = 5,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(266), 1,
      anon_sym_COLON,
    ACTIONS(268), 1,
      anon_sym_,
    ACTIONS(272), 1,
      sym__newline,
    STATE(21), 1,
      sym__content_after_dot,
  [1981] = 1,
    ACTIONS(148), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [1989] = 1,
    ACTIONS(76), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [1997] = 1,
    ACTIONS(172), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2005] = 1,
    ACTIONS(82), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2013] = 1,
    ACTIONS(82), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2021] = 1,
    ACTIONS(184), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2029] = 1,
    ACTIONS(90), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2037] = 1,
    ACTIONS(90), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2045] = 1,
    ACTIONS(94), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2053] = 1,
    ACTIONS(94), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2061] = 2,
    STATE(89), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(298), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2071] = 1,
    ACTIONS(86), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2079] = 5,
    ACTIONS(395), 1,
      sym_content,
    ACTIONS(398), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(401), 1,
      sym__dedent,
    STATE(115), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(143), 1,
      aux_sym__content_or_javascript,
  [2095] = 2,
    STATE(35), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(17), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2105] = 1,
    ACTIONS(168), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2113] = 1,
    ACTIONS(216), 5,
      anon_sym_RPAREN,
      aux_sym__attribute_token1,
      aux_sym_js_attribute_name_token1,
      aux_sym_js_attribute_name_token2,
      aux_sym_js_attribute_name_token3,
  [2121] = 2,
    STATE(26), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(17), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2131] = 1,
    ACTIONS(180), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2139] = 5,
    ACTIONS(248), 1,
      anon_sym_DOT,
    ACTIONS(284), 1,
      anon_sym_COLON,
    ACTIONS(286), 1,
      anon_sym_,
    ACTIONS(288), 1,
      sym__newline,
    STATE(54), 1,
      sym__content_after_dot,
  [2155] = 2,
    STATE(19), 1,
      sym_tag,
    ACTIONS(29), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2164] = 4,
    ACTIONS(357), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(403), 1,
      sym_content,
    ACTIONS(405), 1,
      sym__newline,
    STATE(129), 1,
      aux_sym__content_or_javascript,
  [2177] = 4,
    ACTIONS(355), 1,
      sym_content,
    ACTIONS(357), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(96), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(143), 1,
      aux_sym__content_or_javascript,
  [2190] = 4,
    ACTIONS(355), 1,
      sym_content,
    ACTIONS(357), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(99), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(143), 1,
      aux_sym__content_or_javascript,
  [2203] = 4,
    ACTIONS(357), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(407), 1,
      sym_content,
    ACTIONS(409), 1,
      sym__newline,
    STATE(153), 1,
      aux_sym__content_or_javascript,
  [2216] = 2,
    STATE(106), 1,
      sym_tag,
    ACTIONS(298), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2225] = 4,
    ACTIONS(357), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(407), 1,
      sym_content,
    ACTIONS(411), 1,
      sym__newline,
    STATE(153), 1,
      aux_sym__content_or_javascript,
  [2238] = 4,
    ACTIONS(357), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(407), 1,
      sym_content,
    ACTIONS(413), 1,
      sym__newline,
    STATE(153), 1,
      aux_sym__content_or_javascript,
  [2251] = 2,
    STATE(109), 1,
      sym_tag,
    ACTIONS(298), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2260] = 4,
    ACTIONS(357), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(379), 1,
      sym__newline,
    ACTIONS(407), 1,
      sym_content,
    STATE(153), 1,
      aux_sym__content_or_javascript,
  [2273] = 2,
    STATE(111), 1,
      sym_tag,
    ACTIONS(298), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2282] = 2,
    STATE(58), 1,
      sym_tag,
    ACTIONS(17), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2291] = 4,
    ACTIONS(357), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(407), 1,
      sym_content,
    ACTIONS(415), 1,
      sym__newline,
    STATE(153), 1,
      aux_sym__content_or_javascript,
  [2304] = 2,
    STATE(48), 1,
      sym_tag,
    ACTIONS(17), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2313] = 4,
    ACTIONS(417), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(419), 1,
      sym__newline,
    STATE(43), 1,
      sym__single_line_buf_code,
    STATE(195), 1,
      sym__un_delimited_javascript,
  [2326] = 4,
    ACTIONS(357), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(407), 1,
      sym_content,
    ACTIONS(421), 1,
      sym__newline,
    STATE(153), 1,
      aux_sym__content_or_javascript,
  [2339] = 4,
    ACTIONS(357), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(407), 1,
      sym_content,
    ACTIONS(423), 1,
      sym__newline,
    STATE(153), 1,
      aux_sym__content_or_javascript,
  [2352] = 2,
    STATE(39), 1,
      sym_tag,
    ACTIONS(29), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2361] = 4,
    ACTIONS(425), 1,
      aux_sym__attribute_token2,
    ACTIONS(427), 1,
      anon_sym_SQUOTE,
    ACTIONS(429), 1,
      anon_sym_DQUOTE,
    STATE(175), 1,
      sym_quoted_attribute_value,
  [2374] = 4,
    ACTIONS(357), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(407), 1,
      sym_content,
    ACTIONS(431), 1,
      sym__newline,
    STATE(153), 1,
      aux_sym__content_or_javascript,
  [2387] = 4,
    ACTIONS(357), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(433), 1,
      sym_content,
    ACTIONS(435), 1,
      sym__newline,
    STATE(137), 1,
      aux_sym__content_or_javascript,
  [2400] = 4,
    ACTIONS(357), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(407), 1,
      sym_content,
    ACTIONS(437), 1,
      sym__newline,
    STATE(153), 1,
      aux_sym__content_or_javascript,
  [2413] = 4,
    ACTIONS(357), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(387), 1,
      sym__newline,
    ACTIONS(407), 1,
      sym_content,
    STATE(153), 1,
      aux_sym__content_or_javascript,
  [2426] = 2,
    STATE(54), 1,
      sym_tag,
    ACTIONS(17), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2435] = 2,
    STATE(21), 1,
      sym_tag,
    ACTIONS(29), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2444] = 4,
    ACTIONS(427), 1,
      anon_sym_SQUOTE,
    ACTIONS(429), 1,
      anon_sym_DQUOTE,
    ACTIONS(439), 1,
      aux_sym__attribute_token2,
    STATE(179), 1,
      sym_quoted_attribute_value,
  [2457] = 2,
    ACTIONS(441), 2,
      anon_sym_COLON,
      anon_sym_DOT,
    ACTIONS(443), 2,
      sym__newline,
      anon_sym_,
  [2466] = 2,
    ACTIONS(445), 2,
      anon_sym_COLON,
      anon_sym_DOT,
    ACTIONS(447), 2,
      sym__newline,
      anon_sym_,
  [2475] = 2,
    ACTIONS(449), 2,
      anon_sym_COLON,
      anon_sym_DOT,
    ACTIONS(451), 2,
      sym__newline,
      anon_sym_,
  [2484] = 4,
    ACTIONS(357), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(407), 1,
      sym_content,
    ACTIONS(453), 1,
      sym__newline,
    STATE(153), 1,
      aux_sym__content_or_javascript,
  [2497] = 4,
    ACTIONS(357), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(393), 1,
      sym__newline,
    ACTIONS(407), 1,
      sym_content,
    STATE(153), 1,
      aux_sym__content_or_javascript,
  [2510] = 4,
    ACTIONS(455), 1,
      sym_content,
    ACTIONS(458), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(461), 1,
      sym__newline,
    STATE(153), 1,
      aux_sym__content_or_javascript,
  [2523] = 4,
    ACTIONS(355), 1,
      sym_content,
    ACTIONS(357), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(92), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(143), 1,
      aux_sym__content_or_javascript,
  [2536] = 3,
    ACTIONS(357), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(463), 1,
      sym_content,
    STATE(152), 1,
      aux_sym__content_or_javascript,
  [2546] = 3,
    ACTIONS(465), 1,
      anon_sym_,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    ACTIONS(469), 1,
      anon_sym_RPAREN,
  [2556] = 3,
    ACTIONS(357), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(471), 1,
      sym_content,
    STATE(126), 1,
      aux_sym__content_or_javascript,
  [2566] = 3,
    ACTIONS(357), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(473), 1,
      sym_content,
    STATE(128), 1,
      aux_sym__content_or_javascript,
  [2576] = 3,
    ACTIONS(357), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(475), 1,
      sym_content,
    STATE(131), 1,
      aux_sym__content_or_javascript,
  [2586] = 2,
    ACTIONS(477), 1,
      anon_sym_,
    ACTIONS(479), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2594] = 2,
    ACTIONS(481), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(401), 2,
      sym__dedent,
      sym_content,
  [2602] = 3,
    ACTIONS(357), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(483), 1,
      sym_content,
    STATE(134), 1,
      aux_sym__content_or_javascript,
  [2612] = 3,
    ACTIONS(357), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(485), 1,
      sym_content,
    STATE(141), 1,
      aux_sym__content_or_javascript,
  [2622] = 3,
    ACTIONS(465), 1,
      anon_sym_,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
  [2632] = 2,
    ACTIONS(489), 1,
      anon_sym_,
    ACTIONS(491), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2640] = 3,
    ACTIONS(357), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(493), 1,
      sym_content,
    STATE(144), 1,
      aux_sym__content_or_javascript,
  [2650] = 2,
    ACTIONS(497), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(495), 2,
      sym__newline,
      sym_content,
  [2658] = 1,
    ACTIONS(499), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [2664] = 3,
    ACTIONS(501), 1,
      sym__un_delimited_javascript_line,
    STATE(17), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(45), 1,
      sym__multi_line_buf_code,
  [2674] = 2,
    ACTIONS(503), 1,
      anon_sym_,
    ACTIONS(505), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2682] = 2,
    ACTIONS(507), 1,
      anon_sym_,
    ACTIONS(509), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2690] = 1,
    ACTIONS(511), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2696] = 3,
    ACTIONS(357), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(513), 1,
      sym_content,
    STATE(151), 1,
      aux_sym__content_or_javascript,
  [2706] = 2,
    ACTIONS(515), 1,
      anon_sym_,
    ACTIONS(517), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2714] = 2,
    ACTIONS(519), 1,
      anon_sym_,
    ACTIONS(521), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2722] = 2,
    ACTIONS(523), 1,
      anon_sym_,
    ACTIONS(525), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2730] = 3,
    ACTIONS(357), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(527), 1,
      sym_content,
    STATE(138), 1,
      aux_sym__content_or_javascript,
  [2740] = 3,
    ACTIONS(529), 1,
      anon_sym_SQUOTE,
    ACTIONS(531), 1,
      anon_sym_DQUOTE,
    STATE(170), 1,
      sym_quoted_javascript,
  [2750] = 2,
    ACTIONS(533), 1,
      anon_sym_,
    ACTIONS(535), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2758] = 2,
    ACTIONS(537), 1,
      anon_sym_,
    ACTIONS(539), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2766] = 2,
    ACTIONS(541), 1,
      anon_sym_,
    ACTIONS(543), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2774] = 3,
    ACTIONS(529), 1,
      anon_sym_SQUOTE,
    ACTIONS(531), 1,
      anon_sym_DQUOTE,
    STATE(171), 1,
      sym_quoted_javascript,
  [2784] = 2,
    ACTIONS(465), 1,
      anon_sym_,
    ACTIONS(467), 1,
      anon_sym_COMMA,
  [2791] = 2,
    ACTIONS(545), 1,
      anon_sym_SQUOTE,
    ACTIONS(547), 1,
      aux_sym_quoted_javascript_token1,
  [2798] = 2,
    ACTIONS(549), 1,
      sym__comment_content,
    ACTIONS(551), 1,
      sym__newline,
  [2805] = 2,
    ACTIONS(553), 1,
      sym__un_delimited_javascript_line,
    STATE(119), 1,
      sym__un_delimited_javascript,
  [2812] = 2,
    ACTIONS(555), 1,
      anon_sym_DQUOTE,
    ACTIONS(557), 1,
      aux_sym_quoted_javascript_token2,
  [2819] = 2,
    ACTIONS(555), 1,
      anon_sym_SQUOTE,
    ACTIONS(559), 1,
      aux_sym_quoted_javascript_token1,
  [2826] = 2,
    ACTIONS(545), 1,
      anon_sym_DQUOTE,
    ACTIONS(561), 1,
      aux_sym_quoted_javascript_token2,
  [2833] = 1,
    ACTIONS(563), 1,
      aux_sym__attribute_token3,
  [2837] = 1,
    ACTIONS(565), 1,
      sym__indent,
  [2841] = 1,
    ACTIONS(567), 1,
      aux_sym__attribute_token1,
  [2845] = 1,
    ACTIONS(569), 1,
      sym__newline,
  [2849] = 1,
    ACTIONS(571), 1,
      sym__indent,
  [2853] = 1,
    ACTIONS(573), 1,
      sym__newline,
  [2857] = 1,
    ACTIONS(575), 1,
      anon_sym_DQUOTE,
  [2861] = 1,
    ACTIONS(577), 1,
      sym__newline,
  [2865] = 1,
    ACTIONS(511), 1,
      sym__newline,
  [2869] = 1,
    ACTIONS(579), 1,
      sym__newline,
  [2873] = 1,
    ACTIONS(581), 1,
      ts_builtin_sym_end,
  [2877] = 1,
    ACTIONS(583), 1,
      aux_sym_unbuffered_code_token1,
  [2881] = 1,
    ACTIONS(585), 1,
      anon_sym_DQUOTE,
  [2885] = 1,
    ACTIONS(587), 1,
      anon_sym_RBRACE_RBRACE,
  [2889] = 1,
    ACTIONS(589), 1,
      sym__delimited_javascript,
  [2893] = 1,
    ACTIONS(575), 1,
      anon_sym_SQUOTE,
  [2897] = 1,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
  [2901] = 1,
    ACTIONS(591), 1,
      aux_sym__attribute_token3,
  [2905] = 1,
    ACTIONS(593), 1,
      sym__indent,
  [2909] = 1,
    ACTIONS(595), 1,
      sym__indent,
  [2913] = 1,
    ACTIONS(597), 1,
      sym__newline,
  [2917] = 1,
    ACTIONS(599), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 102,
  [SMALL_STATE(6)] = 132,
  [SMALL_STATE(7)] = 170,
  [SMALL_STATE(8)] = 194,
  [SMALL_STATE(9)] = 218,
  [SMALL_STATE(10)] = 242,
  [SMALL_STATE(11)] = 266,
  [SMALL_STATE(12)] = 290,
  [SMALL_STATE(13)] = 313,
  [SMALL_STATE(14)] = 338,
  [SMALL_STATE(15)] = 363,
  [SMALL_STATE(16)] = 388,
  [SMALL_STATE(17)] = 411,
  [SMALL_STATE(18)] = 434,
  [SMALL_STATE(19)] = 459,
  [SMALL_STATE(20)] = 477,
  [SMALL_STATE(21)] = 495,
  [SMALL_STATE(22)] = 513,
  [SMALL_STATE(23)] = 531,
  [SMALL_STATE(24)] = 549,
  [SMALL_STATE(25)] = 569,
  [SMALL_STATE(26)] = 587,
  [SMALL_STATE(27)] = 607,
  [SMALL_STATE(28)] = 631,
  [SMALL_STATE(29)] = 649,
  [SMALL_STATE(30)] = 667,
  [SMALL_STATE(31)] = 689,
  [SMALL_STATE(32)] = 707,
  [SMALL_STATE(33)] = 725,
  [SMALL_STATE(34)] = 747,
  [SMALL_STATE(35)] = 769,
  [SMALL_STATE(36)] = 789,
  [SMALL_STATE(37)] = 811,
  [SMALL_STATE(38)] = 829,
  [SMALL_STATE(39)] = 847,
  [SMALL_STATE(40)] = 865,
  [SMALL_STATE(41)] = 887,
  [SMALL_STATE(42)] = 905,
  [SMALL_STATE(43)] = 923,
  [SMALL_STATE(44)] = 942,
  [SMALL_STATE(45)] = 961,
  [SMALL_STATE(46)] = 980,
  [SMALL_STATE(47)] = 999,
  [SMALL_STATE(48)] = 1016,
  [SMALL_STATE(49)] = 1032,
  [SMALL_STATE(50)] = 1048,
  [SMALL_STATE(51)] = 1064,
  [SMALL_STATE(52)] = 1092,
  [SMALL_STATE(53)] = 1108,
  [SMALL_STATE(54)] = 1124,
  [SMALL_STATE(55)] = 1140,
  [SMALL_STATE(56)] = 1168,
  [SMALL_STATE(57)] = 1184,
  [SMALL_STATE(58)] = 1212,
  [SMALL_STATE(59)] = 1228,
  [SMALL_STATE(60)] = 1244,
  [SMALL_STATE(61)] = 1260,
  [SMALL_STATE(62)] = 1276,
  [SMALL_STATE(63)] = 1292,
  [SMALL_STATE(64)] = 1308,
  [SMALL_STATE(65)] = 1324,
  [SMALL_STATE(66)] = 1340,
  [SMALL_STATE(67)] = 1356,
  [SMALL_STATE(68)] = 1372,
  [SMALL_STATE(69)] = 1401,
  [SMALL_STATE(70)] = 1430,
  [SMALL_STATE(71)] = 1459,
  [SMALL_STATE(72)] = 1488,
  [SMALL_STATE(73)] = 1517,
  [SMALL_STATE(74)] = 1546,
  [SMALL_STATE(75)] = 1564,
  [SMALL_STATE(76)] = 1582,
  [SMALL_STATE(77)] = 1597,
  [SMALL_STATE(78)] = 1612,
  [SMALL_STATE(79)] = 1629,
  [SMALL_STATE(80)] = 1644,
  [SMALL_STATE(81)] = 1658,
  [SMALL_STATE(82)] = 1672,
  [SMALL_STATE(83)] = 1686,
  [SMALL_STATE(84)] = 1700,
  [SMALL_STATE(85)] = 1714,
  [SMALL_STATE(86)] = 1731,
  [SMALL_STATE(87)] = 1744,
  [SMALL_STATE(88)] = 1761,
  [SMALL_STATE(89)] = 1776,
  [SMALL_STATE(90)] = 1789,
  [SMALL_STATE(91)] = 1806,
  [SMALL_STATE(92)] = 1823,
  [SMALL_STATE(93)] = 1839,
  [SMALL_STATE(94)] = 1849,
  [SMALL_STATE(95)] = 1859,
  [SMALL_STATE(96)] = 1869,
  [SMALL_STATE(97)] = 1885,
  [SMALL_STATE(98)] = 1901,
  [SMALL_STATE(99)] = 1917,
  [SMALL_STATE(100)] = 1933,
  [SMALL_STATE(101)] = 1949,
  [SMALL_STATE(102)] = 1965,
  [SMALL_STATE(103)] = 1981,
  [SMALL_STATE(104)] = 1989,
  [SMALL_STATE(105)] = 1997,
  [SMALL_STATE(106)] = 2005,
  [SMALL_STATE(107)] = 2013,
  [SMALL_STATE(108)] = 2021,
  [SMALL_STATE(109)] = 2029,
  [SMALL_STATE(110)] = 2037,
  [SMALL_STATE(111)] = 2045,
  [SMALL_STATE(112)] = 2053,
  [SMALL_STATE(113)] = 2061,
  [SMALL_STATE(114)] = 2071,
  [SMALL_STATE(115)] = 2079,
  [SMALL_STATE(116)] = 2095,
  [SMALL_STATE(117)] = 2105,
  [SMALL_STATE(118)] = 2113,
  [SMALL_STATE(119)] = 2121,
  [SMALL_STATE(120)] = 2131,
  [SMALL_STATE(121)] = 2139,
  [SMALL_STATE(122)] = 2155,
  [SMALL_STATE(123)] = 2164,
  [SMALL_STATE(124)] = 2177,
  [SMALL_STATE(125)] = 2190,
  [SMALL_STATE(126)] = 2203,
  [SMALL_STATE(127)] = 2216,
  [SMALL_STATE(128)] = 2225,
  [SMALL_STATE(129)] = 2238,
  [SMALL_STATE(130)] = 2251,
  [SMALL_STATE(131)] = 2260,
  [SMALL_STATE(132)] = 2273,
  [SMALL_STATE(133)] = 2282,
  [SMALL_STATE(134)] = 2291,
  [SMALL_STATE(135)] = 2304,
  [SMALL_STATE(136)] = 2313,
  [SMALL_STATE(137)] = 2326,
  [SMALL_STATE(138)] = 2339,
  [SMALL_STATE(139)] = 2352,
  [SMALL_STATE(140)] = 2361,
  [SMALL_STATE(141)] = 2374,
  [SMALL_STATE(142)] = 2387,
  [SMALL_STATE(143)] = 2400,
  [SMALL_STATE(144)] = 2413,
  [SMALL_STATE(145)] = 2426,
  [SMALL_STATE(146)] = 2435,
  [SMALL_STATE(147)] = 2444,
  [SMALL_STATE(148)] = 2457,
  [SMALL_STATE(149)] = 2466,
  [SMALL_STATE(150)] = 2475,
  [SMALL_STATE(151)] = 2484,
  [SMALL_STATE(152)] = 2497,
  [SMALL_STATE(153)] = 2510,
  [SMALL_STATE(154)] = 2523,
  [SMALL_STATE(155)] = 2536,
  [SMALL_STATE(156)] = 2546,
  [SMALL_STATE(157)] = 2556,
  [SMALL_STATE(158)] = 2566,
  [SMALL_STATE(159)] = 2576,
  [SMALL_STATE(160)] = 2586,
  [SMALL_STATE(161)] = 2594,
  [SMALL_STATE(162)] = 2602,
  [SMALL_STATE(163)] = 2612,
  [SMALL_STATE(164)] = 2622,
  [SMALL_STATE(165)] = 2632,
  [SMALL_STATE(166)] = 2640,
  [SMALL_STATE(167)] = 2650,
  [SMALL_STATE(168)] = 2658,
  [SMALL_STATE(169)] = 2664,
  [SMALL_STATE(170)] = 2674,
  [SMALL_STATE(171)] = 2682,
  [SMALL_STATE(172)] = 2690,
  [SMALL_STATE(173)] = 2696,
  [SMALL_STATE(174)] = 2706,
  [SMALL_STATE(175)] = 2714,
  [SMALL_STATE(176)] = 2722,
  [SMALL_STATE(177)] = 2730,
  [SMALL_STATE(178)] = 2740,
  [SMALL_STATE(179)] = 2750,
  [SMALL_STATE(180)] = 2758,
  [SMALL_STATE(181)] = 2766,
  [SMALL_STATE(182)] = 2774,
  [SMALL_STATE(183)] = 2784,
  [SMALL_STATE(184)] = 2791,
  [SMALL_STATE(185)] = 2798,
  [SMALL_STATE(186)] = 2805,
  [SMALL_STATE(187)] = 2812,
  [SMALL_STATE(188)] = 2819,
  [SMALL_STATE(189)] = 2826,
  [SMALL_STATE(190)] = 2833,
  [SMALL_STATE(191)] = 2837,
  [SMALL_STATE(192)] = 2841,
  [SMALL_STATE(193)] = 2845,
  [SMALL_STATE(194)] = 2849,
  [SMALL_STATE(195)] = 2853,
  [SMALL_STATE(196)] = 2857,
  [SMALL_STATE(197)] = 2861,
  [SMALL_STATE(198)] = 2865,
  [SMALL_STATE(199)] = 2869,
  [SMALL_STATE(200)] = 2873,
  [SMALL_STATE(201)] = 2877,
  [SMALL_STATE(202)] = 2881,
  [SMALL_STATE(203)] = 2885,
  [SMALL_STATE(204)] = 2889,
  [SMALL_STATE(205)] = 2893,
  [SMALL_STATE(206)] = 2897,
  [SMALL_STATE(207)] = 2901,
  [SMALL_STATE(208)] = 2905,
  [SMALL_STATE(209)] = 2909,
  [SMALL_STATE(210)] = 2913,
  [SMALL_STATE(211)] = 2917,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(123),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(69),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(69),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(168),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(186),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(186),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(116),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(185),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(201),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(20),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 5),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 5),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(199),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 7),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(68),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(68),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_content, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_content, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 5, .production_id = 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 5, .production_id = 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_content, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_content, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 3),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 5),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 5),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 5),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 5),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 6),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 6),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(94),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(93),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 4),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 4),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 6),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 6),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 2),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 2),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(142),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(71),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(78),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 2),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 2),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(71),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 2),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 2),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2), SHIFT_REPEAT(192),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 1),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 1),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 1),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 1),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_attribute_name, 1),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_attribute_name, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_name, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 1),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(143),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(204),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(153),
  [458] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(204),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 2),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 2),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 3),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 4),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 4),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 3),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 3),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__un_delimited_javascript, 1),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 3),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 3),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 3),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 3),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 4),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 4),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 4),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 4),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 5),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 5),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [581] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
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
