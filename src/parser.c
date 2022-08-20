#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 338
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 95
#define ALIAS_COUNT 2
#define TOKEN_COUNT 51
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
  aux_sym__ternary_attribute_value_token2 = 23,
  aux_sym__variable_attribute_value_token1 = 24,
  aux_sym__object_attribute_value_token1 = 25,
  aux_sym__template_attribute_value_token1 = 26,
  aux_sym__array_attribute_value_token1 = 27,
  aux_sym__attribute_token1 = 28,
  anon_sym_SLASH_SLASH = 29,
  sym_tag_name = 30,
  sym_class = 31,
  sym_id = 32,
  aux_sym_angular_attribute_name_token1 = 33,
  aux_sym_angular_attribute_name_token2 = 34,
  aux_sym_angular_attribute_name_token3 = 35,
  anon_sym_SQUOTE = 36,
  aux_sym_quoted_javascript_token1 = 37,
  anon_sym_DQUOTE = 38,
  aux_sym_quoted_javascript_token2 = 39,
  sym_content = 40,
  sym__comment_content = 41,
  anon_sym_LBRACE_LBRACE = 42,
  anon_sym_RBRACE_RBRACE = 43,
  sym__delimited_javascript = 44,
  sym__un_delimited_javascript_line = 45,
  anon_sym_DASH = 46,
  aux_sym_unbuffered_code_token1 = 47,
  sym__newline = 48,
  sym__indent = 49,
  sym__dedent = 50,
  sym_source_file = 51,
  sym_doctype = 52,
  sym_pipe = 53,
  sym_conditional = 54,
  sym_case = 55,
  sym__when_content = 56,
  sym__when_keyword = 57,
  sym_when = 58,
  sym_unescaped_buffered_code = 59,
  sym_buffered_code = 60,
  sym_tag = 61,
  sym__content_after_dot = 62,
  sym_attributes = 63,
  sym_attribute = 64,
  sym__ternary_attribute_value = 65,
  sym__string_attribute_value = 66,
  sym__variable_attribute_value = 67,
  sym__object_attribute_value = 68,
  sym__template_attribute_value = 69,
  sym__array_attribute_value = 70,
  sym__attribute = 71,
  sym__angular_attribute = 72,
  sym_children = 73,
  sym__children_choice = 74,
  sym_comment = 75,
  sym_angular_attribute_name = 76,
  sym_attribute_name = 77,
  sym_quoted_javascript = 78,
  sym_quoted_attribute_value = 79,
  aux_sym__content_or_javascript = 80,
  sym__un_delimited_javascript = 81,
  aux_sym__un_delimited_javascript_multiline = 82,
  sym__single_line_buf_code = 83,
  sym__multi_line_buf_code = 84,
  sym_unbuffered_code = 85,
  aux_sym_source_file_repeat1 = 86,
  aux_sym_conditional_repeat1 = 87,
  aux_sym_case_repeat1 = 88,
  aux_sym_tag_repeat1 = 89,
  aux_sym__content_after_dot_repeat1 = 90,
  aux_sym_attributes_repeat1 = 91,
  aux_sym__attribute_repeat1 = 92,
  aux_sym_children_repeat1 = 93,
  aux_sym_comment_repeat1 = 94,
  alias_sym_attribute_modifier = 95,
  alias_sym_attribute_value = 96,
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
  [aux_sym__ternary_attribute_value_token1] = "_ternary_attribute_value_token1",
  [aux_sym__ternary_attribute_value_token2] = "javascript",
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
  [sym__delimited_javascript] = "_delimited_javascript",
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
  [aux_sym__ternary_attribute_value_token1] = aux_sym__ternary_attribute_value_token1,
  [aux_sym__ternary_attribute_value_token2] = aux_sym__when_keyword_token1,
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
  [sym__delimited_javascript] = sym__delimited_javascript,
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
    .visible = false,
    .named = false,
  },
  [aux_sym__ternary_attribute_value_token2] = {
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
    .visible = false,
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
      if (eof) ADVANCE(83);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '"') ADVANCE(265);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == '(') ADVANCE(131);
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == ',') ADVANCE(132);
      if (lookahead == '-') ADVANCE(296);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == '=') ADVANCE(125);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == '`') ADVANCE(24);
      if (lookahead == 'c') ADVANCE(26);
      if (lookahead == 'd') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead == 'h') ADVANCE(61);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 's') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(50);
      if (lookahead == 'w') ADVANCE(39);
      if (lookahead == 'x') ADVANCE(47);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '|') ADVANCE(91);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(292);
      if (lookahead != 0) ADVANCE(295);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(284);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(118);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(128);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '(') ADVANCE(131);
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == ',') ADVANCE(132);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == '=') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(128);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == ',') ADVANCE(132);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == '=') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '"') ADVANCE(266);
      if (lookahead == '\'') ADVANCE(262);
      if (lookahead == ')') ADVANCE(134);
      if (lookahead == '[') ADVANCE(136);
      if (lookahead == '`') ADVANCE(138);
      if (lookahead == '{') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      if (lookahead != 0) ADVANCE(139);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == '}') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == ' ') SKIP(9)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(272);
      if (lookahead != 0) ADVANCE(280);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '=') ADVANCE(125);
      if (lookahead == '|') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(267);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (lookahead != 0) ADVANCE(264);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 16:
      if (lookahead == ')') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == '}') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(171);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(122);
      END_STATE();
    case 20:
      if (lookahead == '?') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '?') ADVANCE(77);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == ']') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == ']') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[') ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '`') ADVANCE(168);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '`') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(94);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(98);
      END_STATE();
    case 38:
      if (lookahead == 'f') ADVANCE(27);
      END_STATE();
    case 39:
      if (lookahead == 'h') ADVANCE(34);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 62:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 63:
      if (lookahead == 'y') ADVANCE(51);
      END_STATE();
    case 64:
      if (lookahead == '{') ADVANCE(281);
      END_STATE();
    case 65:
      if (lookahead == '}') ADVANCE(282);
      END_STATE();
    case 66:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 67:
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 68:
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 69:
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 70:
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 71:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '?') ADVANCE(21);
      END_STATE();
    case 72:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 73:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 74:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 75:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 76:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 77:
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '?') ADVANCE(154);
      END_STATE();
    case 78:
      if (eof) ADVANCE(83);
      if (lookahead == '\n') SKIP(78)
      if (lookahead == '!') ADVANCE(288);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '-') ADVANCE(297);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == '/') ADVANCE(287);
      if (lookahead == '=') ADVANCE(126);
      if (lookahead == 'c') ADVANCE(176);
      if (lookahead == 'd') ADVANCE(191);
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead == 'i') ADVANCE(199);
      if (lookahead == 'u') ADVANCE(216);
      if (lookahead == 'w') ADVANCE(203);
      if (lookahead == '|') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0) ADVANCE(295);
      END_STATE();
    case 79:
      if (eof) ADVANCE(83);
      if (lookahead == '\n') SKIP(79)
      if (lookahead == '!') ADVANCE(288);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '-') ADVANCE(297);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == '/') ADVANCE(287);
      if (lookahead == '=') ADVANCE(126);
      if (lookahead == 'c') ADVANCE(176);
      if (lookahead == 'd') ADVANCE(219);
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead == 'i') ADVANCE(199);
      if (lookahead == 'u') ADVANCE(216);
      if (lookahead == '|') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0) ADVANCE(295);
      END_STATE();
    case 80:
      if (eof) ADVANCE(83);
      if (lookahead == ' ') SKIP(80)
      if (lookahead == '!') ADVANCE(274);
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '-') ADVANCE(298);
      if (lookahead == '.') ADVANCE(278);
      if (lookahead == '/') ADVANCE(273);
      if (lookahead == '=') ADVANCE(127);
      if (lookahead == 'c') ADVANCE(178);
      if (lookahead == 'd') ADVANCE(220);
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead == 'i') ADVANCE(202);
      if (lookahead == 'u') ADVANCE(217);
      if (lookahead == '|') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0) ADVANCE(280);
      END_STATE();
    case 81:
      if (eof) ADVANCE(83);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '-') ADVANCE(296);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == '=') ADVANCE(125);
      if (lookahead == 'c') ADVANCE(174);
      if (lookahead == 'd') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(210);
      if (lookahead == 'i') ADVANCE(198);
      if (lookahead == 'u') ADVANCE(215);
      if (lookahead == 'w') ADVANCE(204);
      if (lookahead == '|') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(81)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 82:
      if (eof) ADVANCE(83);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '-') ADVANCE(296);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '=') ADVANCE(125);
      if (lookahead == 'c') ADVANCE(174);
      if (lookahead == 'd') ADVANCE(218);
      if (lookahead == 'e') ADVANCE(210);
      if (lookahead == 'i') ADVANCE(198);
      if (lookahead == 'u') ADVANCE(215);
      if (lookahead == '|') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(82)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_doctype);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_strict);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(290);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(276);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(40);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__when_keyword_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__when_keyword_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == ')') ADVANCE(134);
      if (lookahead == '[') ADVANCE(136);
      if (lookahead == '`') ADVANCE(138);
      if (lookahead == '{') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(139);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == ']') ADVANCE(166);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(163);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '}') ADVANCE(164);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(164);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '`') ADVANCE(166);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(24);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(166);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token2);
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead == '"') ADVANCE(140);
      if (lookahead == '\'') ADVANCE(143);
      if (lookahead == ')') ADVANCE(12);
      if (lookahead == '?') ADVANCE(147);
      if (lookahead == '`') ADVANCE(144);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token2);
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead == '"') ADVANCE(143);
      if (lookahead == '\'') ADVANCE(141);
      if (lookahead == ')') ADVANCE(14);
      if (lookahead == '?') ADVANCE(148);
      if (lookahead == '`') ADVANCE(145);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token2);
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == ' ') ADVANCE(142);
      if (lookahead == '"') ADVANCE(144);
      if (lookahead == '\'') ADVANCE(145);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == '?') ADVANCE(149);
      if (lookahead == '`') ADVANCE(142);
      if (lookahead != 0) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token2);
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == '"') ADVANCE(143);
      if (lookahead == '\'') ADVANCE(143);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(150);
      if (lookahead == '`') ADVANCE(146);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token2);
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == ' ') ADVANCE(144);
      if (lookahead == '"') ADVANCE(144);
      if (lookahead == '\'') ADVANCE(146);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == '?') ADVANCE(151);
      if (lookahead == '`') ADVANCE(144);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token2);
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == ' ') ADVANCE(145);
      if (lookahead == '"') ADVANCE(146);
      if (lookahead == '\'') ADVANCE(145);
      if (lookahead == ')') ADVANCE(68);
      if (lookahead == '?') ADVANCE(152);
      if (lookahead == '`') ADVANCE(145);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token2);
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == ' ') ADVANCE(146);
      if (lookahead == '"') ADVANCE(146);
      if (lookahead == '\'') ADVANCE(146);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '?') ADVANCE(153);
      if (lookahead == '`') ADVANCE(146);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token2);
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '"') ADVANCE(147);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(12);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token2);
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '\'') ADVANCE(148);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(14);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token2);
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '`') ADVANCE(149);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(25);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token2);
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(150);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(66);
      if (lookahead != 0) ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token2);
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(151);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(67);
      if (lookahead != 0) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token2);
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(152);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(68);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token2);
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(153);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(70);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token2);
      if (lookahead == ' ') ADVANCE(154);
      if (lookahead == '"') ADVANCE(140);
      if (lookahead == '\'') ADVANCE(141);
      if (lookahead == '?') ADVANCE(162);
      if (lookahead == '`') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token2);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token2);
      if (lookahead == '\'') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token2);
      if (lookahead == '`') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token2);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token2);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token2);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token2);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == ']') ADVANCE(166);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '}') ADVANCE(164);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '`') ADVANCE(166);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(24);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == '}') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(17);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__attribute_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(224);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(241);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(242);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(234);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(236);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(238);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(240);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(179);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(214);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(231);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(192);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(189);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(237);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(239);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(190);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(193);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(197);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(227);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(232);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(235);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(207);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(208);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(209);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(179);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(181);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(187);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(196);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(185);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(225);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(226);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(229);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(195);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(244);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(245);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(205);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(206);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(221);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(222);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(223);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token1);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token2);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(166);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(264);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(166);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(270);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == ' ') ADVANCE(271);
      if (lookahead == '!') ADVANCE(274);
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '-') ADVANCE(298);
      if (lookahead == '.') ADVANCE(278);
      if (lookahead == '/') ADVANCE(273);
      if (lookahead == '=') ADVANCE(127);
      if (lookahead == 'c') ADVANCE(178);
      if (lookahead == 'd') ADVANCE(220);
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead == 'i') ADVANCE(202);
      if (lookahead == 'u') ADVANCE(217);
      if (lookahead == '|') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0) ADVANCE(280);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(272);
      if (lookahead == ' ') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(272);
      if (lookahead != 0) ADVANCE(280);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '/') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '=') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == 'f') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == 'i') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__delimited_javascript);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(284);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__delimited_javascript);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(288);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '-') ADVANCE(297);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == '/') ADVANCE(287);
      if (lookahead == '=') ADVANCE(126);
      if (lookahead == 'c') ADVANCE(176);
      if (lookahead == 'd') ADVANCE(191);
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead == 'i') ADVANCE(199);
      if (lookahead == 'u') ADVANCE(216);
      if (lookahead == 'w') ADVANCE(203);
      if (lookahead == '|') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(288);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '-') ADVANCE(297);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == '/') ADVANCE(287);
      if (lookahead == '=') ADVANCE(126);
      if (lookahead == 'c') ADVANCE(176);
      if (lookahead == 'd') ADVANCE(219);
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead == 'i') ADVANCE(199);
      if (lookahead == 'u') ADVANCE(216);
      if (lookahead == '|') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '/') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '=') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'i') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_unbuffered_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(299);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 82},
  [2] = {.lex_state = 82},
  [3] = {.lex_state = 82},
  [4] = {.lex_state = 81, .external_lex_state = 2},
  [5] = {.lex_state = 81, .external_lex_state = 2},
  [6] = {.lex_state = 81, .external_lex_state = 2},
  [7] = {.lex_state = 81, .external_lex_state = 2},
  [8] = {.lex_state = 81, .external_lex_state = 3},
  [9] = {.lex_state = 78, .external_lex_state = 2},
  [10] = {.lex_state = 81, .external_lex_state = 2},
  [11] = {.lex_state = 81, .external_lex_state = 2},
  [12] = {.lex_state = 82, .external_lex_state = 2},
  [13] = {.lex_state = 81},
  [14] = {.lex_state = 81},
  [15] = {.lex_state = 78, .external_lex_state = 2},
  [16] = {.lex_state = 82, .external_lex_state = 2},
  [17] = {.lex_state = 82, .external_lex_state = 2},
  [18] = {.lex_state = 81, .external_lex_state = 4},
  [19] = {.lex_state = 81, .external_lex_state = 4},
  [20] = {.lex_state = 81, .external_lex_state = 4},
  [21] = {.lex_state = 81, .external_lex_state = 2},
  [22] = {.lex_state = 81, .external_lex_state = 4},
  [23] = {.lex_state = 81, .external_lex_state = 3},
  [24] = {.lex_state = 81, .external_lex_state = 4},
  [25] = {.lex_state = 81, .external_lex_state = 4},
  [26] = {.lex_state = 78, .external_lex_state = 2},
  [27] = {.lex_state = 81, .external_lex_state = 4},
  [28] = {.lex_state = 81, .external_lex_state = 4},
  [29] = {.lex_state = 80, .external_lex_state = 2},
  [30] = {.lex_state = 82, .external_lex_state = 4},
  [31] = {.lex_state = 82, .external_lex_state = 4},
  [32] = {.lex_state = 82, .external_lex_state = 4},
  [33] = {.lex_state = 79, .external_lex_state = 2},
  [34] = {.lex_state = 81, .external_lex_state = 2},
  [35] = {.lex_state = 81, .external_lex_state = 2},
  [36] = {.lex_state = 80, .external_lex_state = 2},
  [37] = {.lex_state = 81, .external_lex_state = 2},
  [38] = {.lex_state = 81, .external_lex_state = 2},
  [39] = {.lex_state = 81, .external_lex_state = 2},
  [40] = {.lex_state = 81, .external_lex_state = 2},
  [41] = {.lex_state = 81, .external_lex_state = 2},
  [42] = {.lex_state = 79, .external_lex_state = 2},
  [43] = {.lex_state = 81, .external_lex_state = 2},
  [44] = {.lex_state = 80, .external_lex_state = 2},
  [45] = {.lex_state = 81, .external_lex_state = 2},
  [46] = {.lex_state = 80, .external_lex_state = 2},
  [47] = {.lex_state = 81, .external_lex_state = 2},
  [48] = {.lex_state = 81, .external_lex_state = 2},
  [49] = {.lex_state = 82, .external_lex_state = 4},
  [50] = {.lex_state = 81, .external_lex_state = 2},
  [51] = {.lex_state = 81, .external_lex_state = 2},
  [52] = {.lex_state = 80, .external_lex_state = 2},
  [53] = {.lex_state = 82, .external_lex_state = 4},
  [54] = {.lex_state = 81, .external_lex_state = 2},
  [55] = {.lex_state = 81, .external_lex_state = 2},
  [56] = {.lex_state = 81, .external_lex_state = 2},
  [57] = {.lex_state = 81, .external_lex_state = 2},
  [58] = {.lex_state = 81, .external_lex_state = 2},
  [59] = {.lex_state = 81, .external_lex_state = 2},
  [60] = {.lex_state = 81, .external_lex_state = 2},
  [61] = {.lex_state = 82, .external_lex_state = 4},
  [62] = {.lex_state = 81, .external_lex_state = 2},
  [63] = {.lex_state = 81, .external_lex_state = 2},
  [64] = {.lex_state = 81, .external_lex_state = 2},
  [65] = {.lex_state = 81, .external_lex_state = 2},
  [66] = {.lex_state = 82, .external_lex_state = 5},
  [67] = {.lex_state = 82, .external_lex_state = 4},
  [68] = {.lex_state = 82},
  [69] = {.lex_state = 82},
  [70] = {.lex_state = 82, .external_lex_state = 5},
  [71] = {.lex_state = 79, .external_lex_state = 2},
  [72] = {.lex_state = 82, .external_lex_state = 5},
  [73] = {.lex_state = 81},
  [74] = {.lex_state = 80, .external_lex_state = 2},
  [75] = {.lex_state = 82, .external_lex_state = 5},
  [76] = {.lex_state = 82, .external_lex_state = 5},
  [77] = {.lex_state = 81},
  [78] = {.lex_state = 82},
  [79] = {.lex_state = 82, .external_lex_state = 5},
  [80] = {.lex_state = 82, .external_lex_state = 2},
  [81] = {.lex_state = 82, .external_lex_state = 2},
  [82] = {.lex_state = 82, .external_lex_state = 2},
  [83] = {.lex_state = 82, .external_lex_state = 2},
  [84] = {.lex_state = 82, .external_lex_state = 5},
  [85] = {.lex_state = 82, .external_lex_state = 2},
  [86] = {.lex_state = 82, .external_lex_state = 2},
  [87] = {.lex_state = 82, .external_lex_state = 5},
  [88] = {.lex_state = 82, .external_lex_state = 5},
  [89] = {.lex_state = 82, .external_lex_state = 2},
  [90] = {.lex_state = 82, .external_lex_state = 2},
  [91] = {.lex_state = 82, .external_lex_state = 2},
  [92] = {.lex_state = 82, .external_lex_state = 2},
  [93] = {.lex_state = 82, .external_lex_state = 2},
  [94] = {.lex_state = 82, .external_lex_state = 2},
  [95] = {.lex_state = 82, .external_lex_state = 2},
  [96] = {.lex_state = 82, .external_lex_state = 2},
  [97] = {.lex_state = 82, .external_lex_state = 2},
  [98] = {.lex_state = 82, .external_lex_state = 2},
  [99] = {.lex_state = 82, .external_lex_state = 2},
  [100] = {.lex_state = 82, .external_lex_state = 2},
  [101] = {.lex_state = 82, .external_lex_state = 2},
  [102] = {.lex_state = 82},
  [103] = {.lex_state = 82},
  [104] = {.lex_state = 82},
  [105] = {.lex_state = 82},
  [106] = {.lex_state = 82},
  [107] = {.lex_state = 82},
  [108] = {.lex_state = 82},
  [109] = {.lex_state = 82},
  [110] = {.lex_state = 82},
  [111] = {.lex_state = 82},
  [112] = {.lex_state = 82},
  [113] = {.lex_state = 82},
  [114] = {.lex_state = 82},
  [115] = {.lex_state = 82},
  [116] = {.lex_state = 82},
  [117] = {.lex_state = 82},
  [118] = {.lex_state = 82},
  [119] = {.lex_state = 82},
  [120] = {.lex_state = 82},
  [121] = {.lex_state = 82},
  [122] = {.lex_state = 82},
  [123] = {.lex_state = 82},
  [124] = {.lex_state = 82},
  [125] = {.lex_state = 5, .external_lex_state = 6},
  [126] = {.lex_state = 5, .external_lex_state = 6},
  [127] = {.lex_state = 5, .external_lex_state = 6},
  [128] = {.lex_state = 5, .external_lex_state = 6},
  [129] = {.lex_state = 5, .external_lex_state = 6},
  [130] = {.lex_state = 5, .external_lex_state = 6},
  [131] = {.lex_state = 5, .external_lex_state = 6},
  [132] = {.lex_state = 5, .external_lex_state = 6},
  [133] = {.lex_state = 10},
  [134] = {.lex_state = 10},
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 10},
  [139] = {.lex_state = 10},
  [140] = {.lex_state = 10},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 10},
  [144] = {.lex_state = 10},
  [145] = {.lex_state = 10},
  [146] = {.lex_state = 10},
  [147] = {.lex_state = 15},
  [148] = {.lex_state = 15},
  [149] = {.lex_state = 15},
  [150] = {.lex_state = 5, .external_lex_state = 6},
  [151] = {.lex_state = 6, .external_lex_state = 6},
  [152] = {.lex_state = 6, .external_lex_state = 6},
  [153] = {.lex_state = 6, .external_lex_state = 6},
  [154] = {.lex_state = 6, .external_lex_state = 6},
  [155] = {.lex_state = 6, .external_lex_state = 6},
  [156] = {.lex_state = 6, .external_lex_state = 6},
  [157] = {.lex_state = 6, .external_lex_state = 6},
  [158] = {.lex_state = 6, .external_lex_state = 6},
  [159] = {.lex_state = 10, .external_lex_state = 2},
  [160] = {.lex_state = 10, .external_lex_state = 2},
  [161] = {.lex_state = 10},
  [162] = {.lex_state = 10},
  [163] = {.lex_state = 10},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 10},
  [166] = {.lex_state = 10, .external_lex_state = 4},
  [167] = {.lex_state = 10, .external_lex_state = 4},
  [168] = {.lex_state = 10, .external_lex_state = 4},
  [169] = {.lex_state = 10, .external_lex_state = 4},
  [170] = {.lex_state = 10, .external_lex_state = 4},
  [171] = {.lex_state = 10, .external_lex_state = 4},
  [172] = {.lex_state = 10, .external_lex_state = 2},
  [173] = {.lex_state = 10, .external_lex_state = 2},
  [174] = {.lex_state = 10, .external_lex_state = 2},
  [175] = {.lex_state = 10, .external_lex_state = 2},
  [176] = {.lex_state = 10, .external_lex_state = 4},
  [177] = {.lex_state = 10, .external_lex_state = 2},
  [178] = {.lex_state = 6, .external_lex_state = 6},
  [179] = {.lex_state = 6, .external_lex_state = 6},
  [180] = {.lex_state = 6},
  [181] = {.lex_state = 6, .external_lex_state = 6},
  [182] = {.lex_state = 15},
  [183] = {.lex_state = 10, .external_lex_state = 2},
  [184] = {.lex_state = 10},
  [185] = {.lex_state = 10},
  [186] = {.lex_state = 10},
  [187] = {.lex_state = 1, .external_lex_state = 2},
  [188] = {.lex_state = 1, .external_lex_state = 2},
  [189] = {.lex_state = 10},
  [190] = {.lex_state = 1, .external_lex_state = 2},
  [191] = {.lex_state = 1, .external_lex_state = 2},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 10, .external_lex_state = 2},
  [194] = {.lex_state = 1, .external_lex_state = 2},
  [195] = {.lex_state = 10},
  [196] = {.lex_state = 10, .external_lex_state = 2},
  [197] = {.lex_state = 10, .external_lex_state = 2},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 10, .external_lex_state = 2},
  [200] = {.lex_state = 10, .external_lex_state = 2},
  [201] = {.lex_state = 10, .external_lex_state = 2},
  [202] = {.lex_state = 10, .external_lex_state = 2},
  [203] = {.lex_state = 10, .external_lex_state = 2},
  [204] = {.lex_state = 10, .external_lex_state = 2},
  [205] = {.lex_state = 10, .external_lex_state = 2},
  [206] = {.lex_state = 6},
  [207] = {.lex_state = 10, .external_lex_state = 2},
  [208] = {.lex_state = 10, .external_lex_state = 2},
  [209] = {.lex_state = 10, .external_lex_state = 2},
  [210] = {.lex_state = 10, .external_lex_state = 2},
  [211] = {.lex_state = 10, .external_lex_state = 2},
  [212] = {.lex_state = 6},
  [213] = {.lex_state = 10, .external_lex_state = 2},
  [214] = {.lex_state = 1, .external_lex_state = 6},
  [215] = {.lex_state = 1, .external_lex_state = 6},
  [216] = {.lex_state = 1, .external_lex_state = 6},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 10},
  [221] = {.lex_state = 1, .external_lex_state = 6},
  [222] = {.lex_state = 1, .external_lex_state = 6},
  [223] = {.lex_state = 1, .external_lex_state = 6},
  [224] = {.lex_state = 10},
  [225] = {.lex_state = 1, .external_lex_state = 6},
  [226] = {.lex_state = 10},
  [227] = {.lex_state = 1},
  [228] = {.lex_state = 1, .external_lex_state = 6},
  [229] = {.lex_state = 10},
  [230] = {.lex_state = 1, .external_lex_state = 6},
  [231] = {.lex_state = 1, .external_lex_state = 6},
  [232] = {.lex_state = 10},
  [233] = {.lex_state = 1, .external_lex_state = 6},
  [234] = {.lex_state = 5},
  [235] = {.lex_state = 10},
  [236] = {.lex_state = 1, .external_lex_state = 6},
  [237] = {.lex_state = 5},
  [238] = {.lex_state = 10},
  [239] = {.lex_state = 1, .external_lex_state = 6},
  [240] = {.lex_state = 1, .external_lex_state = 6},
  [241] = {.lex_state = 1, .external_lex_state = 6},
  [242] = {.lex_state = 10},
  [243] = {.lex_state = 2, .external_lex_state = 6},
  [244] = {.lex_state = 1, .external_lex_state = 6},
  [245] = {.lex_state = 1, .external_lex_state = 6},
  [246] = {.lex_state = 2, .external_lex_state = 6},
  [247] = {.lex_state = 10},
  [248] = {.lex_state = 10},
  [249] = {.lex_state = 1, .external_lex_state = 6},
  [250] = {.lex_state = 1, .external_lex_state = 6},
  [251] = {.lex_state = 10},
  [252] = {.lex_state = 1, .external_lex_state = 6},
  [253] = {.lex_state = 1, .external_lex_state = 6},
  [254] = {.lex_state = 1, .external_lex_state = 6},
  [255] = {.lex_state = 10},
  [256] = {.lex_state = 2},
  [257] = {.lex_state = 1},
  [258] = {.lex_state = 1},
  [259] = {.lex_state = 1},
  [260] = {.lex_state = 2},
  [261] = {.lex_state = 2},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 1},
  [264] = {.lex_state = 1},
  [265] = {.lex_state = 1},
  [266] = {.lex_state = 1},
  [267] = {.lex_state = 5},
  [268] = {.lex_state = 5},
  [269] = {.lex_state = 10},
  [270] = {.lex_state = 2},
  [271] = {.lex_state = 5},
  [272] = {.lex_state = 5},
  [273] = {.lex_state = 1},
  [274] = {.lex_state = 2},
  [275] = {.lex_state = 1},
  [276] = {.lex_state = 1},
  [277] = {.lex_state = 5},
  [278] = {.lex_state = 5},
  [279] = {.lex_state = 5},
  [280] = {.lex_state = 2},
  [281] = {.lex_state = 1},
  [282] = {.lex_state = 5},
  [283] = {.lex_state = 5},
  [284] = {.lex_state = 5},
  [285] = {.lex_state = 5},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 1, .external_lex_state = 6},
  [288] = {.lex_state = 5},
  [289] = {.lex_state = 5},
  [290] = {.lex_state = 5},
  [291] = {.lex_state = 5},
  [292] = {.lex_state = 2},
  [293] = {.lex_state = 5},
  [294] = {.lex_state = 1, .external_lex_state = 2},
  [295] = {.lex_state = 2},
  [296] = {.lex_state = 2},
  [297] = {.lex_state = 2},
  [298] = {.lex_state = 1},
  [299] = {.lex_state = 9, .external_lex_state = 6},
  [300] = {.lex_state = 13},
  [301] = {.lex_state = 5},
  [302] = {.lex_state = 11},
  [303] = {.lex_state = 11},
  [304] = {.lex_state = 13},
  [305] = {.lex_state = 2},
  [306] = {.lex_state = 0, .external_lex_state = 6},
  [307] = {.lex_state = 3},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0, .external_lex_state = 5},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 15},
  [314] = {.lex_state = 299},
  [315] = {.lex_state = 299},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0, .external_lex_state = 6},
  [318] = {.lex_state = 0, .external_lex_state = 5},
  [319] = {.lex_state = 0, .external_lex_state = 6},
  [320] = {.lex_state = 4},
  [321] = {.lex_state = 0, .external_lex_state = 6},
  [322] = {.lex_state = 0, .external_lex_state = 5},
  [323] = {.lex_state = 0, .external_lex_state = 5},
  [324] = {.lex_state = 71},
  [325] = {.lex_state = 0, .external_lex_state = 6},
  [326] = {.lex_state = 0, .external_lex_state = 6},
  [327] = {.lex_state = 2},
  [328] = {.lex_state = 0, .external_lex_state = 6},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0, .external_lex_state = 6},
  [331] = {.lex_state = 0, .external_lex_state = 6},
  [332] = {.lex_state = 0, .external_lex_state = 5},
  [333] = {.lex_state = 0, .external_lex_state = 5},
  [334] = {.lex_state = 0, .external_lex_state = 5},
  [335] = {.lex_state = 0, .external_lex_state = 6},
  [336] = {.lex_state = 0, .external_lex_state = 6},
  [337] = {.lex_state = 0, .external_lex_state = 6},
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
    [sym_source_file] = STATE(316),
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
    STATE(155), 1,
      sym_attributes,
    ACTIONS(382), 2,
      sym_class,
      sym_id,
    STATE(210), 3,
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
    STATE(158), 1,
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
    STATE(154), 1,
      sym_attributes,
    ACTIONS(418), 2,
      sym_class,
      sym_id,
    STATE(183), 3,
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
    STATE(153), 1,
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
    STATE(156), 1,
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
    STATE(157), 1,
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
    STATE(152), 1,
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
    STATE(204), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(464), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(160), 4,
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
    STATE(180), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(476), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(279), 6,
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
    STATE(282), 6,
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
    STATE(193), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(464), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(160), 4,
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
    STATE(200), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(464), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(160), 4,
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
    STATE(234), 1,
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
    STATE(234), 1,
      sym_angular_attribute_name,
    STATE(288), 1,
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
    STATE(234), 1,
      sym_angular_attribute_name,
    STATE(277), 1,
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
  [3873] = 7,
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
  [3897] = 7,
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
    STATE(193), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3921] = 7,
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
    STATE(183), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3945] = 7,
    ACTIONS(430), 1,
      anon_sym_BANG_EQ,
    ACTIONS(432), 1,
      anon_sym_EQ,
    ACTIONS(436), 1,
      anon_sym_DOT,
    ACTIONS(517), 1,
      anon_sym_COLON,
    ACTIONS(519), 1,
      anon_sym_,
    ACTIONS(521), 1,
      sym__newline,
    STATE(58), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3969] = 7,
    ACTIONS(388), 1,
      anon_sym_BANG_EQ,
    ACTIONS(390), 1,
      anon_sym_EQ,
    ACTIONS(394), 1,
      anon_sym_DOT,
    ACTIONS(523), 1,
      anon_sym_COLON,
    ACTIONS(525), 1,
      anon_sym_,
    ACTIONS(527), 1,
      sym__newline,
    STATE(81), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3993] = 7,
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
  [4017] = 4,
    ACTIONS(81), 1,
      sym__dedent,
    ACTIONS(529), 1,
      anon_sym_PIPE,
    ACTIONS(532), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(159), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4035] = 4,
    ACTIONS(458), 1,
      anon_sym_PIPE,
    ACTIONS(535), 1,
      sym__dedent,
    ACTIONS(464), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(159), 4,
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
    STATE(160), 4,
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
  [4083] = 3,
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
  [4098] = 8,
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
    STATE(267), 1,
      sym_quoted_attribute_value,
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
    STATE(205), 1,
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
    STATE(199), 1,
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
    STATE(199), 1,
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
    STATE(203), 1,
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
    STATE(196), 1,
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
    STATE(213), 1,
      sym_children,
    ACTIONS(174), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4222] = 3,
    ACTIONS(559), 1,
      sym__dedent,
    STATE(173), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(464), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4235] = 3,
    ACTIONS(182), 1,
      sym__dedent,
    STATE(173), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(561), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4248] = 3,
    ACTIONS(564), 1,
      sym__dedent,
    STATE(173), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(464), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4261] = 3,
    ACTIONS(566), 1,
      sym__dedent,
    STATE(173), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(464), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4274] = 2,
    ACTIONS(568), 1,
      sym__indent,
    ACTIONS(214), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4285] = 3,
    ACTIONS(570), 1,
      sym__dedent,
    STATE(173), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(464), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4298] = 2,
    ACTIONS(574), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(572), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [4309] = 2,
    ACTIONS(578), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(576), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [4320] = 4,
    ACTIONS(582), 1,
      anon_sym_,
    ACTIONS(584), 1,
      anon_sym_DOT,
    STATE(180), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(580), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
    ACTIONS(200), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4362] = 2,
    STATE(174), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(464), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4372] = 2,
    STATE(177), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(464), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4382] = 2,
    STATE(172), 2,
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
    STATE(188), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(216), 1,
      aux_sym__content_or_javascript,
  [4408] = 5,
    ACTIONS(597), 1,
      sym_content,
    ACTIONS(600), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(603), 1,
      sym__dedent,
    STATE(188), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(216), 1,
      aux_sym__content_or_javascript,
  [4424] = 2,
    STATE(78), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(25), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4434] = 5,
    ACTIONS(591), 1,
      sym_content,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(605), 1,
      sym__dedent,
    STATE(188), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(216), 1,
      aux_sym__content_or_javascript,
  [4450] = 5,
    ACTIONS(591), 1,
      sym_content,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(607), 1,
      sym__dedent,
    STATE(188), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(216), 1,
      aux_sym__content_or_javascript,
  [4466] = 2,
    STATE(69), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(25), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4476] = 1,
    ACTIONS(168), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4484] = 5,
    ACTIONS(591), 1,
      sym_content,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(609), 1,
      sym__dedent,
    STATE(188), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(216), 1,
      aux_sym__content_or_javascript,
  [4500] = 2,
    STATE(175), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(464), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4510] = 1,
    ACTIONS(168), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4518] = 1,
    ACTIONS(280), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4526] = 4,
    ACTIONS(611), 1,
      anon_sym_when,
    ACTIONS(613), 1,
      anon_sym_default,
    STATE(8), 1,
      sym__when_keyword,
    STATE(13), 2,
      sym_when,
      aux_sym_case_repeat1,
  [4540] = 1,
    ACTIONS(192), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4548] = 1,
    ACTIONS(192), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4556] = 1,
    ACTIONS(264), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4564] = 1,
    ACTIONS(258), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4572] = 1,
    ACTIONS(206), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4580] = 1,
    ACTIONS(206), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4588] = 1,
    ACTIONS(254), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4596] = 2,
    ACTIONS(617), 1,
      anon_sym_,
    ACTIONS(615), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4606] = 1,
    ACTIONS(292), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4614] = 1,
    ACTIONS(312), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4622] = 1,
    ACTIONS(316), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4630] = 1,
    ACTIONS(174), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4638] = 1,
    ACTIONS(308), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4646] = 2,
    ACTIONS(621), 1,
      anon_sym_,
    ACTIONS(619), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4656] = 1,
    ACTIONS(200), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4664] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(623), 1,
      sym_content,
    ACTIONS(625), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym__content_or_javascript,
  [4677] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(623), 1,
      sym_content,
    ACTIONS(627), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym__content_or_javascript,
  [4690] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(623), 1,
      sym_content,
    ACTIONS(629), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym__content_or_javascript,
  [4703] = 4,
    ACTIONS(591), 1,
      sym_content,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(187), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(216), 1,
      aux_sym__content_or_javascript,
  [4716] = 4,
    ACTIONS(591), 1,
      sym_content,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(190), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(216), 1,
      aux_sym__content_or_javascript,
  [4729] = 4,
    ACTIONS(591), 1,
      sym_content,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(191), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(216), 1,
      aux_sym__content_or_javascript,
  [4742] = 2,
    STATE(124), 1,
      sym_tag,
    ACTIONS(25), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4751] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(623), 1,
      sym_content,
    ACTIONS(631), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym__content_or_javascript,
  [4764] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(623), 1,
      sym_content,
    ACTIONS(633), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym__content_or_javascript,
  [4777] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(635), 1,
      sym_content,
    ACTIONS(637), 1,
      sym__newline,
    STATE(254), 1,
      aux_sym__content_or_javascript,
  [4790] = 2,
    STATE(45), 1,
      sym_tag,
    ACTIONS(77), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4799] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(623), 1,
      sym_content,
    ACTIONS(639), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym__content_or_javascript,
  [4812] = 2,
    STATE(58), 1,
      sym_tag,
    ACTIONS(77), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4821] = 4,
    ACTIONS(591), 1,
      sym_content,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(194), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(216), 1,
      aux_sym__content_or_javascript,
  [4834] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(623), 1,
      sym_content,
    ACTIONS(641), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym__content_or_javascript,
  [4847] = 2,
    STATE(59), 1,
      sym_tag,
    ACTIONS(77), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4856] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(623), 1,
      sym_content,
    ACTIONS(643), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym__content_or_javascript,
  [4869] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(645), 1,
      sym_content,
    ACTIONS(647), 1,
      sym__newline,
    STATE(230), 1,
      aux_sym__content_or_javascript,
  [4882] = 2,
    STATE(105), 1,
      sym_tag,
    ACTIONS(25), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4891] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(623), 1,
      sym_content,
    ACTIONS(649), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym__content_or_javascript,
  [4904] = 3,
    ACTIONS(651), 1,
      anon_sym_EQ,
    ACTIONS(653), 1,
      anon_sym_,
    ACTIONS(655), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4915] = 2,
    STATE(200), 1,
      sym_tag,
    ACTIONS(464), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4924] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(623), 1,
      sym_content,
    ACTIONS(657), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym__content_or_javascript,
  [4937] = 2,
    ACTIONS(661), 1,
      anon_sym_,
    ACTIONS(659), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4946] = 2,
    STATE(193), 1,
      sym_tag,
    ACTIONS(464), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4955] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(623), 1,
      sym_content,
    ACTIONS(663), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym__content_or_javascript,
  [4968] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(623), 1,
      sym_content,
    ACTIONS(665), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym__content_or_javascript,
  [4981] = 4,
    ACTIONS(667), 1,
      sym_content,
    ACTIONS(670), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(673), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym__content_or_javascript,
  [4994] = 2,
    STATE(183), 1,
      sym_tag,
    ACTIONS(464), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5003] = 4,
    ACTIONS(675), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(677), 1,
      sym__newline,
    STATE(101), 1,
      sym__single_line_buf_code,
    STATE(328), 1,
      sym__un_delimited_javascript,
  [5016] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(623), 1,
      sym_content,
    ACTIONS(679), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym__content_or_javascript,
  [5029] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(623), 1,
      sym_content,
    ACTIONS(681), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym__content_or_javascript,
  [5042] = 4,
    ACTIONS(675), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(683), 1,
      sym__newline,
    STATE(56), 1,
      sym__single_line_buf_code,
    STATE(317), 1,
      sym__un_delimited_javascript,
  [5055] = 2,
    STATE(92), 1,
      sym_tag,
    ACTIONS(162), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5064] = 2,
    STATE(111), 1,
      sym_tag,
    ACTIONS(25), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5073] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(685), 1,
      sym_content,
    ACTIONS(687), 1,
      sym__newline,
    STATE(253), 1,
      aux_sym__content_or_javascript,
  [5086] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(689), 1,
      sym_content,
    ACTIONS(691), 1,
      sym__newline,
    STATE(244), 1,
      aux_sym__content_or_javascript,
  [5099] = 2,
    STATE(81), 1,
      sym_tag,
    ACTIONS(162), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5108] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(623), 1,
      sym_content,
    ACTIONS(693), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym__content_or_javascript,
  [5121] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(623), 1,
      sym_content,
    ACTIONS(695), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym__content_or_javascript,
  [5134] = 4,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(623), 1,
      sym_content,
    ACTIONS(697), 1,
      sym__newline,
    STATE(241), 1,
      aux_sym__content_or_javascript,
  [5147] = 2,
    STATE(98), 1,
      sym_tag,
    ACTIONS(162), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5156] = 3,
    ACTIONS(675), 1,
      sym__un_delimited_javascript_line,
    STATE(209), 1,
      sym__single_line_buf_code,
    STATE(319), 1,
      sym__un_delimited_javascript,
  [5166] = 3,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(699), 1,
      sym_content,
    STATE(245), 1,
      aux_sym__content_or_javascript,
  [5176] = 3,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(701), 1,
      sym_content,
    STATE(222), 1,
      aux_sym__content_or_javascript,
  [5186] = 3,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(703), 1,
      sym_content,
    STATE(239), 1,
      aux_sym__content_or_javascript,
  [5196] = 3,
    ACTIONS(675), 1,
      sym__un_delimited_javascript_line,
    STATE(90), 1,
      sym__single_line_buf_code,
    STATE(328), 1,
      sym__un_delimited_javascript,
  [5206] = 3,
    ACTIONS(675), 1,
      sym__un_delimited_javascript_line,
    STATE(93), 1,
      sym__single_line_buf_code,
    STATE(328), 1,
      sym__un_delimited_javascript,
  [5216] = 1,
    ACTIONS(705), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [5222] = 3,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(707), 1,
      sym_content,
    STATE(225), 1,
      aux_sym__content_or_javascript,
  [5232] = 3,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(709), 1,
      sym_content,
    STATE(228), 1,
      aux_sym__content_or_javascript,
  [5242] = 3,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(711), 1,
      sym_content,
    STATE(233), 1,
      aux_sym__content_or_javascript,
  [5252] = 3,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(713), 1,
      sym_content,
    STATE(252), 1,
      aux_sym__content_or_javascript,
  [5262] = 2,
    ACTIONS(715), 1,
      anon_sym_,
    ACTIONS(717), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5270] = 2,
    ACTIONS(719), 1,
      anon_sym_,
    ACTIONS(721), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5278] = 1,
    ACTIONS(723), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5284] = 3,
    ACTIONS(725), 1,
      sym__un_delimited_javascript_line,
    STATE(9), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(55), 1,
      sym__multi_line_buf_code,
  [5294] = 2,
    ACTIONS(727), 1,
      anon_sym_,
    ACTIONS(729), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5302] = 2,
    ACTIONS(731), 1,
      anon_sym_,
    ACTIONS(733), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5310] = 3,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(735), 1,
      sym_content,
    STATE(236), 1,
      aux_sym__content_or_javascript,
  [5320] = 3,
    ACTIONS(675), 1,
      sym__un_delimited_javascript_line,
    STATE(208), 1,
      sym__single_line_buf_code,
    STATE(319), 1,
      sym__un_delimited_javascript,
  [5330] = 3,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(737), 1,
      sym_content,
    STATE(240), 1,
      aux_sym__content_or_javascript,
  [5340] = 3,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(739), 1,
      sym_content,
    STATE(215), 1,
      aux_sym__content_or_javascript,
  [5350] = 3,
    ACTIONS(741), 1,
      anon_sym_,
    ACTIONS(743), 1,
      anon_sym_COMMA,
    ACTIONS(745), 1,
      anon_sym_RPAREN,
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
    ACTIONS(755), 1,
      sym__un_delimited_javascript_line,
    STATE(42), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(85), 1,
      sym__multi_line_buf_code,
  [5386] = 3,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(757), 1,
      sym_content,
    STATE(214), 1,
      aux_sym__content_or_javascript,
  [5396] = 2,
    ACTIONS(472), 1,
      anon_sym_,
    ACTIONS(476), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5404] = 2,
    ACTIONS(759), 1,
      anon_sym_,
    ACTIONS(761), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5412] = 2,
    ACTIONS(763), 1,
      anon_sym_,
    ACTIONS(765), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5420] = 2,
    ACTIONS(767), 1,
      anon_sym_,
    ACTIONS(769), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5428] = 3,
    ACTIONS(771), 1,
      anon_sym_SQUOTE,
    ACTIONS(773), 1,
      anon_sym_DQUOTE,
    STATE(291), 1,
      sym_quoted_javascript,
  [5438] = 2,
    ACTIONS(777), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(775), 2,
      sym__newline,
      sym_content,
  [5446] = 3,
    ACTIONS(741), 1,
      anon_sym_,
    ACTIONS(743), 1,
      anon_sym_COMMA,
    ACTIONS(779), 1,
      anon_sym_RPAREN,
  [5456] = 2,
    ACTIONS(781), 1,
      anon_sym_,
    ACTIONS(783), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5464] = 2,
    ACTIONS(785), 1,
      anon_sym_,
    ACTIONS(787), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5472] = 2,
    ACTIONS(789), 1,
      anon_sym_,
    ACTIONS(791), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5480] = 3,
    ACTIONS(675), 1,
      sym__un_delimited_javascript_line,
    STATE(110), 1,
      sym__single_line_buf_code,
    STATE(326), 1,
      sym__un_delimited_javascript,
  [5490] = 2,
    ACTIONS(793), 1,
      anon_sym_,
    ACTIONS(795), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5498] = 2,
    ACTIONS(797), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(603), 2,
      sym__dedent,
      sym_content,
  [5506] = 3,
    ACTIONS(675), 1,
      sym__un_delimited_javascript_line,
    STATE(63), 1,
      sym__single_line_buf_code,
    STATE(317), 1,
      sym__un_delimited_javascript,
  [5516] = 3,
    ACTIONS(675), 1,
      sym__un_delimited_javascript_line,
    STATE(65), 1,
      sym__single_line_buf_code,
    STATE(317), 1,
      sym__un_delimited_javascript,
  [5526] = 3,
    ACTIONS(675), 1,
      sym__un_delimited_javascript_line,
    STATE(107), 1,
      sym__single_line_buf_code,
    STATE(326), 1,
      sym__un_delimited_javascript,
  [5536] = 3,
    ACTIONS(593), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(799), 1,
      sym_content,
    STATE(221), 1,
      aux_sym__content_or_javascript,
  [5546] = 2,
    ACTIONS(801), 1,
      sym__comment_content,
    ACTIONS(803), 1,
      sym__newline,
  [5553] = 2,
    ACTIONS(805), 1,
      anon_sym_SQUOTE,
    ACTIONS(807), 1,
      aux_sym_quoted_javascript_token1,
  [5560] = 2,
    ACTIONS(741), 1,
      anon_sym_,
    ACTIONS(743), 1,
      anon_sym_COMMA,
  [5567] = 2,
    ACTIONS(805), 1,
      anon_sym_DQUOTE,
    ACTIONS(809), 1,
      aux_sym_quoted_javascript_token2,
  [5574] = 2,
    ACTIONS(811), 1,
      anon_sym_DQUOTE,
    ACTIONS(813), 1,
      aux_sym_quoted_javascript_token2,
  [5581] = 2,
    ACTIONS(811), 1,
      anon_sym_SQUOTE,
    ACTIONS(815), 1,
      aux_sym_quoted_javascript_token1,
  [5588] = 2,
    ACTIONS(817), 1,
      sym__un_delimited_javascript_line,
    STATE(192), 1,
      sym__un_delimited_javascript,
  [5595] = 1,
    ACTIONS(723), 1,
      sym__newline,
  [5599] = 1,
    ACTIONS(819), 1,
      sym__delimited_javascript,
  [5603] = 1,
    ACTIONS(821), 1,
      anon_sym_SQUOTE,
  [5607] = 1,
    ACTIONS(823), 1,
      anon_sym_DQUOTE,
  [5611] = 1,
    ACTIONS(823), 1,
      anon_sym_SQUOTE,
  [5615] = 1,
    ACTIONS(825), 1,
      sym__indent,
  [5619] = 1,
    ACTIONS(827), 1,
      anon_sym_RBRACE_RBRACE,
  [5623] = 1,
    ACTIONS(829), 1,
      aux_sym__attribute_token1,
  [5627] = 1,
    ACTIONS(831), 1,
      aux_sym_unbuffered_code_token1,
  [5631] = 1,
    ACTIONS(833), 1,
      aux_sym_unbuffered_code_token1,
  [5635] = 1,
    ACTIONS(835), 1,
      ts_builtin_sym_end,
  [5639] = 1,
    ACTIONS(837), 1,
      sym__newline,
  [5643] = 1,
    ACTIONS(839), 1,
      sym__indent,
  [5647] = 1,
    ACTIONS(841), 1,
      sym__newline,
  [5651] = 1,
    ACTIONS(843), 1,
      aux_sym__when_keyword_token1,
  [5655] = 1,
    ACTIONS(845), 1,
      sym__newline,
  [5659] = 1,
    ACTIONS(847), 1,
      sym__indent,
  [5663] = 1,
    ACTIONS(849), 1,
      sym__indent,
  [5667] = 1,
    ACTIONS(851), 1,
      aux_sym__ternary_attribute_value_token2,
  [5671] = 1,
    ACTIONS(853), 1,
      sym__newline,
  [5675] = 1,
    ACTIONS(855), 1,
      sym__newline,
  [5679] = 1,
    ACTIONS(857), 1,
      sym__un_delimited_javascript_line,
  [5683] = 1,
    ACTIONS(859), 1,
      sym__newline,
  [5687] = 1,
    ACTIONS(821), 1,
      anon_sym_DQUOTE,
  [5691] = 1,
    ACTIONS(861), 1,
      sym__newline,
  [5695] = 1,
    ACTIONS(863), 1,
      sym__newline,
  [5699] = 1,
    ACTIONS(865), 1,
      sym__indent,
  [5703] = 1,
    ACTIONS(867), 1,
      sym__indent,
  [5707] = 1,
    ACTIONS(869), 1,
      sym__indent,
  [5711] = 1,
    ACTIONS(871), 1,
      sym__newline,
  [5715] = 1,
    ACTIONS(873), 1,
      sym__newline,
  [5719] = 1,
    ACTIONS(875), 1,
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
  [SMALL_STATE(159)] = 4017,
  [SMALL_STATE(160)] = 4035,
  [SMALL_STATE(161)] = 4053,
  [SMALL_STATE(162)] = 4068,
  [SMALL_STATE(163)] = 4083,
  [SMALL_STATE(164)] = 4098,
  [SMALL_STATE(165)] = 4123,
  [SMALL_STATE(166)] = 4138,
  [SMALL_STATE(167)] = 4152,
  [SMALL_STATE(168)] = 4166,
  [SMALL_STATE(169)] = 4180,
  [SMALL_STATE(170)] = 4194,
  [SMALL_STATE(171)] = 4208,
  [SMALL_STATE(172)] = 4222,
  [SMALL_STATE(173)] = 4235,
  [SMALL_STATE(174)] = 4248,
  [SMALL_STATE(175)] = 4261,
  [SMALL_STATE(176)] = 4274,
  [SMALL_STATE(177)] = 4285,
  [SMALL_STATE(178)] = 4298,
  [SMALL_STATE(179)] = 4309,
  [SMALL_STATE(180)] = 4320,
  [SMALL_STATE(181)] = 4335,
  [SMALL_STATE(182)] = 4346,
  [SMALL_STATE(183)] = 4354,
  [SMALL_STATE(184)] = 4362,
  [SMALL_STATE(185)] = 4372,
  [SMALL_STATE(186)] = 4382,
  [SMALL_STATE(187)] = 4392,
  [SMALL_STATE(188)] = 4408,
  [SMALL_STATE(189)] = 4424,
  [SMALL_STATE(190)] = 4434,
  [SMALL_STATE(191)] = 4450,
  [SMALL_STATE(192)] = 4466,
  [SMALL_STATE(193)] = 4476,
  [SMALL_STATE(194)] = 4484,
  [SMALL_STATE(195)] = 4500,
  [SMALL_STATE(196)] = 4510,
  [SMALL_STATE(197)] = 4518,
  [SMALL_STATE(198)] = 4526,
  [SMALL_STATE(199)] = 4540,
  [SMALL_STATE(200)] = 4548,
  [SMALL_STATE(201)] = 4556,
  [SMALL_STATE(202)] = 4564,
  [SMALL_STATE(203)] = 4572,
  [SMALL_STATE(204)] = 4580,
  [SMALL_STATE(205)] = 4588,
  [SMALL_STATE(206)] = 4596,
  [SMALL_STATE(207)] = 4606,
  [SMALL_STATE(208)] = 4614,
  [SMALL_STATE(209)] = 4622,
  [SMALL_STATE(210)] = 4630,
  [SMALL_STATE(211)] = 4638,
  [SMALL_STATE(212)] = 4646,
  [SMALL_STATE(213)] = 4656,
  [SMALL_STATE(214)] = 4664,
  [SMALL_STATE(215)] = 4677,
  [SMALL_STATE(216)] = 4690,
  [SMALL_STATE(217)] = 4703,
  [SMALL_STATE(218)] = 4716,
  [SMALL_STATE(219)] = 4729,
  [SMALL_STATE(220)] = 4742,
  [SMALL_STATE(221)] = 4751,
  [SMALL_STATE(222)] = 4764,
  [SMALL_STATE(223)] = 4777,
  [SMALL_STATE(224)] = 4790,
  [SMALL_STATE(225)] = 4799,
  [SMALL_STATE(226)] = 4812,
  [SMALL_STATE(227)] = 4821,
  [SMALL_STATE(228)] = 4834,
  [SMALL_STATE(229)] = 4847,
  [SMALL_STATE(230)] = 4856,
  [SMALL_STATE(231)] = 4869,
  [SMALL_STATE(232)] = 4882,
  [SMALL_STATE(233)] = 4891,
  [SMALL_STATE(234)] = 4904,
  [SMALL_STATE(235)] = 4915,
  [SMALL_STATE(236)] = 4924,
  [SMALL_STATE(237)] = 4937,
  [SMALL_STATE(238)] = 4946,
  [SMALL_STATE(239)] = 4955,
  [SMALL_STATE(240)] = 4968,
  [SMALL_STATE(241)] = 4981,
  [SMALL_STATE(242)] = 4994,
  [SMALL_STATE(243)] = 5003,
  [SMALL_STATE(244)] = 5016,
  [SMALL_STATE(245)] = 5029,
  [SMALL_STATE(246)] = 5042,
  [SMALL_STATE(247)] = 5055,
  [SMALL_STATE(248)] = 5064,
  [SMALL_STATE(249)] = 5073,
  [SMALL_STATE(250)] = 5086,
  [SMALL_STATE(251)] = 5099,
  [SMALL_STATE(252)] = 5108,
  [SMALL_STATE(253)] = 5121,
  [SMALL_STATE(254)] = 5134,
  [SMALL_STATE(255)] = 5147,
  [SMALL_STATE(256)] = 5156,
  [SMALL_STATE(257)] = 5166,
  [SMALL_STATE(258)] = 5176,
  [SMALL_STATE(259)] = 5186,
  [SMALL_STATE(260)] = 5196,
  [SMALL_STATE(261)] = 5206,
  [SMALL_STATE(262)] = 5216,
  [SMALL_STATE(263)] = 5222,
  [SMALL_STATE(264)] = 5232,
  [SMALL_STATE(265)] = 5242,
  [SMALL_STATE(266)] = 5252,
  [SMALL_STATE(267)] = 5262,
  [SMALL_STATE(268)] = 5270,
  [SMALL_STATE(269)] = 5278,
  [SMALL_STATE(270)] = 5284,
  [SMALL_STATE(271)] = 5294,
  [SMALL_STATE(272)] = 5302,
  [SMALL_STATE(273)] = 5310,
  [SMALL_STATE(274)] = 5320,
  [SMALL_STATE(275)] = 5330,
  [SMALL_STATE(276)] = 5340,
  [SMALL_STATE(277)] = 5350,
  [SMALL_STATE(278)] = 5360,
  [SMALL_STATE(279)] = 5368,
  [SMALL_STATE(280)] = 5376,
  [SMALL_STATE(281)] = 5386,
  [SMALL_STATE(282)] = 5396,
  [SMALL_STATE(283)] = 5404,
  [SMALL_STATE(284)] = 5412,
  [SMALL_STATE(285)] = 5420,
  [SMALL_STATE(286)] = 5428,
  [SMALL_STATE(287)] = 5438,
  [SMALL_STATE(288)] = 5446,
  [SMALL_STATE(289)] = 5456,
  [SMALL_STATE(290)] = 5464,
  [SMALL_STATE(291)] = 5472,
  [SMALL_STATE(292)] = 5480,
  [SMALL_STATE(293)] = 5490,
  [SMALL_STATE(294)] = 5498,
  [SMALL_STATE(295)] = 5506,
  [SMALL_STATE(296)] = 5516,
  [SMALL_STATE(297)] = 5526,
  [SMALL_STATE(298)] = 5536,
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
  [SMALL_STATE(337)] = 5719,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(262),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(223),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(305),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(305),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(189),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(327),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(297),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(292),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(299),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(127),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(127),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(314),
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
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
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
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(249),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(126),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(126),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 5, .production_id = 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 5, .production_id = 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(320),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(8),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(26),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
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
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
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
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(71),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 6),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 6),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(321),
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
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 6),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 6),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 2),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 2),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 2),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 1),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(212),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(237),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [502] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(150),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(250),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(125),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [561] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(125),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [584] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2), SHIFT_REPEAT(313),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(216),
  [600] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(307),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 2),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 2),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_name, 1),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 1),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 1),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_angular_attribute_name, 1),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_angular_attribute_name, 1),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [667] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(241),
  [670] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(307),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_attribute_value, 2),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_attribute_value, 2),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_attribute_value, 2),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__array_attribute_value, 2),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__un_delimited_javascript, 1),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 5),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 5),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 3),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 3),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_attribute_value, 2),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__template_attribute_value, 2),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 3),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 3),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_attribute_value, 2),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__object_attribute_value, 2),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_attribute_value, 2),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable_attribute_value, 2),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 2),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 2),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 3),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 3),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ternary_attribute_value, 3),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ternary_attribute_value, 3),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 3),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 3),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [797] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [835] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
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
