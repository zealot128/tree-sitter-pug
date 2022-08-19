#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 249
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 76
#define ALIAS_COUNT 2
#define TOKEN_COUNT 43
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
  anon_sym_BANG_EQ = 10,
  anon_sym_EQ = 11,
  anon_sym_COLON = 12,
  anon_sym_ = 13,
  anon_sym_DOT = 14,
  anon_sym_LPAREN = 15,
  anon_sym_COMMA = 16,
  anon_sym_RPAREN = 17,
  aux_sym__attribute_token1 = 18,
  aux_sym__attribute_token2 = 19,
  aux_sym__attribute_token3 = 20,
  anon_sym_SLASH_SLASH = 21,
  sym_tag_name = 22,
  sym_class = 23,
  sym_id = 24,
  aux_sym_js_attribute_name_token1 = 25,
  aux_sym_js_attribute_name_token2 = 26,
  aux_sym_js_attribute_name_token3 = 27,
  anon_sym_SQUOTE = 28,
  aux_sym_quoted_javascript_token1 = 29,
  anon_sym_DQUOTE = 30,
  aux_sym_quoted_javascript_token2 = 31,
  sym_content = 32,
  sym__comment_content = 33,
  anon_sym_LBRACE_LBRACE = 34,
  anon_sym_RBRACE_RBRACE = 35,
  sym__delimited_javascript = 36,
  sym__un_delimited_javascript_line = 37,
  anon_sym_DASH = 38,
  aux_sym_unbuffered_code_token1 = 39,
  sym__newline = 40,
  sym__indent = 41,
  sym__dedent = 42,
  sym_source_file = 43,
  sym_doctype = 44,
  sym_pipe_content = 45,
  sym_conditional = 46,
  sym_unescaped_buffered_code = 47,
  sym_buffered_code = 48,
  sym_tag = 49,
  sym__content_after_dot = 50,
  sym_attributes = 51,
  sym_attribute = 52,
  sym__attribute = 53,
  sym__js_attribute = 54,
  sym_children = 55,
  sym__children_choice = 56,
  sym_comment = 57,
  sym_js_attribute_name = 58,
  sym_attribute_name = 59,
  sym_quoted_javascript = 60,
  sym_quoted_attribute_value = 61,
  aux_sym__content_or_javascript = 62,
  sym__un_delimited_javascript = 63,
  aux_sym__un_delimited_javascript_multiline = 64,
  sym__single_line_buf_code = 65,
  sym__multi_line_buf_code = 66,
  sym_unbuffered_code = 67,
  aux_sym_source_file_repeat1 = 68,
  aux_sym_conditional_repeat1 = 69,
  aux_sym_tag_repeat1 = 70,
  aux_sym__content_after_dot_repeat1 = 71,
  aux_sym_attributes_repeat1 = 72,
  aux_sym__attribute_repeat1 = 73,
  aux_sym_children_repeat1 = 74,
  aux_sym_comment_repeat1 = 75,
  alias_sym_attribute_modifier = 76,
  alias_sym_attribute_value = 77,
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
  [anon_sym_BANG_EQ] = "!=",
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
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
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
  [anon_sym_BANG_EQ] = {
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
      if (eof) ADVANCE(55);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(163);
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '\'') ADVANCE(160);
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == ')') ADVANCE(91);
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == ',') ADVANCE(90);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead == 'h') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == 'u') ADVANCE(31);
      if (lookahead == 'x') ADVANCE(29);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '|') ADVANCE(63);
      if (lookahead == '}') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(188);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(181);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(86);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == ')') ADVANCE(91);
      if (lookahead == ',') ADVANCE(90);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(86);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == ')') ADVANCE(91);
      if (lookahead == ',') ADVANCE(90);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == ' ') SKIP(6)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(169);
      if (lookahead != 0) ADVANCE(177);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '|') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(163);
      if (lookahead == '\'') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0) ADVANCE(93);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == ')') ADVANCE(91);
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == '[') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 12:
      if (lookahead == ')') ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(97);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 15:
      if (lookahead == ']') ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(64);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(68);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 29:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 30:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 33:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 42:
      if (lookahead == 'y') ADVANCE(33);
      END_STATE();
    case 43:
      if (lookahead == '{') ADVANCE(178);
      END_STATE();
    case 44:
      if (lookahead == '}') ADVANCE(179);
      END_STATE();
    case 45:
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 46:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(96);
      END_STATE();
    case 47:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(151);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 48:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 49:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 50:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 51:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 52:
      if (eof) ADVANCE(55);
      if (lookahead == '\n') SKIP(52)
      if (lookahead == '!') ADVANCE(184);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '-') ADVANCE(194);
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == 'd') ADVANCE(126);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == 'i') ADVANCE(114);
      if (lookahead == 'u') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 53:
      if (eof) ADVANCE(55);
      if (lookahead == ' ') SKIP(53)
      if (lookahead == '!') ADVANCE(171);
      if (lookahead == '#') ADVANCE(176);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '.') ADVANCE(175);
      if (lookahead == '/') ADVANCE(170);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'u') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0) ADVANCE(177);
      END_STATE();
    case 54:
      if (eof) ADVANCE(55);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(124);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'u') ADVANCE(121);
      if (lookahead == '|') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_doctype);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_strict);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(173);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(151);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__attribute_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__attribute_token2);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__attribute_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(93);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__attribute_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym__attribute_token3);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(139);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(140);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(141);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(65);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(67);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(132);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(108);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(137);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(111);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(100);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(101);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(102);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(106);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(110);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(72);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(73);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(74);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(131);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(133);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(109);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(134);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(144);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(128);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(129);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(151);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(153);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_js_attribute_name_token1);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_js_attribute_name_token2);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_js_attribute_name_token3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == ' ') ADVANCE(168);
      if (lookahead == '!') ADVANCE(171);
      if (lookahead == '#') ADVANCE(176);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '.') ADVANCE(175);
      if (lookahead == '/') ADVANCE(170);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'u') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0) ADVANCE(177);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == ' ') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(169);
      if (lookahead != 0) ADVANCE(177);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__delimited_javascript);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__delimited_javascript);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(184);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '-') ADVANCE(194);
      if (lookahead == '.') ADVANCE(189);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == 'd') ADVANCE(126);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == 'i') ADVANCE(114);
      if (lookahead == 'u') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'f') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'i') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(153);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_unbuffered_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(195);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 54},
  [2] = {.lex_state = 54},
  [3] = {.lex_state = 54},
  [4] = {.lex_state = 54, .external_lex_state = 2},
  [5] = {.lex_state = 54, .external_lex_state = 2},
  [6] = {.lex_state = 54, .external_lex_state = 2},
  [7] = {.lex_state = 54, .external_lex_state = 3},
  [8] = {.lex_state = 54, .external_lex_state = 3},
  [9] = {.lex_state = 54, .external_lex_state = 3},
  [10] = {.lex_state = 54, .external_lex_state = 3},
  [11] = {.lex_state = 54, .external_lex_state = 3},
  [12] = {.lex_state = 54, .external_lex_state = 3},
  [13] = {.lex_state = 53, .external_lex_state = 2},
  [14] = {.lex_state = 53, .external_lex_state = 2},
  [15] = {.lex_state = 52, .external_lex_state = 2},
  [16] = {.lex_state = 54, .external_lex_state = 3},
  [17] = {.lex_state = 53, .external_lex_state = 2},
  [18] = {.lex_state = 53, .external_lex_state = 2},
  [19] = {.lex_state = 53, .external_lex_state = 2},
  [20] = {.lex_state = 52, .external_lex_state = 2},
  [21] = {.lex_state = 54, .external_lex_state = 2},
  [22] = {.lex_state = 54},
  [23] = {.lex_state = 54, .external_lex_state = 4},
  [24] = {.lex_state = 54, .external_lex_state = 2},
  [25] = {.lex_state = 54, .external_lex_state = 4},
  [26] = {.lex_state = 54, .external_lex_state = 2},
  [27] = {.lex_state = 52, .external_lex_state = 2},
  [28] = {.lex_state = 54, .external_lex_state = 4},
  [29] = {.lex_state = 54, .external_lex_state = 4},
  [30] = {.lex_state = 54, .external_lex_state = 2},
  [31] = {.lex_state = 54, .external_lex_state = 2},
  [32] = {.lex_state = 54, .external_lex_state = 2},
  [33] = {.lex_state = 54},
  [34] = {.lex_state = 54, .external_lex_state = 2},
  [35] = {.lex_state = 54},
  [36] = {.lex_state = 54, .external_lex_state = 2},
  [37] = {.lex_state = 54, .external_lex_state = 2},
  [38] = {.lex_state = 54, .external_lex_state = 2},
  [39] = {.lex_state = 54, .external_lex_state = 2},
  [40] = {.lex_state = 54, .external_lex_state = 2},
  [41] = {.lex_state = 54, .external_lex_state = 2},
  [42] = {.lex_state = 54, .external_lex_state = 2},
  [43] = {.lex_state = 53, .external_lex_state = 2},
  [44] = {.lex_state = 54, .external_lex_state = 2},
  [45] = {.lex_state = 54, .external_lex_state = 4},
  [46] = {.lex_state = 54, .external_lex_state = 2},
  [47] = {.lex_state = 54, .external_lex_state = 4},
  [48] = {.lex_state = 54, .external_lex_state = 2},
  [49] = {.lex_state = 4, .external_lex_state = 5},
  [50] = {.lex_state = 4, .external_lex_state = 5},
  [51] = {.lex_state = 4, .external_lex_state = 5},
  [52] = {.lex_state = 4, .external_lex_state = 5},
  [53] = {.lex_state = 4, .external_lex_state = 5},
  [54] = {.lex_state = 54, .external_lex_state = 4},
  [55] = {.lex_state = 54, .external_lex_state = 4},
  [56] = {.lex_state = 54, .external_lex_state = 4},
  [57] = {.lex_state = 54, .external_lex_state = 2},
  [58] = {.lex_state = 4, .external_lex_state = 5},
  [59] = {.lex_state = 54, .external_lex_state = 2},
  [60] = {.lex_state = 54},
  [61] = {.lex_state = 54},
  [62] = {.lex_state = 54},
  [63] = {.lex_state = 54},
  [64] = {.lex_state = 54},
  [65] = {.lex_state = 54},
  [66] = {.lex_state = 54},
  [67] = {.lex_state = 54},
  [68] = {.lex_state = 54},
  [69] = {.lex_state = 54},
  [70] = {.lex_state = 54},
  [71] = {.lex_state = 54},
  [72] = {.lex_state = 54},
  [73] = {.lex_state = 54},
  [74] = {.lex_state = 54},
  [75] = {.lex_state = 54},
  [76] = {.lex_state = 54},
  [77] = {.lex_state = 54},
  [78] = {.lex_state = 54},
  [79] = {.lex_state = 54},
  [80] = {.lex_state = 54},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 7},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 11},
  [91] = {.lex_state = 11},
  [92] = {.lex_state = 11},
  [93] = {.lex_state = 4, .external_lex_state = 5},
  [94] = {.lex_state = 7, .external_lex_state = 2},
  [95] = {.lex_state = 5, .external_lex_state = 5},
  [96] = {.lex_state = 5, .external_lex_state = 5},
  [97] = {.lex_state = 7, .external_lex_state = 2},
  [98] = {.lex_state = 5, .external_lex_state = 5},
  [99] = {.lex_state = 5, .external_lex_state = 5},
  [100] = {.lex_state = 5, .external_lex_state = 5},
  [101] = {.lex_state = 5, .external_lex_state = 5},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 7, .external_lex_state = 3},
  [106] = {.lex_state = 7, .external_lex_state = 3},
  [107] = {.lex_state = 7, .external_lex_state = 3},
  [108] = {.lex_state = 7, .external_lex_state = 3},
  [109] = {.lex_state = 7, .external_lex_state = 3},
  [110] = {.lex_state = 7, .external_lex_state = 3},
  [111] = {.lex_state = 7, .external_lex_state = 2},
  [112] = {.lex_state = 5, .external_lex_state = 5},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 7, .external_lex_state = 2},
  [115] = {.lex_state = 7, .external_lex_state = 3},
  [116] = {.lex_state = 5, .external_lex_state = 5},
  [117] = {.lex_state = 7, .external_lex_state = 2},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 7, .external_lex_state = 2},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 5, .external_lex_state = 5},
  [124] = {.lex_state = 1, .external_lex_state = 2},
  [125] = {.lex_state = 7, .external_lex_state = 2},
  [126] = {.lex_state = 7, .external_lex_state = 2},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 7, .external_lex_state = 2},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 7, .external_lex_state = 2},
  [131] = {.lex_state = 1, .external_lex_state = 2},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 7, .external_lex_state = 2},
  [134] = {.lex_state = 7, .external_lex_state = 2},
  [135] = {.lex_state = 7, .external_lex_state = 2},
  [136] = {.lex_state = 7, .external_lex_state = 2},
  [137] = {.lex_state = 7, .external_lex_state = 2},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 7, .external_lex_state = 2},
  [142] = {.lex_state = 1, .external_lex_state = 2},
  [143] = {.lex_state = 7, .external_lex_state = 2},
  [144] = {.lex_state = 7, .external_lex_state = 2},
  [145] = {.lex_state = 7, .external_lex_state = 2},
  [146] = {.lex_state = 11},
  [147] = {.lex_state = 7, .external_lex_state = 2},
  [148] = {.lex_state = 5},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 7, .external_lex_state = 2},
  [151] = {.lex_state = 7, .external_lex_state = 2},
  [152] = {.lex_state = 1, .external_lex_state = 2},
  [153] = {.lex_state = 7, .external_lex_state = 2},
  [154] = {.lex_state = 1, .external_lex_state = 5},
  [155] = {.lex_state = 1, .external_lex_state = 5},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 1, .external_lex_state = 5},
  [160] = {.lex_state = 1, .external_lex_state = 5},
  [161] = {.lex_state = 1, .external_lex_state = 5},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 7},
  [164] = {.lex_state = 2, .external_lex_state = 5},
  [165] = {.lex_state = 1, .external_lex_state = 5},
  [166] = {.lex_state = 1, .external_lex_state = 5},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 1, .external_lex_state = 5},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 1, .external_lex_state = 5},
  [171] = {.lex_state = 7},
  [172] = {.lex_state = 1, .external_lex_state = 5},
  [173] = {.lex_state = 1, .external_lex_state = 5},
  [174] = {.lex_state = 7},
  [175] = {.lex_state = 8},
  [176] = {.lex_state = 1, .external_lex_state = 5},
  [177] = {.lex_state = 1, .external_lex_state = 5},
  [178] = {.lex_state = 7},
  [179] = {.lex_state = 1, .external_lex_state = 5},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 7},
  [182] = {.lex_state = 1, .external_lex_state = 5},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 2},
  [186] = {.lex_state = 4},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 2},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 4},
  [197] = {.lex_state = 4},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 4},
  [200] = {.lex_state = 1, .external_lex_state = 2},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 1, .external_lex_state = 5},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 4},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 2},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 4},
  [212] = {.lex_state = 7},
  [213] = {.lex_state = 4},
  [214] = {.lex_state = 4},
  [215] = {.lex_state = 4},
  [216] = {.lex_state = 2},
  [217] = {.lex_state = 4},
  [218] = {.lex_state = 4},
  [219] = {.lex_state = 10},
  [220] = {.lex_state = 9},
  [221] = {.lex_state = 9},
  [222] = {.lex_state = 2},
  [223] = {.lex_state = 10},
  [224] = {.lex_state = 6, .external_lex_state = 5},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 3},
  [227] = {.lex_state = 0, .external_lex_state = 5},
  [228] = {.lex_state = 46},
  [229] = {.lex_state = 46},
  [230] = {.lex_state = 0, .external_lex_state = 5},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0, .external_lex_state = 5},
  [233] = {.lex_state = 195},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0, .external_lex_state = 5},
  [236] = {.lex_state = 0, .external_lex_state = 5},
  [237] = {.lex_state = 0, .external_lex_state = 4},
  [238] = {.lex_state = 0, .external_lex_state = 5},
  [239] = {.lex_state = 11},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0, .external_lex_state = 5},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0, .external_lex_state = 4},
  [245] = {.lex_state = 0, .external_lex_state = 4},
  [246] = {.lex_state = 0, .external_lex_state = 4},
  [247] = {.lex_state = 0, .external_lex_state = 5},
  [248] = {.lex_state = 0, .external_lex_state = 5},
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
    [anon_sym_BANG_EQ] = ACTIONS(1),
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
    [sym_source_file] = STATE(234),
    [sym_doctype] = STATE(3),
    [sym_conditional] = STATE(3),
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
    [anon_sym_BANG_EQ] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(15),
    [anon_sym_SLASH_SLASH] = ACTIONS(17),
    [sym_tag_name] = ACTIONS(19),
    [sym_class] = ACTIONS(21),
    [sym_id] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_doctype,
    ACTIONS(33), 1,
      anon_sym_elseif,
    ACTIONS(36), 1,
      anon_sym_else,
    ACTIONS(39), 1,
      anon_sym_BANG_EQ,
    ACTIONS(42), 1,
      anon_sym_EQ,
    ACTIONS(45), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(48), 1,
      sym_tag_name,
    ACTIONS(54), 1,
      anon_sym_DASH,
    ACTIONS(30), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(51), 2,
      sym_class,
      sym_id,
    STATE(2), 8,
      sym_doctype,
      sym_conditional,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_tag,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_source_file_repeat1,
  [46] = 12,
    ACTIONS(5), 1,
      anon_sym_doctype,
    ACTIONS(9), 1,
      anon_sym_elseif,
    ACTIONS(11), 1,
      anon_sym_else,
    ACTIONS(13), 1,
      anon_sym_BANG_EQ,
    ACTIONS(15), 1,
      anon_sym_EQ,
    ACTIONS(17), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(19), 1,
      sym_tag_name,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(21), 2,
      sym_class,
      sym_id,
    STATE(2), 8,
      sym_doctype,
      sym_conditional,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_tag,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_source_file_repeat1,
  [92] = 6,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(66), 1,
      sym_tag_name,
    ACTIONS(69), 2,
      sym_class,
      sym_id,
    ACTIONS(61), 4,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
    STATE(4), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(59), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [124] = 7,
    ACTIONS(76), 1,
      anon_sym_PIPE,
    ACTIONS(78), 1,
      sym_tag_name,
    ACTIONS(82), 1,
      sym__dedent,
    ACTIONS(80), 2,
      sym_class,
      sym_id,
    ACTIONS(74), 4,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
    STATE(4), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(72), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [158] = 7,
    ACTIONS(76), 1,
      anon_sym_PIPE,
    ACTIONS(78), 1,
      sym_tag_name,
    ACTIONS(84), 1,
      sym__dedent,
    ACTIONS(80), 2,
      sym_class,
      sym_id,
    ACTIONS(74), 4,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
    STATE(4), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(72), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [192] = 4,
    ACTIONS(90), 1,
      sym__indent,
    STATE(36), 1,
      sym_children,
    ACTIONS(88), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(86), 10,
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
  [218] = 4,
    ACTIONS(90), 1,
      sym__indent,
    STATE(26), 1,
      sym_children,
    ACTIONS(94), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(92), 10,
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
  [244] = 4,
    ACTIONS(96), 1,
      sym__indent,
    STATE(36), 1,
      sym_children,
    ACTIONS(88), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(86), 10,
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
  [270] = 4,
    ACTIONS(90), 1,
      sym__indent,
    STATE(31), 1,
      sym_children,
    ACTIONS(100), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(98), 10,
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
  [296] = 4,
    ACTIONS(106), 1,
      sym__indent,
    STATE(44), 1,
      sym_children,
    ACTIONS(104), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(102), 10,
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
  [322] = 4,
    ACTIONS(112), 1,
      sym__indent,
    STATE(38), 1,
      sym_children,
    ACTIONS(110), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(108), 10,
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
  [348] = 5,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 1,
      sym__comment_content,
    ACTIONS(120), 1,
      sym__dedent,
    STATE(14), 1,
      aux_sym_comment_repeat1,
    ACTIONS(116), 12,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [375] = 4,
    ACTIONS(126), 1,
      sym__comment_content,
    STATE(14), 1,
      aux_sym_comment_repeat1,
    ACTIONS(122), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(124), 12,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [400] = 4,
    ACTIONS(133), 1,
      sym__un_delimited_javascript_line,
    STATE(20), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(129), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(131), 12,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [425] = 3,
    ACTIONS(139), 1,
      sym__indent,
    ACTIONS(137), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(135), 10,
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
  [448] = 5,
    ACTIONS(118), 1,
      sym__comment_content,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 1,
      sym__dedent,
    STATE(13), 1,
      aux_sym_comment_repeat1,
    ACTIONS(143), 12,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [475] = 5,
    ACTIONS(118), 1,
      sym__comment_content,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 1,
      sym__dedent,
    STATE(14), 1,
      aux_sym_comment_repeat1,
    ACTIONS(143), 12,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [502] = 5,
    ACTIONS(118), 1,
      sym__comment_content,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 1,
      sym__dedent,
    STATE(18), 1,
      aux_sym_comment_repeat1,
    ACTIONS(149), 12,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [529] = 4,
    ACTIONS(157), 1,
      sym__un_delimited_javascript_line,
    STATE(20), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(153), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(155), 12,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [554] = 2,
    ACTIONS(94), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(92), 10,
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
  [574] = 5,
    ACTIONS(164), 1,
      sym_tag_name,
    ACTIONS(167), 2,
      sym_class,
      sym_id,
    STATE(22), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(162), 4,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
    ACTIONS(160), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [600] = 4,
    ACTIONS(170), 1,
      sym__indent,
    STATE(60), 1,
      sym_children,
    ACTIONS(88), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(86), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [624] = 2,
    ACTIONS(174), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(172), 10,
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
  [644] = 4,
    ACTIONS(176), 1,
      sym__indent,
    STATE(64), 1,
      sym_children,
    ACTIONS(110), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(108), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [668] = 2,
    ACTIONS(180), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(178), 10,
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
  [688] = 2,
    ACTIONS(182), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(184), 13,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      sym__un_delimited_javascript_line,
      anon_sym_DASH,
  [708] = 4,
    ACTIONS(170), 1,
      sym__indent,
    STATE(80), 1,
      sym_children,
    ACTIONS(100), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(98), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [732] = 4,
    ACTIONS(170), 1,
      sym__indent,
    STATE(63), 1,
      sym_children,
    ACTIONS(94), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(92), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [756] = 2,
    ACTIONS(188), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(186), 10,
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
  [776] = 2,
    ACTIONS(94), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(92), 10,
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
  [796] = 2,
    ACTIONS(192), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(190), 10,
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
  [816] = 3,
    STATE(22), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(196), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
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
  [838] = 2,
    ACTIONS(100), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(98), 10,
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
  [858] = 3,
    STATE(22), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(200), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(198), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [880] = 2,
    ACTIONS(100), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(98), 10,
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
  [900] = 2,
    ACTIONS(110), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(108), 10,
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
  [920] = 2,
    ACTIONS(104), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(102), 10,
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
  [940] = 2,
    ACTIONS(104), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(102), 10,
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
  [960] = 2,
    ACTIONS(204), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(202), 10,
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
  [980] = 2,
    ACTIONS(88), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(86), 10,
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
  [1000] = 2,
    ACTIONS(208), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(206), 10,
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
  [1020] = 2,
    ACTIONS(122), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(124), 13,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      sym__comment_content,
      anon_sym_DASH,
  [1040] = 2,
    ACTIONS(88), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(86), 10,
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
  [1060] = 4,
    ACTIONS(210), 1,
      sym__indent,
    STATE(60), 1,
      sym_children,
    ACTIONS(88), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(86), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1084] = 2,
    ACTIONS(214), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(212), 10,
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
    ACTIONS(216), 1,
      sym__indent,
    STATE(79), 1,
      sym_children,
    ACTIONS(104), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(102), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1128] = 2,
    ACTIONS(220), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(218), 10,
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
  [1148] = 11,
    ACTIONS(222), 1,
      anon_sym_BANG_EQ,
    ACTIONS(224), 1,
      anon_sym_EQ,
    ACTIONS(226), 1,
      anon_sym_COLON,
    ACTIONS(228), 1,
      anon_sym_,
    ACTIONS(230), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(236), 1,
      sym__newline,
    STATE(93), 1,
      aux_sym_tag_repeat1,
    STATE(95), 1,
      sym_attributes,
    ACTIONS(234), 2,
      sym_class,
      sym_id,
    STATE(39), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [1185] = 11,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      anon_sym_BANG_EQ,
    ACTIONS(240), 1,
      anon_sym_EQ,
    ACTIONS(242), 1,
      anon_sym_COLON,
    ACTIONS(244), 1,
      anon_sym_,
    ACTIONS(246), 1,
      anon_sym_DOT,
    ACTIONS(250), 1,
      sym__newline,
    STATE(58), 1,
      aux_sym_tag_repeat1,
    STATE(98), 1,
      sym_attributes,
    ACTIONS(248), 2,
      sym_class,
      sym_id,
    STATE(76), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [1222] = 11,
    ACTIONS(222), 1,
      anon_sym_BANG_EQ,
    ACTIONS(224), 1,
      anon_sym_EQ,
    ACTIONS(230), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(252), 1,
      anon_sym_COLON,
    ACTIONS(254), 1,
      anon_sym_,
    ACTIONS(258), 1,
      sym__newline,
    STATE(49), 1,
      aux_sym_tag_repeat1,
    STATE(100), 1,
      sym_attributes,
    ACTIONS(256), 2,
      sym_class,
      sym_id,
    STATE(37), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [1259] = 11,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_BANG_EQ,
    ACTIONS(262), 1,
      anon_sym_EQ,
    ACTIONS(264), 1,
      anon_sym_COLON,
    ACTIONS(266), 1,
      anon_sym_,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      sym__newline,
    STATE(93), 1,
      aux_sym_tag_repeat1,
    STATE(101), 1,
      sym_attributes,
    ACTIONS(234), 2,
      sym_class,
      sym_id,
    STATE(134), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [1296] = 11,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(260), 1,
      anon_sym_BANG_EQ,
    ACTIONS(262), 1,
      anon_sym_EQ,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(272), 1,
      anon_sym_COLON,
    ACTIONS(274), 1,
      anon_sym_,
    ACTIONS(278), 1,
      sym__newline,
    STATE(52), 1,
      aux_sym_tag_repeat1,
    STATE(96), 1,
      sym_attributes,
    ACTIONS(276), 2,
      sym_class,
      sym_id,
    STATE(137), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [1333] = 3,
    ACTIONS(284), 1,
      sym__indent,
    ACTIONS(282), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(280), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1354] = 3,
    ACTIONS(286), 1,
      sym__indent,
    ACTIONS(149), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(147), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1375] = 3,
    ACTIONS(288), 1,
      sym__indent,
    ACTIONS(137), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(135), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1396] = 3,
    ACTIONS(294), 1,
      sym__dedent,
    ACTIONS(292), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(290), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1417] = 11,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      anon_sym_BANG_EQ,
    ACTIONS(240), 1,
      anon_sym_EQ,
    ACTIONS(246), 1,
      anon_sym_DOT,
    ACTIONS(296), 1,
      anon_sym_COLON,
    ACTIONS(298), 1,
      anon_sym_,
    ACTIONS(300), 1,
      sym__newline,
    STATE(93), 1,
      aux_sym_tag_repeat1,
    STATE(99), 1,
      sym_attributes,
    ACTIONS(234), 2,
      sym_class,
      sym_id,
    STATE(65), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [1454] = 3,
    ACTIONS(306), 1,
      sym__dedent,
    ACTIONS(304), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(302), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1475] = 2,
    ACTIONS(100), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(98), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1493] = 2,
    ACTIONS(310), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(308), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1511] = 2,
    ACTIONS(204), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(202), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1529] = 2,
    ACTIONS(180), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(178), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1547] = 2,
    ACTIONS(104), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(102), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1565] = 2,
    ACTIONS(104), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(102), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1583] = 2,
    ACTIONS(143), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(141), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1601] = 2,
    ACTIONS(192), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(190), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1619] = 2,
    ACTIONS(188), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
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
  [1637] = 2,
    ACTIONS(214), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(212), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1655] = 2,
    ACTIONS(88), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(86), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1673] = 2,
    ACTIONS(94), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(92), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1691] = 2,
    ACTIONS(314), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(312), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1709] = 2,
    ACTIONS(220), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(218), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1727] = 2,
    ACTIONS(100), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(98), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1745] = 2,
    ACTIONS(116), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(114), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1763] = 2,
    ACTIONS(110), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(108), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1781] = 2,
    ACTIONS(318), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(316), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1799] = 2,
    ACTIONS(322), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(320), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1817] = 2,
    ACTIONS(88), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(86), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1835] = 2,
    ACTIONS(94), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(92), 8,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1853] = 6,
    ACTIONS(76), 1,
      anon_sym_PIPE,
    ACTIONS(324), 1,
      anon_sym_BANG_EQ,
    ACTIONS(326), 1,
      anon_sym_EQ,
    STATE(21), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(80), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(5), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [1878] = 6,
    ACTIONS(13), 1,
      anon_sym_BANG_EQ,
    ACTIONS(15), 1,
      anon_sym_EQ,
    ACTIONS(76), 1,
      anon_sym_PIPE,
    STATE(74), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(80), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(6), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [1903] = 6,
    ACTIONS(13), 1,
      anon_sym_BANG_EQ,
    ACTIONS(15), 1,
      anon_sym_EQ,
    ACTIONS(76), 1,
      anon_sym_PIPE,
    STATE(71), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(80), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(6), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [1928] = 6,
    ACTIONS(13), 1,
      anon_sym_BANG_EQ,
    ACTIONS(15), 1,
      anon_sym_EQ,
    ACTIONS(76), 1,
      anon_sym_PIPE,
    STATE(70), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(80), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(6), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [1953] = 6,
    ACTIONS(328), 1,
      anon_sym_PIPE,
    ACTIONS(330), 1,
      anon_sym_BANG_EQ,
    ACTIONS(332), 1,
      anon_sym_EQ,
    STATE(130), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(334), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(94), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [1978] = 6,
    ACTIONS(76), 1,
      anon_sym_PIPE,
    ACTIONS(324), 1,
      anon_sym_BANG_EQ,
    ACTIONS(326), 1,
      anon_sym_EQ,
    STATE(41), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(80), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(5), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2003] = 6,
    ACTIONS(328), 1,
      anon_sym_PIPE,
    ACTIONS(330), 1,
      anon_sym_BANG_EQ,
    ACTIONS(332), 1,
      anon_sym_EQ,
    STATE(147), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(334), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(94), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2028] = 6,
    ACTIONS(76), 1,
      anon_sym_PIPE,
    ACTIONS(324), 1,
      anon_sym_BANG_EQ,
    ACTIONS(326), 1,
      anon_sym_EQ,
    STATE(34), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(80), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(5), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2053] = 6,
    ACTIONS(328), 1,
      anon_sym_PIPE,
    ACTIONS(330), 1,
      anon_sym_BANG_EQ,
    ACTIONS(332), 1,
      anon_sym_EQ,
    STATE(133), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(334), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(94), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2078] = 8,
    ACTIONS(336), 1,
      anon_sym_RPAREN,
    ACTIONS(338), 1,
      aux_sym__attribute_token1,
    STATE(91), 1,
      aux_sym_attributes_repeat1,
    STATE(118), 1,
      sym_js_attribute_name,
    STATE(119), 1,
      sym_attribute_name,
    STATE(196), 1,
      sym_attribute,
    STATE(186), 2,
      sym__attribute,
      sym__js_attribute,
    ACTIONS(340), 3,
      aux_sym_js_attribute_name_token1,
      aux_sym_js_attribute_name_token2,
      aux_sym_js_attribute_name_token3,
  [2106] = 8,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
    ACTIONS(344), 1,
      aux_sym__attribute_token1,
    STATE(91), 1,
      aux_sym_attributes_repeat1,
    STATE(118), 1,
      sym_js_attribute_name,
    STATE(119), 1,
      sym_attribute_name,
    STATE(218), 1,
      sym_attribute,
    STATE(186), 2,
      sym__attribute,
      sym__js_attribute,
    ACTIONS(347), 3,
      aux_sym_js_attribute_name_token1,
      aux_sym_js_attribute_name_token2,
      aux_sym_js_attribute_name_token3,
  [2134] = 8,
    ACTIONS(338), 1,
      aux_sym__attribute_token1,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_attributes_repeat1,
    STATE(118), 1,
      sym_js_attribute_name,
    STATE(119), 1,
      sym_attribute_name,
    STATE(187), 1,
      sym_attribute,
    STATE(186), 2,
      sym__attribute,
      sym__js_attribute,
    ACTIONS(340), 3,
      aux_sym_js_attribute_name_token1,
      aux_sym_js_attribute_name_token2,
      aux_sym_js_attribute_name_token3,
  [2162] = 4,
    STATE(93), 1,
      aux_sym_tag_repeat1,
    ACTIONS(354), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(356), 2,
      sym_class,
      sym_id,
    ACTIONS(352), 5,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_LPAREN,
  [2181] = 4,
    ACTIONS(328), 1,
      anon_sym_PIPE,
    ACTIONS(359), 1,
      sym__dedent,
    ACTIONS(334), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(97), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2199] = 7,
    ACTIONS(222), 1,
      anon_sym_BANG_EQ,
    ACTIONS(224), 1,
      anon_sym_EQ,
    ACTIONS(230), 1,
      anon_sym_DOT,
    ACTIONS(361), 1,
      anon_sym_COLON,
    ACTIONS(363), 1,
      anon_sym_,
    ACTIONS(365), 1,
      sym__newline,
    STATE(41), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [2223] = 7,
    ACTIONS(260), 1,
      anon_sym_BANG_EQ,
    ACTIONS(262), 1,
      anon_sym_EQ,
    ACTIONS(264), 1,
      anon_sym_COLON,
    ACTIONS(266), 1,
      anon_sym_,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      sym__newline,
    STATE(134), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [2247] = 4,
    ACTIONS(59), 1,
      sym__dedent,
    ACTIONS(367), 1,
      anon_sym_PIPE,
    ACTIONS(370), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(97), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2265] = 7,
    ACTIONS(238), 1,
      anon_sym_BANG_EQ,
    ACTIONS(240), 1,
      anon_sym_EQ,
    ACTIONS(246), 1,
      anon_sym_DOT,
    ACTIONS(296), 1,
      anon_sym_COLON,
    ACTIONS(298), 1,
      anon_sym_,
    ACTIONS(300), 1,
      sym__newline,
    STATE(65), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [2289] = 7,
    ACTIONS(238), 1,
      anon_sym_BANG_EQ,
    ACTIONS(240), 1,
      anon_sym_EQ,
    ACTIONS(246), 1,
      anon_sym_DOT,
    ACTIONS(373), 1,
      anon_sym_COLON,
    ACTIONS(375), 1,
      anon_sym_,
    ACTIONS(377), 1,
      sym__newline,
    STATE(70), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [2313] = 7,
    ACTIONS(222), 1,
      anon_sym_BANG_EQ,
    ACTIONS(224), 1,
      anon_sym_EQ,
    ACTIONS(226), 1,
      anon_sym_COLON,
    ACTIONS(228), 1,
      anon_sym_,
    ACTIONS(230), 1,
      anon_sym_DOT,
    ACTIONS(236), 1,
      sym__newline,
    STATE(39), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [2337] = 7,
    ACTIONS(260), 1,
      anon_sym_BANG_EQ,
    ACTIONS(262), 1,
      anon_sym_EQ,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(379), 1,
      anon_sym_COLON,
    ACTIONS(381), 1,
      anon_sym_,
    ACTIONS(383), 1,
      sym__newline,
    STATE(130), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [2361] = 3,
    ACTIONS(328), 1,
      anon_sym_PIPE,
    ACTIONS(334), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(94), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2376] = 3,
    ACTIONS(76), 1,
      anon_sym_PIPE,
    ACTIONS(80), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(5), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2391] = 3,
    ACTIONS(76), 1,
      anon_sym_PIPE,
    ACTIONS(80), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(6), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2406] = 3,
    ACTIONS(385), 1,
      sym__indent,
    STATE(144), 1,
      sym_children,
    ACTIONS(98), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2420] = 3,
    ACTIONS(385), 1,
      sym__indent,
    STATE(150), 1,
      sym_children,
    ACTIONS(92), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2434] = 3,
    ACTIONS(387), 1,
      sym__indent,
    STATE(128), 1,
      sym_children,
    ACTIONS(102), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2448] = 3,
    ACTIONS(389), 1,
      sym__indent,
    STATE(126), 1,
      sym_children,
    ACTIONS(86), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2462] = 3,
    ACTIONS(385), 1,
      sym__indent,
    STATE(126), 1,
      sym_children,
    ACTIONS(86), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2476] = 3,
    ACTIONS(391), 1,
      sym__indent,
    STATE(135), 1,
      sym_children,
    ACTIONS(108), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2490] = 3,
    ACTIONS(160), 1,
      sym__dedent,
    STATE(111), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(393), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2503] = 2,
    ACTIONS(398), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(396), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_DOT,
  [2514] = 4,
    ACTIONS(402), 1,
      anon_sym_,
    ACTIONS(404), 1,
      anon_sym_DOT,
    STATE(113), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(400), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2529] = 3,
    ACTIONS(407), 1,
      sym__dedent,
    STATE(111), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(334), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2542] = 2,
    ACTIONS(409), 1,
      sym__indent,
    ACTIONS(135), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2553] = 2,
    ACTIONS(413), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(411), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_DOT,
  [2564] = 3,
    ACTIONS(415), 1,
      sym__dedent,
    STATE(111), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(334), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2577] = 5,
    ACTIONS(417), 1,
      anon_sym_EQ,
    ACTIONS(419), 1,
      anon_sym_,
    ACTIONS(421), 1,
      anon_sym_DOT,
    STATE(122), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(423), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2594] = 5,
    ACTIONS(421), 1,
      anon_sym_DOT,
    ACTIONS(425), 1,
      anon_sym_EQ,
    ACTIONS(427), 1,
      anon_sym_,
    STATE(121), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(429), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2611] = 3,
    ACTIONS(431), 1,
      sym__dedent,
    STATE(111), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(334), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2624] = 5,
    ACTIONS(421), 1,
      anon_sym_DOT,
    ACTIONS(433), 1,
      anon_sym_EQ,
    ACTIONS(435), 1,
      anon_sym_,
    STATE(113), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(437), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2641] = 5,
    ACTIONS(421), 1,
      anon_sym_DOT,
    ACTIONS(439), 1,
      anon_sym_EQ,
    ACTIONS(441), 1,
      anon_sym_,
    STATE(113), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(443), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2658] = 2,
    ACTIONS(447), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(445), 4,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_DOT,
  [2669] = 5,
    ACTIONS(449), 1,
      sym_content,
    ACTIONS(452), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(455), 1,
      sym__dedent,
    STATE(124), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(154), 1,
      aux_sym__content_or_javascript,
  [2685] = 1,
    ACTIONS(190), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2693] = 1,
    ACTIONS(98), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2701] = 2,
    STATE(114), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(334), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2711] = 1,
    ACTIONS(86), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2719] = 2,
    STATE(120), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(334), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2729] = 1,
    ACTIONS(86), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2737] = 5,
    ACTIONS(457), 1,
      sym_content,
    ACTIONS(459), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(461), 1,
      sym__dedent,
    STATE(124), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(154), 1,
      aux_sym__content_or_javascript,
  [2753] = 2,
    STATE(35), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(21), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2763] = 1,
    ACTIONS(98), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2771] = 1,
    ACTIONS(102), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2779] = 1,
    ACTIONS(102), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2787] = 1,
    ACTIONS(218), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2795] = 1,
    ACTIONS(108), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2803] = 2,
    STATE(117), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(334), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2813] = 2,
    ACTIONS(465), 1,
      anon_sym_,
    ACTIONS(463), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2823] = 2,
    STATE(33), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(21), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2833] = 1,
    ACTIONS(186), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2841] = 5,
    ACTIONS(457), 1,
      sym_content,
    ACTIONS(459), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(467), 1,
      sym__dedent,
    STATE(124), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(154), 1,
      aux_sym__content_or_javascript,
  [2857] = 1,
    ACTIONS(202), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2865] = 1,
    ACTIONS(92), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2873] = 1,
    ACTIONS(172), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2881] = 1,
    ACTIONS(342), 5,
      anon_sym_RPAREN,
      aux_sym__attribute_token1,
      aux_sym_js_attribute_name_token1,
      aux_sym_js_attribute_name_token2,
      aux_sym_js_attribute_name_token3,
  [2889] = 1,
    ACTIONS(92), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2897] = 2,
    ACTIONS(471), 1,
      anon_sym_,
    ACTIONS(469), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2907] = 2,
    ACTIONS(475), 1,
      anon_sym_,
    ACTIONS(473), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2917] = 1,
    ACTIONS(178), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2925] = 1,
    ACTIONS(206), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2933] = 5,
    ACTIONS(457), 1,
      sym_content,
    ACTIONS(459), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(477), 1,
      sym__dedent,
    STATE(124), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(154), 1,
      aux_sym__content_or_javascript,
  [2949] = 1,
    ACTIONS(212), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [2957] = 4,
    ACTIONS(459), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(479), 1,
      sym_content,
    ACTIONS(481), 1,
      sym__newline,
    STATE(168), 1,
      aux_sym__content_or_javascript,
  [2970] = 4,
    ACTIONS(459), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(479), 1,
      sym_content,
    ACTIONS(483), 1,
      sym__newline,
    STATE(168), 1,
      aux_sym__content_or_javascript,
  [2983] = 2,
    STATE(39), 1,
      sym_tag,
    ACTIONS(80), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2992] = 4,
    ACTIONS(457), 1,
      sym_content,
    ACTIONS(459), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(131), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(154), 1,
      aux_sym__content_or_javascript,
  [3005] = 2,
    STATE(74), 1,
      sym_tag,
    ACTIONS(21), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [3014] = 4,
    ACTIONS(459), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(479), 1,
      sym_content,
    ACTIONS(485), 1,
      sym__newline,
    STATE(168), 1,
      aux_sym__content_or_javascript,
  [3027] = 4,
    ACTIONS(459), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(479), 1,
      sym_content,
    ACTIONS(487), 1,
      sym__newline,
    STATE(168), 1,
      aux_sym__content_or_javascript,
  [3040] = 4,
    ACTIONS(459), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(479), 1,
      sym_content,
    ACTIONS(489), 1,
      sym__newline,
    STATE(168), 1,
      aux_sym__content_or_javascript,
  [3053] = 4,
    ACTIONS(491), 1,
      aux_sym__attribute_token2,
    ACTIONS(493), 1,
      anon_sym_SQUOTE,
    ACTIONS(495), 1,
      anon_sym_DQUOTE,
    STATE(211), 1,
      sym_quoted_attribute_value,
  [3066] = 2,
    STATE(41), 1,
      sym_tag,
    ACTIONS(80), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [3075] = 4,
    ACTIONS(497), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(499), 1,
      sym__newline,
    STATE(57), 1,
      sym__single_line_buf_code,
    STATE(238), 1,
      sym__un_delimited_javascript,
  [3088] = 4,
    ACTIONS(459), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(501), 1,
      sym_content,
    ACTIONS(503), 1,
      sym__newline,
    STATE(172), 1,
      aux_sym__content_or_javascript,
  [3101] = 4,
    ACTIONS(459), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(479), 1,
      sym_content,
    ACTIONS(505), 1,
      sym__newline,
    STATE(168), 1,
      aux_sym__content_or_javascript,
  [3114] = 4,
    ACTIONS(457), 1,
      sym_content,
    ACTIONS(459), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(152), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(154), 1,
      aux_sym__content_or_javascript,
  [3127] = 4,
    ACTIONS(507), 1,
      sym_content,
    ACTIONS(510), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(513), 1,
      sym__newline,
    STATE(168), 1,
      aux_sym__content_or_javascript,
  [3140] = 2,
    STATE(34), 1,
      sym_tag,
    ACTIONS(80), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [3149] = 4,
    ACTIONS(459), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(515), 1,
      sym_content,
    ACTIONS(517), 1,
      sym__newline,
    STATE(155), 1,
      aux_sym__content_or_javascript,
  [3162] = 2,
    STATE(65), 1,
      sym_tag,
    ACTIONS(21), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [3171] = 4,
    ACTIONS(459), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(479), 1,
      sym_content,
    ACTIONS(519), 1,
      sym__newline,
    STATE(168), 1,
      aux_sym__content_or_javascript,
  [3184] = 4,
    ACTIONS(459), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(479), 1,
      sym_content,
    ACTIONS(521), 1,
      sym__newline,
    STATE(168), 1,
      aux_sym__content_or_javascript,
  [3197] = 2,
    STATE(134), 1,
      sym_tag,
    ACTIONS(334), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [3206] = 4,
    ACTIONS(493), 1,
      anon_sym_SQUOTE,
    ACTIONS(495), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      aux_sym__attribute_token2,
    STATE(199), 1,
      sym_quoted_attribute_value,
  [3219] = 4,
    ACTIONS(459), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(479), 1,
      sym_content,
    ACTIONS(525), 1,
      sym__newline,
    STATE(168), 1,
      aux_sym__content_or_javascript,
  [3232] = 4,
    ACTIONS(459), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(479), 1,
      sym_content,
    ACTIONS(527), 1,
      sym__newline,
    STATE(168), 1,
      aux_sym__content_or_javascript,
  [3245] = 2,
    STATE(130), 1,
      sym_tag,
    ACTIONS(334), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [3254] = 4,
    ACTIONS(459), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(479), 1,
      sym_content,
    ACTIONS(529), 1,
      sym__newline,
    STATE(168), 1,
      aux_sym__content_or_javascript,
  [3267] = 2,
    STATE(133), 1,
      sym_tag,
    ACTIONS(334), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [3276] = 2,
    STATE(70), 1,
      sym_tag,
    ACTIONS(21), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [3285] = 4,
    ACTIONS(459), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(479), 1,
      sym_content,
    ACTIONS(531), 1,
      sym__newline,
    STATE(168), 1,
      aux_sym__content_or_javascript,
  [3298] = 4,
    ACTIONS(457), 1,
      sym_content,
    ACTIONS(459), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(142), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(154), 1,
      aux_sym__content_or_javascript,
  [3311] = 3,
    ACTIONS(533), 1,
      sym__un_delimited_javascript_line,
    STATE(15), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(59), 1,
      sym__multi_line_buf_code,
  [3321] = 3,
    ACTIONS(497), 1,
      sym__un_delimited_javascript_line,
    STATE(125), 1,
      sym__single_line_buf_code,
    STATE(227), 1,
      sym__un_delimited_javascript,
  [3331] = 2,
    ACTIONS(535), 1,
      anon_sym_,
    ACTIONS(537), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3339] = 3,
    ACTIONS(539), 1,
      anon_sym_,
    ACTIONS(541), 1,
      anon_sym_COMMA,
    ACTIONS(543), 1,
      anon_sym_RPAREN,
  [3349] = 3,
    ACTIONS(459), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(545), 1,
      sym_content,
    STATE(160), 1,
      aux_sym__content_or_javascript,
  [3359] = 3,
    ACTIONS(459), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(547), 1,
      sym_content,
    STATE(182), 1,
      aux_sym__content_or_javascript,
  [3369] = 3,
    ACTIONS(459), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(549), 1,
      sym_content,
    STATE(179), 1,
      aux_sym__content_or_javascript,
  [3379] = 3,
    ACTIONS(459), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(551), 1,
      sym_content,
    STATE(176), 1,
      aux_sym__content_or_javascript,
  [3389] = 3,
    ACTIONS(553), 1,
      anon_sym_SQUOTE,
    ACTIONS(555), 1,
      anon_sym_DQUOTE,
    STATE(205), 1,
      sym_quoted_javascript,
  [3399] = 3,
    ACTIONS(459), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(557), 1,
      sym_content,
    STATE(173), 1,
      aux_sym__content_or_javascript,
  [3409] = 3,
    ACTIONS(497), 1,
      sym__un_delimited_javascript_line,
    STATE(30), 1,
      sym__single_line_buf_code,
    STATE(238), 1,
      sym__un_delimited_javascript,
  [3419] = 3,
    ACTIONS(497), 1,
      sym__un_delimited_javascript_line,
    STATE(32), 1,
      sym__single_line_buf_code,
    STATE(238), 1,
      sym__un_delimited_javascript,
  [3429] = 3,
    ACTIONS(539), 1,
      anon_sym_,
    ACTIONS(541), 1,
      anon_sym_COMMA,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
  [3439] = 2,
    ACTIONS(561), 1,
      anon_sym_,
    ACTIONS(563), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3447] = 3,
    ACTIONS(459), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(565), 1,
      sym_content,
    STATE(177), 1,
      aux_sym__content_or_javascript,
  [3457] = 2,
    ACTIONS(567), 1,
      anon_sym_,
    ACTIONS(569), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3465] = 2,
    ACTIONS(571), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(455), 2,
      sym__dedent,
      sym_content,
  [3473] = 3,
    ACTIONS(459), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(573), 1,
      sym_content,
    STATE(166), 1,
      aux_sym__content_or_javascript,
  [3483] = 2,
    ACTIONS(577), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(575), 2,
      sym__newline,
      sym_content,
  [3491] = 3,
    ACTIONS(459), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(579), 1,
      sym_content,
    STATE(161), 1,
      aux_sym__content_or_javascript,
  [3501] = 2,
    ACTIONS(581), 1,
      anon_sym_,
    ACTIONS(583), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3509] = 2,
    ACTIONS(585), 1,
      anon_sym_,
    ACTIONS(587), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3517] = 3,
    ACTIONS(497), 1,
      sym__un_delimited_javascript_line,
    STATE(68), 1,
      sym__single_line_buf_code,
    STATE(232), 1,
      sym__un_delimited_javascript,
  [3527] = 3,
    ACTIONS(459), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(589), 1,
      sym_content,
    STATE(159), 1,
      aux_sym__content_or_javascript,
  [3537] = 3,
    ACTIONS(553), 1,
      anon_sym_SQUOTE,
    ACTIONS(555), 1,
      anon_sym_DQUOTE,
    STATE(197), 1,
      sym_quoted_javascript,
  [3547] = 1,
    ACTIONS(591), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [3553] = 3,
    ACTIONS(497), 1,
      sym__un_delimited_javascript_line,
    STATE(67), 1,
      sym__single_line_buf_code,
    STATE(232), 1,
      sym__un_delimited_javascript,
  [3563] = 2,
    ACTIONS(593), 1,
      anon_sym_,
    ACTIONS(595), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3571] = 1,
    ACTIONS(597), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [3577] = 2,
    ACTIONS(599), 1,
      anon_sym_,
    ACTIONS(601), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3585] = 2,
    ACTIONS(603), 1,
      anon_sym_,
    ACTIONS(605), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3593] = 2,
    ACTIONS(607), 1,
      anon_sym_,
    ACTIONS(609), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3601] = 3,
    ACTIONS(497), 1,
      sym__un_delimited_javascript_line,
    STATE(141), 1,
      sym__single_line_buf_code,
    STATE(227), 1,
      sym__un_delimited_javascript,
  [3611] = 2,
    ACTIONS(611), 1,
      anon_sym_,
    ACTIONS(613), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3619] = 2,
    ACTIONS(539), 1,
      anon_sym_,
    ACTIONS(541), 1,
      anon_sym_COMMA,
  [3626] = 2,
    ACTIONS(615), 1,
      anon_sym_SQUOTE,
    ACTIONS(617), 1,
      aux_sym_quoted_javascript_token1,
  [3633] = 2,
    ACTIONS(619), 1,
      anon_sym_DQUOTE,
    ACTIONS(621), 1,
      aux_sym_quoted_javascript_token2,
  [3640] = 2,
    ACTIONS(615), 1,
      anon_sym_DQUOTE,
    ACTIONS(623), 1,
      aux_sym_quoted_javascript_token2,
  [3647] = 2,
    ACTIONS(625), 1,
      sym__un_delimited_javascript_line,
    STATE(140), 1,
      sym__un_delimited_javascript,
  [3654] = 2,
    ACTIONS(619), 1,
      anon_sym_SQUOTE,
    ACTIONS(627), 1,
      aux_sym_quoted_javascript_token1,
  [3661] = 2,
    ACTIONS(629), 1,
      sym__comment_content,
    ACTIONS(631), 1,
      sym__newline,
  [3668] = 1,
    ACTIONS(633), 1,
      anon_sym_SQUOTE,
  [3672] = 1,
    ACTIONS(635), 1,
      sym__delimited_javascript,
  [3676] = 1,
    ACTIONS(637), 1,
      sym__newline,
  [3680] = 1,
    ACTIONS(639), 1,
      aux_sym__attribute_token3,
  [3684] = 1,
    ACTIONS(641), 1,
      aux_sym__attribute_token3,
  [3688] = 1,
    ACTIONS(643), 1,
      sym__newline,
  [3692] = 1,
    ACTIONS(633), 1,
      anon_sym_DQUOTE,
  [3696] = 1,
    ACTIONS(645), 1,
      sym__newline,
  [3700] = 1,
    ACTIONS(647), 1,
      aux_sym_unbuffered_code_token1,
  [3704] = 1,
    ACTIONS(649), 1,
      ts_builtin_sym_end,
  [3708] = 1,
    ACTIONS(651), 1,
      sym__newline,
  [3712] = 1,
    ACTIONS(597), 1,
      sym__newline,
  [3716] = 1,
    ACTIONS(653), 1,
      sym__indent,
  [3720] = 1,
    ACTIONS(655), 1,
      sym__newline,
  [3724] = 1,
    ACTIONS(657), 1,
      aux_sym__attribute_token1,
  [3728] = 1,
    ACTIONS(659), 1,
      anon_sym_RBRACE_RBRACE,
  [3732] = 1,
    ACTIONS(661), 1,
      sym__newline,
  [3736] = 1,
    ACTIONS(663), 1,
      anon_sym_DQUOTE,
  [3740] = 1,
    ACTIONS(663), 1,
      anon_sym_SQUOTE,
  [3744] = 1,
    ACTIONS(665), 1,
      sym__indent,
  [3748] = 1,
    ACTIONS(667), 1,
      sym__indent,
  [3752] = 1,
    ACTIONS(669), 1,
      sym__indent,
  [3756] = 1,
    ACTIONS(671), 1,
      sym__newline,
  [3760] = 1,
    ACTIONS(673), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 92,
  [SMALL_STATE(5)] = 124,
  [SMALL_STATE(6)] = 158,
  [SMALL_STATE(7)] = 192,
  [SMALL_STATE(8)] = 218,
  [SMALL_STATE(9)] = 244,
  [SMALL_STATE(10)] = 270,
  [SMALL_STATE(11)] = 296,
  [SMALL_STATE(12)] = 322,
  [SMALL_STATE(13)] = 348,
  [SMALL_STATE(14)] = 375,
  [SMALL_STATE(15)] = 400,
  [SMALL_STATE(16)] = 425,
  [SMALL_STATE(17)] = 448,
  [SMALL_STATE(18)] = 475,
  [SMALL_STATE(19)] = 502,
  [SMALL_STATE(20)] = 529,
  [SMALL_STATE(21)] = 554,
  [SMALL_STATE(22)] = 574,
  [SMALL_STATE(23)] = 600,
  [SMALL_STATE(24)] = 624,
  [SMALL_STATE(25)] = 644,
  [SMALL_STATE(26)] = 668,
  [SMALL_STATE(27)] = 688,
  [SMALL_STATE(28)] = 708,
  [SMALL_STATE(29)] = 732,
  [SMALL_STATE(30)] = 756,
  [SMALL_STATE(31)] = 776,
  [SMALL_STATE(32)] = 796,
  [SMALL_STATE(33)] = 816,
  [SMALL_STATE(34)] = 838,
  [SMALL_STATE(35)] = 858,
  [SMALL_STATE(36)] = 880,
  [SMALL_STATE(37)] = 900,
  [SMALL_STATE(38)] = 920,
  [SMALL_STATE(39)] = 940,
  [SMALL_STATE(40)] = 960,
  [SMALL_STATE(41)] = 980,
  [SMALL_STATE(42)] = 1000,
  [SMALL_STATE(43)] = 1020,
  [SMALL_STATE(44)] = 1040,
  [SMALL_STATE(45)] = 1060,
  [SMALL_STATE(46)] = 1084,
  [SMALL_STATE(47)] = 1104,
  [SMALL_STATE(48)] = 1128,
  [SMALL_STATE(49)] = 1148,
  [SMALL_STATE(50)] = 1185,
  [SMALL_STATE(51)] = 1222,
  [SMALL_STATE(52)] = 1259,
  [SMALL_STATE(53)] = 1296,
  [SMALL_STATE(54)] = 1333,
  [SMALL_STATE(55)] = 1354,
  [SMALL_STATE(56)] = 1375,
  [SMALL_STATE(57)] = 1396,
  [SMALL_STATE(58)] = 1417,
  [SMALL_STATE(59)] = 1454,
  [SMALL_STATE(60)] = 1475,
  [SMALL_STATE(61)] = 1493,
  [SMALL_STATE(62)] = 1511,
  [SMALL_STATE(63)] = 1529,
  [SMALL_STATE(64)] = 1547,
  [SMALL_STATE(65)] = 1565,
  [SMALL_STATE(66)] = 1583,
  [SMALL_STATE(67)] = 1601,
  [SMALL_STATE(68)] = 1619,
  [SMALL_STATE(69)] = 1637,
  [SMALL_STATE(70)] = 1655,
  [SMALL_STATE(71)] = 1673,
  [SMALL_STATE(72)] = 1691,
  [SMALL_STATE(73)] = 1709,
  [SMALL_STATE(74)] = 1727,
  [SMALL_STATE(75)] = 1745,
  [SMALL_STATE(76)] = 1763,
  [SMALL_STATE(77)] = 1781,
  [SMALL_STATE(78)] = 1799,
  [SMALL_STATE(79)] = 1817,
  [SMALL_STATE(80)] = 1835,
  [SMALL_STATE(81)] = 1853,
  [SMALL_STATE(82)] = 1878,
  [SMALL_STATE(83)] = 1903,
  [SMALL_STATE(84)] = 1928,
  [SMALL_STATE(85)] = 1953,
  [SMALL_STATE(86)] = 1978,
  [SMALL_STATE(87)] = 2003,
  [SMALL_STATE(88)] = 2028,
  [SMALL_STATE(89)] = 2053,
  [SMALL_STATE(90)] = 2078,
  [SMALL_STATE(91)] = 2106,
  [SMALL_STATE(92)] = 2134,
  [SMALL_STATE(93)] = 2162,
  [SMALL_STATE(94)] = 2181,
  [SMALL_STATE(95)] = 2199,
  [SMALL_STATE(96)] = 2223,
  [SMALL_STATE(97)] = 2247,
  [SMALL_STATE(98)] = 2265,
  [SMALL_STATE(99)] = 2289,
  [SMALL_STATE(100)] = 2313,
  [SMALL_STATE(101)] = 2337,
  [SMALL_STATE(102)] = 2361,
  [SMALL_STATE(103)] = 2376,
  [SMALL_STATE(104)] = 2391,
  [SMALL_STATE(105)] = 2406,
  [SMALL_STATE(106)] = 2420,
  [SMALL_STATE(107)] = 2434,
  [SMALL_STATE(108)] = 2448,
  [SMALL_STATE(109)] = 2462,
  [SMALL_STATE(110)] = 2476,
  [SMALL_STATE(111)] = 2490,
  [SMALL_STATE(112)] = 2503,
  [SMALL_STATE(113)] = 2514,
  [SMALL_STATE(114)] = 2529,
  [SMALL_STATE(115)] = 2542,
  [SMALL_STATE(116)] = 2553,
  [SMALL_STATE(117)] = 2564,
  [SMALL_STATE(118)] = 2577,
  [SMALL_STATE(119)] = 2594,
  [SMALL_STATE(120)] = 2611,
  [SMALL_STATE(121)] = 2624,
  [SMALL_STATE(122)] = 2641,
  [SMALL_STATE(123)] = 2658,
  [SMALL_STATE(124)] = 2669,
  [SMALL_STATE(125)] = 2685,
  [SMALL_STATE(126)] = 2693,
  [SMALL_STATE(127)] = 2701,
  [SMALL_STATE(128)] = 2711,
  [SMALL_STATE(129)] = 2719,
  [SMALL_STATE(130)] = 2729,
  [SMALL_STATE(131)] = 2737,
  [SMALL_STATE(132)] = 2753,
  [SMALL_STATE(133)] = 2763,
  [SMALL_STATE(134)] = 2771,
  [SMALL_STATE(135)] = 2779,
  [SMALL_STATE(136)] = 2787,
  [SMALL_STATE(137)] = 2795,
  [SMALL_STATE(138)] = 2803,
  [SMALL_STATE(139)] = 2813,
  [SMALL_STATE(140)] = 2823,
  [SMALL_STATE(141)] = 2833,
  [SMALL_STATE(142)] = 2841,
  [SMALL_STATE(143)] = 2857,
  [SMALL_STATE(144)] = 2865,
  [SMALL_STATE(145)] = 2873,
  [SMALL_STATE(146)] = 2881,
  [SMALL_STATE(147)] = 2889,
  [SMALL_STATE(148)] = 2897,
  [SMALL_STATE(149)] = 2907,
  [SMALL_STATE(150)] = 2917,
  [SMALL_STATE(151)] = 2925,
  [SMALL_STATE(152)] = 2933,
  [SMALL_STATE(153)] = 2949,
  [SMALL_STATE(154)] = 2957,
  [SMALL_STATE(155)] = 2970,
  [SMALL_STATE(156)] = 2983,
  [SMALL_STATE(157)] = 2992,
  [SMALL_STATE(158)] = 3005,
  [SMALL_STATE(159)] = 3014,
  [SMALL_STATE(160)] = 3027,
  [SMALL_STATE(161)] = 3040,
  [SMALL_STATE(162)] = 3053,
  [SMALL_STATE(163)] = 3066,
  [SMALL_STATE(164)] = 3075,
  [SMALL_STATE(165)] = 3088,
  [SMALL_STATE(166)] = 3101,
  [SMALL_STATE(167)] = 3114,
  [SMALL_STATE(168)] = 3127,
  [SMALL_STATE(169)] = 3140,
  [SMALL_STATE(170)] = 3149,
  [SMALL_STATE(171)] = 3162,
  [SMALL_STATE(172)] = 3171,
  [SMALL_STATE(173)] = 3184,
  [SMALL_STATE(174)] = 3197,
  [SMALL_STATE(175)] = 3206,
  [SMALL_STATE(176)] = 3219,
  [SMALL_STATE(177)] = 3232,
  [SMALL_STATE(178)] = 3245,
  [SMALL_STATE(179)] = 3254,
  [SMALL_STATE(180)] = 3267,
  [SMALL_STATE(181)] = 3276,
  [SMALL_STATE(182)] = 3285,
  [SMALL_STATE(183)] = 3298,
  [SMALL_STATE(184)] = 3311,
  [SMALL_STATE(185)] = 3321,
  [SMALL_STATE(186)] = 3331,
  [SMALL_STATE(187)] = 3339,
  [SMALL_STATE(188)] = 3349,
  [SMALL_STATE(189)] = 3359,
  [SMALL_STATE(190)] = 3369,
  [SMALL_STATE(191)] = 3379,
  [SMALL_STATE(192)] = 3389,
  [SMALL_STATE(193)] = 3399,
  [SMALL_STATE(194)] = 3409,
  [SMALL_STATE(195)] = 3419,
  [SMALL_STATE(196)] = 3429,
  [SMALL_STATE(197)] = 3439,
  [SMALL_STATE(198)] = 3447,
  [SMALL_STATE(199)] = 3457,
  [SMALL_STATE(200)] = 3465,
  [SMALL_STATE(201)] = 3473,
  [SMALL_STATE(202)] = 3483,
  [SMALL_STATE(203)] = 3491,
  [SMALL_STATE(204)] = 3501,
  [SMALL_STATE(205)] = 3509,
  [SMALL_STATE(206)] = 3517,
  [SMALL_STATE(207)] = 3527,
  [SMALL_STATE(208)] = 3537,
  [SMALL_STATE(209)] = 3547,
  [SMALL_STATE(210)] = 3553,
  [SMALL_STATE(211)] = 3563,
  [SMALL_STATE(212)] = 3571,
  [SMALL_STATE(213)] = 3577,
  [SMALL_STATE(214)] = 3585,
  [SMALL_STATE(215)] = 3593,
  [SMALL_STATE(216)] = 3601,
  [SMALL_STATE(217)] = 3611,
  [SMALL_STATE(218)] = 3619,
  [SMALL_STATE(219)] = 3626,
  [SMALL_STATE(220)] = 3633,
  [SMALL_STATE(221)] = 3640,
  [SMALL_STATE(222)] = 3647,
  [SMALL_STATE(223)] = 3654,
  [SMALL_STATE(224)] = 3661,
  [SMALL_STATE(225)] = 3668,
  [SMALL_STATE(226)] = 3672,
  [SMALL_STATE(227)] = 3676,
  [SMALL_STATE(228)] = 3680,
  [SMALL_STATE(229)] = 3684,
  [SMALL_STATE(230)] = 3688,
  [SMALL_STATE(231)] = 3692,
  [SMALL_STATE(232)] = 3696,
  [SMALL_STATE(233)] = 3700,
  [SMALL_STATE(234)] = 3704,
  [SMALL_STATE(235)] = 3708,
  [SMALL_STATE(236)] = 3712,
  [SMALL_STATE(237)] = 3716,
  [SMALL_STATE(238)] = 3720,
  [SMALL_STATE(239)] = 3724,
  [SMALL_STATE(240)] = 3728,
  [SMALL_STATE(241)] = 3732,
  [SMALL_STATE(242)] = 3736,
  [SMALL_STATE(243)] = 3740,
  [SMALL_STATE(244)] = 3744,
  [SMALL_STATE(245)] = 3748,
  [SMALL_STATE(246)] = 3752,
  [SMALL_STATE(247)] = 3756,
  [SMALL_STATE(248)] = 3760,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(209),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(222),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(222),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(132),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(206),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(210),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(224),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(233),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(170),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(51),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(51),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 5),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 5),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(241),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(27),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(50),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(50),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_content, 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_content, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 7),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unescaped_buffered_code, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unescaped_buffered_code, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffered_code, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffered_code, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 5, .production_id = 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 5, .production_id = 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_content, 2),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_content, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 5),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 5),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 3),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 3),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 5),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 5),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 2),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 6),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 6),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 4),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 4),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 6),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 6),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(139),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(149),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(93),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(165),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(53),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(53),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2), SHIFT_REPEAT(239),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 1),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 1),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 1),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 2),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 2),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 2),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 2),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(154),
  [452] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(226),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_name, 1),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 1),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 1),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_attribute_name, 1),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_attribute_name, 1),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(168),
  [510] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(226),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 4),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 4),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 4),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 4),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 3),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 3),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 3),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 3),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 3),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 3),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__un_delimited_javascript, 1),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 3),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 3),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 4),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 4),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 5),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 5),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 2),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 2),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [649] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
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
