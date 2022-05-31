#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 126
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 1
#define TOKEN_COUNT 32
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
  anon_sym_BQUOTE = 22,
  aux_sym_quoted_attribute_value_token3 = 23,
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
  sym_children = 39,
  sym__children_choice = 40,
  sym_comment = 41,
  sym_attribute_name = 42,
  sym_quoted_attribute_value = 43,
  aux_sym__content_or_javascript = 44,
  aux_sym_source_file_repeat1 = 45,
  aux_sym_tag_repeat1 = 46,
  aux_sym__content_after_dot_repeat1 = 47,
  aux_sym_attributes_repeat1 = 48,
  aux_sym_attribute_repeat1 = 49,
  aux_sym_children_repeat1 = 50,
  aux_sym_comment_repeat1 = 51,
  alias_sym_attribute_modifier = 52,
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
  [anon_sym_BQUOTE] = "`",
  [aux_sym_quoted_attribute_value_token3] = "attribute_value",
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
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_quoted_attribute_value_token3] = aux_sym_quoted_attribute_value_token1,
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
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token3] = {
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
      if (eof) ADVANCE(35);
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(74);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '`') ADVANCE(80);
      if (lookahead == 'd') ADVANCE(17);
      if (lookahead == 'h') ADVANCE(23);
      if (lookahead == 's') ADVANCE(20);
      if (lookahead == 'x') ADVANCE(15);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == '|') ADVANCE(42);
      if (lookahead == '}') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(84);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(44);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(44);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(90);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '|') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 7:
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(52);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 15:
      if (lookahead == 'm') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'm') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 18:
      if (lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 24:
      if (lookahead == 'y') ADVANCE(18);
      END_STATE();
    case 25:
      if (lookahead == '{') ADVANCE(87);
      END_STATE();
    case 26:
      if (lookahead == '}') ADVANCE(88);
      END_STATE();
    case 27:
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 28:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(70);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 29:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 30:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 31:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(76);
      END_STATE();
    case 32:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 33:
      if (eof) ADVANCE(35);
      if (lookahead == ' ') SKIP(33)
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 34:
      if (eof) ADVANCE(35);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == '|') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_doctype);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_strict);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(70);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(54);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(55);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(56);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(57);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(64);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(65);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(60);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(61);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(70);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(71);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token3);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token3);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_javascript);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_javascript);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ' ') ADVANCE(89);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(90);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '/') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(71);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 34},
  [2] = {.lex_state = 34, .external_lex_state = 2},
  [3] = {.lex_state = 34, .external_lex_state = 2},
  [4] = {.lex_state = 34, .external_lex_state = 2},
  [5] = {.lex_state = 3, .external_lex_state = 3},
  [6] = {.lex_state = 34},
  [7] = {.lex_state = 3, .external_lex_state = 3},
  [8] = {.lex_state = 34, .external_lex_state = 4},
  [9] = {.lex_state = 3, .external_lex_state = 3},
  [10] = {.lex_state = 34, .external_lex_state = 4},
  [11] = {.lex_state = 34, .external_lex_state = 4},
  [12] = {.lex_state = 34, .external_lex_state = 4},
  [13] = {.lex_state = 3, .external_lex_state = 3},
  [14] = {.lex_state = 34},
  [15] = {.lex_state = 34, .external_lex_state = 4},
  [16] = {.lex_state = 33, .external_lex_state = 2},
  [17] = {.lex_state = 33, .external_lex_state = 2},
  [18] = {.lex_state = 33, .external_lex_state = 2},
  [19] = {.lex_state = 33, .external_lex_state = 2},
  [20] = {.lex_state = 33, .external_lex_state = 2},
  [21] = {.lex_state = 34, .external_lex_state = 2},
  [22] = {.lex_state = 34, .external_lex_state = 2},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 34, .external_lex_state = 2},
  [26] = {.lex_state = 34, .external_lex_state = 2},
  [27] = {.lex_state = 34, .external_lex_state = 2},
  [28] = {.lex_state = 34, .external_lex_state = 5},
  [29] = {.lex_state = 34, .external_lex_state = 2},
  [30] = {.lex_state = 34, .external_lex_state = 5},
  [31] = {.lex_state = 34, .external_lex_state = 5},
  [32] = {.lex_state = 34, .external_lex_state = 2},
  [33] = {.lex_state = 34, .external_lex_state = 2},
  [34] = {.lex_state = 3, .external_lex_state = 3},
  [35] = {.lex_state = 34, .external_lex_state = 5},
  [36] = {.lex_state = 34, .external_lex_state = 2},
  [37] = {.lex_state = 34, .external_lex_state = 5},
  [38] = {.lex_state = 34, .external_lex_state = 2},
  [39] = {.lex_state = 33, .external_lex_state = 2},
  [40] = {.lex_state = 34, .external_lex_state = 5},
  [41] = {.lex_state = 34, .external_lex_state = 5},
  [42] = {.lex_state = 34},
  [43] = {.lex_state = 34},
  [44] = {.lex_state = 34},
  [45] = {.lex_state = 34},
  [46] = {.lex_state = 34},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 34},
  [49] = {.lex_state = 34},
  [50] = {.lex_state = 34},
  [51] = {.lex_state = 34},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 34},
  [55] = {.lex_state = 34},
  [56] = {.lex_state = 34},
  [57] = {.lex_state = 1, .external_lex_state = 2},
  [58] = {.lex_state = 1, .external_lex_state = 2},
  [59] = {.lex_state = 1, .external_lex_state = 2},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 4, .external_lex_state = 3},
  [62] = {.lex_state = 4, .external_lex_state = 3},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 4, .external_lex_state = 3},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4, .external_lex_state = 3},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 4, .external_lex_state = 3},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1, .external_lex_state = 3},
  [73] = {.lex_state = 1, .external_lex_state = 3},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 4, .external_lex_state = 3},
  [77] = {.lex_state = 1, .external_lex_state = 3},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 1, .external_lex_state = 3},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 1, .external_lex_state = 3},
  [83] = {.lex_state = 1, .external_lex_state = 3},
  [84] = {.lex_state = 4, .external_lex_state = 3},
  [85] = {.lex_state = 1, .external_lex_state = 3},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 1, .external_lex_state = 3},
  [89] = {.lex_state = 1, .external_lex_state = 3},
  [90] = {.lex_state = 1, .external_lex_state = 3},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 1, .external_lex_state = 3},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 1, .external_lex_state = 2},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 81},
  [110] = {.lex_state = 5, .external_lex_state = 3},
  [111] = {.lex_state = 75},
  [112] = {.lex_state = 78},
  [113] = {.lex_state = 0, .external_lex_state = 3},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 0, .external_lex_state = 3},
  [119] = {.lex_state = 0, .external_lex_state = 3},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 0, .external_lex_state = 5},
  [124] = {.lex_state = 0, .external_lex_state = 5},
  [125] = {.lex_state = 0, .external_lex_state = 3},
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
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(120),
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
    STATE(61), 1,
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
    STATE(62), 1,
      sym_attributes,
    ACTIONS(58), 2,
      sym_class,
      sym_id,
  [160] = 4,
    ACTIONS(66), 1,
      sym__indent,
    STATE(38), 1,
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
    STATE(45), 1,
      sym__content_after_dot,
    STATE(64), 1,
      sym_attributes,
    ACTIONS(74), 2,
      sym_class,
      sym_id,
  [208] = 4,
    ACTIONS(66), 1,
      sym__indent,
    STATE(36), 1,
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
    STATE(29), 1,
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
    STATE(46), 1,
      sym__content_after_dot,
    STATE(66), 1,
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
  [336] = 5,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 1,
      sym__comment_content,
    ACTIONS(120), 1,
      sym__dedent,
    STATE(19), 1,
      aux_sym_comment_repeat1,
    ACTIONS(116), 5,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
  [356] = 5,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 1,
      sym__comment_content,
    ACTIONS(120), 1,
      sym__dedent,
    STATE(18), 1,
      aux_sym_comment_repeat1,
    ACTIONS(116), 5,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
  [376] = 4,
    ACTIONS(126), 1,
      sym__comment_content,
    STATE(18), 1,
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
  [394] = 5,
    ACTIONS(118), 1,
      sym__comment_content,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    ACTIONS(133), 1,
      sym__dedent,
    STATE(18), 1,
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
    STATE(17), 1,
      aux_sym_comment_repeat1,
    ACTIONS(137), 5,
      anon_sym_doctype,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
  [434] = 2,
    ACTIONS(143), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(141), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [447] = 2,
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
  [460] = 3,
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
  [475] = 3,
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
  [490] = 2,
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
  [503] = 2,
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
  [516] = 2,
    ACTIONS(147), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(145), 6,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [529] = 4,
    ACTIONS(149), 1,
      sym__indent,
    STATE(42), 1,
      sym_children,
    ACTIONS(64), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(62), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [546] = 2,
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
  [559] = 4,
    ACTIONS(149), 1,
      sym__indent,
    STATE(56), 1,
      sym_children,
    ACTIONS(112), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(110), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [576] = 4,
    ACTIONS(149), 1,
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
  [593] = 2,
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
  [606] = 2,
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
  [619] = 4,
    STATE(34), 1,
      aux_sym_tag_repeat1,
    ACTIONS(161), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(163), 2,
      sym_class,
      sym_id,
    ACTIONS(159), 3,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_LPAREN,
  [636] = 4,
    ACTIONS(149), 1,
      sym__indent,
    STATE(43), 1,
      sym_children,
    ACTIONS(84), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(82), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [653] = 2,
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
  [666] = 4,
    ACTIONS(149), 1,
      sym__indent,
    STATE(46), 1,
      sym_children,
    ACTIONS(88), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(86), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [683] = 2,
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
  [696] = 2,
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
    ACTIONS(168), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(166), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [748] = 2,
    ACTIONS(80), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(78), 4,
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
    ACTIONS(88), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(86), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [781] = 2,
    ACTIONS(112), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(110), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [792] = 5,
    ACTIONS(182), 1,
      anon_sym_,
    ACTIONS(184), 1,
      anon_sym_DOT,
    ACTIONS(188), 1,
      anon_sym_EQ,
    STATE(53), 1,
      aux_sym_attribute_repeat1,
    ACTIONS(186), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [809] = 2,
    ACTIONS(64), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(62), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [820] = 2,
    ACTIONS(116), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(114), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [831] = 2,
    ACTIONS(153), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(151), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [842] = 2,
    ACTIONS(192), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(190), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [853] = 4,
    ACTIONS(194), 1,
      anon_sym_,
    ACTIONS(196), 1,
      anon_sym_DOT,
    STATE(52), 1,
      aux_sym_attribute_repeat1,
    ACTIONS(199), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [868] = 5,
    ACTIONS(184), 1,
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
  [885] = 2,
    ACTIONS(147), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(145), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [896] = 2,
    ACTIONS(131), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(129), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [907] = 2,
    ACTIONS(84), 2,
      anon_sym_doctype,
      sym_tag_name,
    ACTIONS(82), 4,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
  [918] = 5,
    ACTIONS(207), 1,
      sym_content,
    ACTIONS(210), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(213), 1,
      sym__dedent,
    STATE(57), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(85), 1,
      aux_sym__content_or_javascript,
  [934] = 5,
    ACTIONS(215), 1,
      sym_content,
    ACTIONS(217), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(219), 1,
      sym__dedent,
    STATE(57), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(85), 1,
      aux_sym__content_or_javascript,
  [950] = 5,
    ACTIONS(215), 1,
      sym_content,
    ACTIONS(217), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(221), 1,
      sym__dedent,
    STATE(57), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(85), 1,
      aux_sym__content_or_javascript,
  [966] = 5,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    ACTIONS(225), 1,
      aux_sym_attribute_token1,
    STATE(47), 1,
      sym_attribute_name,
    STATE(60), 1,
      aux_sym_attributes_repeat1,
    STATE(107), 1,
      sym_attribute,
  [982] = 5,
    ACTIONS(44), 1,
      anon_sym_DOT,
    ACTIONS(228), 1,
      anon_sym_COLON,
    ACTIONS(230), 1,
      anon_sym_,
    ACTIONS(232), 1,
      sym__newline,
    STATE(22), 1,
      sym__content_after_dot,
  [998] = 5,
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
  [1014] = 5,
    ACTIONS(234), 1,
      anon_sym_RPAREN,
    ACTIONS(236), 1,
      aux_sym_attribute_token1,
    STATE(47), 1,
      sym_attribute_name,
    STATE(67), 1,
      aux_sym_attributes_repeat1,
    STATE(95), 1,
      sym_attribute,
  [1030] = 5,
    ACTIONS(72), 1,
      anon_sym_DOT,
    ACTIONS(90), 1,
      anon_sym_COLON,
    ACTIONS(92), 1,
      anon_sym_,
    ACTIONS(94), 1,
      sym__newline,
    STATE(46), 1,
      sym__content_after_dot,
  [1046] = 2,
    ACTIONS(238), 1,
      anon_sym_,
    ACTIONS(240), 4,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1056] = 5,
    ACTIONS(72), 1,
      anon_sym_DOT,
    ACTIONS(242), 1,
      anon_sym_COLON,
    ACTIONS(244), 1,
      anon_sym_,
    ACTIONS(246), 1,
      sym__newline,
    STATE(56), 1,
      sym__content_after_dot,
  [1072] = 5,
    ACTIONS(236), 1,
      aux_sym_attribute_token1,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      sym_attribute_name,
    STATE(60), 1,
      aux_sym_attributes_repeat1,
    STATE(106), 1,
      sym_attribute,
  [1088] = 2,
    ACTIONS(250), 1,
      anon_sym_,
    ACTIONS(252), 4,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1098] = 4,
    ACTIONS(215), 1,
      sym_content,
    ACTIONS(217), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(58), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(85), 1,
      aux_sym__content_or_javascript,
  [1111] = 2,
    ACTIONS(254), 2,
      anon_sym_COLON,
      anon_sym_DOT,
    ACTIONS(256), 2,
      sym__newline,
      anon_sym_,
  [1120] = 4,
    ACTIONS(215), 1,
      sym_content,
    ACTIONS(217), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(59), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(85), 1,
      aux_sym__content_or_javascript,
  [1133] = 4,
    ACTIONS(217), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(258), 1,
      sym_content,
    ACTIONS(260), 1,
      sym__newline,
    STATE(89), 1,
      aux_sym__content_or_javascript,
  [1146] = 4,
    ACTIONS(217), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(258), 1,
      sym_content,
    ACTIONS(262), 1,
      sym__newline,
    STATE(89), 1,
      aux_sym__content_or_javascript,
  [1159] = 2,
    STATE(29), 1,
      sym_tag,
    ACTIONS(34), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1168] = 4,
    ACTIONS(264), 1,
      anon_sym_SQUOTE,
    ACTIONS(266), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      anon_sym_BQUOTE,
    STATE(101), 1,
      sym_quoted_attribute_value,
  [1181] = 2,
    ACTIONS(270), 2,
      anon_sym_COLON,
      anon_sym_DOT,
    ACTIONS(272), 2,
      sym__newline,
      anon_sym_,
  [1190] = 4,
    ACTIONS(217), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(258), 1,
      sym_content,
    ACTIONS(274), 1,
      sym__newline,
    STATE(89), 1,
      aux_sym__content_or_javascript,
  [1203] = 2,
    STATE(43), 1,
      sym_tag,
    ACTIONS(11), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1212] = 4,
    ACTIONS(217), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(258), 1,
      sym_content,
    ACTIONS(276), 1,
      sym__newline,
    STATE(89), 1,
      aux_sym__content_or_javascript,
  [1225] = 2,
    STATE(22), 1,
      sym_tag,
    ACTIONS(34), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1234] = 2,
    STATE(56), 1,
      sym_tag,
    ACTIONS(11), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1243] = 4,
    ACTIONS(217), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(232), 1,
      sym__newline,
    ACTIONS(258), 1,
      sym_content,
    STATE(89), 1,
      aux_sym__content_or_javascript,
  [1256] = 4,
    ACTIONS(217), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(278), 1,
      sym_content,
    ACTIONS(280), 1,
      sym__newline,
    STATE(88), 1,
      aux_sym__content_or_javascript,
  [1269] = 2,
    ACTIONS(282), 2,
      anon_sym_COLON,
      anon_sym_DOT,
    ACTIONS(284), 2,
      sym__newline,
      anon_sym_,
  [1278] = 4,
    ACTIONS(217), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(258), 1,
      sym_content,
    ACTIONS(286), 1,
      sym__newline,
    STATE(89), 1,
      aux_sym__content_or_javascript,
  [1291] = 2,
    STATE(25), 1,
      sym_tag,
    ACTIONS(34), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1300] = 2,
    STATE(46), 1,
      sym_tag,
    ACTIONS(11), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [1309] = 4,
    ACTIONS(217), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(258), 1,
      sym_content,
    ACTIONS(288), 1,
      sym__newline,
    STATE(89), 1,
      aux_sym__content_or_javascript,
  [1322] = 4,
    ACTIONS(290), 1,
      sym_content,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(296), 1,
      sym__newline,
    STATE(89), 1,
      aux_sym__content_or_javascript,
  [1335] = 4,
    ACTIONS(217), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(246), 1,
      sym__newline,
    ACTIONS(258), 1,
      sym_content,
    STATE(89), 1,
      aux_sym__content_or_javascript,
  [1348] = 4,
    ACTIONS(264), 1,
      anon_sym_SQUOTE,
    ACTIONS(266), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      anon_sym_BQUOTE,
    STATE(100), 1,
      sym_quoted_attribute_value,
  [1361] = 2,
    ACTIONS(298), 1,
      anon_sym_,
    ACTIONS(300), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1369] = 3,
    ACTIONS(217), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(302), 1,
      sym_content,
    STATE(79), 1,
      aux_sym__content_or_javascript,
  [1379] = 2,
    ACTIONS(304), 1,
      anon_sym_,
    ACTIONS(306), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1387] = 3,
    ACTIONS(308), 1,
      anon_sym_,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
  [1397] = 2,
    ACTIONS(316), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(314), 2,
      sym__newline,
      sym_content,
  [1405] = 3,
    ACTIONS(217), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(318), 1,
      sym_content,
    STATE(72), 1,
      aux_sym__content_or_javascript,
  [1415] = 3,
    ACTIONS(217), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(320), 1,
      sym_content,
    STATE(77), 1,
      aux_sym__content_or_javascript,
  [1425] = 3,
    ACTIONS(217), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(322), 1,
      sym_content,
    STATE(82), 1,
      aux_sym__content_or_javascript,
  [1435] = 2,
    ACTIONS(324), 1,
      anon_sym_,
    ACTIONS(326), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1443] = 2,
    ACTIONS(328), 1,
      anon_sym_,
    ACTIONS(330), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1451] = 3,
    ACTIONS(217), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(332), 1,
      sym_content,
    STATE(73), 1,
      aux_sym__content_or_javascript,
  [1461] = 1,
    ACTIONS(334), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [1467] = 2,
    ACTIONS(336), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(213), 2,
      sym__dedent,
      sym_content,
  [1475] = 3,
    ACTIONS(217), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(338), 1,
      sym_content,
    STATE(90), 1,
      aux_sym__content_or_javascript,
  [1485] = 3,
    ACTIONS(308), 1,
      anon_sym_,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
  [1495] = 2,
    ACTIONS(308), 1,
      anon_sym_,
    ACTIONS(310), 1,
      anon_sym_COMMA,
  [1502] = 1,
    ACTIONS(223), 2,
      anon_sym_RPAREN,
      aux_sym_attribute_token1,
  [1507] = 2,
    ACTIONS(342), 1,
      anon_sym_BQUOTE,
    ACTIONS(344), 1,
      aux_sym_quoted_attribute_value_token3,
  [1514] = 2,
    ACTIONS(346), 1,
      sym__comment_content,
    ACTIONS(348), 1,
      sym__newline,
  [1521] = 2,
    ACTIONS(342), 1,
      anon_sym_SQUOTE,
    ACTIONS(350), 1,
      aux_sym_quoted_attribute_value_token1,
  [1528] = 2,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      aux_sym_quoted_attribute_value_token2,
  [1535] = 1,
    ACTIONS(354), 1,
      sym__newline,
  [1539] = 1,
    ACTIONS(356), 1,
      anon_sym_DQUOTE,
  [1543] = 1,
    ACTIONS(356), 1,
      anon_sym_BQUOTE,
  [1547] = 1,
    ACTIONS(356), 1,
      anon_sym_SQUOTE,
  [1551] = 1,
    ACTIONS(358), 1,
      aux_sym_attribute_token1,
  [1555] = 1,
    ACTIONS(360), 1,
      sym__newline,
  [1559] = 1,
    ACTIONS(362), 1,
      sym__newline,
  [1563] = 1,
    ACTIONS(364), 1,
      ts_builtin_sym_end,
  [1567] = 1,
    ACTIONS(366), 1,
      anon_sym_RBRACE_RBRACE,
  [1571] = 1,
    ACTIONS(368), 1,
      sym_javascript,
  [1575] = 1,
    ACTIONS(370), 1,
      sym__indent,
  [1579] = 1,
    ACTIONS(372), 1,
      sym__indent,
  [1583] = 1,
    ACTIONS(374), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 52,
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
  [SMALL_STATE(17)] = 356,
  [SMALL_STATE(18)] = 376,
  [SMALL_STATE(19)] = 394,
  [SMALL_STATE(20)] = 414,
  [SMALL_STATE(21)] = 434,
  [SMALL_STATE(22)] = 447,
  [SMALL_STATE(23)] = 460,
  [SMALL_STATE(24)] = 475,
  [SMALL_STATE(25)] = 490,
  [SMALL_STATE(26)] = 503,
  [SMALL_STATE(27)] = 516,
  [SMALL_STATE(28)] = 529,
  [SMALL_STATE(29)] = 546,
  [SMALL_STATE(30)] = 559,
  [SMALL_STATE(31)] = 576,
  [SMALL_STATE(32)] = 593,
  [SMALL_STATE(33)] = 606,
  [SMALL_STATE(34)] = 619,
  [SMALL_STATE(35)] = 636,
  [SMALL_STATE(36)] = 653,
  [SMALL_STATE(37)] = 666,
  [SMALL_STATE(38)] = 683,
  [SMALL_STATE(39)] = 696,
  [SMALL_STATE(40)] = 709,
  [SMALL_STATE(41)] = 723,
  [SMALL_STATE(42)] = 737,
  [SMALL_STATE(43)] = 748,
  [SMALL_STATE(44)] = 759,
  [SMALL_STATE(45)] = 770,
  [SMALL_STATE(46)] = 781,
  [SMALL_STATE(47)] = 792,
  [SMALL_STATE(48)] = 809,
  [SMALL_STATE(49)] = 820,
  [SMALL_STATE(50)] = 831,
  [SMALL_STATE(51)] = 842,
  [SMALL_STATE(52)] = 853,
  [SMALL_STATE(53)] = 868,
  [SMALL_STATE(54)] = 885,
  [SMALL_STATE(55)] = 896,
  [SMALL_STATE(56)] = 907,
  [SMALL_STATE(57)] = 918,
  [SMALL_STATE(58)] = 934,
  [SMALL_STATE(59)] = 950,
  [SMALL_STATE(60)] = 966,
  [SMALL_STATE(61)] = 982,
  [SMALL_STATE(62)] = 998,
  [SMALL_STATE(63)] = 1014,
  [SMALL_STATE(64)] = 1030,
  [SMALL_STATE(65)] = 1046,
  [SMALL_STATE(66)] = 1056,
  [SMALL_STATE(67)] = 1072,
  [SMALL_STATE(68)] = 1088,
  [SMALL_STATE(69)] = 1098,
  [SMALL_STATE(70)] = 1111,
  [SMALL_STATE(71)] = 1120,
  [SMALL_STATE(72)] = 1133,
  [SMALL_STATE(73)] = 1146,
  [SMALL_STATE(74)] = 1159,
  [SMALL_STATE(75)] = 1168,
  [SMALL_STATE(76)] = 1181,
  [SMALL_STATE(77)] = 1190,
  [SMALL_STATE(78)] = 1203,
  [SMALL_STATE(79)] = 1212,
  [SMALL_STATE(80)] = 1225,
  [SMALL_STATE(81)] = 1234,
  [SMALL_STATE(82)] = 1243,
  [SMALL_STATE(83)] = 1256,
  [SMALL_STATE(84)] = 1269,
  [SMALL_STATE(85)] = 1278,
  [SMALL_STATE(86)] = 1291,
  [SMALL_STATE(87)] = 1300,
  [SMALL_STATE(88)] = 1309,
  [SMALL_STATE(89)] = 1322,
  [SMALL_STATE(90)] = 1335,
  [SMALL_STATE(91)] = 1348,
  [SMALL_STATE(92)] = 1361,
  [SMALL_STATE(93)] = 1369,
  [SMALL_STATE(94)] = 1379,
  [SMALL_STATE(95)] = 1387,
  [SMALL_STATE(96)] = 1397,
  [SMALL_STATE(97)] = 1405,
  [SMALL_STATE(98)] = 1415,
  [SMALL_STATE(99)] = 1425,
  [SMALL_STATE(100)] = 1435,
  [SMALL_STATE(101)] = 1443,
  [SMALL_STATE(102)] = 1451,
  [SMALL_STATE(103)] = 1461,
  [SMALL_STATE(104)] = 1467,
  [SMALL_STATE(105)] = 1475,
  [SMALL_STATE(106)] = 1485,
  [SMALL_STATE(107)] = 1495,
  [SMALL_STATE(108)] = 1502,
  [SMALL_STATE(109)] = 1507,
  [SMALL_STATE(110)] = 1514,
  [SMALL_STATE(111)] = 1521,
  [SMALL_STATE(112)] = 1528,
  [SMALL_STATE(113)] = 1535,
  [SMALL_STATE(114)] = 1539,
  [SMALL_STATE(115)] = 1543,
  [SMALL_STATE(116)] = 1547,
  [SMALL_STATE(117)] = 1551,
  [SMALL_STATE(118)] = 1555,
  [SMALL_STATE(119)] = 1559,
  [SMALL_STATE(120)] = 1563,
  [SMALL_STATE(121)] = 1567,
  [SMALL_STATE(122)] = 1571,
  [SMALL_STATE(123)] = 1575,
  [SMALL_STATE(124)] = 1579,
  [SMALL_STATE(125)] = 1583,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(83),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(7),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(7),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 2),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(103),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(110),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(119),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 5),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 5),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_content, 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_content, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 5, .production_id = 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 5, .production_id = 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_content, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_content, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(34),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 7),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 6),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 6),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2), SHIFT_REPEAT(117),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(85),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(122),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(65),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_name, 1),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, .production_id = 1),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, .production_id = 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(89),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(122),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 3),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [364] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
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
