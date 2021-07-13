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
      if (eof) ADVANCE(33);
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '\'') ADVANCE(59);
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == 'h') ADVANCE(25);
      if (lookahead == 's') ADVANCE(22);
      if (lookahead == 'x') ADVANCE(17);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '|') ADVANCE(39);
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
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(66);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(71);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '|') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(49);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(36);
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
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 26:
      if (lookahead == 'y') ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == '{') ADVANCE(69);
      END_STATE();
    case 28:
      if (lookahead == '}') ADVANCE(70);
      END_STATE();
    case 29:
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 30:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 31:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 32:
      if (eof) ADVANCE(33);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_doctype);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_strict);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(54);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(50);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(51);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(53);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_javascript);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_javascript);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == ' ') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(71);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 32},
  [2] = {.lex_state = 3, .external_lex_state = 2},
  [3] = {.lex_state = 3, .external_lex_state = 2},
  [4] = {.lex_state = 32},
  [5] = {.lex_state = 3, .external_lex_state = 2},
  [6] = {.lex_state = 3, .external_lex_state = 2},
  [7] = {.lex_state = 32},
  [8] = {.lex_state = 7, .external_lex_state = 3},
  [9] = {.lex_state = 7, .external_lex_state = 3},
  [10] = {.lex_state = 7, .external_lex_state = 3},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 32, .external_lex_state = 4},
  [14] = {.lex_state = 3, .external_lex_state = 2},
  [15] = {.lex_state = 32, .external_lex_state = 4},
  [16] = {.lex_state = 32, .external_lex_state = 4},
  [17] = {.lex_state = 32, .external_lex_state = 4},
  [18] = {.lex_state = 32, .external_lex_state = 4},
  [19] = {.lex_state = 32, .external_lex_state = 4},
  [20] = {.lex_state = 7, .external_lex_state = 5},
  [21] = {.lex_state = 32, .external_lex_state = 4},
  [22] = {.lex_state = 7, .external_lex_state = 5},
  [23] = {.lex_state = 7, .external_lex_state = 5},
  [24] = {.lex_state = 7, .external_lex_state = 5},
  [25] = {.lex_state = 7, .external_lex_state = 5},
  [26] = {.lex_state = 32},
  [27] = {.lex_state = 32},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 32},
  [31] = {.lex_state = 32},
  [32] = {.lex_state = 32},
  [33] = {.lex_state = 32},
  [34] = {.lex_state = 32},
  [35] = {.lex_state = 32},
  [36] = {.lex_state = 32},
  [37] = {.lex_state = 32},
  [38] = {.lex_state = 32},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 32},
  [41] = {.lex_state = 7, .external_lex_state = 3},
  [42] = {.lex_state = 4, .external_lex_state = 2},
  [43] = {.lex_state = 1, .external_lex_state = 3},
  [44] = {.lex_state = 4, .external_lex_state = 2},
  [45] = {.lex_state = 4, .external_lex_state = 2},
  [46] = {.lex_state = 7, .external_lex_state = 3},
  [47] = {.lex_state = 7, .external_lex_state = 3},
  [48] = {.lex_state = 7, .external_lex_state = 3},
  [49] = {.lex_state = 7, .external_lex_state = 3},
  [50] = {.lex_state = 7, .external_lex_state = 3},
  [51] = {.lex_state = 7, .external_lex_state = 3},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 4, .external_lex_state = 2},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 7, .external_lex_state = 3},
  [56] = {.lex_state = 7, .external_lex_state = 3},
  [57] = {.lex_state = 1, .external_lex_state = 3},
  [58] = {.lex_state = 7, .external_lex_state = 3},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 1, .external_lex_state = 3},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 1, .external_lex_state = 2},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1, .external_lex_state = 2},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 1, .external_lex_state = 2},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 1, .external_lex_state = 2},
  [71] = {.lex_state = 1, .external_lex_state = 2},
  [72] = {.lex_state = 1, .external_lex_state = 2},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 4, .external_lex_state = 2},
  [76] = {.lex_state = 1, .external_lex_state = 2},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1, .external_lex_state = 2},
  [79] = {.lex_state = 4, .external_lex_state = 2},
  [80] = {.lex_state = 1, .external_lex_state = 2},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 4, .external_lex_state = 2},
  [83] = {.lex_state = 1, .external_lex_state = 2},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 5, .external_lex_state = 3},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1, .external_lex_state = 3},
  [95] = {.lex_state = 5, .external_lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 5, .external_lex_state = 3},
  [100] = {.lex_state = 5, .external_lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 1, .external_lex_state = 2},
  [103] = {.lex_state = 5, .external_lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 5, .external_lex_state = 2},
  [109] = {.lex_state = 9},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 5, .external_lex_state = 3},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0, .external_lex_state = 2},
  [118] = {.lex_state = 0, .external_lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 0, .external_lex_state = 4},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0, .external_lex_state = 4},
  [123] = {.lex_state = 0, .external_lex_state = 2},
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
    [ts_external_token__newline] = true,
  },
  [3] = {
    [ts_external_token__dedent] = true,
  },
  [4] = {
    [ts_external_token__indent] = true,
  },
  [5] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
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
    [sym_doctype] = STATE(4),
    [sym_tag] = STATE(4),
    [sym_comment] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_doctype] = ACTIONS(5),
    [anon_sym_SLASH_SLASH] = ACTIONS(7),
    [sym_tag_name] = ACTIONS(9),
    [sym_class] = ACTIONS(11),
    [sym_id] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON,
    ACTIONS(15), 1,
      anon_sym_,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym__newline,
    STATE(6), 1,
      aux_sym_tag_repeat1,
    STATE(27), 1,
      sym__content_after_dot,
    STATE(53), 1,
      sym_attributes,
    ACTIONS(21), 2,
      sym_class,
      sym_id,
  [29] = 9,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      sym__newline,
    STATE(14), 1,
      aux_sym_tag_repeat1,
    STATE(44), 1,
      sym_attributes,
    STATE(55), 1,
      sym__content_after_dot,
    ACTIONS(31), 2,
      sym_class,
      sym_id,
  [58] = 6,
    ACTIONS(5), 1,
      anon_sym_doctype,
    ACTIONS(7), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(9), 1,
      sym_tag_name,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 2,
      sym_class,
      sym_id,
    STATE(7), 4,
      sym_doctype,
      sym_tag,
      sym_comment,
      aux_sym_source_file_repeat1,
  [81] = 9,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(37), 1,
      anon_sym_COLON,
    ACTIONS(39), 1,
      anon_sym_,
    ACTIONS(43), 1,
      sym__newline,
    STATE(3), 1,
      aux_sym_tag_repeat1,
    STATE(45), 1,
      sym_attributes,
    STATE(56), 1,
      sym__content_after_dot,
    ACTIONS(41), 2,
      sym_class,
      sym_id,
  [110] = 9,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      anon_sym_,
    ACTIONS(49), 1,
      sym__newline,
    STATE(14), 1,
      aux_sym_tag_repeat1,
    STATE(38), 1,
      sym__content_after_dot,
    STATE(42), 1,
      sym_attributes,
    ACTIONS(31), 2,
      sym_class,
      sym_id,
  [139] = 6,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      anon_sym_doctype,
    ACTIONS(56), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(59), 1,
      sym_tag_name,
    ACTIONS(62), 2,
      sym_class,
      sym_id,
    STATE(7), 4,
      sym_doctype,
      sym_tag,
      sym_comment,
      aux_sym_source_file_repeat1,
  [162] = 4,
    ACTIONS(65), 1,
      anon_sym_PIPE,
    ACTIONS(69), 1,
      sym__dedent,
    ACTIONS(67), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(9), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [180] = 4,
    ACTIONS(71), 1,
      anon_sym_PIPE,
    ACTIONS(77), 1,
      sym__dedent,
    ACTIONS(74), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(9), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [198] = 4,
    ACTIONS(65), 1,
      anon_sym_PIPE,
    ACTIONS(79), 1,
      sym__dedent,
    ACTIONS(67), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(9), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [216] = 3,
    ACTIONS(65), 1,
      anon_sym_PIPE,
    ACTIONS(67), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(10), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [231] = 3,
    ACTIONS(65), 1,
      anon_sym_PIPE,
    ACTIONS(67), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(8), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [246] = 4,
    ACTIONS(85), 1,
      sym__indent,
    STATE(30), 1,
      sym_children,
    ACTIONS(83), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(81), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [263] = 4,
    STATE(14), 1,
      aux_sym_tag_repeat1,
    ACTIONS(89), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(91), 2,
      sym_class,
      sym_id,
    ACTIONS(87), 3,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_LPAREN,
  [280] = 4,
    ACTIONS(85), 1,
      sym__indent,
    STATE(38), 1,
      sym_children,
    ACTIONS(96), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(94), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [297] = 4,
    ACTIONS(85), 1,
      sym__indent,
    STATE(40), 1,
      sym_children,
    ACTIONS(100), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(98), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [314] = 4,
    ACTIONS(85), 1,
      sym__indent,
    STATE(34), 1,
      sym_children,
    ACTIONS(104), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(102), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [331] = 4,
    ACTIONS(85), 1,
      sym__indent,
    STATE(31), 1,
      sym_children,
    ACTIONS(108), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(106), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [348] = 3,
    ACTIONS(114), 1,
      sym__indent,
    ACTIONS(112), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(110), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [362] = 3,
    ACTIONS(116), 1,
      sym__indent,
    STATE(51), 1,
      sym_children,
    ACTIONS(98), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [376] = 3,
    ACTIONS(122), 1,
      sym__indent,
    ACTIONS(120), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(118), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [390] = 3,
    ACTIONS(116), 1,
      sym__indent,
    STATE(46), 1,
      sym_children,
    ACTIONS(106), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [404] = 3,
    ACTIONS(116), 1,
      sym__indent,
    STATE(47), 1,
      sym_children,
    ACTIONS(102), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [418] = 3,
    ACTIONS(116), 1,
      sym__indent,
    STATE(49), 1,
      sym_children,
    ACTIONS(81), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [432] = 3,
    ACTIONS(116), 1,
      sym__indent,
    STATE(55), 1,
      sym_children,
    ACTIONS(94), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [446] = 2,
    ACTIONS(126), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(124), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [457] = 2,
    ACTIONS(96), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(94), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [468] = 4,
    ACTIONS(128), 1,
      anon_sym_,
    ACTIONS(130), 1,
      anon_sym_DOT,
    STATE(28), 1,
      aux_sym_attribute_repeat1,
    ACTIONS(133), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [483] = 5,
    ACTIONS(135), 1,
      anon_sym_,
    ACTIONS(137), 1,
      anon_sym_DOT,
    ACTIONS(141), 1,
      anon_sym_EQ,
    STATE(39), 1,
      aux_sym_attribute_repeat1,
    ACTIONS(139), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [500] = 2,
    ACTIONS(104), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(102), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [511] = 2,
    ACTIONS(145), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(143), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [522] = 2,
    ACTIONS(149), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(147), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [533] = 2,
    ACTIONS(153), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(151), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [544] = 2,
    ACTIONS(108), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(106), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [555] = 2,
    ACTIONS(157), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(155), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [566] = 2,
    ACTIONS(161), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(159), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [577] = 2,
    ACTIONS(165), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(163), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [588] = 2,
    ACTIONS(100), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(98), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [599] = 5,
    ACTIONS(137), 1,
      anon_sym_DOT,
    ACTIONS(167), 1,
      anon_sym_,
    ACTIONS(171), 1,
      anon_sym_EQ,
    STATE(28), 1,
      aux_sym_attribute_repeat1,
    ACTIONS(169), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [616] = 2,
    ACTIONS(83), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(81), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [627] = 1,
    ACTIONS(173), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [635] = 5,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(175), 1,
      anon_sym_COLON,
    ACTIONS(177), 1,
      anon_sym_,
    ACTIONS(179), 1,
      sym__newline,
    STATE(40), 1,
      sym__content_after_dot,
  [651] = 5,
    ACTIONS(181), 1,
      sym_content,
    ACTIONS(183), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(185), 1,
      sym__dedent,
    STATE(57), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(70), 1,
      aux_sym__content_or_javascript,
  [667] = 5,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(187), 1,
      anon_sym_COLON,
    ACTIONS(189), 1,
      anon_sym_,
    ACTIONS(191), 1,
      sym__newline,
    STATE(51), 1,
      sym__content_after_dot,
  [683] = 5,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      sym__newline,
    STATE(55), 1,
      sym__content_after_dot,
  [699] = 1,
    ACTIONS(143), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [707] = 1,
    ACTIONS(106), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [715] = 1,
    ACTIONS(124), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [723] = 1,
    ACTIONS(102), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [731] = 1,
    ACTIONS(151), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [739] = 1,
    ACTIONS(81), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [747] = 5,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    ACTIONS(195), 1,
      aux_sym_attribute_token1,
    STATE(29), 1,
      sym_attribute_name,
    STATE(60), 1,
      aux_sym_attributes_repeat1,
    STATE(91), 1,
      sym_attribute,
  [763] = 5,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(45), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      anon_sym_,
    ACTIONS(49), 1,
      sym__newline,
    STATE(38), 1,
      sym__content_after_dot,
  [779] = 5,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    ACTIONS(199), 1,
      aux_sym_attribute_token1,
    STATE(29), 1,
      sym_attribute_name,
    STATE(54), 1,
      aux_sym_attributes_repeat1,
    STATE(110), 1,
      sym_attribute,
  [795] = 1,
    ACTIONS(98), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [803] = 1,
    ACTIONS(94), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [811] = 5,
    ACTIONS(202), 1,
      sym_content,
    ACTIONS(205), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(208), 1,
      sym__dedent,
    STATE(57), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(70), 1,
      aux_sym__content_or_javascript,
  [827] = 1,
    ACTIONS(210), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [835] = 2,
    ACTIONS(212), 1,
      anon_sym_,
    ACTIONS(214), 4,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [845] = 5,
    ACTIONS(195), 1,
      aux_sym_attribute_token1,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      sym_attribute_name,
    STATE(54), 1,
      aux_sym_attributes_repeat1,
    STATE(96), 1,
      sym_attribute,
  [861] = 5,
    ACTIONS(181), 1,
      sym_content,
    ACTIONS(183), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(218), 1,
      sym__dedent,
    STATE(57), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(70), 1,
      aux_sym__content_or_javascript,
  [877] = 2,
    ACTIONS(220), 1,
      anon_sym_,
    ACTIONS(222), 4,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [887] = 4,
    ACTIONS(183), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(224), 1,
      sym_content,
    ACTIONS(226), 1,
      sym__newline,
    STATE(76), 1,
      aux_sym__content_or_javascript,
  [900] = 2,
    STATE(51), 1,
      sym_tag,
    ACTIONS(67), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [909] = 4,
    ACTIONS(181), 1,
      sym_content,
    ACTIONS(183), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(43), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(70), 1,
      aux_sym__content_or_javascript,
  [922] = 4,
    ACTIONS(183), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(224), 1,
      sym_content,
    ACTIONS(228), 1,
      sym__newline,
    STATE(76), 1,
      aux_sym__content_or_javascript,
  [935] = 2,
    STATE(49), 1,
      sym_tag,
    ACTIONS(67), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [944] = 4,
    ACTIONS(183), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(224), 1,
      sym_content,
    ACTIONS(230), 1,
      sym__newline,
    STATE(76), 1,
      aux_sym__content_or_javascript,
  [957] = 2,
    STATE(40), 1,
      sym_tag,
    ACTIONS(11), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [966] = 4,
    ACTIONS(183), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(224), 1,
      sym_content,
    ACTIONS(232), 1,
      sym__newline,
    STATE(76), 1,
      aux_sym__content_or_javascript,
  [979] = 4,
    ACTIONS(183), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(234), 1,
      sym_content,
    ACTIONS(236), 1,
      sym__newline,
    STATE(63), 1,
      aux_sym__content_or_javascript,
  [992] = 4,
    ACTIONS(183), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(191), 1,
      sym__newline,
    ACTIONS(224), 1,
      sym_content,
    STATE(76), 1,
      aux_sym__content_or_javascript,
  [1005] = 2,
    STATE(55), 1,
      sym_tag,
    ACTIONS(67), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1014] = 2,
    STATE(38), 1,
      sym_tag,
    ACTIONS(11), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1023] = 2,
    ACTIONS(238), 2,
      anon_sym_COLON,
      anon_sym_DOT,
    ACTIONS(240), 2,
      sym__newline,
      anon_sym_,
  [1032] = 4,
    ACTIONS(242), 1,
      sym_content,
    ACTIONS(245), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(248), 1,
      sym__newline,
    STATE(76), 1,
      aux_sym__content_or_javascript,
  [1045] = 4,
    ACTIONS(181), 1,
      sym_content,
    ACTIONS(183), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(61), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(70), 1,
      aux_sym__content_or_javascript,
  [1058] = 4,
    ACTIONS(183), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(224), 1,
      sym_content,
    ACTIONS(250), 1,
      sym__newline,
    STATE(76), 1,
      aux_sym__content_or_javascript,
  [1071] = 2,
    ACTIONS(252), 2,
      anon_sym_COLON,
      anon_sym_DOT,
    ACTIONS(254), 2,
      sym__newline,
      anon_sym_,
  [1080] = 4,
    ACTIONS(183), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(224), 1,
      sym_content,
    ACTIONS(256), 1,
      sym__newline,
    STATE(76), 1,
      aux_sym__content_or_javascript,
  [1093] = 2,
    STATE(30), 1,
      sym_tag,
    ACTIONS(11), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1102] = 2,
    ACTIONS(258), 2,
      anon_sym_COLON,
      anon_sym_DOT,
    ACTIONS(260), 2,
      sym__newline,
      anon_sym_,
  [1111] = 4,
    ACTIONS(179), 1,
      sym__newline,
    ACTIONS(183), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(224), 1,
      sym_content,
    STATE(76), 1,
      aux_sym__content_or_javascript,
  [1124] = 3,
    ACTIONS(183), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(262), 1,
      sym_content,
    STATE(80), 1,
      aux_sym__content_or_javascript,
  [1134] = 3,
    ACTIONS(183), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(264), 1,
      sym_content,
    STATE(83), 1,
      aux_sym__content_or_javascript,
  [1144] = 3,
    ACTIONS(183), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(266), 1,
      sym_content,
    STATE(66), 1,
      aux_sym__content_or_javascript,
  [1154] = 2,
    ACTIONS(268), 1,
      anon_sym_,
    ACTIONS(270), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1162] = 1,
    ACTIONS(272), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [1168] = 3,
    ACTIONS(183), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(274), 1,
      sym_content,
    STATE(68), 1,
      aux_sym__content_or_javascript,
  [1178] = 2,
    ACTIONS(276), 1,
      anon_sym_,
    ACTIONS(278), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1186] = 3,
    ACTIONS(280), 1,
      anon_sym_,
    ACTIONS(282), 1,
      anon_sym_COMMA,
    ACTIONS(284), 1,
      anon_sym_RPAREN,
  [1196] = 3,
    ACTIONS(286), 1,
      sym__comment_content,
    ACTIONS(288), 1,
      sym__dedent,
    STATE(99), 1,
      aux_sym_comment_repeat1,
  [1206] = 3,
    ACTIONS(183), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(290), 1,
      sym_content,
    STATE(78), 1,
      aux_sym__content_or_javascript,
  [1216] = 2,
    ACTIONS(292), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(208), 2,
      sym__dedent,
      sym_content,
  [1224] = 3,
    ACTIONS(294), 1,
      sym__comment_content,
    ACTIONS(297), 1,
      sym__dedent,
    STATE(95), 1,
      aux_sym_comment_repeat1,
  [1234] = 3,
    ACTIONS(280), 1,
      anon_sym_,
    ACTIONS(282), 1,
      anon_sym_COMMA,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
  [1244] = 3,
    ACTIONS(301), 1,
      anon_sym_SQUOTE,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    STATE(104), 1,
      sym_quoted_attribute_value,
  [1254] = 3,
    ACTIONS(183), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(305), 1,
      sym_content,
    STATE(72), 1,
      aux_sym__content_or_javascript,
  [1264] = 3,
    ACTIONS(286), 1,
      sym__comment_content,
    ACTIONS(307), 1,
      sym__dedent,
    STATE(95), 1,
      aux_sym_comment_repeat1,
  [1274] = 3,
    ACTIONS(286), 1,
      sym__comment_content,
    ACTIONS(307), 1,
      sym__dedent,
    STATE(103), 1,
      aux_sym_comment_repeat1,
  [1284] = 2,
    ACTIONS(309), 1,
      anon_sym_,
    ACTIONS(311), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1292] = 2,
    ACTIONS(315), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(313), 2,
      sym__newline,
      sym_content,
  [1300] = 3,
    ACTIONS(286), 1,
      sym__comment_content,
    ACTIONS(317), 1,
      sym__dedent,
    STATE(95), 1,
      aux_sym_comment_repeat1,
  [1310] = 2,
    ACTIONS(319), 1,
      anon_sym_,
    ACTIONS(321), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1318] = 3,
    ACTIONS(301), 1,
      anon_sym_SQUOTE,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    STATE(87), 1,
      sym_quoted_attribute_value,
  [1328] = 2,
    ACTIONS(323), 1,
      anon_sym_DQUOTE,
    ACTIONS(325), 1,
      aux_sym_quoted_attribute_value_token2,
  [1335] = 2,
    ACTIONS(323), 1,
      anon_sym_SQUOTE,
    ACTIONS(327), 1,
      aux_sym_quoted_attribute_value_token1,
  [1342] = 2,
    ACTIONS(329), 1,
      sym__comment_content,
    ACTIONS(331), 1,
      sym__newline,
  [1349] = 1,
    ACTIONS(197), 2,
      anon_sym_RPAREN,
      aux_sym_attribute_token1,
  [1354] = 2,
    ACTIONS(280), 1,
      anon_sym_,
    ACTIONS(282), 1,
      anon_sym_COMMA,
  [1361] = 1,
    ACTIONS(297), 2,
      sym__dedent,
      sym__comment_content,
  [1366] = 1,
    ACTIONS(333), 1,
      aux_sym_attribute_token1,
  [1370] = 1,
    ACTIONS(335), 1,
      anon_sym_RBRACE_RBRACE,
  [1374] = 1,
    ACTIONS(337), 1,
      sym__newline,
  [1378] = 1,
    ACTIONS(339), 1,
      anon_sym_SQUOTE,
  [1382] = 1,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
  [1386] = 1,
    ACTIONS(343), 1,
      sym__newline,
  [1390] = 1,
    ACTIONS(345), 1,
      sym__newline,
  [1394] = 1,
    ACTIONS(347), 1,
      sym_javascript,
  [1398] = 1,
    ACTIONS(349), 1,
      sym__indent,
  [1402] = 1,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
  [1406] = 1,
    ACTIONS(351), 1,
      sym__indent,
  [1410] = 1,
    ACTIONS(353), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 81,
  [SMALL_STATE(6)] = 110,
  [SMALL_STATE(7)] = 139,
  [SMALL_STATE(8)] = 162,
  [SMALL_STATE(9)] = 180,
  [SMALL_STATE(10)] = 198,
  [SMALL_STATE(11)] = 216,
  [SMALL_STATE(12)] = 231,
  [SMALL_STATE(13)] = 246,
  [SMALL_STATE(14)] = 263,
  [SMALL_STATE(15)] = 280,
  [SMALL_STATE(16)] = 297,
  [SMALL_STATE(17)] = 314,
  [SMALL_STATE(18)] = 331,
  [SMALL_STATE(19)] = 348,
  [SMALL_STATE(20)] = 362,
  [SMALL_STATE(21)] = 376,
  [SMALL_STATE(22)] = 390,
  [SMALL_STATE(23)] = 404,
  [SMALL_STATE(24)] = 418,
  [SMALL_STATE(25)] = 432,
  [SMALL_STATE(26)] = 446,
  [SMALL_STATE(27)] = 457,
  [SMALL_STATE(28)] = 468,
  [SMALL_STATE(29)] = 483,
  [SMALL_STATE(30)] = 500,
  [SMALL_STATE(31)] = 511,
  [SMALL_STATE(32)] = 522,
  [SMALL_STATE(33)] = 533,
  [SMALL_STATE(34)] = 544,
  [SMALL_STATE(35)] = 555,
  [SMALL_STATE(36)] = 566,
  [SMALL_STATE(37)] = 577,
  [SMALL_STATE(38)] = 588,
  [SMALL_STATE(39)] = 599,
  [SMALL_STATE(40)] = 616,
  [SMALL_STATE(41)] = 627,
  [SMALL_STATE(42)] = 635,
  [SMALL_STATE(43)] = 651,
  [SMALL_STATE(44)] = 667,
  [SMALL_STATE(45)] = 683,
  [SMALL_STATE(46)] = 699,
  [SMALL_STATE(47)] = 707,
  [SMALL_STATE(48)] = 715,
  [SMALL_STATE(49)] = 723,
  [SMALL_STATE(50)] = 731,
  [SMALL_STATE(51)] = 739,
  [SMALL_STATE(52)] = 747,
  [SMALL_STATE(53)] = 763,
  [SMALL_STATE(54)] = 779,
  [SMALL_STATE(55)] = 795,
  [SMALL_STATE(56)] = 803,
  [SMALL_STATE(57)] = 811,
  [SMALL_STATE(58)] = 827,
  [SMALL_STATE(59)] = 835,
  [SMALL_STATE(60)] = 845,
  [SMALL_STATE(61)] = 861,
  [SMALL_STATE(62)] = 877,
  [SMALL_STATE(63)] = 887,
  [SMALL_STATE(64)] = 900,
  [SMALL_STATE(65)] = 909,
  [SMALL_STATE(66)] = 922,
  [SMALL_STATE(67)] = 935,
  [SMALL_STATE(68)] = 944,
  [SMALL_STATE(69)] = 957,
  [SMALL_STATE(70)] = 966,
  [SMALL_STATE(71)] = 979,
  [SMALL_STATE(72)] = 992,
  [SMALL_STATE(73)] = 1005,
  [SMALL_STATE(74)] = 1014,
  [SMALL_STATE(75)] = 1023,
  [SMALL_STATE(76)] = 1032,
  [SMALL_STATE(77)] = 1045,
  [SMALL_STATE(78)] = 1058,
  [SMALL_STATE(79)] = 1071,
  [SMALL_STATE(80)] = 1080,
  [SMALL_STATE(81)] = 1093,
  [SMALL_STATE(82)] = 1102,
  [SMALL_STATE(83)] = 1111,
  [SMALL_STATE(84)] = 1124,
  [SMALL_STATE(85)] = 1134,
  [SMALL_STATE(86)] = 1144,
  [SMALL_STATE(87)] = 1154,
  [SMALL_STATE(88)] = 1162,
  [SMALL_STATE(89)] = 1168,
  [SMALL_STATE(90)] = 1178,
  [SMALL_STATE(91)] = 1186,
  [SMALL_STATE(92)] = 1196,
  [SMALL_STATE(93)] = 1206,
  [SMALL_STATE(94)] = 1216,
  [SMALL_STATE(95)] = 1224,
  [SMALL_STATE(96)] = 1234,
  [SMALL_STATE(97)] = 1244,
  [SMALL_STATE(98)] = 1254,
  [SMALL_STATE(99)] = 1264,
  [SMALL_STATE(100)] = 1274,
  [SMALL_STATE(101)] = 1284,
  [SMALL_STATE(102)] = 1292,
  [SMALL_STATE(103)] = 1300,
  [SMALL_STATE(104)] = 1310,
  [SMALL_STATE(105)] = 1318,
  [SMALL_STATE(106)] = 1328,
  [SMALL_STATE(107)] = 1335,
  [SMALL_STATE(108)] = 1342,
  [SMALL_STATE(109)] = 1349,
  [SMALL_STATE(110)] = 1354,
  [SMALL_STATE(111)] = 1361,
  [SMALL_STATE(112)] = 1366,
  [SMALL_STATE(113)] = 1370,
  [SMALL_STATE(114)] = 1374,
  [SMALL_STATE(115)] = 1378,
  [SMALL_STATE(116)] = 1382,
  [SMALL_STATE(117)] = 1386,
  [SMALL_STATE(118)] = 1390,
  [SMALL_STATE(119)] = 1394,
  [SMALL_STATE(120)] = 1398,
  [SMALL_STATE(121)] = 1402,
  [SMALL_STATE(122)] = 1406,
  [SMALL_STATE(123)] = 1410,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(88),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(108),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(71),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(5),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(14),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 5, .production_id = 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 5, .production_id = 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2), SHIFT_REPEAT(112),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 7),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 6),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 6),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 5),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 5),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_content, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(59),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(70),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(119),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_content, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_name, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, .production_id = 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, .production_id = 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(76),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(119),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(118),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 3),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [341] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
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
