#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 337
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 94
#define ALIAS_COUNT 2
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 6

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
  anon_sym_case = 10,
  anon_sym_COLON = 11,
  anon_sym_when = 12,
  aux_sym__when_keyword_token1 = 13,
  anon_sym_default = 14,
  anon_sym_BANG_EQ = 15,
  anon_sym_EQ = 16,
  anon_sym_ = 17,
  anon_sym_DOT = 18,
  anon_sym_LPAREN = 19,
  anon_sym_COMMA = 20,
  anon_sym_RPAREN = 21,
  aux_sym__ternary_attribute_value_token1 = 22,
  aux_sym__variable_attribute_value_token1 = 23,
  aux_sym__object_attribute_value_token1 = 24,
  aux_sym__template_attribute_value_token1 = 25,
  aux_sym__array_attribute_value_token1 = 26,
  aux_sym__attribute_token1 = 27,
  anon_sym_SLASH_SLASH = 28,
  sym_tag_name = 29,
  sym_class = 30,
  sym_id = 31,
  aux_sym_angular_attribute_name_token1 = 32,
  aux_sym_angular_attribute_name_token2 = 33,
  aux_sym_angular_attribute_name_token3 = 34,
  anon_sym_SQUOTE = 35,
  aux_sym_quoted_javascript_token1 = 36,
  anon_sym_DQUOTE = 37,
  aux_sym_quoted_javascript_token2 = 38,
  sym_content = 39,
  sym__comment_content = 40,
  anon_sym_LBRACE_LBRACE = 41,
  anon_sym_RBRACE_RBRACE = 42,
  sym__delimited_javascript = 43,
  sym__un_delimited_javascript_line = 44,
  anon_sym_DASH = 45,
  aux_sym_unbuffered_code_token1 = 46,
  sym__newline = 47,
  sym__indent = 48,
  sym__dedent = 49,
  sym_source_file = 50,
  sym_doctype = 51,
  sym_pipe = 52,
  sym_conditional = 53,
  sym_case = 54,
  sym__when_content = 55,
  sym__when_keyword = 56,
  sym_when = 57,
  sym_unescaped_buffered_code = 58,
  sym_buffered_code = 59,
  sym_tag = 60,
  sym__content_after_dot = 61,
  sym_attributes = 62,
  sym_attribute = 63,
  sym__ternary_attribute_value = 64,
  sym__string_attribute_value = 65,
  sym__variable_attribute_value = 66,
  sym__object_attribute_value = 67,
  sym__template_attribute_value = 68,
  sym__array_attribute_value = 69,
  sym__attribute = 70,
  sym__angular_attribute = 71,
  sym_children = 72,
  sym__children_choice = 73,
  sym_comment = 74,
  sym_angular_attribute_name = 75,
  sym_attribute_name = 76,
  sym_quoted_javascript = 77,
  sym_quoted_attribute_value = 78,
  aux_sym__content_or_javascript = 79,
  sym__un_delimited_javascript = 80,
  aux_sym__un_delimited_javascript_multiline = 81,
  sym__single_line_buf_code = 82,
  sym__multi_line_buf_code = 83,
  sym_unbuffered_code = 84,
  aux_sym_source_file_repeat1 = 85,
  aux_sym_conditional_repeat1 = 86,
  aux_sym_case_repeat1 = 87,
  aux_sym_tag_repeat1 = 88,
  aux_sym__content_after_dot_repeat1 = 89,
  aux_sym_attributes_repeat1 = 90,
  aux_sym__attribute_repeat1 = 91,
  aux_sym_children_repeat1 = 92,
  aux_sym_comment_repeat1 = 93,
  alias_sym_attribute_modifier = 94,
  alias_sym_attribute_value = 95,
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
  [anon_sym_case] = "case",
  [anon_sym_COLON] = ":",
  [anon_sym_when] = "when",
  [aux_sym__when_keyword_token1] = "javascript",
  [anon_sym_default] = "default",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_EQ] = "=",
  [anon_sym_] = " ",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [aux_sym__ternary_attribute_value_token1] = "javascript",
  [aux_sym__variable_attribute_value_token1] = "javascript",
  [aux_sym__object_attribute_value_token1] = "javascript",
  [aux_sym__template_attribute_value_token1] = "javascript",
  [aux_sym__array_attribute_value_token1] = "javascript",
  [aux_sym__attribute_token1] = "_attribute_token1",
  [anon_sym_SLASH_SLASH] = "//",
  [sym_tag_name] = "tag_name",
  [sym_class] = "class",
  [sym_id] = "id",
  [aux_sym_angular_attribute_name_token1] = "angular_attribute_name_token1",
  [aux_sym_angular_attribute_name_token2] = "angular_attribute_name_token2",
  [aux_sym_angular_attribute_name_token3] = "angular_attribute_name_token3",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_javascript_token1] = "javascript",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_javascript_token2] = "javascript",
  [sym_content] = "content",
  [sym__comment_content] = "_comment_content",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [sym__delimited_javascript] = "javascript",
  [sym__un_delimited_javascript_line] = "_un_delimited_javascript_line",
  [anon_sym_DASH] = "-",
  [aux_sym_unbuffered_code_token1] = "unbuffered_code_token1",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_source_file] = "source_file",
  [sym_doctype] = "doctype",
  [sym_pipe] = "pipe",
  [sym_conditional] = "conditional",
  [sym_case] = "case",
  [sym__when_content] = "_when_content",
  [sym__when_keyword] = "_when_keyword",
  [sym_when] = "when",
  [sym_unescaped_buffered_code] = "unescaped_buffered_code",
  [sym_buffered_code] = "buffered_code",
  [sym_tag] = "tag",
  [sym__content_after_dot] = "_content_after_dot",
  [sym_attributes] = "attributes",
  [sym_attribute] = "attribute",
  [sym__ternary_attribute_value] = "_ternary_attribute_value",
  [sym__string_attribute_value] = "_string_attribute_value",
  [sym__variable_attribute_value] = "_variable_attribute_value",
  [sym__object_attribute_value] = "_object_attribute_value",
  [sym__template_attribute_value] = "_template_attribute_value",
  [sym__array_attribute_value] = "_array_attribute_value",
  [sym__attribute] = "_attribute",
  [sym__angular_attribute] = "_angular_attribute",
  [sym_children] = "children",
  [sym__children_choice] = "_children_choice",
  [sym_comment] = "comment",
  [sym_angular_attribute_name] = "attribute_name",
  [sym_attribute_name] = "attribute_name",
  [sym_quoted_javascript] = "quoted_javascript",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [aux_sym__content_or_javascript] = "_content_or_javascript",
  [sym__un_delimited_javascript] = "javascript",
  [aux_sym__un_delimited_javascript_multiline] = "_un_delimited_javascript_multiline",
  [sym__single_line_buf_code] = "_single_line_buf_code",
  [sym__multi_line_buf_code] = "_multi_line_buf_code",
  [sym_unbuffered_code] = "unbuffered_code",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_conditional_repeat1] = "conditional_repeat1",
  [aux_sym_case_repeat1] = "case_repeat1",
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
  [anon_sym_case] = anon_sym_case,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_when] = anon_sym_when,
  [aux_sym__when_keyword_token1] = aux_sym__when_keyword_token1,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_] = anon_sym_,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym__ternary_attribute_value_token1] = aux_sym__when_keyword_token1,
  [aux_sym__variable_attribute_value_token1] = aux_sym__when_keyword_token1,
  [aux_sym__object_attribute_value_token1] = aux_sym__when_keyword_token1,
  [aux_sym__template_attribute_value_token1] = aux_sym__when_keyword_token1,
  [aux_sym__array_attribute_value_token1] = aux_sym__when_keyword_token1,
  [aux_sym__attribute_token1] = aux_sym__attribute_token1,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [sym_tag_name] = sym_tag_name,
  [sym_class] = sym_class,
  [sym_id] = sym_id,
  [aux_sym_angular_attribute_name_token1] = aux_sym_angular_attribute_name_token1,
  [aux_sym_angular_attribute_name_token2] = aux_sym_angular_attribute_name_token2,
  [aux_sym_angular_attribute_name_token3] = aux_sym_angular_attribute_name_token3,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_javascript_token1] = aux_sym__when_keyword_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_javascript_token2] = aux_sym__when_keyword_token1,
  [sym_content] = sym_content,
  [sym__comment_content] = sym__comment_content,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [sym__delimited_javascript] = aux_sym__when_keyword_token1,
  [sym__un_delimited_javascript_line] = sym__un_delimited_javascript_line,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_unbuffered_code_token1] = aux_sym_unbuffered_code_token1,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_source_file] = sym_source_file,
  [sym_doctype] = sym_doctype,
  [sym_pipe] = sym_pipe,
  [sym_conditional] = sym_conditional,
  [sym_case] = sym_case,
  [sym__when_content] = sym__when_content,
  [sym__when_keyword] = sym__when_keyword,
  [sym_when] = sym_when,
  [sym_unescaped_buffered_code] = sym_unescaped_buffered_code,
  [sym_buffered_code] = sym_buffered_code,
  [sym_tag] = sym_tag,
  [sym__content_after_dot] = sym__content_after_dot,
  [sym_attributes] = sym_attributes,
  [sym_attribute] = sym_attribute,
  [sym__ternary_attribute_value] = sym__ternary_attribute_value,
  [sym__string_attribute_value] = sym__string_attribute_value,
  [sym__variable_attribute_value] = sym__variable_attribute_value,
  [sym__object_attribute_value] = sym__object_attribute_value,
  [sym__template_attribute_value] = sym__template_attribute_value,
  [sym__array_attribute_value] = sym__array_attribute_value,
  [sym__attribute] = sym__attribute,
  [sym__angular_attribute] = sym__angular_attribute,
  [sym_children] = sym_children,
  [sym__children_choice] = sym__children_choice,
  [sym_comment] = sym_comment,
  [sym_angular_attribute_name] = sym_attribute_name,
  [sym_attribute_name] = sym_attribute_name,
  [sym_quoted_javascript] = sym_quoted_javascript,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [aux_sym__content_or_javascript] = aux_sym__content_or_javascript,
  [sym__un_delimited_javascript] = aux_sym__when_keyword_token1,
  [aux_sym__un_delimited_javascript_multiline] = aux_sym__un_delimited_javascript_multiline,
  [sym__single_line_buf_code] = sym__single_line_buf_code,
  [sym__multi_line_buf_code] = sym__multi_line_buf_code,
  [sym_unbuffered_code] = sym_unbuffered_code,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_conditional_repeat1] = aux_sym_conditional_repeat1,
  [aux_sym_case_repeat1] = aux_sym_case_repeat1,
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
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_when] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__when_keyword_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [aux_sym__ternary_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__variable_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__object_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__template_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__array_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__attribute_token1] = {
    .visible = false,
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
  [aux_sym_angular_attribute_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_angular_attribute_name_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_angular_attribute_name_token3] = {
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
  [sym__delimited_javascript] = {
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
  [sym_pipe] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional] = {
    .visible = true,
    .named = true,
  },
  [sym_case] = {
    .visible = true,
    .named = true,
  },
  [sym__when_content] = {
    .visible = false,
    .named = true,
  },
  [sym__when_keyword] = {
    .visible = false,
    .named = true,
  },
  [sym_when] = {
    .visible = true,
    .named = true,
  },
  [sym_unescaped_buffered_code] = {
    .visible = true,
    .named = true,
  },
  [sym_buffered_code] = {
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
  [sym__ternary_attribute_value] = {
    .visible = false,
    .named = true,
  },
  [sym__string_attribute_value] = {
    .visible = false,
    .named = true,
  },
  [sym__variable_attribute_value] = {
    .visible = false,
    .named = true,
  },
  [sym__object_attribute_value] = {
    .visible = false,
    .named = true,
  },
  [sym__template_attribute_value] = {
    .visible = false,
    .named = true,
  },
  [sym__array_attribute_value] = {
    .visible = false,
    .named = true,
  },
  [sym__attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__angular_attribute] = {
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
  [sym_angular_attribute_name] = {
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
  [sym__un_delimited_javascript] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__un_delimited_javascript_multiline] = {
    .visible = false,
    .named = false,
  },
  [sym__single_line_buf_code] = {
    .visible = false,
    .named = true,
  },
  [sym__multi_line_buf_code] = {
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
  [aux_sym_case_repeat1] = {
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
    [1] = aux_sym__when_keyword_token1,
  },
  [2] = {
    [1] = alias_sym_attribute_modifier,
  },
  [3] = {
    [0] = aux_sym__when_keyword_token1,
  },
  [4] = {
    [3] = sym_children,
  },
  [5] = {
    [1] = alias_sym_attribute_value,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__un_delimited_javascript_multiline, 2,
    aux_sym__un_delimited_javascript_multiline,
    aux_sym__when_keyword_token1,
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
      if (eof) ADVANCE(149);
      if (lookahead == '!') ADVANCE(79);
      if (lookahead == '"') ADVANCE(603);
      if (lookahead == '#') ADVANCE(139);
      if (lookahead == '\'') ADVANCE(599);
      if (lookahead == '(') ADVANCE(197);
      if (lookahead == ')') ADVANCE(199);
      if (lookahead == '*') ADVANCE(140);
      if (lookahead == ',') ADVANCE(198);
      if (lookahead == '-') ADVANCE(634);
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(179);
      if (lookahead == '=') ADVANCE(191);
      if (lookahead == '[') ADVANCE(87);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == 'c') ADVANCE(93);
      if (lookahead == 'd') ADVANCE(100);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == 'h') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead == 's') ADVANCE(124);
      if (lookahead == 'u') ADVANCE(117);
      if (lookahead == 'w') ADVANCE(106);
      if (lookahead == 'x') ADVANCE(114);
      if (lookahead == '{') ADVANCE(131);
      if (lookahead == '|') ADVANCE(157);
      if (lookahead == '}') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '`') ADVANCE(493);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\'') ADVANCE(201);
      if (lookahead == '`') ADVANCE(494);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(202);
      if (lookahead == '`') ADVANCE(498);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '"') ADVANCE(203);
      if (lookahead == ']') ADVANCE(500);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(63);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\'') ADVANCE(204);
      if (lookahead == ']') ADVANCE(501);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(65);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == ']') ADVANCE(503);
      if (lookahead == '`') ADVANCE(205);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(92);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(206);
      if (lookahead == ']') ADVANCE(504);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(133);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(207);
      if (lookahead == ']') ADVANCE(505);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(134);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(208);
      if (lookahead == ']') ADVANCE(506);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(135);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(209);
      if (lookahead == ']') ADVANCE(507);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(137);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(210);
      if (lookahead == ',') ADVANCE(11);
      if (lookahead == '}') ADVANCE(480);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(63);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '\'') ADVANCE(211);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(481);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(65);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '`') ADVANCE(212);
      if (lookahead == '}') ADVANCE(482);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(92);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(213);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '}') ADVANCE(483);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(133);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(214);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(484);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(134);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(215);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(485);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(135);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(216);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(486);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(137);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"') ADVANCE(210);
      if (lookahead == ',') ADVANCE(11);
      if (lookahead == '}') ADVANCE(480);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(63);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(211);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(481);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(65);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '`') ADVANCE(212);
      if (lookahead == '}') ADVANCE(482);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(92);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(213);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '}') ADVANCE(483);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(133);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(214);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(484);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(134);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(215);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(485);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(135);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(216);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(486);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(137);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"') ADVANCE(217);
      if (lookahead == '?') ADVANCE(42);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\'') ADVANCE(218);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead == '`') ADVANCE(219);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(220);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(221);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(222);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(223);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '"') ADVANCE(224);
      if (lookahead == ')') ADVANCE(442);
      if (lookahead == '`') ADVANCE(490);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == ')') ADVANCE(443);
      if (lookahead == '`') ADVANCE(491);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(226);
      if (lookahead == ')') ADVANCE(444);
      if (lookahead == '`') ADVANCE(492);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"') ADVANCE(227);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == ')') ADVANCE(466);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == ')') ADVANCE(475);
      if (lookahead == '`') ADVANCE(229);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(230);
      if (lookahead == ')') ADVANCE(476);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(231);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(232);
      if (lookahead == ')') ADVANCE(478);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(233);
      if (lookahead == ')') ADVANCE(479);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(63);
      if (lookahead != 0) ADVANCE(234);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(65);
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '`') ADVANCE(238);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(92);
      if (lookahead != 0) ADVANCE(238);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(240);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(133);
      if (lookahead != 0) ADVANCE(240);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(242);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(134);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(244);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(135);
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(246);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(137);
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 49:
      if (lookahead == '\n') SKIP(49)
      if (lookahead == '{') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(607);
      if (lookahead != 0) ADVANCE(608);
      END_STATE();
    case 50:
      if (lookahead == '\n') SKIP(50)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(630);
      if (lookahead != 0) ADVANCE(633);
      END_STATE();
    case 51:
      if (lookahead == '\n') SKIP(51)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(184);
      END_STATE();
    case 52:
      if (lookahead == '\n') SKIP(52)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(622);
      END_STATE();
    case 53:
      if (lookahead == ' ') ADVANCE(194);
      if (lookahead == '!') ADVANCE(79);
      if (lookahead == '#') ADVANCE(139);
      if (lookahead == '(') ADVANCE(197);
      if (lookahead == ')') ADVANCE(199);
      if (lookahead == ',') ADVANCE(198);
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == ':') ADVANCE(179);
      if (lookahead == '=') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(53)
      END_STATE();
    case 54:
      if (lookahead == ' ') ADVANCE(194);
      if (lookahead == '!') ADVANCE(79);
      if (lookahead == ')') ADVANCE(199);
      if (lookahead == ',') ADVANCE(198);
      if (lookahead == '.') ADVANCE(195);
      if (lookahead == ':') ADVANCE(179);
      if (lookahead == '=') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(54)
      END_STATE();
    case 55:
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == ',') ADVANCE(55);
      if (lookahead == '}') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(75);
      END_STATE();
    case 56:
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '?') ADVANCE(77);
      if (lookahead == '}') ADVANCE(488);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(85);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 57:
      if (lookahead == ' ') SKIP(57)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(610);
      if (lookahead != 0) ADVANCE(618);
      END_STATE();
    case 58:
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '"') ADVANCE(604);
      if (lookahead == '\'') ADVANCE(600);
      if (lookahead == '?') ADVANCE(464);
      if (lookahead == '[') ADVANCE(455);
      if (lookahead == '`') ADVANCE(470);
      if (lookahead == '{') ADVANCE(456);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(462);
      if (lookahead != 0) ADVANCE(469);
      END_STATE();
    case 59:
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '"') ADVANCE(604);
      if (lookahead == '\'') ADVANCE(600);
      if (lookahead == '?') ADVANCE(468);
      if (lookahead == '[') ADVANCE(455);
      if (lookahead == '`') ADVANCE(470);
      if (lookahead == '{') ADVANCE(456);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(462);
      if (lookahead != 0) ADVANCE(469);
      END_STATE();
    case 60:
      if (lookahead == '!') ADVANCE(79);
      if (lookahead == '#') ADVANCE(139);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == '=') ADVANCE(191);
      if (lookahead == '|') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(60)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 61:
      if (lookahead == '"') ADVANCE(603);
      if (lookahead == '\'') ADVANCE(599);
      if (lookahead == '[') ADVANCE(88);
      if (lookahead == '`') ADVANCE(81);
      if (lookahead == '{') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 62:
      if (lookahead == '"') ADVANCE(603);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(605);
      if (lookahead != 0) ADVANCE(606);
      END_STATE();
    case 63:
      if (lookahead == '"') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 64:
      if (lookahead == '\'') ADVANCE(599);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(601);
      if (lookahead != 0) ADVANCE(602);
      END_STATE();
    case 65:
      if (lookahead == '\'') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 66:
      if (lookahead == '(') ADVANCE(141);
      if (lookahead == ')') ADVANCE(199);
      if (lookahead == '*') ADVANCE(140);
      if (lookahead == '[') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(66)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 67:
      if (lookahead == ')') ADVANCE(597);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      if (lookahead == ')') ADVANCE(474);
      if (lookahead == '?') ADVANCE(69);
      if (lookahead == '`') ADVANCE(417);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 69:
      if (lookahead == ')') ADVANCE(474);
      if (lookahead == '`') ADVANCE(496);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 70:
      if (lookahead == ')') ADVANCE(473);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 71:
      if (lookahead == ')') ADVANCE(473);
      if (lookahead == '?') ADVANCE(459);
      if (lookahead == ' ' ||
          lookahead == '(') ADVANCE(70);
      if (lookahead != 0) ADVANCE(454);
      END_STATE();
    case 72:
      if (lookahead == ')') ADVANCE(472);
      if (lookahead == '?') ADVANCE(68);
      if (lookahead == '`') ADVANCE(495);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 73:
      if (lookahead == ')') ADVANCE(441);
      if (lookahead == '?') ADVANCE(74);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 74:
      if (lookahead == ')') ADVANCE(441);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 75:
      if (lookahead == ',') ADVANCE(55);
      if (lookahead == '}') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(75);
      END_STATE();
    case 76:
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '?') ADVANCE(77);
      if (lookahead == '}') ADVANCE(488);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(85);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 77:
      if (lookahead == ',') ADVANCE(422);
      if (lookahead == '?') ADVANCE(75);
      if (lookahead == '}') ADVANCE(422);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(422);
      END_STATE();
    case 78:
      if (lookahead == '/') ADVANCE(509);
      END_STATE();
    case 79:
      if (lookahead == '=') ADVANCE(188);
      END_STATE();
    case 80:
      if (lookahead == '?') ADVANCE(88);
      if (lookahead == ']') ADVANCE(413);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(420);
      END_STATE();
    case 81:
      if (lookahead == '?') ADVANCE(467);
      if (lookahead == '`') ADVANCE(469);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(84);
      if (lookahead != 0) ADVANCE(470);
      END_STATE();
    case 82:
      if (lookahead == '?') ADVANCE(471);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(85);
      if (lookahead != 0) ADVANCE(469);
      END_STATE();
    case 83:
      if (lookahead == '?') ADVANCE(458);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(85);
      if (lookahead != 0) ADVANCE(469);
      END_STATE();
    case 84:
      if (lookahead == '?') ADVANCE(91);
      if (lookahead == '`') ADVANCE(497);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 85:
      if (lookahead == '?') ADVANCE(143);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 86:
      if (lookahead == '?') ADVANCE(80);
      if (lookahead == ']') ADVANCE(502);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(85);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 87:
      if (lookahead == ']') ADVANCE(499);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[') ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == ']') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[') ADVANCE(88);
      END_STATE();
    case 89:
      if (lookahead == ']') ADVANCE(596);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 90:
      if (lookahead == '`') ADVANCE(489);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 91:
      if (lookahead == '`') ADVANCE(413);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(90);
      if (lookahead != 0) ADVANCE(425);
      END_STATE();
    case 92:
      if (lookahead == '`') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(125);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(126);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 103:
      if (lookahead == 'f') ADVANCE(160);
      END_STATE();
    case 104:
      if (lookahead == 'f') ADVANCE(164);
      END_STATE();
    case 105:
      if (lookahead == 'f') ADVANCE(94);
      END_STATE();
    case 106:
      if (lookahead == 'h') ADVANCE(101);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 114:
      if (lookahead == 'm') ADVANCE(109);
      END_STATE();
    case 115:
      if (lookahead == 'm') ADVANCE(110);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 118:
      if (lookahead == 'p') ADVANCE(99);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 121:
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 122:
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 123:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 129:
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 130:
      if (lookahead == 'y') ADVANCE(118);
      END_STATE();
    case 131:
      if (lookahead == '{') ADVANCE(619);
      END_STATE();
    case 132:
      if (lookahead == '}') ADVANCE(620);
      END_STATE();
    case 133:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(133);
      END_STATE();
    case 134:
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 135:
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(135);
      END_STATE();
    case 136:
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 137:
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 138:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(590);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 139:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(593);
      END_STATE();
    case 140:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 141:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 142:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 143:
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '?') ADVANCE(413);
      END_STATE();
    case 144:
      if (eof) ADVANCE(149);
      if (lookahead == '\n') SKIP(144)
      if (lookahead == '!') ADVANCE(626);
      if (lookahead == '#') ADVANCE(632);
      if (lookahead == '-') ADVANCE(635);
      if (lookahead == '.') ADVANCE(631);
      if (lookahead == '/') ADVANCE(625);
      if (lookahead == '=') ADVANCE(192);
      if (lookahead == 'c') ADVANCE(514);
      if (lookahead == 'd') ADVANCE(529);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == 'i') ADVANCE(537);
      if (lookahead == 'u') ADVANCE(554);
      if (lookahead == 'w') ADVANCE(541);
      if (lookahead == '|') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0) ADVANCE(633);
      END_STATE();
    case 145:
      if (eof) ADVANCE(149);
      if (lookahead == '\n') SKIP(145)
      if (lookahead == '!') ADVANCE(626);
      if (lookahead == '#') ADVANCE(632);
      if (lookahead == '-') ADVANCE(635);
      if (lookahead == '.') ADVANCE(631);
      if (lookahead == '/') ADVANCE(625);
      if (lookahead == '=') ADVANCE(192);
      if (lookahead == 'c') ADVANCE(514);
      if (lookahead == 'd') ADVANCE(557);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == 'i') ADVANCE(537);
      if (lookahead == 'u') ADVANCE(554);
      if (lookahead == '|') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0) ADVANCE(633);
      END_STATE();
    case 146:
      if (eof) ADVANCE(149);
      if (lookahead == ' ') SKIP(146)
      if (lookahead == '!') ADVANCE(612);
      if (lookahead == '#') ADVANCE(617);
      if (lookahead == '-') ADVANCE(636);
      if (lookahead == '.') ADVANCE(616);
      if (lookahead == '/') ADVANCE(611);
      if (lookahead == '=') ADVANCE(193);
      if (lookahead == 'c') ADVANCE(516);
      if (lookahead == 'd') ADVANCE(558);
      if (lookahead == 'e') ADVANCE(550);
      if (lookahead == 'i') ADVANCE(540);
      if (lookahead == 'u') ADVANCE(555);
      if (lookahead == '|') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      if (lookahead != 0) ADVANCE(618);
      END_STATE();
    case 147:
      if (eof) ADVANCE(149);
      if (lookahead == '!') ADVANCE(79);
      if (lookahead == '#') ADVANCE(139);
      if (lookahead == '-') ADVANCE(634);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(179);
      if (lookahead == '=') ADVANCE(191);
      if (lookahead == 'c') ADVANCE(512);
      if (lookahead == 'd') ADVANCE(526);
      if (lookahead == 'e') ADVANCE(548);
      if (lookahead == 'i') ADVANCE(536);
      if (lookahead == 'u') ADVANCE(553);
      if (lookahead == 'w') ADVANCE(542);
      if (lookahead == '|') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(147)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 148:
      if (eof) ADVANCE(149);
      if (lookahead == '!') ADVANCE(79);
      if (lookahead == '#') ADVANCE(139);
      if (lookahead == '-') ADVANCE(634);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '=') ADVANCE(191);
      if (lookahead == 'c') ADVANCE(512);
      if (lookahead == 'd') ADVANCE(556);
      if (lookahead == 'e') ADVANCE(548);
      if (lookahead == 'i') ADVANCE(536);
      if (lookahead == 'u') ADVANCE(553);
      if (lookahead == '|') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(148)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_doctype);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_strict);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(628);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(614);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(107);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__when_keyword_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__when_keyword_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(590);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '`') ADVANCE(493);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\'') ADVANCE(201);
      if (lookahead == '`') ADVANCE(494);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(202);
      if (lookahead == '`') ADVANCE(498);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '"') ADVANCE(203);
      if (lookahead == ']') ADVANCE(500);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(63);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\'') ADVANCE(204);
      if (lookahead == ']') ADVANCE(501);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(65);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == ']') ADVANCE(503);
      if (lookahead == '`') ADVANCE(205);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(92);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(206);
      if (lookahead == ']') ADVANCE(504);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(133);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(207);
      if (lookahead == ']') ADVANCE(505);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(134);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(208);
      if (lookahead == ']') ADVANCE(506);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(135);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(209);
      if (lookahead == ']') ADVANCE(507);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(137);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"') ADVANCE(210);
      if (lookahead == ',') ADVANCE(11);
      if (lookahead == '}') ADVANCE(480);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(63);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(211);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(481);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(65);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '`') ADVANCE(212);
      if (lookahead == '}') ADVANCE(482);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(92);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(213);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '}') ADVANCE(483);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(133);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(214);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(484);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(134);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(215);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(485);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(135);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(216);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(486);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(137);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"') ADVANCE(217);
      if (lookahead == '?') ADVANCE(42);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\'') ADVANCE(218);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead == '`') ADVANCE(219);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(220);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(221);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(222);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(223);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '"') ADVANCE(224);
      if (lookahead == ')') ADVANCE(442);
      if (lookahead == '`') ADVANCE(490);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == ')') ADVANCE(443);
      if (lookahead == '`') ADVANCE(491);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(226);
      if (lookahead == ')') ADVANCE(444);
      if (lookahead == '`') ADVANCE(492);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"') ADVANCE(227);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == ')') ADVANCE(466);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == ')') ADVANCE(475);
      if (lookahead == '`') ADVANCE(229);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(230);
      if (lookahead == ')') ADVANCE(476);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(231);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(232);
      if (lookahead == ')') ADVANCE(478);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(233);
      if (lookahead == ')') ADVANCE(479);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '\'') ADVANCE(240);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '?') ADVANCE(307);
      if (lookahead == '`') ADVANCE(242);
      if (lookahead != 0) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '?') ADVANCE(307);
      if (lookahead != 0) ADVANCE(234);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(236);
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == '?') ADVANCE(308);
      if (lookahead == '`') ADVANCE(244);
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == '?') ADVANCE(308);
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(238);
      if (lookahead == '"') ADVANCE(242);
      if (lookahead == '\'') ADVANCE(244);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '?') ADVANCE(309);
      if (lookahead == '`') ADVANCE(238);
      if (lookahead != 0) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(238);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '?') ADVANCE(309);
      if (lookahead == '`') ADVANCE(238);
      if (lookahead != 0) ADVANCE(238);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(240);
      if (lookahead == '"') ADVANCE(240);
      if (lookahead == '\'') ADVANCE(240);
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == '?') ADVANCE(310);
      if (lookahead == '`') ADVANCE(246);
      if (lookahead != 0) ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(240);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(240);
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == '?') ADVANCE(310);
      if (lookahead != 0) ADVANCE(240);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(242);
      if (lookahead == '"') ADVANCE(242);
      if (lookahead == '\'') ADVANCE(246);
      if (lookahead == ')') ADVANCE(134);
      if (lookahead == '?') ADVANCE(311);
      if (lookahead == '`') ADVANCE(242);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(242);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(242);
      if (lookahead == ')') ADVANCE(134);
      if (lookahead == '?') ADVANCE(311);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(244);
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '\'') ADVANCE(244);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '?') ADVANCE(312);
      if (lookahead == '`') ADVANCE(244);
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(244);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(244);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '?') ADVANCE(312);
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(246);
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '\'') ADVANCE(246);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '?') ADVANCE(313);
      if (lookahead == '`') ADVANCE(246);
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(246);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(246);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '?') ADVANCE(313);
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(248);
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '\'') ADVANCE(254);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead == '?') ADVANCE(314);
      if (lookahead == '`') ADVANCE(256);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(248);
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead == '?') ADVANCE(314);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(250);
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '\'') ADVANCE(250);
      if (lookahead == ')') ADVANCE(466);
      if (lookahead == '?') ADVANCE(315);
      if (lookahead == '`') ADVANCE(258);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(250);
      if (lookahead == '\'') ADVANCE(250);
      if (lookahead == ')') ADVANCE(466);
      if (lookahead == '?') ADVANCE(315);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(252);
      if (lookahead == '"') ADVANCE(256);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == ')') ADVANCE(475);
      if (lookahead == '?') ADVANCE(316);
      if (lookahead == '`') ADVANCE(252);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(252);
      if (lookahead == ')') ADVANCE(475);
      if (lookahead == '?') ADVANCE(316);
      if (lookahead == '`') ADVANCE(252);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(254);
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '\'') ADVANCE(254);
      if (lookahead == ')') ADVANCE(476);
      if (lookahead == '?') ADVANCE(317);
      if (lookahead == '`') ADVANCE(260);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(254);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(254);
      if (lookahead == ')') ADVANCE(476);
      if (lookahead == '?') ADVANCE(317);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(256);
      if (lookahead == '"') ADVANCE(256);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead == '?') ADVANCE(318);
      if (lookahead == '`') ADVANCE(256);
      if (lookahead != 0) ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(256);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(256);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead == '?') ADVANCE(318);
      if (lookahead != 0) ADVANCE(256);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(258);
      if (lookahead == '"') ADVANCE(260);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == ')') ADVANCE(478);
      if (lookahead == '?') ADVANCE(319);
      if (lookahead == '`') ADVANCE(258);
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(258);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(258);
      if (lookahead == ')') ADVANCE(478);
      if (lookahead == '?') ADVANCE(319);
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(260);
      if (lookahead == '"') ADVANCE(260);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == ')') ADVANCE(479);
      if (lookahead == '?') ADVANCE(320);
      if (lookahead == '`') ADVANCE(260);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(260);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(260);
      if (lookahead == ')') ADVANCE(479);
      if (lookahead == '?') ADVANCE(320);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == '"') ADVANCE(262);
      if (lookahead == '\'') ADVANCE(268);
      if (lookahead == '(') ADVANCE(248);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '?') ADVANCE(321);
      if (lookahead == '`') ADVANCE(270);
      if (lookahead != 0) ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead == '"') ADVANCE(262);
      if (lookahead == '(') ADVANCE(248);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '?') ADVANCE(321);
      if (lookahead != 0) ADVANCE(262);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == ' ') ADVANCE(236);
      if (lookahead == '"') ADVANCE(268);
      if (lookahead == '\'') ADVANCE(264);
      if (lookahead == '(') ADVANCE(250);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == '?') ADVANCE(322);
      if (lookahead == '`') ADVANCE(272);
      if (lookahead != 0) ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == ' ') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(264);
      if (lookahead == '(') ADVANCE(250);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == '?') ADVANCE(322);
      if (lookahead != 0) ADVANCE(264);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == ' ') ADVANCE(238);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '\'') ADVANCE(272);
      if (lookahead == '(') ADVANCE(252);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '?') ADVANCE(323);
      if (lookahead == '`') ADVANCE(266);
      if (lookahead != 0) ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == ' ') ADVANCE(238);
      if (lookahead == '(') ADVANCE(252);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '?') ADVANCE(323);
      if (lookahead == '`') ADVANCE(266);
      if (lookahead != 0) ADVANCE(266);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == ' ') ADVANCE(240);
      if (lookahead == '"') ADVANCE(268);
      if (lookahead == '\'') ADVANCE(268);
      if (lookahead == '(') ADVANCE(254);
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == '?') ADVANCE(324);
      if (lookahead == '`') ADVANCE(274);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == ' ') ADVANCE(240);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(268);
      if (lookahead == '(') ADVANCE(254);
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == '?') ADVANCE(324);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == ' ') ADVANCE(242);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '\'') ADVANCE(274);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(134);
      if (lookahead == '?') ADVANCE(325);
      if (lookahead == '`') ADVANCE(270);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == ' ') ADVANCE(242);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(270);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(134);
      if (lookahead == '?') ADVANCE(325);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == ' ') ADVANCE(244);
      if (lookahead == '"') ADVANCE(274);
      if (lookahead == '\'') ADVANCE(272);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '?') ADVANCE(326);
      if (lookahead == '`') ADVANCE(272);
      if (lookahead != 0) ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == ' ') ADVANCE(244);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(272);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '?') ADVANCE(326);
      if (lookahead != 0) ADVANCE(272);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == ' ') ADVANCE(246);
      if (lookahead == '"') ADVANCE(274);
      if (lookahead == '\'') ADVANCE(274);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '?') ADVANCE(327);
      if (lookahead == '`') ADVANCE(274);
      if (lookahead != 0) ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == ' ') ADVANCE(246);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(274);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '?') ADVANCE(327);
      if (lookahead != 0) ADVANCE(274);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(372);
      if (lookahead == '"') ADVANCE(276);
      if (lookahead == '\'') ADVANCE(278);
      if (lookahead == '(') ADVANCE(382);
      if (lookahead == ')') ADVANCE(1);
      if (lookahead == '?') ADVANCE(334);
      if (lookahead == '`') ADVANCE(270);
      if (lookahead != 0) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '"') ADVANCE(278);
      if (lookahead == '\'') ADVANCE(277);
      if (lookahead == '(') ADVANCE(383);
      if (lookahead == ')') ADVANCE(2);
      if (lookahead == '?') ADVANCE(335);
      if (lookahead == '`') ADVANCE(272);
      if (lookahead != 0) ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(374);
      if (lookahead == '"') ADVANCE(278);
      if (lookahead == '\'') ADVANCE(278);
      if (lookahead == '(') ADVANCE(384);
      if (lookahead == ')') ADVANCE(3);
      if (lookahead == '?') ADVANCE(336);
      if (lookahead == '`') ADVANCE(274);
      if (lookahead != 0) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(279);
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '?') ADVANCE(337);
      if (lookahead == ']') ADVANCE(234);
      if (lookahead == '`') ADVANCE(283);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(234);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(280);
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '\'') ADVANCE(280);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == '?') ADVANCE(338);
      if (lookahead == ']') ADVANCE(236);
      if (lookahead == '`') ADVANCE(284);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(236);
      if (lookahead != 0) ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(281);
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '\'') ADVANCE(284);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '?') ADVANCE(339);
      if (lookahead == ']') ADVANCE(238);
      if (lookahead == '`') ADVANCE(281);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(238);
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(282);
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == '?') ADVANCE(340);
      if (lookahead == ']') ADVANCE(240);
      if (lookahead == '`') ADVANCE(285);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(240);
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(283);
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '\'') ADVANCE(285);
      if (lookahead == ')') ADVANCE(134);
      if (lookahead == '?') ADVANCE(341);
      if (lookahead == ']') ADVANCE(242);
      if (lookahead == '`') ADVANCE(283);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(242);
      if (lookahead != 0) ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(284);
      if (lookahead == '"') ADVANCE(285);
      if (lookahead == '\'') ADVANCE(284);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '?') ADVANCE(342);
      if (lookahead == ']') ADVANCE(244);
      if (lookahead == '`') ADVANCE(284);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(244);
      if (lookahead != 0) ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(285);
      if (lookahead == '"') ADVANCE(285);
      if (lookahead == '\'') ADVANCE(285);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '?') ADVANCE(343);
      if (lookahead == ']') ADVANCE(246);
      if (lookahead == '`') ADVANCE(285);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(246);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(279);
      if (lookahead == '"') ADVANCE(286);
      if (lookahead == '\'') ADVANCE(289);
      if (lookahead == '(') ADVANCE(248);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '?') ADVANCE(344);
      if (lookahead == '[') ADVANCE(262);
      if (lookahead == ']') ADVANCE(262);
      if (lookahead == '`') ADVANCE(290);
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(280);
      if (lookahead == '"') ADVANCE(289);
      if (lookahead == '\'') ADVANCE(287);
      if (lookahead == '(') ADVANCE(250);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == '?') ADVANCE(345);
      if (lookahead == '[') ADVANCE(264);
      if (lookahead == ']') ADVANCE(264);
      if (lookahead == '`') ADVANCE(291);
      if (lookahead != 0) ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(281);
      if (lookahead == '"') ADVANCE(290);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == '(') ADVANCE(252);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '?') ADVANCE(346);
      if (lookahead == '[') ADVANCE(266);
      if (lookahead == ']') ADVANCE(266);
      if (lookahead == '`') ADVANCE(288);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(282);
      if (lookahead == '"') ADVANCE(289);
      if (lookahead == '\'') ADVANCE(289);
      if (lookahead == '(') ADVANCE(254);
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == '?') ADVANCE(347);
      if (lookahead == '[') ADVANCE(268);
      if (lookahead == ']') ADVANCE(268);
      if (lookahead == '`') ADVANCE(292);
      if (lookahead != 0) ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(283);
      if (lookahead == '"') ADVANCE(290);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(134);
      if (lookahead == '?') ADVANCE(348);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == ']') ADVANCE(270);
      if (lookahead == '`') ADVANCE(290);
      if (lookahead != 0) ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(284);
      if (lookahead == '"') ADVANCE(292);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '?') ADVANCE(349);
      if (lookahead == '[') ADVANCE(272);
      if (lookahead == ']') ADVANCE(272);
      if (lookahead == '`') ADVANCE(291);
      if (lookahead != 0) ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(285);
      if (lookahead == '"') ADVANCE(292);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '?') ADVANCE(350);
      if (lookahead == '[') ADVANCE(274);
      if (lookahead == ']') ADVANCE(274);
      if (lookahead == '`') ADVANCE(292);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '"') ADVANCE(293);
      if (lookahead == '\'') ADVANCE(296);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == ',') ADVANCE(293);
      if (lookahead == '?') ADVANCE(351);
      if (lookahead == '`') ADVANCE(297);
      if (lookahead == '}') ADVANCE(293);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(234);
      if (lookahead != 0) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(294);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == ',') ADVANCE(294);
      if (lookahead == '?') ADVANCE(352);
      if (lookahead == '`') ADVANCE(298);
      if (lookahead == '}') ADVANCE(294);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(236);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == '"') ADVANCE(297);
      if (lookahead == '\'') ADVANCE(298);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == ',') ADVANCE(295);
      if (lookahead == '?') ADVANCE(353);
      if (lookahead == '`') ADVANCE(295);
      if (lookahead == '}') ADVANCE(295);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(238);
      if (lookahead != 0) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(296);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '\'') ADVANCE(296);
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == ',') ADVANCE(296);
      if (lookahead == '?') ADVANCE(354);
      if (lookahead == '`') ADVANCE(299);
      if (lookahead == '}') ADVANCE(296);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(240);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(297);
      if (lookahead == '"') ADVANCE(297);
      if (lookahead == '\'') ADVANCE(299);
      if (lookahead == ')') ADVANCE(134);
      if (lookahead == ',') ADVANCE(297);
      if (lookahead == '?') ADVANCE(355);
      if (lookahead == '`') ADVANCE(297);
      if (lookahead == '}') ADVANCE(297);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(242);
      if (lookahead != 0) ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(298);
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '\'') ADVANCE(298);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == ',') ADVANCE(298);
      if (lookahead == '?') ADVANCE(356);
      if (lookahead == '`') ADVANCE(298);
      if (lookahead == '}') ADVANCE(298);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(244);
      if (lookahead != 0) ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(299);
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '\'') ADVANCE(299);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == ',') ADVANCE(299);
      if (lookahead == '?') ADVANCE(357);
      if (lookahead == '`') ADVANCE(299);
      if (lookahead == '}') ADVANCE(299);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(246);
      if (lookahead != 0) ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '(') ADVANCE(248);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == ',') ADVANCE(300);
      if (lookahead == '?') ADVANCE(358);
      if (lookahead == '`') ADVANCE(304);
      if (lookahead == '}') ADVANCE(300);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(262);
      if (lookahead != 0) ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(294);
      if (lookahead == '"') ADVANCE(303);
      if (lookahead == '\'') ADVANCE(301);
      if (lookahead == '(') ADVANCE(250);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == ',') ADVANCE(301);
      if (lookahead == '?') ADVANCE(359);
      if (lookahead == '`') ADVANCE(305);
      if (lookahead == '}') ADVANCE(301);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(264);
      if (lookahead != 0) ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == '"') ADVANCE(304);
      if (lookahead == '\'') ADVANCE(305);
      if (lookahead == '(') ADVANCE(252);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == ',') ADVANCE(302);
      if (lookahead == '?') ADVANCE(360);
      if (lookahead == '`') ADVANCE(302);
      if (lookahead == '}') ADVANCE(302);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(266);
      if (lookahead != 0) ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(296);
      if (lookahead == '"') ADVANCE(303);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '(') ADVANCE(254);
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == ',') ADVANCE(303);
      if (lookahead == '?') ADVANCE(361);
      if (lookahead == '`') ADVANCE(306);
      if (lookahead == '}') ADVANCE(303);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(268);
      if (lookahead != 0) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(297);
      if (lookahead == '"') ADVANCE(304);
      if (lookahead == '\'') ADVANCE(306);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(134);
      if (lookahead == ',') ADVANCE(304);
      if (lookahead == '?') ADVANCE(362);
      if (lookahead == '`') ADVANCE(304);
      if (lookahead == '}') ADVANCE(304);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(270);
      if (lookahead != 0) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(298);
      if (lookahead == '"') ADVANCE(306);
      if (lookahead == '\'') ADVANCE(305);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == ',') ADVANCE(305);
      if (lookahead == '?') ADVANCE(363);
      if (lookahead == '`') ADVANCE(305);
      if (lookahead == '}') ADVANCE(305);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(272);
      if (lookahead != 0) ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(299);
      if (lookahead == '"') ADVANCE(306);
      if (lookahead == '\'') ADVANCE(306);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == ',') ADVANCE(306);
      if (lookahead == '?') ADVANCE(364);
      if (lookahead == '`') ADVANCE(306);
      if (lookahead == '}') ADVANCE(306);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(274);
      if (lookahead != 0) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(440);
      if (lookahead == '"') ADVANCE(307);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(63);
      if (lookahead != 0) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(440);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(65);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(440);
      if (lookahead == '`') ADVANCE(309);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(92);
      if (lookahead != 0) ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(440);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(310);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(133);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(440);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(311);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(134);
      if (lookahead != 0) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(440);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(312);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(135);
      if (lookahead != 0) ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(440);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(313);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(137);
      if (lookahead != 0) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead != 0) ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '\'') ADVANCE(315);
      if (lookahead == ')') ADVANCE(466);
      if (lookahead != 0) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == ')') ADVANCE(475);
      if (lookahead == '`') ADVANCE(316);
      if (lookahead != 0) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(317);
      if (lookahead == ')') ADVANCE(476);
      if (lookahead != 0) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(318);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead != 0) ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(319);
      if (lookahead == ')') ADVANCE(478);
      if (lookahead != 0) ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(320);
      if (lookahead == ')') ADVANCE(479);
      if (lookahead != 0) ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == '"') ADVANCE(321);
      if (lookahead == '(') ADVANCE(314);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(63);
      if (lookahead != 0) ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == '\'') ADVANCE(322);
      if (lookahead == '(') ADVANCE(315);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(65);
      if (lookahead != 0) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == '(') ADVANCE(316);
      if (lookahead == '`') ADVANCE(323);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(92);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(324);
      if (lookahead == '(') ADVANCE(317);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(133);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(325);
      if (lookahead == '(') ADVANCE(318);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(134);
      if (lookahead != 0) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(326);
      if (lookahead == '(') ADVANCE(319);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(135);
      if (lookahead != 0) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(327);
      if (lookahead == '(') ADVANCE(320);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(137);
      if (lookahead != 0) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == '"') ADVANCE(328);
      if (lookahead == '`') ADVANCE(307);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(1);
      if (lookahead != 0) ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == '\'') ADVANCE(329);
      if (lookahead == '`') ADVANCE(308);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(2);
      if (lookahead != 0) ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(330);
      if (lookahead == '`') ADVANCE(310);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(3);
      if (lookahead != 0) ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(410);
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '"') ADVANCE(331);
      if (lookahead == ')') ADVANCE(442);
      if (lookahead == '`') ADVANCE(314);
      if (lookahead != 0) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(410);
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '\'') ADVANCE(332);
      if (lookahead == ')') ADVANCE(443);
      if (lookahead == '`') ADVANCE(315);
      if (lookahead != 0) ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(410);
      if (lookahead == ' ') ADVANCE(34);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(333);
      if (lookahead == ')') ADVANCE(444);
      if (lookahead == '`') ADVANCE(317);
      if (lookahead != 0) ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(433);
      if (lookahead == '"') ADVANCE(334);
      if (lookahead == '(') ADVANCE(331);
      if (lookahead == '`') ADVANCE(321);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(1);
      if (lookahead != 0) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(433);
      if (lookahead == '\'') ADVANCE(335);
      if (lookahead == '(') ADVANCE(332);
      if (lookahead == '`') ADVANCE(322);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(2);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(433);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(336);
      if (lookahead == '(') ADVANCE(333);
      if (lookahead == '`') ADVANCE(324);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(3);
      if (lookahead != 0) ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(407);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '"') ADVANCE(337);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == ']') ADVANCE(307);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(307);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(407);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(338);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == ']') ADVANCE(308);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(308);
      if (lookahead != 0) ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(407);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == ']') ADVANCE(309);
      if (lookahead == '`') ADVANCE(339);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(309);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(407);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(340);
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == ']') ADVANCE(310);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(310);
      if (lookahead != 0) ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(407);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(341);
      if (lookahead == ')') ADVANCE(134);
      if (lookahead == ']') ADVANCE(311);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(311);
      if (lookahead != 0) ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(407);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(342);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == ']') ADVANCE(312);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(312);
      if (lookahead != 0) ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(407);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(343);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == ']') ADVANCE(313);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(313);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(406);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == '(') ADVANCE(314);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '[') ADVANCE(321);
      if (lookahead == ']') ADVANCE(321);
      if (lookahead != 0) ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(406);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(345);
      if (lookahead == '(') ADVANCE(315);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == '[') ADVANCE(322);
      if (lookahead == ']') ADVANCE(322);
      if (lookahead != 0) ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(406);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '(') ADVANCE(316);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '[') ADVANCE(323);
      if (lookahead == ']') ADVANCE(323);
      if (lookahead == '`') ADVANCE(346);
      if (lookahead != 0) ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(406);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(347);
      if (lookahead == '(') ADVANCE(317);
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == '[') ADVANCE(324);
      if (lookahead == ']') ADVANCE(324);
      if (lookahead != 0) ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(406);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(348);
      if (lookahead == '(') ADVANCE(318);
      if (lookahead == ')') ADVANCE(134);
      if (lookahead == '[') ADVANCE(325);
      if (lookahead == ']') ADVANCE(325);
      if (lookahead != 0) ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(406);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(349);
      if (lookahead == '(') ADVANCE(319);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '[') ADVANCE(326);
      if (lookahead == ']') ADVANCE(326);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(406);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(350);
      if (lookahead == '(') ADVANCE(320);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '[') ADVANCE(327);
      if (lookahead == ']') ADVANCE(327);
      if (lookahead != 0) ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(409);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(351);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == ',') ADVANCE(351);
      if (lookahead == '}') ADVANCE(351);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(307);
      if (lookahead != 0) ADVANCE(351);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(409);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '\'') ADVANCE(352);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == ',') ADVANCE(352);
      if (lookahead == '}') ADVANCE(352);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(308);
      if (lookahead != 0) ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(409);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == ',') ADVANCE(353);
      if (lookahead == '`') ADVANCE(353);
      if (lookahead == '}') ADVANCE(353);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(309);
      if (lookahead != 0) ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(409);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(354);
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == ',') ADVANCE(354);
      if (lookahead == '}') ADVANCE(354);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(310);
      if (lookahead != 0) ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(409);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(355);
      if (lookahead == ')') ADVANCE(134);
      if (lookahead == ',') ADVANCE(355);
      if (lookahead == '}') ADVANCE(355);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(311);
      if (lookahead != 0) ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(409);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(356);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == ',') ADVANCE(356);
      if (lookahead == '}') ADVANCE(356);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(312);
      if (lookahead != 0) ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(409);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(357);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == ',') ADVANCE(357);
      if (lookahead == '}') ADVANCE(357);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(313);
      if (lookahead != 0) ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(408);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(358);
      if (lookahead == '(') ADVANCE(314);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == ',') ADVANCE(358);
      if (lookahead == '}') ADVANCE(358);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(321);
      if (lookahead != 0) ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(408);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '\'') ADVANCE(359);
      if (lookahead == '(') ADVANCE(315);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == ',') ADVANCE(359);
      if (lookahead == '}') ADVANCE(359);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(322);
      if (lookahead != 0) ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(408);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '(') ADVANCE(316);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == ',') ADVANCE(360);
      if (lookahead == '`') ADVANCE(360);
      if (lookahead == '}') ADVANCE(360);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(323);
      if (lookahead != 0) ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(408);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(361);
      if (lookahead == '(') ADVANCE(317);
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == ',') ADVANCE(361);
      if (lookahead == '}') ADVANCE(361);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(324);
      if (lookahead != 0) ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(408);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(362);
      if (lookahead == '(') ADVANCE(318);
      if (lookahead == ')') ADVANCE(134);
      if (lookahead == ',') ADVANCE(362);
      if (lookahead == '}') ADVANCE(362);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(325);
      if (lookahead != 0) ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(408);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(363);
      if (lookahead == '(') ADVANCE(319);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == ',') ADVANCE(363);
      if (lookahead == '}') ADVANCE(363);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(326);
      if (lookahead != 0) ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(408);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(364);
      if (lookahead == '(') ADVANCE(320);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == ',') ADVANCE(364);
      if (lookahead == '}') ADVANCE(364);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(327);
      if (lookahead != 0) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(411);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '"') ADVANCE(365);
      if (lookahead == '(') ADVANCE(314);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead != 0) ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(411);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '\'') ADVANCE(366);
      if (lookahead == '(') ADVANCE(315);
      if (lookahead == ')') ADVANCE(466);
      if (lookahead != 0) ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(411);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '(') ADVANCE(316);
      if (lookahead == ')') ADVANCE(475);
      if (lookahead == '`') ADVANCE(367);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(411);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(368);
      if (lookahead == '(') ADVANCE(317);
      if (lookahead == ')') ADVANCE(476);
      if (lookahead != 0) ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(411);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(369);
      if (lookahead == '(') ADVANCE(318);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead != 0) ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(411);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(370);
      if (lookahead == '(') ADVANCE(319);
      if (lookahead == ')') ADVANCE(478);
      if (lookahead != 0) ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(411);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(371);
      if (lookahead == '(') ADVANCE(320);
      if (lookahead == ')') ADVANCE(479);
      if (lookahead != 0) ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(372);
      if (lookahead == '"') ADVANCE(372);
      if (lookahead == '\'') ADVANCE(374);
      if (lookahead == ')') ADVANCE(1);
      if (lookahead == '?') ADVANCE(328);
      if (lookahead == '`') ADVANCE(242);
      if (lookahead != 0) ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '"') ADVANCE(374);
      if (lookahead == '\'') ADVANCE(373);
      if (lookahead == ')') ADVANCE(2);
      if (lookahead == '?') ADVANCE(329);
      if (lookahead == '`') ADVANCE(244);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(374);
      if (lookahead == '"') ADVANCE(374);
      if (lookahead == '\'') ADVANCE(374);
      if (lookahead == ')') ADVANCE(3);
      if (lookahead == '?') ADVANCE(330);
      if (lookahead == '`') ADVANCE(246);
      if (lookahead != 0) ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(392);
      if (lookahead == '"') ADVANCE(375);
      if (lookahead == '\'') ADVANCE(378);
      if (lookahead == '(') ADVANCE(399);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == '?') ADVANCE(263);
      if (lookahead == '`') ADVANCE(379);
      if (lookahead != 0) ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(393);
      if (lookahead == '"') ADVANCE(378);
      if (lookahead == '\'') ADVANCE(376);
      if (lookahead == '(') ADVANCE(400);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '?') ADVANCE(265);
      if (lookahead == '`') ADVANCE(380);
      if (lookahead != 0) ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(394);
      if (lookahead == '"') ADVANCE(379);
      if (lookahead == '\'') ADVANCE(380);
      if (lookahead == '(') ADVANCE(401);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '`') ADVANCE(377);
      if (lookahead != 0) ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(395);
      if (lookahead == '"') ADVANCE(378);
      if (lookahead == '\'') ADVANCE(378);
      if (lookahead == '(') ADVANCE(402);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '?') ADVANCE(269);
      if (lookahead == '`') ADVANCE(381);
      if (lookahead != 0) ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(396);
      if (lookahead == '"') ADVANCE(379);
      if (lookahead == '\'') ADVANCE(381);
      if (lookahead == '(') ADVANCE(403);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '?') ADVANCE(271);
      if (lookahead == '`') ADVANCE(379);
      if (lookahead != 0) ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(397);
      if (lookahead == '"') ADVANCE(381);
      if (lookahead == '\'') ADVANCE(380);
      if (lookahead == '(') ADVANCE(404);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '?') ADVANCE(273);
      if (lookahead == '`') ADVANCE(380);
      if (lookahead != 0) ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(398);
      if (lookahead == '"') ADVANCE(381);
      if (lookahead == '\'') ADVANCE(381);
      if (lookahead == '(') ADVANCE(405);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '?') ADVANCE(275);
      if (lookahead == '`') ADVANCE(381);
      if (lookahead != 0) ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(382);
      if (lookahead == '"') ADVANCE(382);
      if (lookahead == '\'') ADVANCE(384);
      if (lookahead == ')') ADVANCE(442);
      if (lookahead == '?') ADVANCE(331);
      if (lookahead == '`') ADVANCE(256);
      if (lookahead != 0) ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(383);
      if (lookahead == '"') ADVANCE(384);
      if (lookahead == '\'') ADVANCE(383);
      if (lookahead == ')') ADVANCE(443);
      if (lookahead == '?') ADVANCE(332);
      if (lookahead == '`') ADVANCE(258);
      if (lookahead != 0) ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(384);
      if (lookahead == '"') ADVANCE(384);
      if (lookahead == '\'') ADVANCE(384);
      if (lookahead == ')') ADVANCE(444);
      if (lookahead == '?') ADVANCE(333);
      if (lookahead == '`') ADVANCE(260);
      if (lookahead != 0) ADVANCE(384);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(248);
      if (lookahead == '"') ADVANCE(385);
      if (lookahead == '\'') ADVANCE(388);
      if (lookahead == '(') ADVANCE(248);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead == '?') ADVANCE(365);
      if (lookahead == '`') ADVANCE(389);
      if (lookahead != 0) ADVANCE(385);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(250);
      if (lookahead == '"') ADVANCE(388);
      if (lookahead == '\'') ADVANCE(386);
      if (lookahead == '(') ADVANCE(250);
      if (lookahead == ')') ADVANCE(466);
      if (lookahead == '?') ADVANCE(366);
      if (lookahead == '`') ADVANCE(390);
      if (lookahead != 0) ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(252);
      if (lookahead == '"') ADVANCE(389);
      if (lookahead == '\'') ADVANCE(390);
      if (lookahead == '(') ADVANCE(252);
      if (lookahead == ')') ADVANCE(475);
      if (lookahead == '?') ADVANCE(367);
      if (lookahead == '`') ADVANCE(387);
      if (lookahead != 0) ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(254);
      if (lookahead == '"') ADVANCE(388);
      if (lookahead == '\'') ADVANCE(388);
      if (lookahead == '(') ADVANCE(254);
      if (lookahead == ')') ADVANCE(476);
      if (lookahead == '?') ADVANCE(368);
      if (lookahead == '`') ADVANCE(391);
      if (lookahead != 0) ADVANCE(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(256);
      if (lookahead == '"') ADVANCE(389);
      if (lookahead == '\'') ADVANCE(391);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead == '?') ADVANCE(369);
      if (lookahead == '`') ADVANCE(389);
      if (lookahead != 0) ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(258);
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '\'') ADVANCE(390);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == ')') ADVANCE(478);
      if (lookahead == '?') ADVANCE(370);
      if (lookahead == '`') ADVANCE(390);
      if (lookahead != 0) ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(260);
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '\'') ADVANCE(391);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == ')') ADVANCE(479);
      if (lookahead == '?') ADVANCE(371);
      if (lookahead == '`') ADVANCE(391);
      if (lookahead != 0) ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(392);
      if (lookahead == '"') ADVANCE(392);
      if (lookahead == '\'') ADVANCE(395);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == '?') ADVANCE(235);
      if (lookahead == '`') ADVANCE(396);
      if (lookahead != 0) ADVANCE(392);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(393);
      if (lookahead == '"') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(393);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '?') ADVANCE(237);
      if (lookahead == '`') ADVANCE(397);
      if (lookahead != 0) ADVANCE(393);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(394);
      if (lookahead == '"') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(397);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '?') ADVANCE(239);
      if (lookahead == '`') ADVANCE(394);
      if (lookahead != 0) ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(395);
      if (lookahead == '"') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(395);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '?') ADVANCE(241);
      if (lookahead == '`') ADVANCE(398);
      if (lookahead != 0) ADVANCE(395);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(396);
      if (lookahead == '"') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '?') ADVANCE(243);
      if (lookahead == '`') ADVANCE(396);
      if (lookahead != 0) ADVANCE(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(397);
      if (lookahead == '"') ADVANCE(398);
      if (lookahead == '\'') ADVANCE(397);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '?') ADVANCE(245);
      if (lookahead == '`') ADVANCE(397);
      if (lookahead != 0) ADVANCE(397);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(398);
      if (lookahead == '"') ADVANCE(398);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '?') ADVANCE(247);
      if (lookahead == '`') ADVANCE(398);
      if (lookahead != 0) ADVANCE(398);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(399);
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(402);
      if (lookahead == ')') ADVANCE(445);
      if (lookahead == '?') ADVANCE(249);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead != 0) ADVANCE(399);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(400);
      if (lookahead == '"') ADVANCE(402);
      if (lookahead == '\'') ADVANCE(400);
      if (lookahead == ')') ADVANCE(446);
      if (lookahead == '?') ADVANCE(251);
      if (lookahead == '`') ADVANCE(404);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(401);
      if (lookahead == '"') ADVANCE(403);
      if (lookahead == '\'') ADVANCE(404);
      if (lookahead == ')') ADVANCE(447);
      if (lookahead == '?') ADVANCE(253);
      if (lookahead == '`') ADVANCE(401);
      if (lookahead != 0) ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(402);
      if (lookahead == '"') ADVANCE(402);
      if (lookahead == '\'') ADVANCE(402);
      if (lookahead == ')') ADVANCE(448);
      if (lookahead == '?') ADVANCE(255);
      if (lookahead == '`') ADVANCE(405);
      if (lookahead != 0) ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(403);
      if (lookahead == '"') ADVANCE(403);
      if (lookahead == '\'') ADVANCE(405);
      if (lookahead == ')') ADVANCE(449);
      if (lookahead == '?') ADVANCE(257);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead != 0) ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(404);
      if (lookahead == '"') ADVANCE(405);
      if (lookahead == '\'') ADVANCE(404);
      if (lookahead == ')') ADVANCE(450);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == '`') ADVANCE(404);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(405);
      if (lookahead == '"') ADVANCE(405);
      if (lookahead == '\'') ADVANCE(405);
      if (lookahead == ')') ADVANCE(451);
      if (lookahead == '?') ADVANCE(261);
      if (lookahead == '`') ADVANCE(405);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead == '(') ADVANCE(412);
      if (lookahead == '[') ADVANCE(432);
      if (lookahead == ']') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(406);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead == ']') ADVANCE(440);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == '(') ADVANCE(412);
      if (lookahead == ',') ADVANCE(408);
      if (lookahead == '}') ADVANCE(408);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(408);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == ',') ADVANCE(409);
      if (lookahead == '}') ADVANCE(409);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(69);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead != 0) ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == '(') ADVANCE(412);
      if (lookahead == ')') ADVANCE(441);
      if (lookahead != 0) ADVANCE(411);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == ')') ADVANCE(441);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(413);
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == '?') ADVANCE(440);
      if (lookahead == '`') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(413);
      if (lookahead == '"') ADVANCE(262);
      if (lookahead == '\'') ADVANCE(264);
      if (lookahead == '(') ADVANCE(417);
      if (lookahead == '?') ADVANCE(432);
      if (lookahead == '`') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(413);
      if (lookahead == '(') ADVANCE(417);
      if (lookahead == '?') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(414);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(413);
      if (lookahead == '?') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(413);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(417);
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '\'') ADVANCE(250);
      if (lookahead == ')') ADVANCE(441);
      if (lookahead == '?') ADVANCE(412);
      if (lookahead == '`') ADVANCE(252);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(417);
      if (lookahead == '"') ADVANCE(385);
      if (lookahead == '\'') ADVANCE(386);
      if (lookahead == '(') ADVANCE(417);
      if (lookahead == ')') ADVANCE(441);
      if (lookahead == '?') ADVANCE(411);
      if (lookahead == '`') ADVANCE(387);
      if (lookahead != 0) ADVANCE(418);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(417);
      if (lookahead == ')') ADVANCE(441);
      if (lookahead == '?') ADVANCE(412);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(420);
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '\'') ADVANCE(280);
      if (lookahead == '?') ADVANCE(407);
      if (lookahead == ']') ADVANCE(413);
      if (lookahead == '`') ADVANCE(281);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(420);
      if (lookahead == '"') ADVANCE(286);
      if (lookahead == '\'') ADVANCE(287);
      if (lookahead == '(') ADVANCE(417);
      if (lookahead == '?') ADVANCE(406);
      if (lookahead == '[') ADVANCE(414);
      if (lookahead == ']') ADVANCE(414);
      if (lookahead == '`') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(422);
      if (lookahead == '"') ADVANCE(293);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == ',') ADVANCE(422);
      if (lookahead == '?') ADVANCE(409);
      if (lookahead == '`') ADVANCE(295);
      if (lookahead == '}') ADVANCE(422);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(422);
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '\'') ADVANCE(301);
      if (lookahead == '(') ADVANCE(417);
      if (lookahead == ',') ADVANCE(423);
      if (lookahead == '?') ADVANCE(408);
      if (lookahead == '`') ADVANCE(302);
      if (lookahead == '}') ADVANCE(423);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(425);
      if (lookahead == '"') ADVANCE(276);
      if (lookahead == '\'') ADVANCE(277);
      if (lookahead == '(') ADVANCE(426);
      if (lookahead == ')') ADVANCE(90);
      if (lookahead == '?') ADVANCE(433);
      if (lookahead == '`') ADVANCE(266);
      if (lookahead != 0) ADVANCE(424);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(425);
      if (lookahead == '"') ADVANCE(372);
      if (lookahead == '\'') ADVANCE(373);
      if (lookahead == ')') ADVANCE(90);
      if (lookahead == '?') ADVANCE(434);
      if (lookahead == '`') ADVANCE(238);
      if (lookahead != 0) ADVANCE(425);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(426);
      if (lookahead == '"') ADVANCE(382);
      if (lookahead == '\'') ADVANCE(383);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead == '?') ADVANCE(410);
      if (lookahead == '`') ADVANCE(252);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(428);
      if (lookahead == '"') ADVANCE(375);
      if (lookahead == '\'') ADVANCE(376);
      if (lookahead == '(') ADVANCE(429);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '?') ADVANCE(415);
      if (lookahead == '`') ADVANCE(377);
      if (lookahead != 0) ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(428);
      if (lookahead == '"') ADVANCE(392);
      if (lookahead == '\'') ADVANCE(393);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '?') ADVANCE(416);
      if (lookahead == '`') ADVANCE(394);
      if (lookahead != 0) ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(429);
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(400);
      if (lookahead == ')') ADVANCE(473);
      if (lookahead == '?') ADVANCE(419);
      if (lookahead == '`') ADVANCE(401);
      if (lookahead != 0) ADVANCE(429);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '(') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(432);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '(') ADVANCE(410);
      if (lookahead == '`') ADVANCE(432);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(90);
      if (lookahead != 0) ADVANCE(433);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '`') ADVANCE(440);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(90);
      if (lookahead != 0) ADVANCE(434);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '`') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(133);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(135);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(440);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '`') ADVANCE(493);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\'') ADVANCE(201);
      if (lookahead == '`') ADVANCE(494);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(202);
      if (lookahead == '`') ADVANCE(498);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"') ADVANCE(217);
      if (lookahead == '?') ADVANCE(42);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\'') ADVANCE(218);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead == '`') ADVANCE(219);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(220);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(221);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(222);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(223);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == '[') ADVANCE(471);
      if (lookahead == ']') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(452);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ',') ADVANCE(453);
      if (lookahead == '}') ADVANCE(453);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(453);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(70);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(473);
      if (lookahead == '?') ADVANCE(459);
      if (lookahead != 0) ADVANCE(454);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(86);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '?') ADVANCE(460);
      if (lookahead == '[') ADVANCE(469);
      if (lookahead == ']') ADVANCE(469);
      if (lookahead != 0) ADVANCE(455);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == ',') ADVANCE(456);
      if (lookahead == '?') ADVANCE(461);
      if (lookahead == '}') ADVANCE(456);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(469);
      if (lookahead != 0) ADVANCE(456);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(441);
      if (lookahead != 0) ADVANCE(457);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(413);
      if (lookahead == '(') ADVANCE(417);
      if (lookahead == '?') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(414);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(417);
      if (lookahead == '(') ADVANCE(417);
      if (lookahead == ')') ADVANCE(441);
      if (lookahead == '?') ADVANCE(457);
      if (lookahead != 0) ADVANCE(418);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(420);
      if (lookahead == '(') ADVANCE(417);
      if (lookahead == '?') ADVANCE(452);
      if (lookahead == '[') ADVANCE(414);
      if (lookahead == ']') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(421);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(422);
      if (lookahead == '(') ADVANCE(417);
      if (lookahead == ',') ADVANCE(423);
      if (lookahead == '?') ADVANCE(453);
      if (lookahead == '}') ADVANCE(423);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(423);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '"') ADVANCE(604);
      if (lookahead == '\'') ADVANCE(600);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '?') ADVANCE(464);
      if (lookahead == '[') ADVANCE(455);
      if (lookahead == '`') ADVANCE(470);
      if (lookahead == '{') ADVANCE(456);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(462);
      if (lookahead != 0) ADVANCE(469);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(425);
      if (lookahead == '(') ADVANCE(426);
      if (lookahead == ')') ADVANCE(90);
      if (lookahead == '?') ADVANCE(467);
      if (lookahead == '`') ADVANCE(414);
      if (lookahead != 0) ADVANCE(424);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(428);
      if (lookahead == '(') ADVANCE(429);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '?') ADVANCE(471);
      if (lookahead != 0) ADVANCE(427);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == '`') ADVANCE(471);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(90);
      if (lookahead != 0) ADVANCE(467);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '?') ADVANCE(471);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(85);
      if (lookahead != 0) ADVANCE(469);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '?') ADVANCE(458);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(85);
      if (lookahead != 0) ADVANCE(469);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == '?') ADVANCE(463);
      if (lookahead == '`') ADVANCE(469);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(84);
      if (lookahead != 0) ADVANCE(470);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(471);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '?') ADVANCE(91);
      if (lookahead == '`') ADVANCE(497);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '?') ADVANCE(143);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '`') ADVANCE(489);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '`') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(133);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(135);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"') ADVANCE(210);
      if (lookahead == ',') ADVANCE(11);
      if (lookahead == '}') ADVANCE(480);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(63);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(211);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(481);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(65);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '`') ADVANCE(212);
      if (lookahead == '}') ADVANCE(482);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(92);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(213);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '}') ADVANCE(483);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(133);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(214);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(484);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(134);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(215);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(485);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(135);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(216);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(486);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(137);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == ',') ADVANCE(55);
      if (lookahead == '}') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(75);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '?') ADVANCE(77);
      if (lookahead == '}') ADVANCE(488);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(85);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"') ADVANCE(227);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == ')') ADVANCE(466);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(230);
      if (lookahead == ')') ADVANCE(476);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '"') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == ')') ADVANCE(473);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == ')') ADVANCE(441);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '?') ADVANCE(143);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(133);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '?') ADVANCE(143);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '`') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(133);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(135);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__attribute_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(508);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(562);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(579);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(566);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(580);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(572);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(574);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(576);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(578);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(538);
      if (lookahead == 'o') ADVANCE(517);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(551);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(568);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(539);
      if (lookahead == 'o') ADVANCE(518);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(552);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(569);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(571);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(161);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(162);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(513);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(515);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(163);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(530);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(527);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(575);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(577);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(528);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(531);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(535);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(565);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(570);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(573);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(181);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(545);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(546);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(547);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(517);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(518);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(519);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(522);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(525);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(534);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(520);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(168);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(169);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(521);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(523);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(170);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(563);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(564);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(524);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(567);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(532);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(533);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(581);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(582);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(187);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(583);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(543);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(544);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(559);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(560);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(561);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(590);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(588);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(591);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(589);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(592);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(593);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token1);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token2);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(598);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '?') ADVANCE(458);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(85);
      if (lookahead != 0) ADVANCE(469);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(602);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(602);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '?') ADVANCE(458);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(85);
      if (lookahead != 0) ADVANCE(469);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(606);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(606);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(608);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(608);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(609);
      if (lookahead == ' ') ADVANCE(609);
      if (lookahead == '!') ADVANCE(612);
      if (lookahead == '#') ADVANCE(617);
      if (lookahead == '-') ADVANCE(636);
      if (lookahead == '.') ADVANCE(616);
      if (lookahead == '/') ADVANCE(611);
      if (lookahead == '=') ADVANCE(193);
      if (lookahead == 'c') ADVANCE(516);
      if (lookahead == 'd') ADVANCE(558);
      if (lookahead == 'e') ADVANCE(550);
      if (lookahead == 'i') ADVANCE(540);
      if (lookahead == 'u') ADVANCE(555);
      if (lookahead == '|') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      if (lookahead != 0) ADVANCE(618);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(610);
      if (lookahead == ' ') ADVANCE(610);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(610);
      if (lookahead != 0) ADVANCE(618);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '/') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == 'i') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(616);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(592);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__delimited_javascript);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(622);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__delimited_javascript);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(622);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(626);
      if (lookahead == '#') ADVANCE(632);
      if (lookahead == '-') ADVANCE(635);
      if (lookahead == '.') ADVANCE(631);
      if (lookahead == '/') ADVANCE(625);
      if (lookahead == '=') ADVANCE(192);
      if (lookahead == 'c') ADVANCE(514);
      if (lookahead == 'd') ADVANCE(529);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == 'i') ADVANCE(537);
      if (lookahead == 'u') ADVANCE(554);
      if (lookahead == 'w') ADVANCE(541);
      if (lookahead == '|') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(626);
      if (lookahead == '#') ADVANCE(632);
      if (lookahead == '-') ADVANCE(635);
      if (lookahead == '.') ADVANCE(631);
      if (lookahead == '/') ADVANCE(625);
      if (lookahead == '=') ADVANCE(192);
      if (lookahead == 'c') ADVANCE(514);
      if (lookahead == 'd') ADVANCE(557);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == 'i') ADVANCE(537);
      if (lookahead == 'u') ADVANCE(554);
      if (lookahead == '|') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '/') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '=') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'f') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'i') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(631);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(591);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(618);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_unbuffered_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(637);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 148},
  [2] = {.lex_state = 148},
  [3] = {.lex_state = 148},
  [4] = {.lex_state = 147, .external_lex_state = 2},
  [5] = {.lex_state = 147, .external_lex_state = 2},
  [6] = {.lex_state = 147, .external_lex_state = 2},
  [7] = {.lex_state = 147, .external_lex_state = 2},
  [8] = {.lex_state = 147, .external_lex_state = 3},
  [9] = {.lex_state = 144, .external_lex_state = 2},
  [10] = {.lex_state = 147, .external_lex_state = 2},
  [11] = {.lex_state = 147, .external_lex_state = 2},
  [12] = {.lex_state = 148, .external_lex_state = 2},
  [13] = {.lex_state = 147},
  [14] = {.lex_state = 147},
  [15] = {.lex_state = 144, .external_lex_state = 2},
  [16] = {.lex_state = 148, .external_lex_state = 2},
  [17] = {.lex_state = 148, .external_lex_state = 2},
  [18] = {.lex_state = 147, .external_lex_state = 4},
  [19] = {.lex_state = 147, .external_lex_state = 4},
  [20] = {.lex_state = 147, .external_lex_state = 4},
  [21] = {.lex_state = 147, .external_lex_state = 2},
  [22] = {.lex_state = 147, .external_lex_state = 4},
  [23] = {.lex_state = 147, .external_lex_state = 3},
  [24] = {.lex_state = 147, .external_lex_state = 4},
  [25] = {.lex_state = 147, .external_lex_state = 4},
  [26] = {.lex_state = 144, .external_lex_state = 2},
  [27] = {.lex_state = 147, .external_lex_state = 4},
  [28] = {.lex_state = 147, .external_lex_state = 4},
  [29] = {.lex_state = 146, .external_lex_state = 2},
  [30] = {.lex_state = 148, .external_lex_state = 4},
  [31] = {.lex_state = 148, .external_lex_state = 4},
  [32] = {.lex_state = 148, .external_lex_state = 4},
  [33] = {.lex_state = 145, .external_lex_state = 2},
  [34] = {.lex_state = 147, .external_lex_state = 2},
  [35] = {.lex_state = 147, .external_lex_state = 2},
  [36] = {.lex_state = 146, .external_lex_state = 2},
  [37] = {.lex_state = 147, .external_lex_state = 2},
  [38] = {.lex_state = 147, .external_lex_state = 2},
  [39] = {.lex_state = 147, .external_lex_state = 2},
  [40] = {.lex_state = 147, .external_lex_state = 2},
  [41] = {.lex_state = 147, .external_lex_state = 2},
  [42] = {.lex_state = 145, .external_lex_state = 2},
  [43] = {.lex_state = 147, .external_lex_state = 2},
  [44] = {.lex_state = 146, .external_lex_state = 2},
  [45] = {.lex_state = 147, .external_lex_state = 2},
  [46] = {.lex_state = 146, .external_lex_state = 2},
  [47] = {.lex_state = 147, .external_lex_state = 2},
  [48] = {.lex_state = 147, .external_lex_state = 2},
  [49] = {.lex_state = 148, .external_lex_state = 4},
  [50] = {.lex_state = 147, .external_lex_state = 2},
  [51] = {.lex_state = 147, .external_lex_state = 2},
  [52] = {.lex_state = 146, .external_lex_state = 2},
  [53] = {.lex_state = 148, .external_lex_state = 4},
  [54] = {.lex_state = 147, .external_lex_state = 2},
  [55] = {.lex_state = 147, .external_lex_state = 2},
  [56] = {.lex_state = 147, .external_lex_state = 2},
  [57] = {.lex_state = 147, .external_lex_state = 2},
  [58] = {.lex_state = 147, .external_lex_state = 2},
  [59] = {.lex_state = 147, .external_lex_state = 2},
  [60] = {.lex_state = 147, .external_lex_state = 2},
  [61] = {.lex_state = 148, .external_lex_state = 4},
  [62] = {.lex_state = 147, .external_lex_state = 2},
  [63] = {.lex_state = 147, .external_lex_state = 2},
  [64] = {.lex_state = 147, .external_lex_state = 2},
  [65] = {.lex_state = 147, .external_lex_state = 2},
  [66] = {.lex_state = 148, .external_lex_state = 5},
  [67] = {.lex_state = 148, .external_lex_state = 4},
  [68] = {.lex_state = 148},
  [69] = {.lex_state = 148},
  [70] = {.lex_state = 148, .external_lex_state = 5},
  [71] = {.lex_state = 145, .external_lex_state = 2},
  [72] = {.lex_state = 148, .external_lex_state = 5},
  [73] = {.lex_state = 147},
  [74] = {.lex_state = 146, .external_lex_state = 2},
  [75] = {.lex_state = 148, .external_lex_state = 5},
  [76] = {.lex_state = 148, .external_lex_state = 5},
  [77] = {.lex_state = 147},
  [78] = {.lex_state = 148},
  [79] = {.lex_state = 148, .external_lex_state = 5},
  [80] = {.lex_state = 148, .external_lex_state = 2},
  [81] = {.lex_state = 148, .external_lex_state = 2},
  [82] = {.lex_state = 148, .external_lex_state = 2},
  [83] = {.lex_state = 148, .external_lex_state = 2},
  [84] = {.lex_state = 148, .external_lex_state = 5},
  [85] = {.lex_state = 148, .external_lex_state = 2},
  [86] = {.lex_state = 148, .external_lex_state = 2},
  [87] = {.lex_state = 148, .external_lex_state = 5},
  [88] = {.lex_state = 148, .external_lex_state = 5},
  [89] = {.lex_state = 148, .external_lex_state = 2},
  [90] = {.lex_state = 148, .external_lex_state = 2},
  [91] = {.lex_state = 148, .external_lex_state = 2},
  [92] = {.lex_state = 148, .external_lex_state = 2},
  [93] = {.lex_state = 148, .external_lex_state = 2},
  [94] = {.lex_state = 148, .external_lex_state = 2},
  [95] = {.lex_state = 148, .external_lex_state = 2},
  [96] = {.lex_state = 148, .external_lex_state = 2},
  [97] = {.lex_state = 148, .external_lex_state = 2},
  [98] = {.lex_state = 148, .external_lex_state = 2},
  [99] = {.lex_state = 148, .external_lex_state = 2},
  [100] = {.lex_state = 148, .external_lex_state = 2},
  [101] = {.lex_state = 148, .external_lex_state = 2},
  [102] = {.lex_state = 148},
  [103] = {.lex_state = 148},
  [104] = {.lex_state = 148},
  [105] = {.lex_state = 148},
  [106] = {.lex_state = 148},
  [107] = {.lex_state = 148},
  [108] = {.lex_state = 148},
  [109] = {.lex_state = 148},
  [110] = {.lex_state = 148},
  [111] = {.lex_state = 148},
  [112] = {.lex_state = 148},
  [113] = {.lex_state = 148},
  [114] = {.lex_state = 148},
  [115] = {.lex_state = 148},
  [116] = {.lex_state = 148},
  [117] = {.lex_state = 148},
  [118] = {.lex_state = 148},
  [119] = {.lex_state = 148},
  [120] = {.lex_state = 148},
  [121] = {.lex_state = 148},
  [122] = {.lex_state = 148},
  [123] = {.lex_state = 148},
  [124] = {.lex_state = 148},
  [125] = {.lex_state = 53, .external_lex_state = 6},
  [126] = {.lex_state = 53, .external_lex_state = 6},
  [127] = {.lex_state = 53, .external_lex_state = 6},
  [128] = {.lex_state = 53, .external_lex_state = 6},
  [129] = {.lex_state = 53, .external_lex_state = 6},
  [130] = {.lex_state = 53, .external_lex_state = 6},
  [131] = {.lex_state = 53, .external_lex_state = 6},
  [132] = {.lex_state = 53, .external_lex_state = 6},
  [133] = {.lex_state = 60},
  [134] = {.lex_state = 60},
  [135] = {.lex_state = 60},
  [136] = {.lex_state = 60},
  [137] = {.lex_state = 60},
  [138] = {.lex_state = 60},
  [139] = {.lex_state = 60},
  [140] = {.lex_state = 60},
  [141] = {.lex_state = 54},
  [142] = {.lex_state = 54},
  [143] = {.lex_state = 60},
  [144] = {.lex_state = 60},
  [145] = {.lex_state = 60},
  [146] = {.lex_state = 60},
  [147] = {.lex_state = 66},
  [148] = {.lex_state = 66},
  [149] = {.lex_state = 66},
  [150] = {.lex_state = 53, .external_lex_state = 6},
  [151] = {.lex_state = 54, .external_lex_state = 6},
  [152] = {.lex_state = 54, .external_lex_state = 6},
  [153] = {.lex_state = 54, .external_lex_state = 6},
  [154] = {.lex_state = 54, .external_lex_state = 6},
  [155] = {.lex_state = 54, .external_lex_state = 6},
  [156] = {.lex_state = 54, .external_lex_state = 6},
  [157] = {.lex_state = 54, .external_lex_state = 6},
  [158] = {.lex_state = 60, .external_lex_state = 2},
  [159] = {.lex_state = 54, .external_lex_state = 6},
  [160] = {.lex_state = 60, .external_lex_state = 2},
  [161] = {.lex_state = 60},
  [162] = {.lex_state = 60},
  [163] = {.lex_state = 61},
  [164] = {.lex_state = 60},
  [165] = {.lex_state = 60},
  [166] = {.lex_state = 60, .external_lex_state = 4},
  [167] = {.lex_state = 60, .external_lex_state = 4},
  [168] = {.lex_state = 60, .external_lex_state = 4},
  [169] = {.lex_state = 60, .external_lex_state = 4},
  [170] = {.lex_state = 60, .external_lex_state = 4},
  [171] = {.lex_state = 60, .external_lex_state = 4},
  [172] = {.lex_state = 54},
  [173] = {.lex_state = 60, .external_lex_state = 2},
  [174] = {.lex_state = 60, .external_lex_state = 2},
  [175] = {.lex_state = 60, .external_lex_state = 4},
  [176] = {.lex_state = 60, .external_lex_state = 2},
  [177] = {.lex_state = 60, .external_lex_state = 2},
  [178] = {.lex_state = 54, .external_lex_state = 6},
  [179] = {.lex_state = 60, .external_lex_state = 2},
  [180] = {.lex_state = 54, .external_lex_state = 6},
  [181] = {.lex_state = 54, .external_lex_state = 6},
  [182] = {.lex_state = 66},
  [183] = {.lex_state = 60, .external_lex_state = 2},
  [184] = {.lex_state = 60},
  [185] = {.lex_state = 60},
  [186] = {.lex_state = 60},
  [187] = {.lex_state = 49, .external_lex_state = 2},
  [188] = {.lex_state = 60},
  [189] = {.lex_state = 49, .external_lex_state = 2},
  [190] = {.lex_state = 49, .external_lex_state = 2},
  [191] = {.lex_state = 60},
  [192] = {.lex_state = 60},
  [193] = {.lex_state = 49, .external_lex_state = 2},
  [194] = {.lex_state = 60, .external_lex_state = 2},
  [195] = {.lex_state = 60, .external_lex_state = 2},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 60, .external_lex_state = 2},
  [198] = {.lex_state = 60, .external_lex_state = 2},
  [199] = {.lex_state = 60, .external_lex_state = 2},
  [200] = {.lex_state = 60, .external_lex_state = 2},
  [201] = {.lex_state = 60, .external_lex_state = 2},
  [202] = {.lex_state = 60, .external_lex_state = 2},
  [203] = {.lex_state = 60, .external_lex_state = 2},
  [204] = {.lex_state = 54},
  [205] = {.lex_state = 49, .external_lex_state = 2},
  [206] = {.lex_state = 60, .external_lex_state = 2},
  [207] = {.lex_state = 60, .external_lex_state = 2},
  [208] = {.lex_state = 60, .external_lex_state = 2},
  [209] = {.lex_state = 60, .external_lex_state = 2},
  [210] = {.lex_state = 60, .external_lex_state = 2},
  [211] = {.lex_state = 54},
  [212] = {.lex_state = 60, .external_lex_state = 2},
  [213] = {.lex_state = 60, .external_lex_state = 2},
  [214] = {.lex_state = 60},
  [215] = {.lex_state = 49, .external_lex_state = 6},
  [216] = {.lex_state = 49, .external_lex_state = 6},
  [217] = {.lex_state = 49},
  [218] = {.lex_state = 49},
  [219] = {.lex_state = 49},
  [220] = {.lex_state = 60},
  [221] = {.lex_state = 49, .external_lex_state = 6},
  [222] = {.lex_state = 49, .external_lex_state = 6},
  [223] = {.lex_state = 49, .external_lex_state = 6},
  [224] = {.lex_state = 60},
  [225] = {.lex_state = 49, .external_lex_state = 6},
  [226] = {.lex_state = 60},
  [227] = {.lex_state = 49},
  [228] = {.lex_state = 49, .external_lex_state = 6},
  [229] = {.lex_state = 60},
  [230] = {.lex_state = 49, .external_lex_state = 6},
  [231] = {.lex_state = 49, .external_lex_state = 6},
  [232] = {.lex_state = 60},
  [233] = {.lex_state = 53},
  [234] = {.lex_state = 49, .external_lex_state = 6},
  [235] = {.lex_state = 60},
  [236] = {.lex_state = 53},
  [237] = {.lex_state = 49, .external_lex_state = 6},
  [238] = {.lex_state = 60},
  [239] = {.lex_state = 49, .external_lex_state = 6},
  [240] = {.lex_state = 49, .external_lex_state = 6},
  [241] = {.lex_state = 49, .external_lex_state = 6},
  [242] = {.lex_state = 60},
  [243] = {.lex_state = 50, .external_lex_state = 6},
  [244] = {.lex_state = 49, .external_lex_state = 6},
  [245] = {.lex_state = 50, .external_lex_state = 6},
  [246] = {.lex_state = 60},
  [247] = {.lex_state = 60},
  [248] = {.lex_state = 49, .external_lex_state = 6},
  [249] = {.lex_state = 49, .external_lex_state = 6},
  [250] = {.lex_state = 49, .external_lex_state = 6},
  [251] = {.lex_state = 49, .external_lex_state = 6},
  [252] = {.lex_state = 49, .external_lex_state = 6},
  [253] = {.lex_state = 49, .external_lex_state = 6},
  [254] = {.lex_state = 60},
  [255] = {.lex_state = 49, .external_lex_state = 6},
  [256] = {.lex_state = 50},
  [257] = {.lex_state = 53},
  [258] = {.lex_state = 49},
  [259] = {.lex_state = 50},
  [260] = {.lex_state = 50},
  [261] = {.lex_state = 49},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 53},
  [264] = {.lex_state = 49},
  [265] = {.lex_state = 49},
  [266] = {.lex_state = 49},
  [267] = {.lex_state = 49},
  [268] = {.lex_state = 53},
  [269] = {.lex_state = 60},
  [270] = {.lex_state = 50},
  [271] = {.lex_state = 53},
  [272] = {.lex_state = 49},
  [273] = {.lex_state = 50},
  [274] = {.lex_state = 49},
  [275] = {.lex_state = 49},
  [276] = {.lex_state = 53},
  [277] = {.lex_state = 49},
  [278] = {.lex_state = 53},
  [279] = {.lex_state = 53},
  [280] = {.lex_state = 49},
  [281] = {.lex_state = 53},
  [282] = {.lex_state = 53},
  [283] = {.lex_state = 53},
  [284] = {.lex_state = 50},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 49, .external_lex_state = 2},
  [287] = {.lex_state = 53},
  [288] = {.lex_state = 49, .external_lex_state = 6},
  [289] = {.lex_state = 53},
  [290] = {.lex_state = 53},
  [291] = {.lex_state = 50},
  [292] = {.lex_state = 53},
  [293] = {.lex_state = 53},
  [294] = {.lex_state = 50},
  [295] = {.lex_state = 50},
  [296] = {.lex_state = 50},
  [297] = {.lex_state = 49},
  [298] = {.lex_state = 53},
  [299] = {.lex_state = 50},
  [300] = {.lex_state = 62},
  [301] = {.lex_state = 53},
  [302] = {.lex_state = 64},
  [303] = {.lex_state = 62},
  [304] = {.lex_state = 64},
  [305] = {.lex_state = 57, .external_lex_state = 6},
  [306] = {.lex_state = 0, .external_lex_state = 5},
  [307] = {.lex_state = 0, .external_lex_state = 6},
  [308] = {.lex_state = 0, .external_lex_state = 5},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0, .external_lex_state = 5},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 66},
  [313] = {.lex_state = 637},
  [314] = {.lex_state = 637},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0, .external_lex_state = 6},
  [317] = {.lex_state = 0, .external_lex_state = 5},
  [318] = {.lex_state = 0, .external_lex_state = 6},
  [319] = {.lex_state = 51},
  [320] = {.lex_state = 52},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0, .external_lex_state = 6},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 50},
  [326] = {.lex_state = 0, .external_lex_state = 6},
  [327] = {.lex_state = 0, .external_lex_state = 6},
  [328] = {.lex_state = 0, .external_lex_state = 6},
  [329] = {.lex_state = 0, .external_lex_state = 6},
  [330] = {.lex_state = 0, .external_lex_state = 6},
  [331] = {.lex_state = 0, .external_lex_state = 5},
  [332] = {.lex_state = 0, .external_lex_state = 5},
  [333] = {.lex_state = 0, .external_lex_state = 5},
  [334] = {.lex_state = 0, .external_lex_state = 6},
  [335] = {.lex_state = 0, .external_lex_state = 6},
  [336] = {.lex_state = 0, .external_lex_state = 6},
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

