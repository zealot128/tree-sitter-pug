#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 159
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 2
#define TOKEN_COUNT 40
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
  anon_sym_SLASH_SLASH = 18,
  sym_tag_name = 19,
  sym_class = 20,
  sym_id = 21,
  aux_sym_js_attribute_name_token1 = 22,
  aux_sym_js_attribute_name_token2 = 23,
  aux_sym_js_attribute_name_token3 = 24,
  anon_sym_SQUOTE = 25,
  aux_sym_quoted_javascript_token1 = 26,
  anon_sym_DQUOTE = 27,
  aux_sym_quoted_javascript_token2 = 28,
  sym_content = 29,
  sym__comment_content = 30,
  anon_sym_LBRACE_LBRACE = 31,
  anon_sym_RBRACE_RBRACE = 32,
  sym_delimited_javascript = 33,
  sym__un_delimited_javascript_line = 34,
  anon_sym_DASH = 35,
  aux_sym_unbuffered_code_token1 = 36,
  sym__newline = 37,
  sym__indent = 38,
  sym__dedent = 39,
  sym_source_file = 40,
  sym_doctype = 41,
  sym_pipe_content = 42,
  sym_conditional = 43,
  sym_tag = 44,
  sym__content_after_dot = 45,
  sym_attributes = 46,
  sym_attribute = 47,
  sym__attribute = 48,
  sym__js_attribute = 49,
  sym_children = 50,
  sym__children_choice = 51,
  sym_comment = 52,
  sym_js_attribute_name = 53,
  sym_attribute_name = 54,
  sym_quoted_javascript = 55,
  sym_quoted_attribute_value = 56,
  aux_sym__content_or_javascript = 57,
  sym_un_delimited_javascript = 58,
  sym__single_line_buf_code = 59,
  sym_unbuffered_code = 60,
  aux_sym_source_file_repeat1 = 61,
  aux_sym_conditional_repeat1 = 62,
  aux_sym_tag_repeat1 = 63,
  aux_sym__content_after_dot_repeat1 = 64,
  aux_sym_attributes_repeat1 = 65,
  aux_sym__attribute_repeat1 = 66,
  aux_sym_children_repeat1 = 67,
  aux_sym_comment_repeat1 = 68,
  alias_sym_attribute_modifier = 69,
  alias_sym_attribute_value = 70,
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
  [sym_js_attribute_name] = "js_attribute_name",
  [sym_attribute_name] = "attribute_name",
  [sym_quoted_javascript] = "quoted_javascript",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [aux_sym__content_or_javascript] = "_content_or_javascript",
  [sym_un_delimited_javascript] = "un_delimited_javascript",
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
  [sym_js_attribute_name] = sym_js_attribute_name,
  [sym_attribute_name] = sym_attribute_name,
  [sym_quoted_javascript] = sym_quoted_javascript,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [aux_sym__content_or_javascript] = aux_sym__content_or_javascript,
  [sym_un_delimited_javascript] = sym_un_delimited_javascript,
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
      if (eof) ADVANCE(51);
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '\'') ADVANCE(122);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '-') ADVANCE(145);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead == 'h') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == 'u') ADVANCE(29);
      if (lookahead == 'x') ADVANCE(27);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '|') ADVANCE(58);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0) ADVANCE(129);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(142);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(71);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(71);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == ' ') SKIP(6)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(131);
      if (lookahead != 0) ADVANCE(138);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(126);
      if (lookahead != 0) ADVANCE(127);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == '|') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0) ADVANCE(124);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(79);
      END_STATE();
    case 13:
      if (lookahead == ']') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(59);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(62);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 27:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(17);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 40:
      if (lookahead == 'y') ADVANCE(31);
      END_STATE();
    case 41:
      if (lookahead == '{') ADVANCE(139);
      END_STATE();
    case 42:
      if (lookahead == '}') ADVANCE(140);
      END_STATE();
    case 43:
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 44:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(115);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 45:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 46:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 47:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 48:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 49:
      if (eof) ADVANCE(51);
      if (lookahead == ' ') SKIP(49)
      if (lookahead == '#') ADVANCE(137);
      if (lookahead == '-') ADVANCE(146);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == 'd') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if (lookahead != 0) ADVANCE(138);
      END_STATE();
    case 50:
      if (eof) ADVANCE(51);
      if (lookahead == '#') ADVANCE(45);
      if (lookahead == '-') ADVANCE(145);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(97);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'u') ADVANCE(95);
      if (lookahead == '|') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_doctype);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_strict);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(115);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym__attribute_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(108);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(61);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(103);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(81);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(82);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(84);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(85);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(66);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(99);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(100);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(115);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(116);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_js_attribute_name_token1);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_js_attribute_name_token2);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_js_attribute_name_token3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == ' ') ADVANCE(130);
      if (lookahead == '#') ADVANCE(137);
      if (lookahead == '-') ADVANCE(146);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == 'd') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if (lookahead != 0) ADVANCE(138);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == ' ') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(131);
      if (lookahead != 0) ADVANCE(138);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(116);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_delimited_javascript);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_delimited_javascript);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_unbuffered_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(147);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 50},
  [2] = {.lex_state = 50, .external_lex_state = 2},
  [3] = {.lex_state = 50, .external_lex_state = 2},
  [4] = {.lex_state = 50},
  [5] = {.lex_state = 50, .external_lex_state = 2},
  [6] = {.lex_state = 50},
  [7] = {.lex_state = 50, .external_lex_state = 3},
  [8] = {.lex_state = 50, .external_lex_state = 3},
  [9] = {.lex_state = 50, .external_lex_state = 3},
  [10] = {.lex_state = 50, .external_lex_state = 3},
  [11] = {.lex_state = 50, .external_lex_state = 3},
  [12] = {.lex_state = 50, .external_lex_state = 2},
  [13] = {.lex_state = 49, .external_lex_state = 2},
  [14] = {.lex_state = 49, .external_lex_state = 2},
  [15] = {.lex_state = 50, .external_lex_state = 2},
  [16] = {.lex_state = 49, .external_lex_state = 2},
  [17] = {.lex_state = 49, .external_lex_state = 2},
  [18] = {.lex_state = 49, .external_lex_state = 2},
  [19] = {.lex_state = 50, .external_lex_state = 2},
  [20] = {.lex_state = 50, .external_lex_state = 2},
  [21] = {.lex_state = 50, .external_lex_state = 4},
  [22] = {.lex_state = 50, .external_lex_state = 2},
  [23] = {.lex_state = 50, .external_lex_state = 2},
  [24] = {.lex_state = 50, .external_lex_state = 4},
  [25] = {.lex_state = 50, .external_lex_state = 4},
  [26] = {.lex_state = 50},
  [27] = {.lex_state = 50},
  [28] = {.lex_state = 50, .external_lex_state = 2},
  [29] = {.lex_state = 50, .external_lex_state = 4},
  [30] = {.lex_state = 50, .external_lex_state = 4},
  [31] = {.lex_state = 50, .external_lex_state = 2},
  [32] = {.lex_state = 50, .external_lex_state = 2},
  [33] = {.lex_state = 50, .external_lex_state = 2},
  [34] = {.lex_state = 50},
  [35] = {.lex_state = 50, .external_lex_state = 2},
  [36] = {.lex_state = 50, .external_lex_state = 2},
  [37] = {.lex_state = 50, .external_lex_state = 2},
  [38] = {.lex_state = 49, .external_lex_state = 2},
  [39] = {.lex_state = 50, .external_lex_state = 2},
  [40] = {.lex_state = 50, .external_lex_state = 2},
  [41] = {.lex_state = 50, .external_lex_state = 2},
  [42] = {.lex_state = 50, .external_lex_state = 4},
  [43] = {.lex_state = 50, .external_lex_state = 2},
  [44] = {.lex_state = 50, .external_lex_state = 4},
  [45] = {.lex_state = 50, .external_lex_state = 2},
  [46] = {.lex_state = 50},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 50},
  [49] = {.lex_state = 50},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 50},
  [52] = {.lex_state = 50},
  [53] = {.lex_state = 50},
  [54] = {.lex_state = 50},
  [55] = {.lex_state = 50},
  [56] = {.lex_state = 50},
  [57] = {.lex_state = 50},
  [58] = {.lex_state = 50},
  [59] = {.lex_state = 50},
  [60] = {.lex_state = 50},
  [61] = {.lex_state = 50},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 50},
  [64] = {.lex_state = 50},
  [65] = {.lex_state = 4, .external_lex_state = 5},
  [66] = {.lex_state = 4, .external_lex_state = 5},
  [67] = {.lex_state = 4, .external_lex_state = 5},
  [68] = {.lex_state = 4, .external_lex_state = 5},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 4, .external_lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5, .external_lex_state = 5},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5, .external_lex_state = 5},
  [82] = {.lex_state = 1, .external_lex_state = 2},
  [83] = {.lex_state = 5, .external_lex_state = 5},
  [84] = {.lex_state = 5, .external_lex_state = 5},
  [85] = {.lex_state = 1, .external_lex_state = 2},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 1, .external_lex_state = 2},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 1, .external_lex_state = 5},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1, .external_lex_state = 5},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 1, .external_lex_state = 5},
  [96] = {.lex_state = 1, .external_lex_state = 5},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 1, .external_lex_state = 5},
  [99] = {.lex_state = 5, .external_lex_state = 5},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 1, .external_lex_state = 5},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 1, .external_lex_state = 5},
  [104] = {.lex_state = 1, .external_lex_state = 5},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 5, .external_lex_state = 5},
  [107] = {.lex_state = 1, .external_lex_state = 5},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 5, .external_lex_state = 5},
  [110] = {.lex_state = 1, .external_lex_state = 5},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 1, .external_lex_state = 5},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 8},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 1, .external_lex_state = 2},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 9},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 9},
  [143] = {.lex_state = 6, .external_lex_state = 5},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 147},
  [146] = {.lex_state = 10},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0, .external_lex_state = 5},
  [151] = {.lex_state = 0, .external_lex_state = 5},
  [152] = {.lex_state = 0, .external_lex_state = 5},
  [153] = {.lex_state = 0, .external_lex_state = 4},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0, .external_lex_state = 4},
  [158] = {.lex_state = 0, .external_lex_state = 5},
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
    [sym_source_file] = STATE(148),
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
    STATE(23), 1,
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
    STATE(31), 1,
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
    STATE(39), 1,
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
  [290] = 5,
    ACTIONS(27), 1,
      sym_tag_name,
    ACTIONS(29), 2,
      sym_class,
      sym_id,
    STATE(15), 2,
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
  [315] = 5,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 1,
      sym__comment_content,
    ACTIONS(108), 1,
      sym__dedent,
    STATE(17), 1,
      aux_sym_comment_repeat1,
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
  [340] = 5,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 1,
      sym__comment_content,
    ACTIONS(108), 1,
      sym__dedent,
    STATE(16), 1,
      aux_sym_comment_repeat1,
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
  [365] = 5,
    ACTIONS(27), 1,
      sym_tag_name,
    ACTIONS(29), 2,
      sym_class,
      sym_id,
    STATE(19), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(112), 4,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
    ACTIONS(110), 5,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [390] = 4,
    ACTIONS(118), 1,
      sym__comment_content,
    STATE(16), 1,
      aux_sym_comment_repeat1,
    ACTIONS(114), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(116), 10,
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
    ACTIONS(106), 1,
      sym__comment_content,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 1,
      sym__dedent,
    STATE(16), 1,
      aux_sym_comment_repeat1,
    ACTIONS(123), 10,
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
  [438] = 5,
    ACTIONS(106), 1,
      sym__comment_content,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(131), 1,
      sym__dedent,
    STATE(14), 1,
      aux_sym_comment_repeat1,
    ACTIONS(129), 10,
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
  [463] = 5,
    ACTIONS(137), 1,
      sym_tag_name,
    ACTIONS(140), 2,
      sym_class,
      sym_id,
    STATE(19), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(135), 4,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
    ACTIONS(133), 5,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [488] = 2,
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
  [506] = 4,
    ACTIONS(143), 1,
      sym__indent,
    STATE(46), 1,
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
  [528] = 2,
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
  [546] = 2,
    ACTIONS(147), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(145), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [564] = 4,
    ACTIONS(143), 1,
      sym__indent,
    STATE(49), 1,
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
  [586] = 4,
    ACTIONS(143), 1,
      sym__indent,
    STATE(57), 1,
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
  [608] = 3,
    STATE(27), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(151), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(149), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [628] = 5,
    ACTIONS(153), 1,
      sym_tag_name,
    ACTIONS(156), 2,
      sym_class,
      sym_id,
    STATE(27), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(133), 4,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
    ACTIONS(135), 4,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
  [652] = 2,
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
  [670] = 4,
    ACTIONS(143), 1,
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
  [692] = 4,
    ACTIONS(143), 1,
      sym__indent,
    STATE(59), 1,
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
  [714] = 2,
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
  [732] = 2,
    ACTIONS(161), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(159), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [750] = 2,
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
  [768] = 3,
    STATE(27), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(165), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(163), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [788] = 2,
    ACTIONS(169), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(167), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [806] = 2,
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
  [824] = 2,
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
  [842] = 2,
    ACTIONS(114), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(116), 11,
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
  [860] = 2,
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
  [878] = 2,
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
      sym__indent,
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
      sym__dedent,
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
    ACTIONS(129), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(127), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [971] = 2,
    ACTIONS(195), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(193), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [988] = 2,
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
  [1004] = 8,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    ACTIONS(199), 1,
      aux_sym__attribute_token1,
    STATE(50), 1,
      aux_sym_attributes_repeat1,
    STATE(74), 1,
      sym_js_attribute_name,
    STATE(75), 1,
      sym_attribute_name,
    STATE(121), 1,
      sym_attribute,
    STATE(130), 2,
      sym__attribute,
      sym__js_attribute,
    ACTIONS(201), 3,
      aux_sym_js_attribute_name_token1,
      aux_sym_js_attribute_name_token2,
      aux_sym_js_attribute_name_token3,
  [1032] = 2,
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
  [1048] = 2,
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
  [1064] = 8,
    ACTIONS(199), 1,
      aux_sym__attribute_token1,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      aux_sym_attributes_repeat1,
    STATE(74), 1,
      sym_js_attribute_name,
    STATE(75), 1,
      sym_attribute_name,
    STATE(112), 1,
      sym_attribute,
    STATE(130), 2,
      sym__attribute,
      sym__js_attribute,
    ACTIONS(201), 3,
      aux_sym_js_attribute_name_token1,
      aux_sym_js_attribute_name_token2,
      aux_sym_js_attribute_name_token3,
  [1092] = 2,
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
  [1108] = 2,
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
  [1124] = 2,
    ACTIONS(173), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(171), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1140] = 2,
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
  [1156] = 2,
    ACTIONS(104), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(102), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1172] = 2,
    ACTIONS(123), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(121), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1188] = 2,
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
  [1204] = 2,
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
  [1220] = 2,
    ACTIONS(147), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(145), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1236] = 2,
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
  [1252] = 2,
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
  [1268] = 8,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    ACTIONS(215), 1,
      aux_sym__attribute_token1,
    STATE(62), 1,
      aux_sym_attributes_repeat1,
    STATE(74), 1,
      sym_js_attribute_name,
    STATE(75), 1,
      sym_attribute_name,
    STATE(141), 1,
      sym_attribute,
    STATE(130), 2,
      sym__attribute,
      sym__js_attribute,
    ACTIONS(218), 3,
      aux_sym_js_attribute_name_token1,
      aux_sym_js_attribute_name_token2,
      aux_sym_js_attribute_name_token3,
  [1296] = 2,
    ACTIONS(223), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(221), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1312] = 2,
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
  [1328] = 9,
    ACTIONS(225), 1,
      anon_sym_COLON,
    ACTIONS(227), 1,
      anon_sym_,
    ACTIONS(229), 1,
      anon_sym_DOT,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      sym__newline,
    STATE(33), 1,
      sym__content_after_dot,
    STATE(71), 1,
      aux_sym_tag_repeat1,
    STATE(81), 1,
      sym_attributes,
    ACTIONS(233), 2,
      sym_class,
      sym_id,
  [1357] = 9,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_COLON,
    ACTIONS(239), 1,
      anon_sym_,
    ACTIONS(241), 1,
      anon_sym_DOT,
    ACTIONS(245), 1,
      sym__newline,
    STATE(64), 1,
      sym__content_after_dot,
    STATE(67), 1,
      aux_sym_tag_repeat1,
    STATE(77), 1,
      sym_attributes,
    ACTIONS(243), 2,
      sym_class,
      sym_id,
  [1386] = 9,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_COLON,
    ACTIONS(249), 1,
      anon_sym_,
    ACTIONS(251), 1,
      sym__newline,
    STATE(54), 1,
      sym__content_after_dot,
    STATE(71), 1,
      aux_sym_tag_repeat1,
    STATE(84), 1,
      sym_attributes,
    ACTIONS(233), 2,
      sym_class,
      sym_id,
  [1415] = 9,
    ACTIONS(229), 1,
      anon_sym_DOT,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_COLON,
    ACTIONS(255), 1,
      anon_sym_,
    ACTIONS(259), 1,
      sym__newline,
    STATE(20), 1,
      sym__content_after_dot,
    STATE(65), 1,
      aux_sym_tag_repeat1,
    STATE(83), 1,
      sym_attributes,
    ACTIONS(257), 2,
      sym_class,
      sym_id,
  [1444] = 3,
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
  [1459] = 3,
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
  [1474] = 4,
    STATE(71), 1,
      aux_sym_tag_repeat1,
    ACTIONS(263), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(265), 2,
      sym_class,
      sym_id,
    ACTIONS(261), 3,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_LPAREN,
  [1491] = 4,
    ACTIONS(268), 1,
      anon_sym_,
    ACTIONS(270), 1,
      anon_sym_DOT,
    STATE(72), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(273), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1506] = 5,
    ACTIONS(275), 1,
      anon_sym_,
    ACTIONS(277), 1,
      anon_sym_DOT,
    ACTIONS(281), 1,
      anon_sym_EQ,
    STATE(72), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(279), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1523] = 5,
    ACTIONS(277), 1,
      anon_sym_DOT,
    ACTIONS(283), 1,
      anon_sym_,
    ACTIONS(287), 1,
      anon_sym_EQ,
    STATE(76), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(285), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1540] = 5,
    ACTIONS(277), 1,
      anon_sym_DOT,
    ACTIONS(289), 1,
      anon_sym_,
    ACTIONS(293), 1,
      anon_sym_EQ,
    STATE(73), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(291), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1557] = 5,
    ACTIONS(277), 1,
      anon_sym_DOT,
    ACTIONS(295), 1,
      anon_sym_,
    ACTIONS(299), 1,
      anon_sym_EQ,
    STATE(72), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(297), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1574] = 5,
    ACTIONS(241), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_COLON,
    ACTIONS(249), 1,
      anon_sym_,
    ACTIONS(251), 1,
      sym__newline,
    STATE(54), 1,
      sym__content_after_dot,
  [1590] = 2,
    STATE(26), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(17), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1600] = 2,
    ACTIONS(301), 1,
      anon_sym_,
    ACTIONS(303), 4,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1610] = 2,
    ACTIONS(305), 1,
      anon_sym_,
    ACTIONS(307), 4,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1620] = 5,
    ACTIONS(229), 1,
      anon_sym_DOT,
    ACTIONS(309), 1,
      anon_sym_COLON,
    ACTIONS(311), 1,
      anon_sym_,
    ACTIONS(313), 1,
      sym__newline,
    STATE(36), 1,
      sym__content_after_dot,
  [1636] = 5,
    ACTIONS(315), 1,
      sym_content,
    ACTIONS(318), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(321), 1,
      sym__dedent,
    STATE(82), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(104), 1,
      aux_sym__content_or_javascript,
  [1652] = 5,
    ACTIONS(225), 1,
      anon_sym_COLON,
    ACTIONS(227), 1,
      anon_sym_,
    ACTIONS(229), 1,
      anon_sym_DOT,
    ACTIONS(235), 1,
      sym__newline,
    STATE(33), 1,
      sym__content_after_dot,
  [1668] = 5,
    ACTIONS(241), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_COLON,
    ACTIONS(325), 1,
      anon_sym_,
    ACTIONS(327), 1,
      sym__newline,
    STATE(60), 1,
      sym__content_after_dot,
  [1684] = 5,
    ACTIONS(329), 1,
      sym_content,
    ACTIONS(331), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(333), 1,
      sym__dedent,
    STATE(82), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(104), 1,
      aux_sym__content_or_javascript,
  [1700] = 2,
    STATE(34), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(17), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1710] = 1,
    ACTIONS(213), 5,
      anon_sym_RPAREN,
      aux_sym__attribute_token1,
      aux_sym_js_attribute_name_token1,
      aux_sym_js_attribute_name_token2,
      aux_sym_js_attribute_name_token3,
  [1718] = 5,
    ACTIONS(329), 1,
      sym_content,
    ACTIONS(331), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(335), 1,
      sym__dedent,
    STATE(82), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(104), 1,
      aux_sym__content_or_javascript,
  [1734] = 2,
    ACTIONS(337), 1,
      anon_sym_,
    ACTIONS(339), 4,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1744] = 2,
    STATE(54), 1,
      sym_tag,
    ACTIONS(17), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1753] = 4,
    ACTIONS(341), 1,
      sym_content,
    ACTIONS(344), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(347), 1,
      sym__newline,
    STATE(91), 1,
      aux_sym__content_or_javascript,
  [1766] = 4,
    ACTIONS(329), 1,
      sym_content,
    ACTIONS(331), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(85), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(104), 1,
      aux_sym__content_or_javascript,
  [1779] = 4,
    ACTIONS(331), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(349), 1,
      sym_content,
    ACTIONS(351), 1,
      sym__newline,
    STATE(91), 1,
      aux_sym__content_or_javascript,
  [1792] = 2,
    STATE(40), 1,
      sym_tag,
    ACTIONS(29), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1801] = 4,
    ACTIONS(331), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(349), 1,
      sym_content,
    ACTIONS(353), 1,
      sym__newline,
    STATE(91), 1,
      aux_sym__content_or_javascript,
  [1814] = 4,
    ACTIONS(331), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(355), 1,
      sym_content,
    ACTIONS(357), 1,
      sym__newline,
    STATE(110), 1,
      aux_sym__content_or_javascript,
  [1827] = 2,
    STATE(36), 1,
      sym_tag,
    ACTIONS(29), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1836] = 4,
    ACTIONS(313), 1,
      sym__newline,
    ACTIONS(331), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(349), 1,
      sym_content,
    STATE(91), 1,
      aux_sym__content_or_javascript,
  [1849] = 2,
    ACTIONS(359), 2,
      anon_sym_COLON,
      anon_sym_DOT,
    ACTIONS(361), 2,
      sym__newline,
      anon_sym_,
  [1858] = 2,
    STATE(33), 1,
      sym_tag,
    ACTIONS(29), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1867] = 4,
    ACTIONS(327), 1,
      sym__newline,
    ACTIONS(331), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(349), 1,
      sym_content,
    STATE(91), 1,
      aux_sym__content_or_javascript,
  [1880] = 2,
    STATE(60), 1,
      sym_tag,
    ACTIONS(17), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1889] = 4,
    ACTIONS(331), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(349), 1,
      sym_content,
    ACTIONS(363), 1,
      sym__newline,
    STATE(91), 1,
      aux_sym__content_or_javascript,
  [1902] = 4,
    ACTIONS(331), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(349), 1,
      sym_content,
    ACTIONS(365), 1,
      sym__newline,
    STATE(91), 1,
      aux_sym__content_or_javascript,
  [1915] = 4,
    ACTIONS(329), 1,
      sym_content,
    ACTIONS(331), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(88), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(104), 1,
      aux_sym__content_or_javascript,
  [1928] = 2,
    ACTIONS(367), 2,
      anon_sym_COLON,
      anon_sym_DOT,
    ACTIONS(369), 2,
      sym__newline,
      anon_sym_,
  [1937] = 4,
    ACTIONS(331), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(349), 1,
      sym_content,
    ACTIONS(371), 1,
      sym__newline,
    STATE(91), 1,
      aux_sym__content_or_javascript,
  [1950] = 2,
    STATE(48), 1,
      sym_tag,
    ACTIONS(17), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1959] = 2,
    ACTIONS(373), 2,
      anon_sym_COLON,
      anon_sym_DOT,
    ACTIONS(375), 2,
      sym__newline,
      anon_sym_,
  [1968] = 4,
    ACTIONS(331), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(349), 1,
      sym_content,
    ACTIONS(377), 1,
      sym__newline,
    STATE(91), 1,
      aux_sym__content_or_javascript,
  [1981] = 3,
    ACTIONS(379), 1,
      sym__un_delimited_javascript_line,
    STATE(12), 1,
      sym_un_delimited_javascript,
    STATE(43), 1,
      sym__single_line_buf_code,
  [1991] = 3,
    ACTIONS(381), 1,
      anon_sym_,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
  [2001] = 2,
    ACTIONS(387), 1,
      anon_sym_,
    ACTIONS(389), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2009] = 3,
    ACTIONS(331), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(391), 1,
      sym_content,
    STATE(93), 1,
      aux_sym__content_or_javascript,
  [2019] = 3,
    ACTIONS(331), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(393), 1,
      sym_content,
    STATE(95), 1,
      aux_sym__content_or_javascript,
  [2029] = 2,
    ACTIONS(395), 1,
      anon_sym_,
    ACTIONS(397), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2037] = 3,
    ACTIONS(331), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(399), 1,
      sym_content,
    STATE(107), 1,
      aux_sym__content_or_javascript,
  [2047] = 2,
    ACTIONS(401), 1,
      anon_sym_,
    ACTIONS(403), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2055] = 2,
    ACTIONS(405), 1,
      anon_sym_,
    ACTIONS(407), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2063] = 2,
    ACTIONS(409), 1,
      anon_sym_,
    ACTIONS(411), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2071] = 3,
    ACTIONS(381), 1,
      anon_sym_,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(413), 1,
      anon_sym_RPAREN,
  [2081] = 1,
    ACTIONS(415), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [2087] = 2,
    ACTIONS(417), 1,
      anon_sym_,
    ACTIONS(419), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2095] = 2,
    ACTIONS(421), 1,
      anon_sym_,
    ACTIONS(423), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2103] = 3,
    ACTIONS(425), 1,
      anon_sym_SQUOTE,
    ACTIONS(427), 1,
      anon_sym_DQUOTE,
    STATE(116), 1,
      sym_quoted_attribute_value,
  [2113] = 2,
    ACTIONS(431), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(429), 2,
      sym__newline,
      sym_content,
  [2121] = 3,
    ACTIONS(331), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(433), 1,
      sym_content,
    STATE(103), 1,
      aux_sym__content_or_javascript,
  [2131] = 2,
    ACTIONS(435), 1,
      anon_sym_,
    ACTIONS(437), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2139] = 3,
    ACTIONS(331), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(439), 1,
      sym_content,
    STATE(101), 1,
      aux_sym__content_or_javascript,
  [2149] = 2,
    ACTIONS(441), 1,
      anon_sym_,
    ACTIONS(443), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2157] = 3,
    ACTIONS(445), 1,
      anon_sym_SQUOTE,
    ACTIONS(447), 1,
      anon_sym_DQUOTE,
    STATE(124), 1,
      sym_quoted_javascript,
  [2167] = 3,
    ACTIONS(425), 1,
      anon_sym_SQUOTE,
    ACTIONS(427), 1,
      anon_sym_DQUOTE,
    STATE(113), 1,
      sym_quoted_attribute_value,
  [2177] = 1,
    ACTIONS(193), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [2183] = 3,
    ACTIONS(445), 1,
      anon_sym_SQUOTE,
    ACTIONS(447), 1,
      anon_sym_DQUOTE,
    STATE(128), 1,
      sym_quoted_javascript,
  [2193] = 2,
    ACTIONS(449), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(321), 2,
      sym__dedent,
      sym_content,
  [2201] = 3,
    ACTIONS(331), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(451), 1,
      sym_content,
    STATE(98), 1,
      aux_sym__content_or_javascript,
  [2211] = 2,
    ACTIONS(453), 1,
      sym__un_delimited_javascript_line,
    STATE(78), 1,
      sym_un_delimited_javascript,
  [2218] = 2,
    ACTIONS(455), 1,
      anon_sym_DQUOTE,
    ACTIONS(457), 1,
      aux_sym_quoted_javascript_token2,
  [2225] = 2,
    ACTIONS(459), 1,
      anon_sym_DQUOTE,
    ACTIONS(461), 1,
      aux_sym_quoted_javascript_token2,
  [2232] = 2,
    ACTIONS(455), 1,
      anon_sym_SQUOTE,
    ACTIONS(463), 1,
      aux_sym_quoted_javascript_token1,
  [2239] = 2,
    ACTIONS(381), 1,
      anon_sym_,
    ACTIONS(383), 1,
      anon_sym_COMMA,
  [2246] = 2,
    ACTIONS(459), 1,
      anon_sym_SQUOTE,
    ACTIONS(465), 1,
      aux_sym_quoted_javascript_token1,
  [2253] = 2,
    ACTIONS(467), 1,
      sym__comment_content,
    ACTIONS(469), 1,
      sym__newline,
  [2260] = 1,
    ACTIONS(471), 1,
      anon_sym_RBRACE_RBRACE,
  [2264] = 1,
    ACTIONS(473), 1,
      aux_sym_unbuffered_code_token1,
  [2268] = 1,
    ACTIONS(475), 1,
      aux_sym__attribute_token1,
  [2272] = 1,
    ACTIONS(477), 1,
      anon_sym_DQUOTE,
  [2276] = 1,
    ACTIONS(479), 1,
      ts_builtin_sym_end,
  [2280] = 1,
    ACTIONS(481), 1,
      anon_sym_SQUOTE,
  [2284] = 1,
    ACTIONS(483), 1,
      sym__newline,
  [2288] = 1,
    ACTIONS(485), 1,
      sym__newline,
  [2292] = 1,
    ACTIONS(487), 1,
      sym__newline,
  [2296] = 1,
    ACTIONS(489), 1,
      sym__indent,
  [2300] = 1,
    ACTIONS(477), 1,
      anon_sym_SQUOTE,
  [2304] = 1,
    ACTIONS(491), 1,
      sym_delimited_javascript,
  [2308] = 1,
    ACTIONS(481), 1,
      anon_sym_DQUOTE,
  [2312] = 1,
    ACTIONS(493), 1,
      sym__indent,
  [2316] = 1,
    ACTIONS(495), 1,
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
  [SMALL_STATE(13)] = 315,
  [SMALL_STATE(14)] = 340,
  [SMALL_STATE(15)] = 365,
  [SMALL_STATE(16)] = 390,
  [SMALL_STATE(17)] = 413,
  [SMALL_STATE(18)] = 438,
  [SMALL_STATE(19)] = 463,
  [SMALL_STATE(20)] = 488,
  [SMALL_STATE(21)] = 506,
  [SMALL_STATE(22)] = 528,
  [SMALL_STATE(23)] = 546,
  [SMALL_STATE(24)] = 564,
  [SMALL_STATE(25)] = 586,
  [SMALL_STATE(26)] = 608,
  [SMALL_STATE(27)] = 628,
  [SMALL_STATE(28)] = 652,
  [SMALL_STATE(29)] = 670,
  [SMALL_STATE(30)] = 692,
  [SMALL_STATE(31)] = 714,
  [SMALL_STATE(32)] = 732,
  [SMALL_STATE(33)] = 750,
  [SMALL_STATE(34)] = 768,
  [SMALL_STATE(35)] = 788,
  [SMALL_STATE(36)] = 806,
  [SMALL_STATE(37)] = 824,
  [SMALL_STATE(38)] = 842,
  [SMALL_STATE(39)] = 860,
  [SMALL_STATE(40)] = 878,
  [SMALL_STATE(41)] = 896,
  [SMALL_STATE(42)] = 914,
  [SMALL_STATE(43)] = 933,
  [SMALL_STATE(44)] = 952,
  [SMALL_STATE(45)] = 971,
  [SMALL_STATE(46)] = 988,
  [SMALL_STATE(47)] = 1004,
  [SMALL_STATE(48)] = 1032,
  [SMALL_STATE(49)] = 1048,
  [SMALL_STATE(50)] = 1064,
  [SMALL_STATE(51)] = 1092,
  [SMALL_STATE(52)] = 1108,
  [SMALL_STATE(53)] = 1124,
  [SMALL_STATE(54)] = 1140,
  [SMALL_STATE(55)] = 1156,
  [SMALL_STATE(56)] = 1172,
  [SMALL_STATE(57)] = 1188,
  [SMALL_STATE(58)] = 1204,
  [SMALL_STATE(59)] = 1220,
  [SMALL_STATE(60)] = 1236,
  [SMALL_STATE(61)] = 1252,
  [SMALL_STATE(62)] = 1268,
  [SMALL_STATE(63)] = 1296,
  [SMALL_STATE(64)] = 1312,
  [SMALL_STATE(65)] = 1328,
  [SMALL_STATE(66)] = 1357,
  [SMALL_STATE(67)] = 1386,
  [SMALL_STATE(68)] = 1415,
  [SMALL_STATE(69)] = 1444,
  [SMALL_STATE(70)] = 1459,
  [SMALL_STATE(71)] = 1474,
  [SMALL_STATE(72)] = 1491,
  [SMALL_STATE(73)] = 1506,
  [SMALL_STATE(74)] = 1523,
  [SMALL_STATE(75)] = 1540,
  [SMALL_STATE(76)] = 1557,
  [SMALL_STATE(77)] = 1574,
  [SMALL_STATE(78)] = 1590,
  [SMALL_STATE(79)] = 1600,
  [SMALL_STATE(80)] = 1610,
  [SMALL_STATE(81)] = 1620,
  [SMALL_STATE(82)] = 1636,
  [SMALL_STATE(83)] = 1652,
  [SMALL_STATE(84)] = 1668,
  [SMALL_STATE(85)] = 1684,
  [SMALL_STATE(86)] = 1700,
  [SMALL_STATE(87)] = 1710,
  [SMALL_STATE(88)] = 1718,
  [SMALL_STATE(89)] = 1734,
  [SMALL_STATE(90)] = 1744,
  [SMALL_STATE(91)] = 1753,
  [SMALL_STATE(92)] = 1766,
  [SMALL_STATE(93)] = 1779,
  [SMALL_STATE(94)] = 1792,
  [SMALL_STATE(95)] = 1801,
  [SMALL_STATE(96)] = 1814,
  [SMALL_STATE(97)] = 1827,
  [SMALL_STATE(98)] = 1836,
  [SMALL_STATE(99)] = 1849,
  [SMALL_STATE(100)] = 1858,
  [SMALL_STATE(101)] = 1867,
  [SMALL_STATE(102)] = 1880,
  [SMALL_STATE(103)] = 1889,
  [SMALL_STATE(104)] = 1902,
  [SMALL_STATE(105)] = 1915,
  [SMALL_STATE(106)] = 1928,
  [SMALL_STATE(107)] = 1937,
  [SMALL_STATE(108)] = 1950,
  [SMALL_STATE(109)] = 1959,
  [SMALL_STATE(110)] = 1968,
  [SMALL_STATE(111)] = 1981,
  [SMALL_STATE(112)] = 1991,
  [SMALL_STATE(113)] = 2001,
  [SMALL_STATE(114)] = 2009,
  [SMALL_STATE(115)] = 2019,
  [SMALL_STATE(116)] = 2029,
  [SMALL_STATE(117)] = 2037,
  [SMALL_STATE(118)] = 2047,
  [SMALL_STATE(119)] = 2055,
  [SMALL_STATE(120)] = 2063,
  [SMALL_STATE(121)] = 2071,
  [SMALL_STATE(122)] = 2081,
  [SMALL_STATE(123)] = 2087,
  [SMALL_STATE(124)] = 2095,
  [SMALL_STATE(125)] = 2103,
  [SMALL_STATE(126)] = 2113,
  [SMALL_STATE(127)] = 2121,
  [SMALL_STATE(128)] = 2131,
  [SMALL_STATE(129)] = 2139,
  [SMALL_STATE(130)] = 2149,
  [SMALL_STATE(131)] = 2157,
  [SMALL_STATE(132)] = 2167,
  [SMALL_STATE(133)] = 2177,
  [SMALL_STATE(134)] = 2183,
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
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(96),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(68),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(68),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(122),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(137),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(137),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(143),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(145),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(150),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 5),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 5),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(68),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(68),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 7),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 3),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(66),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(66),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_content, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_content, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_content, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_content, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 5, .production_id = 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 5, .production_id = 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_un_delimited_javascript, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_un_delimited_javascript, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 6),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 6),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 4),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(80),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(79),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(71),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2), SHIFT_REPEAT(146),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 2),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 2),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 1),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 1),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 1),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 2),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 2),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_attribute_name, 1),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_attribute_name, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_name, 1),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(104),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(155),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 1),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 1),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(91),
  [344] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(155),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 3),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 4),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 4),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 2),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 3),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 3),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 3),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 3),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 4),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 4),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 3),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 3),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 3),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [479] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
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
