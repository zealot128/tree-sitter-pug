#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 137
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 2
#define TOKEN_COUNT 31
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
  sym_js_attribute_name = 18,
  anon_sym_SQUOTE = 19,
  aux_sym_quoted_javascript_token1 = 20,
  anon_sym_DQUOTE = 21,
  aux_sym_quoted_javascript_token2 = 22,
  sym_javascript = 23,
  sym_content = 24,
  anon_sym_LBRACE_LBRACE = 25,
  anon_sym_RBRACE_RBRACE = 26,
  sym__comment_content = 27,
  sym__newline = 28,
  sym__indent = 29,
  sym__dedent = 30,
  sym_source_file = 31,
  sym_doctype = 32,
  sym_pipe_content = 33,
  sym_tag = 34,
  sym__content_after_dot = 35,
  sym_attributes = 36,
  sym_attribute = 37,
  sym__attribute = 38,
  sym__js_attribute = 39,
  sym_children = 40,
  sym__children_choice = 41,
  sym_comment = 42,
  sym_attribute_name = 43,
  sym_quoted_javascript = 44,
  sym_quoted_attribute_value = 45,
  aux_sym__content_or_javascript = 46,
  aux_sym_source_file_repeat1 = 47,
  aux_sym_tag_repeat1 = 48,
  aux_sym__content_after_dot_repeat1 = 49,
  aux_sym_attributes_repeat1 = 50,
  aux_sym__attribute_repeat1 = 51,
  aux_sym_children_repeat1 = 52,
  aux_sym_comment_repeat1 = 53,
  alias_sym_attribute_modifier = 54,
  alias_sym_attribute_value = 55,
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
  [sym_js_attribute_name] = "js_attribute_name",
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
  [sym_js_attribute_name] = sym_js_attribute_name,
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
  [sym_js_attribute_name] = {
    .visible = true,
    .named = true,
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
      if (eof) ADVANCE(36);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '\'') ADVANCE(76);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == ',') ADVANCE(49);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == 'd') ADVANCE(20);
      if (lookahead == 'h') ADVANCE(26);
      if (lookahead == 's') ADVANCE(23);
      if (lookahead == 'x') ADVANCE(18);
      if (lookahead == '{') ADVANCE(28);
      if (lookahead == '|') ADVANCE(43);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '{') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(83);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == ',') ADVANCE(49);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == ',') ADVANCE(49);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(89);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '|') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(53);
      END_STATE();
    case 11:
      if (lookahead == ']') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 18:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 21:
      if (lookahead == 'p') ADVANCE(14);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 27:
      if (lookahead == 'y') ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == '{') ADVANCE(86);
      END_STATE();
    case 29:
      if (lookahead == '}') ADVANCE(87);
      END_STATE();
    case 30:
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 31:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(71);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 32:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 33:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 34:
      if (eof) ADVANCE(36);
      if (lookahead == ' ') SKIP(34)
      if (lookahead == '#') ADVANCE(93);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == 'd') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 35:
      if (eof) ADVANCE(36);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead == '|') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_doctype);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_strict);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(71);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__attribute_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(55);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(57);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(58);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(65);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(61);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(62);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(71);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(72);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_js_attribute_name);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_javascript);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_javascript);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead == '#') ADVANCE(93);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == 'd') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ' ') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(89);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '/') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(72);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 35},
  [2] = {.lex_state = 35, .external_lex_state = 2},
  [3] = {.lex_state = 35, .external_lex_state = 2},
  [4] = {.lex_state = 35, .external_lex_state = 2},
  [5] = {.lex_state = 3, .external_lex_state = 3},
  [6] = {.lex_state = 35},
  [7] = {.lex_state = 35, .external_lex_state = 4},
  [8] = {.lex_state = 35, .external_lex_state = 4},
  [9] = {.lex_state = 35, .external_lex_state = 4},
  [10] = {.lex_state = 3, .external_lex_state = 3},
  [11] = {.lex_state = 35, .external_lex_state = 4},
  [12] = {.lex_state = 3, .external_lex_state = 3},
  [13] = {.lex_state = 35, .external_lex_state = 4},
  [14] = {.lex_state = 3, .external_lex_state = 3},
  [15] = {.lex_state = 35},
  [16] = {.lex_state = 34, .external_lex_state = 2},
  [17] = {.lex_state = 34, .external_lex_state = 2},
  [18] = {.lex_state = 34, .external_lex_state = 2},
  [19] = {.lex_state = 34, .external_lex_state = 2},
  [20] = {.lex_state = 34, .external_lex_state = 2},
  [21] = {.lex_state = 35, .external_lex_state = 5},
  [22] = {.lex_state = 35, .external_lex_state = 2},
  [23] = {.lex_state = 35, .external_lex_state = 2},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 34, .external_lex_state = 2},
  [26] = {.lex_state = 35, .external_lex_state = 2},
  [27] = {.lex_state = 35, .external_lex_state = 2},
  [28] = {.lex_state = 35, .external_lex_state = 2},
  [29] = {.lex_state = 35, .external_lex_state = 5},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 35, .external_lex_state = 2},
  [32] = {.lex_state = 35, .external_lex_state = 5},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 35, .external_lex_state = 2},
  [35] = {.lex_state = 35, .external_lex_state = 2},
  [36] = {.lex_state = 35, .external_lex_state = 2},
  [37] = {.lex_state = 3, .external_lex_state = 3},
  [38] = {.lex_state = 35, .external_lex_state = 5},
  [39] = {.lex_state = 35, .external_lex_state = 2},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 35, .external_lex_state = 5},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 35, .external_lex_state = 5},
  [44] = {.lex_state = 35, .external_lex_state = 5},
  [45] = {.lex_state = 35},
  [46] = {.lex_state = 35},
  [47] = {.lex_state = 35},
  [48] = {.lex_state = 35},
  [49] = {.lex_state = 35},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 35},
  [53] = {.lex_state = 35},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 35},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 35},
  [59] = {.lex_state = 35},
  [60] = {.lex_state = 35},
  [61] = {.lex_state = 35},
  [62] = {.lex_state = 4, .external_lex_state = 3},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 1, .external_lex_state = 2},
  [65] = {.lex_state = 4, .external_lex_state = 3},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 1, .external_lex_state = 2},
  [68] = {.lex_state = 1, .external_lex_state = 2},
  [69] = {.lex_state = 4, .external_lex_state = 3},
  [70] = {.lex_state = 4, .external_lex_state = 3},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 4, .external_lex_state = 3},
  [73] = {.lex_state = 1, .external_lex_state = 3},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1, .external_lex_state = 3},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 1, .external_lex_state = 3},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 1, .external_lex_state = 3},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 1, .external_lex_state = 3},
  [83] = {.lex_state = 4, .external_lex_state = 3},
  [84] = {.lex_state = 4, .external_lex_state = 3},
  [85] = {.lex_state = 1, .external_lex_state = 3},
  [86] = {.lex_state = 1, .external_lex_state = 3},
  [87] = {.lex_state = 1, .external_lex_state = 3},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 1, .external_lex_state = 3},
  [90] = {.lex_state = 1, .external_lex_state = 3},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 9},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 1, .external_lex_state = 3},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 1, .external_lex_state = 2},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 5, .external_lex_state = 3},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 0, .external_lex_state = 5},
  [125] = {.lex_state = 0, .external_lex_state = 3},
  [126] = {.lex_state = 0, .external_lex_state = 3},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0, .external_lex_state = 3},
  [129] = {.lex_state = 9},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0, .external_lex_state = 5},
  [136] = {.lex_state = 0, .external_lex_state = 3},
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
    [ts_external_token__newline] = true,
  },
  [4] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
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
    [sym_js_attribute_name] = ACTIONS(1),
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
    [sym_doctype] = STATE(6),
    [sym_tag] = STATE(6),
    [sym_comment] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_doctype] = ACTIONS(5),
    [anon_sym_SLASH_SLASH] = ACTIONS(7),
    [sym_tag_name] = ACTIONS(9),
    [sym_class] = ACTIONS(11),
    [sym_id] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(15), 1,
      anon_sym_doctype,
    ACTIONS(17), 1,
      anon_sym_PIPE,
    ACTIONS(19), 1,
      sym_tag_name,
    ACTIONS(23), 1,
      sym__dedent,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 2,
      sym_class,
      sym_id,
    STATE(4), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [27] = 7,
    ACTIONS(15), 1,
      anon_sym_doctype,
    ACTIONS(17), 1,
      anon_sym_PIPE,
    ACTIONS(19), 1,
      sym_tag_name,
    ACTIONS(25), 1,
      sym__dedent,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 2,
      sym_class,
      sym_id,
    STATE(4), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [54] = 6,
    ACTIONS(29), 1,
      anon_sym_doctype,
    ACTIONS(31), 1,
      anon_sym_PIPE,
    ACTIONS(34), 1,
      sym_tag_name,
    ACTIONS(37), 2,
      sym_class,
      sym_id,
    ACTIONS(27), 3,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
    STATE(4), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [79] = 9,
    ACTIONS(40), 1,
      anon_sym_COLON,
    ACTIONS(42), 1,
      anon_sym_,
    ACTIONS(44), 1,
      anon_sym_DOT,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      sym__newline,
    STATE(14), 1,
      aux_sym_tag_repeat1,
    STATE(60), 1,
      sym__content_after_dot,
    STATE(62), 1,
      sym_attributes,
    ACTIONS(48), 2,
      sym_class,
      sym_id,
  [108] = 6,
    ACTIONS(5), 1,
      anon_sym_doctype,
    ACTIONS(7), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(9), 1,
      sym_tag_name,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 2,
      sym_class,
      sym_id,
    STATE(15), 4,
      sym_doctype,
      sym_tag,
      sym_comment,
      aux_sym_source_file_repeat1,
  [131] = 4,
    ACTIONS(58), 1,
      sym__indent,
    STATE(36), 1,
      sym_children,
    ACTIONS(56), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(54), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [150] = 4,
    ACTIONS(58), 1,
      sym__indent,
    STATE(39), 1,
      sym_children,
    ACTIONS(62), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(60), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [169] = 4,
    ACTIONS(58), 1,
      sym__indent,
    STATE(26), 1,
      sym_children,
    ACTIONS(66), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(64), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [188] = 9,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(68), 1,
      anon_sym_COLON,
    ACTIONS(70), 1,
      anon_sym_,
    ACTIONS(72), 1,
      anon_sym_DOT,
    ACTIONS(76), 1,
      sym__newline,
    STATE(36), 1,
      sym__content_after_dot,
    STATE(37), 1,
      aux_sym_tag_repeat1,
    STATE(69), 1,
      sym_attributes,
    ACTIONS(74), 2,
      sym_class,
      sym_id,
  [217] = 4,
    ACTIONS(58), 1,
      sym__indent,
    STATE(31), 1,
      sym_children,
    ACTIONS(80), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(78), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [236] = 9,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      anon_sym_DOT,
    ACTIONS(82), 1,
      anon_sym_COLON,
    ACTIONS(84), 1,
      anon_sym_,
    ACTIONS(88), 1,
      sym__newline,
    STATE(10), 1,
      aux_sym_tag_repeat1,
    STATE(34), 1,
      sym__content_after_dot,
    STATE(70), 1,
      sym_attributes,
    ACTIONS(86), 2,
      sym_class,
      sym_id,
  [265] = 4,
    ACTIONS(58), 1,
      sym__indent,
    STATE(27), 1,
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
  [284] = 9,
    ACTIONS(44), 1,
      anon_sym_DOT,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_COLON,
    ACTIONS(96), 1,
      anon_sym_,
    ACTIONS(98), 1,
      sym__newline,
    STATE(37), 1,
      aux_sym_tag_repeat1,
    STATE(46), 1,
      sym__content_after_dot,
    STATE(65), 1,
      sym_attributes,
    ACTIONS(74), 2,
      sym_class,
      sym_id,
  [313] = 6,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 1,
      anon_sym_doctype,
    ACTIONS(105), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(108), 1,
      sym_tag_name,
    ACTIONS(111), 2,
      sym_class,
      sym_id,
    STATE(15), 4,
      sym_doctype,
      sym_tag,
      sym_comment,
      aux_sym_source_file_repeat1,
  [336] = 5,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 1,
      sym__comment_content,
    ACTIONS(120), 1,
      sym__dedent,
    STATE(17), 1,
      aux_sym_comment_repeat1,
    ACTIONS(116), 5,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
  [356] = 4,
    ACTIONS(126), 1,
      sym__comment_content,
    STATE(17), 1,
      aux_sym_comment_repeat1,
    ACTIONS(122), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(124), 5,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
  [374] = 5,
    ACTIONS(118), 1,
      sym__comment_content,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    ACTIONS(133), 1,
      sym__dedent,
    STATE(16), 1,
      aux_sym_comment_repeat1,
    ACTIONS(131), 5,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
  [394] = 5,
    ACTIONS(118), 1,
      sym__comment_content,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    ACTIONS(133), 1,
      sym__dedent,
    STATE(17), 1,
      aux_sym_comment_repeat1,
    ACTIONS(131), 5,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
  [414] = 5,
    ACTIONS(118), 1,
      sym__comment_content,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 1,
      sym__dedent,
    STATE(19), 1,
      aux_sym_comment_repeat1,
    ACTIONS(137), 5,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
  [434] = 4,
    ACTIONS(141), 1,
      sym__indent,
    STATE(45), 1,
      sym_children,
    ACTIONS(62), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(60), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [451] = 2,
    ACTIONS(145), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(143), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [464] = 2,
    ACTIONS(149), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(147), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [477] = 3,
    ACTIONS(17), 1,
      anon_sym_PIPE,
    ACTIONS(21), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(2), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [492] = 2,
    ACTIONS(122), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(124), 6,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      sym__comment_content,
  [505] = 2,
    ACTIONS(153), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(151), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [518] = 2,
    ACTIONS(66), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(64), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [531] = 2,
    ACTIONS(157), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(155), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [544] = 4,
    ACTIONS(141), 1,
      sym__indent,
    STATE(52), 1,
      sym_children,
    ACTIONS(92), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(90), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [561] = 7,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    ACTIONS(161), 1,
      aux_sym__attribute_token1,
    ACTIONS(164), 1,
      sym_js_attribute_name,
    STATE(30), 1,
      aux_sym_attributes_repeat1,
    STATE(51), 1,
      sym_attribute_name,
    STATE(117), 1,
      sym_attribute,
    STATE(113), 2,
      sym__attribute,
      sym__js_attribute,
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
    ACTIONS(141), 1,
      sym__indent,
    STATE(49), 1,
      sym_children,
    ACTIONS(66), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(64), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [614] = 7,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    ACTIONS(169), 1,
      aux_sym__attribute_token1,
    ACTIONS(171), 1,
      sym_js_attribute_name,
    STATE(30), 1,
      aux_sym_attributes_repeat1,
    STATE(51), 1,
      sym_attribute_name,
    STATE(108), 1,
      sym_attribute,
    STATE(113), 2,
      sym__attribute,
      sym__js_attribute,
  [637] = 2,
    ACTIONS(56), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(54), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [650] = 2,
    ACTIONS(175), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(173), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [663] = 2,
    ACTIONS(62), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(60), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [676] = 4,
    STATE(37), 1,
      aux_sym_tag_repeat1,
    ACTIONS(179), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(181), 2,
      sym_class,
      sym_id,
    ACTIONS(177), 3,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_LPAREN,
  [693] = 4,
    ACTIONS(141), 1,
      sym__indent,
    STATE(48), 1,
      sym_children,
    ACTIONS(80), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(78), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [710] = 2,
    ACTIONS(80), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(78), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [723] = 3,
    ACTIONS(17), 1,
      anon_sym_PIPE,
    ACTIONS(21), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(3), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [738] = 4,
    ACTIONS(141), 1,
      sym__indent,
    STATE(46), 1,
      sym_children,
    ACTIONS(56), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(54), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [755] = 7,
    ACTIONS(169), 1,
      aux_sym__attribute_token1,
    ACTIONS(171), 1,
      sym_js_attribute_name,
    ACTIONS(184), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      aux_sym_attributes_repeat1,
    STATE(51), 1,
      sym_attribute_name,
    STATE(114), 1,
      sym_attribute,
    STATE(113), 2,
      sym__attribute,
      sym__js_attribute,
  [778] = 3,
    ACTIONS(190), 1,
      sym__indent,
    ACTIONS(188), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(186), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [792] = 3,
    ACTIONS(192), 1,
      sym__indent,
    ACTIONS(137), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(135), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [806] = 2,
    ACTIONS(80), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(78), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [817] = 2,
    ACTIONS(62), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(60), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [828] = 2,
    ACTIONS(196), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(194), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [839] = 2,
    ACTIONS(92), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(90), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [850] = 2,
    ACTIONS(153), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(151), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [861] = 5,
    ACTIONS(198), 1,
      anon_sym_,
    ACTIONS(200), 1,
      anon_sym_DOT,
    ACTIONS(204), 1,
      anon_sym_EQ,
    STATE(57), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(202), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [878] = 5,
    ACTIONS(200), 1,
      anon_sym_DOT,
    ACTIONS(206), 1,
      anon_sym_,
    ACTIONS(210), 1,
      anon_sym_EQ,
    STATE(54), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(208), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [895] = 2,
    ACTIONS(66), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(64), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [906] = 2,
    ACTIONS(175), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(173), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [917] = 5,
    ACTIONS(200), 1,
      anon_sym_DOT,
    ACTIONS(212), 1,
      anon_sym_,
    ACTIONS(216), 1,
      anon_sym_EQ,
    STATE(57), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(214), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [934] = 2,
    ACTIONS(157), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(155), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [945] = 5,
    ACTIONS(200), 1,
      anon_sym_DOT,
    ACTIONS(218), 1,
      anon_sym_,
    ACTIONS(222), 1,
      anon_sym_EQ,
    STATE(50), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(220), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [962] = 4,
    ACTIONS(224), 1,
      anon_sym_,
    ACTIONS(226), 1,
      anon_sym_DOT,
    STATE(57), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(229), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [977] = 2,
    ACTIONS(131), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(129), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [988] = 2,
    ACTIONS(233), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(231), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [999] = 2,
    ACTIONS(56), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(54), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [1010] = 2,
    ACTIONS(116), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(114), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [1021] = 5,
    ACTIONS(44), 1,
      anon_sym_DOT,
    ACTIONS(94), 1,
      anon_sym_COLON,
    ACTIONS(96), 1,
      anon_sym_,
    ACTIONS(98), 1,
      sym__newline,
    STATE(46), 1,
      sym__content_after_dot,
  [1037] = 2,
    ACTIONS(235), 1,
      anon_sym_,
    ACTIONS(237), 4,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1047] = 5,
    ACTIONS(239), 1,
      sym_content,
    ACTIONS(241), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(243), 1,
      sym__dedent,
    STATE(67), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(73), 1,
      aux_sym__content_or_javascript,
  [1063] = 5,
    ACTIONS(44), 1,
      anon_sym_DOT,
    ACTIONS(245), 1,
      anon_sym_COLON,
    ACTIONS(247), 1,
      anon_sym_,
    ACTIONS(249), 1,
      sym__newline,
    STATE(45), 1,
      sym__content_after_dot,
  [1079] = 2,
    ACTIONS(251), 1,
      anon_sym_,
    ACTIONS(253), 4,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1089] = 5,
    ACTIONS(255), 1,
      sym_content,
    ACTIONS(258), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(261), 1,
      sym__dedent,
    STATE(67), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(73), 1,
      aux_sym__content_or_javascript,
  [1105] = 5,
    ACTIONS(239), 1,
      sym_content,
    ACTIONS(241), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(263), 1,
      sym__dedent,
    STATE(67), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(73), 1,
      aux_sym__content_or_javascript,
  [1121] = 5,
    ACTIONS(72), 1,
      anon_sym_DOT,
    ACTIONS(265), 1,
      anon_sym_COLON,
    ACTIONS(267), 1,
      anon_sym_,
    ACTIONS(269), 1,
      sym__newline,
    STATE(39), 1,
      sym__content_after_dot,
  [1137] = 5,
    ACTIONS(68), 1,
      anon_sym_COLON,
    ACTIONS(70), 1,
      anon_sym_,
    ACTIONS(72), 1,
      anon_sym_DOT,
    ACTIONS(76), 1,
      sym__newline,
    STATE(36), 1,
      sym__content_after_dot,
  [1153] = 2,
    STATE(45), 1,
      sym_tag,
    ACTIONS(11), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1162] = 2,
    ACTIONS(271), 2,
      anon_sym_COLON,
      anon_sym_DOT,
    ACTIONS(273), 2,
      sym__newline,
      anon_sym_,
  [1171] = 4,
    ACTIONS(241), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(275), 1,
      sym_content,
    ACTIONS(277), 1,
      sym__newline,
    STATE(89), 1,
      aux_sym__content_or_javascript,
  [1184] = 4,
    ACTIONS(239), 1,
      sym_content,
    ACTIONS(241), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(68), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(73), 1,
      aux_sym__content_or_javascript,
  [1197] = 4,
    ACTIONS(241), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(275), 1,
      sym_content,
    ACTIONS(279), 1,
      sym__newline,
    STATE(89), 1,
      aux_sym__content_or_javascript,
  [1210] = 2,
    STATE(31), 1,
      sym_tag,
    ACTIONS(21), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1219] = 4,
    ACTIONS(241), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(275), 1,
      sym_content,
    ACTIONS(281), 1,
      sym__newline,
    STATE(89), 1,
      aux_sym__content_or_javascript,
  [1232] = 2,
    STATE(46), 1,
      sym_tag,
    ACTIONS(11), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1241] = 2,
    STATE(39), 1,
      sym_tag,
    ACTIONS(21), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1250] = 4,
    ACTIONS(241), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(269), 1,
      sym__newline,
    ACTIONS(275), 1,
      sym_content,
    STATE(89), 1,
      aux_sym__content_or_javascript,
  [1263] = 2,
    STATE(36), 1,
      sym_tag,
    ACTIONS(21), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1272] = 4,
    ACTIONS(241), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(249), 1,
      sym__newline,
    ACTIONS(275), 1,
      sym_content,
    STATE(89), 1,
      aux_sym__content_or_javascript,
  [1285] = 2,
    ACTIONS(283), 2,
      anon_sym_COLON,
      anon_sym_DOT,
    ACTIONS(285), 2,
      sym__newline,
      anon_sym_,
  [1294] = 2,
    ACTIONS(287), 2,
      anon_sym_COLON,
      anon_sym_DOT,
    ACTIONS(289), 2,
      sym__newline,
      anon_sym_,
  [1303] = 4,
    ACTIONS(241), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(275), 1,
      sym_content,
    ACTIONS(291), 1,
      sym__newline,
    STATE(89), 1,
      aux_sym__content_or_javascript,
  [1316] = 4,
    ACTIONS(241), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(275), 1,
      sym_content,
    ACTIONS(293), 1,
      sym__newline,
    STATE(89), 1,
      aux_sym__content_or_javascript,
  [1329] = 4,
    ACTIONS(241), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(295), 1,
      sym_content,
    ACTIONS(297), 1,
      sym__newline,
    STATE(85), 1,
      aux_sym__content_or_javascript,
  [1342] = 2,
    STATE(48), 1,
      sym_tag,
    ACTIONS(11), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1351] = 4,
    ACTIONS(299), 1,
      sym_content,
    ACTIONS(302), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(305), 1,
      sym__newline,
    STATE(89), 1,
      aux_sym__content_or_javascript,
  [1364] = 4,
    ACTIONS(241), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(275), 1,
      sym_content,
    ACTIONS(307), 1,
      sym__newline,
    STATE(89), 1,
      aux_sym__content_or_javascript,
  [1377] = 4,
    ACTIONS(239), 1,
      sym_content,
    ACTIONS(241), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(64), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(73), 1,
      aux_sym__content_or_javascript,
  [1390] = 1,
    ACTIONS(159), 3,
      anon_sym_RPAREN,
      aux_sym__attribute_token1,
      sym_js_attribute_name,
  [1396] = 3,
    ACTIONS(241), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(309), 1,
      sym_content,
    STATE(86), 1,
      aux_sym__content_or_javascript,
  [1406] = 3,
    ACTIONS(241), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(311), 1,
      sym_content,
    STATE(75), 1,
      aux_sym__content_or_javascript,
  [1416] = 3,
    ACTIONS(241), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(313), 1,
      sym_content,
    STATE(77), 1,
      aux_sym__content_or_javascript,
  [1426] = 2,
    ACTIONS(315), 1,
      anon_sym_,
    ACTIONS(317), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1434] = 2,
    ACTIONS(319), 1,
      anon_sym_,
    ACTIONS(321), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1442] = 3,
    ACTIONS(241), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(323), 1,
      sym_content,
    STATE(80), 1,
      aux_sym__content_or_javascript,
  [1452] = 2,
    ACTIONS(325), 1,
      anon_sym_,
    ACTIONS(327), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1460] = 2,
    ACTIONS(329), 1,
      anon_sym_,
    ACTIONS(331), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1468] = 3,
    ACTIONS(333), 1,
      anon_sym_SQUOTE,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    STATE(109), 1,
      sym_quoted_attribute_value,
  [1478] = 2,
    ACTIONS(337), 1,
      anon_sym_,
    ACTIONS(339), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1486] = 2,
    ACTIONS(341), 1,
      anon_sym_,
    ACTIONS(343), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1494] = 2,
    ACTIONS(347), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(345), 2,
      sym__newline,
      sym_content,
  [1502] = 3,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    ACTIONS(351), 1,
      anon_sym_DQUOTE,
    STATE(99), 1,
      sym_quoted_javascript,
  [1512] = 3,
    ACTIONS(349), 1,
      anon_sym_SQUOTE,
    ACTIONS(351), 1,
      anon_sym_DQUOTE,
    STATE(96), 1,
      sym_quoted_javascript,
  [1522] = 1,
    ACTIONS(353), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [1528] = 3,
    ACTIONS(355), 1,
      anon_sym_,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(359), 1,
      anon_sym_RPAREN,
  [1538] = 2,
    ACTIONS(361), 1,
      anon_sym_,
    ACTIONS(363), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1546] = 2,
    ACTIONS(365), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(261), 2,
      sym__dedent,
      sym_content,
  [1554] = 3,
    ACTIONS(241), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(367), 1,
      sym_content,
    STATE(82), 1,
      aux_sym__content_or_javascript,
  [1564] = 3,
    ACTIONS(241), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(369), 1,
      sym_content,
    STATE(90), 1,
      aux_sym__content_or_javascript,
  [1574] = 2,
    ACTIONS(371), 1,
      anon_sym_,
    ACTIONS(373), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1582] = 3,
    ACTIONS(355), 1,
      anon_sym_,
    ACTIONS(357), 1,
      anon_sym_COMMA,
    ACTIONS(375), 1,
      anon_sym_RPAREN,
  [1592] = 2,
    ACTIONS(377), 1,
      anon_sym_,
    ACTIONS(379), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1600] = 3,
    ACTIONS(333), 1,
      anon_sym_SQUOTE,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    STATE(100), 1,
      sym_quoted_attribute_value,
  [1610] = 2,
    ACTIONS(355), 1,
      anon_sym_,
    ACTIONS(357), 1,
      anon_sym_COMMA,
  [1617] = 2,
    ACTIONS(381), 1,
      anon_sym_DQUOTE,
    ACTIONS(383), 1,
      aux_sym_quoted_javascript_token2,
  [1624] = 2,
    ACTIONS(381), 1,
      anon_sym_SQUOTE,
    ACTIONS(385), 1,
      aux_sym_quoted_javascript_token1,
  [1631] = 2,
    ACTIONS(387), 1,
      anon_sym_SQUOTE,
    ACTIONS(389), 1,
      aux_sym_quoted_javascript_token1,
  [1638] = 2,
    ACTIONS(391), 1,
      sym__comment_content,
    ACTIONS(393), 1,
      sym__newline,
  [1645] = 2,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    ACTIONS(395), 1,
      aux_sym_quoted_javascript_token2,
  [1652] = 1,
    ACTIONS(397), 1,
      sym_javascript,
  [1656] = 1,
    ACTIONS(399), 1,
      sym__indent,
  [1660] = 1,
    ACTIONS(401), 1,
      sym__newline,
  [1664] = 1,
    ACTIONS(403), 1,
      sym__newline,
  [1668] = 1,
    ACTIONS(405), 1,
      anon_sym_RBRACE_RBRACE,
  [1672] = 1,
    ACTIONS(407), 1,
      sym__newline,
  [1676] = 1,
    ACTIONS(409), 1,
      aux_sym__attribute_token1,
  [1680] = 1,
    ACTIONS(411), 1,
      ts_builtin_sym_end,
  [1684] = 1,
    ACTIONS(413), 1,
      anon_sym_DQUOTE,
  [1688] = 1,
    ACTIONS(413), 1,
      anon_sym_SQUOTE,
  [1692] = 1,
    ACTIONS(415), 1,
      anon_sym_DQUOTE,
  [1696] = 1,
    ACTIONS(415), 1,
      anon_sym_SQUOTE,
  [1700] = 1,
    ACTIONS(417), 1,
      sym__indent,
  [1704] = 1,
    ACTIONS(419), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 79,
  [SMALL_STATE(6)] = 108,
  [SMALL_STATE(7)] = 131,
  [SMALL_STATE(8)] = 150,
  [SMALL_STATE(9)] = 169,
  [SMALL_STATE(10)] = 188,
  [SMALL_STATE(11)] = 217,
  [SMALL_STATE(12)] = 236,
  [SMALL_STATE(13)] = 265,
  [SMALL_STATE(14)] = 284,
  [SMALL_STATE(15)] = 313,
  [SMALL_STATE(16)] = 336,
  [SMALL_STATE(17)] = 356,
  [SMALL_STATE(18)] = 374,
  [SMALL_STATE(19)] = 394,
  [SMALL_STATE(20)] = 414,
  [SMALL_STATE(21)] = 434,
  [SMALL_STATE(22)] = 451,
  [SMALL_STATE(23)] = 464,
  [SMALL_STATE(24)] = 477,
  [SMALL_STATE(25)] = 492,
  [SMALL_STATE(26)] = 505,
  [SMALL_STATE(27)] = 518,
  [SMALL_STATE(28)] = 531,
  [SMALL_STATE(29)] = 544,
  [SMALL_STATE(30)] = 561,
  [SMALL_STATE(31)] = 584,
  [SMALL_STATE(32)] = 597,
  [SMALL_STATE(33)] = 614,
  [SMALL_STATE(34)] = 637,
  [SMALL_STATE(35)] = 650,
  [SMALL_STATE(36)] = 663,
  [SMALL_STATE(37)] = 676,
  [SMALL_STATE(38)] = 693,
  [SMALL_STATE(39)] = 710,
  [SMALL_STATE(40)] = 723,
  [SMALL_STATE(41)] = 738,
  [SMALL_STATE(42)] = 755,
  [SMALL_STATE(43)] = 778,
  [SMALL_STATE(44)] = 792,
  [SMALL_STATE(45)] = 806,
  [SMALL_STATE(46)] = 817,
  [SMALL_STATE(47)] = 828,
  [SMALL_STATE(48)] = 839,
  [SMALL_STATE(49)] = 850,
  [SMALL_STATE(50)] = 861,
  [SMALL_STATE(51)] = 878,
  [SMALL_STATE(52)] = 895,
  [SMALL_STATE(53)] = 906,
  [SMALL_STATE(54)] = 917,
  [SMALL_STATE(55)] = 934,
  [SMALL_STATE(56)] = 945,
  [SMALL_STATE(57)] = 962,
  [SMALL_STATE(58)] = 977,
  [SMALL_STATE(59)] = 988,
  [SMALL_STATE(60)] = 999,
  [SMALL_STATE(61)] = 1010,
  [SMALL_STATE(62)] = 1021,
  [SMALL_STATE(63)] = 1037,
  [SMALL_STATE(64)] = 1047,
  [SMALL_STATE(65)] = 1063,
  [SMALL_STATE(66)] = 1079,
  [SMALL_STATE(67)] = 1089,
  [SMALL_STATE(68)] = 1105,
  [SMALL_STATE(69)] = 1121,
  [SMALL_STATE(70)] = 1137,
  [SMALL_STATE(71)] = 1153,
  [SMALL_STATE(72)] = 1162,
  [SMALL_STATE(73)] = 1171,
  [SMALL_STATE(74)] = 1184,
  [SMALL_STATE(75)] = 1197,
  [SMALL_STATE(76)] = 1210,
  [SMALL_STATE(77)] = 1219,
  [SMALL_STATE(78)] = 1232,
  [SMALL_STATE(79)] = 1241,
  [SMALL_STATE(80)] = 1250,
  [SMALL_STATE(81)] = 1263,
  [SMALL_STATE(82)] = 1272,
  [SMALL_STATE(83)] = 1285,
  [SMALL_STATE(84)] = 1294,
  [SMALL_STATE(85)] = 1303,
  [SMALL_STATE(86)] = 1316,
  [SMALL_STATE(87)] = 1329,
  [SMALL_STATE(88)] = 1342,
  [SMALL_STATE(89)] = 1351,
  [SMALL_STATE(90)] = 1364,
  [SMALL_STATE(91)] = 1377,
  [SMALL_STATE(92)] = 1390,
  [SMALL_STATE(93)] = 1396,
  [SMALL_STATE(94)] = 1406,
  [SMALL_STATE(95)] = 1416,
  [SMALL_STATE(96)] = 1426,
  [SMALL_STATE(97)] = 1434,
  [SMALL_STATE(98)] = 1442,
  [SMALL_STATE(99)] = 1452,
  [SMALL_STATE(100)] = 1460,
  [SMALL_STATE(101)] = 1468,
  [SMALL_STATE(102)] = 1478,
  [SMALL_STATE(103)] = 1486,
  [SMALL_STATE(104)] = 1494,
  [SMALL_STATE(105)] = 1502,
  [SMALL_STATE(106)] = 1512,
  [SMALL_STATE(107)] = 1522,
  [SMALL_STATE(108)] = 1528,
  [SMALL_STATE(109)] = 1538,
  [SMALL_STATE(110)] = 1546,
  [SMALL_STATE(111)] = 1554,
  [SMALL_STATE(112)] = 1564,
  [SMALL_STATE(113)] = 1574,
  [SMALL_STATE(114)] = 1582,
  [SMALL_STATE(115)] = 1592,
  [SMALL_STATE(116)] = 1600,
  [SMALL_STATE(117)] = 1610,
  [SMALL_STATE(118)] = 1617,
  [SMALL_STATE(119)] = 1624,
  [SMALL_STATE(120)] = 1631,
  [SMALL_STATE(121)] = 1638,
  [SMALL_STATE(122)] = 1645,
  [SMALL_STATE(123)] = 1652,
  [SMALL_STATE(124)] = 1656,
  [SMALL_STATE(125)] = 1660,
  [SMALL_STATE(126)] = 1664,
  [SMALL_STATE(127)] = 1668,
  [SMALL_STATE(128)] = 1672,
  [SMALL_STATE(129)] = 1676,
  [SMALL_STATE(130)] = 1680,
  [SMALL_STATE(131)] = 1684,
  [SMALL_STATE(132)] = 1688,
  [SMALL_STATE(133)] = 1692,
  [SMALL_STATE(134)] = 1696,
  [SMALL_STATE(135)] = 1700,
  [SMALL_STATE(136)] = 1704,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(87),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(12),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(12),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(107),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(121),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 5),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 5),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(126),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_content, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_content, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_content, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_content, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 7),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 5, .production_id = 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 5, .production_id = 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(63),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(56),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(37),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 6),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 6),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 1),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 1),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2), SHIFT_REPEAT(129),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_name, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 1),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(73),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(123),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(89),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(123),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 4),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 4),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 3),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 3),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 4),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 4),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 3),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 3),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 3),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 3),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 3),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 3),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 3),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 2),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 2),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [411] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
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