static const bool ts_external_scanner_states[7][EXTERNAL_TOKEN_COUNT] = {
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
    [ts_external_token__dedent] = true,
  },
  [4] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
  [5] = {
    [ts_external_token__indent] = true,
  },
  [6] = {
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
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_when] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym__template_attribute_value_token1] = ACTIONS(1),
    [aux_sym__array_attribute_value_token1] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [sym_class] = ACTIONS(1),
    [sym_id] = ACTIONS(1),
    [aux_sym_angular_attribute_name_token1] = ACTIONS(1),
    [aux_sym_angular_attribute_name_token3] = ACTIONS(1),
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
    [sym_source_file] = STATE(315),
    [sym_doctype] = STATE(3),
    [sym_pipe] = STATE(3),
    [sym_conditional] = STATE(3),
    [sym_case] = STATE(3),
    [sym_unescaped_buffered_code] = STATE(3),
    [sym_buffered_code] = STATE(3),
    [sym_tag] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_unbuffered_code] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_doctype] = ACTIONS(5),
    [anon_sym_PIPE] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_elseif] = ACTIONS(11),
    [anon_sym_unless] = ACTIONS(9),
    [anon_sym_else] = ACTIONS(13),
    [anon_sym_case] = ACTIONS(15),
    [anon_sym_BANG_EQ] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(19),
    [anon_sym_SLASH_SLASH] = ACTIONS(21),
    [sym_tag_name] = ACTIONS(23),
    [sym_class] = ACTIONS(25),
    [sym_id] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_doctype,
    ACTIONS(34), 1,
      anon_sym_PIPE,
    ACTIONS(40), 1,
      anon_sym_elseif,
    ACTIONS(43), 1,
      anon_sym_else,
    ACTIONS(46), 1,
      anon_sym_case,
    ACTIONS(49), 1,
      anon_sym_BANG_EQ,
    ACTIONS(52), 1,
      anon_sym_EQ,
    ACTIONS(55), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(58), 1,
      sym_tag_name,
    ACTIONS(64), 1,
      anon_sym_DASH,
    ACTIONS(37), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(61), 2,
      sym_class,
      sym_id,
    STATE(2), 10,
      sym_doctype,
      sym_pipe,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_tag,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_source_file_repeat1,
  [54] = 14,
    ACTIONS(5), 1,
      anon_sym_doctype,
    ACTIONS(7), 1,
      anon_sym_PIPE,
    ACTIONS(11), 1,
      anon_sym_elseif,
    ACTIONS(13), 1,
      anon_sym_else,
    ACTIONS(15), 1,
      anon_sym_case,
    ACTIONS(17), 1,
      anon_sym_BANG_EQ,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      sym_tag_name,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(25), 2,
      sym_class,
      sym_id,
    STATE(2), 10,
      sym_doctype,
      sym_pipe,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_tag,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_source_file_repeat1,
  [108] = 7,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(75), 1,
      sym_tag_name,
    ACTIONS(79), 1,
      sym__dedent,
    ACTIONS(77), 2,
      sym_class,
      sym_id,
    STATE(5), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(69), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
    ACTIONS(71), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
  [145] = 6,
    ACTIONS(85), 1,
      anon_sym_PIPE,
    ACTIONS(88), 1,
      sym_tag_name,
    ACTIONS(91), 2,
      sym_class,
      sym_id,
    STATE(5), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(81), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
    ACTIONS(83), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
  [180] = 7,
    ACTIONS(75), 1,
      sym_tag_name,
    ACTIONS(98), 1,
      anon_sym_DASH,
    STATE(51), 1,
      sym_unbuffered_code,
    ACTIONS(77), 2,
      sym_class,
      sym_id,
    STATE(11), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(94), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
    ACTIONS(96), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
  [216] = 7,
    ACTIONS(75), 1,
      sym_tag_name,
    ACTIONS(98), 1,
      anon_sym_DASH,
    STATE(38), 1,
      sym_unbuffered_code,
    ACTIONS(77), 2,
      sym_class,
      sym_id,
    STATE(10), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(100), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
    ACTIONS(102), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
  [252] = 6,
    ACTIONS(108), 1,
      anon_sym_COLON,
    ACTIONS(110), 1,
      sym__newline,
    ACTIONS(112), 1,
      sym__dedent,
    STATE(35), 1,
      sym__when_content,
    ACTIONS(106), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(104), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [286] = 4,
    ACTIONS(118), 1,
      sym__un_delimited_javascript_line,
    STATE(15), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(114), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(116), 16,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [315] = 5,
    ACTIONS(75), 1,
      sym_tag_name,
    ACTIONS(77), 2,
      sym_class,
      sym_id,
    STATE(21), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(96), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(94), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [346] = 5,
    ACTIONS(75), 1,
      sym_tag_name,
    ACTIONS(77), 2,
      sym_class,
      sym_id,
    STATE(21), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(122), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(120), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [377] = 6,
    ACTIONS(124), 1,
      anon_sym_PIPE,
    ACTIONS(127), 1,
      sym_tag_name,
    ACTIONS(130), 2,
      sym_class,
      sym_id,
    STATE(12), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(83), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
    ACTIONS(81), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [410] = 6,
    ACTIONS(137), 1,
      anon_sym_when,
    ACTIONS(139), 1,
      anon_sym_default,
    STATE(8), 1,
      sym__when_keyword,
    STATE(14), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(135), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(133), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [443] = 6,
    ACTIONS(145), 1,
      anon_sym_when,
    ACTIONS(148), 1,
      anon_sym_default,
    STATE(8), 1,
      sym__when_keyword,
    STATE(14), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(143), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(141), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [476] = 4,
    ACTIONS(155), 1,
      sym__un_delimited_javascript_line,
    STATE(15), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(151), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(153), 16,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [505] = 7,
    ACTIONS(158), 1,
      anon_sym_PIPE,
    ACTIONS(160), 1,
      sym_tag_name,
    ACTIONS(164), 1,
      sym__dedent,
    ACTIONS(162), 2,
      sym_class,
      sym_id,
    STATE(12), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(71), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
    ACTIONS(69), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [540] = 7,
    ACTIONS(158), 1,
      anon_sym_PIPE,
    ACTIONS(160), 1,
      sym_tag_name,
    ACTIONS(166), 1,
      sym__dedent,
    ACTIONS(162), 2,
      sym_class,
      sym_id,
    STATE(12), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(71), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
    ACTIONS(69), 6,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [575] = 4,
    ACTIONS(172), 1,
      sym__indent,
    STATE(47), 1,
      sym_children,
    ACTIONS(170), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(168), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [604] = 4,
    ACTIONS(178), 1,
      sym__indent,
    STATE(60), 1,
      sym_children,
    ACTIONS(176), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(174), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [633] = 4,
    ACTIONS(180), 1,
      sym__indent,
    STATE(47), 1,
      sym_children,
    ACTIONS(170), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(168), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [662] = 5,
    ACTIONS(186), 1,
      sym_tag_name,
    ACTIONS(189), 2,
      sym_class,
      sym_id,
    STATE(21), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(184), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(182), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [693] = 4,
    ACTIONS(180), 1,
      sym__indent,
    STATE(40), 1,
      sym_children,
    ACTIONS(194), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(192), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [722] = 2,
    ACTIONS(198), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(196), 12,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [747] = 4,
    ACTIONS(204), 1,
      sym__indent,
    STATE(57), 1,
      sym_children,
    ACTIONS(202), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(200), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [776] = 4,
    ACTIONS(180), 1,
      sym__indent,
    STATE(37), 1,
      sym_children,
    ACTIONS(208), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(206), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [805] = 2,
    ACTIONS(210), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(212), 17,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      sym__un_delimited_javascript_line,
      anon_sym_DASH,
  [829] = 3,
    ACTIONS(218), 1,
      sym__indent,
    ACTIONS(216), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(214), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [855] = 4,
    ACTIONS(224), 1,
      sym__indent,
    ACTIONS(226), 1,
      sym__dedent,
    ACTIONS(222), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(220), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [883] = 5,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(232), 1,
      sym__comment_content,
    ACTIONS(234), 1,
      sym__dedent,
    STATE(46), 1,
      aux_sym_comment_repeat1,
    ACTIONS(230), 14,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [912] = 4,
    ACTIONS(236), 1,
      sym__indent,
    STATE(99), 1,
      sym_children,
    ACTIONS(202), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(200), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [939] = 4,
    ACTIONS(238), 1,
      sym__indent,
    STATE(100), 1,
      sym_children,
    ACTIONS(208), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(206), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [966] = 4,
    ACTIONS(238), 1,
      sym__indent,
    STATE(86), 1,
      sym_children,
    ACTIONS(194), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(192), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [993] = 4,
    ACTIONS(240), 1,
      sym__un_delimited_javascript_line,
    STATE(33), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(151), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(153), 14,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1020] = 2,
    ACTIONS(245), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(243), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1043] = 3,
    ACTIONS(226), 1,
      sym__dedent,
    ACTIONS(222), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(220), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1068] = 4,
    ACTIONS(251), 1,
      sym__comment_content,
    STATE(36), 1,
      aux_sym_comment_repeat1,
    ACTIONS(247), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(249), 14,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1095] = 2,
    ACTIONS(256), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(254), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1118] = 2,
    ACTIONS(96), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(94), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1141] = 2,
    ACTIONS(208), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(206), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1164] = 2,
    ACTIONS(208), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(206), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1187] = 2,
    ACTIONS(260), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(258), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1210] = 4,
    ACTIONS(262), 1,
      sym__un_delimited_javascript_line,
    STATE(33), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(114), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(116), 14,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1237] = 2,
    ACTIONS(266), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(264), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1260] = 5,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(232), 1,
      sym__comment_content,
    ACTIONS(234), 1,
      sym__dedent,
    STATE(36), 1,
      aux_sym_comment_repeat1,
    ACTIONS(230), 14,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1289] = 2,
    ACTIONS(194), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(192), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1312] = 5,
    ACTIONS(232), 1,
      sym__comment_content,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
    ACTIONS(272), 1,
      sym__dedent,
    STATE(36), 1,
      aux_sym_comment_repeat1,
    ACTIONS(270), 14,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1341] = 2,
    ACTIONS(194), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(192), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1364] = 2,
    ACTIONS(276), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(274), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1387] = 4,
    ACTIONS(278), 1,
      sym__indent,
    STATE(94), 1,
      sym_children,
    ACTIONS(170), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(168), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1414] = 2,
    ACTIONS(282), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(280), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1437] = 2,
    ACTIONS(122), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(120), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1460] = 5,
    ACTIONS(232), 1,
      sym__comment_content,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
    ACTIONS(288), 1,
      sym__dedent,
    STATE(44), 1,
      aux_sym_comment_repeat1,
    ACTIONS(286), 14,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1489] = 4,
    ACTIONS(290), 1,
      sym__indent,
    STATE(96), 1,
      sym_children,
    ACTIONS(176), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(174), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1516] = 2,
    ACTIONS(294), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(292), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1539] = 3,
    ACTIONS(300), 1,
      sym__dedent,
    ACTIONS(298), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(296), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1564] = 3,
    ACTIONS(306), 1,
      sym__dedent,
    ACTIONS(304), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(302), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1589] = 2,
    ACTIONS(170), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(168), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1612] = 2,
    ACTIONS(170), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(168), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1635] = 2,
    ACTIONS(202), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(200), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1658] = 2,
    ACTIONS(202), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(200), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1681] = 4,
    ACTIONS(238), 1,
      sym__indent,
    STATE(94), 1,
      sym_children,
    ACTIONS(170), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(168), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1708] = 2,
    ACTIONS(310), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(308), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1731] = 2,
    ACTIONS(314), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(312), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1754] = 2,
    ACTIONS(176), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(174), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1777] = 2,
    ACTIONS(318), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(316), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1800] = 4,
    ACTIONS(320), 1,
      sym__indent,
    STATE(121), 1,
      sym_children,
    ACTIONS(202), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(200), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1826] = 3,
    ACTIONS(322), 1,
      sym__indent,
    ACTIONS(216), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(214), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1850] = 5,
    ACTIONS(324), 1,
      sym_tag_name,
    ACTIONS(327), 2,
      sym_class,
      sym_id,
    STATE(68), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(184), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
    ACTIONS(182), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [1878] = 3,
    STATE(68), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(332), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(330), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1902] = 4,
    ACTIONS(334), 1,
      sym__indent,
    STATE(113), 1,
      sym_children,
    ACTIONS(194), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(192), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1928] = 2,
    ACTIONS(210), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(212), 15,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      sym__un_delimited_javascript_line,
      anon_sym_DASH,
  [1950] = 4,
    ACTIONS(336), 1,
      sym__indent,
    STATE(114), 1,
      sym_children,
    ACTIONS(176), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(174), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1976] = 2,
    ACTIONS(222), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(220), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1998] = 2,
    ACTIONS(247), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(249), 15,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      sym__comment_content,
      anon_sym_DASH,
  [2020] = 4,
    ACTIONS(334), 1,
      sym__indent,
    STATE(108), 1,
      sym_children,
    ACTIONS(170), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(168), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2046] = 4,
    ACTIONS(334), 1,
      sym__indent,
    STATE(123), 1,
      sym_children,
    ACTIONS(208), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(206), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2072] = 2,
    ACTIONS(340), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(338), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2094] = 3,
    STATE(68), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(344), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(342), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2118] = 4,
    ACTIONS(346), 1,
      sym__indent,
    STATE(108), 1,
      sym_children,
    ACTIONS(170), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(168), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2144] = 2,
    ACTIONS(176), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(174), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2165] = 2,
    ACTIONS(170), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(168), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2186] = 2,
    ACTIONS(260), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(258), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2207] = 2,
    ACTIONS(266), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(264), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2228] = 3,
    ACTIONS(352), 1,
      sym__indent,
    ACTIONS(350), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(348), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2251] = 3,
    ACTIONS(354), 1,
      sym__dedent,
    ACTIONS(298), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(296), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2274] = 2,
    ACTIONS(208), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(206), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2295] = 3,
    ACTIONS(356), 1,
      sym__indent,
    ACTIONS(216), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(214), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2318] = 3,
    ACTIONS(358), 1,
      sym__indent,
    ACTIONS(286), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(284), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2341] = 2,
    ACTIONS(294), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(292), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2362] = 2,
    ACTIONS(314), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(312), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2383] = 2,
    ACTIONS(208), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(206), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2404] = 2,
    ACTIONS(194), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(192), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2425] = 2,
    ACTIONS(318), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(316), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2446] = 2,
    ACTIONS(194), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(192), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2467] = 2,
    ACTIONS(310), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(308), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2488] = 2,
    ACTIONS(202), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(200), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2509] = 2,
    ACTIONS(282), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(280), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2530] = 2,
    ACTIONS(202), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(200), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2551] = 2,
    ACTIONS(170), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(168), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2572] = 2,
    ACTIONS(256), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(254), 10,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2593] = 3,
    ACTIONS(360), 1,
      sym__dedent,
    ACTIONS(304), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(302), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2616] = 2,
    ACTIONS(310), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(308), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2636] = 2,
    ACTIONS(294), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(292), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2656] = 2,
    ACTIONS(245), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(243), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2676] = 2,
    ACTIONS(170), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(168), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2696] = 2,
    ACTIONS(282), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(280), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2716] = 2,
    ACTIONS(314), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(312), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2736] = 2,
    ACTIONS(194), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(192), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2756] = 2,
    ACTIONS(230), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(228), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2776] = 2,
    ACTIONS(318), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(316), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2796] = 2,
    ACTIONS(202), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(200), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2816] = 2,
    ACTIONS(208), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(206), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2836] = 2,
    ACTIONS(208), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(206), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2856] = 2,
    ACTIONS(202), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(200), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2876] = 2,
    ACTIONS(260), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(258), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2896] = 2,
    ACTIONS(364), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(362), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2916] = 2,
    ACTIONS(266), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(264), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2936] = 2,
    ACTIONS(176), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(174), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2956] = 2,
    ACTIONS(276), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(274), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2976] = 2,
    ACTIONS(368), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(366), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2996] = 2,
    ACTIONS(170), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(168), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3016] = 2,
    ACTIONS(270), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(268), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3036] = 2,
    ACTIONS(256), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(254), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3056] = 2,
    ACTIONS(194), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(192), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3076] = 11,
    ACTIONS(370), 1,
      anon_sym_COLON,
    ACTIONS(372), 1,
      anon_sym_BANG_EQ,
    ACTIONS(374), 1,
      anon_sym_EQ,
    ACTIONS(376), 1,
      anon_sym_,
    ACTIONS(378), 1,
      anon_sym_DOT,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(384), 1,
      sym__newline,
    STATE(128), 1,
      aux_sym_tag_repeat1,
    STATE(154), 1,
      sym_attributes,
    ACTIONS(382), 2,
      sym_class,
      sym_id,
    STATE(209), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3113] = 11,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(386), 1,
      anon_sym_COLON,
    ACTIONS(388), 1,
      anon_sym_BANG_EQ,
    ACTIONS(390), 1,
      anon_sym_EQ,
    ACTIONS(392), 1,
      anon_sym_,
    ACTIONS(394), 1,
      anon_sym_DOT,
    ACTIONS(398), 1,
      sym__newline,
    STATE(131), 1,
      aux_sym_tag_repeat1,
    STATE(156), 1,
      sym_attributes,
    ACTIONS(396), 2,
      sym_class,
      sym_id,
    STATE(80), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3150] = 11,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(400), 1,
      anon_sym_COLON,
    ACTIONS(402), 1,
      anon_sym_BANG_EQ,
    ACTIONS(404), 1,
      anon_sym_EQ,
    ACTIONS(406), 1,
      anon_sym_,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(412), 1,
      sym__newline,
    STATE(129), 1,
      aux_sym_tag_repeat1,
    STATE(151), 1,
      sym_attributes,
    ACTIONS(410), 2,
      sym_class,
      sym_id,
    STATE(118), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3187] = 11,
    ACTIONS(372), 1,
      anon_sym_BANG_EQ,
    ACTIONS(374), 1,
      anon_sym_EQ,
    ACTIONS(378), 1,
      anon_sym_DOT,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      anon_sym_COLON,
    ACTIONS(416), 1,
      anon_sym_,
    ACTIONS(420), 1,
      sym__newline,
    STATE(150), 1,
      aux_sym_tag_repeat1,
    STATE(153), 1,
      sym_attributes,
    ACTIONS(418), 2,
      sym_class,
      sym_id,
    STATE(213), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3224] = 11,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(402), 1,
      anon_sym_BANG_EQ,
    ACTIONS(404), 1,
      anon_sym_EQ,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(422), 1,
      anon_sym_COLON,
    ACTIONS(424), 1,
      anon_sym_,
    ACTIONS(426), 1,
      sym__newline,
    STATE(150), 1,
      aux_sym_tag_repeat1,
    STATE(152), 1,
      sym_attributes,
    ACTIONS(418), 2,
      sym_class,
      sym_id,
    STATE(111), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3261] = 11,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(428), 1,
      anon_sym_COLON,
    ACTIONS(430), 1,
      anon_sym_BANG_EQ,
    ACTIONS(432), 1,
      anon_sym_EQ,
    ACTIONS(434), 1,
      anon_sym_,
    ACTIONS(436), 1,
      anon_sym_DOT,
    ACTIONS(438), 1,
      sym__newline,
    STATE(150), 1,
      aux_sym_tag_repeat1,
    STATE(157), 1,
      sym_attributes,
    ACTIONS(418), 2,
      sym_class,
      sym_id,
    STATE(59), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3298] = 11,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_BANG_EQ,
    ACTIONS(390), 1,
      anon_sym_EQ,
    ACTIONS(394), 1,
      anon_sym_DOT,
    ACTIONS(440), 1,
      anon_sym_COLON,
    ACTIONS(442), 1,
      anon_sym_,
    ACTIONS(444), 1,
      sym__newline,
    STATE(150), 1,
      aux_sym_tag_repeat1,
    STATE(155), 1,
      sym_attributes,
    ACTIONS(418), 2,
      sym_class,
      sym_id,
    STATE(98), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3335] = 11,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      anon_sym_BANG_EQ,
    ACTIONS(432), 1,
      anon_sym_EQ,
    ACTIONS(436), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_COLON,
    ACTIONS(448), 1,
      anon_sym_,
    ACTIONS(452), 1,
      sym__newline,
    STATE(130), 1,
      aux_sym_tag_repeat1,
    STATE(159), 1,
      sym_attributes,
    ACTIONS(450), 2,
      sym_class,
      sym_id,
    STATE(64), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3372] = 6,
    ACTIONS(158), 1,
      anon_sym_PIPE,
    ACTIONS(454), 1,
      anon_sym_BANG_EQ,
    ACTIONS(456), 1,
      anon_sym_EQ,
    STATE(91), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(162), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(17), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3397] = 6,
    ACTIONS(17), 1,
      anon_sym_BANG_EQ,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(158), 1,
      anon_sym_PIPE,
    STATE(124), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(162), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(16), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3422] = 6,
    ACTIONS(458), 1,
      anon_sym_PIPE,
    ACTIONS(460), 1,
      anon_sym_BANG_EQ,
    ACTIONS(462), 1,
      anon_sym_EQ,
    STATE(202), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(464), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(158), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3447] = 6,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(466), 1,
      anon_sym_BANG_EQ,
    ACTIONS(468), 1,
      anon_sym_EQ,
    STATE(58), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(77), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(4), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3472] = 6,
    ACTIONS(17), 1,
      anon_sym_BANG_EQ,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(158), 1,
      anon_sym_PIPE,
    STATE(105), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(162), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(16), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3497] = 6,
    ACTIONS(158), 1,
      anon_sym_PIPE,
    ACTIONS(454), 1,
      anon_sym_BANG_EQ,
    ACTIONS(456), 1,
      anon_sym_EQ,
    STATE(81), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(162), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(17), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3522] = 6,
    ACTIONS(17), 1,
      anon_sym_BANG_EQ,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(158), 1,
      anon_sym_PIPE,
    STATE(112), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(162), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(16), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3547] = 6,
    ACTIONS(158), 1,
      anon_sym_PIPE,
    ACTIONS(454), 1,
      anon_sym_BANG_EQ,
    ACTIONS(456), 1,
      anon_sym_EQ,
    STATE(92), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(162), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(17), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3572] = 6,
    ACTIONS(470), 1,
      anon_sym_EQ,
    ACTIONS(472), 1,
      anon_sym_,
    ACTIONS(474), 1,
      anon_sym_DOT,
    STATE(172), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(476), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(278), 6,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
  [3597] = 6,
    ACTIONS(470), 1,
      anon_sym_EQ,
    ACTIONS(474), 1,
      anon_sym_DOT,
    ACTIONS(478), 1,
      anon_sym_,
    STATE(141), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(480), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(281), 6,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
  [3622] = 6,
    ACTIONS(458), 1,
      anon_sym_PIPE,
    ACTIONS(460), 1,
      anon_sym_BANG_EQ,
    ACTIONS(462), 1,
      anon_sym_EQ,
    STATE(183), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(464), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(158), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3647] = 6,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(466), 1,
      anon_sym_BANG_EQ,
    ACTIONS(468), 1,
      anon_sym_EQ,
    STATE(39), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(77), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(4), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3672] = 6,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(466), 1,
      anon_sym_BANG_EQ,
    ACTIONS(468), 1,
      anon_sym_EQ,
    STATE(45), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(77), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(4), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3697] = 6,
    ACTIONS(458), 1,
      anon_sym_PIPE,
    ACTIONS(460), 1,
      anon_sym_BANG_EQ,
    ACTIONS(462), 1,
      anon_sym_EQ,
    STATE(198), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(464), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(158), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3722] = 8,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
    ACTIONS(484), 1,
      aux_sym__attribute_token1,
    STATE(142), 1,
      sym_attribute_name,
    STATE(147), 1,
      aux_sym_attributes_repeat1,
    STATE(233), 1,
      sym_angular_attribute_name,
    STATE(301), 1,
      sym_attribute,
    STATE(293), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(487), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [3750] = 8,
    ACTIONS(490), 1,
      anon_sym_RPAREN,
    ACTIONS(492), 1,
      aux_sym__attribute_token1,
    STATE(142), 1,
      sym_attribute_name,
    STATE(149), 1,
      aux_sym_attributes_repeat1,
    STATE(233), 1,
      sym_angular_attribute_name,
    STATE(292), 1,
      sym_attribute,
    STATE(293), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(494), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [3778] = 8,
    ACTIONS(492), 1,
      aux_sym__attribute_token1,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
    STATE(142), 1,
      sym_attribute_name,
    STATE(147), 1,
      aux_sym_attributes_repeat1,
    STATE(233), 1,
      sym_angular_attribute_name,
    STATE(276), 1,
      sym_attribute,
    STATE(293), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(494), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [3806] = 4,
    STATE(150), 1,
      aux_sym_tag_repeat1,
    ACTIONS(500), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(502), 2,
      sym_class,
      sym_id,
    ACTIONS(498), 5,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LPAREN,
  [3825] = 7,
    ACTIONS(402), 1,
      anon_sym_BANG_EQ,
    ACTIONS(404), 1,
      anon_sym_EQ,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(422), 1,
      anon_sym_COLON,
    ACTIONS(424), 1,
      anon_sym_,
    ACTIONS(426), 1,
      sym__newline,
    STATE(111), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3849] = 7,
    ACTIONS(402), 1,
      anon_sym_BANG_EQ,
    ACTIONS(404), 1,
      anon_sym_EQ,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(505), 1,
      anon_sym_COLON,
    ACTIONS(507), 1,
      anon_sym_,
    ACTIONS(509), 1,
      sym__newline,
    STATE(105), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3873] = 7,
    ACTIONS(372), 1,
      anon_sym_BANG_EQ,
    ACTIONS(374), 1,
      anon_sym_EQ,
    ACTIONS(378), 1,
      anon_sym_DOT,
    ACTIONS(511), 1,
      anon_sym_COLON,
    ACTIONS(513), 1,
      anon_sym_,
    ACTIONS(515), 1,
      sym__newline,
    STATE(183), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3897] = 7,
    ACTIONS(372), 1,
      anon_sym_BANG_EQ,
    ACTIONS(374), 1,
      anon_sym_EQ,
    ACTIONS(378), 1,
      anon_sym_DOT,
    ACTIONS(414), 1,
      anon_sym_COLON,
    ACTIONS(416), 1,
      anon_sym_,
    ACTIONS(420), 1,
      sym__newline,
    STATE(213), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3921] = 7,
    ACTIONS(388), 1,
      anon_sym_BANG_EQ,
    ACTIONS(390), 1,
      anon_sym_EQ,
    ACTIONS(394), 1,
      anon_sym_DOT,
    ACTIONS(517), 1,
      anon_sym_COLON,
    ACTIONS(519), 1,
      anon_sym_,
    ACTIONS(521), 1,
      sym__newline,
    STATE(81), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3945] = 7,
    ACTIONS(388), 1,
      anon_sym_BANG_EQ,
    ACTIONS(390), 1,
      anon_sym_EQ,
    ACTIONS(394), 1,
      anon_sym_DOT,
    ACTIONS(440), 1,
      anon_sym_COLON,
    ACTIONS(442), 1,
      anon_sym_,
    ACTIONS(444), 1,
      sym__newline,
    STATE(98), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3969] = 7,
    ACTIONS(430), 1,
      anon_sym_BANG_EQ,
    ACTIONS(432), 1,
      anon_sym_EQ,
    ACTIONS(436), 1,
      anon_sym_DOT,
    ACTIONS(523), 1,
      anon_sym_COLON,
    ACTIONS(525), 1,
      anon_sym_,
    ACTIONS(527), 1,
      sym__newline,
    STATE(58), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3993] = 4,
    ACTIONS(458), 1,
      anon_sym_PIPE,
    ACTIONS(529), 1,
      sym__dedent,
    ACTIONS(464), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(160), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4011] = 7,
    ACTIONS(428), 1,
      anon_sym_COLON,
    ACTIONS(430), 1,
      anon_sym_BANG_EQ,
    ACTIONS(432), 1,
      anon_sym_EQ,
    ACTIONS(434), 1,
      anon_sym_,
    ACTIONS(436), 1,
      anon_sym_DOT,
    ACTIONS(438), 1,
      sym__newline,
    STATE(59), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4035] = 4,
    ACTIONS(81), 1,
      sym__dedent,
    ACTIONS(531), 1,
      anon_sym_PIPE,
    ACTIONS(534), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(160), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4053] = 3,
    ACTIONS(458), 1,
      anon_sym_PIPE,
    ACTIONS(464), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(158), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4068] = 3,
    ACTIONS(158), 1,
      anon_sym_PIPE,
    ACTIONS(162), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(17), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4083] = 8,
    ACTIONS(537), 1,
      aux_sym__ternary_attribute_value_token1,
    ACTIONS(539), 1,
      aux_sym__variable_attribute_value_token1,
    ACTIONS(541), 1,
      aux_sym__object_attribute_value_token1,
    ACTIONS(543), 1,
      aux_sym__template_attribute_value_token1,
    ACTIONS(545), 1,
      aux_sym__array_attribute_value_token1,
    ACTIONS(547), 1,
      anon_sym_SQUOTE,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
    STATE(287), 1,
      sym_quoted_attribute_value,
  [4108] = 3,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(77), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(4), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4123] = 3,
    ACTIONS(158), 1,
      anon_sym_PIPE,
    ACTIONS(162), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(16), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4138] = 3,
    ACTIONS(551), 1,
      sym__indent,
    STATE(203), 1,
      sym_children,
    ACTIONS(206), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4152] = 3,
    ACTIONS(551), 1,
      sym__indent,
    STATE(197), 1,
      sym_children,
    ACTIONS(168), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4166] = 3,
    ACTIONS(553), 1,
      sym__indent,
    STATE(197), 1,
      sym_children,
    ACTIONS(168), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4180] = 3,
    ACTIONS(551), 1,
      sym__indent,
    STATE(201), 1,
      sym_children,
    ACTIONS(192), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4194] = 3,
    ACTIONS(555), 1,
      sym__indent,
    STATE(194), 1,
      sym_children,
    ACTIONS(200), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4208] = 3,
    ACTIONS(557), 1,
      sym__indent,
    STATE(212), 1,
      sym_children,
    ACTIONS(174), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4222] = 4,
    ACTIONS(561), 1,
      anon_sym_,
    ACTIONS(563), 1,
      anon_sym_DOT,
    STATE(172), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(559), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4237] = 3,
    ACTIONS(566), 1,
      sym__dedent,
    STATE(174), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(464), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4250] = 3,
    ACTIONS(182), 1,
      sym__dedent,
    STATE(174), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(568), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4263] = 2,
    ACTIONS(571), 1,
      sym__indent,
    ACTIONS(214), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4274] = 3,
    ACTIONS(573), 1,
      sym__dedent,
    STATE(174), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(464), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4287] = 3,
    ACTIONS(575), 1,
      sym__dedent,
    STATE(174), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(464), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4300] = 2,
    ACTIONS(579), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(577), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [4311] = 3,
    ACTIONS(581), 1,
      sym__dedent,
    STATE(174), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(464), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4324] = 2,
    ACTIONS(585), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(583), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [4335] = 2,
    ACTIONS(589), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(587), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [4346] = 1,
    ACTIONS(482), 5,
      anon_sym_RPAREN,
      aux_sym__attribute_token1,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [4354] = 1,
    ACTIONS(168), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4362] = 2,
    STATE(173), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(464), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4372] = 2,
    STATE(176), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(464), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4382] = 2,
    STATE(179), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(464), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4392] = 5,
    ACTIONS(591), 1,
      sym_content,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(595), 1,
      sym__dedent,
    STATE(205), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(216), 1,
      aux_sym__content_or_javascript,
  [4408] = 2,
    STATE(78), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(25), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4418] = 5,
    ACTIONS(591), 1,
      sym_content,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(597), 1,
      sym__dedent,
    STATE(205), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(216), 1,
      aux_sym__content_or_javascript,
  [4434] = 5,
    ACTIONS(591), 1,
      sym_content,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(599), 1,
      sym__dedent,
    STATE(205), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(216), 1,
      aux_sym__content_or_javascript,
  [4450] = 2,
    STATE(69), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(25), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4460] = 2,
    STATE(177), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(464), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4470] = 5,
    ACTIONS(591), 1,
      sym_content,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(601), 1,
      sym__dedent,
    STATE(205), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(216), 1,
      aux_sym__content_or_javascript,
  [4486] = 1,
    ACTIONS(168), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4494] = 1,
    ACTIONS(280), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4502] = 4,
    ACTIONS(603), 1,
      anon_sym_when,
    ACTIONS(605), 1,
      anon_sym_default,
    STATE(8), 1,
      sym__when_keyword,
    STATE(13), 2,
      sym_when,
      aux_sym_case_repeat1,
  [4516] = 1,
    ACTIONS(192), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4524] = 1,
    ACTIONS(192), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4532] = 1,
    ACTIONS(264), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4540] = 1,
    ACTIONS(258), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4548] = 1,
    ACTIONS(206), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4556] = 1,
    ACTIONS(206), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4564] = 1,
    ACTIONS(254), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4572] = 2,
    ACTIONS(609), 1,
      anon_sym_,
    ACTIONS(607), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4582] = 5,
    ACTIONS(611), 1,
      sym_content,
    ACTIONS(614), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(617), 1,
      sym__dedent,
    STATE(205), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(216), 1,
      aux_sym__content_or_javascript,
  [4598] = 1,
    ACTIONS(292), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4606] = 1,
    ACTIONS(312), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4614] = 1,
    ACTIONS(316), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4622] = 1,
    ACTIONS(174), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4630] = 1,
    ACTIONS(308), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4638] = 2,
    ACTIONS(621), 1,
      anon_sym_,
    ACTIONS(619), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4648] = 1,
    ACTIONS(200), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4656] = 1,
    ACTIONS(200), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4664] = 2,
    STATE(81), 1,
      sym_tag,
    ACTIONS(162), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4673] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(623), 1,
      sym_content,
    ACTIONS(625), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym__content_or_javascript,
  [4686] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(623), 1,
      sym_content,
    ACTIONS(627), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym__content_or_javascript,
  [4699] = 4,
    ACTIONS(591), 1,
      sym_content,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(187), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(216), 1,
      aux_sym__content_or_javascript,
  [4712] = 4,
    ACTIONS(591), 1,
      sym_content,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(189), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(216), 1,
      aux_sym__content_or_javascript,
  [4725] = 4,
    ACTIONS(591), 1,
      sym_content,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(190), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(216), 1,
      aux_sym__content_or_javascript,
  [4738] = 2,
    STATE(124), 1,
      sym_tag,
    ACTIONS(25), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4747] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(623), 1,
      sym_content,
    ACTIONS(629), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym__content_or_javascript,
  [4760] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(623), 1,
      sym_content,
    ACTIONS(631), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym__content_or_javascript,
  [4773] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(633), 1,
      sym_content,
    ACTIONS(635), 1,
      sym__newline,
    STATE(250), 1,
      aux_sym__content_or_javascript,
  [4786] = 2,
    STATE(45), 1,
      sym_tag,
    ACTIONS(77), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4795] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(623), 1,
      sym_content,
    ACTIONS(637), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym__content_or_javascript,
  [4808] = 2,
    STATE(58), 1,
      sym_tag,
    ACTIONS(77), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4817] = 4,
    ACTIONS(591), 1,
      sym_content,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(193), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(216), 1,
      aux_sym__content_or_javascript,
  [4830] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(623), 1,
      sym_content,
    ACTIONS(639), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym__content_or_javascript,
  [4843] = 2,
    STATE(59), 1,
      sym_tag,
    ACTIONS(77), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4852] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(623), 1,
      sym_content,
    ACTIONS(641), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym__content_or_javascript,
  [4865] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(643), 1,
      sym_content,
    ACTIONS(645), 1,
      sym__newline,
    STATE(230), 1,
      aux_sym__content_or_javascript,
  [4878] = 2,
    STATE(105), 1,
      sym_tag,
    ACTIONS(25), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4887] = 3,
    ACTIONS(647), 1,
      anon_sym_EQ,
    ACTIONS(649), 1,
      anon_sym_,
    ACTIONS(651), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4898] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(623), 1,
      sym_content,
    ACTIONS(653), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym__content_or_javascript,
  [4911] = 2,
    STATE(198), 1,
      sym_tag,
    ACTIONS(464), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4920] = 2,
    ACTIONS(657), 1,
      anon_sym_,
    ACTIONS(655), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4929] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(623), 1,
      sym_content,
    ACTIONS(659), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym__content_or_javascript,
  [4942] = 2,
    STATE(183), 1,
      sym_tag,
    ACTIONS(464), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4951] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(623), 1,
      sym_content,
    ACTIONS(661), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym__content_or_javascript,
  [4964] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(623), 1,
      sym_content,
    ACTIONS(663), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym__content_or_javascript,
  [4977] = 4,
    ACTIONS(665), 1,
      sym_content,
    ACTIONS(668), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(671), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym__content_or_javascript,
  [4990] = 2,
    STATE(213), 1,
      sym_tag,
    ACTIONS(464), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4999] = 4,
    ACTIONS(673), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(675), 1,
      sym__newline,
    STATE(101), 1,
      sym__single_line_buf_code,
    STATE(329), 1,
      sym__un_delimited_javascript,
  [5012] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(623), 1,
      sym_content,
    ACTIONS(677), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym__content_or_javascript,
  [5025] = 4,
    ACTIONS(673), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(679), 1,
      sym__newline,
    STATE(56), 1,
      sym__single_line_buf_code,
    STATE(307), 1,
      sym__un_delimited_javascript,
  [5038] = 2,
    STATE(92), 1,
      sym_tag,
    ACTIONS(162), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5047] = 2,
    STATE(111), 1,
      sym_tag,
    ACTIONS(25), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5056] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(681), 1,
      sym_content,
    ACTIONS(683), 1,
      sym__newline,
    STATE(252), 1,
      aux_sym__content_or_javascript,
  [5069] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(623), 1,
      sym_content,
    ACTIONS(685), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym__content_or_javascript,
  [5082] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(623), 1,
      sym_content,
    ACTIONS(687), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym__content_or_javascript,
  [5095] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(623), 1,
      sym_content,
    ACTIONS(689), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym__content_or_javascript,
  [5108] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(623), 1,
      sym_content,
    ACTIONS(691), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym__content_or_javascript,
  [5121] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(623), 1,
      sym_content,
    ACTIONS(693), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym__content_or_javascript,
  [5134] = 2,
    STATE(98), 1,
      sym_tag,
    ACTIONS(162), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5143] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(695), 1,
      sym_content,
    ACTIONS(697), 1,
      sym__newline,
    STATE(244), 1,
      aux_sym__content_or_javascript,
  [5156] = 3,
    ACTIONS(673), 1,
      sym__un_delimited_javascript_line,
    STATE(208), 1,
      sym__single_line_buf_code,
    STATE(316), 1,
      sym__un_delimited_javascript,
  [5166] = 2,
    ACTIONS(699), 1,
      anon_sym_,
    ACTIONS(701), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5174] = 3,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(703), 1,
      sym_content,
    STATE(239), 1,
      aux_sym__content_or_javascript,
  [5184] = 3,
    ACTIONS(673), 1,
      sym__un_delimited_javascript_line,
    STATE(90), 1,
      sym__single_line_buf_code,
    STATE(329), 1,
      sym__un_delimited_javascript,
  [5194] = 3,
    ACTIONS(673), 1,
      sym__un_delimited_javascript_line,
    STATE(93), 1,
      sym__single_line_buf_code,
    STATE(329), 1,
      sym__un_delimited_javascript,
  [5204] = 3,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(705), 1,
      sym_content,
    STATE(222), 1,
      aux_sym__content_or_javascript,
  [5214] = 1,
    ACTIONS(707), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [5220] = 2,
    ACTIONS(709), 1,
      anon_sym_,
    ACTIONS(711), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5228] = 3,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(713), 1,
      sym_content,
    STATE(225), 1,
      aux_sym__content_or_javascript,
  [5238] = 3,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(715), 1,
      sym_content,
    STATE(228), 1,
      aux_sym__content_or_javascript,
  [5248] = 3,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(717), 1,
      sym_content,
    STATE(234), 1,
      aux_sym__content_or_javascript,
  [5258] = 3,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(719), 1,
      sym_content,
    STATE(251), 1,
      aux_sym__content_or_javascript,
  [5268] = 2,
    ACTIONS(721), 1,
      anon_sym_,
    ACTIONS(723), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5276] = 1,
    ACTIONS(725), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5282] = 3,
    ACTIONS(727), 1,
      sym__un_delimited_javascript_line,
    STATE(9), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(55), 1,
      sym__multi_line_buf_code,
  [5292] = 2,
    ACTIONS(729), 1,
      anon_sym_,
    ACTIONS(731), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5300] = 3,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(733), 1,
      sym_content,
    STATE(237), 1,
      aux_sym__content_or_javascript,
  [5310] = 3,
    ACTIONS(673), 1,
      sym__un_delimited_javascript_line,
    STATE(207), 1,
      sym__single_line_buf_code,
    STATE(316), 1,
      sym__un_delimited_javascript,
  [5320] = 3,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(735), 1,
      sym_content,
    STATE(240), 1,
      aux_sym__content_or_javascript,
  [5330] = 3,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(737), 1,
      sym_content,
    STATE(253), 1,
      aux_sym__content_or_javascript,
  [5340] = 3,
    ACTIONS(739), 1,
      anon_sym_,
    ACTIONS(741), 1,
      anon_sym_COMMA,
    ACTIONS(743), 1,
      anon_sym_RPAREN,
  [5350] = 3,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(745), 1,
      sym_content,
    STATE(215), 1,
      aux_sym__content_or_javascript,
  [5360] = 2,
    ACTIONS(747), 1,
      anon_sym_,
    ACTIONS(749), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5368] = 2,
    ACTIONS(751), 1,
      anon_sym_,
    ACTIONS(753), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5376] = 3,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(755), 1,
      sym_content,
    STATE(249), 1,
      aux_sym__content_or_javascript,
  [5386] = 2,
    ACTIONS(472), 1,
      anon_sym_,
    ACTIONS(476), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5394] = 2,
    ACTIONS(757), 1,
      anon_sym_,
    ACTIONS(759), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5402] = 2,
    ACTIONS(761), 1,
      anon_sym_,
    ACTIONS(763), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5410] = 3,
    ACTIONS(765), 1,
      sym__un_delimited_javascript_line,
    STATE(42), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(85), 1,
      sym__multi_line_buf_code,
  [5420] = 3,
    ACTIONS(767), 1,
      anon_sym_SQUOTE,
    ACTIONS(769), 1,
      anon_sym_DQUOTE,
    STATE(290), 1,
      sym_quoted_javascript,
  [5430] = 2,
    ACTIONS(771), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(617), 2,
      sym__dedent,
      sym_content,
  [5438] = 2,
    ACTIONS(773), 1,
      anon_sym_,
    ACTIONS(775), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5446] = 2,
    ACTIONS(779), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(777), 2,
      sym__newline,
      sym_content,
  [5454] = 2,
    ACTIONS(781), 1,
      anon_sym_,
    ACTIONS(783), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5462] = 2,
    ACTIONS(785), 1,
      anon_sym_,
    ACTIONS(787), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5470] = 3,
    ACTIONS(673), 1,
      sym__un_delimited_javascript_line,
    STATE(110), 1,
      sym__single_line_buf_code,
    STATE(327), 1,
      sym__un_delimited_javascript,
  [5480] = 3,
    ACTIONS(739), 1,
      anon_sym_,
    ACTIONS(741), 1,
      anon_sym_COMMA,
    ACTIONS(789), 1,
      anon_sym_RPAREN,
  [5490] = 2,
    ACTIONS(791), 1,
      anon_sym_,
    ACTIONS(793), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5498] = 3,
    ACTIONS(673), 1,
      sym__un_delimited_javascript_line,
    STATE(63), 1,
      sym__single_line_buf_code,
    STATE(307), 1,
      sym__un_delimited_javascript,
  [5508] = 3,
    ACTIONS(673), 1,
      sym__un_delimited_javascript_line,
    STATE(65), 1,
      sym__single_line_buf_code,
    STATE(307), 1,
      sym__un_delimited_javascript,
  [5518] = 3,
    ACTIONS(673), 1,
      sym__un_delimited_javascript_line,
    STATE(107), 1,
      sym__single_line_buf_code,
    STATE(327), 1,
      sym__un_delimited_javascript,
  [5528] = 3,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(795), 1,
      sym_content,
    STATE(221), 1,
      aux_sym__content_or_javascript,
  [5538] = 2,
    ACTIONS(797), 1,
      anon_sym_,
    ACTIONS(799), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5546] = 2,
    ACTIONS(801), 1,
      sym__un_delimited_javascript_line,
    STATE(191), 1,
      sym__un_delimited_javascript,
  [5553] = 2,
    ACTIONS(803), 1,
      anon_sym_DQUOTE,
    ACTIONS(805), 1,
      aux_sym_quoted_javascript_token2,
  [5560] = 2,
    ACTIONS(739), 1,
      anon_sym_,
    ACTIONS(741), 1,
      anon_sym_COMMA,
  [5567] = 2,
    ACTIONS(803), 1,
      anon_sym_SQUOTE,
    ACTIONS(807), 1,
      aux_sym_quoted_javascript_token1,
  [5574] = 2,
    ACTIONS(809), 1,
      anon_sym_DQUOTE,
    ACTIONS(811), 1,
      aux_sym_quoted_javascript_token2,
  [5581] = 2,
    ACTIONS(809), 1,
      anon_sym_SQUOTE,
    ACTIONS(813), 1,
      aux_sym_quoted_javascript_token1,
  [5588] = 2,
    ACTIONS(815), 1,
      sym__comment_content,
    ACTIONS(817), 1,
      sym__newline,
  [5595] = 1,
    ACTIONS(819), 1,
      sym__indent,
  [5599] = 1,
    ACTIONS(821), 1,
      sym__newline,
  [5603] = 1,
    ACTIONS(823), 1,
      sym__indent,
  [5607] = 1,
    ACTIONS(825), 1,
      anon_sym_SQUOTE,
  [5611] = 1,
    ACTIONS(827), 1,
      sym__indent,
  [5615] = 1,
    ACTIONS(829), 1,
      anon_sym_RBRACE_RBRACE,
  [5619] = 1,
    ACTIONS(831), 1,
      aux_sym__attribute_token1,
  [5623] = 1,
    ACTIONS(833), 1,
      aux_sym_unbuffered_code_token1,
  [5627] = 1,
    ACTIONS(835), 1,
      aux_sym_unbuffered_code_token1,
  [5631] = 1,
    ACTIONS(837), 1,
      ts_builtin_sym_end,
  [5635] = 1,
    ACTIONS(839), 1,
      sym__newline,
  [5639] = 1,
    ACTIONS(841), 1,
      sym__indent,
  [5643] = 1,
    ACTIONS(843), 1,
      sym__newline,
  [5647] = 1,
    ACTIONS(845), 1,
      aux_sym__when_keyword_token1,
  [5651] = 1,
    ACTIONS(847), 1,
      sym__delimited_javascript,
  [5655] = 1,
    ACTIONS(825), 1,
      anon_sym_DQUOTE,
  [5659] = 1,
    ACTIONS(849), 1,
      sym__newline,
  [5663] = 1,
    ACTIONS(851), 1,
      anon_sym_DQUOTE,
  [5667] = 1,
    ACTIONS(851), 1,
      anon_sym_SQUOTE,
  [5671] = 1,
    ACTIONS(853), 1,
      sym__un_delimited_javascript_line,
  [5675] = 1,
    ACTIONS(855), 1,
      sym__newline,
  [5679] = 1,
    ACTIONS(857), 1,
      sym__newline,
  [5683] = 1,
    ACTIONS(725), 1,
      sym__newline,
  [5687] = 1,
    ACTIONS(859), 1,
      sym__newline,
  [5691] = 1,
    ACTIONS(861), 1,
      sym__newline,
  [5695] = 1,
    ACTIONS(863), 1,
      sym__indent,
  [5699] = 1,
    ACTIONS(865), 1,
      sym__indent,
  [5703] = 1,
    ACTIONS(867), 1,
      sym__indent,
  [5707] = 1,
    ACTIONS(869), 1,
      sym__newline,
  [5711] = 1,
    ACTIONS(871), 1,
      sym__newline,
  [5715] = 1,
    ACTIONS(873), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 54,
  [SMALL_STATE(4)] = 108,
  [SMALL_STATE(5)] = 145,
  [SMALL_STATE(6)] = 180,
  [SMALL_STATE(7)] = 216,
  [SMALL_STATE(8)] = 252,
  [SMALL_STATE(9)] = 286,
  [SMALL_STATE(10)] = 315,
  [SMALL_STATE(11)] = 346,
  [SMALL_STATE(12)] = 377,
  [SMALL_STATE(13)] = 410,
  [SMALL_STATE(14)] = 443,
  [SMALL_STATE(15)] = 476,
  [SMALL_STATE(16)] = 505,
  [SMALL_STATE(17)] = 540,
  [SMALL_STATE(18)] = 575,
  [SMALL_STATE(19)] = 604,
  [SMALL_STATE(20)] = 633,
  [SMALL_STATE(21)] = 662,
  [SMALL_STATE(22)] = 693,
  [SMALL_STATE(23)] = 722,
  [SMALL_STATE(24)] = 747,
  [SMALL_STATE(25)] = 776,
  [SMALL_STATE(26)] = 805,
  [SMALL_STATE(27)] = 829,
  [SMALL_STATE(28)] = 855,
  [SMALL_STATE(29)] = 883,
  [SMALL_STATE(30)] = 912,
  [SMALL_STATE(31)] = 939,
  [SMALL_STATE(32)] = 966,
  [SMALL_STATE(33)] = 993,
  [SMALL_STATE(34)] = 1020,
  [SMALL_STATE(35)] = 1043,
  [SMALL_STATE(36)] = 1068,
  [SMALL_STATE(37)] = 1095,
  [SMALL_STATE(38)] = 1118,
  [SMALL_STATE(39)] = 1141,
  [SMALL_STATE(40)] = 1164,
  [SMALL_STATE(41)] = 1187,
  [SMALL_STATE(42)] = 1210,
  [SMALL_STATE(43)] = 1237,
  [SMALL_STATE(44)] = 1260,
  [SMALL_STATE(45)] = 1289,
  [SMALL_STATE(46)] = 1312,
  [SMALL_STATE(47)] = 1341,
  [SMALL_STATE(48)] = 1364,
  [SMALL_STATE(49)] = 1387,
  [SMALL_STATE(50)] = 1414,
  [SMALL_STATE(51)] = 1437,
  [SMALL_STATE(52)] = 1460,
  [SMALL_STATE(53)] = 1489,
  [SMALL_STATE(54)] = 1516,
  [SMALL_STATE(55)] = 1539,
  [SMALL_STATE(56)] = 1564,
  [SMALL_STATE(57)] = 1589,
  [SMALL_STATE(58)] = 1612,
  [SMALL_STATE(59)] = 1635,
  [SMALL_STATE(60)] = 1658,
  [SMALL_STATE(61)] = 1681,
  [SMALL_STATE(62)] = 1708,
  [SMALL_STATE(63)] = 1731,
  [SMALL_STATE(64)] = 1754,
  [SMALL_STATE(65)] = 1777,
  [SMALL_STATE(66)] = 1800,
  [SMALL_STATE(67)] = 1826,
  [SMALL_STATE(68)] = 1850,
  [SMALL_STATE(69)] = 1878,
  [SMALL_STATE(70)] = 1902,
  [SMALL_STATE(71)] = 1928,
  [SMALL_STATE(72)] = 1950,
  [SMALL_STATE(73)] = 1976,
  [SMALL_STATE(74)] = 1998,
  [SMALL_STATE(75)] = 2020,
  [SMALL_STATE(76)] = 2046,
  [SMALL_STATE(77)] = 2072,
  [SMALL_STATE(78)] = 2094,
  [SMALL_STATE(79)] = 2118,
  [SMALL_STATE(80)] = 2144,
  [SMALL_STATE(81)] = 2165,
  [SMALL_STATE(82)] = 2186,
  [SMALL_STATE(83)] = 2207,
  [SMALL_STATE(84)] = 2228,
  [SMALL_STATE(85)] = 2251,
  [SMALL_STATE(86)] = 2274,
  [SMALL_STATE(87)] = 2295,
  [SMALL_STATE(88)] = 2318,
  [SMALL_STATE(89)] = 2341,
  [SMALL_STATE(90)] = 2362,
  [SMALL_STATE(91)] = 2383,
  [SMALL_STATE(92)] = 2404,
  [SMALL_STATE(93)] = 2425,
  [SMALL_STATE(94)] = 2446,
  [SMALL_STATE(95)] = 2467,
  [SMALL_STATE(96)] = 2488,
  [SMALL_STATE(97)] = 2509,
  [SMALL_STATE(98)] = 2530,
  [SMALL_STATE(99)] = 2551,
  [SMALL_STATE(100)] = 2572,
  [SMALL_STATE(101)] = 2593,
  [SMALL_STATE(102)] = 2616,
  [SMALL_STATE(103)] = 2636,
  [SMALL_STATE(104)] = 2656,
  [SMALL_STATE(105)] = 2676,
  [SMALL_STATE(106)] = 2696,
  [SMALL_STATE(107)] = 2716,
  [SMALL_STATE(108)] = 2736,
  [SMALL_STATE(109)] = 2756,
  [SMALL_STATE(110)] = 2776,
  [SMALL_STATE(111)] = 2796,
  [SMALL_STATE(112)] = 2816,
  [SMALL_STATE(113)] = 2836,
  [SMALL_STATE(114)] = 2856,
  [SMALL_STATE(115)] = 2876,
  [SMALL_STATE(116)] = 2896,
  [SMALL_STATE(117)] = 2916,
  [SMALL_STATE(118)] = 2936,
  [SMALL_STATE(119)] = 2956,
  [SMALL_STATE(120)] = 2976,
  [SMALL_STATE(121)] = 2996,
  [SMALL_STATE(122)] = 3016,
  [SMALL_STATE(123)] = 3036,
  [SMALL_STATE(124)] = 3056,
  [SMALL_STATE(125)] = 3076,
  [SMALL_STATE(126)] = 3113,
  [SMALL_STATE(127)] = 3150,
  [SMALL_STATE(128)] = 3187,
  [SMALL_STATE(129)] = 3224,
  [SMALL_STATE(130)] = 3261,
  [SMALL_STATE(131)] = 3298,
  [SMALL_STATE(132)] = 3335,
  [SMALL_STATE(133)] = 3372,
  [SMALL_STATE(134)] = 3397,
  [SMALL_STATE(135)] = 3422,
  [SMALL_STATE(136)] = 3447,
  [SMALL_STATE(137)] = 3472,
  [SMALL_STATE(138)] = 3497,
  [SMALL_STATE(139)] = 3522,
  [SMALL_STATE(140)] = 3547,
  [SMALL_STATE(141)] = 3572,
  [SMALL_STATE(142)] = 3597,
  [SMALL_STATE(143)] = 3622,
  [SMALL_STATE(144)] = 3647,
  [SMALL_STATE(145)] = 3672,
  [SMALL_STATE(146)] = 3697,
  [SMALL_STATE(147)] = 3722,
  [SMALL_STATE(148)] = 3750,
  [SMALL_STATE(149)] = 3778,
  [SMALL_STATE(150)] = 3806,
  [SMALL_STATE(151)] = 3825,
  [SMALL_STATE(152)] = 3849,
  [SMALL_STATE(153)] = 3873,
  [SMALL_STATE(154)] = 3897,
  [SMALL_STATE(155)] = 3921,
  [SMALL_STATE(156)] = 3945,
  [SMALL_STATE(157)] = 3969,
  [SMALL_STATE(158)] = 3993,
  [SMALL_STATE(159)] = 4011,
  [SMALL_STATE(160)] = 4035,
  [SMALL_STATE(161)] = 4053,
  [SMALL_STATE(162)] = 4068,
  [SMALL_STATE(163)] = 4083,
  [SMALL_STATE(164)] = 4108,
  [SMALL_STATE(165)] = 4123,
  [SMALL_STATE(166)] = 4138,
  [SMALL_STATE(167)] = 4152,
  [SMALL_STATE(168)] = 4166,
  [SMALL_STATE(169)] = 4180,
  [SMALL_STATE(170)] = 4194,
  [SMALL_STATE(171)] = 4208,
  [SMALL_STATE(172)] = 4222,
  [SMALL_STATE(173)] = 4237,
  [SMALL_STATE(174)] = 4250,
  [SMALL_STATE(175)] = 4263,
  [SMALL_STATE(176)] = 4274,
  [SMALL_STATE(177)] = 4287,
  [SMALL_STATE(178)] = 4300,
  [SMALL_STATE(179)] = 4311,
  [SMALL_STATE(180)] = 4324,
  [SMALL_STATE(181)] = 4335,
  [SMALL_STATE(182)] = 4346,
  [SMALL_STATE(183)] = 4354,
  [SMALL_STATE(184)] = 4362,
  [SMALL_STATE(185)] = 4372,
  [SMALL_STATE(186)] = 4382,
  [SMALL_STATE(187)] = 4392,
  [SMALL_STATE(188)] = 4408,
  [SMALL_STATE(189)] = 4418,
  [SMALL_STATE(190)] = 4434,
  [SMALL_STATE(191)] = 4450,
  [SMALL_STATE(192)] = 4460,
  [SMALL_STATE(193)] = 4470,
  [SMALL_STATE(194)] = 4486,
  [SMALL_STATE(195)] = 4494,
  [SMALL_STATE(196)] = 4502,
  [SMALL_STATE(197)] = 4516,
  [SMALL_STATE(198)] = 4524,
  [SMALL_STATE(199)] = 4532,
  [SMALL_STATE(200)] = 4540,
  [SMALL_STATE(201)] = 4548,
  [SMALL_STATE(202)] = 4556,
  [SMALL_STATE(203)] = 4564,
  [SMALL_STATE(204)] = 4572,
  [SMALL_STATE(205)] = 4582,
  [SMALL_STATE(206)] = 4598,
  [SMALL_STATE(207)] = 4606,
  [SMALL_STATE(208)] = 4614,
  [SMALL_STATE(209)] = 4622,
  [SMALL_STATE(210)] = 4630,
  [SMALL_STATE(211)] = 4638,
  [SMALL_STATE(212)] = 4648,
  [SMALL_STATE(213)] = 4656,
  [SMALL_STATE(214)] = 4664,
  [SMALL_STATE(215)] = 4673,
  [SMALL_STATE(216)] = 4686,
  [SMALL_STATE(217)] = 4699,
  [SMALL_STATE(218)] = 4712,
  [SMALL_STATE(219)] = 4725,
  [SMALL_STATE(220)] = 4738,
  [SMALL_STATE(221)] = 4747,
  [SMALL_STATE(222)] = 4760,
  [SMALL_STATE(223)] = 4773,
  [SMALL_STATE(224)] = 4786,
  [SMALL_STATE(225)] = 4795,
  [SMALL_STATE(226)] = 4808,
  [SMALL_STATE(227)] = 4817,
  [SMALL_STATE(228)] = 4830,
  [SMALL_STATE(229)] = 4843,
  [SMALL_STATE(230)] = 4852,
  [SMALL_STATE(231)] = 4865,
  [SMALL_STATE(232)] = 4878,
  [SMALL_STATE(233)] = 4887,
  [SMALL_STATE(234)] = 4898,
  [SMALL_STATE(235)] = 4911,
  [SMALL_STATE(236)] = 4920,
  [SMALL_STATE(237)] = 4929,
  [SMALL_STATE(238)] = 4942,
  [SMALL_STATE(239)] = 4951,
  [SMALL_STATE(240)] = 4964,
  [SMALL_STATE(241)] = 4977,
  [SMALL_STATE(242)] = 4990,
  [SMALL_STATE(243)] = 4999,
  [SMALL_STATE(244)] = 5012,
  [SMALL_STATE(245)] = 5025,
  [SMALL_STATE(246)] = 5038,
  [SMALL_STATE(247)] = 5047,
  [SMALL_STATE(248)] = 5056,
  [SMALL_STATE(249)] = 5069,
  [SMALL_STATE(250)] = 5082,
  [SMALL_STATE(251)] = 5095,
  [SMALL_STATE(252)] = 5108,
  [SMALL_STATE(253)] = 5121,
  [SMALL_STATE(254)] = 5134,
  [SMALL_STATE(255)] = 5143,
  [SMALL_STATE(256)] = 5156,
  [SMALL_STATE(257)] = 5166,
  [SMALL_STATE(258)] = 5174,
  [SMALL_STATE(259)] = 5184,
  [SMALL_STATE(260)] = 5194,
  [SMALL_STATE(261)] = 5204,
  [SMALL_STATE(262)] = 5214,
  [SMALL_STATE(263)] = 5220,
  [SMALL_STATE(264)] = 5228,
  [SMALL_STATE(265)] = 5238,
  [SMALL_STATE(266)] = 5248,
  [SMALL_STATE(267)] = 5258,
  [SMALL_STATE(268)] = 5268,
  [SMALL_STATE(269)] = 5276,
  [SMALL_STATE(270)] = 5282,
  [SMALL_STATE(271)] = 5292,
  [SMALL_STATE(272)] = 5300,
  [SMALL_STATE(273)] = 5310,
  [SMALL_STATE(274)] = 5320,
  [SMALL_STATE(275)] = 5330,
  [SMALL_STATE(276)] = 5340,
  [SMALL_STATE(277)] = 5350,
  [SMALL_STATE(278)] = 5360,
  [SMALL_STATE(279)] = 5368,
  [SMALL_STATE(280)] = 5376,
  [SMALL_STATE(281)] = 5386,
  [SMALL_STATE(282)] = 5394,
  [SMALL_STATE(283)] = 5402,
  [SMALL_STATE(284)] = 5410,
  [SMALL_STATE(285)] = 5420,
  [SMALL_STATE(286)] = 5430,
  [SMALL_STATE(287)] = 5438,
  [SMALL_STATE(288)] = 5446,
  [SMALL_STATE(289)] = 5454,
  [SMALL_STATE(290)] = 5462,
  [SMALL_STATE(291)] = 5470,
  [SMALL_STATE(292)] = 5480,
  [SMALL_STATE(293)] = 5490,
  [SMALL_STATE(294)] = 5498,
  [SMALL_STATE(295)] = 5508,
  [SMALL_STATE(296)] = 5518,
  [SMALL_STATE(297)] = 5528,
  [SMALL_STATE(298)] = 5538,
  [SMALL_STATE(299)] = 5546,
  [SMALL_STATE(300)] = 5553,
  [SMALL_STATE(301)] = 5560,
  [SMALL_STATE(302)] = 5567,
  [SMALL_STATE(303)] = 5574,
  [SMALL_STATE(304)] = 5581,
  [SMALL_STATE(305)] = 5588,
  [SMALL_STATE(306)] = 5595,
  [SMALL_STATE(307)] = 5599,
  [SMALL_STATE(308)] = 5603,
  [SMALL_STATE(309)] = 5607,
  [SMALL_STATE(310)] = 5611,
  [SMALL_STATE(311)] = 5615,
  [SMALL_STATE(312)] = 5619,
  [SMALL_STATE(313)] = 5623,
  [SMALL_STATE(314)] = 5627,
  [SMALL_STATE(315)] = 5631,
  [SMALL_STATE(316)] = 5635,
  [SMALL_STATE(317)] = 5639,
  [SMALL_STATE(318)] = 5643,
  [SMALL_STATE(319)] = 5647,
  [SMALL_STATE(320)] = 5651,
  [SMALL_STATE(321)] = 5655,
  [SMALL_STATE(322)] = 5659,
  [SMALL_STATE(323)] = 5663,
  [SMALL_STATE(324)] = 5667,
  [SMALL_STATE(325)] = 5671,
  [SMALL_STATE(326)] = 5675,
  [SMALL_STATE(327)] = 5679,
  [SMALL_STATE(328)] = 5683,
  [SMALL_STATE(329)] = 5687,
  [SMALL_STATE(330)] = 5691,
  [SMALL_STATE(331)] = 5695,
  [SMALL_STATE(332)] = 5699,
  [SMALL_STATE(333)] = 5703,
  [SMALL_STATE(334)] = 5707,
  [SMALL_STATE(335)] = 5711,
  [SMALL_STATE(336)] = 5715,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(262),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(223),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(299),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(299),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(188),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(325),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(296),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(291),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(305),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(127),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(127),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(313),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(231),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(132),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(132),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 3),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(248),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(126),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(126),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 5, .production_id = 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 5, .production_id = 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(319),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(8),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(26),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(132),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(132),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_keyword, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_keyword, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(71),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 6),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 6),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(322),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 7),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 5, .production_id = 4),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 5, .production_id = 4),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 5),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 5),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 5),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 5),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 4),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 4),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 5),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 5),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 3),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 3),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unescaped_buffered_code, 2),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unescaped_buffered_code, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffered_code, 2),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffered_code, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(127),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(127),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 3),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 3),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 2),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 6),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 6),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 2),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 2),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 2),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 1),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(211),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(236),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [502] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(150),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(255),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(125),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [563] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2), SHIFT_REPEAT(312),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(125),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 2),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 2),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(216),
  [614] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(320),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_name, 1),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 1),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 1),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_angular_attribute_name, 1),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_angular_attribute_name, 1),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [665] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(241),
  [668] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(320),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_attribute_value, 2),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__object_attribute_value, 2),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_attribute_value, 2),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__array_attribute_value, 2),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_attribute_value, 2),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__template_attribute_value, 2),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__un_delimited_javascript, 1),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 5),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 5),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 3),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 3),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 3),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 3),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_attribute_value, 2),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable_attribute_value, 2),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 2),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 2),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_attribute_value, 2),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_attribute_value, 2),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 3),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 3),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ternary_attribute_value, 2),
  [783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ternary_attribute_value, 2),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 3),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 3),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [837] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
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
