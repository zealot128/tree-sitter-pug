#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 124
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 1
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 3

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
  aux_sym_attribute_token1 = 12,
  anon_sym_EQ = 13,
  anon_sym_SLASH_SLASH = 14,
  sym_tag_name = 15,
  sym_class = 16,
  sym_id = 17,
  anon_sym_SQUOTE = 18,
  aux_sym_quoted_attribute_value_token1 = 19,
  anon_sym_DQUOTE = 20,
  aux_sym_quoted_attribute_value_token2 = 21,
  sym_javascript = 22,
  sym_content = 23,
  anon_sym_LBRACE_LBRACE = 24,
  anon_sym_RBRACE_RBRACE = 25,
  sym__comment_content = 26,
  sym__newline = 27,
  sym__indent = 28,
  sym__dedent = 29,
  sym_source_file = 30,
  sym_doctype = 31,
  sym_pipe_content = 32,
  sym_tag = 33,
  sym__content_after_dot = 34,
  sym_attributes = 35,
  sym_attribute = 36,
  sym_children = 37,
  sym__children_choice = 38,
  sym_comment = 39,
  sym_attribute_name = 40,
  sym_quoted_attribute_value = 41,
  aux_sym__content_or_javascript = 42,
  aux_sym_source_file_repeat1 = 43,
  aux_sym_tag_repeat1 = 44,
  aux_sym__content_after_dot_repeat1 = 45,
  aux_sym_attributes_repeat1 = 46,
  aux_sym_attribute_repeat1 = 47,
  aux_sym_children_repeat1 = 48,
  aux_sym_comment_repeat1 = 49,
  alias_sym_attribute_modifier = 50,
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
  [aux_sym_attribute_token1] = "attribute_token1",
  [anon_sym_EQ] = "=",
  [anon_sym_SLASH_SLASH] = "//",
  [sym_tag_name] = "tag_name",
  [sym_class] = "class",
  [sym_id] = "id",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_attribute_value_token1] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_attribute_value_token2] = "attribute_value",
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
  [sym_children] = "children",
  [sym__children_choice] = "_children_choice",
  [sym_comment] = "comment",
  [sym_attribute_name] = "attribute_name",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [aux_sym__content_or_javascript] = "_content_or_javascript",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_tag_repeat1] = "tag_repeat1",
  [aux_sym__content_after_dot_repeat1] = "_content_after_dot_repeat1",
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
  [aux_sym_attribute_repeat1] = "attribute_repeat1",
  [aux_sym_children_repeat1] = "children_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [alias_sym_attribute_modifier] = "attribute_modifier",
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
  [aux_sym_attribute_token1] = aux_sym_attribute_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [sym_tag_name] = sym_tag_name,
  [sym_class] = sym_class,
  [sym_id] = sym_id,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_attribute_value_token1] = aux_sym_quoted_attribute_value_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_attribute_value_token2] = aux_sym_quoted_attribute_value_token1,
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
  [sym_children] = sym_children,
  [sym__children_choice] = sym__children_choice,
  [sym_comment] = sym_comment,
  [sym_attribute_name] = sym_attribute_name,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [aux_sym__content_or_javascript] = aux_sym__content_or_javascript,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_tag_repeat1] = aux_sym_tag_repeat1,
  [aux_sym__content_after_dot_repeat1] = aux_sym__content_after_dot_repeat1,
  [aux_sym_attributes_repeat1] = aux_sym_attributes_repeat1,
  [aux_sym_attribute_repeat1] = aux_sym_attribute_repeat1,
  [aux_sym_children_repeat1] = aux_sym_children_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [alias_sym_attribute_modifier] = alias_sym_attribute_modifier,
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
  [aux_sym_attribute_token1] = {
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token2] = {
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
  [aux_sym_attribute_repeat1] = {
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
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_attribute_modifier,
  },
  [2] = {
    [3] = sym_children,
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
      if (eof) ADVANCE(34);
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '\'') ADVANCE(73);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == ')') ADVANCE(48);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == 'h') ADVANCE(25);
      if (lookahead == 's') ADVANCE(22);
      if (lookahead == 'x') ADVANCE(17);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '|') ADVANCE(41);
      if (lookahead == '}') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(80);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(43);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == ')') ADVANCE(48);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(43);
      if (lookahead == ')') ADVANCE(48);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(86);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '|') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(51);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 17:
      if (lookahead == 'm') ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 20:
      if (lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 26:
      if (lookahead == 'y') ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == '{') ADVANCE(83);
      END_STATE();
    case 28:
      if (lookahead == '}') ADVANCE(84);
      END_STATE();
    case 29:
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 30:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(69);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 31:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 32:
      if (eof) ADVANCE(34);
      if (lookahead == ' ') SKIP(32)
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 33:
      if (eof) ADVANCE(34);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'd') ADVANCE(57);
      if (lookahead == '|') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_doctype);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_strict);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(69);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(61);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(53);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(54);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(55);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(56);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(63);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(64);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(59);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(60);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(69);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(70);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_javascript);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_javascript);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == ' ') ADVANCE(85);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == ' ') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(86);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(70);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 33},
  [2] = {.lex_state = 33, .external_lex_state = 2},
  [3] = {.lex_state = 33, .external_lex_state = 2},
  [4] = {.lex_state = 33, .external_lex_state = 2},
  [5] = {.lex_state = 3, .external_lex_state = 3},
  [6] = {.lex_state = 33},
  [7] = {.lex_state = 3, .external_lex_state = 3},
  [8] = {.lex_state = 33, .external_lex_state = 4},
  [9] = {.lex_state = 3, .external_lex_state = 3},
  [10] = {.lex_state = 33, .external_lex_state = 4},
  [11] = {.lex_state = 33, .external_lex_state = 4},
  [12] = {.lex_state = 33, .external_lex_state = 4},
  [13] = {.lex_state = 3, .external_lex_state = 3},
  [14] = {.lex_state = 33},
  [15] = {.lex_state = 33, .external_lex_state = 4},
  [16] = {.lex_state = 32, .external_lex_state = 2},
  [17] = {.lex_state = 32, .external_lex_state = 2},
  [18] = {.lex_state = 32, .external_lex_state = 2},
  [19] = {.lex_state = 32, .external_lex_state = 2},
  [20] = {.lex_state = 32, .external_lex_state = 2},
  [21] = {.lex_state = 33, .external_lex_state = 5},
  [22] = {.lex_state = 33, .external_lex_state = 2},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 33, .external_lex_state = 2},
  [26] = {.lex_state = 33, .external_lex_state = 2},
  [27] = {.lex_state = 33, .external_lex_state = 5},
  [28] = {.lex_state = 33, .external_lex_state = 2},
  [29] = {.lex_state = 32, .external_lex_state = 2},
  [30] = {.lex_state = 33, .external_lex_state = 5},
  [31] = {.lex_state = 33, .external_lex_state = 2},
  [32] = {.lex_state = 33, .external_lex_state = 2},
  [33] = {.lex_state = 33, .external_lex_state = 2},
  [34] = {.lex_state = 3, .external_lex_state = 3},
  [35] = {.lex_state = 33, .external_lex_state = 2},
  [36] = {.lex_state = 33, .external_lex_state = 5},
  [37] = {.lex_state = 33, .external_lex_state = 2},
  [38] = {.lex_state = 33, .external_lex_state = 5},
  [39] = {.lex_state = 33, .external_lex_state = 2},
  [40] = {.lex_state = 33, .external_lex_state = 5},
  [41] = {.lex_state = 33, .external_lex_state = 5},
  [42] = {.lex_state = 33},
  [43] = {.lex_state = 33},
  [44] = {.lex_state = 33},
  [45] = {.lex_state = 33},
  [46] = {.lex_state = 33},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 33},
  [49] = {.lex_state = 33},
  [50] = {.lex_state = 33},
  [51] = {.lex_state = 33},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 33},
  [54] = {.lex_state = 33},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 33},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 1, .external_lex_state = 2},
  [61] = {.lex_state = 4, .external_lex_state = 3},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 4, .external_lex_state = 3},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 4, .external_lex_state = 3},
  [66] = {.lex_state = 4, .external_lex_state = 3},
  [67] = {.lex_state = 1, .external_lex_state = 2},
  [68] = {.lex_state = 1, .external_lex_state = 2},
  [69] = {.lex_state = 1, .external_lex_state = 3},
  [70] = {.lex_state = 1, .external_lex_state = 3},
  [71] = {.lex_state = 1, .external_lex_state = 3},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1, .external_lex_state = 3},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 1, .external_lex_state = 3},
  [76] = {.lex_state = 4, .external_lex_state = 3},
  [77] = {.lex_state = 1, .external_lex_state = 3},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 1, .external_lex_state = 3},
  [80] = {.lex_state = 1, .external_lex_state = 3},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 1, .external_lex_state = 3},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 4, .external_lex_state = 3},
  [87] = {.lex_state = 1, .external_lex_state = 3},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 4, .external_lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1, .external_lex_state = 2},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1, .external_lex_state = 3},
  [107] = {.lex_state = 9},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 5, .external_lex_state = 3},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 0, .external_lex_state = 5},
  [113] = {.lex_state = 0, .external_lex_state = 3},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0, .external_lex_state = 3},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0, .external_lex_state = 3},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 0, .external_lex_state = 5},
  [123] = {.lex_state = 0, .external_lex_state = 3},
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
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(116),
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
    STATE(25), 1,
      sym__content_after_dot,
    STATE(34), 1,
      aux_sym_tag_repeat1,
    STATE(66), 1,
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
    STATE(14), 4,
      sym_doctype,
      sym_tag,
      sym_comment,
      aux_sym_source_file_repeat1,
  [131] = 9,
    ACTIONS(44), 1,
      anon_sym_DOT,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      anon_sym_COLON,
    ACTIONS(56), 1,
      anon_sym_,
    ACTIONS(60), 1,
      sym__newline,
    STATE(5), 1,
      aux_sym_tag_repeat1,
    STATE(26), 1,
      sym__content_after_dot,
    STATE(65), 1,
      sym_attributes,
    ACTIONS(58), 2,
      sym_class,
      sym_id,
  [160] = 4,
    ACTIONS(66), 1,
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
  [179] = 9,
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
    STATE(13), 1,
      aux_sym_tag_repeat1,
    STATE(49), 1,
      sym__content_after_dot,
    STATE(61), 1,
      sym_attributes,
    ACTIONS(74), 2,
      sym_class,
      sym_id,
  [208] = 4,
    ACTIONS(66), 1,
      sym__indent,
    STATE(37), 1,
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
  [227] = 4,
    ACTIONS(66), 1,
      sym__indent,
    STATE(32), 1,
      sym_children,
    ACTIONS(84), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(82), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [246] = 4,
    ACTIONS(66), 1,
      sym__indent,
    STATE(25), 1,
      sym_children,
    ACTIONS(88), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(86), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [265] = 9,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 1,
      anon_sym_DOT,
    ACTIONS(90), 1,
      anon_sym_COLON,
    ACTIONS(92), 1,
      anon_sym_,
    ACTIONS(94), 1,
      sym__newline,
    STATE(34), 1,
      aux_sym_tag_repeat1,
    STATE(51), 1,
      sym__content_after_dot,
    STATE(63), 1,
      sym_attributes,
    ACTIONS(48), 2,
      sym_class,
      sym_id,
  [294] = 6,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(98), 1,
      anon_sym_doctype,
    ACTIONS(101), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(104), 1,
      sym_tag_name,
    ACTIONS(107), 2,
      sym_class,
      sym_id,
    STATE(14), 4,
      sym_doctype,
      sym_tag,
      sym_comment,
      aux_sym_source_file_repeat1,
  [317] = 4,
    ACTIONS(66), 1,
      sym__indent,
    STATE(22), 1,
      sym_children,
    ACTIONS(112), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(110), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [336] = 4,
    ACTIONS(118), 1,
      sym__comment_content,
    STATE(16), 1,
      aux_sym_comment_repeat1,
    ACTIONS(114), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(116), 5,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
  [354] = 5,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 1,
      sym__comment_content,
    ACTIONS(127), 1,
      sym__dedent,
    STATE(19), 1,
      aux_sym_comment_repeat1,
    ACTIONS(123), 5,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
  [374] = 5,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 1,
      sym__comment_content,
    ACTIONS(127), 1,
      sym__dedent,
    STATE(16), 1,
      aux_sym_comment_repeat1,
    ACTIONS(123), 5,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
  [394] = 5,
    ACTIONS(125), 1,
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
  [414] = 5,
    ACTIONS(125), 1,
      sym__comment_content,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 1,
      sym__dedent,
    STATE(18), 1,
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
    STATE(54), 1,
      sym_children,
    ACTIONS(80), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(78), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [451] = 2,
    ACTIONS(84), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(82), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [464] = 3,
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
  [479] = 3,
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
  [494] = 2,
    ACTIONS(112), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(110), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [507] = 2,
    ACTIONS(88), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(86), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [520] = 4,
    ACTIONS(141), 1,
      sym__indent,
    STATE(56), 1,
      sym_children,
    ACTIONS(64), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(62), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [537] = 2,
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
  [550] = 2,
    ACTIONS(114), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(116), 6,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      sym__comment_content,
  [563] = 4,
    ACTIONS(141), 1,
      sym__indent,
    STATE(43), 1,
      sym_children,
    ACTIONS(112), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(110), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [580] = 2,
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
  [593] = 2,
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
  [606] = 2,
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
  [619] = 4,
    STATE(34), 1,
      aux_sym_tag_repeat1,
    ACTIONS(157), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(159), 2,
      sym_class,
      sym_id,
    ACTIONS(155), 3,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_LPAREN,
  [636] = 2,
    ACTIONS(164), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(162), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [649] = 4,
    ACTIONS(141), 1,
      sym__indent,
    STATE(45), 1,
      sym_children,
    ACTIONS(84), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(82), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [666] = 2,
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
  [679] = 4,
    ACTIONS(141), 1,
      sym__indent,
    STATE(51), 1,
      sym_children,
    ACTIONS(88), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(86), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [696] = 2,
    ACTIONS(168), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(166), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [709] = 3,
    ACTIONS(170), 1,
      sym__indent,
    ACTIONS(137), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(135), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [723] = 3,
    ACTIONS(176), 1,
      sym__indent,
    ACTIONS(174), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(172), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [737] = 2,
    ACTIONS(149), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(147), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [748] = 2,
    ACTIONS(84), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(82), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [759] = 2,
    ACTIONS(180), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(178), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [770] = 2,
    ACTIONS(80), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(78), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [781] = 2,
    ACTIONS(184), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(182), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [792] = 4,
    ACTIONS(186), 1,
      anon_sym_,
    ACTIONS(188), 1,
      anon_sym_DOT,
    STATE(47), 1,
      aux_sym_attribute_repeat1,
    ACTIONS(191), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [807] = 2,
    ACTIONS(164), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(162), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [818] = 2,
    ACTIONS(88), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(86), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [829] = 2,
    ACTIONS(123), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(121), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [840] = 2,
    ACTIONS(112), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(110), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [851] = 5,
    ACTIONS(193), 1,
      anon_sym_,
    ACTIONS(195), 1,
      anon_sym_DOT,
    ACTIONS(199), 1,
      anon_sym_EQ,
    STATE(47), 1,
      aux_sym_attribute_repeat1,
    ACTIONS(197), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [868] = 2,
    ACTIONS(131), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(129), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [879] = 2,
    ACTIONS(64), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(62), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [890] = 5,
    ACTIONS(195), 1,
      anon_sym_DOT,
    ACTIONS(201), 1,
      anon_sym_,
    ACTIONS(205), 1,
      anon_sym_EQ,
    STATE(52), 1,
      aux_sym_attribute_repeat1,
    ACTIONS(203), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [907] = 2,
    ACTIONS(168), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(166), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [918] = 2,
    ACTIONS(207), 1,
      anon_sym_,
    ACTIONS(209), 4,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [928] = 5,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    ACTIONS(213), 1,
      aux_sym_attribute_token1,
    STATE(55), 1,
      sym_attribute_name,
    STATE(58), 1,
      aux_sym_attributes_repeat1,
    STATE(108), 1,
      sym_attribute,
  [944] = 2,
    ACTIONS(216), 1,
      anon_sym_,
    ACTIONS(218), 4,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [954] = 5,
    ACTIONS(220), 1,
      sym_content,
    ACTIONS(223), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(226), 1,
      sym__dedent,
    STATE(60), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(71), 1,
      aux_sym__content_or_javascript,
  [970] = 5,
    ACTIONS(72), 1,
      anon_sym_DOT,
    ACTIONS(90), 1,
      anon_sym_COLON,
    ACTIONS(92), 1,
      anon_sym_,
    ACTIONS(94), 1,
      sym__newline,
    STATE(51), 1,
      sym__content_after_dot,
  [986] = 5,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
    ACTIONS(230), 1,
      aux_sym_attribute_token1,
    STATE(55), 1,
      sym_attribute_name,
    STATE(64), 1,
      aux_sym_attributes_repeat1,
    STATE(94), 1,
      sym_attribute,
  [1002] = 5,
    ACTIONS(72), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      anon_sym_COLON,
    ACTIONS(234), 1,
      anon_sym_,
    ACTIONS(236), 1,
      sym__newline,
    STATE(43), 1,
      sym__content_after_dot,
  [1018] = 5,
    ACTIONS(230), 1,
      aux_sym_attribute_token1,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      sym_attribute_name,
    STATE(58), 1,
      aux_sym_attributes_repeat1,
    STATE(98), 1,
      sym_attribute,
  [1034] = 5,
    ACTIONS(40), 1,
      anon_sym_COLON,
    ACTIONS(42), 1,
      anon_sym_,
    ACTIONS(44), 1,
      anon_sym_DOT,
    ACTIONS(50), 1,
      sym__newline,
    STATE(25), 1,
      sym__content_after_dot,
  [1050] = 5,
    ACTIONS(44), 1,
      anon_sym_DOT,
    ACTIONS(240), 1,
      anon_sym_COLON,
    ACTIONS(242), 1,
      anon_sym_,
    ACTIONS(244), 1,
      sym__newline,
    STATE(22), 1,
      sym__content_after_dot,
  [1066] = 5,
    ACTIONS(246), 1,
      sym_content,
    ACTIONS(248), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(250), 1,
      sym__dedent,
    STATE(60), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(71), 1,
      aux_sym__content_or_javascript,
  [1082] = 5,
    ACTIONS(246), 1,
      sym_content,
    ACTIONS(248), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(252), 1,
      sym__dedent,
    STATE(60), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(71), 1,
      aux_sym__content_or_javascript,
  [1098] = 4,
    ACTIONS(248), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(254), 1,
      sym_content,
    ACTIONS(256), 1,
      sym__newline,
    STATE(77), 1,
      aux_sym__content_or_javascript,
  [1111] = 4,
    ACTIONS(248), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(254), 1,
      sym_content,
    ACTIONS(258), 1,
      sym__newline,
    STATE(77), 1,
      aux_sym__content_or_javascript,
  [1124] = 4,
    ACTIONS(248), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(254), 1,
      sym_content,
    ACTIONS(260), 1,
      sym__newline,
    STATE(77), 1,
      aux_sym__content_or_javascript,
  [1137] = 4,
    ACTIONS(246), 1,
      sym_content,
    ACTIONS(248), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(67), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(71), 1,
      aux_sym__content_or_javascript,
  [1150] = 4,
    ACTIONS(248), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(254), 1,
      sym_content,
    ACTIONS(262), 1,
      sym__newline,
    STATE(77), 1,
      aux_sym__content_or_javascript,
  [1163] = 2,
    STATE(32), 1,
      sym_tag,
    ACTIONS(21), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1172] = 4,
    ACTIONS(248), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(254), 1,
      sym_content,
    ACTIONS(264), 1,
      sym__newline,
    STATE(77), 1,
      aux_sym__content_or_javascript,
  [1185] = 2,
    ACTIONS(266), 2,
      anon_sym_COLON,
      anon_sym_DOT,
    ACTIONS(268), 2,
      sym__newline,
      anon_sym_,
  [1194] = 4,
    ACTIONS(270), 1,
      sym_content,
    ACTIONS(273), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(276), 1,
      sym__newline,
    STATE(77), 1,
      aux_sym__content_or_javascript,
  [1207] = 2,
    STATE(43), 1,
      sym_tag,
    ACTIONS(11), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1216] = 4,
    ACTIONS(248), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(254), 1,
      sym_content,
    ACTIONS(278), 1,
      sym__newline,
    STATE(77), 1,
      aux_sym__content_or_javascript,
  [1229] = 4,
    ACTIONS(248), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(280), 1,
      sym_content,
    ACTIONS(282), 1,
      sym__newline,
    STATE(69), 1,
      aux_sym__content_or_javascript,
  [1242] = 2,
    STATE(22), 1,
      sym_tag,
    ACTIONS(21), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1251] = 4,
    ACTIONS(244), 1,
      sym__newline,
    ACTIONS(248), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(254), 1,
      sym_content,
    STATE(77), 1,
      aux_sym__content_or_javascript,
  [1264] = 4,
    ACTIONS(246), 1,
      sym_content,
    ACTIONS(248), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(68), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(71), 1,
      aux_sym__content_or_javascript,
  [1277] = 2,
    STATE(25), 1,
      sym_tag,
    ACTIONS(21), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1286] = 2,
    STATE(51), 1,
      sym_tag,
    ACTIONS(11), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1295] = 2,
    ACTIONS(284), 2,
      anon_sym_COLON,
      anon_sym_DOT,
    ACTIONS(286), 2,
      sym__newline,
      anon_sym_,
  [1304] = 4,
    ACTIONS(236), 1,
      sym__newline,
    ACTIONS(248), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(254), 1,
      sym_content,
    STATE(77), 1,
      aux_sym__content_or_javascript,
  [1317] = 2,
    STATE(45), 1,
      sym_tag,
    ACTIONS(11), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1326] = 2,
    ACTIONS(288), 2,
      anon_sym_COLON,
      anon_sym_DOT,
    ACTIONS(290), 2,
      sym__newline,
      anon_sym_,
  [1335] = 2,
    ACTIONS(292), 1,
      anon_sym_,
    ACTIONS(294), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1343] = 1,
    ACTIONS(296), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [1349] = 3,
    ACTIONS(248), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(298), 1,
      sym_content,
    STATE(79), 1,
      aux_sym__content_or_javascript,
  [1359] = 2,
    ACTIONS(300), 1,
      anon_sym_,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1367] = 3,
    ACTIONS(304), 1,
      anon_sym_,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
  [1377] = 3,
    ACTIONS(248), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(310), 1,
      sym_content,
    STATE(73), 1,
      aux_sym__content_or_javascript,
  [1387] = 3,
    ACTIONS(248), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(312), 1,
      sym_content,
    STATE(75), 1,
      aux_sym__content_or_javascript,
  [1397] = 3,
    ACTIONS(248), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(314), 1,
      sym_content,
    STATE(82), 1,
      aux_sym__content_or_javascript,
  [1407] = 3,
    ACTIONS(304), 1,
      anon_sym_,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(316), 1,
      anon_sym_RPAREN,
  [1417] = 3,
    ACTIONS(318), 1,
      anon_sym_SQUOTE,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
    STATE(100), 1,
      sym_quoted_attribute_value,
  [1427] = 2,
    ACTIONS(322), 1,
      anon_sym_,
    ACTIONS(324), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1435] = 2,
    ACTIONS(326), 1,
      anon_sym_,
    ACTIONS(328), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1443] = 3,
    ACTIONS(318), 1,
      anon_sym_SQUOTE,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      sym_quoted_attribute_value,
  [1453] = 3,
    ACTIONS(248), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(330), 1,
      sym_content,
    STATE(87), 1,
      aux_sym__content_or_javascript,
  [1463] = 2,
    ACTIONS(332), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(226), 2,
      sym__dedent,
      sym_content,
  [1471] = 3,
    ACTIONS(248), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(334), 1,
      sym_content,
    STATE(70), 1,
      aux_sym__content_or_javascript,
  [1481] = 2,
    ACTIONS(338), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(336), 2,
      sym__newline,
      sym_content,
  [1489] = 1,
    ACTIONS(211), 2,
      anon_sym_RPAREN,
      aux_sym_attribute_token1,
  [1494] = 2,
    ACTIONS(304), 1,
      anon_sym_,
    ACTIONS(306), 1,
      anon_sym_COMMA,
  [1501] = 2,
    ACTIONS(340), 1,
      sym__comment_content,
    ACTIONS(342), 1,
      sym__newline,
  [1508] = 2,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      aux_sym_quoted_attribute_value_token2,
  [1515] = 2,
    ACTIONS(344), 1,
      anon_sym_SQUOTE,
    ACTIONS(348), 1,
      aux_sym_quoted_attribute_value_token1,
  [1522] = 1,
    ACTIONS(350), 1,
      sym__indent,
  [1526] = 1,
    ACTIONS(352), 1,
      sym__newline,
  [1530] = 1,
    ACTIONS(354), 1,
      anon_sym_SQUOTE,
  [1534] = 1,
    ACTIONS(356), 1,
      sym__newline,
  [1538] = 1,
    ACTIONS(358), 1,
      ts_builtin_sym_end,
  [1542] = 1,
    ACTIONS(354), 1,
      anon_sym_DQUOTE,
  [1546] = 1,
    ACTIONS(360), 1,
      anon_sym_RBRACE_RBRACE,
  [1550] = 1,
    ACTIONS(362), 1,
      sym__newline,
  [1554] = 1,
    ACTIONS(364), 1,
      aux_sym_attribute_token1,
  [1558] = 1,
    ACTIONS(366), 1,
      sym_javascript,
  [1562] = 1,
    ACTIONS(368), 1,
      sym__indent,
  [1566] = 1,
    ACTIONS(370), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 79,
  [SMALL_STATE(6)] = 108,
  [SMALL_STATE(7)] = 131,
  [SMALL_STATE(8)] = 160,
  [SMALL_STATE(9)] = 179,
  [SMALL_STATE(10)] = 208,
  [SMALL_STATE(11)] = 227,
  [SMALL_STATE(12)] = 246,
  [SMALL_STATE(13)] = 265,
  [SMALL_STATE(14)] = 294,
  [SMALL_STATE(15)] = 317,
  [SMALL_STATE(16)] = 336,
  [SMALL_STATE(17)] = 354,
  [SMALL_STATE(18)] = 374,
  [SMALL_STATE(19)] = 394,
  [SMALL_STATE(20)] = 414,
  [SMALL_STATE(21)] = 434,
  [SMALL_STATE(22)] = 451,
  [SMALL_STATE(23)] = 464,
  [SMALL_STATE(24)] = 479,
  [SMALL_STATE(25)] = 494,
  [SMALL_STATE(26)] = 507,
  [SMALL_STATE(27)] = 520,
  [SMALL_STATE(28)] = 537,
  [SMALL_STATE(29)] = 550,
  [SMALL_STATE(30)] = 563,
  [SMALL_STATE(31)] = 580,
  [SMALL_STATE(32)] = 593,
  [SMALL_STATE(33)] = 606,
  [SMALL_STATE(34)] = 619,
  [SMALL_STATE(35)] = 636,
  [SMALL_STATE(36)] = 649,
  [SMALL_STATE(37)] = 666,
  [SMALL_STATE(38)] = 679,
  [SMALL_STATE(39)] = 696,
  [SMALL_STATE(40)] = 709,
  [SMALL_STATE(41)] = 723,
  [SMALL_STATE(42)] = 737,
  [SMALL_STATE(43)] = 748,
  [SMALL_STATE(44)] = 759,
  [SMALL_STATE(45)] = 770,
  [SMALL_STATE(46)] = 781,
  [SMALL_STATE(47)] = 792,
  [SMALL_STATE(48)] = 807,
  [SMALL_STATE(49)] = 818,
  [SMALL_STATE(50)] = 829,
  [SMALL_STATE(51)] = 840,
  [SMALL_STATE(52)] = 851,
  [SMALL_STATE(53)] = 868,
  [SMALL_STATE(54)] = 879,
  [SMALL_STATE(55)] = 890,
  [SMALL_STATE(56)] = 907,
  [SMALL_STATE(57)] = 918,
  [SMALL_STATE(58)] = 928,
  [SMALL_STATE(59)] = 944,
  [SMALL_STATE(60)] = 954,
  [SMALL_STATE(61)] = 970,
  [SMALL_STATE(62)] = 986,
  [SMALL_STATE(63)] = 1002,
  [SMALL_STATE(64)] = 1018,
  [SMALL_STATE(65)] = 1034,
  [SMALL_STATE(66)] = 1050,
  [SMALL_STATE(67)] = 1066,
  [SMALL_STATE(68)] = 1082,
  [SMALL_STATE(69)] = 1098,
  [SMALL_STATE(70)] = 1111,
  [SMALL_STATE(71)] = 1124,
  [SMALL_STATE(72)] = 1137,
  [SMALL_STATE(73)] = 1150,
  [SMALL_STATE(74)] = 1163,
  [SMALL_STATE(75)] = 1172,
  [SMALL_STATE(76)] = 1185,
  [SMALL_STATE(77)] = 1194,
  [SMALL_STATE(78)] = 1207,
  [SMALL_STATE(79)] = 1216,
  [SMALL_STATE(80)] = 1229,
  [SMALL_STATE(81)] = 1242,
  [SMALL_STATE(82)] = 1251,
  [SMALL_STATE(83)] = 1264,
  [SMALL_STATE(84)] = 1277,
  [SMALL_STATE(85)] = 1286,
  [SMALL_STATE(86)] = 1295,
  [SMALL_STATE(87)] = 1304,
  [SMALL_STATE(88)] = 1317,
  [SMALL_STATE(89)] = 1326,
  [SMALL_STATE(90)] = 1335,
  [SMALL_STATE(91)] = 1343,
  [SMALL_STATE(92)] = 1349,
  [SMALL_STATE(93)] = 1359,
  [SMALL_STATE(94)] = 1367,
  [SMALL_STATE(95)] = 1377,
  [SMALL_STATE(96)] = 1387,
  [SMALL_STATE(97)] = 1397,
  [SMALL_STATE(98)] = 1407,
  [SMALL_STATE(99)] = 1417,
  [SMALL_STATE(100)] = 1427,
  [SMALL_STATE(101)] = 1435,
  [SMALL_STATE(102)] = 1443,
  [SMALL_STATE(103)] = 1453,
  [SMALL_STATE(104)] = 1463,
  [SMALL_STATE(105)] = 1471,
  [SMALL_STATE(106)] = 1481,
  [SMALL_STATE(107)] = 1489,
  [SMALL_STATE(108)] = 1494,
  [SMALL_STATE(109)] = 1501,
  [SMALL_STATE(110)] = 1508,
  [SMALL_STATE(111)] = 1515,
  [SMALL_STATE(112)] = 1522,
  [SMALL_STATE(113)] = 1526,
  [SMALL_STATE(114)] = 1530,
  [SMALL_STATE(115)] = 1534,
  [SMALL_STATE(116)] = 1538,
  [SMALL_STATE(117)] = 1542,
  [SMALL_STATE(118)] = 1546,
  [SMALL_STATE(119)] = 1550,
  [SMALL_STATE(120)] = 1554,
  [SMALL_STATE(121)] = 1558,
  [SMALL_STATE(122)] = 1562,
  [SMALL_STATE(123)] = 1566,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(80),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(7),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(7),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(91),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(109),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(113),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 5),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 5),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_content, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_content, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_content, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_content, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(34),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 5, .production_id = 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 5, .production_id = 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 7),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 6),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 6),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2), SHIFT_REPEAT(120),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, .production_id = 1),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, .production_id = 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(59),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_name, 1),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(71),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(121),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(77),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(121),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 3),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [358] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
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
