#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 138
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 2
#define TOKEN_COUNT 33
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
  sym_javascript = 25,
  sym_content = 26,
  anon_sym_LBRACE_LBRACE = 27,
  anon_sym_RBRACE_RBRACE = 28,
  sym__comment_content = 29,
  sym__newline = 30,
  sym__indent = 31,
  sym__dedent = 32,
  sym_source_file = 33,
  sym_doctype = 34,
  sym_pipe_content = 35,
  sym_tag = 36,
  sym__content_after_dot = 37,
  sym_attributes = 38,
  sym_attribute = 39,
  sym__attribute = 40,
  sym__js_attribute = 41,
  sym_children = 42,
  sym__children_choice = 43,
  sym_comment = 44,
  sym_js_attribute_name = 45,
  sym_attribute_name = 46,
  sym_quoted_javascript = 47,
  sym_quoted_attribute_value = 48,
  aux_sym__content_or_javascript = 49,
  aux_sym_source_file_repeat1 = 50,
  aux_sym_tag_repeat1 = 51,
  aux_sym__content_after_dot_repeat1 = 52,
  aux_sym_attributes_repeat1 = 53,
  aux_sym__attribute_repeat1 = 54,
  aux_sym_children_repeat1 = 55,
  aux_sym_comment_repeat1 = 56,
  alias_sym_attribute_modifier = 57,
  alias_sym_attribute_value = 58,
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
  [aux_sym_js_attribute_name_token3] = aux_sym_js_attribute_name_token3,
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
      if (eof) ADVANCE(39);
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == '\'') ADVANCE(81);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == ')') ADVANCE(53);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == 'h') ADVANCE(27);
      if (lookahead == 's') ADVANCE(24);
      if (lookahead == 'x') ADVANCE(19);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '|') ADVANCE(46);
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
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(88);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(48);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == ')') ADVANCE(53);
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(48);
      if (lookahead == ')') ADVANCE(53);
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(94);
      if (lookahead != 0) ADVANCE(99);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '|') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(53);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 10:
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(56);
      END_STATE();
    case 12:
      if (lookahead == ']') ADVANCE(78);
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
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(43);
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
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 28:
      if (lookahead == 'y') ADVANCE(22);
      END_STATE();
    case 29:
      if (lookahead == '{') ADVANCE(91);
      END_STATE();
    case 30:
      if (lookahead == '}') ADVANCE(92);
      END_STATE();
    case 31:
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 32:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 33:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 34:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 35:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 36:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 37:
      if (eof) ADVANCE(39);
      if (lookahead == ' ') SKIP(37)
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == 'd') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      if (lookahead != 0) ADVANCE(99);
      END_STATE();
    case 38:
      if (eof) ADVANCE(39);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == 'd') ADVANCE(62);
      if (lookahead == '|') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_doctype);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_strict);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__attribute_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(66);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(67);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(58);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(60);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(61);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(69);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(64);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(65);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(75);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_js_attribute_name_token1);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_js_attribute_name_token2);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_js_attribute_name_token3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_javascript);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_javascript);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead == 'd') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      if (lookahead != 0) ADVANCE(99);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(94);
      if (lookahead != 0) ADVANCE(99);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(75);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 38},
  [2] = {.lex_state = 38, .external_lex_state = 2},
  [3] = {.lex_state = 38, .external_lex_state = 2},
  [4] = {.lex_state = 38, .external_lex_state = 2},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 38, .external_lex_state = 3},
  [9] = {.lex_state = 38, .external_lex_state = 3},
  [10] = {.lex_state = 3, .external_lex_state = 4},
  [11] = {.lex_state = 38, .external_lex_state = 3},
  [12] = {.lex_state = 3, .external_lex_state = 4},
  [13] = {.lex_state = 3, .external_lex_state = 4},
  [14] = {.lex_state = 38},
  [15] = {.lex_state = 38},
  [16] = {.lex_state = 3, .external_lex_state = 4},
  [17] = {.lex_state = 38, .external_lex_state = 3},
  [18] = {.lex_state = 38, .external_lex_state = 3},
  [19] = {.lex_state = 37, .external_lex_state = 2},
  [20] = {.lex_state = 37, .external_lex_state = 2},
  [21] = {.lex_state = 37, .external_lex_state = 2},
  [22] = {.lex_state = 37, .external_lex_state = 2},
  [23] = {.lex_state = 37, .external_lex_state = 2},
  [24] = {.lex_state = 38, .external_lex_state = 2},
  [25] = {.lex_state = 38, .external_lex_state = 2},
  [26] = {.lex_state = 38, .external_lex_state = 2},
  [27] = {.lex_state = 38, .external_lex_state = 2},
  [28] = {.lex_state = 38, .external_lex_state = 5},
  [29] = {.lex_state = 38, .external_lex_state = 2},
  [30] = {.lex_state = 38, .external_lex_state = 5},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 38, .external_lex_state = 2},
  [33] = {.lex_state = 38, .external_lex_state = 5},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 38, .external_lex_state = 5},
  [36] = {.lex_state = 3, .external_lex_state = 4},
  [37] = {.lex_state = 37, .external_lex_state = 2},
  [38] = {.lex_state = 38, .external_lex_state = 2},
  [39] = {.lex_state = 38, .external_lex_state = 2},
  [40] = {.lex_state = 38, .external_lex_state = 2},
  [41] = {.lex_state = 38, .external_lex_state = 2},
  [42] = {.lex_state = 38, .external_lex_state = 5},
  [43] = {.lex_state = 38, .external_lex_state = 5},
  [44] = {.lex_state = 38, .external_lex_state = 5},
  [45] = {.lex_state = 38},
  [46] = {.lex_state = 38},
  [47] = {.lex_state = 38},
  [48] = {.lex_state = 38},
  [49] = {.lex_state = 38},
  [50] = {.lex_state = 38},
  [51] = {.lex_state = 38},
  [52] = {.lex_state = 38},
  [53] = {.lex_state = 38},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 38},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 38},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 38},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4, .external_lex_state = 4},
  [63] = {.lex_state = 4, .external_lex_state = 4},
  [64] = {.lex_state = 4, .external_lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4, .external_lex_state = 4},
  [68] = {.lex_state = 1, .external_lex_state = 2},
  [69] = {.lex_state = 1, .external_lex_state = 2},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 1, .external_lex_state = 2},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4, .external_lex_state = 4},
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
  [91] = {.lex_state = 1, .external_lex_state = 4},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 1, .external_lex_state = 4},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 1, .external_lex_state = 2},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 1, .external_lex_state = 4},
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
    [aux_sym_js_attribute_name_token3] = ACTIONS(1),
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
    [sym_doctype] = STATE(15),
    [sym_tag] = STATE(15),
    [sym_comment] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
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
  [79] = 8,
    ACTIONS(40), 1,
      anon_sym_RPAREN,
    ACTIONS(42), 1,
      aux_sym__attribute_token1,
    STATE(7), 1,
      aux_sym_attributes_repeat1,
    STATE(54), 1,
      sym_js_attribute_name,
    STATE(56), 1,
      sym_attribute_name,
    STATE(94), 1,
      sym_attribute,
    STATE(102), 2,
      sym__attribute,
      sym__js_attribute,
    ACTIONS(44), 3,
      aux_sym_js_attribute_name_token1,
      aux_sym_js_attribute_name_token2,
      aux_sym_js_attribute_name_token3,
  [107] = 8,
    ACTIONS(46), 1,
      anon_sym_RPAREN,
    ACTIONS(48), 1,
      aux_sym__attribute_token1,
    STATE(6), 1,
      aux_sym_attributes_repeat1,
    STATE(54), 1,
      sym_js_attribute_name,
    STATE(56), 1,
      sym_attribute_name,
    STATE(121), 1,
      sym_attribute,
    STATE(102), 2,
      sym__attribute,
      sym__js_attribute,
    ACTIONS(51), 3,
      aux_sym_js_attribute_name_token1,
      aux_sym_js_attribute_name_token2,
      aux_sym_js_attribute_name_token3,
  [135] = 8,
    ACTIONS(42), 1,
      aux_sym__attribute_token1,
    ACTIONS(54), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      aux_sym_attributes_repeat1,
    STATE(54), 1,
      sym_js_attribute_name,
    STATE(56), 1,
      sym_attribute_name,
    STATE(116), 1,
      sym_attribute,
    STATE(102), 2,
      sym__attribute,
      sym__js_attribute,
    ACTIONS(44), 3,
      aux_sym_js_attribute_name_token1,
      aux_sym_js_attribute_name_token2,
      aux_sym_js_attribute_name_token3,
  [163] = 4,
    ACTIONS(60), 1,
      sym__indent,
    STATE(27), 1,
      sym_children,
    ACTIONS(58), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(56), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [182] = 4,
    ACTIONS(60), 1,
      sym__indent,
    STATE(39), 1,
      sym_children,
    ACTIONS(64), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(62), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [201] = 9,
    ACTIONS(66), 1,
      anon_sym_COLON,
    ACTIONS(68), 1,
      anon_sym_,
    ACTIONS(70), 1,
      anon_sym_DOT,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(76), 1,
      sym__newline,
    STATE(13), 1,
      aux_sym_tag_repeat1,
    STATE(49), 1,
      sym__content_after_dot,
    STATE(62), 1,
      sym_attributes,
    ACTIONS(74), 2,
      sym_class,
      sym_id,
  [230] = 4,
    ACTIONS(60), 1,
      sym__indent,
    STATE(41), 1,
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
  [249] = 9,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_COLON,
    ACTIONS(84), 1,
      anon_sym_,
    ACTIONS(86), 1,
      anon_sym_DOT,
    ACTIONS(90), 1,
      sym__newline,
    STATE(26), 1,
      sym__content_after_dot,
    STATE(36), 1,
      aux_sym_tag_repeat1,
    STATE(67), 1,
      sym_attributes,
    ACTIONS(88), 2,
      sym_class,
      sym_id,
  [278] = 9,
    ACTIONS(70), 1,
      anon_sym_DOT,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(92), 1,
      anon_sym_COLON,
    ACTIONS(94), 1,
      anon_sym_,
    ACTIONS(96), 1,
      sym__newline,
    STATE(36), 1,
      aux_sym_tag_repeat1,
    STATE(50), 1,
      sym__content_after_dot,
    STATE(63), 1,
      sym_attributes,
    ACTIONS(88), 2,
      sym_class,
      sym_id,
  [307] = 6,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 1,
      anon_sym_doctype,
    ACTIONS(103), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(106), 1,
      sym_tag_name,
    ACTIONS(109), 2,
      sym_class,
      sym_id,
    STATE(14), 4,
      sym_doctype,
      sym_tag,
      sym_comment,
      aux_sym_source_file_repeat1,
  [330] = 6,
    ACTIONS(5), 1,
      anon_sym_doctype,
    ACTIONS(7), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(9), 1,
      sym_tag_name,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 2,
      sym_class,
      sym_id,
    STATE(14), 4,
      sym_doctype,
      sym_tag,
      sym_comment,
      aux_sym_source_file_repeat1,
  [353] = 9,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(86), 1,
      anon_sym_DOT,
    ACTIONS(114), 1,
      anon_sym_COLON,
    ACTIONS(116), 1,
      anon_sym_,
    ACTIONS(120), 1,
      sym__newline,
    STATE(12), 1,
      aux_sym_tag_repeat1,
    STATE(24), 1,
      sym__content_after_dot,
    STATE(64), 1,
      sym_attributes,
    ACTIONS(118), 2,
      sym_class,
      sym_id,
  [382] = 4,
    ACTIONS(60), 1,
      sym__indent,
    STATE(26), 1,
      sym_children,
    ACTIONS(124), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(122), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [401] = 4,
    ACTIONS(60), 1,
      sym__indent,
    STATE(25), 1,
      sym_children,
    ACTIONS(128), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(126), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [420] = 4,
    ACTIONS(134), 1,
      sym__comment_content,
    STATE(19), 1,
      aux_sym_comment_repeat1,
    ACTIONS(130), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(132), 5,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
  [438] = 5,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(141), 1,
      sym__comment_content,
    ACTIONS(143), 1,
      sym__dedent,
    STATE(19), 1,
      aux_sym_comment_repeat1,
    ACTIONS(139), 5,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
  [458] = 5,
    ACTIONS(141), 1,
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
  [478] = 5,
    ACTIONS(141), 1,
      sym__comment_content,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 1,
      sym__dedent,
    STATE(19), 1,
      aux_sym_comment_repeat1,
    ACTIONS(147), 5,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
  [498] = 5,
    ACTIONS(141), 1,
      sym__comment_content,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 1,
      sym__dedent,
    STATE(22), 1,
      aux_sym_comment_repeat1,
    ACTIONS(153), 5,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
  [518] = 2,
    ACTIONS(124), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(122), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [531] = 2,
    ACTIONS(64), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(62), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [544] = 2,
    ACTIONS(128), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(126), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [557] = 2,
    ACTIONS(159), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(157), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [570] = 4,
    ACTIONS(161), 1,
      sym__indent,
    STATE(51), 1,
      sym_children,
    ACTIONS(58), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(56), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [587] = 2,
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
  [600] = 4,
    ACTIONS(161), 1,
      sym__indent,
    STATE(52), 1,
      sym_children,
    ACTIONS(80), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(78), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [617] = 3,
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
  [632] = 2,
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
  [645] = 4,
    ACTIONS(161), 1,
      sym__indent,
    STATE(46), 1,
      sym_children,
    ACTIONS(128), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(126), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [662] = 3,
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
  [677] = 4,
    ACTIONS(161), 1,
      sym__indent,
    STATE(59), 1,
      sym_children,
    ACTIONS(64), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(62), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [694] = 4,
    STATE(36), 1,
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
  [711] = 2,
    ACTIONS(130), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(132), 6,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      sym__comment_content,
  [724] = 2,
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
  [737] = 2,
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
  [750] = 2,
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
  [763] = 2,
    ACTIONS(58), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(56), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [776] = 4,
    ACTIONS(161), 1,
      sym__indent,
    STATE(50), 1,
      sym_children,
    ACTIONS(124), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(122), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [793] = 3,
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
  [807] = 3,
    ACTIONS(192), 1,
      sym__indent,
    ACTIONS(153), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(151), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [821] = 2,
    ACTIONS(169), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(167), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [832] = 2,
    ACTIONS(64), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(62), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [843] = 2,
    ACTIONS(196), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(194), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [854] = 2,
    ACTIONS(147), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(145), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [865] = 2,
    ACTIONS(124), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(122), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [876] = 2,
    ACTIONS(128), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(126), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [887] = 2,
    ACTIONS(159), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(157), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [898] = 2,
    ACTIONS(58), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(56), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [909] = 2,
    ACTIONS(184), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(182), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [920] = 5,
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
  [937] = 2,
    ACTIONS(208), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(206), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [948] = 5,
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
  [965] = 2,
    ACTIONS(139), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(137), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [976] = 5,
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
  [993] = 2,
    ACTIONS(80), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(78), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [1004] = 5,
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
  [1021] = 4,
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
  [1036] = 5,
    ACTIONS(70), 1,
      anon_sym_DOT,
    ACTIONS(92), 1,
      anon_sym_COLON,
    ACTIONS(94), 1,
      anon_sym_,
    ACTIONS(96), 1,
      sym__newline,
    STATE(50), 1,
      sym__content_after_dot,
  [1052] = 5,
    ACTIONS(70), 1,
      anon_sym_DOT,
    ACTIONS(235), 1,
      anon_sym_COLON,
    ACTIONS(237), 1,
      anon_sym_,
    ACTIONS(239), 1,
      sym__newline,
    STATE(46), 1,
      sym__content_after_dot,
  [1068] = 5,
    ACTIONS(82), 1,
      anon_sym_COLON,
    ACTIONS(84), 1,
      anon_sym_,
    ACTIONS(86), 1,
      anon_sym_DOT,
    ACTIONS(90), 1,
      sym__newline,
    STATE(26), 1,
      sym__content_after_dot,
  [1084] = 2,
    ACTIONS(241), 1,
      anon_sym_,
    ACTIONS(243), 4,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1094] = 2,
    ACTIONS(245), 1,
      anon_sym_,
    ACTIONS(247), 4,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1104] = 5,
    ACTIONS(86), 1,
      anon_sym_DOT,
    ACTIONS(249), 1,
      anon_sym_COLON,
    ACTIONS(251), 1,
      anon_sym_,
    ACTIONS(253), 1,
      sym__newline,
    STATE(25), 1,
      sym__content_after_dot,
  [1120] = 5,
    ACTIONS(255), 1,
      sym_content,
    ACTIONS(257), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(259), 1,
      sym__dedent,
    STATE(69), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(76), 1,
      aux_sym__content_or_javascript,
  [1136] = 5,
    ACTIONS(261), 1,
      sym_content,
    ACTIONS(264), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(267), 1,
      sym__dedent,
    STATE(69), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(76), 1,
      aux_sym__content_or_javascript,
  [1152] = 1,
    ACTIONS(46), 5,
      anon_sym_RPAREN,
      aux_sym__attribute_token1,
      aux_sym_js_attribute_name_token1,
      aux_sym_js_attribute_name_token2,
      aux_sym_js_attribute_name_token3,
  [1160] = 5,
    ACTIONS(255), 1,
      sym_content,
    ACTIONS(257), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(269), 1,
      sym__dedent,
    STATE(69), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(76), 1,
      aux_sym__content_or_javascript,
  [1176] = 2,
    ACTIONS(271), 1,
      anon_sym_,
    ACTIONS(273), 4,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1186] = 2,
    ACTIONS(275), 2,
      anon_sym_COLON,
      anon_sym_DOT,
    ACTIONS(277), 2,
      sym__newline,
      anon_sym_,
  [1195] = 2,
    STATE(59), 1,
      sym_tag,
    ACTIONS(11), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1204] = 4,
    ACTIONS(253), 1,
      sym__newline,
    ACTIONS(257), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(279), 1,
      sym_content,
    STATE(86), 1,
      aux_sym__content_or_javascript,
  [1217] = 4,
    ACTIONS(257), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(279), 1,
      sym_content,
    ACTIONS(281), 1,
      sym__newline,
    STATE(86), 1,
      aux_sym__content_or_javascript,
  [1230] = 2,
    STATE(26), 1,
      sym_tag,
    ACTIONS(21), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1239] = 4,
    ACTIONS(255), 1,
      sym_content,
    ACTIONS(257), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(68), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(76), 1,
      aux_sym__content_or_javascript,
  [1252] = 2,
    STATE(50), 1,
      sym_tag,
    ACTIONS(11), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1261] = 4,
    ACTIONS(257), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(283), 1,
      sym_content,
    ACTIONS(285), 1,
      sym__newline,
    STATE(93), 1,
      aux_sym__content_or_javascript,
  [1274] = 4,
    ACTIONS(239), 1,
      sym__newline,
    ACTIONS(257), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(279), 1,
      sym_content,
    STATE(86), 1,
      aux_sym__content_or_javascript,
  [1287] = 2,
    ACTIONS(287), 2,
      anon_sym_COLON,
      anon_sym_DOT,
    ACTIONS(289), 2,
      sym__newline,
      anon_sym_,
  [1296] = 4,
    ACTIONS(257), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(279), 1,
      sym_content,
    ACTIONS(291), 1,
      sym__newline,
    STATE(86), 1,
      aux_sym__content_or_javascript,
  [1309] = 2,
    STATE(46), 1,
      sym_tag,
    ACTIONS(11), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1318] = 2,
    ACTIONS(293), 2,
      anon_sym_COLON,
      anon_sym_DOT,
    ACTIONS(295), 2,
      sym__newline,
      anon_sym_,
  [1327] = 4,
    ACTIONS(297), 1,
      sym_content,
    ACTIONS(300), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(303), 1,
      sym__newline,
    STATE(86), 1,
      aux_sym__content_or_javascript,
  [1340] = 4,
    ACTIONS(257), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(279), 1,
      sym_content,
    ACTIONS(305), 1,
      sym__newline,
    STATE(86), 1,
      aux_sym__content_or_javascript,
  [1353] = 4,
    ACTIONS(257), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(279), 1,
      sym_content,
    ACTIONS(307), 1,
      sym__newline,
    STATE(86), 1,
      aux_sym__content_or_javascript,
  [1366] = 2,
    STATE(25), 1,
      sym_tag,
    ACTIONS(21), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1375] = 4,
    ACTIONS(255), 1,
      sym_content,
    ACTIONS(257), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(71), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(76), 1,
      aux_sym__content_or_javascript,
  [1388] = 4,
    ACTIONS(257), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(279), 1,
      sym_content,
    ACTIONS(309), 1,
      sym__newline,
    STATE(86), 1,
      aux_sym__content_or_javascript,
  [1401] = 2,
    STATE(39), 1,
      sym_tag,
    ACTIONS(21), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1410] = 4,
    ACTIONS(257), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(279), 1,
      sym_content,
    ACTIONS(311), 1,
      sym__newline,
    STATE(86), 1,
      aux_sym__content_or_javascript,
  [1423] = 3,
    ACTIONS(313), 1,
      anon_sym_,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(317), 1,
      anon_sym_RPAREN,
  [1433] = 2,
    ACTIONS(319), 1,
      anon_sym_,
    ACTIONS(321), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1441] = 2,
    ACTIONS(323), 1,
      anon_sym_,
    ACTIONS(325), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1449] = 2,
    ACTIONS(327), 1,
      anon_sym_,
    ACTIONS(329), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1457] = 3,
    ACTIONS(331), 1,
      anon_sym_SQUOTE,
    ACTIONS(333), 1,
      anon_sym_DQUOTE,
    STATE(108), 1,
      sym_quoted_attribute_value,
  [1467] = 3,
    ACTIONS(257), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(335), 1,
      sym_content,
    STATE(87), 1,
      aux_sym__content_or_javascript,
  [1477] = 2,
    ACTIONS(337), 1,
      anon_sym_,
    ACTIONS(339), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1485] = 2,
    ACTIONS(341), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(267), 2,
      sym__dedent,
      sym_content,
  [1493] = 2,
    ACTIONS(343), 1,
      anon_sym_,
    ACTIONS(345), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1501] = 3,
    ACTIONS(257), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(347), 1,
      sym_content,
    STATE(75), 1,
      aux_sym__content_or_javascript,
  [1511] = 3,
    ACTIONS(257), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(349), 1,
      sym_content,
    STATE(88), 1,
      aux_sym__content_or_javascript,
  [1521] = 1,
    ACTIONS(351), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [1527] = 3,
    ACTIONS(257), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(353), 1,
      sym_content,
    STATE(83), 1,
      aux_sym__content_or_javascript,
  [1537] = 3,
    ACTIONS(331), 1,
      anon_sym_SQUOTE,
    ACTIONS(333), 1,
      anon_sym_DQUOTE,
    STATE(100), 1,
      sym_quoted_attribute_value,
  [1547] = 2,
    ACTIONS(355), 1,
      anon_sym_,
    ACTIONS(357), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1555] = 3,
    ACTIONS(257), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(359), 1,
      sym_content,
    STATE(91), 1,
      aux_sym__content_or_javascript,
  [1565] = 3,
    ACTIONS(361), 1,
      anon_sym_SQUOTE,
    ACTIONS(363), 1,
      anon_sym_DQUOTE,
    STATE(114), 1,
      sym_quoted_javascript,
  [1575] = 2,
    ACTIONS(365), 1,
      anon_sym_,
    ACTIONS(367), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1583] = 3,
    ACTIONS(361), 1,
      anon_sym_SQUOTE,
    ACTIONS(363), 1,
      anon_sym_DQUOTE,
    STATE(96), 1,
      sym_quoted_javascript,
  [1593] = 3,
    ACTIONS(257), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(369), 1,
      sym_content,
    STATE(81), 1,
      aux_sym__content_or_javascript,
  [1603] = 2,
    ACTIONS(371), 1,
      anon_sym_,
    ACTIONS(373), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1611] = 2,
    ACTIONS(375), 1,
      anon_sym_,
    ACTIONS(377), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1619] = 3,
    ACTIONS(313), 1,
      anon_sym_,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(379), 1,
      anon_sym_RPAREN,
  [1629] = 2,
    ACTIONS(383), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(381), 2,
      sym__newline,
      sym_content,
  [1637] = 2,
    ACTIONS(385), 1,
      anon_sym_SQUOTE,
    ACTIONS(387), 1,
      aux_sym_quoted_javascript_token1,
  [1644] = 2,
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
    ACTIONS(391), 1,
      aux_sym_quoted_javascript_token1,
  [1651] = 2,
    ACTIONS(393), 1,
      sym__comment_content,
    ACTIONS(395), 1,
      sym__newline,
  [1658] = 2,
    ACTIONS(313), 1,
      anon_sym_,
    ACTIONS(315), 1,
      anon_sym_COMMA,
  [1665] = 2,
    ACTIONS(385), 1,
      anon_sym_DQUOTE,
    ACTIONS(397), 1,
      aux_sym_quoted_javascript_token2,
  [1672] = 2,
    ACTIONS(389), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      aux_sym_quoted_javascript_token2,
  [1679] = 1,
    ACTIONS(401), 1,
      sym__newline,
  [1683] = 1,
    ACTIONS(403), 1,
      sym_javascript,
  [1687] = 1,
    ACTIONS(405), 1,
      sym__newline,
  [1691] = 1,
    ACTIONS(407), 1,
      sym__newline,
  [1695] = 1,
    ACTIONS(409), 1,
      anon_sym_RBRACE_RBRACE,
  [1699] = 1,
    ACTIONS(411), 1,
      sym__indent,
  [1703] = 1,
    ACTIONS(413), 1,
      ts_builtin_sym_end,
  [1707] = 1,
    ACTIONS(415), 1,
      anon_sym_DQUOTE,
  [1711] = 1,
    ACTIONS(415), 1,
      anon_sym_SQUOTE,
  [1715] = 1,
    ACTIONS(417), 1,
      anon_sym_DQUOTE,
  [1719] = 1,
    ACTIONS(417), 1,
      anon_sym_SQUOTE,
  [1723] = 1,
    ACTIONS(419), 1,
      aux_sym__attribute_token1,
  [1727] = 1,
    ACTIONS(421), 1,
      sym__indent,
  [1731] = 1,
    ACTIONS(423), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 79,
  [SMALL_STATE(6)] = 107,
  [SMALL_STATE(7)] = 135,
  [SMALL_STATE(8)] = 163,
  [SMALL_STATE(9)] = 182,
  [SMALL_STATE(10)] = 201,
  [SMALL_STATE(11)] = 230,
  [SMALL_STATE(12)] = 249,
  [SMALL_STATE(13)] = 278,
  [SMALL_STATE(14)] = 307,
  [SMALL_STATE(15)] = 330,
  [SMALL_STATE(16)] = 353,
  [SMALL_STATE(17)] = 382,
  [SMALL_STATE(18)] = 401,
  [SMALL_STATE(19)] = 420,
  [SMALL_STATE(20)] = 438,
  [SMALL_STATE(21)] = 458,
  [SMALL_STATE(22)] = 478,
  [SMALL_STATE(23)] = 498,
  [SMALL_STATE(24)] = 518,
  [SMALL_STATE(25)] = 531,
  [SMALL_STATE(26)] = 544,
  [SMALL_STATE(27)] = 557,
  [SMALL_STATE(28)] = 570,
  [SMALL_STATE(29)] = 587,
  [SMALL_STATE(30)] = 600,
  [SMALL_STATE(31)] = 617,
  [SMALL_STATE(32)] = 632,
  [SMALL_STATE(33)] = 645,
  [SMALL_STATE(34)] = 662,
  [SMALL_STATE(35)] = 677,
  [SMALL_STATE(36)] = 694,
  [SMALL_STATE(37)] = 711,
  [SMALL_STATE(38)] = 724,
  [SMALL_STATE(39)] = 737,
  [SMALL_STATE(40)] = 750,
  [SMALL_STATE(41)] = 763,
  [SMALL_STATE(42)] = 776,
  [SMALL_STATE(43)] = 793,
  [SMALL_STATE(44)] = 807,
  [SMALL_STATE(45)] = 821,
  [SMALL_STATE(46)] = 832,
  [SMALL_STATE(47)] = 843,
  [SMALL_STATE(48)] = 854,
  [SMALL_STATE(49)] = 865,
  [SMALL_STATE(50)] = 876,
  [SMALL_STATE(51)] = 887,
  [SMALL_STATE(52)] = 898,
  [SMALL_STATE(53)] = 909,
  [SMALL_STATE(54)] = 920,
  [SMALL_STATE(55)] = 937,
  [SMALL_STATE(56)] = 948,
  [SMALL_STATE(57)] = 965,
  [SMALL_STATE(58)] = 976,
  [SMALL_STATE(59)] = 993,
  [SMALL_STATE(60)] = 1004,
  [SMALL_STATE(61)] = 1021,
  [SMALL_STATE(62)] = 1036,
  [SMALL_STATE(63)] = 1052,
  [SMALL_STATE(64)] = 1068,
  [SMALL_STATE(65)] = 1084,
  [SMALL_STATE(66)] = 1094,
  [SMALL_STATE(67)] = 1104,
  [SMALL_STATE(68)] = 1120,
  [SMALL_STATE(69)] = 1136,
  [SMALL_STATE(70)] = 1152,
  [SMALL_STATE(71)] = 1160,
  [SMALL_STATE(72)] = 1176,
  [SMALL_STATE(73)] = 1186,
  [SMALL_STATE(74)] = 1195,
  [SMALL_STATE(75)] = 1204,
  [SMALL_STATE(76)] = 1217,
  [SMALL_STATE(77)] = 1230,
  [SMALL_STATE(78)] = 1239,
  [SMALL_STATE(79)] = 1252,
  [SMALL_STATE(80)] = 1261,
  [SMALL_STATE(81)] = 1274,
  [SMALL_STATE(82)] = 1287,
  [SMALL_STATE(83)] = 1296,
  [SMALL_STATE(84)] = 1309,
  [SMALL_STATE(85)] = 1318,
  [SMALL_STATE(86)] = 1327,
  [SMALL_STATE(87)] = 1340,
  [SMALL_STATE(88)] = 1353,
  [SMALL_STATE(89)] = 1366,
  [SMALL_STATE(90)] = 1375,
  [SMALL_STATE(91)] = 1388,
  [SMALL_STATE(92)] = 1401,
  [SMALL_STATE(93)] = 1410,
  [SMALL_STATE(94)] = 1423,
  [SMALL_STATE(95)] = 1433,
  [SMALL_STATE(96)] = 1441,
  [SMALL_STATE(97)] = 1449,
  [SMALL_STATE(98)] = 1457,
  [SMALL_STATE(99)] = 1467,
  [SMALL_STATE(100)] = 1477,
  [SMALL_STATE(101)] = 1485,
  [SMALL_STATE(102)] = 1493,
  [SMALL_STATE(103)] = 1501,
  [SMALL_STATE(104)] = 1511,
  [SMALL_STATE(105)] = 1521,
  [SMALL_STATE(106)] = 1527,
  [SMALL_STATE(107)] = 1537,
  [SMALL_STATE(108)] = 1547,
  [SMALL_STATE(109)] = 1555,
  [SMALL_STATE(110)] = 1565,
  [SMALL_STATE(111)] = 1575,
  [SMALL_STATE(112)] = 1583,
  [SMALL_STATE(113)] = 1593,
  [SMALL_STATE(114)] = 1603,
  [SMALL_STATE(115)] = 1611,
  [SMALL_STATE(116)] = 1619,
  [SMALL_STATE(117)] = 1629,
  [SMALL_STATE(118)] = 1637,
  [SMALL_STATE(119)] = 1644,
  [SMALL_STATE(120)] = 1651,
  [SMALL_STATE(121)] = 1658,
  [SMALL_STATE(122)] = 1665,
  [SMALL_STATE(123)] = 1672,
  [SMALL_STATE(124)] = 1679,
  [SMALL_STATE(125)] = 1683,
  [SMALL_STATE(126)] = 1687,
  [SMALL_STATE(127)] = 1691,
  [SMALL_STATE(128)] = 1695,
  [SMALL_STATE(129)] = 1699,
  [SMALL_STATE(130)] = 1703,
  [SMALL_STATE(131)] = 1707,
  [SMALL_STATE(132)] = 1711,
  [SMALL_STATE(133)] = 1715,
  [SMALL_STATE(134)] = 1719,
  [SMALL_STATE(135)] = 1723,
  [SMALL_STATE(136)] = 1727,
  [SMALL_STATE(137)] = 1731,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(80),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(16),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(16),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(65),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(66),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(105),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(120),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(127),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 5),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 5),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 7),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_content, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_content, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(36),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_content, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_content, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 5, .production_id = 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 5, .production_id = 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 6),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 6),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 1),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 2),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 2),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2), SHIFT_REPEAT(135),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_name, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_attribute_name, 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_attribute_name, 1),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(76),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(125),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 1),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 1),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(86),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(125),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 3),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 4),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 4),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 4),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 4),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 3),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 3),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 2),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__js_attribute, 3),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__js_attribute, 3),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 3),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 3),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 3),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 3),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [413] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
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
