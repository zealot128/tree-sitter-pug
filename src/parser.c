#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 86
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_ = 1,
  anon_sym_LPAREN = 2,
  anon_sym_COMMA = 3,
  anon_sym_RPAREN = 4,
  anon_sym_EQ = 5,
  anon_sym_SLASH_SLASH = 6,
  sym_tag_name = 7,
  sym_class = 8,
  sym_id = 9,
  sym_attribute_name = 10,
  anon_sym_SQUOTE = 11,
  aux_sym_quoted_attribute_value_token1 = 12,
  anon_sym_DQUOTE = 13,
  aux_sym_quoted_attribute_value_token2 = 14,
  sym_content = 15,
  sym__comment_content = 16,
  sym__newline = 17,
  sym__indent = 18,
  sym__dedent = 19,
  sym_source_file = 20,
  sym_tag = 21,
  sym_attributes = 22,
  sym_attribute = 23,
  sym_children = 24,
  sym_comment = 25,
  sym_quoted_attribute_value = 26,
  aux_sym_source_file_repeat1 = 27,
  aux_sym_tag_repeat1 = 28,
  aux_sym_attributes_repeat1 = 29,
  aux_sym_children_repeat1 = 30,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_] = " ",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [anon_sym_SLASH_SLASH] = "//",
  [sym_tag_name] = "tag_name",
  [sym_class] = "class",
  [sym_id] = "id",
  [sym_attribute_name] = "attribute_name",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_attribute_value_token1] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_attribute_value_token2] = "attribute_value",
  [sym_content] = "content",
  [sym__comment_content] = "_comment_content",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_source_file] = "source_file",
  [sym_tag] = "tag",
  [sym_attributes] = "attributes",
  [sym_attribute] = "attribute",
  [sym_children] = "children",
  [sym_comment] = "comment",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_tag_repeat1] = "tag_repeat1",
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
  [aux_sym_children_repeat1] = "children_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_] = anon_sym_,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [sym_tag_name] = sym_tag_name,
  [sym_class] = sym_class,
  [sym_id] = sym_id,
  [sym_attribute_name] = sym_attribute_name,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_attribute_value_token1] = aux_sym_quoted_attribute_value_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_attribute_value_token2] = aux_sym_quoted_attribute_value_token1,
  [sym_content] = sym_content,
  [sym__comment_content] = sym__comment_content,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_source_file] = sym_source_file,
  [sym_tag] = sym_tag,
  [sym_attributes] = sym_attributes,
  [sym_attribute] = sym_attribute,
  [sym_children] = sym_children,
  [sym_comment] = sym_comment,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_tag_repeat1] = aux_sym_tag_repeat1,
  [aux_sym_attributes_repeat1] = aux_sym_attributes_repeat1,
  [aux_sym_children_repeat1] = aux_sym_children_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [sym_attribute_name] = {
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
  [sym_content] = {
    .visible = true,
    .named = true,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_attribute_value] = {
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
  [aux_sym_attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_children_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(33);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 10:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '@') ADVANCE(24);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '@') ADVANCE(24);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(33);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 2, .external_lex_state = 2},
  [3] = {.lex_state = 2, .external_lex_state = 2},
  [4] = {.lex_state = 2, .external_lex_state = 2},
  [5] = {.lex_state = 2, .external_lex_state = 2},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 2, .external_lex_state = 2},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11, .external_lex_state = 3},
  [10] = {.lex_state = 11, .external_lex_state = 3},
  [11] = {.lex_state = 11, .external_lex_state = 3},
  [12] = {.lex_state = 11, .external_lex_state = 3},
  [13] = {.lex_state = 11, .external_lex_state = 3},
  [14] = {.lex_state = 11, .external_lex_state = 4},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 11, .external_lex_state = 5},
  [17] = {.lex_state = 11, .external_lex_state = 5},
  [18] = {.lex_state = 11, .external_lex_state = 3},
  [19] = {.lex_state = 11, .external_lex_state = 5},
  [20] = {.lex_state = 11, .external_lex_state = 5},
  [21] = {.lex_state = 11, .external_lex_state = 3},
  [22] = {.lex_state = 11, .external_lex_state = 4},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 11, .external_lex_state = 4},
  [27] = {.lex_state = 11, .external_lex_state = 4},
  [28] = {.lex_state = 11, .external_lex_state = 4},
  [29] = {.lex_state = 11, .external_lex_state = 5},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 11, .external_lex_state = 5},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 2, .external_lex_state = 2},
  [49] = {.lex_state = 2, .external_lex_state = 2},
  [50] = {.lex_state = 3, .external_lex_state = 2},
  [51] = {.lex_state = 2, .external_lex_state = 2},
  [52] = {.lex_state = 2, .external_lex_state = 2},
  [53] = {.lex_state = 2, .external_lex_state = 2},
  [54] = {.lex_state = 11, .external_lex_state = 5},
  [55] = {.lex_state = 11, .external_lex_state = 5},
  [56] = {.lex_state = 2, .external_lex_state = 2},
  [57] = {.lex_state = 11, .external_lex_state = 5},
  [58] = {.lex_state = 11, .external_lex_state = 5},
  [59] = {.lex_state = 11, .external_lex_state = 5},
  [60] = {.lex_state = 2, .external_lex_state = 2},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 11, .external_lex_state = 5},
  [64] = {.lex_state = 0, .external_lex_state = 2},
  [65] = {.lex_state = 0, .external_lex_state = 5},
  [66] = {.lex_state = 0, .external_lex_state = 2},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 0, .external_lex_state = 2},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0, .external_lex_state = 5},
  [75] = {.lex_state = 0, .external_lex_state = 2},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0, .external_lex_state = 2},
  [78] = {.lex_state = 0, .external_lex_state = 2},
  [79] = {.lex_state = 0, .external_lex_state = 2},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
};

