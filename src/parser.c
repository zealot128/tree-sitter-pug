#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 107
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 1
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_PIPE = 1,
  anon_sym_COLON = 2,
  anon_sym_ = 3,
  anon_sym_LPAREN = 4,
  anon_sym_COMMA = 5,
  anon_sym_RPAREN = 6,
  anon_sym_DOT = 7,
  aux_sym_attribute_token1 = 8,
  anon_sym_EQ = 9,
  anon_sym_SLASH_SLASH = 10,
  sym_tag_name = 11,
  sym_class = 12,
  sym_id = 13,
  anon_sym_SQUOTE = 14,
  aux_sym_quoted_attribute_value_token1 = 15,
  anon_sym_DQUOTE = 16,
  aux_sym_quoted_attribute_value_token2 = 17,
  sym_javascript = 18,
  sym_content = 19,
  anon_sym_LBRACE_LBRACE = 20,
  anon_sym_RBRACE_RBRACE = 21,
  sym__comment_content = 22,
  sym__newline = 23,
  sym__indent = 24,
  sym__dedent = 25,
  sym_source_file = 26,
  sym_pipe_content = 27,
  sym_tag = 28,
  sym_attributes = 29,
  sym_attribute = 30,
  sym_children = 31,
  sym__children_choice = 32,
  sym_comment = 33,
  sym_attribute_name = 34,
  sym_quoted_attribute_value = 35,
  aux_sym__content_or_javascript = 36,
  aux_sym_source_file_repeat1 = 37,
  aux_sym_tag_repeat1 = 38,
  aux_sym_attributes_repeat1 = 39,
  aux_sym_attribute_repeat1 = 40,
  aux_sym_children_repeat1 = 41,
  aux_sym_comment_repeat1 = 42,
  alias_sym_attribute_modifier = 43,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PIPE] = "|",
  [anon_sym_COLON] = ":",
  [anon_sym_] = " ",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT] = ".",
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
  [sym_pipe_content] = "pipe_content",
  [sym_tag] = "tag",
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
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
  [aux_sym_attribute_repeat1] = "attribute_repeat1",
  [aux_sym_children_repeat1] = "children_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [alias_sym_attribute_modifier] = "attribute_modifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_] = anon_sym_,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOT] = anon_sym_DOT,
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
  [sym_pipe_content] = sym_pipe_content,
  [sym_tag] = sym_tag,
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
  [anon_sym_DOT] = {
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
  [sym_pipe_content] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
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
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(22);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '|') ADVANCE(17);
      if (lookahead == '}') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(37);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(22);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == ')') ADVANCE(22);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(42);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 8:
      if (lookahead == ')') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(26);
      END_STATE();
    case 10:
      if (lookahead == '{') ADVANCE(40);
      END_STATE();
    case 11:
      if (lookahead == '}') ADVANCE(41);
      END_STATE();
    case 12:
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 14:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '|') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_javascript);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_javascript);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(42);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 15},
  [2] = {.lex_state = 15, .external_lex_state = 2},
  [3] = {.lex_state = 15, .external_lex_state = 2},
  [4] = {.lex_state = 15, .external_lex_state = 2},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 3, .external_lex_state = 3},
  [7] = {.lex_state = 3, .external_lex_state = 3},
  [8] = {.lex_state = 3, .external_lex_state = 3},
  [9] = {.lex_state = 3, .external_lex_state = 3},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 15, .external_lex_state = 4},
  [14] = {.lex_state = 15, .external_lex_state = 5},
  [15] = {.lex_state = 15, .external_lex_state = 5},
  [16] = {.lex_state = 15, .external_lex_state = 4},
  [17] = {.lex_state = 15, .external_lex_state = 5},
  [18] = {.lex_state = 15, .external_lex_state = 4},
  [19] = {.lex_state = 15, .external_lex_state = 5},
  [20] = {.lex_state = 15, .external_lex_state = 5},
  [21] = {.lex_state = 3, .external_lex_state = 3},
  [22] = {.lex_state = 15, .external_lex_state = 4},
  [23] = {.lex_state = 15, .external_lex_state = 4},
  [24] = {.lex_state = 15, .external_lex_state = 4},
  [25] = {.lex_state = 15, .external_lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 15},
  [30] = {.lex_state = 15, .external_lex_state = 2},
  [31] = {.lex_state = 15, .external_lex_state = 2},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 15, .external_lex_state = 2},
  [34] = {.lex_state = 15},
  [35] = {.lex_state = 15, .external_lex_state = 2},
  [36] = {.lex_state = 15, .external_lex_state = 2},
  [37] = {.lex_state = 15, .external_lex_state = 2},
  [38] = {.lex_state = 15},
  [39] = {.lex_state = 15, .external_lex_state = 2},
  [40] = {.lex_state = 15},
  [41] = {.lex_state = 15, .external_lex_state = 2},
  [42] = {.lex_state = 15},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 15},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 15},
  [48] = {.lex_state = 15},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 15},
  [51] = {.lex_state = 15},
  [52] = {.lex_state = 1, .external_lex_state = 3},
  [53] = {.lex_state = 1, .external_lex_state = 3},
  [54] = {.lex_state = 1, .external_lex_state = 3},
  [55] = {.lex_state = 15},
  [56] = {.lex_state = 1, .external_lex_state = 3},
  [57] = {.lex_state = 15},
  [58] = {.lex_state = 1, .external_lex_state = 3},
  [59] = {.lex_state = 1, .external_lex_state = 3},
  [60] = {.lex_state = 15},
  [61] = {.lex_state = 15},
  [62] = {.lex_state = 15},
  [63] = {.lex_state = 1, .external_lex_state = 3},
  [64] = {.lex_state = 1, .external_lex_state = 3},
  [65] = {.lex_state = 1, .external_lex_state = 3},
  [66] = {.lex_state = 3, .external_lex_state = 3},
  [67] = {.lex_state = 5, .external_lex_state = 2},
  [68] = {.lex_state = 3, .external_lex_state = 3},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 3, .external_lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 5, .external_lex_state = 2},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 5, .external_lex_state = 2},
  [81] = {.lex_state = 3, .external_lex_state = 3},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 1, .external_lex_state = 3},
  [84] = {.lex_state = 5, .external_lex_state = 2},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 5, .external_lex_state = 2},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3, .external_lex_state = 3},
  [89] = {.lex_state = 3, .external_lex_state = 3},
  [90] = {.lex_state = 3, .external_lex_state = 3},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 5, .external_lex_state = 3},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 5, .external_lex_state = 2},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 0, .external_lex_state = 3},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 0, .external_lex_state = 3},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 8},
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
  },
  [5] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [sym_tag_name] = ACTIONS(1),
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
    [sym_source_file] = STATE(105),
    [sym_tag] = STATE(10),
    [sym_comment] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [sym_tag_name] = ACTIONS(7),
    [sym_class] = ACTIONS(7),
    [sym_id] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(13), 1,
      sym__dedent,
    ACTIONS(11), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(3), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [18] = 4,
    ACTIONS(15), 1,
      anon_sym_PIPE,
    ACTIONS(21), 1,
      sym__dedent,
    ACTIONS(18), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(3), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [36] = 4,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(23), 1,
      sym__dedent,
    ACTIONS(11), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(3), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [54] = 4,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(30), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(5), 3,
      sym_tag,
      sym_comment,
      aux_sym_source_file_repeat1,
  [71] = 7,
    ACTIONS(33), 1,
      anon_sym_COLON,
    ACTIONS(35), 1,
      anon_sym_,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym__newline,
    STATE(21), 1,
      aux_sym_tag_repeat1,
    STATE(90), 1,
      sym_attributes,
    ACTIONS(39), 2,
      sym_class,
      sym_id,
  [94] = 7,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_COLON,
    ACTIONS(45), 1,
      anon_sym_,
    ACTIONS(47), 1,
      sym__newline,
    STATE(21), 1,
      aux_sym_tag_repeat1,
    STATE(81), 1,
      sym_attributes,
    ACTIONS(39), 2,
      sym_class,
      sym_id,
  [117] = 7,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_COLON,
    ACTIONS(51), 1,
      anon_sym_,
    ACTIONS(55), 1,
      sym__newline,
    STATE(6), 1,
      aux_sym_tag_repeat1,
    STATE(88), 1,
      sym_attributes,
    ACTIONS(53), 2,
      sym_class,
      sym_id,
  [140] = 7,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_COLON,
    ACTIONS(59), 1,
      anon_sym_,
    ACTIONS(63), 1,
      sym__newline,
    STATE(7), 1,
      aux_sym_tag_repeat1,
    STATE(89), 1,
      sym_attributes,
    ACTIONS(61), 2,
      sym_class,
      sym_id,
  [163] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(5), 3,
      sym_tag,
      sym_comment,
      aux_sym_source_file_repeat1,
  [180] = 3,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(2), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [195] = 3,
    ACTIONS(9), 1,
      anon_sym_PIPE,
    ACTIONS(11), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(4), 4,
      sym_pipe_content,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [210] = 3,
    ACTIONS(69), 1,
      sym__indent,
    STATE(29), 1,
      sym_children,
    ACTIONS(67), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
  [224] = 3,
    ACTIONS(73), 1,
      sym__indent,
    STATE(35), 1,
      sym_children,
    ACTIONS(71), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [238] = 3,
    ACTIONS(73), 1,
      sym__indent,
    STATE(37), 1,
      sym_children,
    ACTIONS(75), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [252] = 3,
    ACTIONS(69), 1,
      sym__indent,
    STATE(38), 1,
      sym_children,
    ACTIONS(77), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
  [266] = 3,
    ACTIONS(73), 1,
      sym__indent,
    STATE(39), 1,
      sym_children,
    ACTIONS(77), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [280] = 3,
    ACTIONS(69), 1,
      sym__indent,
    STATE(40), 1,
      sym_children,
    ACTIONS(79), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
  [294] = 3,
    ACTIONS(73), 1,
      sym__indent,
    STATE(33), 1,
      sym_children,
    ACTIONS(67), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [308] = 3,
    ACTIONS(73), 1,
      sym__indent,
    STATE(31), 1,
      sym_children,
    ACTIONS(79), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [322] = 4,
    STATE(21), 1,
      aux_sym_tag_repeat1,
    ACTIONS(81), 2,
      anon_sym_COLON,
      anon_sym_LPAREN,
    ACTIONS(83), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(85), 2,
      sym_class,
      sym_id,
  [338] = 3,
    ACTIONS(69), 1,
      sym__indent,
    STATE(47), 1,
      sym_children,
    ACTIONS(75), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
  [352] = 3,
    ACTIONS(69), 1,
      sym__indent,
    STATE(48), 1,
      sym_children,
    ACTIONS(71), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
  [366] = 2,
    ACTIONS(90), 1,
      sym__indent,
    ACTIONS(88), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
  [377] = 2,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(92), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
  [388] = 4,
    ACTIONS(96), 1,
      anon_sym_,
    ACTIONS(100), 1,
      anon_sym_DOT,
    STATE(26), 1,
      aux_sym_attribute_repeat1,
    ACTIONS(98), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [403] = 5,
    ACTIONS(103), 1,
      anon_sym_,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      anon_sym_EQ,
    STATE(28), 1,
      aux_sym_attribute_repeat1,
    ACTIONS(105), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [420] = 5,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      anon_sym_,
    ACTIONS(115), 1,
      anon_sym_EQ,
    STATE(26), 1,
      aux_sym_attribute_repeat1,
    ACTIONS(113), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [437] = 1,
    ACTIONS(79), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
  [445] = 1,
    ACTIONS(117), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [453] = 1,
    ACTIONS(119), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [461] = 5,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    ACTIONS(123), 1,
      aux_sym_attribute_token1,
    STATE(27), 1,
      sym_attribute_name,
    STATE(49), 1,
      aux_sym_attributes_repeat1,
    STATE(87), 1,
      sym_attribute,
  [477] = 1,
    ACTIONS(79), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [485] = 1,
    ACTIONS(125), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
  [493] = 1,
    ACTIONS(67), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [501] = 1,
    ACTIONS(127), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [509] = 1,
    ACTIONS(71), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [517] = 1,
    ACTIONS(75), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
  [525] = 1,
    ACTIONS(75), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [533] = 1,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
  [541] = 1,
    ACTIONS(129), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [549] = 1,
    ACTIONS(131), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
  [557] = 2,
    ACTIONS(133), 1,
      anon_sym_,
    ACTIONS(135), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_EQ,
  [567] = 2,
    ACTIONS(137), 1,
      anon_sym_,
    ACTIONS(139), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_EQ,
  [577] = 1,
    ACTIONS(141), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
  [585] = 5,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    ACTIONS(145), 1,
      aux_sym_attribute_token1,
    STATE(27), 1,
      sym_attribute_name,
    STATE(46), 1,
      aux_sym_attributes_repeat1,
    STATE(98), 1,
      sym_attribute,
  [601] = 1,
    ACTIONS(71), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
  [609] = 1,
    ACTIONS(67), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
  [617] = 5,
    ACTIONS(123), 1,
      aux_sym_attribute_token1,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      sym_attribute_name,
    STATE(46), 1,
      aux_sym_attributes_repeat1,
    STATE(77), 1,
      sym_attribute,
  [633] = 1,
    ACTIONS(127), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
  [641] = 2,
    STATE(48), 1,
      sym_tag,
    ACTIONS(7), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [650] = 4,
    ACTIONS(150), 1,
      sym_content,
    ACTIONS(152), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(154), 1,
      sym__newline,
    STATE(64), 1,
      aux_sym__content_or_javascript,
  [663] = 4,
    ACTIONS(150), 1,
      sym_content,
    ACTIONS(152), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(156), 1,
      sym__newline,
    STATE(64), 1,
      aux_sym__content_or_javascript,
  [676] = 4,
    ACTIONS(150), 1,
      sym_content,
    ACTIONS(152), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(158), 1,
      sym__newline,
    STATE(64), 1,
      aux_sym__content_or_javascript,
  [689] = 2,
    STATE(35), 1,
      sym_tag,
    ACTIONS(11), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [698] = 4,
    ACTIONS(150), 1,
      sym_content,
    ACTIONS(152), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(160), 1,
      sym__newline,
    STATE(64), 1,
      aux_sym__content_or_javascript,
  [711] = 2,
    STATE(37), 1,
      sym_tag,
    ACTIONS(11), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [720] = 4,
    ACTIONS(150), 1,
      sym_content,
    ACTIONS(152), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(162), 1,
      sym__newline,
    STATE(64), 1,
      aux_sym__content_or_javascript,
  [733] = 4,
    ACTIONS(150), 1,
      sym_content,
    ACTIONS(152), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(164), 1,
      sym__newline,
    STATE(64), 1,
      aux_sym__content_or_javascript,
  [746] = 2,
    STATE(38), 1,
      sym_tag,
    ACTIONS(7), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [755] = 2,
    STATE(47), 1,
      sym_tag,
    ACTIONS(7), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [764] = 2,
    STATE(39), 1,
      sym_tag,
    ACTIONS(11), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [773] = 4,
    ACTIONS(152), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(166), 1,
      sym_content,
    ACTIONS(168), 1,
      sym__newline,
    STATE(58), 1,
      aux_sym__content_or_javascript,
  [786] = 4,
    ACTIONS(170), 1,
      sym_content,
    ACTIONS(173), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(176), 1,
      sym__newline,
    STATE(64), 1,
      aux_sym__content_or_javascript,
  [799] = 4,
    ACTIONS(150), 1,
      sym_content,
    ACTIONS(152), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(178), 1,
      sym__newline,
    STATE(64), 1,
      aux_sym__content_or_javascript,
  [812] = 2,
    ACTIONS(180), 1,
      anon_sym_COLON,
    ACTIONS(182), 2,
      sym__newline,
      anon_sym_,
  [820] = 3,
    ACTIONS(184), 1,
      sym__comment_content,
    ACTIONS(186), 1,
      sym__dedent,
    STATE(75), 1,
      aux_sym_comment_repeat1,
  [830] = 2,
    ACTIONS(188), 1,
      anon_sym_COLON,
    ACTIONS(190), 2,
      sym__newline,
      anon_sym_,
  [838] = 3,
    ACTIONS(152), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(192), 1,
      sym_content,
    STATE(54), 1,
      aux_sym__content_or_javascript,
  [848] = 3,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(196), 1,
      anon_sym_DQUOTE,
    STATE(85), 1,
      sym_quoted_attribute_value,
  [858] = 3,
    ACTIONS(152), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(198), 1,
      sym_content,
    STATE(56), 1,
      aux_sym__content_or_javascript,
  [868] = 2,
    ACTIONS(200), 1,
      anon_sym_COLON,
    ACTIONS(202), 2,
      sym__newline,
      anon_sym_,
  [876] = 2,
    ACTIONS(204), 1,
      anon_sym_,
    ACTIONS(206), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [884] = 3,
    ACTIONS(152), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(208), 1,
      sym_content,
    STATE(59), 1,
      aux_sym__content_or_javascript,
  [894] = 3,
    ACTIONS(210), 1,
      sym__comment_content,
    ACTIONS(213), 1,
      sym__dedent,
    STATE(75), 1,
      aux_sym_comment_repeat1,
  [904] = 2,
    ACTIONS(215), 1,
      anon_sym_,
    ACTIONS(217), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [912] = 3,
    ACTIONS(219), 1,
      anon_sym_,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
  [922] = 3,
    ACTIONS(152), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(225), 1,
      sym_content,
    STATE(52), 1,
      aux_sym__content_or_javascript,
  [932] = 2,
    ACTIONS(227), 1,
      anon_sym_,
    ACTIONS(229), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [940] = 3,
    ACTIONS(184), 1,
      sym__comment_content,
    ACTIONS(231), 1,
      sym__dedent,
    STATE(75), 1,
      aux_sym_comment_repeat1,
  [950] = 3,
    ACTIONS(164), 1,
      sym__newline,
    ACTIONS(233), 1,
      anon_sym_COLON,
    ACTIONS(235), 1,
      anon_sym_,
  [960] = 3,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(196), 1,
      anon_sym_DQUOTE,
    STATE(76), 1,
      sym_quoted_attribute_value,
  [970] = 2,
    ACTIONS(239), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(237), 2,
      sym__newline,
      sym_content,
  [978] = 3,
    ACTIONS(184), 1,
      sym__comment_content,
    ACTIONS(241), 1,
      sym__dedent,
    STATE(67), 1,
      aux_sym_comment_repeat1,
  [988] = 2,
    ACTIONS(243), 1,
      anon_sym_,
    ACTIONS(245), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [996] = 3,
    ACTIONS(184), 1,
      sym__comment_content,
    ACTIONS(186), 1,
      sym__dedent,
    STATE(80), 1,
      aux_sym_comment_repeat1,
  [1006] = 3,
    ACTIONS(219), 1,
      anon_sym_,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
  [1016] = 3,
    ACTIONS(33), 1,
      anon_sym_COLON,
    ACTIONS(35), 1,
      anon_sym_,
    ACTIONS(41), 1,
      sym__newline,
  [1026] = 3,
    ACTIONS(43), 1,
      anon_sym_COLON,
    ACTIONS(45), 1,
      anon_sym_,
    ACTIONS(47), 1,
      sym__newline,
  [1036] = 3,
    ACTIONS(178), 1,
      sym__newline,
    ACTIONS(249), 1,
      anon_sym_COLON,
    ACTIONS(251), 1,
      anon_sym_,
  [1046] = 3,
    ACTIONS(152), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(253), 1,
      sym_content,
    STATE(53), 1,
      aux_sym__content_or_javascript,
  [1056] = 3,
    ACTIONS(152), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(255), 1,
      sym_content,
    STATE(65), 1,
      aux_sym__content_or_javascript,
  [1066] = 2,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      aux_sym_quoted_attribute_value_token2,
  [1073] = 2,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
    ACTIONS(261), 1,
      aux_sym_quoted_attribute_value_token1,
  [1080] = 2,
    ACTIONS(263), 1,
      sym__comment_content,
    ACTIONS(265), 1,
      sym__newline,
  [1087] = 1,
    ACTIONS(143), 2,
      anon_sym_RPAREN,
      aux_sym_attribute_token1,
  [1092] = 1,
    ACTIONS(213), 2,
      sym__dedent,
      sym__comment_content,
  [1097] = 2,
    ACTIONS(219), 1,
      anon_sym_,
    ACTIONS(221), 1,
      anon_sym_COMMA,
  [1104] = 1,
    ACTIONS(267), 1,
      sym__newline,
  [1108] = 1,
    ACTIONS(269), 1,
      anon_sym_RBRACE_RBRACE,
  [1112] = 1,
    ACTIONS(271), 1,
      sym_javascript,
  [1116] = 1,
    ACTIONS(273), 1,
      sym__newline,
  [1120] = 1,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
  [1124] = 1,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
  [1128] = 1,
    ACTIONS(277), 1,
      ts_builtin_sym_end,
  [1132] = 1,
    ACTIONS(279), 1,
      aux_sym_attribute_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 54,
  [SMALL_STATE(6)] = 71,
  [SMALL_STATE(7)] = 94,
  [SMALL_STATE(8)] = 117,
  [SMALL_STATE(9)] = 140,
  [SMALL_STATE(10)] = 163,
  [SMALL_STATE(11)] = 180,
  [SMALL_STATE(12)] = 195,
  [SMALL_STATE(13)] = 210,
  [SMALL_STATE(14)] = 224,
  [SMALL_STATE(15)] = 238,
  [SMALL_STATE(16)] = 252,
  [SMALL_STATE(17)] = 266,
  [SMALL_STATE(18)] = 280,
  [SMALL_STATE(19)] = 294,
  [SMALL_STATE(20)] = 308,
  [SMALL_STATE(21)] = 322,
  [SMALL_STATE(22)] = 338,
  [SMALL_STATE(23)] = 352,
  [SMALL_STATE(24)] = 366,
  [SMALL_STATE(25)] = 377,
  [SMALL_STATE(26)] = 388,
  [SMALL_STATE(27)] = 403,
  [SMALL_STATE(28)] = 420,
  [SMALL_STATE(29)] = 437,
  [SMALL_STATE(30)] = 445,
  [SMALL_STATE(31)] = 453,
  [SMALL_STATE(32)] = 461,
  [SMALL_STATE(33)] = 477,
  [SMALL_STATE(34)] = 485,
  [SMALL_STATE(35)] = 493,
  [SMALL_STATE(36)] = 501,
  [SMALL_STATE(37)] = 509,
  [SMALL_STATE(38)] = 517,
  [SMALL_STATE(39)] = 525,
  [SMALL_STATE(40)] = 533,
  [SMALL_STATE(41)] = 541,
  [SMALL_STATE(42)] = 549,
  [SMALL_STATE(43)] = 557,
  [SMALL_STATE(44)] = 567,
  [SMALL_STATE(45)] = 577,
  [SMALL_STATE(46)] = 585,
  [SMALL_STATE(47)] = 601,
  [SMALL_STATE(48)] = 609,
  [SMALL_STATE(49)] = 617,
  [SMALL_STATE(50)] = 633,
  [SMALL_STATE(51)] = 641,
  [SMALL_STATE(52)] = 650,
  [SMALL_STATE(53)] = 663,
  [SMALL_STATE(54)] = 676,
  [SMALL_STATE(55)] = 689,
  [SMALL_STATE(56)] = 698,
  [SMALL_STATE(57)] = 711,
  [SMALL_STATE(58)] = 720,
  [SMALL_STATE(59)] = 733,
  [SMALL_STATE(60)] = 746,
  [SMALL_STATE(61)] = 755,
  [SMALL_STATE(62)] = 764,
  [SMALL_STATE(63)] = 773,
  [SMALL_STATE(64)] = 786,
  [SMALL_STATE(65)] = 799,
  [SMALL_STATE(66)] = 812,
  [SMALL_STATE(67)] = 820,
  [SMALL_STATE(68)] = 830,
  [SMALL_STATE(69)] = 838,
  [SMALL_STATE(70)] = 848,
  [SMALL_STATE(71)] = 858,
  [SMALL_STATE(72)] = 868,
  [SMALL_STATE(73)] = 876,
  [SMALL_STATE(74)] = 884,
  [SMALL_STATE(75)] = 894,
  [SMALL_STATE(76)] = 904,
  [SMALL_STATE(77)] = 912,
  [SMALL_STATE(78)] = 922,
  [SMALL_STATE(79)] = 932,
  [SMALL_STATE(80)] = 940,
  [SMALL_STATE(81)] = 950,
  [SMALL_STATE(82)] = 960,
  [SMALL_STATE(83)] = 970,
  [SMALL_STATE(84)] = 978,
  [SMALL_STATE(85)] = 988,
  [SMALL_STATE(86)] = 996,
  [SMALL_STATE(87)] = 1006,
  [SMALL_STATE(88)] = 1016,
  [SMALL_STATE(89)] = 1026,
  [SMALL_STATE(90)] = 1036,
  [SMALL_STATE(91)] = 1046,
  [SMALL_STATE(92)] = 1056,
  [SMALL_STATE(93)] = 1066,
  [SMALL_STATE(94)] = 1073,
  [SMALL_STATE(95)] = 1080,
  [SMALL_STATE(96)] = 1087,
  [SMALL_STATE(97)] = 1092,
  [SMALL_STATE(98)] = 1097,
  [SMALL_STATE(99)] = 1104,
  [SMALL_STATE(100)] = 1108,
  [SMALL_STATE(101)] = 1112,
  [SMALL_STATE(102)] = 1116,
  [SMALL_STATE(103)] = 1120,
  [SMALL_STATE(104)] = 1124,
  [SMALL_STATE(105)] = 1128,
  [SMALL_STATE(106)] = 1132,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(63),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(95),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(21),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2), SHIFT_REPEAT(106),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_content, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_content, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 6),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_name, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2, .production_id = 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attribute_repeat1, 2, .production_id = 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 5),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(43),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(64),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(101),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(99),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 3),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [277] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
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
