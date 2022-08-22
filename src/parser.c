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
#define STATE_COUNT 365
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 100
#define ALIAS_COUNT 2
#define TOKEN_COUNT 54
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 7

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
  aux_sym_content_token1 = 39,
  anon_sym_POUND = 40,
  anon_sym_LBRACE = 41,
  sym__comment_content = 42,
  anon_sym_POUND_LBRACE = 43,
  anon_sym_RBRACE = 44,
  anon_sym_LBRACE_LBRACE = 45,
  anon_sym_RBRACE_RBRACE = 46,
  sym__delimited_javascript = 47,
  sym__un_delimited_javascript_line = 48,
  anon_sym_DASH = 49,
  aux_sym_unbuffered_code_token1 = 50,
  sym__newline = 51,
  sym__indent = 52,
  sym__dedent = 53,
  sym_source_file = 54,
  sym_doctype = 55,
  sym_pipe = 56,
  sym_conditional = 57,
  sym_case = 58,
  sym__when_content = 59,
  sym__when_keyword = 60,
  sym_when = 61,
  sym_unescaped_buffered_code = 62,
  sym_buffered_code = 63,
  sym_tag = 64,
  sym__content_after_dot = 65,
  sym_attributes = 66,
  sym_attribute = 67,
  sym__ternary_attribute_value = 68,
  sym__string_attribute_value = 69,
  sym__variable_attribute_value = 70,
  sym__object_attribute_value = 71,
  sym__template_attribute_value = 72,
  sym__array_attribute_value = 73,
  sym__attribute = 74,
  sym__angular_attribute = 75,
  sym_children = 76,
  sym__children_choice = 77,
  sym_comment = 78,
  sym_angular_attribute_name = 79,
  sym_attribute_name = 80,
  sym_quoted_javascript = 81,
  sym_quoted_attribute_value = 82,
  sym_content = 83,
  aux_sym__content_or_javascript = 84,
  sym__un_delimited_javascript = 85,
  aux_sym__un_delimited_javascript_multiline = 86,
  sym__single_line_buf_code = 87,
  sym__multi_line_buf_code = 88,
  sym_unbuffered_code = 89,
  aux_sym_source_file_repeat1 = 90,
  aux_sym_conditional_repeat1 = 91,
  aux_sym_case_repeat1 = 92,
  aux_sym_tag_repeat1 = 93,
  aux_sym__content_after_dot_repeat1 = 94,
  aux_sym_attributes_repeat1 = 95,
  aux_sym__attribute_repeat1 = 96,
  aux_sym_children_repeat1 = 97,
  aux_sym_comment_repeat1 = 98,
  aux_sym_content_repeat1 = 99,
  alias_sym_attribute_modifier = 100,
  alias_sym_attribute_value = 101,
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
  [aux_sym_content_token1] = "content_token1",
  [anon_sym_POUND] = "#",
  [anon_sym_LBRACE] = "{",
  [sym__comment_content] = "_comment_content",
  [anon_sym_POUND_LBRACE] = "#{",
  [anon_sym_RBRACE] = "}",
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
  [sym_content] = "content",
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
  [aux_sym_content_repeat1] = "content_repeat1",
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
  [aux_sym_content_token1] = aux_sym_content_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [sym__comment_content] = sym__comment_content,
  [anon_sym_POUND_LBRACE] = anon_sym_POUND_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
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
  [sym_content] = sym_content,
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
  [aux_sym_content_repeat1] = aux_sym_content_repeat1,
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
  [aux_sym_content_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym__comment_content] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
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
  [sym_content] = {
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
  [aux_sym_content_repeat1] = {
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
  [6] = {
    [5] = sym_children,
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
      if (eof) ADVANCE(148);
      if (lookahead == '!') ADVANCE(79);
      if (lookahead == '"') ADVANCE(602);
      if (lookahead == '#') ADVANCE(608);
      if (lookahead == '\'') ADVANCE(598);
      if (lookahead == '(') ADVANCE(196);
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == '*') ADVANCE(139);
      if (lookahead == ',') ADVANCE(197);
      if (lookahead == '-') ADVANCE(637);
      if (lookahead == '.') ADVANCE(195);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == '=') ADVANCE(190);
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
      if (lookahead == '{') ADVANCE(609);
      if (lookahead == '|') ADVANCE(156);
      if (lookahead == '}') ADVANCE(621);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == '`') ADVANCE(492);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\'') ADVANCE(200);
      if (lookahead == '`') ADVANCE(493);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(201);
      if (lookahead == '`') ADVANCE(497);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '"') ADVANCE(202);
      if (lookahead == ']') ADVANCE(499);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(63);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\'') ADVANCE(203);
      if (lookahead == ']') ADVANCE(500);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(65);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == ']') ADVANCE(502);
      if (lookahead == '`') ADVANCE(204);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(92);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(205);
      if (lookahead == ']') ADVANCE(503);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(132);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(206);
      if (lookahead == ']') ADVANCE(504);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(133);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(207);
      if (lookahead == ']') ADVANCE(505);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(134);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(208);
      if (lookahead == ']') ADVANCE(506);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(136);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(209);
      if (lookahead == ',') ADVANCE(11);
      if (lookahead == '}') ADVANCE(479);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(63);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '\'') ADVANCE(210);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(480);
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
      if (lookahead == '`') ADVANCE(211);
      if (lookahead == '}') ADVANCE(481);
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
          lookahead == '\'') ADVANCE(212);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '}') ADVANCE(482);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(132);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(213);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(483);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(133);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(214);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(484);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(134);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(215);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(485);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(136);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"') ADVANCE(209);
      if (lookahead == ',') ADVANCE(11);
      if (lookahead == '}') ADVANCE(479);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(63);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(210);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(480);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(65);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '`') ADVANCE(211);
      if (lookahead == '}') ADVANCE(481);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(92);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(212);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '}') ADVANCE(482);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(132);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(213);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(483);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(133);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(214);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(484);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(134);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(215);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(485);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(136);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"') ADVANCE(216);
      if (lookahead == '?') ADVANCE(42);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\'') ADVANCE(217);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead == '`') ADVANCE(218);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(219);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(220);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(221);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(222);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == ')') ADVANCE(441);
      if (lookahead == '`') ADVANCE(489);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(224);
      if (lookahead == ')') ADVANCE(442);
      if (lookahead == '`') ADVANCE(490);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(225);
      if (lookahead == ')') ADVANCE(443);
      if (lookahead == '`') ADVANCE(491);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"') ADVANCE(226);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(227);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(229);
      if (lookahead == ')') ADVANCE(475);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(230);
      if (lookahead == ')') ADVANCE(476);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(231);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(232);
      if (lookahead == ')') ADVANCE(478);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(63);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == '\'') ADVANCE(235);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(65);
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == '`') ADVANCE(237);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(92);
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(239);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(132);
      if (lookahead != 0) ADVANCE(239);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(241);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(133);
      if (lookahead != 0) ADVANCE(241);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(243);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(134);
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(245);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 49:
      if (lookahead == '\n') SKIP(49)
      if (lookahead == '#') ADVANCE(608);
      if (lookahead == '{') ADVANCE(609);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(606);
      if (lookahead != 0) ADVANCE(607);
      END_STATE();
    case 50:
      if (lookahead == '\n') SKIP(50)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(633);
      if (lookahead != 0) ADVANCE(636);
      END_STATE();
    case 51:
      if (lookahead == '\n') SKIP(51)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(625);
      END_STATE();
    case 52:
      if (lookahead == '\n') SKIP(52)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 53:
      if (lookahead == ' ') ADVANCE(193);
      if (lookahead == '!') ADVANCE(79);
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '(') ADVANCE(196);
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == ',') ADVANCE(197);
      if (lookahead == '.') ADVANCE(195);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(53)
      END_STATE();
    case 54:
      if (lookahead == ' ') ADVANCE(193);
      if (lookahead == '!') ADVANCE(79);
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == ',') ADVANCE(197);
      if (lookahead == '.') ADVANCE(194);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(54)
      END_STATE();
    case 55:
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == ',') ADVANCE(55);
      if (lookahead == '}') ADVANCE(486);
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
      if (lookahead == '}') ADVANCE(487);
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
          lookahead == '\r') ADVANCE(611);
      if (lookahead != 0) ADVANCE(619);
      END_STATE();
    case 58:
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '"') ADVANCE(603);
      if (lookahead == '\'') ADVANCE(599);
      if (lookahead == '?') ADVANCE(463);
      if (lookahead == '[') ADVANCE(454);
      if (lookahead == '`') ADVANCE(469);
      if (lookahead == '{') ADVANCE(455);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(461);
      if (lookahead != 0) ADVANCE(468);
      END_STATE();
    case 59:
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '"') ADVANCE(603);
      if (lookahead == '\'') ADVANCE(599);
      if (lookahead == '?') ADVANCE(467);
      if (lookahead == '[') ADVANCE(454);
      if (lookahead == '`') ADVANCE(469);
      if (lookahead == '{') ADVANCE(455);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(461);
      if (lookahead != 0) ADVANCE(468);
      END_STATE();
    case 60:
      if (lookahead == '!') ADVANCE(79);
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '.') ADVANCE(195);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == '|') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(60)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 61:
      if (lookahead == '"') ADVANCE(602);
      if (lookahead == '\'') ADVANCE(598);
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
      if (lookahead == '"') ADVANCE(602);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(604);
      if (lookahead != 0) ADVANCE(605);
      END_STATE();
    case 63:
      if (lookahead == '"') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 64:
      if (lookahead == '\'') ADVANCE(598);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(600);
      if (lookahead != 0) ADVANCE(601);
      END_STATE();
    case 65:
      if (lookahead == '\'') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 66:
      if (lookahead == '(') ADVANCE(140);
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == '*') ADVANCE(139);
      if (lookahead == '[') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(66)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 67:
      if (lookahead == ')') ADVANCE(596);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      if (lookahead == ')') ADVANCE(473);
      if (lookahead == '?') ADVANCE(69);
      if (lookahead == '`') ADVANCE(416);
      if (lookahead != 0) ADVANCE(425);
      END_STATE();
    case 69:
      if (lookahead == ')') ADVANCE(473);
      if (lookahead == '`') ADVANCE(495);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 70:
      if (lookahead == ')') ADVANCE(472);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 71:
      if (lookahead == ')') ADVANCE(472);
      if (lookahead == '?') ADVANCE(458);
      if (lookahead == ' ' ||
          lookahead == '(') ADVANCE(70);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 72:
      if (lookahead == ')') ADVANCE(471);
      if (lookahead == '?') ADVANCE(68);
      if (lookahead == '`') ADVANCE(494);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 73:
      if (lookahead == ')') ADVANCE(440);
      if (lookahead == '?') ADVANCE(74);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 74:
      if (lookahead == ')') ADVANCE(440);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 75:
      if (lookahead == ',') ADVANCE(55);
      if (lookahead == '}') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(75);
      END_STATE();
    case 76:
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '?') ADVANCE(77);
      if (lookahead == '}') ADVANCE(487);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(85);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 77:
      if (lookahead == ',') ADVANCE(421);
      if (lookahead == '?') ADVANCE(75);
      if (lookahead == '}') ADVANCE(421);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(421);
      END_STATE();
    case 78:
      if (lookahead == '/') ADVANCE(508);
      END_STATE();
    case 79:
      if (lookahead == '=') ADVANCE(187);
      END_STATE();
    case 80:
      if (lookahead == '?') ADVANCE(88);
      if (lookahead == ']') ADVANCE(412);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(419);
      END_STATE();
    case 81:
      if (lookahead == '?') ADVANCE(466);
      if (lookahead == '`') ADVANCE(468);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(84);
      if (lookahead != 0) ADVANCE(469);
      END_STATE();
    case 82:
      if (lookahead == '?') ADVANCE(470);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(85);
      if (lookahead != 0) ADVANCE(468);
      END_STATE();
    case 83:
      if (lookahead == '?') ADVANCE(457);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(85);
      if (lookahead != 0) ADVANCE(468);
      END_STATE();
    case 84:
      if (lookahead == '?') ADVANCE(91);
      if (lookahead == '`') ADVANCE(496);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 85:
      if (lookahead == '?') ADVANCE(142);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 86:
      if (lookahead == '?') ADVANCE(80);
      if (lookahead == ']') ADVANCE(501);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(85);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 87:
      if (lookahead == ']') ADVANCE(498);
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
      if (lookahead == ']') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[') ADVANCE(88);
      END_STATE();
    case 89:
      if (lookahead == ']') ADVANCE(595);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 90:
      if (lookahead == '`') ADVANCE(488);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 91:
      if (lookahead == '`') ADVANCE(412);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(90);
      if (lookahead != 0) ADVANCE(424);
      END_STATE();
    case 92:
      if (lookahead == '`') ADVANCE(434);
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
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(149);
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
      if (lookahead == 'f') ADVANCE(159);
      END_STATE();
    case 104:
      if (lookahead == 'f') ADVANCE(163);
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
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(153);
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
      if (lookahead == 'n') ADVANCE(179);
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
      if (lookahead == 's') ADVANCE(166);
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
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(184);
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
      if (lookahead == '}') ADVANCE(623);
      END_STATE();
    case 132:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 133:
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(133);
      END_STATE();
    case 134:
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 135:
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 136:
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    case 137:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(589);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 138:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 139:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 140:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 141:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 142:
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '?') ADVANCE(412);
      END_STATE();
    case 143:
      if (eof) ADVANCE(148);
      if (lookahead == '\n') SKIP(143)
      if (lookahead == '!') ADVANCE(629);
      if (lookahead == '#') ADVANCE(635);
      if (lookahead == '-') ADVANCE(638);
      if (lookahead == '.') ADVANCE(634);
      if (lookahead == '/') ADVANCE(628);
      if (lookahead == '=') ADVANCE(191);
      if (lookahead == 'c') ADVANCE(513);
      if (lookahead == 'd') ADVANCE(528);
      if (lookahead == 'e') ADVANCE(548);
      if (lookahead == 'i') ADVANCE(536);
      if (lookahead == 'u') ADVANCE(553);
      if (lookahead == 'w') ADVANCE(540);
      if (lookahead == '|') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if (lookahead != 0) ADVANCE(636);
      END_STATE();
    case 144:
      if (eof) ADVANCE(148);
      if (lookahead == '\n') SKIP(144)
      if (lookahead == '!') ADVANCE(629);
      if (lookahead == '#') ADVANCE(635);
      if (lookahead == '-') ADVANCE(638);
      if (lookahead == '.') ADVANCE(634);
      if (lookahead == '/') ADVANCE(628);
      if (lookahead == '=') ADVANCE(191);
      if (lookahead == 'c') ADVANCE(513);
      if (lookahead == 'd') ADVANCE(556);
      if (lookahead == 'e') ADVANCE(548);
      if (lookahead == 'i') ADVANCE(536);
      if (lookahead == 'u') ADVANCE(553);
      if (lookahead == '|') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if (lookahead != 0) ADVANCE(636);
      END_STATE();
    case 145:
      if (eof) ADVANCE(148);
      if (lookahead == ' ') SKIP(145)
      if (lookahead == '!') ADVANCE(613);
      if (lookahead == '#') ADVANCE(618);
      if (lookahead == '-') ADVANCE(639);
      if (lookahead == '.') ADVANCE(617);
      if (lookahead == '/') ADVANCE(612);
      if (lookahead == '=') ADVANCE(192);
      if (lookahead == 'c') ADVANCE(515);
      if (lookahead == 'd') ADVANCE(557);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == 'i') ADVANCE(539);
      if (lookahead == 'u') ADVANCE(554);
      if (lookahead == '|') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0) ADVANCE(619);
      END_STATE();
    case 146:
      if (eof) ADVANCE(148);
      if (lookahead == '!') ADVANCE(79);
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '-') ADVANCE(637);
      if (lookahead == '.') ADVANCE(137);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == 'c') ADVANCE(511);
      if (lookahead == 'd') ADVANCE(525);
      if (lookahead == 'e') ADVANCE(547);
      if (lookahead == 'i') ADVANCE(535);
      if (lookahead == 'u') ADVANCE(552);
      if (lookahead == 'w') ADVANCE(541);
      if (lookahead == '|') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(146)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 147:
      if (eof) ADVANCE(148);
      if (lookahead == '!') ADVANCE(79);
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '-') ADVANCE(637);
      if (lookahead == '.') ADVANCE(137);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == 'c') ADVANCE(511);
      if (lookahead == 'd') ADVANCE(555);
      if (lookahead == 'e') ADVANCE(547);
      if (lookahead == 'i') ADVANCE(535);
      if (lookahead == 'u') ADVANCE(552);
      if (lookahead == '|') ADVANCE(156);
      if (lookahead == '}') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(147)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_doctype);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_strict);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(631);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(615);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(107);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__when_keyword_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__when_keyword_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(589);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == '`') ADVANCE(492);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\'') ADVANCE(200);
      if (lookahead == '`') ADVANCE(493);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(201);
      if (lookahead == '`') ADVANCE(497);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '"') ADVANCE(202);
      if (lookahead == ']') ADVANCE(499);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(63);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\'') ADVANCE(203);
      if (lookahead == ']') ADVANCE(500);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(65);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == ']') ADVANCE(502);
      if (lookahead == '`') ADVANCE(204);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(92);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(205);
      if (lookahead == ']') ADVANCE(503);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(132);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(206);
      if (lookahead == ']') ADVANCE(504);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(133);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(207);
      if (lookahead == ']') ADVANCE(505);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(134);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(208);
      if (lookahead == ']') ADVANCE(506);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(136);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"') ADVANCE(209);
      if (lookahead == ',') ADVANCE(11);
      if (lookahead == '}') ADVANCE(479);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(63);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(210);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(480);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(65);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '`') ADVANCE(211);
      if (lookahead == '}') ADVANCE(481);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(92);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(212);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '}') ADVANCE(482);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(132);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(213);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(483);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(133);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(214);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(484);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(134);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(215);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(485);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(136);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"') ADVANCE(216);
      if (lookahead == '?') ADVANCE(42);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\'') ADVANCE(217);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead == '`') ADVANCE(218);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(219);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(220);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(221);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(222);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == ')') ADVANCE(441);
      if (lookahead == '`') ADVANCE(489);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(224);
      if (lookahead == ')') ADVANCE(442);
      if (lookahead == '`') ADVANCE(490);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(225);
      if (lookahead == ')') ADVANCE(443);
      if (lookahead == '`') ADVANCE(491);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"') ADVANCE(226);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(227);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(229);
      if (lookahead == ')') ADVANCE(475);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(230);
      if (lookahead == ')') ADVANCE(476);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(231);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(232);
      if (lookahead == ')') ADVANCE(478);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '?') ADVANCE(306);
      if (lookahead == '`') ADVANCE(241);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '?') ADVANCE(306);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == ' ') ADVANCE(235);
      if (lookahead == '"') ADVANCE(239);
      if (lookahead == '\'') ADVANCE(235);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == '?') ADVANCE(307);
      if (lookahead == '`') ADVANCE(243);
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == ' ') ADVANCE(235);
      if (lookahead == '\'') ADVANCE(235);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == '?') ADVANCE(307);
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == ' ') ADVANCE(237);
      if (lookahead == '"') ADVANCE(241);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '?') ADVANCE(308);
      if (lookahead == '`') ADVANCE(237);
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == ' ') ADVANCE(237);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '?') ADVANCE(308);
      if (lookahead == '`') ADVANCE(237);
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == ' ') ADVANCE(239);
      if (lookahead == '"') ADVANCE(239);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == ')') ADVANCE(132);
      if (lookahead == '?') ADVANCE(309);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead != 0) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == ' ') ADVANCE(239);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(239);
      if (lookahead == ')') ADVANCE(132);
      if (lookahead == '?') ADVANCE(309);
      if (lookahead != 0) ADVANCE(239);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead == '"') ADVANCE(241);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == '?') ADVANCE(310);
      if (lookahead == '`') ADVANCE(241);
      if (lookahead != 0) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(241);
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == '?') ADVANCE(310);
      if (lookahead != 0) ADVANCE(241);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == ' ') ADVANCE(243);
      if (lookahead == '"') ADVANCE(245);
      if (lookahead == '\'') ADVANCE(243);
      if (lookahead == ')') ADVANCE(134);
      if (lookahead == '?') ADVANCE(311);
      if (lookahead == '`') ADVANCE(243);
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == ' ') ADVANCE(243);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(243);
      if (lookahead == ')') ADVANCE(134);
      if (lookahead == '?') ADVANCE(311);
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == ' ') ADVANCE(245);
      if (lookahead == '"') ADVANCE(245);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '?') ADVANCE(312);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == ' ') ADVANCE(245);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(245);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '?') ADVANCE(312);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead == '"') ADVANCE(247);
      if (lookahead == '\'') ADVANCE(253);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == '?') ADVANCE(313);
      if (lookahead == '`') ADVANCE(255);
      if (lookahead != 0) ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead == '"') ADVANCE(247);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == '?') ADVANCE(313);
      if (lookahead != 0) ADVANCE(247);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(249);
      if (lookahead == '"') ADVANCE(253);
      if (lookahead == '\'') ADVANCE(249);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead == '?') ADVANCE(314);
      if (lookahead == '`') ADVANCE(257);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(249);
      if (lookahead == '\'') ADVANCE(249);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead == '?') ADVANCE(314);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(251);
      if (lookahead == '"') ADVANCE(255);
      if (lookahead == '\'') ADVANCE(257);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead == '?') ADVANCE(315);
      if (lookahead == '`') ADVANCE(251);
      if (lookahead != 0) ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(251);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead == '?') ADVANCE(315);
      if (lookahead == '`') ADVANCE(251);
      if (lookahead != 0) ADVANCE(251);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(253);
      if (lookahead == '"') ADVANCE(253);
      if (lookahead == '\'') ADVANCE(253);
      if (lookahead == ')') ADVANCE(475);
      if (lookahead == '?') ADVANCE(316);
      if (lookahead == '`') ADVANCE(259);
      if (lookahead != 0) ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(253);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(253);
      if (lookahead == ')') ADVANCE(475);
      if (lookahead == '?') ADVANCE(316);
      if (lookahead != 0) ADVANCE(253);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(255);
      if (lookahead == '"') ADVANCE(255);
      if (lookahead == '\'') ADVANCE(259);
      if (lookahead == ')') ADVANCE(476);
      if (lookahead == '?') ADVANCE(317);
      if (lookahead == '`') ADVANCE(255);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(255);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(255);
      if (lookahead == ')') ADVANCE(476);
      if (lookahead == '?') ADVANCE(317);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(257);
      if (lookahead == '"') ADVANCE(259);
      if (lookahead == '\'') ADVANCE(257);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead == '?') ADVANCE(318);
      if (lookahead == '`') ADVANCE(257);
      if (lookahead != 0) ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(257);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(257);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead == '?') ADVANCE(318);
      if (lookahead != 0) ADVANCE(257);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(259);
      if (lookahead == '"') ADVANCE(259);
      if (lookahead == '\'') ADVANCE(259);
      if (lookahead == ')') ADVANCE(478);
      if (lookahead == '?') ADVANCE(319);
      if (lookahead == '`') ADVANCE(259);
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(259);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(259);
      if (lookahead == ')') ADVANCE(478);
      if (lookahead == '?') ADVANCE(319);
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '"') ADVANCE(261);
      if (lookahead == '\'') ADVANCE(267);
      if (lookahead == '(') ADVANCE(247);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '?') ADVANCE(320);
      if (lookahead == '`') ADVANCE(269);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(233);
      if (lookahead == '"') ADVANCE(261);
      if (lookahead == '(') ADVANCE(247);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '?') ADVANCE(320);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(235);
      if (lookahead == '"') ADVANCE(267);
      if (lookahead == '\'') ADVANCE(263);
      if (lookahead == '(') ADVANCE(249);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == '?') ADVANCE(321);
      if (lookahead == '`') ADVANCE(271);
      if (lookahead != 0) ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(235);
      if (lookahead == '\'') ADVANCE(263);
      if (lookahead == '(') ADVANCE(249);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == '?') ADVANCE(321);
      if (lookahead != 0) ADVANCE(263);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(237);
      if (lookahead == '"') ADVANCE(269);
      if (lookahead == '\'') ADVANCE(271);
      if (lookahead == '(') ADVANCE(251);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '?') ADVANCE(322);
      if (lookahead == '`') ADVANCE(265);
      if (lookahead != 0) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(237);
      if (lookahead == '(') ADVANCE(251);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '?') ADVANCE(322);
      if (lookahead == '`') ADVANCE(265);
      if (lookahead != 0) ADVANCE(265);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(239);
      if (lookahead == '"') ADVANCE(267);
      if (lookahead == '\'') ADVANCE(267);
      if (lookahead == '(') ADVANCE(253);
      if (lookahead == ')') ADVANCE(132);
      if (lookahead == '?') ADVANCE(323);
      if (lookahead == '`') ADVANCE(273);
      if (lookahead != 0) ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(239);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(267);
      if (lookahead == '(') ADVANCE(253);
      if (lookahead == ')') ADVANCE(132);
      if (lookahead == '?') ADVANCE(323);
      if (lookahead != 0) ADVANCE(267);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead == '"') ADVANCE(269);
      if (lookahead == '\'') ADVANCE(273);
      if (lookahead == '(') ADVANCE(255);
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == '?') ADVANCE(324);
      if (lookahead == '`') ADVANCE(269);
      if (lookahead != 0) ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(269);
      if (lookahead == '(') ADVANCE(255);
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == '?') ADVANCE(324);
      if (lookahead != 0) ADVANCE(269);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(243);
      if (lookahead == '"') ADVANCE(273);
      if (lookahead == '\'') ADVANCE(271);
      if (lookahead == '(') ADVANCE(257);
      if (lookahead == ')') ADVANCE(134);
      if (lookahead == '?') ADVANCE(325);
      if (lookahead == '`') ADVANCE(271);
      if (lookahead != 0) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(243);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(271);
      if (lookahead == '(') ADVANCE(257);
      if (lookahead == ')') ADVANCE(134);
      if (lookahead == '?') ADVANCE(325);
      if (lookahead != 0) ADVANCE(271);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(245);
      if (lookahead == '"') ADVANCE(273);
      if (lookahead == '\'') ADVANCE(273);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '?') ADVANCE(326);
      if (lookahead == '`') ADVANCE(273);
      if (lookahead != 0) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(245);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(273);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '?') ADVANCE(326);
      if (lookahead != 0) ADVANCE(273);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(371);
      if (lookahead == '"') ADVANCE(275);
      if (lookahead == '\'') ADVANCE(277);
      if (lookahead == '(') ADVANCE(381);
      if (lookahead == ')') ADVANCE(1);
      if (lookahead == '?') ADVANCE(333);
      if (lookahead == '`') ADVANCE(269);
      if (lookahead != 0) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(372);
      if (lookahead == '"') ADVANCE(277);
      if (lookahead == '\'') ADVANCE(276);
      if (lookahead == '(') ADVANCE(382);
      if (lookahead == ')') ADVANCE(2);
      if (lookahead == '?') ADVANCE(334);
      if (lookahead == '`') ADVANCE(271);
      if (lookahead != 0) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '"') ADVANCE(277);
      if (lookahead == '\'') ADVANCE(277);
      if (lookahead == '(') ADVANCE(383);
      if (lookahead == ')') ADVANCE(3);
      if (lookahead == '?') ADVANCE(335);
      if (lookahead == '`') ADVANCE(273);
      if (lookahead != 0) ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(278);
      if (lookahead == '"') ADVANCE(278);
      if (lookahead == '\'') ADVANCE(281);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '?') ADVANCE(336);
      if (lookahead == ']') ADVANCE(233);
      if (lookahead == '`') ADVANCE(282);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(233);
      if (lookahead != 0) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(279);
      if (lookahead == '"') ADVANCE(281);
      if (lookahead == '\'') ADVANCE(279);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == '?') ADVANCE(337);
      if (lookahead == ']') ADVANCE(235);
      if (lookahead == '`') ADVANCE(283);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(235);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(280);
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '\'') ADVANCE(283);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '?') ADVANCE(338);
      if (lookahead == ']') ADVANCE(237);
      if (lookahead == '`') ADVANCE(280);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(237);
      if (lookahead != 0) ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(281);
      if (lookahead == '"') ADVANCE(281);
      if (lookahead == '\'') ADVANCE(281);
      if (lookahead == ')') ADVANCE(132);
      if (lookahead == '?') ADVANCE(339);
      if (lookahead == ']') ADVANCE(239);
      if (lookahead == '`') ADVANCE(284);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(239);
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(282);
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '\'') ADVANCE(284);
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == '?') ADVANCE(340);
      if (lookahead == ']') ADVANCE(241);
      if (lookahead == '`') ADVANCE(282);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(241);
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(283);
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '\'') ADVANCE(283);
      if (lookahead == ')') ADVANCE(134);
      if (lookahead == '?') ADVANCE(341);
      if (lookahead == ']') ADVANCE(243);
      if (lookahead == '`') ADVANCE(283);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(243);
      if (lookahead != 0) ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(284);
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '\'') ADVANCE(284);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '?') ADVANCE(342);
      if (lookahead == ']') ADVANCE(245);
      if (lookahead == '`') ADVANCE(284);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(245);
      if (lookahead != 0) ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(278);
      if (lookahead == '"') ADVANCE(285);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '(') ADVANCE(247);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '?') ADVANCE(343);
      if (lookahead == '[') ADVANCE(261);
      if (lookahead == ']') ADVANCE(261);
      if (lookahead == '`') ADVANCE(289);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(279);
      if (lookahead == '"') ADVANCE(288);
      if (lookahead == '\'') ADVANCE(286);
      if (lookahead == '(') ADVANCE(249);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == '?') ADVANCE(344);
      if (lookahead == '[') ADVANCE(263);
      if (lookahead == ']') ADVANCE(263);
      if (lookahead == '`') ADVANCE(290);
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(280);
      if (lookahead == '"') ADVANCE(289);
      if (lookahead == '\'') ADVANCE(290);
      if (lookahead == '(') ADVANCE(251);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '?') ADVANCE(345);
      if (lookahead == '[') ADVANCE(265);
      if (lookahead == ']') ADVANCE(265);
      if (lookahead == '`') ADVANCE(287);
      if (lookahead != 0) ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(281);
      if (lookahead == '"') ADVANCE(288);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '(') ADVANCE(253);
      if (lookahead == ')') ADVANCE(132);
      if (lookahead == '?') ADVANCE(346);
      if (lookahead == '[') ADVANCE(267);
      if (lookahead == ']') ADVANCE(267);
      if (lookahead == '`') ADVANCE(291);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(282);
      if (lookahead == '"') ADVANCE(289);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == '(') ADVANCE(255);
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == '?') ADVANCE(347);
      if (lookahead == '[') ADVANCE(269);
      if (lookahead == ']') ADVANCE(269);
      if (lookahead == '`') ADVANCE(289);
      if (lookahead != 0) ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(283);
      if (lookahead == '"') ADVANCE(291);
      if (lookahead == '\'') ADVANCE(290);
      if (lookahead == '(') ADVANCE(257);
      if (lookahead == ')') ADVANCE(134);
      if (lookahead == '?') ADVANCE(348);
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == ']') ADVANCE(271);
      if (lookahead == '`') ADVANCE(290);
      if (lookahead != 0) ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(284);
      if (lookahead == '"') ADVANCE(291);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '?') ADVANCE(349);
      if (lookahead == '[') ADVANCE(273);
      if (lookahead == ']') ADVANCE(273);
      if (lookahead == '`') ADVANCE(291);
      if (lookahead != 0) ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == '"') ADVANCE(292);
      if (lookahead == '\'') ADVANCE(295);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == ',') ADVANCE(292);
      if (lookahead == '?') ADVANCE(350);
      if (lookahead == '`') ADVANCE(296);
      if (lookahead == '}') ADVANCE(292);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(233);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '"') ADVANCE(295);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == ',') ADVANCE(293);
      if (lookahead == '?') ADVANCE(351);
      if (lookahead == '`') ADVANCE(297);
      if (lookahead == '}') ADVANCE(293);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(235);
      if (lookahead != 0) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(294);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '\'') ADVANCE(297);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == ',') ADVANCE(294);
      if (lookahead == '?') ADVANCE(352);
      if (lookahead == '`') ADVANCE(294);
      if (lookahead == '}') ADVANCE(294);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(237);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == '"') ADVANCE(295);
      if (lookahead == '\'') ADVANCE(295);
      if (lookahead == ')') ADVANCE(132);
      if (lookahead == ',') ADVANCE(295);
      if (lookahead == '?') ADVANCE(353);
      if (lookahead == '`') ADVANCE(298);
      if (lookahead == '}') ADVANCE(295);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(239);
      if (lookahead != 0) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(296);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '\'') ADVANCE(298);
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == ',') ADVANCE(296);
      if (lookahead == '?') ADVANCE(354);
      if (lookahead == '`') ADVANCE(296);
      if (lookahead == '}') ADVANCE(296);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(241);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(297);
      if (lookahead == '"') ADVANCE(298);
      if (lookahead == '\'') ADVANCE(297);
      if (lookahead == ')') ADVANCE(134);
      if (lookahead == ',') ADVANCE(297);
      if (lookahead == '?') ADVANCE(355);
      if (lookahead == '`') ADVANCE(297);
      if (lookahead == '}') ADVANCE(297);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead != 0) ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(298);
      if (lookahead == '"') ADVANCE(298);
      if (lookahead == '\'') ADVANCE(298);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == ',') ADVANCE(298);
      if (lookahead == '?') ADVANCE(356);
      if (lookahead == '`') ADVANCE(298);
      if (lookahead == '}') ADVANCE(298);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(245);
      if (lookahead != 0) ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '\'') ADVANCE(302);
      if (lookahead == '(') ADVANCE(247);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == ',') ADVANCE(299);
      if (lookahead == '?') ADVANCE(357);
      if (lookahead == '`') ADVANCE(303);
      if (lookahead == '}') ADVANCE(299);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(261);
      if (lookahead != 0) ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '"') ADVANCE(302);
      if (lookahead == '\'') ADVANCE(300);
      if (lookahead == '(') ADVANCE(249);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == ',') ADVANCE(300);
      if (lookahead == '?') ADVANCE(358);
      if (lookahead == '`') ADVANCE(304);
      if (lookahead == '}') ADVANCE(300);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(263);
      if (lookahead != 0) ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(294);
      if (lookahead == '"') ADVANCE(303);
      if (lookahead == '\'') ADVANCE(304);
      if (lookahead == '(') ADVANCE(251);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == ',') ADVANCE(301);
      if (lookahead == '?') ADVANCE(359);
      if (lookahead == '`') ADVANCE(301);
      if (lookahead == '}') ADVANCE(301);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(265);
      if (lookahead != 0) ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == '"') ADVANCE(302);
      if (lookahead == '\'') ADVANCE(302);
      if (lookahead == '(') ADVANCE(253);
      if (lookahead == ')') ADVANCE(132);
      if (lookahead == ',') ADVANCE(302);
      if (lookahead == '?') ADVANCE(360);
      if (lookahead == '`') ADVANCE(305);
      if (lookahead == '}') ADVANCE(302);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(267);
      if (lookahead != 0) ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(296);
      if (lookahead == '"') ADVANCE(303);
      if (lookahead == '\'') ADVANCE(305);
      if (lookahead == '(') ADVANCE(255);
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == ',') ADVANCE(303);
      if (lookahead == '?') ADVANCE(361);
      if (lookahead == '`') ADVANCE(303);
      if (lookahead == '}') ADVANCE(303);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(269);
      if (lookahead != 0) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(297);
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '\'') ADVANCE(304);
      if (lookahead == '(') ADVANCE(257);
      if (lookahead == ')') ADVANCE(134);
      if (lookahead == ',') ADVANCE(304);
      if (lookahead == '?') ADVANCE(362);
      if (lookahead == '`') ADVANCE(304);
      if (lookahead == '}') ADVANCE(304);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(271);
      if (lookahead != 0) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(298);
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '\'') ADVANCE(305);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == ',') ADVANCE(305);
      if (lookahead == '?') ADVANCE(363);
      if (lookahead == '`') ADVANCE(305);
      if (lookahead == '}') ADVANCE(305);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(273);
      if (lookahead != 0) ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == '"') ADVANCE(306);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(63);
      if (lookahead != 0) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == '\'') ADVANCE(307);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(65);
      if (lookahead != 0) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == '`') ADVANCE(308);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(92);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(309);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(132);
      if (lookahead != 0) ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(310);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(133);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(311);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(134);
      if (lookahead != 0) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(312);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(136);
      if (lookahead != 0) ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(411);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '"') ADVANCE(313);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead != 0) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(411);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '\'') ADVANCE(314);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead != 0) ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(411);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead == '`') ADVANCE(315);
      if (lookahead != 0) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(411);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(316);
      if (lookahead == ')') ADVANCE(475);
      if (lookahead != 0) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(411);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(317);
      if (lookahead == ')') ADVANCE(476);
      if (lookahead != 0) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(411);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(318);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead != 0) ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(411);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(319);
      if (lookahead == ')') ADVANCE(478);
      if (lookahead != 0) ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == '"') ADVANCE(320);
      if (lookahead == '(') ADVANCE(313);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(63);
      if (lookahead != 0) ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == '\'') ADVANCE(321);
      if (lookahead == '(') ADVANCE(314);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(65);
      if (lookahead != 0) ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == '(') ADVANCE(315);
      if (lookahead == '`') ADVANCE(322);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(92);
      if (lookahead != 0) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(323);
      if (lookahead == '(') ADVANCE(316);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(132);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(324);
      if (lookahead == '(') ADVANCE(317);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(133);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(325);
      if (lookahead == '(') ADVANCE(318);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(134);
      if (lookahead != 0) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(326);
      if (lookahead == '(') ADVANCE(319);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(136);
      if (lookahead != 0) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(433);
      if (lookahead == '"') ADVANCE(327);
      if (lookahead == '`') ADVANCE(306);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(1);
      if (lookahead != 0) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(433);
      if (lookahead == '\'') ADVANCE(328);
      if (lookahead == '`') ADVANCE(307);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(2);
      if (lookahead != 0) ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(433);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(329);
      if (lookahead == '`') ADVANCE(309);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(3);
      if (lookahead != 0) ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(409);
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '"') ADVANCE(330);
      if (lookahead == ')') ADVANCE(441);
      if (lookahead == '`') ADVANCE(313);
      if (lookahead != 0) ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(409);
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '\'') ADVANCE(331);
      if (lookahead == ')') ADVANCE(442);
      if (lookahead == '`') ADVANCE(314);
      if (lookahead != 0) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(409);
      if (lookahead == ' ') ADVANCE(34);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(332);
      if (lookahead == ')') ADVANCE(443);
      if (lookahead == '`') ADVANCE(316);
      if (lookahead != 0) ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == '"') ADVANCE(333);
      if (lookahead == '(') ADVANCE(330);
      if (lookahead == '`') ADVANCE(320);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(1);
      if (lookahead != 0) ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == '\'') ADVANCE(334);
      if (lookahead == '(') ADVANCE(331);
      if (lookahead == '`') ADVANCE(321);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(2);
      if (lookahead != 0) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(335);
      if (lookahead == '(') ADVANCE(332);
      if (lookahead == '`') ADVANCE(323);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(3);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(406);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '"') ADVANCE(336);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == ']') ADVANCE(306);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(306);
      if (lookahead != 0) ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(406);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(337);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == ']') ADVANCE(307);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(307);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(406);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == ']') ADVANCE(308);
      if (lookahead == '`') ADVANCE(338);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(308);
      if (lookahead != 0) ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(406);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(339);
      if (lookahead == ')') ADVANCE(132);
      if (lookahead == ']') ADVANCE(309);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(309);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(406);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(340);
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == ']') ADVANCE(310);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(310);
      if (lookahead != 0) ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(406);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(341);
      if (lookahead == ')') ADVANCE(134);
      if (lookahead == ']') ADVANCE(311);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(311);
      if (lookahead != 0) ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(406);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(342);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == ']') ADVANCE(312);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(312);
      if (lookahead != 0) ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(405);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '"') ADVANCE(343);
      if (lookahead == '(') ADVANCE(313);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '[') ADVANCE(320);
      if (lookahead == ']') ADVANCE(320);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(405);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(344);
      if (lookahead == '(') ADVANCE(314);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == '[') ADVANCE(321);
      if (lookahead == ']') ADVANCE(321);
      if (lookahead != 0) ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(405);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '(') ADVANCE(315);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '[') ADVANCE(322);
      if (lookahead == ']') ADVANCE(322);
      if (lookahead == '`') ADVANCE(345);
      if (lookahead != 0) ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(405);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(346);
      if (lookahead == '(') ADVANCE(316);
      if (lookahead == ')') ADVANCE(132);
      if (lookahead == '[') ADVANCE(323);
      if (lookahead == ']') ADVANCE(323);
      if (lookahead != 0) ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(405);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(347);
      if (lookahead == '(') ADVANCE(317);
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == '[') ADVANCE(324);
      if (lookahead == ']') ADVANCE(324);
      if (lookahead != 0) ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(405);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(348);
      if (lookahead == '(') ADVANCE(318);
      if (lookahead == ')') ADVANCE(134);
      if (lookahead == '[') ADVANCE(325);
      if (lookahead == ']') ADVANCE(325);
      if (lookahead != 0) ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(405);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(349);
      if (lookahead == '(') ADVANCE(319);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '[') ADVANCE(326);
      if (lookahead == ']') ADVANCE(326);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(408);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(350);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == ',') ADVANCE(350);
      if (lookahead == '}') ADVANCE(350);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(306);
      if (lookahead != 0) ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(408);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '\'') ADVANCE(351);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == ',') ADVANCE(351);
      if (lookahead == '}') ADVANCE(351);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(307);
      if (lookahead != 0) ADVANCE(351);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(408);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == ',') ADVANCE(352);
      if (lookahead == '`') ADVANCE(352);
      if (lookahead == '}') ADVANCE(352);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(308);
      if (lookahead != 0) ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(408);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(353);
      if (lookahead == ')') ADVANCE(132);
      if (lookahead == ',') ADVANCE(353);
      if (lookahead == '}') ADVANCE(353);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(309);
      if (lookahead != 0) ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(408);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(354);
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
      if (lookahead == '\n') ADVANCE(408);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '\'' ||
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
      if (lookahead == '\n') ADVANCE(408);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(356);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == ',') ADVANCE(356);
      if (lookahead == '}') ADVANCE(356);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(312);
      if (lookahead != 0) ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(407);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(357);
      if (lookahead == '(') ADVANCE(313);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == ',') ADVANCE(357);
      if (lookahead == '}') ADVANCE(357);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(320);
      if (lookahead != 0) ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(407);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '\'') ADVANCE(358);
      if (lookahead == '(') ADVANCE(314);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == ',') ADVANCE(358);
      if (lookahead == '}') ADVANCE(358);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(321);
      if (lookahead != 0) ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(407);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '(') ADVANCE(315);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == ',') ADVANCE(359);
      if (lookahead == '`') ADVANCE(359);
      if (lookahead == '}') ADVANCE(359);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(322);
      if (lookahead != 0) ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(407);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(360);
      if (lookahead == '(') ADVANCE(316);
      if (lookahead == ')') ADVANCE(132);
      if (lookahead == ',') ADVANCE(360);
      if (lookahead == '}') ADVANCE(360);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(323);
      if (lookahead != 0) ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(407);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(361);
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
      if (lookahead == '\n') ADVANCE(407);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '\'' ||
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
      if (lookahead == '\n') ADVANCE(407);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(363);
      if (lookahead == '(') ADVANCE(319);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == ',') ADVANCE(363);
      if (lookahead == '}') ADVANCE(363);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(326);
      if (lookahead != 0) ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(410);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '"') ADVANCE(364);
      if (lookahead == '(') ADVANCE(313);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead != 0) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(410);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '\'') ADVANCE(365);
      if (lookahead == '(') ADVANCE(314);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead != 0) ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(410);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '(') ADVANCE(315);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead == '`') ADVANCE(366);
      if (lookahead != 0) ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(410);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(367);
      if (lookahead == '(') ADVANCE(316);
      if (lookahead == ')') ADVANCE(475);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(410);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(368);
      if (lookahead == '(') ADVANCE(317);
      if (lookahead == ')') ADVANCE(476);
      if (lookahead != 0) ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(410);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(369);
      if (lookahead == '(') ADVANCE(318);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead != 0) ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(410);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(370);
      if (lookahead == '(') ADVANCE(319);
      if (lookahead == ')') ADVANCE(478);
      if (lookahead != 0) ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(371);
      if (lookahead == '"') ADVANCE(371);
      if (lookahead == '\'') ADVANCE(373);
      if (lookahead == ')') ADVANCE(1);
      if (lookahead == '?') ADVANCE(327);
      if (lookahead == '`') ADVANCE(241);
      if (lookahead != 0) ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(372);
      if (lookahead == '"') ADVANCE(373);
      if (lookahead == '\'') ADVANCE(372);
      if (lookahead == ')') ADVANCE(2);
      if (lookahead == '?') ADVANCE(328);
      if (lookahead == '`') ADVANCE(243);
      if (lookahead != 0) ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(373);
      if (lookahead == '"') ADVANCE(373);
      if (lookahead == '\'') ADVANCE(373);
      if (lookahead == ')') ADVANCE(3);
      if (lookahead == '?') ADVANCE(329);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(391);
      if (lookahead == '"') ADVANCE(374);
      if (lookahead == '\'') ADVANCE(377);
      if (lookahead == '(') ADVANCE(398);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == '?') ADVANCE(262);
      if (lookahead == '`') ADVANCE(378);
      if (lookahead != 0) ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(392);
      if (lookahead == '"') ADVANCE(377);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '(') ADVANCE(399);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '?') ADVANCE(264);
      if (lookahead == '`') ADVANCE(379);
      if (lookahead != 0) ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(393);
      if (lookahead == '"') ADVANCE(378);
      if (lookahead == '\'') ADVANCE(379);
      if (lookahead == '(') ADVANCE(400);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '?') ADVANCE(266);
      if (lookahead == '`') ADVANCE(376);
      if (lookahead != 0) ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(394);
      if (lookahead == '"') ADVANCE(377);
      if (lookahead == '\'') ADVANCE(377);
      if (lookahead == '(') ADVANCE(401);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '?') ADVANCE(268);
      if (lookahead == '`') ADVANCE(380);
      if (lookahead != 0) ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(395);
      if (lookahead == '"') ADVANCE(378);
      if (lookahead == '\'') ADVANCE(380);
      if (lookahead == '(') ADVANCE(402);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '?') ADVANCE(270);
      if (lookahead == '`') ADVANCE(378);
      if (lookahead != 0) ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(396);
      if (lookahead == '"') ADVANCE(380);
      if (lookahead == '\'') ADVANCE(379);
      if (lookahead == '(') ADVANCE(403);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '?') ADVANCE(272);
      if (lookahead == '`') ADVANCE(379);
      if (lookahead != 0) ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(397);
      if (lookahead == '"') ADVANCE(380);
      if (lookahead == '\'') ADVANCE(380);
      if (lookahead == '(') ADVANCE(404);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '?') ADVANCE(274);
      if (lookahead == '`') ADVANCE(380);
      if (lookahead != 0) ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(381);
      if (lookahead == '"') ADVANCE(381);
      if (lookahead == '\'') ADVANCE(383);
      if (lookahead == ')') ADVANCE(441);
      if (lookahead == '?') ADVANCE(330);
      if (lookahead == '`') ADVANCE(255);
      if (lookahead != 0) ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(382);
      if (lookahead == '"') ADVANCE(383);
      if (lookahead == '\'') ADVANCE(382);
      if (lookahead == ')') ADVANCE(442);
      if (lookahead == '?') ADVANCE(331);
      if (lookahead == '`') ADVANCE(257);
      if (lookahead != 0) ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(383);
      if (lookahead == '"') ADVANCE(383);
      if (lookahead == '\'') ADVANCE(383);
      if (lookahead == ')') ADVANCE(443);
      if (lookahead == '?') ADVANCE(332);
      if (lookahead == '`') ADVANCE(259);
      if (lookahead != 0) ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead == '"') ADVANCE(384);
      if (lookahead == '\'') ADVANCE(387);
      if (lookahead == '(') ADVANCE(247);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead == '?') ADVANCE(364);
      if (lookahead == '`') ADVANCE(388);
      if (lookahead != 0) ADVANCE(384);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(249);
      if (lookahead == '"') ADVANCE(387);
      if (lookahead == '\'') ADVANCE(385);
      if (lookahead == '(') ADVANCE(249);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead == '?') ADVANCE(365);
      if (lookahead == '`') ADVANCE(389);
      if (lookahead != 0) ADVANCE(385);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(251);
      if (lookahead == '"') ADVANCE(388);
      if (lookahead == '\'') ADVANCE(389);
      if (lookahead == '(') ADVANCE(251);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead == '?') ADVANCE(366);
      if (lookahead == '`') ADVANCE(386);
      if (lookahead != 0) ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(253);
      if (lookahead == '"') ADVANCE(387);
      if (lookahead == '\'') ADVANCE(387);
      if (lookahead == '(') ADVANCE(253);
      if (lookahead == ')') ADVANCE(475);
      if (lookahead == '?') ADVANCE(367);
      if (lookahead == '`') ADVANCE(390);
      if (lookahead != 0) ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(255);
      if (lookahead == '"') ADVANCE(388);
      if (lookahead == '\'') ADVANCE(390);
      if (lookahead == '(') ADVANCE(255);
      if (lookahead == ')') ADVANCE(476);
      if (lookahead == '?') ADVANCE(368);
      if (lookahead == '`') ADVANCE(388);
      if (lookahead != 0) ADVANCE(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(257);
      if (lookahead == '"') ADVANCE(390);
      if (lookahead == '\'') ADVANCE(389);
      if (lookahead == '(') ADVANCE(257);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead == '?') ADVANCE(369);
      if (lookahead == '`') ADVANCE(389);
      if (lookahead != 0) ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(259);
      if (lookahead == '"') ADVANCE(390);
      if (lookahead == '\'') ADVANCE(390);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == ')') ADVANCE(478);
      if (lookahead == '?') ADVANCE(370);
      if (lookahead == '`') ADVANCE(390);
      if (lookahead != 0) ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(391);
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '\'') ADVANCE(394);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == '?') ADVANCE(234);
      if (lookahead == '`') ADVANCE(395);
      if (lookahead != 0) ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(392);
      if (lookahead == '"') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(392);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '?') ADVANCE(236);
      if (lookahead == '`') ADVANCE(396);
      if (lookahead != 0) ADVANCE(392);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(393);
      if (lookahead == '"') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(396);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '?') ADVANCE(238);
      if (lookahead == '`') ADVANCE(393);
      if (lookahead != 0) ADVANCE(393);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(394);
      if (lookahead == '"') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(394);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '?') ADVANCE(240);
      if (lookahead == '`') ADVANCE(397);
      if (lookahead != 0) ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(395);
      if (lookahead == '"') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(397);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '?') ADVANCE(242);
      if (lookahead == '`') ADVANCE(395);
      if (lookahead != 0) ADVANCE(395);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(396);
      if (lookahead == '"') ADVANCE(397);
      if (lookahead == '\'') ADVANCE(396);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '?') ADVANCE(244);
      if (lookahead == '`') ADVANCE(396);
      if (lookahead != 0) ADVANCE(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(397);
      if (lookahead == '"') ADVANCE(397);
      if (lookahead == '\'') ADVANCE(397);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '?') ADVANCE(246);
      if (lookahead == '`') ADVANCE(397);
      if (lookahead != 0) ADVANCE(397);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(398);
      if (lookahead == '"') ADVANCE(398);
      if (lookahead == '\'') ADVANCE(401);
      if (lookahead == ')') ADVANCE(444);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == '`') ADVANCE(402);
      if (lookahead != 0) ADVANCE(398);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(399);
      if (lookahead == '"') ADVANCE(401);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == ')') ADVANCE(445);
      if (lookahead == '?') ADVANCE(250);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead != 0) ADVANCE(399);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(400);
      if (lookahead == '"') ADVANCE(402);
      if (lookahead == '\'') ADVANCE(403);
      if (lookahead == ')') ADVANCE(446);
      if (lookahead == '?') ADVANCE(252);
      if (lookahead == '`') ADVANCE(400);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(401);
      if (lookahead == '"') ADVANCE(401);
      if (lookahead == '\'') ADVANCE(401);
      if (lookahead == ')') ADVANCE(447);
      if (lookahead == '?') ADVANCE(254);
      if (lookahead == '`') ADVANCE(404);
      if (lookahead != 0) ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(402);
      if (lookahead == '"') ADVANCE(402);
      if (lookahead == '\'') ADVANCE(404);
      if (lookahead == ')') ADVANCE(448);
      if (lookahead == '?') ADVANCE(256);
      if (lookahead == '`') ADVANCE(402);
      if (lookahead != 0) ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(403);
      if (lookahead == '"') ADVANCE(404);
      if (lookahead == '\'') ADVANCE(403);
      if (lookahead == ')') ADVANCE(449);
      if (lookahead == '?') ADVANCE(258);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead != 0) ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(404);
      if (lookahead == '"') ADVANCE(404);
      if (lookahead == '\'') ADVANCE(404);
      if (lookahead == ')') ADVANCE(450);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == '`') ADVANCE(404);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == '[') ADVANCE(431);
      if (lookahead == ']') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead == ']') ADVANCE(439);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(406);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == ',') ADVANCE(407);
      if (lookahead == '}') ADVANCE(407);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == ',') ADVANCE(408);
      if (lookahead == '}') ADVANCE(408);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(408);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(69);
      if (lookahead == ')') ADVANCE(473);
      if (lookahead == '`') ADVANCE(411);
      if (lookahead != 0) ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == ')') ADVANCE(440);
      if (lookahead != 0) ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == ')') ADVANCE(440);
      if (lookahead != 0) ADVANCE(411);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(412);
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == '\'') ADVANCE(235);
      if (lookahead == '?') ADVANCE(439);
      if (lookahead == '`') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(412);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(412);
      if (lookahead == '"') ADVANCE(261);
      if (lookahead == '\'') ADVANCE(263);
      if (lookahead == '(') ADVANCE(416);
      if (lookahead == '?') ADVANCE(431);
      if (lookahead == '`') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(412);
      if (lookahead == '(') ADVANCE(416);
      if (lookahead == '?') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(413);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(412);
      if (lookahead == '?') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(412);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(416);
      if (lookahead == '"') ADVANCE(247);
      if (lookahead == '\'') ADVANCE(249);
      if (lookahead == ')') ADVANCE(440);
      if (lookahead == '?') ADVANCE(411);
      if (lookahead == '`') ADVANCE(251);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(416);
      if (lookahead == '"') ADVANCE(384);
      if (lookahead == '\'') ADVANCE(385);
      if (lookahead == '(') ADVANCE(416);
      if (lookahead == ')') ADVANCE(440);
      if (lookahead == '?') ADVANCE(410);
      if (lookahead == '`') ADVANCE(386);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(416);
      if (lookahead == ')') ADVANCE(440);
      if (lookahead == '?') ADVANCE(411);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(419);
      if (lookahead == '"') ADVANCE(278);
      if (lookahead == '\'') ADVANCE(279);
      if (lookahead == '?') ADVANCE(406);
      if (lookahead == ']') ADVANCE(412);
      if (lookahead == '`') ADVANCE(280);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(419);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(419);
      if (lookahead == '"') ADVANCE(285);
      if (lookahead == '\'') ADVANCE(286);
      if (lookahead == '(') ADVANCE(416);
      if (lookahead == '?') ADVANCE(405);
      if (lookahead == '[') ADVANCE(413);
      if (lookahead == ']') ADVANCE(413);
      if (lookahead == '`') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(421);
      if (lookahead == '"') ADVANCE(292);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == ',') ADVANCE(421);
      if (lookahead == '?') ADVANCE(408);
      if (lookahead == '`') ADVANCE(294);
      if (lookahead == '}') ADVANCE(421);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(421);
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '\'') ADVANCE(300);
      if (lookahead == '(') ADVANCE(416);
      if (lookahead == ',') ADVANCE(422);
      if (lookahead == '?') ADVANCE(407);
      if (lookahead == '`') ADVANCE(301);
      if (lookahead == '}') ADVANCE(422);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(424);
      if (lookahead == '"') ADVANCE(275);
      if (lookahead == '\'') ADVANCE(276);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == ')') ADVANCE(90);
      if (lookahead == '?') ADVANCE(432);
      if (lookahead == '`') ADVANCE(265);
      if (lookahead != 0) ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(424);
      if (lookahead == '"') ADVANCE(371);
      if (lookahead == '\'') ADVANCE(372);
      if (lookahead == ')') ADVANCE(90);
      if (lookahead == '?') ADVANCE(433);
      if (lookahead == '`') ADVANCE(237);
      if (lookahead != 0) ADVANCE(424);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(425);
      if (lookahead == '"') ADVANCE(381);
      if (lookahead == '\'') ADVANCE(382);
      if (lookahead == ')') ADVANCE(473);
      if (lookahead == '?') ADVANCE(409);
      if (lookahead == '`') ADVANCE(251);
      if (lookahead != 0) ADVANCE(425);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(427);
      if (lookahead == '"') ADVANCE(374);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '(') ADVANCE(428);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '?') ADVANCE(414);
      if (lookahead == '`') ADVANCE(376);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(427);
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '\'') ADVANCE(392);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '?') ADVANCE(415);
      if (lookahead == '`') ADVANCE(393);
      if (lookahead != 0) ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(428);
      if (lookahead == '"') ADVANCE(398);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == ')') ADVANCE(472);
      if (lookahead == '?') ADVANCE(418);
      if (lookahead == '`') ADVANCE(400);
      if (lookahead != 0) ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '(') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(431);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '(') ADVANCE(409);
      if (lookahead == '`') ADVANCE(431);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(90);
      if (lookahead != 0) ADVANCE(432);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '`') ADVANCE(439);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(90);
      if (lookahead != 0) ADVANCE(433);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '`') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(133);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(439);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == '`') ADVANCE(492);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\'') ADVANCE(200);
      if (lookahead == '`') ADVANCE(493);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(201);
      if (lookahead == '`') ADVANCE(497);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"') ADVANCE(216);
      if (lookahead == '?') ADVANCE(42);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\'') ADVANCE(217);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead == '`') ADVANCE(218);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(219);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(220);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(221);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(222);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == '[') ADVANCE(470);
      if (lookahead == ']') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(451);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ',') ADVANCE(452);
      if (lookahead == '}') ADVANCE(452);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(452);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(70);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(472);
      if (lookahead == '?') ADVANCE(458);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(86);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '?') ADVANCE(459);
      if (lookahead == '[') ADVANCE(468);
      if (lookahead == ']') ADVANCE(468);
      if (lookahead != 0) ADVANCE(454);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == ',') ADVANCE(455);
      if (lookahead == '?') ADVANCE(460);
      if (lookahead == '}') ADVANCE(455);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(468);
      if (lookahead != 0) ADVANCE(455);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(440);
      if (lookahead != 0) ADVANCE(456);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(412);
      if (lookahead == '(') ADVANCE(416);
      if (lookahead == '?') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(413);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(416);
      if (lookahead == '(') ADVANCE(416);
      if (lookahead == ')') ADVANCE(440);
      if (lookahead == '?') ADVANCE(456);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(419);
      if (lookahead == '(') ADVANCE(416);
      if (lookahead == '?') ADVANCE(451);
      if (lookahead == '[') ADVANCE(413);
      if (lookahead == ']') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(420);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(421);
      if (lookahead == '(') ADVANCE(416);
      if (lookahead == ',') ADVANCE(422);
      if (lookahead == '?') ADVANCE(452);
      if (lookahead == '}') ADVANCE(422);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(422);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '"') ADVANCE(603);
      if (lookahead == '\'') ADVANCE(599);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '?') ADVANCE(463);
      if (lookahead == '[') ADVANCE(454);
      if (lookahead == '`') ADVANCE(469);
      if (lookahead == '{') ADVANCE(455);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(461);
      if (lookahead != 0) ADVANCE(468);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(424);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == ')') ADVANCE(90);
      if (lookahead == '?') ADVANCE(466);
      if (lookahead == '`') ADVANCE(413);
      if (lookahead != 0) ADVANCE(423);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(427);
      if (lookahead == '(') ADVANCE(428);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '?') ADVANCE(470);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == '`') ADVANCE(470);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(90);
      if (lookahead != 0) ADVANCE(466);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '?') ADVANCE(470);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(85);
      if (lookahead != 0) ADVANCE(468);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '?') ADVANCE(457);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(85);
      if (lookahead != 0) ADVANCE(468);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == '?') ADVANCE(462);
      if (lookahead == '`') ADVANCE(468);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(84);
      if (lookahead != 0) ADVANCE(469);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(470);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '?') ADVANCE(91);
      if (lookahead == '`') ADVANCE(496);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '?') ADVANCE(142);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '`') ADVANCE(488);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '`') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(133);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"') ADVANCE(209);
      if (lookahead == ',') ADVANCE(11);
      if (lookahead == '}') ADVANCE(479);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(63);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(210);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(480);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(65);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '`') ADVANCE(211);
      if (lookahead == '}') ADVANCE(481);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(92);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(212);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '}') ADVANCE(482);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(132);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(213);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(483);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(133);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(214);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(484);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(134);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(215);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(485);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(136);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == ',') ADVANCE(55);
      if (lookahead == '}') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(75);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '?') ADVANCE(77);
      if (lookahead == '}') ADVANCE(487);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(85);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"') ADVANCE(226);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(227);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(229);
      if (lookahead == ')') ADVANCE(475);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '"') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == ')') ADVANCE(472);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == ')') ADVANCE(440);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '?') ADVANCE(142);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '?') ADVANCE(142);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '`') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(133);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__attribute_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(561);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(578);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(565);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(579);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(571);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(573);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(575);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(577);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(537);
      if (lookahead == 'o') ADVANCE(516);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(550);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(567);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(538);
      if (lookahead == 'o') ADVANCE(517);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(551);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(568);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(570);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(161);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(512);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(514);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(162);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(529);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(526);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(574);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(576);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(527);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(530);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(534);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(564);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(569);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(572);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(181);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(544);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(545);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(546);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(516);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(517);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(518);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(521);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(524);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(533);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(519);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(167);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(168);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(520);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(522);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(169);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(562);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(563);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(523);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(566);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(531);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(532);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(580);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(581);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(582);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(542);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(543);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(558);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(559);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(560);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(586);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(589);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(590);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(588);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(591);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token1);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token2);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '?') ADVANCE(457);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(85);
      if (lookahead != 0) ADVANCE(468);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(601);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(601);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '?') ADVANCE(457);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(85);
      if (lookahead != 0) ADVANCE(468);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(605);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(605);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '{') ADVANCE(607);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '{') ADVANCE(607);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(620);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(622);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(610);
      if (lookahead == ' ') ADVANCE(610);
      if (lookahead == '!') ADVANCE(613);
      if (lookahead == '#') ADVANCE(618);
      if (lookahead == '-') ADVANCE(639);
      if (lookahead == '.') ADVANCE(617);
      if (lookahead == '/') ADVANCE(612);
      if (lookahead == '=') ADVANCE(192);
      if (lookahead == 'c') ADVANCE(515);
      if (lookahead == 'd') ADVANCE(557);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == 'i') ADVANCE(539);
      if (lookahead == 'u') ADVANCE(554);
      if (lookahead == '|') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0) ADVANCE(619);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(611);
      if (lookahead == ' ') ADVANCE(611);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(611);
      if (lookahead != 0) ADVANCE(619);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '/') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '=') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == 'f') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == 'i') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(617);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(591);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__delimited_javascript);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(625);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__delimited_javascript);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(625);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(629);
      if (lookahead == '#') ADVANCE(635);
      if (lookahead == '-') ADVANCE(638);
      if (lookahead == '.') ADVANCE(634);
      if (lookahead == '/') ADVANCE(628);
      if (lookahead == '=') ADVANCE(191);
      if (lookahead == 'c') ADVANCE(513);
      if (lookahead == 'd') ADVANCE(528);
      if (lookahead == 'e') ADVANCE(548);
      if (lookahead == 'i') ADVANCE(536);
      if (lookahead == 'u') ADVANCE(553);
      if (lookahead == 'w') ADVANCE(540);
      if (lookahead == '|') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(629);
      if (lookahead == '#') ADVANCE(635);
      if (lookahead == '-') ADVANCE(638);
      if (lookahead == '.') ADVANCE(634);
      if (lookahead == '/') ADVANCE(628);
      if (lookahead == '=') ADVANCE(191);
      if (lookahead == 'c') ADVANCE(513);
      if (lookahead == 'd') ADVANCE(556);
      if (lookahead == 'e') ADVANCE(548);
      if (lookahead == 'i') ADVANCE(536);
      if (lookahead == 'u') ADVANCE(553);
      if (lookahead == '|') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '/') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '=') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'f') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'i') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(634);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(590);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(636);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(619);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_unbuffered_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(640);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 147},
  [2] = {.lex_state = 147},
  [3] = {.lex_state = 147},
  [4] = {.lex_state = 146, .external_lex_state = 2},
  [5] = {.lex_state = 146, .external_lex_state = 2},
  [6] = {.lex_state = 146, .external_lex_state = 3},
  [7] = {.lex_state = 146, .external_lex_state = 2},
  [8] = {.lex_state = 146, .external_lex_state = 2},
  [9] = {.lex_state = 147, .external_lex_state = 2},
  [10] = {.lex_state = 147, .external_lex_state = 2},
  [11] = {.lex_state = 146, .external_lex_state = 2},
  [12] = {.lex_state = 146},
  [13] = {.lex_state = 146, .external_lex_state = 2},
  [14] = {.lex_state = 146, .external_lex_state = 4},
  [15] = {.lex_state = 146, .external_lex_state = 4},
  [16] = {.lex_state = 143, .external_lex_state = 2},
  [17] = {.lex_state = 146, .external_lex_state = 2},
  [18] = {.lex_state = 146, .external_lex_state = 4},
  [19] = {.lex_state = 146, .external_lex_state = 4},
  [20] = {.lex_state = 146, .external_lex_state = 3},
  [21] = {.lex_state = 146, .external_lex_state = 4},
  [22] = {.lex_state = 146, .external_lex_state = 4},
  [23] = {.lex_state = 143, .external_lex_state = 2},
  [24] = {.lex_state = 147, .external_lex_state = 2},
  [25] = {.lex_state = 146},
  [26] = {.lex_state = 143, .external_lex_state = 2},
  [27] = {.lex_state = 146, .external_lex_state = 4},
  [28] = {.lex_state = 146, .external_lex_state = 4},
  [29] = {.lex_state = 146, .external_lex_state = 2},
  [30] = {.lex_state = 146, .external_lex_state = 2},
  [31] = {.lex_state = 146, .external_lex_state = 2},
  [32] = {.lex_state = 146, .external_lex_state = 2},
  [33] = {.lex_state = 146, .external_lex_state = 2},
  [34] = {.lex_state = 145, .external_lex_state = 2},
  [35] = {.lex_state = 146, .external_lex_state = 2},
  [36] = {.lex_state = 146, .external_lex_state = 2},
  [37] = {.lex_state = 144, .external_lex_state = 2},
  [38] = {.lex_state = 145, .external_lex_state = 2},
  [39] = {.lex_state = 147, .external_lex_state = 4},
  [40] = {.lex_state = 147, .external_lex_state = 4},
  [41] = {.lex_state = 146, .external_lex_state = 2},
  [42] = {.lex_state = 146, .external_lex_state = 2},
  [43] = {.lex_state = 146, .external_lex_state = 2},
  [44] = {.lex_state = 146, .external_lex_state = 2},
  [45] = {.lex_state = 146, .external_lex_state = 2},
  [46] = {.lex_state = 146, .external_lex_state = 2},
  [47] = {.lex_state = 146, .external_lex_state = 2},
  [48] = {.lex_state = 146, .external_lex_state = 2},
  [49] = {.lex_state = 146, .external_lex_state = 2},
  [50] = {.lex_state = 146, .external_lex_state = 2},
  [51] = {.lex_state = 146, .external_lex_state = 2},
  [52] = {.lex_state = 147, .external_lex_state = 4},
  [53] = {.lex_state = 147, .external_lex_state = 4},
  [54] = {.lex_state = 146, .external_lex_state = 2},
  [55] = {.lex_state = 147, .external_lex_state = 4},
  [56] = {.lex_state = 145, .external_lex_state = 2},
  [57] = {.lex_state = 144, .external_lex_state = 2},
  [58] = {.lex_state = 146, .external_lex_state = 2},
  [59] = {.lex_state = 146, .external_lex_state = 2},
  [60] = {.lex_state = 145, .external_lex_state = 2},
  [61] = {.lex_state = 145, .external_lex_state = 2},
  [62] = {.lex_state = 146, .external_lex_state = 2},
  [63] = {.lex_state = 147, .external_lex_state = 4},
  [64] = {.lex_state = 146, .external_lex_state = 2},
  [65] = {.lex_state = 146, .external_lex_state = 2},
  [66] = {.lex_state = 146, .external_lex_state = 2},
  [67] = {.lex_state = 147, .external_lex_state = 5},
  [68] = {.lex_state = 145, .external_lex_state = 2},
  [69] = {.lex_state = 147, .external_lex_state = 5},
  [70] = {.lex_state = 146},
  [71] = {.lex_state = 147, .external_lex_state = 5},
  [72] = {.lex_state = 147},
  [73] = {.lex_state = 147, .external_lex_state = 4},
  [74] = {.lex_state = 147},
  [75] = {.lex_state = 147, .external_lex_state = 5},
  [76] = {.lex_state = 146},
  [77] = {.lex_state = 147, .external_lex_state = 5},
  [78] = {.lex_state = 147, .external_lex_state = 5},
  [79] = {.lex_state = 144, .external_lex_state = 2},
  [80] = {.lex_state = 147},
  [81] = {.lex_state = 147, .external_lex_state = 5},
  [82] = {.lex_state = 147, .external_lex_state = 2},
  [83] = {.lex_state = 147, .external_lex_state = 2},
  [84] = {.lex_state = 147, .external_lex_state = 5},
  [85] = {.lex_state = 147, .external_lex_state = 5},
  [86] = {.lex_state = 147, .external_lex_state = 2},
  [87] = {.lex_state = 147, .external_lex_state = 2},
  [88] = {.lex_state = 147, .external_lex_state = 2},
  [89] = {.lex_state = 147, .external_lex_state = 2},
  [90] = {.lex_state = 147, .external_lex_state = 2},
  [91] = {.lex_state = 147, .external_lex_state = 2},
  [92] = {.lex_state = 147, .external_lex_state = 2},
  [93] = {.lex_state = 147, .external_lex_state = 2},
  [94] = {.lex_state = 147, .external_lex_state = 2},
  [95] = {.lex_state = 147, .external_lex_state = 2},
  [96] = {.lex_state = 147, .external_lex_state = 2},
  [97] = {.lex_state = 147, .external_lex_state = 2},
  [98] = {.lex_state = 147, .external_lex_state = 2},
  [99] = {.lex_state = 147, .external_lex_state = 2},
  [100] = {.lex_state = 147, .external_lex_state = 2},
  [101] = {.lex_state = 147, .external_lex_state = 2},
  [102] = {.lex_state = 147, .external_lex_state = 2},
  [103] = {.lex_state = 147, .external_lex_state = 2},
  [104] = {.lex_state = 147},
  [105] = {.lex_state = 147},
  [106] = {.lex_state = 147},
  [107] = {.lex_state = 147},
  [108] = {.lex_state = 147},
  [109] = {.lex_state = 147},
  [110] = {.lex_state = 147},
  [111] = {.lex_state = 147},
  [112] = {.lex_state = 147},
  [113] = {.lex_state = 147},
  [114] = {.lex_state = 147},
  [115] = {.lex_state = 147},
  [116] = {.lex_state = 147},
  [117] = {.lex_state = 147},
  [118] = {.lex_state = 147},
  [119] = {.lex_state = 147},
  [120] = {.lex_state = 147},
  [121] = {.lex_state = 147},
  [122] = {.lex_state = 147},
  [123] = {.lex_state = 147},
  [124] = {.lex_state = 147},
  [125] = {.lex_state = 147},
  [126] = {.lex_state = 147},
  [127] = {.lex_state = 147},
  [128] = {.lex_state = 53, .external_lex_state = 6},
  [129] = {.lex_state = 53, .external_lex_state = 6},
  [130] = {.lex_state = 53, .external_lex_state = 6},
  [131] = {.lex_state = 53, .external_lex_state = 6},
  [132] = {.lex_state = 53, .external_lex_state = 6},
  [133] = {.lex_state = 53, .external_lex_state = 6},
  [134] = {.lex_state = 53, .external_lex_state = 6},
  [135] = {.lex_state = 53, .external_lex_state = 6},
  [136] = {.lex_state = 60},
  [137] = {.lex_state = 60},
  [138] = {.lex_state = 60},
  [139] = {.lex_state = 60},
  [140] = {.lex_state = 60},
  [141] = {.lex_state = 60},
  [142] = {.lex_state = 60},
  [143] = {.lex_state = 60},
  [144] = {.lex_state = 60},
  [145] = {.lex_state = 60},
  [146] = {.lex_state = 60},
  [147] = {.lex_state = 60},
  [148] = {.lex_state = 54},
  [149] = {.lex_state = 54},
  [150] = {.lex_state = 66},
  [151] = {.lex_state = 66},
  [152] = {.lex_state = 66},
  [153] = {.lex_state = 53, .external_lex_state = 6},
  [154] = {.lex_state = 54, .external_lex_state = 6},
  [155] = {.lex_state = 54, .external_lex_state = 6},
  [156] = {.lex_state = 60, .external_lex_state = 2},
  [157] = {.lex_state = 60, .external_lex_state = 2},
  [158] = {.lex_state = 54, .external_lex_state = 6},
  [159] = {.lex_state = 54, .external_lex_state = 6},
  [160] = {.lex_state = 54, .external_lex_state = 6},
  [161] = {.lex_state = 54, .external_lex_state = 6},
  [162] = {.lex_state = 54, .external_lex_state = 6},
  [163] = {.lex_state = 54, .external_lex_state = 6},
  [164] = {.lex_state = 61},
  [165] = {.lex_state = 49, .external_lex_state = 2},
  [166] = {.lex_state = 49, .external_lex_state = 2},
  [167] = {.lex_state = 60},
  [168] = {.lex_state = 49, .external_lex_state = 2},
  [169] = {.lex_state = 60},
  [170] = {.lex_state = 49, .external_lex_state = 2},
  [171] = {.lex_state = 49, .external_lex_state = 2},
  [172] = {.lex_state = 49, .external_lex_state = 2},
  [173] = {.lex_state = 49, .external_lex_state = 2},
  [174] = {.lex_state = 60},
  [175] = {.lex_state = 49, .external_lex_state = 2},
  [176] = {.lex_state = 60},
  [177] = {.lex_state = 49, .external_lex_state = 2},
  [178] = {.lex_state = 49},
  [179] = {.lex_state = 49, .external_lex_state = 6},
  [180] = {.lex_state = 49},
  [181] = {.lex_state = 49, .external_lex_state = 6},
  [182] = {.lex_state = 49, .external_lex_state = 6},
  [183] = {.lex_state = 49, .external_lex_state = 6},
  [184] = {.lex_state = 60, .external_lex_state = 4},
  [185] = {.lex_state = 49, .external_lex_state = 6},
  [186] = {.lex_state = 49, .external_lex_state = 6},
  [187] = {.lex_state = 49, .external_lex_state = 6},
  [188] = {.lex_state = 49, .external_lex_state = 6},
  [189] = {.lex_state = 49},
  [190] = {.lex_state = 49, .external_lex_state = 6},
  [191] = {.lex_state = 49},
  [192] = {.lex_state = 49, .external_lex_state = 6},
  [193] = {.lex_state = 60, .external_lex_state = 4},
  [194] = {.lex_state = 49, .external_lex_state = 6},
  [195] = {.lex_state = 49, .external_lex_state = 6},
  [196] = {.lex_state = 49, .external_lex_state = 6},
  [197] = {.lex_state = 49},
  [198] = {.lex_state = 49, .external_lex_state = 6},
  [199] = {.lex_state = 49, .external_lex_state = 6},
  [200] = {.lex_state = 60, .external_lex_state = 4},
  [201] = {.lex_state = 49, .external_lex_state = 6},
  [202] = {.lex_state = 60, .external_lex_state = 4},
  [203] = {.lex_state = 49},
  [204] = {.lex_state = 49},
  [205] = {.lex_state = 49},
  [206] = {.lex_state = 49, .external_lex_state = 6},
  [207] = {.lex_state = 49, .external_lex_state = 6},
  [208] = {.lex_state = 49, .external_lex_state = 6},
  [209] = {.lex_state = 49, .external_lex_state = 6},
  [210] = {.lex_state = 49, .external_lex_state = 6},
  [211] = {.lex_state = 60, .external_lex_state = 4},
  [212] = {.lex_state = 60, .external_lex_state = 4},
  [213] = {.lex_state = 49, .external_lex_state = 6},
  [214] = {.lex_state = 49},
  [215] = {.lex_state = 60, .external_lex_state = 2},
  [216] = {.lex_state = 49},
  [217] = {.lex_state = 54, .external_lex_state = 6},
  [218] = {.lex_state = 60, .external_lex_state = 4},
  [219] = {.lex_state = 49},
  [220] = {.lex_state = 49},
  [221] = {.lex_state = 60, .external_lex_state = 2},
  [222] = {.lex_state = 49},
  [223] = {.lex_state = 54},
  [224] = {.lex_state = 49},
  [225] = {.lex_state = 49},
  [226] = {.lex_state = 49},
  [227] = {.lex_state = 60, .external_lex_state = 2},
  [228] = {.lex_state = 54, .external_lex_state = 6},
  [229] = {.lex_state = 49, .external_lex_state = 6},
  [230] = {.lex_state = 49},
  [231] = {.lex_state = 54, .external_lex_state = 6},
  [232] = {.lex_state = 49},
  [233] = {.lex_state = 49},
  [234] = {.lex_state = 60, .external_lex_state = 2},
  [235] = {.lex_state = 49},
  [236] = {.lex_state = 60, .external_lex_state = 2},
  [237] = {.lex_state = 60},
  [238] = {.lex_state = 60, .external_lex_state = 2},
  [239] = {.lex_state = 60, .external_lex_state = 2},
  [240] = {.lex_state = 60, .external_lex_state = 2},
  [241] = {.lex_state = 54},
  [242] = {.lex_state = 49, .external_lex_state = 6},
  [243] = {.lex_state = 60},
  [244] = {.lex_state = 60},
  [245] = {.lex_state = 60},
  [246] = {.lex_state = 49, .external_lex_state = 6},
  [247] = {.lex_state = 66},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 60, .external_lex_state = 2},
  [250] = {.lex_state = 60, .external_lex_state = 2},
  [251] = {.lex_state = 60, .external_lex_state = 2},
  [252] = {.lex_state = 60},
  [253] = {.lex_state = 60, .external_lex_state = 2},
  [254] = {.lex_state = 60, .external_lex_state = 2},
  [255] = {.lex_state = 60, .external_lex_state = 2},
  [256] = {.lex_state = 60},
  [257] = {.lex_state = 60, .external_lex_state = 2},
  [258] = {.lex_state = 49, .external_lex_state = 6},
  [259] = {.lex_state = 60, .external_lex_state = 2},
  [260] = {.lex_state = 54},
  [261] = {.lex_state = 60, .external_lex_state = 2},
  [262] = {.lex_state = 60, .external_lex_state = 2},
  [263] = {.lex_state = 60, .external_lex_state = 2},
  [264] = {.lex_state = 60, .external_lex_state = 2},
  [265] = {.lex_state = 60, .external_lex_state = 2},
  [266] = {.lex_state = 60, .external_lex_state = 2},
  [267] = {.lex_state = 60, .external_lex_state = 2},
  [268] = {.lex_state = 60},
  [269] = {.lex_state = 49, .external_lex_state = 6},
  [270] = {.lex_state = 49, .external_lex_state = 2},
  [271] = {.lex_state = 49, .external_lex_state = 6},
  [272] = {.lex_state = 50, .external_lex_state = 6},
  [273] = {.lex_state = 60},
  [274] = {.lex_state = 60},
  [275] = {.lex_state = 60},
  [276] = {.lex_state = 60},
  [277] = {.lex_state = 53},
  [278] = {.lex_state = 49, .external_lex_state = 6},
  [279] = {.lex_state = 53},
  [280] = {.lex_state = 60},
  [281] = {.lex_state = 60},
  [282] = {.lex_state = 50, .external_lex_state = 6},
  [283] = {.lex_state = 60},
  [284] = {.lex_state = 60},
  [285] = {.lex_state = 60},
  [286] = {.lex_state = 60},
  [287] = {.lex_state = 60},
  [288] = {.lex_state = 53},
  [289] = {.lex_state = 50},
  [290] = {.lex_state = 53},
  [291] = {.lex_state = 53},
  [292] = {.lex_state = 53},
  [293] = {.lex_state = 50},
  [294] = {.lex_state = 60},
  [295] = {.lex_state = 50},
  [296] = {.lex_state = 50},
  [297] = {.lex_state = 50},
  [298] = {.lex_state = 50},
  [299] = {.lex_state = 53},
  [300] = {.lex_state = 53},
  [301] = {.lex_state = 53},
  [302] = {.lex_state = 53},
  [303] = {.lex_state = 53},
  [304] = {.lex_state = 53},
  [305] = {.lex_state = 53},
  [306] = {.lex_state = 53},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 50},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 53},
  [311] = {.lex_state = 53},
  [312] = {.lex_state = 50},
  [313] = {.lex_state = 50},
  [314] = {.lex_state = 53},
  [315] = {.lex_state = 53},
  [316] = {.lex_state = 50},
  [317] = {.lex_state = 62},
  [318] = {.lex_state = 64},
  [319] = {.lex_state = 57, .external_lex_state = 6},
  [320] = {.lex_state = 62},
  [321] = {.lex_state = 64},
  [322] = {.lex_state = 50},
  [323] = {.lex_state = 53},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0, .external_lex_state = 5},
  [326] = {.lex_state = 0, .external_lex_state = 5},
  [327] = {.lex_state = 640},
  [328] = {.lex_state = 51},
  [329] = {.lex_state = 66},
  [330] = {.lex_state = 0, .external_lex_state = 6},
  [331] = {.lex_state = 0, .external_lex_state = 6},
  [332] = {.lex_state = 0, .external_lex_state = 5},
  [333] = {.lex_state = 640},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0, .external_lex_state = 5},
  [337] = {.lex_state = 51},
  [338] = {.lex_state = 0, .external_lex_state = 5},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0, .external_lex_state = 6},
  [341] = {.lex_state = 0, .external_lex_state = 6},
  [342] = {.lex_state = 0, .external_lex_state = 6},
  [343] = {.lex_state = 50},
  [344] = {.lex_state = 0, .external_lex_state = 6},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0, .external_lex_state = 6},
  [347] = {.lex_state = 52},
  [348] = {.lex_state = 0, .external_lex_state = 6},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 147},
  [351] = {.lex_state = 0, .external_lex_state = 6},
  [352] = {.lex_state = 0, .external_lex_state = 6},
  [353] = {.lex_state = 0, .external_lex_state = 5},
  [354] = {.lex_state = 0, .external_lex_state = 5},
  [355] = {.lex_state = 0, .external_lex_state = 5},
  [356] = {.lex_state = 0, .external_lex_state = 5},
  [357] = {.lex_state = 0, .external_lex_state = 5},
  [358] = {.lex_state = 0, .external_lex_state = 5},
  [359] = {.lex_state = 0, .external_lex_state = 6},
  [360] = {.lex_state = 0, .external_lex_state = 6},
  [361] = {.lex_state = 0, .external_lex_state = 6},
  [362] = {.lex_state = 0, .external_lex_state = 6},
  [363] = {.lex_state = 0, .external_lex_state = 6},
  [364] = {.lex_state = 0, .external_lex_state = 6},
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
    [aux_sym_angular_attribute_name_token1] = ACTIONS(1),
    [aux_sym_angular_attribute_name_token3] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_POUND_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(345),
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
  [180] = 6,
    ACTIONS(98), 1,
      anon_sym_COLON,
    ACTIONS(100), 1,
      sym__newline,
    ACTIONS(102), 1,
      sym__dedent,
    STATE(45), 1,
      sym__when_content,
    ACTIONS(96), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(94), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [214] = 7,
    ACTIONS(75), 1,
      sym_tag_name,
    ACTIONS(108), 1,
      anon_sym_DASH,
    STATE(59), 1,
      sym_unbuffered_code,
    ACTIONS(77), 2,
      sym_class,
      sym_id,
    STATE(11), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(104), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
    ACTIONS(106), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
  [250] = 7,
    ACTIONS(75), 1,
      sym_tag_name,
    ACTIONS(108), 1,
      anon_sym_DASH,
    STATE(64), 1,
      sym_unbuffered_code,
    ACTIONS(77), 2,
      sym_class,
      sym_id,
    STATE(13), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(110), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
    ACTIONS(112), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
  [286] = 7,
    ACTIONS(114), 1,
      anon_sym_PIPE,
    ACTIONS(116), 1,
      sym_tag_name,
    ACTIONS(120), 1,
      sym__dedent,
    ACTIONS(118), 2,
      sym_class,
      sym_id,
    STATE(10), 4,
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
  [321] = 6,
    ACTIONS(122), 1,
      anon_sym_PIPE,
    ACTIONS(125), 1,
      sym_tag_name,
    ACTIONS(128), 2,
      sym_class,
      sym_id,
    STATE(10), 4,
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
  [354] = 5,
    ACTIONS(75), 1,
      sym_tag_name,
    ACTIONS(77), 2,
      sym_class,
      sym_id,
    STATE(17), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(112), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(110), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [385] = 6,
    ACTIONS(135), 1,
      anon_sym_when,
    ACTIONS(137), 1,
      anon_sym_default,
    STATE(6), 1,
      sym__when_keyword,
    STATE(25), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(133), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(131), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [418] = 5,
    ACTIONS(75), 1,
      sym_tag_name,
    ACTIONS(77), 2,
      sym_class,
      sym_id,
    STATE(17), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(141), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(139), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [449] = 4,
    ACTIONS(147), 1,
      sym__indent,
    STATE(35), 1,
      sym_children,
    ACTIONS(145), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(143), 10,
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
  [478] = 4,
    ACTIONS(153), 1,
      sym__indent,
    STATE(66), 1,
      sym_children,
    ACTIONS(151), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(149), 10,
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
  [507] = 4,
    ACTIONS(159), 1,
      sym__un_delimited_javascript_line,
    STATE(23), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(155), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(157), 16,
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
  [536] = 5,
    ACTIONS(165), 1,
      sym_tag_name,
    ACTIONS(168), 2,
      sym_class,
      sym_id,
    STATE(17), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(163), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(161), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [567] = 4,
    ACTIONS(153), 1,
      sym__indent,
    STATE(35), 1,
      sym_children,
    ACTIONS(145), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(143), 10,
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
  [596] = 4,
    ACTIONS(153), 1,
      sym__indent,
    STATE(30), 1,
      sym_children,
    ACTIONS(173), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(171), 10,
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
  [625] = 2,
    ACTIONS(177), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(175), 12,
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
  [650] = 4,
    ACTIONS(183), 1,
      sym__indent,
    STATE(41), 1,
      sym_children,
    ACTIONS(181), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(179), 10,
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
  [679] = 4,
    ACTIONS(189), 1,
      sym__indent,
    STATE(46), 1,
      sym_children,
    ACTIONS(187), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(185), 10,
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
  [708] = 4,
    ACTIONS(195), 1,
      sym__un_delimited_javascript_line,
    STATE(23), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(191), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(193), 16,
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
  [737] = 7,
    ACTIONS(114), 1,
      anon_sym_PIPE,
    ACTIONS(116), 1,
      sym_tag_name,
    ACTIONS(198), 1,
      sym__dedent,
    ACTIONS(118), 2,
      sym_class,
      sym_id,
    STATE(10), 4,
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
  [772] = 6,
    ACTIONS(204), 1,
      anon_sym_when,
    ACTIONS(207), 1,
      anon_sym_default,
    STATE(6), 1,
      sym__when_keyword,
    STATE(25), 2,
      sym_when,
      aux_sym_case_repeat1,
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
  [883] = 3,
    ACTIONS(232), 1,
      sym__dedent,
    ACTIONS(230), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
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
  [908] = 2,
    ACTIONS(151), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(149), 10,
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
  [931] = 2,
    ACTIONS(236), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(234), 10,
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
  [954] = 2,
    ACTIONS(240), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(238), 10,
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
  [977] = 2,
    ACTIONS(173), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(171), 10,
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
  [1000] = 5,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
    ACTIONS(246), 1,
      sym__comment_content,
    ACTIONS(248), 1,
      sym__dedent,
    STATE(60), 1,
      aux_sym_comment_repeat1,
    ACTIONS(244), 14,
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
  [1029] = 2,
    ACTIONS(173), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(171), 10,
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
  [1052] = 2,
    ACTIONS(252), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(250), 10,
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
  [1075] = 4,
    ACTIONS(254), 1,
      sym__un_delimited_javascript_line,
    STATE(57), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(155), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(157), 14,
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
  [1102] = 5,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
    ACTIONS(246), 1,
      sym__comment_content,
    ACTIONS(248), 1,
      sym__dedent,
    STATE(61), 1,
      aux_sym_comment_repeat1,
    ACTIONS(244), 14,
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
  [1131] = 4,
    ACTIONS(256), 1,
      sym__indent,
    STATE(91), 1,
      sym_children,
    ACTIONS(145), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(143), 10,
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
  [1158] = 4,
    ACTIONS(258), 1,
      sym__indent,
    STATE(91), 1,
      sym_children,
    ACTIONS(145), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(143), 10,
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
  [1185] = 2,
    ACTIONS(145), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(143), 10,
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
  [1208] = 2,
    ACTIONS(145), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(143), 10,
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
  [1231] = 2,
    ACTIONS(262), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(260), 10,
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
  [1254] = 2,
    ACTIONS(181), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(179), 10,
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
  [1277] = 3,
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
  [1302] = 2,
    ACTIONS(181), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(179), 10,
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
  [1325] = 2,
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
  [1348] = 2,
    ACTIONS(187), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(185), 10,
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
  [1371] = 3,
    ACTIONS(272), 1,
      sym__dedent,
    ACTIONS(270), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
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
  [1396] = 2,
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
  [1419] = 2,
    ACTIONS(280), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(278), 10,
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
  [1442] = 4,
    ACTIONS(282), 1,
      sym__indent,
    STATE(100), 1,
      sym_children,
    ACTIONS(181), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(179), 10,
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
  [1469] = 4,
    ACTIONS(284), 1,
      sym__indent,
    STATE(90), 1,
      sym_children,
    ACTIONS(187), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(185), 10,
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
  [1496] = 2,
    ACTIONS(288), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(286), 10,
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
  [1519] = 4,
    ACTIONS(258), 1,
      sym__indent,
    STATE(101), 1,
      sym_children,
    ACTIONS(173), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(171), 10,
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
  [1546] = 5,
    ACTIONS(246), 1,
      sym__comment_content,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
    ACTIONS(294), 1,
      sym__dedent,
    STATE(38), 1,
      aux_sym_comment_repeat1,
    ACTIONS(292), 14,
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
  [1575] = 4,
    ACTIONS(296), 1,
      sym__un_delimited_javascript_line,
    STATE(57), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(191), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(193), 14,
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
  [1602] = 2,
    ACTIONS(151), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(149), 10,
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
  [1625] = 2,
    ACTIONS(112), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(110), 10,
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
  [1648] = 5,
    ACTIONS(246), 1,
      sym__comment_content,
    ACTIONS(299), 1,
      ts_builtin_sym_end,
    ACTIONS(303), 1,
      sym__dedent,
    STATE(61), 1,
      aux_sym_comment_repeat1,
    ACTIONS(301), 14,
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
  [1677] = 4,
    ACTIONS(309), 1,
      sym__comment_content,
    STATE(61), 1,
      aux_sym_comment_repeat1,
    ACTIONS(305), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(307), 14,
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
  [1704] = 2,
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
  [1727] = 4,
    ACTIONS(258), 1,
      sym__indent,
    STATE(96), 1,
      sym_children,
    ACTIONS(151), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(149), 10,
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
    ACTIONS(141), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(139), 10,
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
  [1800] = 2,
    ACTIONS(322), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(320), 10,
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
  [1823] = 4,
    ACTIONS(324), 1,
      sym__indent,
    STATE(105), 1,
      sym_children,
    ACTIONS(181), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(179), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1849] = 2,
    ACTIONS(305), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(307), 15,
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
  [1871] = 4,
    ACTIONS(326), 1,
      sym__indent,
    STATE(115), 1,
      sym_children,
    ACTIONS(145), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(143), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1897] = 2,
    ACTIONS(330), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(328), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1919] = 4,
    ACTIONS(332), 1,
      sym__indent,
    STATE(115), 1,
      sym_children,
    ACTIONS(145), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(143), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1945] = 5,
    ACTIONS(334), 1,
      sym_tag_name,
    ACTIONS(337), 2,
      sym_class,
      sym_id,
    STATE(72), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(163), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
    ACTIONS(161), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [1973] = 3,
    ACTIONS(340), 1,
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
  [1997] = 3,
    STATE(72), 2,
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
  [2021] = 4,
    ACTIONS(332), 1,
      sym__indent,
    STATE(106), 1,
      sym_children,
    ACTIONS(151), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(149), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2047] = 2,
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
  [2069] = 4,
    ACTIONS(346), 1,
      sym__indent,
    STATE(110), 1,
      sym_children,
    ACTIONS(187), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(185), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2095] = 4,
    ACTIONS(332), 1,
      sym__indent,
    STATE(122), 1,
      sym_children,
    ACTIONS(173), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(171), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2121] = 2,
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
  [2143] = 3,
    STATE(72), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
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
  [2167] = 3,
    ACTIONS(352), 1,
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
  [2190] = 2,
    ACTIONS(151), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(149), 10,
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
  [2211] = 3,
    ACTIONS(354), 1,
      sym__dedent,
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
  [2234] = 3,
    ACTIONS(360), 1,
      sym__indent,
    ACTIONS(358), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(356), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2257] = 3,
    ACTIONS(362), 1,
      sym__indent,
    ACTIONS(292), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(290), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2280] = 2,
    ACTIONS(145), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(143), 10,
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
  [2301] = 2,
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
  [2322] = 2,
    ACTIONS(252), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(250), 10,
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
  [2343] = 2,
    ACTIONS(181), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(179), 10,
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
  [2364] = 2,
    ACTIONS(181), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(179), 10,
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
  [2385] = 2,
    ACTIONS(173), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(171), 10,
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
  [2406] = 2,
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
  [2427] = 2,
    ACTIONS(187), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(185), 10,
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
  [2448] = 2,
    ACTIONS(173), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(171), 10,
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
  [2469] = 2,
    ACTIONS(276), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
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
  [2490] = 2,
    ACTIONS(322), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(320), 10,
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
  [2511] = 2,
    ACTIONS(280), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(278), 10,
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
  [2532] = 3,
    ACTIONS(364), 1,
      sym__dedent,
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
  [2555] = 2,
    ACTIONS(288), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(286), 10,
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
  [2576] = 2,
    ACTIONS(145), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(143), 10,
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
  [2597] = 2,
    ACTIONS(151), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(149), 10,
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
  [2618] = 2,
    ACTIONS(236), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(234), 10,
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
  [2639] = 2,
    ACTIONS(240), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(238), 10,
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
  [2660] = 2,
    ACTIONS(280), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(278), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2680] = 2,
    ACTIONS(145), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(143), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2700] = 2,
    ACTIONS(322), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(320), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2720] = 2,
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
  [2740] = 2,
    ACTIONS(301), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(299), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2760] = 2,
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
  [2780] = 2,
    ACTIONS(181), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(179), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2800] = 2,
    ACTIONS(145), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(143), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2820] = 2,
    ACTIONS(252), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(250), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2840] = 2,
    ACTIONS(288), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(286), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2860] = 2,
    ACTIONS(244), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(242), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2880] = 2,
    ACTIONS(173), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(171), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2900] = 2,
    ACTIONS(181), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(179), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2920] = 2,
    ACTIONS(187), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(185), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2940] = 2,
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
  [2960] = 2,
    ACTIONS(262), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(260), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2980] = 2,
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
  [3000] = 2,
    ACTIONS(151), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(149), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3020] = 2,
    ACTIONS(151), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(149), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3040] = 2,
    ACTIONS(236), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(234), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3060] = 2,
    ACTIONS(372), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(370), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3080] = 2,
    ACTIONS(240), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(238), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3100] = 2,
    ACTIONS(173), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(171), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3120] = 2,
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
  [3140] = 11,
    ACTIONS(374), 1,
      anon_sym_COLON,
    ACTIONS(376), 1,
      anon_sym_BANG_EQ,
    ACTIONS(378), 1,
      anon_sym_EQ,
    ACTIONS(380), 1,
      anon_sym_,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      sym__newline,
    STATE(153), 1,
      aux_sym_tag_repeat1,
    STATE(155), 1,
      sym_attributes,
    ACTIONS(386), 2,
      sym_class,
      sym_id,
    STATE(253), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3177] = 11,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(390), 1,
      anon_sym_COLON,
    ACTIONS(392), 1,
      anon_sym_BANG_EQ,
    ACTIONS(394), 1,
      anon_sym_EQ,
    ACTIONS(396), 1,
      anon_sym_,
    ACTIONS(398), 1,
      anon_sym_DOT,
    ACTIONS(400), 1,
      sym__newline,
    STATE(153), 1,
      aux_sym_tag_repeat1,
    STATE(154), 1,
      sym_attributes,
    ACTIONS(386), 2,
      sym_class,
      sym_id,
    STATE(116), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3214] = 11,
    ACTIONS(376), 1,
      anon_sym_BANG_EQ,
    ACTIONS(378), 1,
      anon_sym_EQ,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(402), 1,
      anon_sym_COLON,
    ACTIONS(404), 1,
      anon_sym_,
    ACTIONS(408), 1,
      sym__newline,
    STATE(128), 1,
      aux_sym_tag_repeat1,
    STATE(159), 1,
      sym_attributes,
    ACTIONS(406), 2,
      sym_class,
      sym_id,
    STATE(263), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3251] = 11,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_COLON,
    ACTIONS(412), 1,
      anon_sym_BANG_EQ,
    ACTIONS(414), 1,
      anon_sym_EQ,
    ACTIONS(416), 1,
      anon_sym_,
    ACTIONS(418), 1,
      anon_sym_DOT,
    ACTIONS(420), 1,
      sym__newline,
    STATE(153), 1,
      aux_sym_tag_repeat1,
    STATE(160), 1,
      sym_attributes,
    ACTIONS(386), 2,
      sym_class,
      sym_id,
    STATE(89), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3288] = 11,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_BANG_EQ,
    ACTIONS(414), 1,
      anon_sym_EQ,
    ACTIONS(418), 1,
      anon_sym_DOT,
    ACTIONS(422), 1,
      anon_sym_COLON,
    ACTIONS(424), 1,
      anon_sym_,
    ACTIONS(428), 1,
      sym__newline,
    STATE(131), 1,
      aux_sym_tag_repeat1,
    STATE(161), 1,
      sym_attributes,
    ACTIONS(426), 2,
      sym_class,
      sym_id,
    STATE(93), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3325] = 11,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      anon_sym_COLON,
    ACTIONS(432), 1,
      anon_sym_BANG_EQ,
    ACTIONS(434), 1,
      anon_sym_EQ,
    ACTIONS(436), 1,
      anon_sym_,
    ACTIONS(438), 1,
      anon_sym_DOT,
    ACTIONS(440), 1,
      sym__newline,
    STATE(153), 1,
      aux_sym_tag_repeat1,
    STATE(163), 1,
      sym_attributes,
    ACTIONS(386), 2,
      sym_class,
      sym_id,
    STATE(44), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3362] = 11,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(392), 1,
      anon_sym_BANG_EQ,
    ACTIONS(394), 1,
      anon_sym_EQ,
    ACTIONS(398), 1,
      anon_sym_DOT,
    ACTIONS(442), 1,
      anon_sym_COLON,
    ACTIONS(444), 1,
      anon_sym_,
    ACTIONS(448), 1,
      sym__newline,
    STATE(129), 1,
      aux_sym_tag_repeat1,
    STATE(162), 1,
      sym_attributes,
    ACTIONS(446), 2,
      sym_class,
      sym_id,
    STATE(117), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3399] = 11,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(432), 1,
      anon_sym_BANG_EQ,
    ACTIONS(434), 1,
      anon_sym_EQ,
    ACTIONS(438), 1,
      anon_sym_DOT,
    ACTIONS(450), 1,
      anon_sym_COLON,
    ACTIONS(452), 1,
      anon_sym_,
    ACTIONS(456), 1,
      sym__newline,
    STATE(133), 1,
      aux_sym_tag_repeat1,
    STATE(158), 1,
      sym_attributes,
    ACTIONS(454), 2,
      sym_class,
      sym_id,
    STATE(48), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3436] = 7,
    ACTIONS(114), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_BANG_EQ,
    ACTIONS(460), 1,
      anon_sym_EQ,
    ACTIONS(462), 1,
      anon_sym_DOT,
    STATE(86), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(118), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(24), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3464] = 7,
    ACTIONS(464), 1,
      anon_sym_PIPE,
    ACTIONS(466), 1,
      anon_sym_BANG_EQ,
    ACTIONS(468), 1,
      anon_sym_EQ,
    ACTIONS(470), 1,
      anon_sym_DOT,
    STATE(250), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(472), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(157), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3492] = 7,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(474), 1,
      anon_sym_BANG_EQ,
    ACTIONS(476), 1,
      anon_sym_EQ,
    ACTIONS(478), 1,
      anon_sym_DOT,
    STATE(33), 2,
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
  [3520] = 7,
    ACTIONS(17), 1,
      anon_sym_BANG_EQ,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(114), 1,
      anon_sym_PIPE,
    ACTIONS(480), 1,
      anon_sym_DOT,
    STATE(126), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(118), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(9), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3548] = 7,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(474), 1,
      anon_sym_BANG_EQ,
    ACTIONS(476), 1,
      anon_sym_EQ,
    ACTIONS(478), 1,
      anon_sym_DOT,
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
  [3576] = 7,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(474), 1,
      anon_sym_BANG_EQ,
    ACTIONS(476), 1,
      anon_sym_EQ,
    ACTIONS(478), 1,
      anon_sym_DOT,
    STATE(42), 2,
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
  [3604] = 7,
    ACTIONS(17), 1,
      anon_sym_BANG_EQ,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(114), 1,
      anon_sym_PIPE,
    ACTIONS(480), 1,
      anon_sym_DOT,
    STATE(121), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(118), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(9), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3632] = 7,
    ACTIONS(114), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_BANG_EQ,
    ACTIONS(460), 1,
      anon_sym_EQ,
    ACTIONS(462), 1,
      anon_sym_DOT,
    STATE(94), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(118), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(24), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3660] = 7,
    ACTIONS(114), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_BANG_EQ,
    ACTIONS(460), 1,
      anon_sym_EQ,
    ACTIONS(462), 1,
      anon_sym_DOT,
    STATE(82), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(118), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(24), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3688] = 7,
    ACTIONS(17), 1,
      anon_sym_BANG_EQ,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(114), 1,
      anon_sym_PIPE,
    ACTIONS(480), 1,
      anon_sym_DOT,
    STATE(111), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(118), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(9), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3716] = 7,
    ACTIONS(464), 1,
      anon_sym_PIPE,
    ACTIONS(466), 1,
      anon_sym_BANG_EQ,
    ACTIONS(468), 1,
      anon_sym_EQ,
    ACTIONS(470), 1,
      anon_sym_DOT,
    STATE(262), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(472), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(157), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3744] = 7,
    ACTIONS(464), 1,
      anon_sym_PIPE,
    ACTIONS(466), 1,
      anon_sym_BANG_EQ,
    ACTIONS(468), 1,
      anon_sym_EQ,
    ACTIONS(470), 1,
      anon_sym_DOT,
    STATE(266), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(472), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(157), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3772] = 6,
    ACTIONS(482), 1,
      anon_sym_EQ,
    ACTIONS(484), 1,
      anon_sym_,
    ACTIONS(486), 1,
      anon_sym_DOT,
    STATE(149), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(488), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(311), 6,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
  [3797] = 6,
    ACTIONS(482), 1,
      anon_sym_EQ,
    ACTIONS(486), 1,
      anon_sym_DOT,
    ACTIONS(490), 1,
      anon_sym_,
    STATE(223), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(492), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(290), 6,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
  [3822] = 8,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
    ACTIONS(496), 1,
      aux_sym__attribute_token1,
    STATE(148), 1,
      sym_attribute_name,
    STATE(151), 1,
      aux_sym_attributes_repeat1,
    STATE(279), 1,
      sym_angular_attribute_name,
    STATE(315), 1,
      sym_attribute,
    STATE(302), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(498), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [3850] = 8,
    ACTIONS(500), 1,
      anon_sym_RPAREN,
    ACTIONS(502), 1,
      aux_sym__attribute_token1,
    STATE(148), 1,
      sym_attribute_name,
    STATE(151), 1,
      aux_sym_attributes_repeat1,
    STATE(279), 1,
      sym_angular_attribute_name,
    STATE(323), 1,
      sym_attribute,
    STATE(302), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(505), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [3878] = 8,
    ACTIONS(496), 1,
      aux_sym__attribute_token1,
    ACTIONS(508), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      sym_attribute_name,
    STATE(150), 1,
      aux_sym_attributes_repeat1,
    STATE(279), 1,
      sym_angular_attribute_name,
    STATE(300), 1,
      sym_attribute,
    STATE(302), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(498), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [3906] = 4,
    STATE(153), 1,
      aux_sym_tag_repeat1,
    ACTIONS(512), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(514), 2,
      sym_class,
      sym_id,
    ACTIONS(510), 5,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LPAREN,
  [3925] = 7,
    ACTIONS(392), 1,
      anon_sym_BANG_EQ,
    ACTIONS(394), 1,
      anon_sym_EQ,
    ACTIONS(398), 1,
      anon_sym_DOT,
    ACTIONS(517), 1,
      anon_sym_COLON,
    ACTIONS(519), 1,
      anon_sym_,
    ACTIONS(521), 1,
      sym__newline,
    STATE(111), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3949] = 7,
    ACTIONS(376), 1,
      anon_sym_BANG_EQ,
    ACTIONS(378), 1,
      anon_sym_EQ,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(523), 1,
      anon_sym_COLON,
    ACTIONS(525), 1,
      anon_sym_,
    ACTIONS(527), 1,
      sym__newline,
    STATE(266), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3973] = 4,
    ACTIONS(81), 1,
      sym__dedent,
    ACTIONS(529), 1,
      anon_sym_PIPE,
    ACTIONS(532), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(156), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3991] = 4,
    ACTIONS(464), 1,
      anon_sym_PIPE,
    ACTIONS(535), 1,
      sym__dedent,
    ACTIONS(472), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(156), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4009] = 7,
    ACTIONS(430), 1,
      anon_sym_COLON,
    ACTIONS(432), 1,
      anon_sym_BANG_EQ,
    ACTIONS(434), 1,
      anon_sym_EQ,
    ACTIONS(436), 1,
      anon_sym_,
    ACTIONS(438), 1,
      anon_sym_DOT,
    ACTIONS(440), 1,
      sym__newline,
    STATE(44), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4033] = 7,
    ACTIONS(374), 1,
      anon_sym_COLON,
    ACTIONS(376), 1,
      anon_sym_BANG_EQ,
    ACTIONS(378), 1,
      anon_sym_EQ,
    ACTIONS(380), 1,
      anon_sym_,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(388), 1,
      sym__newline,
    STATE(253), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4057] = 7,
    ACTIONS(412), 1,
      anon_sym_BANG_EQ,
    ACTIONS(414), 1,
      anon_sym_EQ,
    ACTIONS(418), 1,
      anon_sym_DOT,
    ACTIONS(537), 1,
      anon_sym_COLON,
    ACTIONS(539), 1,
      anon_sym_,
    ACTIONS(541), 1,
      sym__newline,
    STATE(86), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4081] = 7,
    ACTIONS(410), 1,
      anon_sym_COLON,
    ACTIONS(412), 1,
      anon_sym_BANG_EQ,
    ACTIONS(414), 1,
      anon_sym_EQ,
    ACTIONS(416), 1,
      anon_sym_,
    ACTIONS(418), 1,
      anon_sym_DOT,
    ACTIONS(420), 1,
      sym__newline,
    STATE(89), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4105] = 7,
    ACTIONS(390), 1,
      anon_sym_COLON,
    ACTIONS(392), 1,
      anon_sym_BANG_EQ,
    ACTIONS(394), 1,
      anon_sym_EQ,
    ACTIONS(396), 1,
      anon_sym_,
    ACTIONS(398), 1,
      anon_sym_DOT,
    ACTIONS(400), 1,
      sym__newline,
    STATE(116), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4129] = 7,
    ACTIONS(432), 1,
      anon_sym_BANG_EQ,
    ACTIONS(434), 1,
      anon_sym_EQ,
    ACTIONS(438), 1,
      anon_sym_DOT,
    ACTIONS(543), 1,
      anon_sym_COLON,
    ACTIONS(545), 1,
      anon_sym_,
    ACTIONS(547), 1,
      sym__newline,
    STATE(42), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4153] = 8,
    ACTIONS(549), 1,
      aux_sym__ternary_attribute_value_token1,
    ACTIONS(551), 1,
      aux_sym__variable_attribute_value_token1,
    ACTIONS(553), 1,
      aux_sym__object_attribute_value_token1,
    ACTIONS(555), 1,
      aux_sym__template_attribute_value_token1,
    ACTIONS(557), 1,
      aux_sym__array_attribute_value_token1,
    ACTIONS(559), 1,
      anon_sym_SQUOTE,
    ACTIONS(561), 1,
      anon_sym_DQUOTE,
    STATE(291), 1,
      sym_quoted_attribute_value,
  [4178] = 7,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(569), 1,
      sym__dedent,
    STATE(173), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(208), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4201] = 7,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(571), 1,
      sym__dedent,
    STATE(173), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(208), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4224] = 3,
    ACTIONS(114), 1,
      anon_sym_PIPE,
    ACTIONS(118), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(24), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4239] = 7,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(573), 1,
      sym__dedent,
    STATE(173), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(208), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4262] = 3,
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
  [4277] = 7,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(575), 1,
      sym__dedent,
    STATE(173), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(208), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4300] = 7,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(577), 1,
      sym__dedent,
    STATE(173), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(208), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4323] = 7,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(579), 1,
      sym__dedent,
    STATE(173), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(208), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4346] = 7,
    ACTIONS(581), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(587), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(590), 1,
      sym__dedent,
    STATE(173), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(208), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4369] = 3,
    ACTIONS(114), 1,
      anon_sym_PIPE,
    ACTIONS(118), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(9), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4384] = 7,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(592), 1,
      sym__dedent,
    STATE(173), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(208), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4407] = 3,
    ACTIONS(464), 1,
      anon_sym_PIPE,
    ACTIONS(472), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(157), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4422] = 7,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(594), 1,
      sym__dedent,
    STATE(173), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(208), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4445] = 6,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(170), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(208), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4465] = 6,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(596), 1,
      sym__newline,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(192), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4485] = 6,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(166), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(208), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4505] = 6,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(598), 1,
      sym__newline,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(192), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4525] = 6,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(600), 1,
      sym__newline,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(192), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4545] = 6,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(602), 1,
      sym__newline,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(181), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4565] = 3,
    ACTIONS(604), 1,
      sym__indent,
    STATE(249), 1,
      sym_children,
    ACTIONS(171), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4579] = 6,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(606), 1,
      sym__newline,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(192), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4599] = 6,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(608), 1,
      sym__newline,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(192), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4619] = 6,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(610), 1,
      sym__newline,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(192), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4639] = 6,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(612), 1,
      sym__newline,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(179), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4659] = 6,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(168), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(208), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4679] = 6,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(614), 1,
      sym__newline,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(192), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4699] = 6,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(172), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(208), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4719] = 6,
    ACTIONS(616), 1,
      aux_sym_content_token1,
    ACTIONS(619), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(622), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(625), 1,
      sym__newline,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(192), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4739] = 3,
    ACTIONS(627), 1,
      sym__indent,
    STATE(264), 1,
      sym_children,
    ACTIONS(143), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4753] = 6,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(629), 1,
      sym__newline,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(192), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4773] = 6,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(631), 1,
      sym__newline,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(186), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4793] = 6,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(633), 1,
      sym__newline,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(192), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4813] = 6,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(171), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(208), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4833] = 6,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(635), 1,
      sym__newline,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(192), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4853] = 6,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(637), 1,
      sym__newline,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(192), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4873] = 3,
    ACTIONS(604), 1,
      sym__indent,
    STATE(264), 1,
      sym_children,
    ACTIONS(143), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4887] = 6,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(639), 1,
      sym__newline,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(192), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4907] = 3,
    ACTIONS(641), 1,
      sym__indent,
    STATE(255), 1,
      sym_children,
    ACTIONS(179), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4921] = 6,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(175), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(208), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4941] = 6,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(177), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(208), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4961] = 6,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(165), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(208), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4981] = 6,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(643), 1,
      sym__newline,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(192), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5001] = 6,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(645), 1,
      sym__newline,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(206), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5021] = 6,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(647), 1,
      sym__newline,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(192), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5041] = 6,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(649), 1,
      sym__newline,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(192), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5061] = 6,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(651), 1,
      sym__newline,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(192), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5081] = 3,
    ACTIONS(604), 1,
      sym__indent,
    STATE(239), 1,
      sym_children,
    ACTIONS(149), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5095] = 3,
    ACTIONS(653), 1,
      sym__indent,
    STATE(254), 1,
      sym_children,
    ACTIONS(185), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5109] = 6,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(655), 1,
      sym__newline,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(192), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5129] = 5,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(196), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5146] = 3,
    ACTIONS(657), 1,
      sym__dedent,
    STATE(234), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(472), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5159] = 5,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(198), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5176] = 2,
    ACTIONS(661), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(659), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [5187] = 2,
    ACTIONS(663), 1,
      sym__indent,
    ACTIONS(214), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5198] = 5,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(210), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5215] = 5,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(185), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5232] = 3,
    ACTIONS(665), 1,
      sym__dedent,
    STATE(234), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(472), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5245] = 5,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(182), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5262] = 4,
    ACTIONS(669), 1,
      anon_sym_,
    ACTIONS(671), 1,
      anon_sym_DOT,
    STATE(223), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(667), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5277] = 5,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(201), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5294] = 5,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(199), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5311] = 5,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(209), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5328] = 3,
    ACTIONS(674), 1,
      sym__dedent,
    STATE(234), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(472), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5341] = 2,
    ACTIONS(678), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(676), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [5352] = 4,
    ACTIONS(682), 1,
      anon_sym_POUND,
    ACTIONS(684), 1,
      anon_sym_LBRACE,
    ACTIONS(680), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(686), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [5367] = 5,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(213), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5384] = 2,
    ACTIONS(690), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(688), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [5395] = 5,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(187), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5412] = 5,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(190), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5429] = 3,
    ACTIONS(161), 1,
      sym__dedent,
    STATE(234), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(692), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5442] = 5,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(565), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(258), 1,
      aux_sym_content_repeat1,
    STATE(194), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5459] = 3,
    ACTIONS(695), 1,
      sym__dedent,
    STATE(234), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(472), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5472] = 2,
    STATE(236), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(472), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5482] = 1,
    ACTIONS(250), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5490] = 1,
    ACTIONS(320), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5498] = 1,
    ACTIONS(316), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5506] = 2,
    ACTIONS(699), 1,
      anon_sym_,
    ACTIONS(697), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5516] = 4,
    ACTIONS(701), 1,
      aux_sym_content_token1,
    ACTIONS(706), 1,
      sym__newline,
    STATE(242), 1,
      aux_sym_content_repeat1,
    ACTIONS(704), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [5530] = 2,
    STATE(221), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(472), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5540] = 2,
    STATE(227), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(472), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5550] = 2,
    STATE(215), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(472), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5560] = 3,
    ACTIONS(708), 1,
      anon_sym_LBRACE,
    ACTIONS(704), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(706), 2,
      sym__newline,
      aux_sym_content_token1,
  [5572] = 1,
    ACTIONS(500), 5,
      anon_sym_RPAREN,
      aux_sym__attribute_token1,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [5580] = 4,
    ACTIONS(710), 1,
      anon_sym_when,
    ACTIONS(712), 1,
      anon_sym_default,
    STATE(6), 1,
      sym__when_keyword,
    STATE(12), 2,
      sym_when,
      aux_sym_case_repeat1,
  [5594] = 1,
    ACTIONS(149), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5602] = 1,
    ACTIONS(149), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5610] = 1,
    ACTIONS(234), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5618] = 2,
    STATE(80), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(25), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5628] = 1,
    ACTIONS(179), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5636] = 1,
    ACTIONS(179), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5644] = 1,
    ACTIONS(143), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5652] = 2,
    STATE(74), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(25), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5662] = 1,
    ACTIONS(286), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5670] = 4,
    ACTIONS(563), 1,
      aux_sym_content_token1,
    ACTIONS(716), 1,
      sym__newline,
    STATE(242), 1,
      aux_sym_content_repeat1,
    ACTIONS(714), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [5684] = 1,
    ACTIONS(238), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5692] = 2,
    ACTIONS(720), 1,
      anon_sym_,
    ACTIONS(718), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5702] = 1,
    ACTIONS(264), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5710] = 1,
    ACTIONS(171), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5718] = 1,
    ACTIONS(185), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5726] = 1,
    ACTIONS(171), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5734] = 1,
    ACTIONS(274), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5742] = 1,
    ACTIONS(143), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5750] = 1,
    ACTIONS(278), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5758] = 2,
    STATE(266), 1,
      sym_tag,
    ACTIONS(472), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5767] = 2,
    ACTIONS(722), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(724), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [5776] = 2,
    ACTIONS(590), 2,
      sym__dedent,
      aux_sym_content_token1,
    ACTIONS(726), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [5785] = 2,
    ACTIONS(704), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(706), 2,
      sym__newline,
      aux_sym_content_token1,
  [5794] = 4,
    ACTIONS(728), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(730), 1,
      sym__newline,
    STATE(98), 1,
      sym__single_line_buf_code,
    STATE(352), 1,
      sym__un_delimited_javascript,
  [5807] = 2,
    STATE(33), 1,
      sym_tag,
    ACTIONS(77), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5816] = 2,
    STATE(42), 1,
      sym_tag,
    ACTIONS(77), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5825] = 2,
    STATE(126), 1,
      sym_tag,
    ACTIONS(25), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5834] = 2,
    STATE(44), 1,
      sym_tag,
    ACTIONS(77), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5843] = 2,
    ACTIONS(734), 1,
      anon_sym_,
    ACTIONS(732), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5852] = 2,
    ACTIONS(736), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(738), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [5861] = 3,
    ACTIONS(740), 1,
      anon_sym_EQ,
    ACTIONS(742), 1,
      anon_sym_,
    ACTIONS(744), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5872] = 2,
    STATE(89), 1,
      sym_tag,
    ACTIONS(118), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5881] = 2,
    STATE(111), 1,
      sym_tag,
    ACTIONS(25), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5890] = 4,
    ACTIONS(728), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(746), 1,
      sym__newline,
    STATE(49), 1,
      sym__single_line_buf_code,
    STATE(340), 1,
      sym__un_delimited_javascript,
  [5903] = 2,
    STATE(116), 1,
      sym_tag,
    ACTIONS(25), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5912] = 2,
    STATE(262), 1,
      sym_tag,
    ACTIONS(472), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5921] = 2,
    STATE(86), 1,
      sym_tag,
    ACTIONS(118), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5930] = 2,
    STATE(253), 1,
      sym_tag,
    ACTIONS(472), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5939] = 2,
    STATE(94), 1,
      sym_tag,
    ACTIONS(118), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5948] = 2,
    ACTIONS(748), 1,
      anon_sym_,
    ACTIONS(750), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5956] = 3,
    ACTIONS(752), 1,
      sym__un_delimited_javascript_line,
    STATE(37), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(83), 1,
      sym__multi_line_buf_code,
  [5966] = 2,
    ACTIONS(754), 1,
      anon_sym_,
    ACTIONS(756), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5974] = 2,
    ACTIONS(758), 1,
      anon_sym_,
    ACTIONS(760), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5982] = 2,
    ACTIONS(762), 1,
      anon_sym_,
    ACTIONS(764), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5990] = 3,
    ACTIONS(728), 1,
      sym__un_delimited_javascript_line,
    STATE(118), 1,
      sym__single_line_buf_code,
    STATE(346), 1,
      sym__un_delimited_javascript,
  [6000] = 1,
    ACTIONS(766), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [6006] = 3,
    ACTIONS(728), 1,
      sym__un_delimited_javascript_line,
    STATE(104), 1,
      sym__single_line_buf_code,
    STATE(346), 1,
      sym__un_delimited_javascript,
  [6016] = 3,
    ACTIONS(768), 1,
      sym__un_delimited_javascript_line,
    STATE(16), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(29), 1,
      sym__multi_line_buf_code,
  [6026] = 3,
    ACTIONS(728), 1,
      sym__un_delimited_javascript_line,
    STATE(267), 1,
      sym__single_line_buf_code,
    STATE(341), 1,
      sym__un_delimited_javascript,
  [6036] = 3,
    ACTIONS(728), 1,
      sym__un_delimited_javascript_line,
    STATE(265), 1,
      sym__single_line_buf_code,
    STATE(341), 1,
      sym__un_delimited_javascript,
  [6046] = 2,
    ACTIONS(770), 1,
      anon_sym_,
    ACTIONS(772), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6054] = 3,
    ACTIONS(774), 1,
      anon_sym_,
    ACTIONS(776), 1,
      anon_sym_COMMA,
    ACTIONS(778), 1,
      anon_sym_RPAREN,
  [6064] = 2,
    ACTIONS(780), 1,
      anon_sym_,
    ACTIONS(782), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6072] = 2,
    ACTIONS(784), 1,
      anon_sym_,
    ACTIONS(786), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6080] = 2,
    ACTIONS(788), 1,
      anon_sym_,
    ACTIONS(790), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6088] = 2,
    ACTIONS(792), 1,
      anon_sym_,
    ACTIONS(794), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6096] = 2,
    ACTIONS(796), 1,
      anon_sym_,
    ACTIONS(798), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6104] = 2,
    ACTIONS(800), 1,
      anon_sym_,
    ACTIONS(802), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6112] = 1,
    ACTIONS(804), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [6118] = 3,
    ACTIONS(728), 1,
      sym__un_delimited_javascript_line,
    STATE(95), 1,
      sym__single_line_buf_code,
    STATE(352), 1,
      sym__un_delimited_javascript,
  [6128] = 3,
    ACTIONS(806), 1,
      anon_sym_SQUOTE,
    ACTIONS(808), 1,
      anon_sym_DQUOTE,
    STATE(306), 1,
      sym_quoted_javascript,
  [6138] = 2,
    ACTIONS(810), 1,
      anon_sym_,
    ACTIONS(812), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6146] = 2,
    ACTIONS(490), 1,
      anon_sym_,
    ACTIONS(492), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6154] = 3,
    ACTIONS(728), 1,
      sym__un_delimited_javascript_line,
    STATE(51), 1,
      sym__single_line_buf_code,
    STATE(340), 1,
      sym__un_delimited_javascript,
  [6164] = 3,
    ACTIONS(728), 1,
      sym__un_delimited_javascript_line,
    STATE(50), 1,
      sym__single_line_buf_code,
    STATE(340), 1,
      sym__un_delimited_javascript,
  [6174] = 2,
    ACTIONS(814), 1,
      anon_sym_,
    ACTIONS(816), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6182] = 3,
    ACTIONS(774), 1,
      anon_sym_,
    ACTIONS(776), 1,
      anon_sym_COMMA,
    ACTIONS(818), 1,
      anon_sym_RPAREN,
  [6192] = 3,
    ACTIONS(728), 1,
      sym__un_delimited_javascript_line,
    STATE(97), 1,
      sym__single_line_buf_code,
    STATE(352), 1,
      sym__un_delimited_javascript,
  [6202] = 2,
    ACTIONS(820), 1,
      anon_sym_DQUOTE,
    ACTIONS(822), 1,
      aux_sym_quoted_javascript_token2,
  [6209] = 2,
    ACTIONS(820), 1,
      anon_sym_SQUOTE,
    ACTIONS(824), 1,
      aux_sym_quoted_javascript_token1,
  [6216] = 2,
    ACTIONS(826), 1,
      sym__comment_content,
    ACTIONS(828), 1,
      sym__newline,
  [6223] = 2,
    ACTIONS(830), 1,
      anon_sym_DQUOTE,
    ACTIONS(832), 1,
      aux_sym_quoted_javascript_token2,
  [6230] = 2,
    ACTIONS(830), 1,
      anon_sym_SQUOTE,
    ACTIONS(834), 1,
      aux_sym_quoted_javascript_token1,
  [6237] = 2,
    ACTIONS(836), 1,
      sym__un_delimited_javascript_line,
    STATE(256), 1,
      sym__un_delimited_javascript,
  [6244] = 2,
    ACTIONS(774), 1,
      anon_sym_,
    ACTIONS(776), 1,
      anon_sym_COMMA,
  [6251] = 1,
    ACTIONS(838), 1,
      anon_sym_SQUOTE,
  [6255] = 1,
    ACTIONS(840), 1,
      sym__indent,
  [6259] = 1,
    ACTIONS(842), 1,
      sym__indent,
  [6263] = 1,
    ACTIONS(844), 1,
      aux_sym_unbuffered_code_token1,
  [6267] = 1,
    ACTIONS(846), 1,
      sym__delimited_javascript,
  [6271] = 1,
    ACTIONS(848), 1,
      aux_sym__attribute_token1,
  [6275] = 1,
    ACTIONS(850), 1,
      sym__newline,
  [6279] = 1,
    ACTIONS(852), 1,
      sym__newline,
  [6283] = 1,
    ACTIONS(854), 1,
      sym__indent,
  [6287] = 1,
    ACTIONS(856), 1,
      aux_sym_unbuffered_code_token1,
  [6291] = 1,
    ACTIONS(858), 1,
      anon_sym_DQUOTE,
  [6295] = 1,
    ACTIONS(858), 1,
      anon_sym_SQUOTE,
  [6299] = 1,
    ACTIONS(860), 1,
      sym__indent,
  [6303] = 1,
    ACTIONS(862), 1,
      sym__delimited_javascript,
  [6307] = 1,
    ACTIONS(864), 1,
      sym__indent,
  [6311] = 1,
    ACTIONS(838), 1,
      anon_sym_DQUOTE,
  [6315] = 1,
    ACTIONS(866), 1,
      sym__newline,
  [6319] = 1,
    ACTIONS(868), 1,
      sym__newline,
  [6323] = 1,
    ACTIONS(870), 1,
      sym__newline,
  [6327] = 1,
    ACTIONS(872), 1,
      sym__un_delimited_javascript_line,
  [6331] = 1,
    ACTIONS(874), 1,
      sym__newline,
  [6335] = 1,
    ACTIONS(876), 1,
      ts_builtin_sym_end,
  [6339] = 1,
    ACTIONS(878), 1,
      sym__newline,
  [6343] = 1,
    ACTIONS(880), 1,
      aux_sym__when_keyword_token1,
  [6347] = 1,
    ACTIONS(766), 1,
      sym__newline,
  [6351] = 1,
    ACTIONS(882), 1,
      anon_sym_RBRACE,
  [6355] = 1,
    ACTIONS(882), 1,
      anon_sym_RBRACE_RBRACE,
  [6359] = 1,
    ACTIONS(884), 1,
      sym__newline,
  [6363] = 1,
    ACTIONS(886), 1,
      sym__newline,
  [6367] = 1,
    ACTIONS(888), 1,
      sym__indent,
  [6371] = 1,
    ACTIONS(890), 1,
      sym__indent,
  [6375] = 1,
    ACTIONS(892), 1,
      sym__indent,
  [6379] = 1,
    ACTIONS(894), 1,
      sym__indent,
  [6383] = 1,
    ACTIONS(896), 1,
      sym__indent,
  [6387] = 1,
    ACTIONS(898), 1,
      sym__indent,
  [6391] = 1,
    ACTIONS(900), 1,
      sym__newline,
  [6395] = 1,
    ACTIONS(902), 1,
      sym__newline,
  [6399] = 1,
    ACTIONS(904), 1,
      sym__newline,
  [6403] = 1,
    ACTIONS(906), 1,
      sym__newline,
  [6407] = 1,
    ACTIONS(908), 1,
      sym__newline,
  [6411] = 1,
    ACTIONS(910), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 54,
  [SMALL_STATE(4)] = 108,
  [SMALL_STATE(5)] = 145,
  [SMALL_STATE(6)] = 180,
  [SMALL_STATE(7)] = 214,
  [SMALL_STATE(8)] = 250,
  [SMALL_STATE(9)] = 286,
  [SMALL_STATE(10)] = 321,
  [SMALL_STATE(11)] = 354,
  [SMALL_STATE(12)] = 385,
  [SMALL_STATE(13)] = 418,
  [SMALL_STATE(14)] = 449,
  [SMALL_STATE(15)] = 478,
  [SMALL_STATE(16)] = 507,
  [SMALL_STATE(17)] = 536,
  [SMALL_STATE(18)] = 567,
  [SMALL_STATE(19)] = 596,
  [SMALL_STATE(20)] = 625,
  [SMALL_STATE(21)] = 650,
  [SMALL_STATE(22)] = 679,
  [SMALL_STATE(23)] = 708,
  [SMALL_STATE(24)] = 737,
  [SMALL_STATE(25)] = 772,
  [SMALL_STATE(26)] = 805,
  [SMALL_STATE(27)] = 829,
  [SMALL_STATE(28)] = 855,
  [SMALL_STATE(29)] = 883,
  [SMALL_STATE(30)] = 908,
  [SMALL_STATE(31)] = 931,
  [SMALL_STATE(32)] = 954,
  [SMALL_STATE(33)] = 977,
  [SMALL_STATE(34)] = 1000,
  [SMALL_STATE(35)] = 1029,
  [SMALL_STATE(36)] = 1052,
  [SMALL_STATE(37)] = 1075,
  [SMALL_STATE(38)] = 1102,
  [SMALL_STATE(39)] = 1131,
  [SMALL_STATE(40)] = 1158,
  [SMALL_STATE(41)] = 1185,
  [SMALL_STATE(42)] = 1208,
  [SMALL_STATE(43)] = 1231,
  [SMALL_STATE(44)] = 1254,
  [SMALL_STATE(45)] = 1277,
  [SMALL_STATE(46)] = 1302,
  [SMALL_STATE(47)] = 1325,
  [SMALL_STATE(48)] = 1348,
  [SMALL_STATE(49)] = 1371,
  [SMALL_STATE(50)] = 1396,
  [SMALL_STATE(51)] = 1419,
  [SMALL_STATE(52)] = 1442,
  [SMALL_STATE(53)] = 1469,
  [SMALL_STATE(54)] = 1496,
  [SMALL_STATE(55)] = 1519,
  [SMALL_STATE(56)] = 1546,
  [SMALL_STATE(57)] = 1575,
  [SMALL_STATE(58)] = 1602,
  [SMALL_STATE(59)] = 1625,
  [SMALL_STATE(60)] = 1648,
  [SMALL_STATE(61)] = 1677,
  [SMALL_STATE(62)] = 1704,
  [SMALL_STATE(63)] = 1727,
  [SMALL_STATE(64)] = 1754,
  [SMALL_STATE(65)] = 1777,
  [SMALL_STATE(66)] = 1800,
  [SMALL_STATE(67)] = 1823,
  [SMALL_STATE(68)] = 1849,
  [SMALL_STATE(69)] = 1871,
  [SMALL_STATE(70)] = 1897,
  [SMALL_STATE(71)] = 1919,
  [SMALL_STATE(72)] = 1945,
  [SMALL_STATE(73)] = 1973,
  [SMALL_STATE(74)] = 1997,
  [SMALL_STATE(75)] = 2021,
  [SMALL_STATE(76)] = 2047,
  [SMALL_STATE(77)] = 2069,
  [SMALL_STATE(78)] = 2095,
  [SMALL_STATE(79)] = 2121,
  [SMALL_STATE(80)] = 2143,
  [SMALL_STATE(81)] = 2167,
  [SMALL_STATE(82)] = 2190,
  [SMALL_STATE(83)] = 2211,
  [SMALL_STATE(84)] = 2234,
  [SMALL_STATE(85)] = 2257,
  [SMALL_STATE(86)] = 2280,
  [SMALL_STATE(87)] = 2301,
  [SMALL_STATE(88)] = 2322,
  [SMALL_STATE(89)] = 2343,
  [SMALL_STATE(90)] = 2364,
  [SMALL_STATE(91)] = 2385,
  [SMALL_STATE(92)] = 2406,
  [SMALL_STATE(93)] = 2427,
  [SMALL_STATE(94)] = 2448,
  [SMALL_STATE(95)] = 2469,
  [SMALL_STATE(96)] = 2490,
  [SMALL_STATE(97)] = 2511,
  [SMALL_STATE(98)] = 2532,
  [SMALL_STATE(99)] = 2555,
  [SMALL_STATE(100)] = 2576,
  [SMALL_STATE(101)] = 2597,
  [SMALL_STATE(102)] = 2618,
  [SMALL_STATE(103)] = 2639,
  [SMALL_STATE(104)] = 2660,
  [SMALL_STATE(105)] = 2680,
  [SMALL_STATE(106)] = 2700,
  [SMALL_STATE(107)] = 2720,
  [SMALL_STATE(108)] = 2740,
  [SMALL_STATE(109)] = 2760,
  [SMALL_STATE(110)] = 2780,
  [SMALL_STATE(111)] = 2800,
  [SMALL_STATE(112)] = 2820,
  [SMALL_STATE(113)] = 2840,
  [SMALL_STATE(114)] = 2860,
  [SMALL_STATE(115)] = 2880,
  [SMALL_STATE(116)] = 2900,
  [SMALL_STATE(117)] = 2920,
  [SMALL_STATE(118)] = 2940,
  [SMALL_STATE(119)] = 2960,
  [SMALL_STATE(120)] = 2980,
  [SMALL_STATE(121)] = 3000,
  [SMALL_STATE(122)] = 3020,
  [SMALL_STATE(123)] = 3040,
  [SMALL_STATE(124)] = 3060,
  [SMALL_STATE(125)] = 3080,
  [SMALL_STATE(126)] = 3100,
  [SMALL_STATE(127)] = 3120,
  [SMALL_STATE(128)] = 3140,
  [SMALL_STATE(129)] = 3177,
  [SMALL_STATE(130)] = 3214,
  [SMALL_STATE(131)] = 3251,
  [SMALL_STATE(132)] = 3288,
  [SMALL_STATE(133)] = 3325,
  [SMALL_STATE(134)] = 3362,
  [SMALL_STATE(135)] = 3399,
  [SMALL_STATE(136)] = 3436,
  [SMALL_STATE(137)] = 3464,
  [SMALL_STATE(138)] = 3492,
  [SMALL_STATE(139)] = 3520,
  [SMALL_STATE(140)] = 3548,
  [SMALL_STATE(141)] = 3576,
  [SMALL_STATE(142)] = 3604,
  [SMALL_STATE(143)] = 3632,
  [SMALL_STATE(144)] = 3660,
  [SMALL_STATE(145)] = 3688,
  [SMALL_STATE(146)] = 3716,
  [SMALL_STATE(147)] = 3744,
  [SMALL_STATE(148)] = 3772,
  [SMALL_STATE(149)] = 3797,
  [SMALL_STATE(150)] = 3822,
  [SMALL_STATE(151)] = 3850,
  [SMALL_STATE(152)] = 3878,
  [SMALL_STATE(153)] = 3906,
  [SMALL_STATE(154)] = 3925,
  [SMALL_STATE(155)] = 3949,
  [SMALL_STATE(156)] = 3973,
  [SMALL_STATE(157)] = 3991,
  [SMALL_STATE(158)] = 4009,
  [SMALL_STATE(159)] = 4033,
  [SMALL_STATE(160)] = 4057,
  [SMALL_STATE(161)] = 4081,
  [SMALL_STATE(162)] = 4105,
  [SMALL_STATE(163)] = 4129,
  [SMALL_STATE(164)] = 4153,
  [SMALL_STATE(165)] = 4178,
  [SMALL_STATE(166)] = 4201,
  [SMALL_STATE(167)] = 4224,
  [SMALL_STATE(168)] = 4239,
  [SMALL_STATE(169)] = 4262,
  [SMALL_STATE(170)] = 4277,
  [SMALL_STATE(171)] = 4300,
  [SMALL_STATE(172)] = 4323,
  [SMALL_STATE(173)] = 4346,
  [SMALL_STATE(174)] = 4369,
  [SMALL_STATE(175)] = 4384,
  [SMALL_STATE(176)] = 4407,
  [SMALL_STATE(177)] = 4422,
  [SMALL_STATE(178)] = 4445,
  [SMALL_STATE(179)] = 4465,
  [SMALL_STATE(180)] = 4485,
  [SMALL_STATE(181)] = 4505,
  [SMALL_STATE(182)] = 4525,
  [SMALL_STATE(183)] = 4545,
  [SMALL_STATE(184)] = 4565,
  [SMALL_STATE(185)] = 4579,
  [SMALL_STATE(186)] = 4599,
  [SMALL_STATE(187)] = 4619,
  [SMALL_STATE(188)] = 4639,
  [SMALL_STATE(189)] = 4659,
  [SMALL_STATE(190)] = 4679,
  [SMALL_STATE(191)] = 4699,
  [SMALL_STATE(192)] = 4719,
  [SMALL_STATE(193)] = 4739,
  [SMALL_STATE(194)] = 4753,
  [SMALL_STATE(195)] = 4773,
  [SMALL_STATE(196)] = 4793,
  [SMALL_STATE(197)] = 4813,
  [SMALL_STATE(198)] = 4833,
  [SMALL_STATE(199)] = 4853,
  [SMALL_STATE(200)] = 4873,
  [SMALL_STATE(201)] = 4887,
  [SMALL_STATE(202)] = 4907,
  [SMALL_STATE(203)] = 4921,
  [SMALL_STATE(204)] = 4941,
  [SMALL_STATE(205)] = 4961,
  [SMALL_STATE(206)] = 4981,
  [SMALL_STATE(207)] = 5001,
  [SMALL_STATE(208)] = 5021,
  [SMALL_STATE(209)] = 5041,
  [SMALL_STATE(210)] = 5061,
  [SMALL_STATE(211)] = 5081,
  [SMALL_STATE(212)] = 5095,
  [SMALL_STATE(213)] = 5109,
  [SMALL_STATE(214)] = 5129,
  [SMALL_STATE(215)] = 5146,
  [SMALL_STATE(216)] = 5159,
  [SMALL_STATE(217)] = 5176,
  [SMALL_STATE(218)] = 5187,
  [SMALL_STATE(219)] = 5198,
  [SMALL_STATE(220)] = 5215,
  [SMALL_STATE(221)] = 5232,
  [SMALL_STATE(222)] = 5245,
  [SMALL_STATE(223)] = 5262,
  [SMALL_STATE(224)] = 5277,
  [SMALL_STATE(225)] = 5294,
  [SMALL_STATE(226)] = 5311,
  [SMALL_STATE(227)] = 5328,
  [SMALL_STATE(228)] = 5341,
  [SMALL_STATE(229)] = 5352,
  [SMALL_STATE(230)] = 5367,
  [SMALL_STATE(231)] = 5384,
  [SMALL_STATE(232)] = 5395,
  [SMALL_STATE(233)] = 5412,
  [SMALL_STATE(234)] = 5429,
  [SMALL_STATE(235)] = 5442,
  [SMALL_STATE(236)] = 5459,
  [SMALL_STATE(237)] = 5472,
  [SMALL_STATE(238)] = 5482,
  [SMALL_STATE(239)] = 5490,
  [SMALL_STATE(240)] = 5498,
  [SMALL_STATE(241)] = 5506,
  [SMALL_STATE(242)] = 5516,
  [SMALL_STATE(243)] = 5530,
  [SMALL_STATE(244)] = 5540,
  [SMALL_STATE(245)] = 5550,
  [SMALL_STATE(246)] = 5560,
  [SMALL_STATE(247)] = 5572,
  [SMALL_STATE(248)] = 5580,
  [SMALL_STATE(249)] = 5594,
  [SMALL_STATE(250)] = 5602,
  [SMALL_STATE(251)] = 5610,
  [SMALL_STATE(252)] = 5618,
  [SMALL_STATE(253)] = 5628,
  [SMALL_STATE(254)] = 5636,
  [SMALL_STATE(255)] = 5644,
  [SMALL_STATE(256)] = 5652,
  [SMALL_STATE(257)] = 5662,
  [SMALL_STATE(258)] = 5670,
  [SMALL_STATE(259)] = 5684,
  [SMALL_STATE(260)] = 5692,
  [SMALL_STATE(261)] = 5702,
  [SMALL_STATE(262)] = 5710,
  [SMALL_STATE(263)] = 5718,
  [SMALL_STATE(264)] = 5726,
  [SMALL_STATE(265)] = 5734,
  [SMALL_STATE(266)] = 5742,
  [SMALL_STATE(267)] = 5750,
  [SMALL_STATE(268)] = 5758,
  [SMALL_STATE(269)] = 5767,
  [SMALL_STATE(270)] = 5776,
  [SMALL_STATE(271)] = 5785,
  [SMALL_STATE(272)] = 5794,
  [SMALL_STATE(273)] = 5807,
  [SMALL_STATE(274)] = 5816,
  [SMALL_STATE(275)] = 5825,
  [SMALL_STATE(276)] = 5834,
  [SMALL_STATE(277)] = 5843,
  [SMALL_STATE(278)] = 5852,
  [SMALL_STATE(279)] = 5861,
  [SMALL_STATE(280)] = 5872,
  [SMALL_STATE(281)] = 5881,
  [SMALL_STATE(282)] = 5890,
  [SMALL_STATE(283)] = 5903,
  [SMALL_STATE(284)] = 5912,
  [SMALL_STATE(285)] = 5921,
  [SMALL_STATE(286)] = 5930,
  [SMALL_STATE(287)] = 5939,
  [SMALL_STATE(288)] = 5948,
  [SMALL_STATE(289)] = 5956,
  [SMALL_STATE(290)] = 5966,
  [SMALL_STATE(291)] = 5974,
  [SMALL_STATE(292)] = 5982,
  [SMALL_STATE(293)] = 5990,
  [SMALL_STATE(294)] = 6000,
  [SMALL_STATE(295)] = 6006,
  [SMALL_STATE(296)] = 6016,
  [SMALL_STATE(297)] = 6026,
  [SMALL_STATE(298)] = 6036,
  [SMALL_STATE(299)] = 6046,
  [SMALL_STATE(300)] = 6054,
  [SMALL_STATE(301)] = 6064,
  [SMALL_STATE(302)] = 6072,
  [SMALL_STATE(303)] = 6080,
  [SMALL_STATE(304)] = 6088,
  [SMALL_STATE(305)] = 6096,
  [SMALL_STATE(306)] = 6104,
  [SMALL_STATE(307)] = 6112,
  [SMALL_STATE(308)] = 6118,
  [SMALL_STATE(309)] = 6128,
  [SMALL_STATE(310)] = 6138,
  [SMALL_STATE(311)] = 6146,
  [SMALL_STATE(312)] = 6154,
  [SMALL_STATE(313)] = 6164,
  [SMALL_STATE(314)] = 6174,
  [SMALL_STATE(315)] = 6182,
  [SMALL_STATE(316)] = 6192,
  [SMALL_STATE(317)] = 6202,
  [SMALL_STATE(318)] = 6209,
  [SMALL_STATE(319)] = 6216,
  [SMALL_STATE(320)] = 6223,
  [SMALL_STATE(321)] = 6230,
  [SMALL_STATE(322)] = 6237,
  [SMALL_STATE(323)] = 6244,
  [SMALL_STATE(324)] = 6251,
  [SMALL_STATE(325)] = 6255,
  [SMALL_STATE(326)] = 6259,
  [SMALL_STATE(327)] = 6263,
  [SMALL_STATE(328)] = 6267,
  [SMALL_STATE(329)] = 6271,
  [SMALL_STATE(330)] = 6275,
  [SMALL_STATE(331)] = 6279,
  [SMALL_STATE(332)] = 6283,
  [SMALL_STATE(333)] = 6287,
  [SMALL_STATE(334)] = 6291,
  [SMALL_STATE(335)] = 6295,
  [SMALL_STATE(336)] = 6299,
  [SMALL_STATE(337)] = 6303,
  [SMALL_STATE(338)] = 6307,
  [SMALL_STATE(339)] = 6311,
  [SMALL_STATE(340)] = 6315,
  [SMALL_STATE(341)] = 6319,
  [SMALL_STATE(342)] = 6323,
  [SMALL_STATE(343)] = 6327,
  [SMALL_STATE(344)] = 6331,
  [SMALL_STATE(345)] = 6335,
  [SMALL_STATE(346)] = 6339,
  [SMALL_STATE(347)] = 6343,
  [SMALL_STATE(348)] = 6347,
  [SMALL_STATE(349)] = 6351,
  [SMALL_STATE(350)] = 6355,
  [SMALL_STATE(351)] = 6359,
  [SMALL_STATE(352)] = 6363,
  [SMALL_STATE(353)] = 6367,
  [SMALL_STATE(354)] = 6371,
  [SMALL_STATE(355)] = 6375,
  [SMALL_STATE(356)] = 6379,
  [SMALL_STATE(357)] = 6383,
  [SMALL_STATE(358)] = 6387,
  [SMALL_STATE(359)] = 6391,
  [SMALL_STATE(360)] = 6395,
  [SMALL_STATE(361)] = 6399,
  [SMALL_STATE(362)] = 6403,
  [SMALL_STATE(363)] = 6407,
  [SMALL_STATE(364)] = 6411,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(307),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(195),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(322),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(322),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(252),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(343),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(295),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(293),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(319),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(134),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(134),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(327),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(183),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(135),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(135),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(188),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(132),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(132),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 5, .production_id = 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 5, .production_id = 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(135),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(135),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_keyword, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_keyword, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(26),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(347),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(6),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 5),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 5),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 5, .production_id = 4),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 5, .production_id = 4),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 5),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 5),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 4),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 4),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 3),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 3),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffered_code, 2),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffered_code, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unescaped_buffered_code, 2),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unescaped_buffered_code, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 2),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(79),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 5),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 5),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(330),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 6),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 6),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 7, .production_id = 6),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 7, .production_id = 6),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 7),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 3),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 3),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(134),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(134),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 2),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 2),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 6),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 6),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 1),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 2),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(260),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(277),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [514] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(153),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(207),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(130),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(229),
  [584] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(328),
  [587] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(337),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(229),
  [619] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(328),
  [622] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(337),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [671] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2), SHIFT_REPEAT(329),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 1),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 1),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [692] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(130),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 2),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 2),
  [701] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(229),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_name, 1),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 3),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 3),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_angular_attribute_name, 1),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_angular_attribute_name, 1),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 3),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 3),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 1),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 1),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_attribute_value, 2),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__template_attribute_value, 2),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 3),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 3),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_attribute_value, 2),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_attribute_value, 2),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_attribute_value, 2),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__array_attribute_value, 2),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__un_delimited_javascript, 1),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 2),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 2),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_attribute_value, 2),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__object_attribute_value, 2),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_attribute_value, 2),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable_attribute_value, 2),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ternary_attribute_value, 2),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ternary_attribute_value, 2),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 3),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 3),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 3),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 3),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 5),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 5),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [876] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
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