enum {
  ts_external_token__newline = 0,
  ts_external_token__indent = 1,
  ts_external_token__dedent = 2,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
};

static bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
  [2] = {
    [ts_external_token__newline] = true,
  },
  [3] = {
    [ts_external_token__indent] = true,
  },
  [4] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
  [5] = {
    [ts_external_token__dedent] = true,
  },
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [sym_tag_name] = ACTIONS(1),
    [sym_class] = ACTIONS(1),
    [sym_id] = ACTIONS(1),
    [sym_attribute_name] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(76),
    [sym_tag] = STATE(6),
    [sym_comment] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [sym_tag_name] = ACTIONS(7),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(9), 1,
      anon_sym_,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym__newline,
    STATE(7), 1,
      aux_sym_tag_repeat1,
    STATE(51), 1,
      sym_attributes,
    ACTIONS(13), 2,
      sym_class,
      sym_id,
  [20] = 6,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_,
    ACTIONS(21), 1,
      sym__newline,
    STATE(5), 1,
      aux_sym_tag_repeat1,
    STATE(49), 1,
      sym_attributes,
    ACTIONS(19), 2,
      sym_class,
      sym_id,
  [40] = 6,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_,
    ACTIONS(27), 1,
      sym__newline,
    STATE(2), 1,
      aux_sym_tag_repeat1,
    STATE(52), 1,
      sym_attributes,
    ACTIONS(25), 2,
      sym_class,
      sym_id,
  [60] = 6,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_,
    ACTIONS(31), 1,
      sym__newline,
    STATE(7), 1,
      aux_sym_tag_repeat1,
    STATE(56), 1,
      sym_attributes,
    ACTIONS(13), 2,
      sym_class,
      sym_id,
  [80] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      sym_tag_name,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(8), 3,
      sym_tag,
      sym_comment,
      aux_sym_source_file_repeat1,
  [95] = 4,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      aux_sym_tag_repeat1,
    ACTIONS(35), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(39), 2,
      sym_class,
      sym_id,
  [110] = 4,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(47), 1,
      sym_tag_name,
    STATE(8), 3,
      sym_tag,
      sym_comment,
      aux_sym_source_file_repeat1,
  [125] = 3,
    ACTIONS(52), 1,
      sym__indent,
    STATE(37), 1,
      sym_children,
    ACTIONS(50), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [137] = 3,
    ACTIONS(52), 1,
      sym__indent,
    STATE(31), 1,
      sym_children,
    ACTIONS(54), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [149] = 3,
    ACTIONS(52), 1,
      sym__indent,
    STATE(43), 1,
      sym_children,
    ACTIONS(56), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [161] = 3,
    ACTIONS(52), 1,
      sym__indent,
    STATE(38), 1,
      sym_children,
    ACTIONS(58), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [173] = 3,
    ACTIONS(52), 1,
      sym__indent,
    STATE(44), 1,
      sym_children,
    ACTIONS(60), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [185] = 3,
    ACTIONS(62), 1,
      sym__indent,
    STATE(59), 1,
      sym_children,
    ACTIONS(50), 2,
      sym__dedent,
      sym_tag_name,
  [196] = 4,
    ACTIONS(64), 1,
      anon_sym_RPAREN,
    ACTIONS(66), 1,
      sym_attribute_name,
    STATE(15), 1,
      aux_sym_attributes_repeat1,
    STATE(45), 1,
      sym_attribute,
  [209] = 3,
    ACTIONS(69), 1,
      sym_tag_name,
    ACTIONS(71), 1,
      sym__dedent,
    STATE(20), 2,
      sym_tag,
      aux_sym_children_repeat1,
  [220] = 3,
    ACTIONS(69), 1,
      sym_tag_name,
    ACTIONS(73), 1,
      sym__dedent,
    STATE(16), 2,
      sym_tag,
      aux_sym_children_repeat1,
  [231] = 2,
    ACTIONS(77), 1,
      sym__indent,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [240] = 3,
    ACTIONS(69), 1,
      sym_tag_name,
    ACTIONS(79), 1,
      sym__dedent,
    STATE(29), 2,
      sym_tag,
      aux_sym_children_repeat1,
  [251] = 3,
    ACTIONS(81), 1,
      sym_tag_name,
    ACTIONS(84), 1,
      sym__dedent,
    STATE(20), 2,
      sym_tag,
      aux_sym_children_repeat1,
  [262] = 2,
    ACTIONS(88), 1,
      sym__indent,
    ACTIONS(86), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [271] = 3,
    ACTIONS(62), 1,
      sym__indent,
    STATE(54), 1,
      sym_children,
    ACTIONS(54), 2,
      sym__dedent,
      sym_tag_name,
  [282] = 3,
    ACTIONS(90), 1,
      anon_sym_,
    ACTIONS(94), 1,
      anon_sym_EQ,
    ACTIONS(92), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [293] = 4,
    ACTIONS(96), 1,
      anon_sym_RPAREN,
    ACTIONS(98), 1,
      sym_attribute_name,
    STATE(25), 1,
      aux_sym_attributes_repeat1,
    STATE(41), 1,
      sym_attribute,
  [306] = 4,
    ACTIONS(98), 1,
      sym_attribute_name,
    ACTIONS(100), 1,
      anon_sym_RPAREN,
    STATE(15), 1,
      aux_sym_attributes_repeat1,
    STATE(35), 1,
      sym_attribute,
  [319] = 3,
    ACTIONS(62), 1,
      sym__indent,
    STATE(55), 1,
      sym_children,
    ACTIONS(58), 2,
      sym__dedent,
      sym_tag_name,
  [330] = 3,
    ACTIONS(62), 1,
      sym__indent,
    STATE(57), 1,
      sym_children,
    ACTIONS(60), 2,
      sym__dedent,
      sym_tag_name,
  [341] = 3,
    ACTIONS(62), 1,
      sym__indent,
    STATE(63), 1,
      sym_children,
    ACTIONS(56), 2,
      sym__dedent,
      sym_tag_name,
  [352] = 3,
    ACTIONS(69), 1,
      sym_tag_name,
    ACTIONS(102), 1,
      sym__dedent,
    STATE(20), 2,
      sym_tag,
      aux_sym_children_repeat1,
  [363] = 1,
    ACTIONS(104), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [369] = 1,
    ACTIONS(106), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [375] = 3,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(110), 1,
      anon_sym_DQUOTE,
    STATE(36), 1,
      sym_quoted_attribute_value,
  [385] = 2,
    ACTIONS(112), 1,
      anon_sym_,
    ACTIONS(114), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [393] = 1,
    ACTIONS(116), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [399] = 3,
    ACTIONS(118), 1,
      anon_sym_,
    ACTIONS(120), 1,
      anon_sym_COMMA,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
  [409] = 2,
    ACTIONS(124), 1,
      anon_sym_,
    ACTIONS(126), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [417] = 1,
    ACTIONS(60), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [423] = 1,
    ACTIONS(54), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [429] = 2,
    ACTIONS(128), 1,
      anon_sym_,
    ACTIONS(130), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [437] = 1,
    ACTIONS(132), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [443] = 3,
    ACTIONS(118), 1,
      anon_sym_,
    ACTIONS(120), 1,
      anon_sym_COMMA,
    ACTIONS(134), 1,
      anon_sym_RPAREN,
  [453] = 1,
    ACTIONS(136), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [459] = 1,
    ACTIONS(50), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [465] = 1,
    ACTIONS(58), 3,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
  [471] = 2,
    ACTIONS(118), 1,
      anon_sym_,
    ACTIONS(120), 1,
      anon_sym_COMMA,
  [478] = 1,
    ACTIONS(104), 2,
      sym__dedent,
      sym_tag_name,
  [483] = 2,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      aux_sym_quoted_attribute_value_token2,
  [490] = 1,
    ACTIONS(142), 2,
      sym__newline,
      anon_sym_,
  [495] = 2,
    ACTIONS(29), 1,
      anon_sym_,
    ACTIONS(31), 1,
      sym__newline,
  [502] = 2,
    ACTIONS(144), 1,
      sym__comment_content,
    ACTIONS(146), 1,
      sym__newline,
  [509] = 2,
    ACTIONS(148), 1,
      anon_sym_,
    ACTIONS(150), 1,
      sym__newline,
  [516] = 2,
    ACTIONS(9), 1,
      anon_sym_,
    ACTIONS(15), 1,
      sym__newline,
  [523] = 1,
    ACTIONS(152), 2,
      sym__newline,
      anon_sym_,
  [528] = 1,
    ACTIONS(106), 2,
      sym__dedent,
      sym_tag_name,
  [533] = 1,
    ACTIONS(54), 2,
      sym__dedent,
      sym_tag_name,
  [538] = 2,
    ACTIONS(154), 1,
      anon_sym_,
    ACTIONS(156), 1,
      sym__newline,
  [545] = 1,
    ACTIONS(58), 2,
      sym__dedent,
      sym_tag_name,
  [550] = 1,
    ACTIONS(136), 2,
      sym__dedent,
      sym_tag_name,
  [555] = 1,
    ACTIONS(60), 2,
      sym__dedent,
      sym_tag_name,
  [560] = 1,
    ACTIONS(158), 2,
      sym__newline,
      anon_sym_,
  [565] = 1,
    ACTIONS(64), 2,
      anon_sym_RPAREN,
      sym_attribute_name,
  [570] = 2,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(160), 1,
      aux_sym_quoted_attribute_value_token1,
  [577] = 1,
    ACTIONS(50), 2,
      sym__dedent,
      sym_tag_name,
  [582] = 1,
    ACTIONS(162), 1,
      sym__newline,
  [586] = 1,
    ACTIONS(164), 1,
      sym__dedent,
  [590] = 1,
    ACTIONS(166), 1,
      sym__newline,
  [594] = 1,
    ACTIONS(168), 1,
      sym__comment_content,
  [598] = 1,
    ACTIONS(170), 1,
      sym__newline,
  [602] = 1,
    ACTIONS(172), 1,
      sym_content,
  [606] = 1,
    ACTIONS(174), 1,
      sym_content,
  [610] = 1,
    ACTIONS(176), 1,
      anon_sym_DQUOTE,
  [614] = 1,
    ACTIONS(178), 1,
      sym_content,
  [618] = 1,
    ACTIONS(176), 1,
      anon_sym_SQUOTE,
  [622] = 1,
    ACTIONS(180), 1,
      sym__dedent,
  [626] = 1,
    ACTIONS(182), 1,
      sym__newline,
  [630] = 1,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
  [634] = 1,
    ACTIONS(156), 1,
      sym__newline,
  [638] = 1,
    ACTIONS(150), 1,
      sym__newline,
  [642] = 1,
    ACTIONS(186), 1,
      sym__newline,
  [646] = 1,
    ACTIONS(188), 1,
      sym__comment_content,
  [650] = 1,
    ACTIONS(190), 1,
      sym__newline,
  [654] = 1,
    ACTIONS(192), 1,
      sym__newline,
  [658] = 1,
    ACTIONS(194), 1,
      sym_content,
  [662] = 1,
    ACTIONS(196), 1,
      sym_content,
  [666] = 1,
    ACTIONS(198), 1,
      sym_content,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 60,
  [SMALL_STATE(6)] = 80,
  [SMALL_STATE(7)] = 95,
  [SMALL_STATE(8)] = 110,
  [SMALL_STATE(9)] = 125,
  [SMALL_STATE(10)] = 137,
  [SMALL_STATE(11)] = 149,
  [SMALL_STATE(12)] = 161,
  [SMALL_STATE(13)] = 173,
  [SMALL_STATE(14)] = 185,
  [SMALL_STATE(15)] = 196,
  [SMALL_STATE(16)] = 209,
  [SMALL_STATE(17)] = 220,
  [SMALL_STATE(18)] = 231,
  [SMALL_STATE(19)] = 240,
  [SMALL_STATE(20)] = 251,
  [SMALL_STATE(21)] = 262,
  [SMALL_STATE(22)] = 271,
  [SMALL_STATE(23)] = 282,
  [SMALL_STATE(24)] = 293,
  [SMALL_STATE(25)] = 306,
  [SMALL_STATE(26)] = 319,
  [SMALL_STATE(27)] = 330,
  [SMALL_STATE(28)] = 341,
  [SMALL_STATE(29)] = 352,
  [SMALL_STATE(30)] = 363,
  [SMALL_STATE(31)] = 369,
  [SMALL_STATE(32)] = 375,
  [SMALL_STATE(33)] = 385,
  [SMALL_STATE(34)] = 393,
  [SMALL_STATE(35)] = 399,
  [SMALL_STATE(36)] = 409,
  [SMALL_STATE(37)] = 417,
  [SMALL_STATE(38)] = 423,
  [SMALL_STATE(39)] = 429,
  [SMALL_STATE(40)] = 437,
  [SMALL_STATE(41)] = 443,
  [SMALL_STATE(42)] = 453,
  [SMALL_STATE(43)] = 459,
  [SMALL_STATE(44)] = 465,
  [SMALL_STATE(45)] = 471,
  [SMALL_STATE(46)] = 478,
  [SMALL_STATE(47)] = 483,
  [SMALL_STATE(48)] = 490,
  [SMALL_STATE(49)] = 495,
  [SMALL_STATE(50)] = 502,
  [SMALL_STATE(51)] = 509,
  [SMALL_STATE(52)] = 516,
  [SMALL_STATE(53)] = 523,
  [SMALL_STATE(54)] = 528,
  [SMALL_STATE(55)] = 533,
  [SMALL_STATE(56)] = 538,
  [SMALL_STATE(57)] = 545,
  [SMALL_STATE(58)] = 550,
  [SMALL_STATE(59)] = 555,
  [SMALL_STATE(60)] = 560,
  [SMALL_STATE(61)] = 565,
  [SMALL_STATE(62)] = 570,
  [SMALL_STATE(63)] = 577,
  [SMALL_STATE(64)] = 582,
  [SMALL_STATE(65)] = 586,
  [SMALL_STATE(66)] = 590,
  [SMALL_STATE(67)] = 594,
  [SMALL_STATE(68)] = 598,
  [SMALL_STATE(69)] = 602,
  [SMALL_STATE(70)] = 606,
  [SMALL_STATE(71)] = 610,
  [SMALL_STATE(72)] = 614,
  [SMALL_STATE(73)] = 618,
  [SMALL_STATE(74)] = 622,
  [SMALL_STATE(75)] = 626,
  [SMALL_STATE(76)] = 630,
  [SMALL_STATE(77)] = 634,
  [SMALL_STATE(78)] = 638,
  [SMALL_STATE(79)] = 642,
  [SMALL_STATE(80)] = 646,
  [SMALL_STATE(81)] = 650,
  [SMALL_STATE(82)] = 654,
  [SMALL_STATE(83)] = 658,
  [SMALL_STATE(84)] = 662,
  [SMALL_STATE(85)] = 666,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(7),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(23),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(4),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 7),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 6),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [184] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
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
  static TSLanguage language = {
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
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
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
