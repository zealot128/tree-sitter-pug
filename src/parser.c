#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 138
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 2
#define TOKEN_COUNT 32
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
  anon_sym_SQUOTE = 20,
  aux_sym_quoted_javascript_token1 = 21,
  anon_sym_DQUOTE = 22,
  aux_sym_quoted_javascript_token2 = 23,
  sym_javascript = 24,
  sym_content = 25,
  anon_sym_LBRACE_LBRACE = 26,
  anon_sym_RBRACE_RBRACE = 27,
  sym__comment_content = 28,
  sym__newline = 29,
  sym__indent = 30,
  sym__dedent = 31,
  sym_source_file = 32,
  sym_doctype = 33,
  sym_pipe_content = 34,
  sym_tag = 35,
  sym__content_after_dot = 36,
  sym_attributes = 37,
  sym_attribute = 38,
  sym__attribute = 39,
  sym__js_attribute = 40,
  sym_children = 41,
  sym__children_choice = 42,
  sym_comment = 43,
  sym_js_attribute_name = 44,
  sym_attribute_name = 45,
  sym_quoted_javascript = 46,
  sym_quoted_attribute_value = 47,
  aux_sym__content_or_javascript = 48,
  aux_sym_source_file_repeat1 = 49,
  aux_sym_tag_repeat1 = 50,
  aux_sym__content_after_dot_repeat1 = 51,
  aux_sym_attributes_repeat1 = 52,
  aux_sym__attribute_repeat1 = 53,
  aux_sym_children_repeat1 = 54,
  aux_sym_comment_repeat1 = 55,
  alias_sym_attribute_modifier = 56,
  alias_sym_attribute_value = 57,
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
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_javascript_token1] = "javascript",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_javascript_token2] = "javascript",
  [sym_javascript] = "javascript",
  [sym_content] = "content",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [sym__comment_content] = "_comment_content",
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
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
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_javascript_token1] = sym_javascript,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_javascript_token2] = sym_javascript,
  [sym_javascript] = sym_javascript,
  [sym_content] = sym_content,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [sym__comment_content] = sym__comment_content,
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [sym_javascript] = {
    .visible = true,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
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
  [sym__comment_content] = {
    .visible = false,
    .named = true,
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
      if (eof) ADVANCE(38);
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == '\'') ADVANCE(79);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == ')') ADVANCE(52);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'h') ADVANCE(27);
      if (lookahead == 's') ADVANCE(24);
      if (lookahead == 'x') ADVANCE(19);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '|') ADVANCE(45);
      if (lookahead == '}') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(86);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(47);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == ')') ADVANCE(52);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(47);
      if (lookahead == ')') ADVANCE(52);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(92);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '|') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == ')') ADVANCE(52);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 10:
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(55);
      END_STATE();
    case 12:
      if (lookahead == ']') ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 19:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 22:
      if (lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 28:
      if (lookahead == 'y') ADVANCE(22);
      END_STATE();
    case 29:
      if (lookahead == '{') ADVANCE(89);
      END_STATE();
    case 30:
      if (lookahead == '}') ADVANCE(90);
      END_STATE();
    case 31:
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 32:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 33:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 34:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 35:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 36:
      if (eof) ADVANCE(38);
      if (lookahead == ' ') SKIP(36)
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead == 'd') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 37:
      if (eof) ADVANCE(38);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == '|') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_doctype);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_strict);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__attribute_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(66);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(58);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(59);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(60);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(67);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(63);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(64);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_js_attribute_name_token1);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_js_attribute_name_token2);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_javascript);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_javascript);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead == 'd') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == ' ') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(92);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 37},
  [2] = {.lex_state = 37, .external_lex_state = 2},
  [3] = {.lex_state = 37, .external_lex_state = 2},
  [4] = {.lex_state = 37, .external_lex_state = 2},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 37, .external_lex_state = 3},
  [7] = {.lex_state = 3, .external_lex_state = 4},
  [8] = {.lex_state = 3, .external_lex_state = 4},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 3, .external_lex_state = 4},
  [11] = {.lex_state = 37, .external_lex_state = 3},
  [12] = {.lex_state = 37, .external_lex_state = 3},
  [13] = {.lex_state = 37, .external_lex_state = 3},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 37, .external_lex_state = 3},
  [16] = {.lex_state = 37},
  [17] = {.lex_state = 3, .external_lex_state = 4},
  [18] = {.lex_state = 37},
  [19] = {.lex_state = 36, .external_lex_state = 2},
  [20] = {.lex_state = 36, .external_lex_state = 2},
  [21] = {.lex_state = 36, .external_lex_state = 2},
  [22] = {.lex_state = 36, .external_lex_state = 2},
  [23] = {.lex_state = 36, .external_lex_state = 2},
  [24] = {.lex_state = 37, .external_lex_state = 5},
  [25] = {.lex_state = 37, .external_lex_state = 2},
  [26] = {.lex_state = 37, .external_lex_state = 2},
  [27] = {.lex_state = 37, .external_lex_state = 2},
  [28] = {.lex_state = 37, .external_lex_state = 2},
  [29] = {.lex_state = 37, .external_lex_state = 2},
  [30] = {.lex_state = 37, .external_lex_state = 5},
  [31] = {.lex_state = 37, .external_lex_state = 2},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 37, .external_lex_state = 5},
  [34] = {.lex_state = 37, .external_lex_state = 5},
  [35] = {.lex_state = 37, .external_lex_state = 5},
  [36] = {.lex_state = 37, .external_lex_state = 2},
  [37] = {.lex_state = 3, .external_lex_state = 4},
  [38] = {.lex_state = 36, .external_lex_state = 2},
  [39] = {.lex_state = 37, .external_lex_state = 2},
  [40] = {.lex_state = 37, .external_lex_state = 2},
  [41] = {.lex_state = 37, .external_lex_state = 2},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 37, .external_lex_state = 5},
  [44] = {.lex_state = 37, .external_lex_state = 5},
  [45] = {.lex_state = 37},
  [46] = {.lex_state = 37},
  [47] = {.lex_state = 37},
  [48] = {.lex_state = 37},
  [49] = {.lex_state = 37},
  [50] = {.lex_state = 37},
  [51] = {.lex_state = 37},
  [52] = {.lex_state = 37},
  [53] = {.lex_state = 37},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 37},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 37},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 37},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4, .external_lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4, .external_lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4, .external_lex_state = 4},
  [68] = {.lex_state = 1, .external_lex_state = 2},
  [69] = {.lex_state = 1, .external_lex_state = 2},
  [70] = {.lex_state = 4, .external_lex_state = 4},
  [71] = {.lex_state = 1, .external_lex_state = 2},
  [72] = {.lex_state = 4, .external_lex_state = 4},
  [73] = {.lex_state = 1, .external_lex_state = 4},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 1, .external_lex_state = 4},
  [76] = {.lex_state = 1, .external_lex_state = 4},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 1, .external_lex_state = 4},
  [81] = {.lex_state = 1, .external_lex_state = 4},
  [82] = {.lex_state = 4, .external_lex_state = 4},
  [83] = {.lex_state = 1, .external_lex_state = 4},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 4, .external_lex_state = 4},
  [86] = {.lex_state = 1, .external_lex_state = 4},
  [87] = {.lex_state = 1, .external_lex_state = 4},
  [88] = {.lex_state = 1, .external_lex_state = 4},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 1, .external_lex_state = 4},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 1, .external_lex_state = 2},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 1, .external_lex_state = 4},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 5, .external_lex_state = 4},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 0, .external_lex_state = 4},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 0, .external_lex_state = 4},
  [127] = {.lex_state = 0, .external_lex_state = 4},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0, .external_lex_state = 5},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 0, .external_lex_state = 5},
  [137] = {.lex_state = 0, .external_lex_state = 4},
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
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(130),
    [sym_doctype] = STATE(16),
    [sym_tag] = STATE(16),
    [sym_comment] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_doctype] = ACTIONS(5),
    [anon_sym_SLASH_SLASH] = ACTIONS(7),
    [sym_tag_name] = ACTIONS(9),
    [sym_class] = ACTIONS(11),
    [sym_id] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(15), 1,
      anon_sym_doctype,
    ACTIONS(17), 1,
      anon_sym_PIPE,
    ACTIONS(20), 1,
      sym_tag_name,
    ACTIONS(23), 2,
      sym_class,
      sym_id,
    ACTIONS(13), 3,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
    STATE(2), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [25] = 7,
    ACTIONS(28), 1,
      anon_sym_doctype,
    ACTIONS(30), 1,
      anon_sym_PIPE,
    ACTIONS(32), 1,
      sym_tag_name,
    ACTIONS(36), 1,
      sym__dedent,
    ACTIONS(26), 2,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
    ACTIONS(34), 2,
      sym_class,
      sym_id,
    STATE(2), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [52] = 7,
    ACTIONS(28), 1,
      anon_sym_doctype,
    ACTIONS(30), 1,
      anon_sym_PIPE,
    ACTIONS(32), 1,
      sym_tag_name,
    ACTIONS(38), 1,
      sym__dedent,
    ACTIONS(26), 2,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
    ACTIONS(34), 2,
      sym_class,
      sym_id,
    STATE(2), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [79] = 8,
    ACTIONS(40), 1,
      anon_sym_RPAREN,
    ACTIONS(42), 1,
      aux_sym__attribute_token1,
    STATE(9), 1,
      aux_sym_attributes_repeat1,
    STATE(54), 1,
      sym_js_attribute_name,
    STATE(56), 1,
      sym_attribute_name,
    STATE(116), 1,
      sym_attribute,
    ACTIONS(44), 2,
      aux_sym_js_attribute_name_token1,
      aux_sym_js_attribute_name_token2,
    STATE(102), 2,
      sym__attribute,
      sym__js_attribute,
  [106] = 4,
    ACTIONS(50), 1,
      sym__indent,
    STATE(25), 1,
      sym_children,
    ACTIONS(48), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(46), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [125] = 9,
    ACTIONS(52), 1,
      anon_sym_COLON,
    ACTIONS(54), 1,
      anon_sym_,
    ACTIONS(56), 1,
      anon_sym_DOT,
    ACTIONS(58), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      sym__newline,
    STATE(10), 1,
      aux_sym_tag_repeat1,
    STATE(28), 1,
      sym__content_after_dot,
    STATE(64), 1,
      sym_attributes,
    ACTIONS(60), 2,
      sym_class,
      sym_id,
  [154] = 9,
    ACTIONS(58), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      anon_sym_COLON,
    ACTIONS(66), 1,
      anon_sym_,
    ACTIONS(68), 1,
      anon_sym_DOT,
    ACTIONS(72), 1,
      sym__newline,
    STATE(17), 1,
      aux_sym_tag_repeat1,
    STATE(49), 1,
      sym__content_after_dot,
    STATE(62), 1,
      sym_attributes,
    ACTIONS(70), 2,
      sym_class,
      sym_id,
  [183] = 8,
    ACTIONS(74), 1,
      anon_sym_RPAREN,
    ACTIONS(76), 1,
      aux_sym__attribute_token1,
    STATE(9), 1,
      aux_sym_attributes_repeat1,
    STATE(54), 1,
      sym_js_attribute_name,
    STATE(56), 1,
      sym_attribute_name,
    STATE(121), 1,
      sym_attribute,
    ACTIONS(79), 2,
      aux_sym_js_attribute_name_token1,
      aux_sym_js_attribute_name_token2,
    STATE(102), 2,
      sym__attribute,
      sym__js_attribute,
  [210] = 9,
    ACTIONS(56), 1,
      anon_sym_DOT,
    ACTIONS(58), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_COLON,
    ACTIONS(84), 1,
      anon_sym_,
    ACTIONS(88), 1,
      sym__newline,
    STATE(27), 1,
      sym__content_after_dot,
    STATE(37), 1,
      aux_sym_tag_repeat1,
    STATE(67), 1,
      sym_attributes,
    ACTIONS(86), 2,
      sym_class,
      sym_id,
  [239] = 4,
    ACTIONS(50), 1,
      sym__indent,
    STATE(36), 1,
      sym_children,
    ACTIONS(92), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(90), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [258] = 4,
    ACTIONS(50), 1,
      sym__indent,
    STATE(27), 1,
      sym_children,
    ACTIONS(96), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(94), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [277] = 4,
    ACTIONS(50), 1,
      sym__indent,
    STATE(40), 1,
      sym_children,
    ACTIONS(100), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(98), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [296] = 8,
    ACTIONS(42), 1,
      aux_sym__attribute_token1,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      aux_sym_attributes_repeat1,
    STATE(54), 1,
      sym_js_attribute_name,
    STATE(56), 1,
      sym_attribute_name,
    STATE(106), 1,
      sym_attribute,
    ACTIONS(44), 2,
      aux_sym_js_attribute_name_token1,
      aux_sym_js_attribute_name_token2,
    STATE(102), 2,
      sym__attribute,
      sym__js_attribute,
  [323] = 4,
    ACTIONS(50), 1,
      sym__indent,
    STATE(29), 1,
      sym_children,
    ACTIONS(106), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(104), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [342] = 6,
    ACTIONS(5), 1,
      anon_sym_doctype,
    ACTIONS(7), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(9), 1,
      sym_tag_name,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 2,
      sym_class,
      sym_id,
    STATE(18), 4,
      sym_doctype,
      sym_tag,
      sym_comment,
      aux_sym_source_file_repeat1,
  [365] = 9,
    ACTIONS(58), 1,
      anon_sym_LPAREN,
    ACTIONS(68), 1,
      anon_sym_DOT,
    ACTIONS(110), 1,
      anon_sym_COLON,
    ACTIONS(112), 1,
      anon_sym_,
    ACTIONS(114), 1,
      sym__newline,
    STATE(37), 1,
      aux_sym_tag_repeat1,
    STATE(50), 1,
      sym__content_after_dot,
    STATE(70), 1,
      sym_attributes,
    ACTIONS(86), 2,
      sym_class,
      sym_id,
  [394] = 6,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 1,
      anon_sym_doctype,
    ACTIONS(121), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 1,
      sym_tag_name,
    ACTIONS(127), 2,
      sym_class,
      sym_id,
    STATE(18), 4,
      sym_doctype,
      sym_tag,
      sym_comment,
      aux_sym_source_file_repeat1,
  [417] = 5,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    ACTIONS(134), 1,
      sym__comment_content,
    ACTIONS(136), 1,
      sym__dedent,
    STATE(22), 1,
      aux_sym_comment_repeat1,
    ACTIONS(132), 5,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
  [437] = 4,
    ACTIONS(142), 1,
      sym__comment_content,
    STATE(20), 1,
      aux_sym_comment_repeat1,
    ACTIONS(138), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(140), 5,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
  [455] = 5,
    ACTIONS(134), 1,
      sym__comment_content,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 1,
      sym__dedent,
    STATE(23), 1,
      aux_sym_comment_repeat1,
    ACTIONS(147), 5,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
  [475] = 5,
    ACTIONS(134), 1,
      sym__comment_content,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 1,
      sym__dedent,
    STATE(20), 1,
      aux_sym_comment_repeat1,
    ACTIONS(147), 5,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
  [495] = 5,
    ACTIONS(134), 1,
      sym__comment_content,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 1,
      sym__dedent,
    STATE(20), 1,
      aux_sym_comment_repeat1,
    ACTIONS(153), 5,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
  [515] = 4,
    ACTIONS(157), 1,
      sym__indent,
    STATE(52), 1,
      sym_children,
    ACTIONS(106), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(104), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [532] = 2,
    ACTIONS(106), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(104), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [545] = 2,
    ACTIONS(161), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(159), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [558] = 2,
    ACTIONS(100), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(98), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [571] = 2,
    ACTIONS(96), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(94), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [584] = 2,
    ACTIONS(92), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(90), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [597] = 4,
    ACTIONS(157), 1,
      sym__indent,
    STATE(51), 1,
      sym_children,
    ACTIONS(92), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(90), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [614] = 2,
    ACTIONS(165), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(163), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [627] = 3,
    ACTIONS(30), 1,
      anon_sym_PIPE,
    ACTIONS(34), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(4), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [642] = 4,
    ACTIONS(157), 1,
      sym__indent,
    STATE(46), 1,
      sym_children,
    ACTIONS(100), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(98), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [659] = 4,
    ACTIONS(157), 1,
      sym__indent,
    STATE(50), 1,
      sym_children,
    ACTIONS(96), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(94), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [676] = 4,
    ACTIONS(157), 1,
      sym__indent,
    STATE(59), 1,
      sym_children,
    ACTIONS(48), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(46), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [693] = 2,
    ACTIONS(169), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(167), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [706] = 4,
    STATE(37), 1,
      aux_sym_tag_repeat1,
    ACTIONS(173), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(175), 2,
      sym_class,
      sym_id,
    ACTIONS(171), 3,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_LPAREN,
  [723] = 2,
    ACTIONS(138), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(140), 6,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      sym__comment_content,
  [736] = 2,
    ACTIONS(180), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(178), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [749] = 2,
    ACTIONS(48), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(46), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [762] = 2,
    ACTIONS(184), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(182), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [775] = 3,
    ACTIONS(30), 1,
      anon_sym_PIPE,
    ACTIONS(34), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(3), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [790] = 3,
    ACTIONS(186), 1,
      sym__indent,
    ACTIONS(132), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(130), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [804] = 3,
    ACTIONS(192), 1,
      sym__indent,
    ACTIONS(190), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(188), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [818] = 2,
    ACTIONS(184), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(182), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [829] = 2,
    ACTIONS(48), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(46), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [840] = 2,
    ACTIONS(196), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(194), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [851] = 2,
    ACTIONS(147), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(145), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [862] = 2,
    ACTIONS(96), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(94), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [873] = 2,
    ACTIONS(100), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(98), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [884] = 2,
    ACTIONS(169), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(167), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [895] = 2,
    ACTIONS(92), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(90), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [906] = 2,
    ACTIONS(161), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(159), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [917] = 5,
    ACTIONS(198), 1,
      anon_sym_,
    ACTIONS(200), 1,
      anon_sym_DOT,
    ACTIONS(204), 1,
      anon_sym_EQ,
    STATE(58), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(202), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [934] = 2,
    ACTIONS(208), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(206), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [945] = 5,
    ACTIONS(200), 1,
      anon_sym_DOT,
    ACTIONS(210), 1,
      anon_sym_,
    ACTIONS(214), 1,
      anon_sym_EQ,
    STATE(60), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(212), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [962] = 2,
    ACTIONS(153), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(151), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [973] = 5,
    ACTIONS(200), 1,
      anon_sym_DOT,
    ACTIONS(216), 1,
      anon_sym_,
    ACTIONS(220), 1,
      anon_sym_EQ,
    STATE(61), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(218), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [990] = 2,
    ACTIONS(106), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(104), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [1001] = 5,
    ACTIONS(200), 1,
      anon_sym_DOT,
    ACTIONS(222), 1,
      anon_sym_,
    ACTIONS(226), 1,
      anon_sym_EQ,
    STATE(61), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(224), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1018] = 4,
    ACTIONS(228), 1,
      anon_sym_,
    ACTIONS(230), 1,
      anon_sym_DOT,
    STATE(61), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(233), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1033] = 5,
    ACTIONS(68), 1,
      anon_sym_DOT,
    ACTIONS(110), 1,
      anon_sym_COLON,
    ACTIONS(112), 1,
      anon_sym_,
    ACTIONS(114), 1,
      sym__newline,
    STATE(50), 1,
      sym__content_after_dot,
  [1049] = 2,
    ACTIONS(235), 1,
      anon_sym_,
    ACTIONS(237), 4,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1059] = 5,
    ACTIONS(56), 1,
      anon_sym_DOT,
    ACTIONS(82), 1,
      anon_sym_COLON,
    ACTIONS(84), 1,
      anon_sym_,
    ACTIONS(88), 1,
      sym__newline,
    STATE(27), 1,
      sym__content_after_dot,
  [1075] = 2,
    ACTIONS(239), 1,
      anon_sym_,
    ACTIONS(241), 4,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1085] = 2,
    ACTIONS(243), 1,
      anon_sym_,
    ACTIONS(245), 4,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1095] = 5,
    ACTIONS(56), 1,
      anon_sym_DOT,
    ACTIONS(247), 1,
      anon_sym_COLON,
    ACTIONS(249), 1,
      anon_sym_,
    ACTIONS(251), 1,
      sym__newline,
    STATE(40), 1,
      sym__content_after_dot,
  [1111] = 5,
    ACTIONS(253), 1,
      sym_content,
    ACTIONS(255), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(257), 1,
      sym__dedent,
    STATE(69), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(76), 1,
      aux_sym__content_or_javascript,
  [1127] = 5,
    ACTIONS(259), 1,
      sym_content,
    ACTIONS(262), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(265), 1,
      sym__dedent,
    STATE(69), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(76), 1,
      aux_sym__content_or_javascript,
  [1143] = 5,
    ACTIONS(68), 1,
      anon_sym_DOT,
    ACTIONS(267), 1,
      anon_sym_COLON,
    ACTIONS(269), 1,
      anon_sym_,
    ACTIONS(271), 1,
      sym__newline,
    STATE(46), 1,
      sym__content_after_dot,
  [1159] = 5,
    ACTIONS(253), 1,
      sym_content,
    ACTIONS(255), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(273), 1,
      sym__dedent,
    STATE(69), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(76), 1,
      aux_sym__content_or_javascript,
  [1175] = 2,
    ACTIONS(275), 2,
      anon_sym_COLON,
      anon_sym_DOT,
    ACTIONS(277), 2,
      sym__newline,
      anon_sym_,
  [1184] = 4,
    ACTIONS(255), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(279), 1,
      sym_content,
    ACTIONS(281), 1,
      sym__newline,
    STATE(86), 1,
      aux_sym__content_or_javascript,
  [1197] = 2,
    STATE(46), 1,
      sym_tag,
    ACTIONS(11), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1206] = 4,
    ACTIONS(251), 1,
      sym__newline,
    ACTIONS(255), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(279), 1,
      sym_content,
    STATE(86), 1,
      aux_sym__content_or_javascript,
  [1219] = 4,
    ACTIONS(255), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(279), 1,
      sym_content,
    ACTIONS(283), 1,
      sym__newline,
    STATE(86), 1,
      aux_sym__content_or_javascript,
  [1232] = 2,
    STATE(27), 1,
      sym_tag,
    ACTIONS(34), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1241] = 4,
    ACTIONS(253), 1,
      sym_content,
    ACTIONS(255), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(68), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(76), 1,
      aux_sym__content_or_javascript,
  [1254] = 2,
    STATE(50), 1,
      sym_tag,
    ACTIONS(11), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1263] = 4,
    ACTIONS(255), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(285), 1,
      sym_content,
    ACTIONS(287), 1,
      sym__newline,
    STATE(73), 1,
      aux_sym__content_or_javascript,
  [1276] = 4,
    ACTIONS(255), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(271), 1,
      sym__newline,
    ACTIONS(279), 1,
      sym_content,
    STATE(86), 1,
      aux_sym__content_or_javascript,
  [1289] = 2,
    ACTIONS(289), 2,
      anon_sym_COLON,
      anon_sym_DOT,
    ACTIONS(291), 2,
      sym__newline,
      anon_sym_,
  [1298] = 4,
    ACTIONS(255), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(279), 1,
      sym_content,
    ACTIONS(293), 1,
      sym__newline,
    STATE(86), 1,
      aux_sym__content_or_javascript,
  [1311] = 2,
    STATE(59), 1,
      sym_tag,
    ACTIONS(11), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1320] = 2,
    ACTIONS(295), 2,
      anon_sym_COLON,
      anon_sym_DOT,
    ACTIONS(297), 2,
      sym__newline,
      anon_sym_,
  [1329] = 4,
    ACTIONS(299), 1,
      sym_content,
    ACTIONS(302), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(305), 1,
      sym__newline,
    STATE(86), 1,
      aux_sym__content_or_javascript,
  [1342] = 4,
    ACTIONS(255), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(279), 1,
      sym_content,
    ACTIONS(307), 1,
      sym__newline,
    STATE(86), 1,
      aux_sym__content_or_javascript,
  [1355] = 4,
    ACTIONS(255), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(279), 1,
      sym_content,
    ACTIONS(309), 1,
      sym__newline,
    STATE(86), 1,
      aux_sym__content_or_javascript,
  [1368] = 2,
    STATE(40), 1,
      sym_tag,
    ACTIONS(34), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1377] = 4,
    ACTIONS(253), 1,
      sym_content,
    ACTIONS(255), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(71), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(76), 1,
      aux_sym__content_or_javascript,
  [1390] = 1,
    ACTIONS(74), 4,
      anon_sym_RPAREN,
      aux_sym__attribute_token1,
      aux_sym_js_attribute_name_token1,
      aux_sym_js_attribute_name_token2,
  [1397] = 4,
    ACTIONS(255), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(279), 1,
      sym_content,
    ACTIONS(311), 1,
      sym__newline,
    STATE(86), 1,
      aux_sym__content_or_javascript,
  [1410] = 2,
    STATE(25), 1,
      sym_tag,
    ACTIONS(34), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1419] = 3,
    ACTIONS(313), 1,
      anon_sym_SQUOTE,
    ACTIONS(315), 1,
      anon_sym_DQUOTE,
    STATE(100), 1,
      sym_quoted_attribute_value,
  [1429] = 2,
    ACTIONS(317), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(265), 2,
      sym__dedent,
      sym_content,
  [1437] = 2,
    ACTIONS(319), 1,
      anon_sym_,
    ACTIONS(321), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1445] = 2,
    ACTIONS(323), 1,
      anon_sym_,
    ACTIONS(325), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1453] = 2,
    ACTIONS(329), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(327), 2,
      sym__newline,
      sym_content,
  [1461] = 3,
    ACTIONS(255), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(331), 1,
      sym_content,
    STATE(87), 1,
      aux_sym__content_or_javascript,
  [1471] = 2,
    ACTIONS(333), 1,
      anon_sym_,
    ACTIONS(335), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1479] = 3,
    ACTIONS(313), 1,
      anon_sym_SQUOTE,
    ACTIONS(315), 1,
      anon_sym_DQUOTE,
    STATE(109), 1,
      sym_quoted_attribute_value,
  [1489] = 2,
    ACTIONS(337), 1,
      anon_sym_,
    ACTIONS(339), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1497] = 2,
    ACTIONS(341), 1,
      anon_sym_,
    ACTIONS(343), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1505] = 2,
    ACTIONS(345), 1,
      anon_sym_,
    ACTIONS(347), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1513] = 2,
    ACTIONS(349), 1,
      anon_sym_,
    ACTIONS(351), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1521] = 3,
    ACTIONS(353), 1,
      anon_sym_,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(357), 1,
      anon_sym_RPAREN,
  [1531] = 3,
    ACTIONS(255), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(359), 1,
      sym_content,
    STATE(75), 1,
      aux_sym__content_or_javascript,
  [1541] = 1,
    ACTIONS(361), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [1547] = 2,
    ACTIONS(363), 1,
      anon_sym_,
    ACTIONS(365), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1555] = 3,
    ACTIONS(255), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(367), 1,
      sym_content,
    STATE(92), 1,
      aux_sym__content_or_javascript,
  [1565] = 3,
    ACTIONS(255), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(369), 1,
      sym_content,
    STATE(83), 1,
      aux_sym__content_or_javascript,
  [1575] = 3,
    ACTIONS(371), 1,
      anon_sym_SQUOTE,
    ACTIONS(373), 1,
      anon_sym_DQUOTE,
    STATE(115), 1,
      sym_quoted_javascript,
  [1585] = 3,
    ACTIONS(255), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(375), 1,
      sym_content,
    STATE(81), 1,
      aux_sym__content_or_javascript,
  [1595] = 3,
    ACTIONS(371), 1,
      anon_sym_SQUOTE,
    ACTIONS(373), 1,
      anon_sym_DQUOTE,
    STATE(96), 1,
      sym_quoted_javascript,
  [1605] = 2,
    ACTIONS(377), 1,
      anon_sym_,
    ACTIONS(379), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1613] = 3,
    ACTIONS(353), 1,
      anon_sym_,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(381), 1,
      anon_sym_RPAREN,
  [1623] = 3,
    ACTIONS(255), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(383), 1,
      sym_content,
    STATE(88), 1,
      aux_sym__content_or_javascript,
  [1633] = 2,
    ACTIONS(385), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      aux_sym_quoted_javascript_token1,
  [1640] = 2,
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
    ACTIONS(391), 1,
      aux_sym_quoted_javascript_token1,
  [1647] = 2,
    ACTIONS(393), 1,
      sym__comment_content,
    ACTIONS(395), 1,
      sym__newline,
  [1654] = 2,
    ACTIONS(353), 1,
      anon_sym_,
    ACTIONS(355), 1,
      anon_sym_COMMA,
  [1661] = 2,
    ACTIONS(385), 1,
      anon_sym_DQUOTE,
    ACTIONS(397), 1,
      aux_sym_quoted_javascript_token2,
  [1668] = 2,
    ACTIONS(389), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      aux_sym_quoted_javascript_token2,
  [1675] = 1,
    ACTIONS(401), 1,
      sym__newline,
  [1679] = 1,
    ACTIONS(403), 1,
      sym_javascript,
  [1683] = 1,
    ACTIONS(405), 1,
      sym__newline,
  [1687] = 1,
    ACTIONS(407), 1,
      sym__newline,
  [1691] = 1,
    ACTIONS(409), 1,
      anon_sym_RBRACE_RBRACE,
  [1695] = 1,
    ACTIONS(411), 1,
      sym__indent,
  [1699] = 1,
    ACTIONS(413), 1,
      ts_builtin_sym_end,
  [1703] = 1,
    ACTIONS(415), 1,
      anon_sym_DQUOTE,
  [1707] = 1,
    ACTIONS(415), 1,
      anon_sym_SQUOTE,
  [1711] = 1,
    ACTIONS(417), 1,
      anon_sym_DQUOTE,
  [1715] = 1,
    ACTIONS(417), 1,
      anon_sym_SQUOTE,
  [1719] = 1,
    ACTIONS(419), 1,
      aux_sym__attribute_token1,
  [1723] = 1,
    ACTIONS(421), 1,
      sym__indent,
  [1727] = 1,
    ACTIONS(423), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 79,
  [SMALL_STATE(6)] = 106,
  [SMALL_STATE(7)] = 125,
  [SMALL_STATE(8)] = 154,
  [SMALL_STATE(9)] = 183,
  [SMALL_STATE(10)] = 210,
  [SMALL_STATE(11)] = 239,
  [SMALL_STATE(12)] = 258,
  [SMALL_STATE(13)] = 277,
  [SMALL_STATE(14)] = 296,
  [SMALL_STATE(15)] = 323,
  [SMALL_STATE(16)] = 342,
  [SMALL_STATE(17)] = 365,
  [SMALL_STATE(18)] = 394,
  [SMALL_STATE(19)] = 417,
  [SMALL_STATE(20)] = 437,
  [SMALL_STATE(21)] = 455,
  [SMALL_STATE(22)] = 475,
  [SMALL_STATE(23)] = 495,
  [SMALL_STATE(24)] = 515,
  [SMALL_STATE(25)] = 532,
  [SMALL_STATE(26)] = 545,
  [SMALL_STATE(27)] = 558,
  [SMALL_STATE(28)] = 571,
  [SMALL_STATE(29)] = 584,
  [SMALL_STATE(30)] = 597,
  [SMALL_STATE(31)] = 614,
  [SMALL_STATE(32)] = 627,
  [SMALL_STATE(33)] = 642,
  [SMALL_STATE(34)] = 659,
  [SMALL_STATE(35)] = 676,
  [SMALL_STATE(36)] = 693,
  [SMALL_STATE(37)] = 706,
  [SMALL_STATE(38)] = 723,
  [SMALL_STATE(39)] = 736,
  [SMALL_STATE(40)] = 749,
  [SMALL_STATE(41)] = 762,
  [SMALL_STATE(42)] = 775,
  [SMALL_STATE(43)] = 790,
  [SMALL_STATE(44)] = 804,
  [SMALL_STATE(45)] = 818,
  [SMALL_STATE(46)] = 829,
  [SMALL_STATE(47)] = 840,
  [SMALL_STATE(48)] = 851,
  [SMALL_STATE(49)] = 862,
  [SMALL_STATE(50)] = 873,
  [SMALL_STATE(51)] = 884,
  [SMALL_STATE(52)] = 895,
  [SMALL_STATE(53)] = 906,
  [SMALL_STATE(54)] = 917,
  [SMALL_STATE(55)] = 934,
  [SMALL_STATE(56)] = 945,
  [SMALL_STATE(57)] = 962,
  [SMALL_STATE(58)] = 973,
  [SMALL_STATE(59)] = 990,
  [SMALL_STATE(60)] = 1001,
  [SMALL_STATE(61)] = 1018,
  [SMALL_STATE(62)] = 1033,
  [SMALL_STATE(63)] = 1049,
  [SMALL_STATE(64)] = 1059,
  [SMALL_STATE(65)] = 1075,
  [SMALL_STATE(66)] = 1085,
  [SMALL_STATE(67)] = 1095,
  [SMALL_STATE(68)] = 1111,
  [SMALL_STATE(69)] = 1127,
  [SMALL_STATE(70)] = 1143,
  [SMALL_STATE(71)] = 1159,
  [SMALL_STATE(72)] = 1175,
  [SMALL_STATE(73)] = 1184,
  [SMALL_STATE(74)] = 1197,
  [SMALL_STATE(75)] = 1206,
  [SMALL_STATE(76)] = 1219,
  [SMALL_STATE(77)] = 1232,
  [SMALL_STATE(78)] = 1241,
  [SMALL_STATE(79)] = 1254,
  [SMALL_STATE(80)] = 1263,
  [SMALL_STATE(81)] = 1276,
  [SMALL_STATE(82)] = 1289,
  [SMALL_STATE(83)] = 1298,
  [SMALL_STATE(84)] = 1311,
  [SMALL_STATE(85)] = 1320,
  [SMALL_STATE(86)] = 1329,
  [SMALL_STATE(87)] = 1342,
  [SMALL_STATE(88)] = 1355,
  [SMALL_STATE(89)] = 1368,
  [SMALL_STATE(90)] = 1377,
  [SMALL_STATE(91)] = 1390,
  [SMALL_STATE(92)] = 1397,
  [SMALL_STATE(93)] = 1410,
  [SMALL_STATE(94)] = 1419,
  [SMALL_STATE(95)] = 1429,
  [SMALL_STATE(96)] = 1437,
  [SMALL_STATE(97)] = 1445,
  [SMALL_STATE(98)] = 1453,
  [SMALL_STATE(99)] = 1461,
  [SMALL_STATE(100)] = 1471,
  [SMALL_STATE(101)] = 1479,
  [SMALL_STATE(102)] = 1489,
  [SMALL_STATE(103)] = 1497,
  [SMALL_STATE(104)] = 1505,
  [SMALL_STATE(105)] = 1513,
  [SMALL_STATE(106)] = 1521,
  [SMALL_STATE(107)] = 1531,
  [SMALL_STATE(108)] = 1541,
  [SMALL_STATE(109)] = 1547,
  [SMALL_STATE(110)] = 1555,
  [SMALL_STATE(111)] = 1565,
  [SMALL_STATE(112)] = 1575,
  [SMALL_STATE(113)] = 1585,
  [SMALL_STATE(114)] = 1595,
  [SMALL_STATE(115)] = 1605,
  [SMALL_STATE(116)] = 1613,
  [SMALL_STATE(117)] = 1623,
  [SMALL_STATE(118)] = 1633,
  [SMALL_STATE(119)] = 1640,
  [SMALL_STATE(120)] = 1647,
  [SMALL_STATE(121)] = 1654,
  [SMALL_STATE(122)] = 1661,
  [SMALL_STATE(123)] = 1668,
  [SMALL_STATE(124)] = 1675,
  [SMALL_STATE(125)] = 1679,
  [SMALL_STATE(126)] = 1683,
  [SMALL_STATE(127)] = 1687,
  [SMALL_STATE(128)] = 1691,
  [SMALL_STATE(129)] = 1695,
  [SMALL_STATE(130)] = 1699,
  [SMALL_STATE(131)] = 1703,
  [SMALL_STATE(132)] = 1707,
  [SMALL_STATE(133)] = 1711,
  [SMALL_STATE(134)] = 1715,
  [SMALL_STATE(135)] = 1719,
  [SMALL_STATE(136)] = 1723,
  [SMALL_STATE(137)] = 1727,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(80),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(7),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(7),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 2),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(65),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(66),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(108),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(120),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(127),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 5),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 5),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 5, .production_id = 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 5, .production_id = 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_content, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_content, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 7),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(37),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_content, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_content, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 6),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 6),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 1),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 2),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 2),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2), SHIFT_REPEAT(135),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_name, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_attribute_name, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_attribute_name, 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(76),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(125),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(86),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(125),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 4),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 4),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 3),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 4),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 4),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 3),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 3),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 3),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 2),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 3),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 3),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 3),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 3),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [413] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
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
