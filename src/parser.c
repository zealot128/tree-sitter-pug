#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 160
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 73
#define ALIAS_COUNT 2
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 4

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
  aux_sym__delimited_javascript_token1 = 35,
  aux_sym__un_delimited_javascript_line_token1 = 36,
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
  sym__delimited_javascript = 60,
  sym__un_delimited_javascript = 61,
  sym__un_delimited_javascript_line = 62,
  sym__single_line_buf_code = 63,
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
  [aux_sym__delimited_javascript_token1] = "javascript",
  [aux_sym__un_delimited_javascript_line_token1] = "javascript",
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
  [sym__delimited_javascript] = "_delimited_javascript",
  [sym__un_delimited_javascript] = "_un_delimited_javascript",
  [sym__un_delimited_javascript_line] = "_un_delimited_javascript_line",
  [sym__single_line_buf_code] = "_single_line_buf_code",
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
  [aux_sym__delimited_javascript_token1] = aux_sym__attribute_token3,
  [aux_sym__un_delimited_javascript_line_token1] = aux_sym__attribute_token3,
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
  [sym__delimited_javascript] = sym__delimited_javascript,
  [sym__un_delimited_javascript] = sym__un_delimited_javascript,
  [sym__un_delimited_javascript_line] = sym__un_delimited_javascript_line,
  [sym__single_line_buf_code] = sym__single_line_buf_code,
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
  [aux_sym__delimited_javascript_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__un_delimited_javascript_line_token1] = {
    .visible = true,
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
  [sym__delimited_javascript] = {
    .visible = false,
    .named = true,
  },
  [sym__un_delimited_javascript] = {
    .visible = false,
    .named = true,
  },
  [sym__un_delimited_javascript_line] = {
    .visible = false,
    .named = true,
  },
  [sym__single_line_buf_code] = {
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
    [3] = sym_children,
  },
  [3] = {
    [1] = alias_sym_attribute_value,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
      if (eof) ADVANCE(53);
      if (lookahead == '"') ADVANCE(131);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '\'') ADVANCE(128);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '[') ADVANCE(49);
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'h') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(30);
      if (lookahead == 'x') ADVANCE(28);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '|') ADVANCE(60);
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
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0) ADVANCE(135);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(149);
      if (lookahead != 0) ADVANCE(150);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(148);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == ' ') SKIP(6)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(137);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(131);
      if (lookahead == '\'') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(132);
      if (lookahead != 0) ADVANCE(133);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '|') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead != 0) ADVANCE(130);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == ')') ADVANCE(78);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 12:
      if (lookahead == ')') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(85);
      END_STATE();
    case 14:
      if (lookahead == ']') ADVANCE(125);
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
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(61);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(64);
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
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(57);
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
      if (lookahead == 's') ADVANCE(66);
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
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 41:
      if (lookahead == 'y') ADVANCE(32);
      END_STATE();
    case 42:
      if (lookahead == '{') ADVANCE(145);
      END_STATE();
    case 43:
      if (lookahead == '}') ADVANCE(146);
      END_STATE();
    case 44:
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 45:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(84);
      END_STATE();
    case 46:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(121);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 47:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 48:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
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
      if (eof) ADVANCE(53);
      if (lookahead == ' ') SKIP(51)
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == 'd') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'u') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 52:
      if (eof) ADVANCE(53);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(103);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(101);
      if (lookahead == '|') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_doctype);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_strict);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(121);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym__attribute_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__attribute_token2);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__attribute_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(81);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__attribute_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__attribute_token3);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(114);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(109);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(99);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(100);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(87);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(90);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(92);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(67);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(68);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(108);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(110);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(106);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(121);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_js_attribute_name_token1);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_js_attribute_name_token2);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_js_attribute_name_token3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(133);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(136);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == 'd') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'u') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(137);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == 'f') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__delimited_javascript_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__delimited_javascript_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__un_delimited_javascript_line_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(150);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__un_delimited_javascript_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_unbuffered_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(153);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 52},
  [2] = {.lex_state = 52},
  [3] = {.lex_state = 52, .external_lex_state = 2},
  [4] = {.lex_state = 52, .external_lex_state = 2},
  [5] = {.lex_state = 52, .external_lex_state = 2},
  [6] = {.lex_state = 52},
  [7] = {.lex_state = 52, .external_lex_state = 3},
  [8] = {.lex_state = 52, .external_lex_state = 3},
  [9] = {.lex_state = 52, .external_lex_state = 3},
  [10] = {.lex_state = 52, .external_lex_state = 3},
  [11] = {.lex_state = 52, .external_lex_state = 3},
  [12] = {.lex_state = 52, .external_lex_state = 2},
  [13] = {.lex_state = 51, .external_lex_state = 2},
  [14] = {.lex_state = 51, .external_lex_state = 2},
  [15] = {.lex_state = 51, .external_lex_state = 2},
  [16] = {.lex_state = 51, .external_lex_state = 2},
  [17] = {.lex_state = 52, .external_lex_state = 2},
  [18] = {.lex_state = 52, .external_lex_state = 2},
  [19] = {.lex_state = 51, .external_lex_state = 2},
  [20] = {.lex_state = 52, .external_lex_state = 2},
  [21] = {.lex_state = 52, .external_lex_state = 2},
  [22] = {.lex_state = 52, .external_lex_state = 2},
  [23] = {.lex_state = 51, .external_lex_state = 2},
  [24] = {.lex_state = 52, .external_lex_state = 2},
  [25] = {.lex_state = 52, .external_lex_state = 2},
  [26] = {.lex_state = 52, .external_lex_state = 2},
  [27] = {.lex_state = 52, .external_lex_state = 2},
  [28] = {.lex_state = 52},
  [29] = {.lex_state = 52},
  [30] = {.lex_state = 52, .external_lex_state = 4},
  [31] = {.lex_state = 52, .external_lex_state = 4},
  [32] = {.lex_state = 52, .external_lex_state = 4},
  [33] = {.lex_state = 52, .external_lex_state = 4},
  [34] = {.lex_state = 52, .external_lex_state = 2},
  [35] = {.lex_state = 52, .external_lex_state = 2},
  [36] = {.lex_state = 52, .external_lex_state = 2},
  [37] = {.lex_state = 52},
  [38] = {.lex_state = 52, .external_lex_state = 2},
  [39] = {.lex_state = 52, .external_lex_state = 4},
  [40] = {.lex_state = 52, .external_lex_state = 2},
  [41] = {.lex_state = 52, .external_lex_state = 2},
  [42] = {.lex_state = 52, .external_lex_state = 2},
  [43] = {.lex_state = 52, .external_lex_state = 4},
  [44] = {.lex_state = 52, .external_lex_state = 4},
  [45] = {.lex_state = 52},
  [46] = {.lex_state = 52},
  [47] = {.lex_state = 52},
  [48] = {.lex_state = 52},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 52},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 52},
  [53] = {.lex_state = 52},
  [54] = {.lex_state = 52},
  [55] = {.lex_state = 52},
  [56] = {.lex_state = 52},
  [57] = {.lex_state = 52},
  [58] = {.lex_state = 52},
  [59] = {.lex_state = 52},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 52},
  [62] = {.lex_state = 52},
  [63] = {.lex_state = 52},
  [64] = {.lex_state = 4, .external_lex_state = 5},
  [65] = {.lex_state = 4, .external_lex_state = 5},
  [66] = {.lex_state = 4, .external_lex_state = 5},
  [67] = {.lex_state = 4, .external_lex_state = 5},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 4, .external_lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5, .external_lex_state = 5},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 5, .external_lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5, .external_lex_state = 5},
  [82] = {.lex_state = 5, .external_lex_state = 5},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 1, .external_lex_state = 2},
  [85] = {.lex_state = 11},
  [86] = {.lex_state = 1, .external_lex_state = 2},
  [87] = {.lex_state = 1, .external_lex_state = 2},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 1, .external_lex_state = 5},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 1, .external_lex_state = 5},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 1, .external_lex_state = 5},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 1, .external_lex_state = 5},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 5, .external_lex_state = 5},
  [102] = {.lex_state = 1, .external_lex_state = 5},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1, .external_lex_state = 5},
  [105] = {.lex_state = 1, .external_lex_state = 5},
  [106] = {.lex_state = 5, .external_lex_state = 5},
  [107] = {.lex_state = 9},
  [108] = {.lex_state = 1, .external_lex_state = 5},
  [109] = {.lex_state = 1, .external_lex_state = 5},
  [110] = {.lex_state = 1, .external_lex_state = 5},
  [111] = {.lex_state = 5, .external_lex_state = 5},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 1, .external_lex_state = 2},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 1, .external_lex_state = 5},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 10},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 6, .external_lex_state = 5},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 0, .external_lex_state = 4},
  [145] = {.lex_state = 11},
  [146] = {.lex_state = 45},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0, .external_lex_state = 5},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0, .external_lex_state = 5},
  [154] = {.lex_state = 153},
  [155] = {.lex_state = 45},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0, .external_lex_state = 5},
  [158] = {.lex_state = 0, .external_lex_state = 4},
  [159] = {.lex_state = 0, .external_lex_state = 5},
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
    [sym_source_file] = STATE(156),
    [sym_doctype] = STATE(6),
    [sym_conditional] = STATE(6),
    [sym_tag] = STATE(6),
    [sym_comment] = STATE(6),
    [sym_unbuffered_code] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
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
  [0] = 10,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_doctype,
    ACTIONS(29), 1,
      anon_sym_elseif,
    ACTIONS(32), 1,
      anon_sym_else,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(38), 1,
      sym_tag_name,
    ACTIONS(44), 1,
      anon_sym_DASH,
    ACTIONS(26), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(41), 2,
      sym_class,
      sym_id,
    STATE(2), 6,
      sym_doctype,
      sym_conditional,
      sym_tag,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_source_file_repeat1,
  [38] = 7,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(53), 1,
      sym_tag_name,
    ACTIONS(57), 1,
      sym__dedent,
    ACTIONS(55), 2,
      sym_class,
      sym_id,
    ACTIONS(47), 4,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
    ACTIONS(49), 4,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
    STATE(4), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [70] = 6,
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
    ACTIONS(59), 5,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [100] = 7,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(53), 1,
      sym_tag_name,
    ACTIONS(72), 1,
      sym__dedent,
    ACTIONS(55), 2,
      sym_class,
      sym_id,
    ACTIONS(47), 4,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
    ACTIONS(49), 4,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
    STATE(4), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [132] = 10,
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
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(17), 2,
      sym_class,
      sym_id,
    STATE(2), 6,
      sym_doctype,
      sym_conditional,
      sym_tag,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_source_file_repeat1,
  [170] = 4,
    ACTIONS(80), 1,
      sym__indent,
    STATE(26), 1,
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
    STATE(36), 1,
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
    STATE(34), 1,
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
    STATE(21), 1,
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
    STATE(22), 1,
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
  [290] = 5,
    ACTIONS(53), 1,
      sym_tag_name,
    ACTIONS(55), 2,
      sym_class,
      sym_id,
    STATE(18), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(100), 4,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
    ACTIONS(98), 5,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [315] = 4,
    ACTIONS(106), 1,
      sym__comment_content,
    STATE(13), 1,
      aux_sym_comment_repeat1,
    ACTIONS(102), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(104), 10,
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
      ts_builtin_sym_end,
    ACTIONS(113), 1,
      sym__comment_content,
    ACTIONS(115), 1,
      sym__dedent,
    STATE(13), 1,
      aux_sym_comment_repeat1,
    ACTIONS(111), 10,
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
    ACTIONS(113), 1,
      sym__comment_content,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 1,
      sym__dedent,
    STATE(14), 1,
      aux_sym_comment_repeat1,
    ACTIONS(119), 10,
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
  [388] = 5,
    ACTIONS(113), 1,
      sym__comment_content,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 1,
      sym__dedent,
    STATE(13), 1,
      aux_sym_comment_repeat1,
    ACTIONS(119), 10,
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
  [413] = 5,
    ACTIONS(53), 1,
      sym_tag_name,
    ACTIONS(55), 2,
      sym_class,
      sym_id,
    STATE(12), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(125), 4,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
    ACTIONS(123), 5,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [438] = 5,
    ACTIONS(131), 1,
      sym_tag_name,
    ACTIONS(134), 2,
      sym_class,
      sym_id,
    STATE(18), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(129), 4,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
    ACTIONS(127), 5,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [463] = 5,
    ACTIONS(113), 1,
      sym__comment_content,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(141), 1,
      sym__dedent,
    STATE(16), 1,
      aux_sym_comment_repeat1,
    ACTIONS(139), 10,
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
  [488] = 2,
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
  [506] = 2,
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
  [524] = 2,
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
  [542] = 2,
    ACTIONS(102), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(104), 11,
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
  [560] = 2,
    ACTIONS(145), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(143), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [578] = 2,
    ACTIONS(149), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(147), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [596] = 2,
    ACTIONS(153), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(151), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [614] = 2,
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
  [632] = 3,
    STATE(29), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(157), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(155), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [652] = 5,
    ACTIONS(159), 1,
      sym_tag_name,
    ACTIONS(162), 2,
      sym_class,
      sym_id,
    STATE(29), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(127), 4,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
    ACTIONS(129), 4,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
  [676] = 4,
    ACTIONS(165), 1,
      sym__indent,
    STATE(52), 1,
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
  [698] = 4,
    ACTIONS(165), 1,
      sym__indent,
    STATE(48), 1,
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
  [720] = 4,
    ACTIONS(165), 1,
      sym__indent,
    STATE(59), 1,
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
  [742] = 4,
    ACTIONS(165), 1,
      sym__indent,
    STATE(53), 1,
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
  [764] = 2,
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
  [782] = 2,
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
  [800] = 2,
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
  [818] = 3,
    STATE(29), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(169), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(167), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [838] = 2,
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
  [856] = 4,
    ACTIONS(165), 1,
      sym__indent,
    STATE(45), 1,
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
  [878] = 2,
    ACTIONS(173), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(171), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [896] = 2,
    ACTIONS(177), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(175), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [914] = 3,
    ACTIONS(183), 1,
      sym__dedent,
    ACTIONS(181), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(179), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [933] = 3,
    ACTIONS(189), 1,
      sym__indent,
    ACTIONS(187), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(185), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [952] = 3,
    ACTIONS(191), 1,
      sym__indent,
    ACTIONS(139), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(137), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [971] = 2,
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
  [987] = 2,
    ACTIONS(195), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(193), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1003] = 2,
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
  [1019] = 2,
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
  [1035] = 8,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    ACTIONS(199), 1,
      aux_sym__attribute_token1,
    STATE(51), 1,
      aux_sym_attributes_repeat1,
    STATE(71), 1,
      sym_attribute_name,
    STATE(73), 1,
      sym_js_attribute_name,
    STATE(126), 1,
      sym_attribute,
    STATE(113), 2,
      sym__attribute,
      sym__js_attribute,
    ACTIONS(201), 3,
      aux_sym_js_attribute_name_token1,
      aux_sym_js_attribute_name_token2,
      aux_sym_js_attribute_name_token3,
  [1063] = 2,
    ACTIONS(119), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(117), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1079] = 8,
    ACTIONS(199), 1,
      aux_sym__attribute_token1,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_attributes_repeat1,
    STATE(71), 1,
      sym_attribute_name,
    STATE(73), 1,
      sym_js_attribute_name,
    STATE(118), 1,
      sym_attribute,
    STATE(113), 2,
      sym__attribute,
      sym__js_attribute,
    ACTIONS(201), 3,
      aux_sym_js_attribute_name_token1,
      aux_sym_js_attribute_name_token2,
      aux_sym_js_attribute_name_token3,
  [1107] = 2,
    ACTIONS(153), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(151), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1123] = 2,
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
  [1139] = 2,
    ACTIONS(207), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(205), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1155] = 2,
    ACTIONS(211), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(209), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1171] = 2,
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
  [1187] = 2,
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
  [1203] = 2,
    ACTIONS(177), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(175), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1219] = 2,
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
  [1235] = 8,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    ACTIONS(215), 1,
      aux_sym__attribute_token1,
    STATE(60), 1,
      aux_sym_attributes_repeat1,
    STATE(71), 1,
      sym_attribute_name,
    STATE(73), 1,
      sym_js_attribute_name,
    STATE(138), 1,
      sym_attribute,
    STATE(113), 2,
      sym__attribute,
      sym__js_attribute,
    ACTIONS(218), 3,
      aux_sym_js_attribute_name_token1,
      aux_sym_js_attribute_name_token2,
      aux_sym_js_attribute_name_token3,
  [1263] = 2,
    ACTIONS(149), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(147), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1279] = 2,
    ACTIONS(111), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(109), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1295] = 2,
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
  [1311] = 9,
    ACTIONS(221), 1,
      anon_sym_COLON,
    ACTIONS(223), 1,
      anon_sym_,
    ACTIONS(225), 1,
      anon_sym_DOT,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      sym__newline,
    STATE(38), 1,
      sym__content_after_dot,
    STATE(67), 1,
      aux_sym_tag_repeat1,
    STATE(76), 1,
      sym_attributes,
    ACTIONS(229), 2,
      sym_class,
      sym_id,
  [1340] = 9,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(233), 1,
      anon_sym_COLON,
    ACTIONS(235), 1,
      anon_sym_,
    ACTIONS(237), 1,
      anon_sym_DOT,
    ACTIONS(241), 1,
      sym__newline,
    STATE(63), 1,
      sym__content_after_dot,
    STATE(66), 1,
      aux_sym_tag_repeat1,
    STATE(78), 1,
      sym_attributes,
    ACTIONS(239), 2,
      sym_class,
      sym_id,
  [1369] = 9,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_DOT,
    ACTIONS(243), 1,
      anon_sym_COLON,
    ACTIONS(245), 1,
      anon_sym_,
    ACTIONS(249), 1,
      sym__newline,
    STATE(57), 1,
      sym__content_after_dot,
    STATE(70), 1,
      aux_sym_tag_repeat1,
    STATE(81), 1,
      sym_attributes,
    ACTIONS(247), 2,
      sym_class,
      sym_id,
  [1398] = 9,
    ACTIONS(225), 1,
      anon_sym_DOT,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      anon_sym_COLON,
    ACTIONS(253), 1,
      anon_sym_,
    ACTIONS(255), 1,
      sym__newline,
    STATE(35), 1,
      sym__content_after_dot,
    STATE(70), 1,
      aux_sym_tag_repeat1,
    STATE(82), 1,
      sym_attributes,
    ACTIONS(247), 2,
      sym_class,
      sym_id,
  [1427] = 3,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(55), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(5), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [1442] = 3,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(55), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(3), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [1457] = 4,
    STATE(70), 1,
      aux_sym_tag_repeat1,
    ACTIONS(259), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(261), 2,
      sym_class,
      sym_id,
    ACTIONS(257), 3,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_LPAREN,
  [1474] = 5,
    ACTIONS(264), 1,
      anon_sym_,
    ACTIONS(266), 1,
      anon_sym_DOT,
    ACTIONS(270), 1,
      anon_sym_EQ,
    STATE(72), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(268), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1491] = 5,
    ACTIONS(266), 1,
      anon_sym_DOT,
    ACTIONS(272), 1,
      anon_sym_,
    ACTIONS(276), 1,
      anon_sym_EQ,
    STATE(75), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(274), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1508] = 5,
    ACTIONS(266), 1,
      anon_sym_DOT,
    ACTIONS(278), 1,
      anon_sym_,
    ACTIONS(282), 1,
      anon_sym_EQ,
    STATE(74), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(280), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1525] = 5,
    ACTIONS(266), 1,
      anon_sym_DOT,
    ACTIONS(284), 1,
      anon_sym_,
    ACTIONS(288), 1,
      anon_sym_EQ,
    STATE(75), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(286), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1542] = 4,
    ACTIONS(290), 1,
      anon_sym_,
    ACTIONS(292), 1,
      anon_sym_DOT,
    STATE(75), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(295), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1557] = 5,
    ACTIONS(225), 1,
      anon_sym_DOT,
    ACTIONS(251), 1,
      anon_sym_COLON,
    ACTIONS(253), 1,
      anon_sym_,
    ACTIONS(255), 1,
      sym__newline,
    STATE(35), 1,
      sym__content_after_dot,
  [1573] = 2,
    STATE(28), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(17), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1583] = 5,
    ACTIONS(237), 1,
      anon_sym_DOT,
    ACTIONS(243), 1,
      anon_sym_COLON,
    ACTIONS(245), 1,
      anon_sym_,
    ACTIONS(249), 1,
      sym__newline,
    STATE(57), 1,
      sym__content_after_dot,
  [1599] = 2,
    ACTIONS(297), 1,
      anon_sym_,
    ACTIONS(299), 4,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1609] = 2,
    ACTIONS(301), 1,
      anon_sym_,
    ACTIONS(303), 4,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1619] = 5,
    ACTIONS(237), 1,
      anon_sym_DOT,
    ACTIONS(305), 1,
      anon_sym_COLON,
    ACTIONS(307), 1,
      anon_sym_,
    ACTIONS(309), 1,
      sym__newline,
    STATE(47), 1,
      sym__content_after_dot,
  [1635] = 5,
    ACTIONS(225), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      anon_sym_COLON,
    ACTIONS(313), 1,
      anon_sym_,
    ACTIONS(315), 1,
      sym__newline,
    STATE(27), 1,
      sym__content_after_dot,
  [1651] = 2,
    STATE(37), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(17), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1661] = 5,
    ACTIONS(317), 1,
      sym_content,
    ACTIONS(320), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(323), 1,
      sym__dedent,
    STATE(84), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(91), 1,
      aux_sym__content_or_javascript,
  [1677] = 1,
    ACTIONS(213), 5,
      anon_sym_RPAREN,
      aux_sym__attribute_token1,
      aux_sym_js_attribute_name_token1,
      aux_sym_js_attribute_name_token2,
      aux_sym_js_attribute_name_token3,
  [1685] = 5,
    ACTIONS(325), 1,
      sym_content,
    ACTIONS(327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(329), 1,
      sym__dedent,
    STATE(84), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(91), 1,
      aux_sym__content_or_javascript,
  [1701] = 5,
    ACTIONS(325), 1,
      sym_content,
    ACTIONS(327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(331), 1,
      sym__dedent,
    STATE(84), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(91), 1,
      aux_sym__content_or_javascript,
  [1717] = 2,
    ACTIONS(333), 1,
      anon_sym_,
    ACTIONS(335), 4,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1727] = 4,
    ACTIONS(327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(337), 1,
      sym_content,
    ACTIONS(339), 1,
      sym__newline,
    STATE(104), 1,
      aux_sym__content_or_javascript,
  [1740] = 2,
    STATE(47), 1,
      sym_tag,
    ACTIONS(17), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1749] = 4,
    ACTIONS(327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(337), 1,
      sym_content,
    ACTIONS(341), 1,
      sym__newline,
    STATE(104), 1,
      aux_sym__content_or_javascript,
  [1762] = 4,
    ACTIONS(325), 1,
      sym_content,
    ACTIONS(327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(86), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(91), 1,
      aux_sym__content_or_javascript,
  [1775] = 2,
    STATE(35), 1,
      sym_tag,
    ACTIONS(55), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1784] = 4,
    ACTIONS(327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(337), 1,
      sym_content,
    ACTIONS(343), 1,
      sym__newline,
    STATE(104), 1,
      aux_sym__content_or_javascript,
  [1797] = 2,
    STATE(57), 1,
      sym_tag,
    ACTIONS(17), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1806] = 2,
    STATE(56), 1,
      sym_tag,
    ACTIONS(17), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1815] = 4,
    ACTIONS(345), 1,
      aux_sym__attribute_token2,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(349), 1,
      anon_sym_DQUOTE,
    STATE(125), 1,
      sym_quoted_attribute_value,
  [1828] = 3,
    ACTIONS(351), 1,
      aux_sym__un_delimited_javascript_line_token1,
    STATE(42), 1,
      sym__single_line_buf_code,
    STATE(17), 2,
      sym__un_delimited_javascript,
      sym__un_delimited_javascript_line,
  [1839] = 4,
    ACTIONS(309), 1,
      sym__newline,
    ACTIONS(327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(337), 1,
      sym_content,
    STATE(104), 1,
      aux_sym__content_or_javascript,
  [1852] = 4,
    ACTIONS(347), 1,
      anon_sym_SQUOTE,
    ACTIONS(349), 1,
      anon_sym_DQUOTE,
    ACTIONS(353), 1,
      aux_sym__attribute_token2,
    STATE(130), 1,
      sym_quoted_attribute_value,
  [1865] = 2,
    ACTIONS(355), 2,
      anon_sym_COLON,
      anon_sym_DOT,
    ACTIONS(357), 2,
      sym__newline,
      anon_sym_,
  [1874] = 4,
    ACTIONS(327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(337), 1,
      sym_content,
    ACTIONS(359), 1,
      sym__newline,
    STATE(104), 1,
      aux_sym__content_or_javascript,
  [1887] = 4,
    ACTIONS(325), 1,
      sym_content,
    ACTIONS(327), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(87), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(91), 1,
      aux_sym__content_or_javascript,
  [1900] = 4,
    ACTIONS(361), 1,
      sym_content,
    ACTIONS(364), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(367), 1,
      sym__newline,
    STATE(104), 1,
      aux_sym__content_or_javascript,
  [1913] = 4,
    ACTIONS(327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(369), 1,
      sym_content,
    ACTIONS(371), 1,
      sym__newline,
    STATE(108), 1,
      aux_sym__content_or_javascript,
  [1926] = 2,
    ACTIONS(373), 2,
      anon_sym_COLON,
      anon_sym_DOT,
    ACTIONS(375), 2,
      sym__newline,
      anon_sym_,
  [1935] = 2,
    STATE(20), 1,
      sym_tag,
    ACTIONS(55), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1944] = 4,
    ACTIONS(327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(337), 1,
      sym_content,
    ACTIONS(377), 1,
      sym__newline,
    STATE(104), 1,
      aux_sym__content_or_javascript,
  [1957] = 4,
    ACTIONS(315), 1,
      sym__newline,
    ACTIONS(327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(337), 1,
      sym_content,
    STATE(104), 1,
      aux_sym__content_or_javascript,
  [1970] = 4,
    ACTIONS(327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(337), 1,
      sym_content,
    ACTIONS(379), 1,
      sym__newline,
    STATE(104), 1,
      aux_sym__content_or_javascript,
  [1983] = 2,
    ACTIONS(381), 2,
      anon_sym_COLON,
      anon_sym_DOT,
    ACTIONS(383), 2,
      sym__newline,
      anon_sym_,
  [1992] = 2,
    STATE(27), 1,
      sym_tag,
    ACTIONS(55), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2001] = 2,
    ACTIONS(385), 1,
      anon_sym_,
    ACTIONS(387), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2009] = 2,
    ACTIONS(389), 1,
      anon_sym_,
    ACTIONS(391), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2017] = 3,
    ACTIONS(327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(393), 1,
      sym_content,
    STATE(102), 1,
      aux_sym__content_or_javascript,
  [2027] = 2,
    ACTIONS(395), 1,
      anon_sym_,
    ACTIONS(397), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2035] = 2,
    ACTIONS(399), 1,
      anon_sym_,
    ACTIONS(401), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2043] = 3,
    ACTIONS(403), 1,
      anon_sym_,
    ACTIONS(405), 1,
      anon_sym_COMMA,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
  [2053] = 3,
    ACTIONS(327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(409), 1,
      sym_content,
    STATE(94), 1,
      aux_sym__content_or_javascript,
  [2063] = 2,
    ACTIONS(411), 1,
      anon_sym_,
    ACTIONS(413), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2071] = 2,
    ACTIONS(415), 1,
      anon_sym_,
    ACTIONS(417), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2079] = 3,
    ACTIONS(419), 1,
      anon_sym_SQUOTE,
    ACTIONS(421), 1,
      anon_sym_DQUOTE,
    STATE(135), 1,
      sym_quoted_javascript,
  [2089] = 3,
    ACTIONS(419), 1,
      anon_sym_SQUOTE,
    ACTIONS(421), 1,
      anon_sym_DQUOTE,
    STATE(116), 1,
      sym_quoted_javascript,
  [2099] = 2,
    ACTIONS(423), 1,
      anon_sym_,
    ACTIONS(425), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2107] = 2,
    ACTIONS(427), 1,
      anon_sym_,
    ACTIONS(429), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2115] = 3,
    ACTIONS(403), 1,
      anon_sym_,
    ACTIONS(405), 1,
      anon_sym_COMMA,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
  [2125] = 1,
    ACTIONS(433), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [2131] = 3,
    ACTIONS(327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(435), 1,
      sym_content,
    STATE(89), 1,
      aux_sym__content_or_javascript,
  [2141] = 2,
    ACTIONS(437), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(323), 2,
      sym__dedent,
      sym_content,
  [2149] = 2,
    ACTIONS(439), 1,
      anon_sym_,
    ACTIONS(441), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2157] = 3,
    ACTIONS(327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(443), 1,
      sym_content,
    STATE(109), 1,
      aux_sym__content_or_javascript,
  [2167] = 2,
    ACTIONS(445), 1,
      aux_sym__un_delimited_javascript_line_token1,
    STATE(77), 2,
      sym__un_delimited_javascript,
      sym__un_delimited_javascript_line,
  [2175] = 3,
    ACTIONS(327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(447), 1,
      sym_content,
    STATE(99), 1,
      aux_sym__content_or_javascript,
  [2185] = 2,
    ACTIONS(451), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(449), 2,
      sym__newline,
      sym_content,
  [2193] = 2,
    ACTIONS(453), 1,
      anon_sym_,
    ACTIONS(455), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2201] = 3,
    ACTIONS(327), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(457), 1,
      sym_content,
    STATE(110), 1,
      aux_sym__content_or_javascript,
  [2211] = 2,
    ACTIONS(459), 1,
      anon_sym_SQUOTE,
    ACTIONS(461), 1,
      aux_sym_quoted_javascript_token1,
  [2218] = 2,
    ACTIONS(403), 1,
      anon_sym_,
    ACTIONS(405), 1,
      anon_sym_COMMA,
  [2225] = 2,
    ACTIONS(463), 1,
      anon_sym_SQUOTE,
    ACTIONS(465), 1,
      aux_sym_quoted_javascript_token1,
  [2232] = 2,
    ACTIONS(463), 1,
      anon_sym_DQUOTE,
    ACTIONS(467), 1,
      aux_sym_quoted_javascript_token2,
  [2239] = 2,
    ACTIONS(459), 1,
      anon_sym_DQUOTE,
    ACTIONS(469), 1,
      aux_sym_quoted_javascript_token2,
  [2246] = 2,
    ACTIONS(471), 1,
      sym__comment_content,
    ACTIONS(473), 1,
      sym__newline,
  [2253] = 2,
    ACTIONS(475), 1,
      aux_sym__delimited_javascript_token1,
    STATE(152), 1,
      sym__delimited_javascript,
  [2260] = 1,
    ACTIONS(477), 1,
      sym__indent,
  [2264] = 1,
    ACTIONS(479), 1,
      aux_sym__attribute_token1,
  [2268] = 1,
    ACTIONS(481), 1,
      aux_sym__attribute_token3,
  [2272] = 1,
    ACTIONS(483), 1,
      anon_sym_DQUOTE,
  [2276] = 1,
    ACTIONS(483), 1,
      anon_sym_SQUOTE,
  [2280] = 1,
    ACTIONS(485), 1,
      anon_sym_DQUOTE,
  [2284] = 1,
    ACTIONS(485), 1,
      anon_sym_SQUOTE,
  [2288] = 1,
    ACTIONS(487), 1,
      sym__newline,
  [2292] = 1,
    ACTIONS(489), 1,
      anon_sym_RBRACE_RBRACE,
  [2296] = 1,
    ACTIONS(491), 1,
      sym__newline,
  [2300] = 1,
    ACTIONS(493), 1,
      aux_sym_unbuffered_code_token1,
  [2304] = 1,
    ACTIONS(495), 1,
      aux_sym__attribute_token3,
  [2308] = 1,
    ACTIONS(497), 1,
      ts_builtin_sym_end,
  [2312] = 1,
    ACTIONS(499), 1,
      sym__newline,
  [2316] = 1,
    ACTIONS(501), 1,
      sym__indent,
  [2320] = 1,
    ACTIONS(503), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 100,
  [SMALL_STATE(6)] = 132,
  [SMALL_STATE(7)] = 170,
  [SMALL_STATE(8)] = 194,
  [SMALL_STATE(9)] = 218,
  [SMALL_STATE(10)] = 242,
  [SMALL_STATE(11)] = 266,
  [SMALL_STATE(12)] = 290,
  [SMALL_STATE(13)] = 315,
  [SMALL_STATE(14)] = 338,
  [SMALL_STATE(15)] = 363,
  [SMALL_STATE(16)] = 388,
  [SMALL_STATE(17)] = 413,
  [SMALL_STATE(18)] = 438,
  [SMALL_STATE(19)] = 463,
  [SMALL_STATE(20)] = 488,
  [SMALL_STATE(21)] = 506,
  [SMALL_STATE(22)] = 524,
  [SMALL_STATE(23)] = 542,
  [SMALL_STATE(24)] = 560,
  [SMALL_STATE(25)] = 578,
  [SMALL_STATE(26)] = 596,
  [SMALL_STATE(27)] = 614,
  [SMALL_STATE(28)] = 632,
  [SMALL_STATE(29)] = 652,
  [SMALL_STATE(30)] = 676,
  [SMALL_STATE(31)] = 698,
  [SMALL_STATE(32)] = 720,
  [SMALL_STATE(33)] = 742,
  [SMALL_STATE(34)] = 764,
  [SMALL_STATE(35)] = 782,
  [SMALL_STATE(36)] = 800,
  [SMALL_STATE(37)] = 818,
  [SMALL_STATE(38)] = 838,
  [SMALL_STATE(39)] = 856,
  [SMALL_STATE(40)] = 878,
  [SMALL_STATE(41)] = 896,
  [SMALL_STATE(42)] = 914,
  [SMALL_STATE(43)] = 933,
  [SMALL_STATE(44)] = 952,
  [SMALL_STATE(45)] = 971,
  [SMALL_STATE(46)] = 987,
  [SMALL_STATE(47)] = 1003,
  [SMALL_STATE(48)] = 1019,
  [SMALL_STATE(49)] = 1035,
  [SMALL_STATE(50)] = 1063,
  [SMALL_STATE(51)] = 1079,
  [SMALL_STATE(52)] = 1107,
  [SMALL_STATE(53)] = 1123,
  [SMALL_STATE(54)] = 1139,
  [SMALL_STATE(55)] = 1155,
  [SMALL_STATE(56)] = 1171,
  [SMALL_STATE(57)] = 1187,
  [SMALL_STATE(58)] = 1203,
  [SMALL_STATE(59)] = 1219,
  [SMALL_STATE(60)] = 1235,
  [SMALL_STATE(61)] = 1263,
  [SMALL_STATE(62)] = 1279,
  [SMALL_STATE(63)] = 1295,
  [SMALL_STATE(64)] = 1311,
  [SMALL_STATE(65)] = 1340,
  [SMALL_STATE(66)] = 1369,
  [SMALL_STATE(67)] = 1398,
  [SMALL_STATE(68)] = 1427,
  [SMALL_STATE(69)] = 1442,
  [SMALL_STATE(70)] = 1457,
  [SMALL_STATE(71)] = 1474,
  [SMALL_STATE(72)] = 1491,
  [SMALL_STATE(73)] = 1508,
  [SMALL_STATE(74)] = 1525,
  [SMALL_STATE(75)] = 1542,
  [SMALL_STATE(76)] = 1557,
  [SMALL_STATE(77)] = 1573,
  [SMALL_STATE(78)] = 1583,
  [SMALL_STATE(79)] = 1599,
  [SMALL_STATE(80)] = 1609,
  [SMALL_STATE(81)] = 1619,
  [SMALL_STATE(82)] = 1635,
  [SMALL_STATE(83)] = 1651,
  [SMALL_STATE(84)] = 1661,
  [SMALL_STATE(85)] = 1677,
  [SMALL_STATE(86)] = 1685,
  [SMALL_STATE(87)] = 1701,
  [SMALL_STATE(88)] = 1717,
  [SMALL_STATE(89)] = 1727,
  [SMALL_STATE(90)] = 1740,
  [SMALL_STATE(91)] = 1749,
  [SMALL_STATE(92)] = 1762,
  [SMALL_STATE(93)] = 1775,
  [SMALL_STATE(94)] = 1784,
  [SMALL_STATE(95)] = 1797,
  [SMALL_STATE(96)] = 1806,
  [SMALL_STATE(97)] = 1815,
  [SMALL_STATE(98)] = 1828,
  [SMALL_STATE(99)] = 1839,
  [SMALL_STATE(100)] = 1852,
  [SMALL_STATE(101)] = 1865,
  [SMALL_STATE(102)] = 1874,
  [SMALL_STATE(103)] = 1887,
  [SMALL_STATE(104)] = 1900,
  [SMALL_STATE(105)] = 1913,
  [SMALL_STATE(106)] = 1926,
  [SMALL_STATE(107)] = 1935,
  [SMALL_STATE(108)] = 1944,
  [SMALL_STATE(109)] = 1957,
  [SMALL_STATE(110)] = 1970,
  [SMALL_STATE(111)] = 1983,
  [SMALL_STATE(112)] = 1992,
  [SMALL_STATE(113)] = 2001,
  [SMALL_STATE(114)] = 2009,
  [SMALL_STATE(115)] = 2017,
  [SMALL_STATE(116)] = 2027,
  [SMALL_STATE(117)] = 2035,
  [SMALL_STATE(118)] = 2043,
  [SMALL_STATE(119)] = 2053,
  [SMALL_STATE(120)] = 2063,
  [SMALL_STATE(121)] = 2071,
  [SMALL_STATE(122)] = 2079,
  [SMALL_STATE(123)] = 2089,
  [SMALL_STATE(124)] = 2099,
  [SMALL_STATE(125)] = 2107,
  [SMALL_STATE(126)] = 2115,
  [SMALL_STATE(127)] = 2125,
  [SMALL_STATE(128)] = 2131,
  [SMALL_STATE(129)] = 2141,
  [SMALL_STATE(130)] = 2149,
  [SMALL_STATE(131)] = 2157,
  [SMALL_STATE(132)] = 2167,
  [SMALL_STATE(133)] = 2175,
  [SMALL_STATE(134)] = 2185,
  [SMALL_STATE(135)] = 2193,
  [SMALL_STATE(136)] = 2201,
  [SMALL_STATE(137)] = 2211,
  [SMALL_STATE(138)] = 2218,
  [SMALL_STATE(139)] = 2225,
  [SMALL_STATE(140)] = 2232,
  [SMALL_STATE(141)] = 2239,
  [SMALL_STATE(142)] = 2246,
  [SMALL_STATE(143)] = 2253,
  [SMALL_STATE(144)] = 2260,
  [SMALL_STATE(145)] = 2264,
  [SMALL_STATE(146)] = 2268,
  [SMALL_STATE(147)] = 2272,
  [SMALL_STATE(148)] = 2276,
  [SMALL_STATE(149)] = 2280,
  [SMALL_STATE(150)] = 2284,
  [SMALL_STATE(151)] = 2288,
  [SMALL_STATE(152)] = 2292,
  [SMALL_STATE(153)] = 2296,
  [SMALL_STATE(154)] = 2300,
  [SMALL_STATE(155)] = 2304,
  [SMALL_STATE(156)] = 2308,
  [SMALL_STATE(157)] = 2312,
  [SMALL_STATE(158)] = 2316,
  [SMALL_STATE(159)] = 2320,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(127),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(132),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(132),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(142),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(154),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(105),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(64),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(64),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(151),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 5),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 5),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(64),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(64),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_content, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_content, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 7),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 3),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(65),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(65),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_content, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_content, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 5, .production_id = 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 5, .production_id = 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 3),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 4),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 6),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 6),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(79),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(80),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(70),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 1),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 1),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 2),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 2),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 1),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 1),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 2),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2), SHIFT_REPEAT(145),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_name, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_attribute_name, 1),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_attribute_name, 1),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(91),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(143),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 1),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(104),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(143),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 5),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 5),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 4),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 4),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 2),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 3),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 3),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 3),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 3),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 4),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 4),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 3),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 3),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 3),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 3),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [497] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
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
