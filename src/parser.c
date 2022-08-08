#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 152
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 2
#define TOKEN_COUNT 36
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
  anon_sym_COLON = 6,
  anon_sym_ = 7,
  anon_sym_DOT = 8,
  anon_sym_LPAREN = 9,
  anon_sym_COMMA = 10,
  anon_sym_RPAREN = 11,
  aux_sym__attribute_token1 = 12,
  anon_sym_EQ = 13,
  anon_sym_SLASH_SLASH = 14,
  sym_tag_name = 15,
  sym_class = 16,
  sym_id = 17,
  aux_sym_js_attribute_name_token1 = 18,
  aux_sym_js_attribute_name_token2 = 19,
  aux_sym_js_attribute_name_token3 = 20,
  anon_sym_SQUOTE = 21,
  aux_sym_quoted_javascript_token1 = 22,
  anon_sym_DQUOTE = 23,
  aux_sym_quoted_javascript_token2 = 24,
  sym_content = 25,
  sym__comment_content = 26,
  anon_sym_LBRACE_LBRACE = 27,
  anon_sym_RBRACE_RBRACE = 28,
  sym_delimited_javascript = 29,
  sym__un_delimited_javascript_line = 30,
  anon_sym_DASH = 31,
  aux_sym_unbuffered_code_token1 = 32,
  sym__newline = 33,
  sym__indent = 34,
  sym__dedent = 35,
  sym_source_file = 36,
  sym_doctype = 37,
  sym_pipe_content = 38,
  sym_tag = 39,
  sym__content_after_dot = 40,
  sym_attributes = 41,
  sym_attribute = 42,
  sym__attribute = 43,
  sym__js_attribute = 44,
  sym_children = 45,
  sym__children_choice = 46,
  sym_comment = 47,
  sym_js_attribute_name = 48,
  sym_attribute_name = 49,
  sym_quoted_javascript = 50,
  sym_quoted_attribute_value = 51,
  aux_sym__content_or_javascript = 52,
  sym_un_delimited_javascript = 53,
  sym__single_line_buf_code = 54,
  sym_unbuffered_code = 55,
  aux_sym_source_file_repeat1 = 56,
  aux_sym_tag_repeat1 = 57,
  aux_sym__content_after_dot_repeat1 = 58,
  aux_sym_attributes_repeat1 = 59,
  aux_sym__attribute_repeat1 = 60,
  aux_sym_children_repeat1 = 61,
  aux_sym_comment_repeat1 = 62,
  aux_sym__single_line_buf_code_repeat1 = 63,
  alias_sym_attribute_modifier = 64,
  alias_sym_attribute_value = 65,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_doctype] = "doctype",
  [anon_sym_html] = "doctype_name",
  [anon_sym_strict] = "doctype_name",
  [anon_sym_xml] = "doctype_name",
  [anon_sym_PIPE] = "|",
  [anon_sym_COLON] = ":",
  [anon_sym_] = " ",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [aux_sym__attribute_token1] = "_attribute_token1",
  [anon_sym_EQ] = "=",
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
  [sym_delimited_javascript] = "delimited_javascript",
  [sym__un_delimited_javascript_line] = "_un_delimited_javascript_line",
  [anon_sym_DASH] = "-",
  [aux_sym_unbuffered_code_token1] = "unbuffered_code_token1",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_source_file] = "source_file",
  [sym_doctype] = "doctype",
  [sym_pipe_content] = "pipe_content",
  [sym_tag] = "tag",
  [sym__content_after_dot] = "_content_after_dot",
  [sym_attributes] = "attributes",
  [sym_attribute] = "attribute",
  [sym__attribute] = "_attribute",
  [sym__js_attribute] = "_js_attribute",
  [sym_children] = "children",
  [sym__children_choice] = "_children_choice",
  [sym_comment] = "comment",
  [sym_js_attribute_name] = "js_attribute_name",
  [sym_attribute_name] = "attribute_name",
  [sym_quoted_javascript] = "quoted_javascript",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [aux_sym__content_or_javascript] = "_content_or_javascript",
  [sym_un_delimited_javascript] = "un_delimited_javascript",
  [sym__single_line_buf_code] = "_single_line_buf_code",
  [sym_unbuffered_code] = "unbuffered_code",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_tag_repeat1] = "tag_repeat1",
  [aux_sym__content_after_dot_repeat1] = "_content_after_dot_repeat1",
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
  [aux_sym__attribute_repeat1] = "_attribute_repeat1",
  [aux_sym_children_repeat1] = "children_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym__single_line_buf_code_repeat1] = "_single_line_buf_code_repeat1",
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
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_] = anon_sym_,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym__attribute_token1] = aux_sym__attribute_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [sym_tag_name] = sym_tag_name,
  [sym_class] = sym_class,
  [sym_id] = sym_id,
  [aux_sym_js_attribute_name_token1] = aux_sym_js_attribute_name_token1,
  [aux_sym_js_attribute_name_token2] = aux_sym_js_attribute_name_token2,
  [aux_sym_js_attribute_name_token3] = aux_sym_js_attribute_name_token3,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_javascript_token1] = aux_sym_quoted_javascript_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_javascript_token2] = aux_sym_quoted_javascript_token1,
  [sym_content] = sym_content,
  [sym__comment_content] = sym__comment_content,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [sym_delimited_javascript] = sym_delimited_javascript,
  [sym__un_delimited_javascript_line] = sym__un_delimited_javascript_line,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_unbuffered_code_token1] = aux_sym_unbuffered_code_token1,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_source_file] = sym_source_file,
  [sym_doctype] = sym_doctype,
  [sym_pipe_content] = sym_pipe_content,
  [sym_tag] = sym_tag,
  [sym__content_after_dot] = sym__content_after_dot,
  [sym_attributes] = sym_attributes,
  [sym_attribute] = sym_attribute,
  [sym__attribute] = sym__attribute,
  [sym__js_attribute] = sym__js_attribute,
  [sym_children] = sym_children,
  [sym__children_choice] = sym__children_choice,
  [sym_comment] = sym_comment,
  [sym_js_attribute_name] = sym_js_attribute_name,
  [sym_attribute_name] = sym_attribute_name,
  [sym_quoted_javascript] = sym_quoted_javascript,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [aux_sym__content_or_javascript] = aux_sym__content_or_javascript,
  [sym_un_delimited_javascript] = sym_un_delimited_javascript,
  [sym__single_line_buf_code] = sym__single_line_buf_code,
  [sym_unbuffered_code] = sym_unbuffered_code,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_tag_repeat1] = aux_sym_tag_repeat1,
  [aux_sym__content_after_dot_repeat1] = aux_sym__content_after_dot_repeat1,
  [aux_sym_attributes_repeat1] = aux_sym_attributes_repeat1,
  [aux_sym__attribute_repeat1] = aux_sym__attribute_repeat1,
  [aux_sym_children_repeat1] = aux_sym_children_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [aux_sym__single_line_buf_code_repeat1] = aux_sym__single_line_buf_code_repeat1,
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
  [sym_delimited_javascript] = {
    .visible = true,
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
  [sym_un_delimited_javascript] = {
    .visible = true,
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
  [aux_sym__single_line_buf_code_repeat1] = {
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
      if (eof) ADVANCE(40);
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(82);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == ',') ADVANCE(53);
      if (lookahead == '-') ADVANCE(103);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == 'd') ADVANCE(22);
      if (lookahead == 'h') ADVANCE(28);
      if (lookahead == 's') ADVANCE(25);
      if (lookahead == 'x') ADVANCE(20);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '|') ADVANCE(47);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(100);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '(') ADVANCE(52);
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == ',') ADVANCE(53);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == ',') ADVANCE(53);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == ' ') SKIP(6)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '|') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(54);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(80);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(57);
      END_STATE();
    case 13:
      if (lookahead == ']') ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 20:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 23:
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 29:
      if (lookahead == 'y') ADVANCE(23);
      END_STATE();
    case 30:
      if (lookahead == '{') ADVANCE(97);
      END_STATE();
    case 31:
      if (lookahead == '}') ADVANCE(98);
      END_STATE();
    case 32:
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 33:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(75);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 34:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 35:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 36:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 37:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 38:
      if (eof) ADVANCE(40);
      if (lookahead == ' ') SKIP(38)
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == '-') ADVANCE(104);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 39:
      if (eof) ADVANCE(40);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '-') ADVANCE(103);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(63);
      if (lookahead == '|') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_doctype);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_strict);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(75);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__attribute_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(67);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(61);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(62);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(69);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(65);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(66);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(75);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(76);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_js_attribute_name_token1);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_js_attribute_name_token2);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_js_attribute_name_token3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == '-') ADVANCE(104);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(91);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(76);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_delimited_javascript);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_delimited_javascript);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(96);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_unbuffered_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(105);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 39},
  [2] = {.lex_state = 39, .external_lex_state = 2},
  [3] = {.lex_state = 39, .external_lex_state = 2},
  [4] = {.lex_state = 39, .external_lex_state = 2},
  [5] = {.lex_state = 39},
  [6] = {.lex_state = 39},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 39, .external_lex_state = 3},
  [10] = {.lex_state = 39, .external_lex_state = 3},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 39, .external_lex_state = 3},
  [13] = {.lex_state = 39, .external_lex_state = 3},
  [14] = {.lex_state = 39, .external_lex_state = 3},
  [15] = {.lex_state = 38, .external_lex_state = 2},
  [16] = {.lex_state = 39, .external_lex_state = 2},
  [17] = {.lex_state = 39, .external_lex_state = 2},
  [18] = {.lex_state = 4, .external_lex_state = 4},
  [19] = {.lex_state = 4, .external_lex_state = 4},
  [20] = {.lex_state = 4, .external_lex_state = 4},
  [21] = {.lex_state = 38, .external_lex_state = 2},
  [22] = {.lex_state = 38, .external_lex_state = 2},
  [23] = {.lex_state = 38, .external_lex_state = 2},
  [24] = {.lex_state = 39, .external_lex_state = 2},
  [25] = {.lex_state = 4, .external_lex_state = 4},
  [26] = {.lex_state = 38, .external_lex_state = 2},
  [27] = {.lex_state = 39, .external_lex_state = 2},
  [28] = {.lex_state = 39, .external_lex_state = 2},
  [29] = {.lex_state = 39, .external_lex_state = 5},
  [30] = {.lex_state = 39, .external_lex_state = 2},
  [31] = {.lex_state = 39, .external_lex_state = 2},
  [32] = {.lex_state = 39, .external_lex_state = 2},
  [33] = {.lex_state = 39, .external_lex_state = 2},
  [34] = {.lex_state = 39, .external_lex_state = 2},
  [35] = {.lex_state = 39, .external_lex_state = 5},
  [36] = {.lex_state = 39, .external_lex_state = 2},
  [37] = {.lex_state = 39, .external_lex_state = 5},
  [38] = {.lex_state = 39, .external_lex_state = 2},
  [39] = {.lex_state = 39, .external_lex_state = 2},
  [40] = {.lex_state = 39, .external_lex_state = 5},
  [41] = {.lex_state = 38, .external_lex_state = 2},
  [42] = {.lex_state = 39, .external_lex_state = 2},
  [43] = {.lex_state = 39, .external_lex_state = 5},
  [44] = {.lex_state = 39, .external_lex_state = 2},
  [45] = {.lex_state = 39, .external_lex_state = 2},
  [46] = {.lex_state = 4, .external_lex_state = 4},
  [47] = {.lex_state = 39, .external_lex_state = 5},
  [48] = {.lex_state = 39, .external_lex_state = 2},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 39, .external_lex_state = 2},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 39, .external_lex_state = 5},
  [53] = {.lex_state = 39},
  [54] = {.lex_state = 39},
  [55] = {.lex_state = 39},
  [56] = {.lex_state = 39},
  [57] = {.lex_state = 39},
  [58] = {.lex_state = 39},
  [59] = {.lex_state = 39},
  [60] = {.lex_state = 39},
  [61] = {.lex_state = 39},
  [62] = {.lex_state = 39},
  [63] = {.lex_state = 39},
  [64] = {.lex_state = 39},
  [65] = {.lex_state = 39},
  [66] = {.lex_state = 39},
  [67] = {.lex_state = 39},
  [68] = {.lex_state = 39},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5, .external_lex_state = 4},
  [76] = {.lex_state = 5, .external_lex_state = 4},
  [77] = {.lex_state = 5, .external_lex_state = 4},
  [78] = {.lex_state = 1, .external_lex_state = 2},
  [79] = {.lex_state = 1, .external_lex_state = 2},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5, .external_lex_state = 4},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 1, .external_lex_state = 2},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 1, .external_lex_state = 4},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1, .external_lex_state = 4},
  [89] = {.lex_state = 1, .external_lex_state = 4},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 1, .external_lex_state = 4},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 5, .external_lex_state = 4},
  [94] = {.lex_state = 1, .external_lex_state = 4},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 1, .external_lex_state = 4},
  [97] = {.lex_state = 1, .external_lex_state = 4},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 1, .external_lex_state = 4},
  [100] = {.lex_state = 5, .external_lex_state = 4},
  [101] = {.lex_state = 1, .external_lex_state = 4},
  [102] = {.lex_state = 1, .external_lex_state = 4},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 5, .external_lex_state = 4},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1, .external_lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 1, .external_lex_state = 2},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 7},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 6, .external_lex_state = 4},
  [134] = {.lex_state = 9},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 0, .external_lex_state = 5},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 0, .external_lex_state = 4},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0, .external_lex_state = 4},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 105},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0, .external_lex_state = 4},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 10},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0, .external_lex_state = 5},
  [151] = {.lex_state = 0, .external_lex_state = 4},
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
    [ts_external_token__newline] = true,
  },
  [5] = {
    [ts_external_token__indent] = true,
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
    [sym_source_file] = STATE(140),
    [sym_doctype] = STATE(5),
    [sym_tag] = STATE(5),
    [sym_comment] = STATE(5),
    [sym_unbuffered_code] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_doctype] = ACTIONS(5),
    [anon_sym_SLASH_SLASH] = ACTIONS(7),
    [sym_tag_name] = ACTIONS(9),
    [sym_class] = ACTIONS(11),
    [sym_id] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(17), 1,
      anon_sym_doctype,
    ACTIONS(19), 1,
      anon_sym_PIPE,
    ACTIONS(21), 1,
      sym_tag_name,
    ACTIONS(25), 1,
      sym__dedent,
    ACTIONS(23), 2,
      sym_class,
      sym_id,
    ACTIONS(15), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
    STATE(3), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [28] = 6,
    ACTIONS(29), 1,
      anon_sym_doctype,
    ACTIONS(31), 1,
      anon_sym_PIPE,
    ACTIONS(34), 1,
      sym_tag_name,
    ACTIONS(37), 2,
      sym_class,
      sym_id,
    ACTIONS(27), 4,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
    STATE(3), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [54] = 7,
    ACTIONS(17), 1,
      anon_sym_doctype,
    ACTIONS(19), 1,
      anon_sym_PIPE,
    ACTIONS(21), 1,
      sym_tag_name,
    ACTIONS(40), 1,
      sym__dedent,
    ACTIONS(23), 2,
      sym_class,
      sym_id,
    ACTIONS(15), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
    STATE(3), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [82] = 7,
    ACTIONS(5), 1,
      anon_sym_doctype,
    ACTIONS(7), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(9), 1,
      sym_tag_name,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 2,
      sym_class,
      sym_id,
    STATE(6), 5,
      sym_doctype,
      sym_tag,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_source_file_repeat1,
  [109] = 7,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 1,
      anon_sym_doctype,
    ACTIONS(49), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(52), 1,
      sym_tag_name,
    ACTIONS(58), 1,
      anon_sym_DASH,
    ACTIONS(55), 2,
      sym_class,
      sym_id,
    STATE(6), 5,
      sym_doctype,
      sym_tag,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_source_file_repeat1,
  [136] = 8,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    ACTIONS(63), 1,
      aux_sym__attribute_token1,
    STATE(8), 1,
      aux_sym_attributes_repeat1,
    STATE(69), 1,
      sym_attribute_name,
    STATE(70), 1,
      sym_js_attribute_name,
    STATE(127), 1,
      sym_attribute,
    STATE(126), 2,
      sym__attribute,
      sym__js_attribute,
    ACTIONS(65), 3,
      aux_sym_js_attribute_name_token1,
      aux_sym_js_attribute_name_token2,
      aux_sym_js_attribute_name_token3,
  [164] = 8,
    ACTIONS(63), 1,
      aux_sym__attribute_token1,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      aux_sym_attributes_repeat1,
    STATE(69), 1,
      sym_attribute_name,
    STATE(70), 1,
      sym_js_attribute_name,
    STATE(113), 1,
      sym_attribute,
    STATE(126), 2,
      sym__attribute,
      sym__js_attribute,
    ACTIONS(65), 3,
      aux_sym_js_attribute_name_token1,
      aux_sym_js_attribute_name_token2,
      aux_sym_js_attribute_name_token3,
  [192] = 4,
    ACTIONS(73), 1,
      sym__indent,
    STATE(36), 1,
      sym_children,
    ACTIONS(71), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(69), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [212] = 4,
    ACTIONS(73), 1,
      sym__indent,
    STATE(31), 1,
      sym_children,
    ACTIONS(77), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(75), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [232] = 8,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    ACTIONS(81), 1,
      aux_sym__attribute_token1,
    STATE(11), 1,
      aux_sym_attributes_repeat1,
    STATE(69), 1,
      sym_attribute_name,
    STATE(70), 1,
      sym_js_attribute_name,
    STATE(136), 1,
      sym_attribute,
    STATE(126), 2,
      sym__attribute,
      sym__js_attribute,
    ACTIONS(84), 3,
      aux_sym_js_attribute_name_token1,
      aux_sym_js_attribute_name_token2,
      aux_sym_js_attribute_name_token3,
  [260] = 4,
    ACTIONS(73), 1,
      sym__indent,
    STATE(42), 1,
      sym_children,
    ACTIONS(89), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(87), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [280] = 4,
    ACTIONS(73), 1,
      sym__indent,
    STATE(32), 1,
      sym_children,
    ACTIONS(93), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(91), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [300] = 4,
    ACTIONS(73), 1,
      sym__indent,
    STATE(44), 1,
      sym_children,
    ACTIONS(97), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(95), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [320] = 4,
    ACTIONS(103), 1,
      sym__comment_content,
    STATE(15), 1,
      aux_sym_comment_repeat1,
    ACTIONS(99), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(101), 6,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [339] = 5,
    ACTIONS(108), 1,
      anon_sym_doctype,
    ACTIONS(110), 1,
      sym_tag_name,
    ACTIONS(113), 2,
      sym_class,
      sym_id,
    STATE(16), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(106), 4,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [360] = 5,
    ACTIONS(21), 1,
      sym_tag_name,
    ACTIONS(118), 1,
      anon_sym_doctype,
    ACTIONS(23), 2,
      sym_class,
      sym_id,
    STATE(16), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(116), 4,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [381] = 9,
    ACTIONS(120), 1,
      anon_sym_COLON,
    ACTIONS(122), 1,
      anon_sym_,
    ACTIONS(124), 1,
      anon_sym_DOT,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    ACTIONS(130), 1,
      sym__newline,
    STATE(46), 1,
      aux_sym_tag_repeat1,
    STATE(60), 1,
      sym__content_after_dot,
    STATE(77), 1,
      sym_attributes,
    ACTIONS(128), 2,
      sym_class,
      sym_id,
  [410] = 9,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_COLON,
    ACTIONS(134), 1,
      anon_sym_,
    ACTIONS(136), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      sym__newline,
    STATE(20), 1,
      aux_sym_tag_repeat1,
    STATE(30), 1,
      sym__content_after_dot,
    STATE(76), 1,
      sym_attributes,
    ACTIONS(138), 2,
      sym_class,
      sym_id,
  [439] = 9,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    ACTIONS(136), 1,
      anon_sym_DOT,
    ACTIONS(142), 1,
      anon_sym_COLON,
    ACTIONS(144), 1,
      anon_sym_,
    ACTIONS(146), 1,
      sym__newline,
    STATE(34), 1,
      sym__content_after_dot,
    STATE(46), 1,
      aux_sym_tag_repeat1,
    STATE(82), 1,
      sym_attributes,
    ACTIONS(128), 2,
      sym_class,
      sym_id,
  [468] = 5,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(152), 1,
      sym__comment_content,
    ACTIONS(154), 1,
      sym__dedent,
    STATE(26), 1,
      aux_sym_comment_repeat1,
    ACTIONS(150), 6,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [489] = 5,
    ACTIONS(152), 1,
      sym__comment_content,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    ACTIONS(160), 1,
      sym__dedent,
    STATE(23), 1,
      aux_sym_comment_repeat1,
    ACTIONS(158), 6,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [510] = 5,
    ACTIONS(152), 1,
      sym__comment_content,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 1,
      sym__dedent,
    STATE(15), 1,
      aux_sym_comment_repeat1,
    ACTIONS(164), 6,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [531] = 5,
    ACTIONS(21), 1,
      sym_tag_name,
    ACTIONS(170), 1,
      anon_sym_doctype,
    ACTIONS(23), 2,
      sym_class,
      sym_id,
    STATE(17), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(168), 4,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [552] = 9,
    ACTIONS(124), 1,
      anon_sym_DOT,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      anon_sym_COLON,
    ACTIONS(174), 1,
      anon_sym_,
    ACTIONS(178), 1,
      sym__newline,
    STATE(18), 1,
      aux_sym_tag_repeat1,
    STATE(56), 1,
      sym__content_after_dot,
    STATE(75), 1,
      sym_attributes,
    ACTIONS(176), 2,
      sym_class,
      sym_id,
  [581] = 5,
    ACTIONS(152), 1,
      sym__comment_content,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    ACTIONS(160), 1,
      sym__dedent,
    STATE(15), 1,
      aux_sym_comment_repeat1,
    ACTIONS(158), 6,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [602] = 2,
    ACTIONS(182), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(180), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [616] = 2,
    ACTIONS(71), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(69), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [630] = 4,
    ACTIONS(184), 1,
      sym__indent,
    STATE(58), 1,
      sym_children,
    ACTIONS(89), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [648] = 2,
    ACTIONS(77), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(75), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [662] = 2,
    ACTIONS(97), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(95), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [676] = 2,
    ACTIONS(71), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(69), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [690] = 2,
    ACTIONS(188), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(186), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [704] = 2,
    ACTIONS(97), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(95), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [718] = 4,
    ACTIONS(184), 1,
      sym__indent,
    STATE(53), 1,
      sym_children,
    ACTIONS(93), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [736] = 2,
    ACTIONS(89), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(87), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [750] = 4,
    ACTIONS(184), 1,
      sym__indent,
    STATE(64), 1,
      sym_children,
    ACTIONS(97), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(95), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [768] = 2,
    ACTIONS(192), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(190), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [782] = 2,
    ACTIONS(93), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(91), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [796] = 4,
    ACTIONS(184), 1,
      sym__indent,
    STATE(62), 1,
      sym_children,
    ACTIONS(71), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(69), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [814] = 2,
    ACTIONS(99), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(101), 7,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      sym__comment_content,
      anon_sym_DASH,
  [828] = 2,
    ACTIONS(196), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(194), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [842] = 4,
    ACTIONS(184), 1,
      sym__indent,
    STATE(63), 1,
      sym_children,
    ACTIONS(77), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(75), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [860] = 2,
    ACTIONS(93), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(91), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [874] = 2,
    ACTIONS(200), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(198), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [888] = 4,
    STATE(46), 1,
      aux_sym_tag_repeat1,
    ACTIONS(204), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(206), 2,
      sym_class,
      sym_id,
    ACTIONS(202), 3,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_LPAREN,
  [905] = 3,
    ACTIONS(209), 1,
      sym__indent,
    ACTIONS(150), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(148), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [920] = 3,
    ACTIONS(215), 1,
      sym__dedent,
    ACTIONS(213), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(211), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [935] = 3,
    ACTIONS(19), 1,
      anon_sym_PIPE,
    ACTIONS(23), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(2), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [950] = 2,
    ACTIONS(219), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(217), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [963] = 3,
    ACTIONS(19), 1,
      anon_sym_PIPE,
    ACTIONS(23), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(4), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [978] = 3,
    ACTIONS(225), 1,
      sym__indent,
    ACTIONS(223), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(221), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [993] = 2,
    ACTIONS(71), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(69), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1005] = 2,
    ACTIONS(71), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(69), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1017] = 2,
    ACTIONS(188), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(186), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1029] = 2,
    ACTIONS(77), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(75), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1041] = 2,
    ACTIONS(158), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(156), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1053] = 2,
    ACTIONS(196), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(194), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1065] = 2,
    ACTIONS(164), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(162), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1077] = 2,
    ACTIONS(97), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(95), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1089] = 2,
    ACTIONS(229), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(227), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1101] = 2,
    ACTIONS(89), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1113] = 2,
    ACTIONS(97), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(95), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1125] = 2,
    ACTIONS(93), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1137] = 2,
    ACTIONS(93), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1149] = 2,
    ACTIONS(233), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(231), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1161] = 2,
    ACTIONS(192), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(190), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1173] = 2,
    ACTIONS(237), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(235), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1185] = 5,
    ACTIONS(239), 1,
      anon_sym_,
    ACTIONS(241), 1,
      anon_sym_DOT,
    ACTIONS(245), 1,
      anon_sym_EQ,
    STATE(71), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(243), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1202] = 5,
    ACTIONS(241), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_,
    ACTIONS(251), 1,
      anon_sym_EQ,
    STATE(72), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(249), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1219] = 5,
    ACTIONS(241), 1,
      anon_sym_DOT,
    ACTIONS(253), 1,
      anon_sym_,
    ACTIONS(257), 1,
      anon_sym_EQ,
    STATE(73), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(255), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1236] = 5,
    ACTIONS(241), 1,
      anon_sym_DOT,
    ACTIONS(259), 1,
      anon_sym_,
    ACTIONS(263), 1,
      anon_sym_EQ,
    STATE(73), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(261), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1253] = 4,
    ACTIONS(265), 1,
      anon_sym_,
    ACTIONS(267), 1,
      anon_sym_DOT,
    STATE(73), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(270), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1268] = 2,
    ACTIONS(272), 1,
      anon_sym_,
    ACTIONS(274), 4,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1278] = 5,
    ACTIONS(120), 1,
      anon_sym_COLON,
    ACTIONS(122), 1,
      anon_sym_,
    ACTIONS(124), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      sym__newline,
    STATE(60), 1,
      sym__content_after_dot,
  [1294] = 5,
    ACTIONS(136), 1,
      anon_sym_DOT,
    ACTIONS(142), 1,
      anon_sym_COLON,
    ACTIONS(144), 1,
      anon_sym_,
    ACTIONS(146), 1,
      sym__newline,
    STATE(34), 1,
      sym__content_after_dot,
  [1310] = 5,
    ACTIONS(124), 1,
      anon_sym_DOT,
    ACTIONS(276), 1,
      anon_sym_COLON,
    ACTIONS(278), 1,
      anon_sym_,
    ACTIONS(280), 1,
      sym__newline,
    STATE(65), 1,
      sym__content_after_dot,
  [1326] = 5,
    ACTIONS(282), 1,
      sym_content,
    ACTIONS(285), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(288), 1,
      sym__dedent,
    STATE(78), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(88), 1,
      aux_sym__content_or_javascript,
  [1342] = 5,
    ACTIONS(290), 1,
      sym_content,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(294), 1,
      sym__dedent,
    STATE(78), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(88), 1,
      aux_sym__content_or_javascript,
  [1358] = 2,
    ACTIONS(296), 1,
      anon_sym_,
    ACTIONS(298), 4,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1368] = 2,
    ACTIONS(300), 1,
      anon_sym_,
    ACTIONS(302), 4,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1378] = 5,
    ACTIONS(136), 1,
      anon_sym_DOT,
    ACTIONS(304), 1,
      anon_sym_COLON,
    ACTIONS(306), 1,
      anon_sym_,
    ACTIONS(308), 1,
      sym__newline,
    STATE(39), 1,
      sym__content_after_dot,
  [1394] = 1,
    ACTIONS(79), 5,
      anon_sym_RPAREN,
      aux_sym__attribute_token1,
      aux_sym_js_attribute_name_token1,
      aux_sym_js_attribute_name_token2,
      aux_sym_js_attribute_name_token3,
  [1402] = 5,
    ACTIONS(290), 1,
      sym_content,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(310), 1,
      sym__dedent,
    STATE(78), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(88), 1,
      aux_sym__content_or_javascript,
  [1418] = 2,
    STATE(65), 1,
      sym_tag,
    ACTIONS(11), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1427] = 4,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(312), 1,
      sym_content,
    ACTIONS(314), 1,
      sym__newline,
    STATE(102), 1,
      aux_sym__content_or_javascript,
  [1440] = 4,
    ACTIONS(290), 1,
      sym_content,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(84), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(88), 1,
      aux_sym__content_or_javascript,
  [1453] = 4,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(312), 1,
      sym_content,
    ACTIONS(316), 1,
      sym__newline,
    STATE(102), 1,
      aux_sym__content_or_javascript,
  [1466] = 4,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(312), 1,
      sym_content,
    ACTIONS(318), 1,
      sym__newline,
    STATE(102), 1,
      aux_sym__content_or_javascript,
  [1479] = 2,
    STATE(28), 1,
      sym_tag,
    ACTIONS(23), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1488] = 4,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(312), 1,
      sym_content,
    ACTIONS(320), 1,
      sym__newline,
    STATE(102), 1,
      aux_sym__content_or_javascript,
  [1501] = 2,
    STATE(39), 1,
      sym_tag,
    ACTIONS(23), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1510] = 2,
    ACTIONS(322), 2,
      anon_sym_COLON,
      anon_sym_DOT,
    ACTIONS(324), 2,
      sym__newline,
      anon_sym_,
  [1519] = 4,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(308), 1,
      sym__newline,
    ACTIONS(312), 1,
      sym_content,
    STATE(102), 1,
      aux_sym__content_or_javascript,
  [1532] = 2,
    STATE(60), 1,
      sym_tag,
    ACTIONS(11), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1541] = 4,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(312), 1,
      sym_content,
    ACTIONS(326), 1,
      sym__newline,
    STATE(102), 1,
      aux_sym__content_or_javascript,
  [1554] = 4,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(312), 1,
      sym_content,
    ACTIONS(328), 1,
      sym__newline,
    STATE(102), 1,
      aux_sym__content_or_javascript,
  [1567] = 2,
    STATE(34), 1,
      sym_tag,
    ACTIONS(23), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1576] = 4,
    ACTIONS(280), 1,
      sym__newline,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(312), 1,
      sym_content,
    STATE(102), 1,
      aux_sym__content_or_javascript,
  [1589] = 2,
    ACTIONS(330), 2,
      anon_sym_COLON,
      anon_sym_DOT,
    ACTIONS(332), 2,
      sym__newline,
      anon_sym_,
  [1598] = 4,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(334), 1,
      sym_content,
    ACTIONS(336), 1,
      sym__newline,
    STATE(96), 1,
      aux_sym__content_or_javascript,
  [1611] = 4,
    ACTIONS(338), 1,
      sym_content,
    ACTIONS(341), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(344), 1,
      sym__newline,
    STATE(102), 1,
      aux_sym__content_or_javascript,
  [1624] = 2,
    STATE(54), 1,
      sym_tag,
    ACTIONS(11), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1633] = 4,
    ACTIONS(290), 1,
      sym_content,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(79), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(88), 1,
      aux_sym__content_or_javascript,
  [1646] = 2,
    ACTIONS(346), 2,
      anon_sym_COLON,
      anon_sym_DOT,
    ACTIONS(348), 2,
      sym__newline,
      anon_sym_,
  [1655] = 3,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
    STATE(117), 1,
      sym_quoted_javascript,
  [1665] = 2,
    ACTIONS(354), 1,
      anon_sym_,
    ACTIONS(356), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1673] = 2,
    ACTIONS(358), 1,
      anon_sym_,
    ACTIONS(360), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1681] = 2,
    ACTIONS(362), 1,
      anon_sym_,
    ACTIONS(364), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1689] = 3,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(366), 1,
      sym_content,
    STATE(89), 1,
      aux_sym__content_or_javascript,
  [1699] = 2,
    ACTIONS(370), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(368), 2,
      sym__newline,
      sym_content,
  [1707] = 2,
    ACTIONS(372), 1,
      anon_sym_,
    ACTIONS(374), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1715] = 3,
    ACTIONS(376), 1,
      anon_sym_,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
  [1725] = 2,
    ACTIONS(382), 1,
      anon_sym_,
    ACTIONS(384), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1733] = 2,
    ACTIONS(386), 1,
      anon_sym_,
    ACTIONS(388), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1741] = 3,
    ACTIONS(390), 1,
      anon_sym_SQUOTE,
    ACTIONS(392), 1,
      anon_sym_DQUOTE,
    STATE(129), 1,
      sym_quoted_attribute_value,
  [1751] = 2,
    ACTIONS(394), 1,
      anon_sym_,
    ACTIONS(396), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1759] = 3,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(398), 1,
      sym_content,
    STATE(91), 1,
      aux_sym__content_or_javascript,
  [1769] = 3,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
    STATE(108), 1,
      sym_quoted_javascript,
  [1779] = 3,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(400), 1,
      sym_content,
    STATE(99), 1,
      aux_sym__content_or_javascript,
  [1789] = 3,
    ACTIONS(390), 1,
      anon_sym_SQUOTE,
    ACTIONS(392), 1,
      anon_sym_DQUOTE,
    STATE(112), 1,
      sym_quoted_attribute_value,
  [1799] = 3,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(402), 1,
      sym_content,
    STATE(94), 1,
      aux_sym__content_or_javascript,
  [1809] = 3,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(404), 1,
      sym_content,
    STATE(97), 1,
      aux_sym__content_or_javascript,
  [1819] = 3,
    ACTIONS(406), 1,
      sym__un_delimited_javascript_line,
    STATE(24), 1,
      sym_un_delimited_javascript,
    STATE(48), 1,
      sym__single_line_buf_code,
  [1829] = 3,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(408), 1,
      sym_content,
    STATE(86), 1,
      aux_sym__content_or_javascript,
  [1839] = 2,
    ACTIONS(410), 1,
      anon_sym_,
    ACTIONS(412), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1847] = 3,
    ACTIONS(376), 1,
      anon_sym_,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
  [1857] = 2,
    ACTIONS(416), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(288), 2,
      sym__dedent,
      sym_content,
  [1865] = 2,
    ACTIONS(418), 1,
      anon_sym_,
    ACTIONS(420), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1873] = 1,
    ACTIONS(422), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [1879] = 2,
    ACTIONS(424), 1,
      anon_sym_DQUOTE,
    ACTIONS(426), 1,
      aux_sym_quoted_javascript_token2,
  [1886] = 2,
    ACTIONS(428), 1,
      anon_sym_DQUOTE,
    ACTIONS(430), 1,
      aux_sym_quoted_javascript_token2,
  [1893] = 2,
    ACTIONS(432), 1,
      sym__comment_content,
    ACTIONS(434), 1,
      sym__newline,
  [1900] = 2,
    ACTIONS(428), 1,
      anon_sym_SQUOTE,
    ACTIONS(436), 1,
      aux_sym_quoted_javascript_token1,
  [1907] = 2,
    ACTIONS(424), 1,
      anon_sym_SQUOTE,
    ACTIONS(438), 1,
      aux_sym_quoted_javascript_token1,
  [1914] = 2,
    ACTIONS(376), 1,
      anon_sym_,
    ACTIONS(378), 1,
      anon_sym_COMMA,
  [1921] = 1,
    ACTIONS(440), 1,
      sym__indent,
  [1925] = 1,
    ACTIONS(442), 1,
      sym_delimited_javascript,
  [1929] = 1,
    ACTIONS(444), 1,
      sym__newline,
  [1933] = 1,
    ACTIONS(446), 1,
      ts_builtin_sym_end,
  [1937] = 1,
    ACTIONS(448), 1,
      sym__newline,
  [1941] = 1,
    ACTIONS(450), 1,
      anon_sym_SQUOTE,
  [1945] = 1,
    ACTIONS(452), 1,
      aux_sym_unbuffered_code_token1,
  [1949] = 1,
    ACTIONS(454), 1,
      anon_sym_DQUOTE,
  [1953] = 1,
    ACTIONS(456), 1,
      sym__newline,
  [1957] = 1,
    ACTIONS(458), 1,
      anon_sym_RBRACE_RBRACE,
  [1961] = 1,
    ACTIONS(454), 1,
      anon_sym_SQUOTE,
  [1965] = 1,
    ACTIONS(460), 1,
      aux_sym__attribute_token1,
  [1969] = 1,
    ACTIONS(450), 1,
      anon_sym_DQUOTE,
  [1973] = 1,
    ACTIONS(462), 1,
      sym__indent,
  [1977] = 1,
    ACTIONS(464), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 82,
  [SMALL_STATE(6)] = 109,
  [SMALL_STATE(7)] = 136,
  [SMALL_STATE(8)] = 164,
  [SMALL_STATE(9)] = 192,
  [SMALL_STATE(10)] = 212,
  [SMALL_STATE(11)] = 232,
  [SMALL_STATE(12)] = 260,
  [SMALL_STATE(13)] = 280,
  [SMALL_STATE(14)] = 300,
  [SMALL_STATE(15)] = 320,
  [SMALL_STATE(16)] = 339,
  [SMALL_STATE(17)] = 360,
  [SMALL_STATE(18)] = 381,
  [SMALL_STATE(19)] = 410,
  [SMALL_STATE(20)] = 439,
  [SMALL_STATE(21)] = 468,
  [SMALL_STATE(22)] = 489,
  [SMALL_STATE(23)] = 510,
  [SMALL_STATE(24)] = 531,
  [SMALL_STATE(25)] = 552,
  [SMALL_STATE(26)] = 581,
  [SMALL_STATE(27)] = 602,
  [SMALL_STATE(28)] = 616,
  [SMALL_STATE(29)] = 630,
  [SMALL_STATE(30)] = 648,
  [SMALL_STATE(31)] = 662,
  [SMALL_STATE(32)] = 676,
  [SMALL_STATE(33)] = 690,
  [SMALL_STATE(34)] = 704,
  [SMALL_STATE(35)] = 718,
  [SMALL_STATE(36)] = 736,
  [SMALL_STATE(37)] = 750,
  [SMALL_STATE(38)] = 768,
  [SMALL_STATE(39)] = 782,
  [SMALL_STATE(40)] = 796,
  [SMALL_STATE(41)] = 814,
  [SMALL_STATE(42)] = 828,
  [SMALL_STATE(43)] = 842,
  [SMALL_STATE(44)] = 860,
  [SMALL_STATE(45)] = 874,
  [SMALL_STATE(46)] = 888,
  [SMALL_STATE(47)] = 905,
  [SMALL_STATE(48)] = 920,
  [SMALL_STATE(49)] = 935,
  [SMALL_STATE(50)] = 950,
  [SMALL_STATE(51)] = 963,
  [SMALL_STATE(52)] = 978,
  [SMALL_STATE(53)] = 993,
  [SMALL_STATE(54)] = 1005,
  [SMALL_STATE(55)] = 1017,
  [SMALL_STATE(56)] = 1029,
  [SMALL_STATE(57)] = 1041,
  [SMALL_STATE(58)] = 1053,
  [SMALL_STATE(59)] = 1065,
  [SMALL_STATE(60)] = 1077,
  [SMALL_STATE(61)] = 1089,
  [SMALL_STATE(62)] = 1101,
  [SMALL_STATE(63)] = 1113,
  [SMALL_STATE(64)] = 1125,
  [SMALL_STATE(65)] = 1137,
  [SMALL_STATE(66)] = 1149,
  [SMALL_STATE(67)] = 1161,
  [SMALL_STATE(68)] = 1173,
  [SMALL_STATE(69)] = 1185,
  [SMALL_STATE(70)] = 1202,
  [SMALL_STATE(71)] = 1219,
  [SMALL_STATE(72)] = 1236,
  [SMALL_STATE(73)] = 1253,
  [SMALL_STATE(74)] = 1268,
  [SMALL_STATE(75)] = 1278,
  [SMALL_STATE(76)] = 1294,
  [SMALL_STATE(77)] = 1310,
  [SMALL_STATE(78)] = 1326,
  [SMALL_STATE(79)] = 1342,
  [SMALL_STATE(80)] = 1358,
  [SMALL_STATE(81)] = 1368,
  [SMALL_STATE(82)] = 1378,
  [SMALL_STATE(83)] = 1394,
  [SMALL_STATE(84)] = 1402,
  [SMALL_STATE(85)] = 1418,
  [SMALL_STATE(86)] = 1427,
  [SMALL_STATE(87)] = 1440,
  [SMALL_STATE(88)] = 1453,
  [SMALL_STATE(89)] = 1466,
  [SMALL_STATE(90)] = 1479,
  [SMALL_STATE(91)] = 1488,
  [SMALL_STATE(92)] = 1501,
  [SMALL_STATE(93)] = 1510,
  [SMALL_STATE(94)] = 1519,
  [SMALL_STATE(95)] = 1532,
  [SMALL_STATE(96)] = 1541,
  [SMALL_STATE(97)] = 1554,
  [SMALL_STATE(98)] = 1567,
  [SMALL_STATE(99)] = 1576,
  [SMALL_STATE(100)] = 1589,
  [SMALL_STATE(101)] = 1598,
  [SMALL_STATE(102)] = 1611,
  [SMALL_STATE(103)] = 1624,
  [SMALL_STATE(104)] = 1633,
  [SMALL_STATE(105)] = 1646,
  [SMALL_STATE(106)] = 1655,
  [SMALL_STATE(107)] = 1665,
  [SMALL_STATE(108)] = 1673,
  [SMALL_STATE(109)] = 1681,
  [SMALL_STATE(110)] = 1689,
  [SMALL_STATE(111)] = 1699,
  [SMALL_STATE(112)] = 1707,
  [SMALL_STATE(113)] = 1715,
  [SMALL_STATE(114)] = 1725,
  [SMALL_STATE(115)] = 1733,
  [SMALL_STATE(116)] = 1741,
  [SMALL_STATE(117)] = 1751,
  [SMALL_STATE(118)] = 1759,
  [SMALL_STATE(119)] = 1769,
  [SMALL_STATE(120)] = 1779,
  [SMALL_STATE(121)] = 1789,
  [SMALL_STATE(122)] = 1799,
  [SMALL_STATE(123)] = 1809,
  [SMALL_STATE(124)] = 1819,
  [SMALL_STATE(125)] = 1829,
  [SMALL_STATE(126)] = 1839,
  [SMALL_STATE(127)] = 1847,
  [SMALL_STATE(128)] = 1857,
  [SMALL_STATE(129)] = 1865,
  [SMALL_STATE(130)] = 1873,
  [SMALL_STATE(131)] = 1879,
  [SMALL_STATE(132)] = 1886,
  [SMALL_STATE(133)] = 1893,
  [SMALL_STATE(134)] = 1900,
  [SMALL_STATE(135)] = 1907,
  [SMALL_STATE(136)] = 1914,
  [SMALL_STATE(137)] = 1921,
  [SMALL_STATE(138)] = 1925,
  [SMALL_STATE(139)] = 1929,
  [SMALL_STATE(140)] = 1933,
  [SMALL_STATE(141)] = 1937,
  [SMALL_STATE(142)] = 1941,
  [SMALL_STATE(143)] = 1945,
  [SMALL_STATE(144)] = 1949,
  [SMALL_STATE(145)] = 1953,
  [SMALL_STATE(146)] = 1957,
  [SMALL_STATE(147)] = 1961,
  [SMALL_STATE(148)] = 1965,
  [SMALL_STATE(149)] = 1969,
  [SMALL_STATE(150)] = 1973,
  [SMALL_STATE(151)] = 1977,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(101),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(19),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(19),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(130),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(133),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(143),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(81),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(74),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(145),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2), SHIFT_REPEAT(19),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2), SHIFT_REPEAT(19),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 5),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 5),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_content, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_content, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 5, .production_id = 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 5, .production_id = 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 7),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_content, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_content, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(46),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_un_delimited_javascript, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_un_delimited_javascript, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 4),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 4),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 6),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 6),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 1),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 2),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 2),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2), SHIFT_REPEAT(148),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_attribute_name, 1),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_attribute_name, 1),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(88),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(138),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 1),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_name, 1),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(102),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(138),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 2),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 4),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 4),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 3),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 4),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 4),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 3),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 3),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 3),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 3),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 3),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 3),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 3),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [446] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
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
