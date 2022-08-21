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
#define STATE_COUNT 345
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 100
#define ALIAS_COUNT 2
#define TOKEN_COUNT 54
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
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '#') ADVANCE(608);
      if (lookahead == '{') ADVANCE(609);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(606);
      if (lookahead != 0) ADVANCE(607);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '"') ADVANCE(209);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(479);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(63);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(210);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(480);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(65);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '`') ADVANCE(211);
      if (lookahead == '}') ADVANCE(481);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(92);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(212);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(482);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(132);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(213);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(483);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(133);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(214);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(484);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(134);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(215);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(485);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(136);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"') ADVANCE(209);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(479);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(63);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(210);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(480);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(65);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '`') ADVANCE(211);
      if (lookahead == '}') ADVANCE(481);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(92);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(212);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(482);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(132);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(213);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(483);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(133);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(214);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(484);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(134);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(215);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(485);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(136);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"') ADVANCE(216);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\'') ADVANCE(217);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == '`') ADVANCE(218);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(219);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(220);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(221);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(222);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == ')') ADVANCE(441);
      if (lookahead == '`') ADVANCE(489);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(224);
      if (lookahead == ')') ADVANCE(442);
      if (lookahead == '`') ADVANCE(490);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(225);
      if (lookahead == ')') ADVANCE(443);
      if (lookahead == '`') ADVANCE(491);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"') ADVANCE(226);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(227);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(229);
      if (lookahead == ')') ADVANCE(475);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(230);
      if (lookahead == ')') ADVANCE(476);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(231);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(232);
      if (lookahead == ')') ADVANCE(478);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(63);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == '\'') ADVANCE(235);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(65);
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == '`') ADVANCE(237);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(92);
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(239);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(132);
      if (lookahead != 0) ADVANCE(239);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(241);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(133);
      if (lookahead != 0) ADVANCE(241);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(243);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(134);
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(245);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0) ADVANCE(245);
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
      if (lookahead == '.') ADVANCE(137);
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
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(479);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(63);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(210);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(480);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(65);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '`') ADVANCE(211);
      if (lookahead == '}') ADVANCE(481);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(92);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(212);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(482);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(132);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(213);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(483);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(133);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(214);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(484);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(134);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(215);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(485);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(136);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"') ADVANCE(216);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\'') ADVANCE(217);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == '`') ADVANCE(218);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(219);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(220);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(221);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(222);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == ')') ADVANCE(441);
      if (lookahead == '`') ADVANCE(489);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(224);
      if (lookahead == ')') ADVANCE(442);
      if (lookahead == '`') ADVANCE(490);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(225);
      if (lookahead == ')') ADVANCE(443);
      if (lookahead == '`') ADVANCE(491);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"') ADVANCE(226);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(227);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(229);
      if (lookahead == ')') ADVANCE(475);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(230);
      if (lookahead == ')') ADVANCE(476);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(231);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(232);
      if (lookahead == ')') ADVANCE(478);
      if (lookahead != 0) ADVANCE(42);
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
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '"') ADVANCE(313);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead != 0) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(411);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(314);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead != 0) ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(411);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead == '`') ADVANCE(315);
      if (lookahead != 0) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(411);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(316);
      if (lookahead == ')') ADVANCE(475);
      if (lookahead != 0) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(411);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(317);
      if (lookahead == ')') ADVANCE(476);
      if (lookahead != 0) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(411);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(318);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead != 0) ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(411);
      if (lookahead == ' ') ADVANCE(42);
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
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '"') ADVANCE(330);
      if (lookahead == ')') ADVANCE(441);
      if (lookahead == '`') ADVANCE(313);
      if (lookahead != 0) ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(409);
      if (lookahead == ' ') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(331);
      if (lookahead == ')') ADVANCE(442);
      if (lookahead == '`') ADVANCE(314);
      if (lookahead != 0) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(409);
      if (lookahead == ' ') ADVANCE(35);
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
      if (lookahead == ' ') ADVANCE(19);
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
      if (lookahead == ' ') ADVANCE(20);
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
      if (lookahead == ' ') ADVANCE(21);
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
      if (lookahead == ' ') ADVANCE(22);
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
      if (lookahead == ' ') ADVANCE(23);
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
      if (lookahead == ' ') ADVANCE(24);
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
      if (lookahead == ' ') ADVANCE(25);
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
      if (lookahead == ' ') ADVANCE(19);
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
      if (lookahead == ' ') ADVANCE(20);
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
      if (lookahead == ' ') ADVANCE(21);
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
      if (lookahead == ' ') ADVANCE(22);
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
      if (lookahead == ' ') ADVANCE(23);
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
      if (lookahead == ' ') ADVANCE(24);
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
      if (lookahead == ' ') ADVANCE(25);
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
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '"') ADVANCE(364);
      if (lookahead == '(') ADVANCE(313);
      if (lookahead == ')') ADVANCE(464);
      if (lookahead != 0) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(410);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(365);
      if (lookahead == '(') ADVANCE(314);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead != 0) ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(410);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == '(') ADVANCE(315);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead == '`') ADVANCE(366);
      if (lookahead != 0) ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(410);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(367);
      if (lookahead == '(') ADVANCE(316);
      if (lookahead == ')') ADVANCE(475);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(410);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(368);
      if (lookahead == '(') ADVANCE(317);
      if (lookahead == ')') ADVANCE(476);
      if (lookahead != 0) ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(410);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(369);
      if (lookahead == '(') ADVANCE(318);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead != 0) ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(410);
      if (lookahead == ' ') ADVANCE(42);
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
      if (lookahead == ')') ADVANCE(26);
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
      if (lookahead == ')') ADVANCE(27);
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
      if (lookahead == ')') ADVANCE(28);
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
      if (lookahead == ')') ADVANCE(29);
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
      if (lookahead == ')') ADVANCE(30);
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
      if (lookahead == ')') ADVANCE(31);
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
      if (lookahead == ')') ADVANCE(32);
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
      if (lookahead == ')') ADVANCE(26);
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
      if (lookahead == ')') ADVANCE(27);
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
      if (lookahead == ')') ADVANCE(28);
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
      if (lookahead == ')') ADVANCE(29);
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
      if (lookahead == ')') ADVANCE(30);
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
      if (lookahead == ')') ADVANCE(31);
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
      if (lookahead == ')') ADVANCE(32);
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
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\'') ADVANCE(217);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == '`') ADVANCE(218);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(219);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(220);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(221);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(222);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead != 0) ADVANCE(32);
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
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(479);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(63);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(210);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(480);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(65);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '`') ADVANCE(211);
      if (lookahead == '}') ADVANCE(481);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(92);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(212);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(482);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(132);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(213);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(483);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(133);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(214);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(484);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(134);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(215);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(485);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(136);
      if (lookahead != 0) ADVANCE(25);
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
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(227);
      if (lookahead == ')') ADVANCE(465);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(229);
      if (lookahead == ')') ADVANCE(475);
      if (lookahead != 0) ADVANCE(39);
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
  [6] = {.lex_state = 146, .external_lex_state = 2},
  [7] = {.lex_state = 146, .external_lex_state = 2},
  [8] = {.lex_state = 146, .external_lex_state = 3},
  [9] = {.lex_state = 146, .external_lex_state = 4},
  [10] = {.lex_state = 146},
  [11] = {.lex_state = 146},
  [12] = {.lex_state = 146, .external_lex_state = 2},
  [13] = {.lex_state = 146, .external_lex_state = 4},
  [14] = {.lex_state = 146, .external_lex_state = 2},
  [15] = {.lex_state = 146, .external_lex_state = 4},
  [16] = {.lex_state = 146, .external_lex_state = 4},
  [17] = {.lex_state = 146, .external_lex_state = 4},
  [18] = {.lex_state = 146, .external_lex_state = 2},
  [19] = {.lex_state = 147, .external_lex_state = 2},
  [20] = {.lex_state = 143, .external_lex_state = 2},
  [21] = {.lex_state = 146, .external_lex_state = 4},
  [22] = {.lex_state = 147, .external_lex_state = 2},
  [23] = {.lex_state = 146, .external_lex_state = 3},
  [24] = {.lex_state = 147, .external_lex_state = 2},
  [25] = {.lex_state = 143, .external_lex_state = 2},
  [26] = {.lex_state = 146, .external_lex_state = 4},
  [27] = {.lex_state = 143, .external_lex_state = 2},
  [28] = {.lex_state = 146, .external_lex_state = 4},
  [29] = {.lex_state = 144, .external_lex_state = 2},
  [30] = {.lex_state = 146, .external_lex_state = 2},
  [31] = {.lex_state = 146, .external_lex_state = 2},
  [32] = {.lex_state = 145, .external_lex_state = 2},
  [33] = {.lex_state = 145, .external_lex_state = 2},
  [34] = {.lex_state = 147, .external_lex_state = 4},
  [35] = {.lex_state = 147, .external_lex_state = 4},
  [36] = {.lex_state = 147, .external_lex_state = 4},
  [37] = {.lex_state = 146, .external_lex_state = 2},
  [38] = {.lex_state = 147, .external_lex_state = 4},
  [39] = {.lex_state = 146, .external_lex_state = 2},
  [40] = {.lex_state = 146, .external_lex_state = 2},
  [41] = {.lex_state = 146, .external_lex_state = 2},
  [42] = {.lex_state = 146, .external_lex_state = 2},
  [43] = {.lex_state = 146, .external_lex_state = 2},
  [44] = {.lex_state = 146, .external_lex_state = 2},
  [45] = {.lex_state = 146, .external_lex_state = 2},
  [46] = {.lex_state = 144, .external_lex_state = 2},
  [47] = {.lex_state = 146, .external_lex_state = 2},
  [48] = {.lex_state = 146, .external_lex_state = 2},
  [49] = {.lex_state = 146, .external_lex_state = 2},
  [50] = {.lex_state = 145, .external_lex_state = 2},
  [51] = {.lex_state = 145, .external_lex_state = 2},
  [52] = {.lex_state = 146, .external_lex_state = 2},
  [53] = {.lex_state = 146, .external_lex_state = 2},
  [54] = {.lex_state = 146, .external_lex_state = 2},
  [55] = {.lex_state = 147, .external_lex_state = 4},
  [56] = {.lex_state = 146, .external_lex_state = 2},
  [57] = {.lex_state = 147, .external_lex_state = 4},
  [58] = {.lex_state = 146, .external_lex_state = 2},
  [59] = {.lex_state = 146, .external_lex_state = 2},
  [60] = {.lex_state = 145, .external_lex_state = 2},
  [61] = {.lex_state = 146, .external_lex_state = 2},
  [62] = {.lex_state = 146, .external_lex_state = 2},
  [63] = {.lex_state = 146, .external_lex_state = 2},
  [64] = {.lex_state = 146, .external_lex_state = 2},
  [65] = {.lex_state = 146, .external_lex_state = 2},
  [66] = {.lex_state = 147, .external_lex_state = 5},
  [67] = {.lex_state = 147},
  [68] = {.lex_state = 147, .external_lex_state = 5},
  [69] = {.lex_state = 146},
  [70] = {.lex_state = 146},
  [71] = {.lex_state = 147, .external_lex_state = 5},
  [72] = {.lex_state = 147, .external_lex_state = 4},
  [73] = {.lex_state = 145, .external_lex_state = 2},
  [74] = {.lex_state = 147},
  [75] = {.lex_state = 147},
  [76] = {.lex_state = 147, .external_lex_state = 5},
  [77] = {.lex_state = 144, .external_lex_state = 2},
  [78] = {.lex_state = 147, .external_lex_state = 5},
  [79] = {.lex_state = 147, .external_lex_state = 5},
  [80] = {.lex_state = 147, .external_lex_state = 2},
  [81] = {.lex_state = 147, .external_lex_state = 2},
  [82] = {.lex_state = 147, .external_lex_state = 2},
  [83] = {.lex_state = 147, .external_lex_state = 2},
  [84] = {.lex_state = 147, .external_lex_state = 2},
  [85] = {.lex_state = 147, .external_lex_state = 2},
  [86] = {.lex_state = 147, .external_lex_state = 5},
  [87] = {.lex_state = 147, .external_lex_state = 5},
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
  [98] = {.lex_state = 147, .external_lex_state = 5},
  [99] = {.lex_state = 147, .external_lex_state = 2},
  [100] = {.lex_state = 147, .external_lex_state = 2},
  [101] = {.lex_state = 147, .external_lex_state = 2},
  [102] = {.lex_state = 147},
  [103] = {.lex_state = 147},
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
  [135] = {.lex_state = 54},
  [136] = {.lex_state = 54},
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
  [147] = {.lex_state = 66},
  [148] = {.lex_state = 66},
  [149] = {.lex_state = 66},
  [150] = {.lex_state = 53, .external_lex_state = 6},
  [151] = {.lex_state = 54, .external_lex_state = 6},
  [152] = {.lex_state = 54, .external_lex_state = 6},
  [153] = {.lex_state = 54, .external_lex_state = 6},
  [154] = {.lex_state = 54, .external_lex_state = 6},
  [155] = {.lex_state = 60, .external_lex_state = 2},
  [156] = {.lex_state = 54, .external_lex_state = 6},
  [157] = {.lex_state = 54, .external_lex_state = 6},
  [158] = {.lex_state = 60, .external_lex_state = 2},
  [159] = {.lex_state = 54, .external_lex_state = 6},
  [160] = {.lex_state = 54, .external_lex_state = 6},
  [161] = {.lex_state = 60},
  [162] = {.lex_state = 11, .external_lex_state = 2},
  [163] = {.lex_state = 11, .external_lex_state = 2},
  [164] = {.lex_state = 60},
  [165] = {.lex_state = 60},
  [166] = {.lex_state = 11, .external_lex_state = 2},
  [167] = {.lex_state = 61},
  [168] = {.lex_state = 60},
  [169] = {.lex_state = 11, .external_lex_state = 2},
  [170] = {.lex_state = 11, .external_lex_state = 2},
  [171] = {.lex_state = 11, .external_lex_state = 6},
  [172] = {.lex_state = 11, .external_lex_state = 6},
  [173] = {.lex_state = 11, .external_lex_state = 6},
  [174] = {.lex_state = 11, .external_lex_state = 6},
  [175] = {.lex_state = 11, .external_lex_state = 6},
  [176] = {.lex_state = 11, .external_lex_state = 6},
  [177] = {.lex_state = 11},
  [178] = {.lex_state = 11, .external_lex_state = 6},
  [179] = {.lex_state = 11, .external_lex_state = 6},
  [180] = {.lex_state = 11, .external_lex_state = 6},
  [181] = {.lex_state = 11, .external_lex_state = 6},
  [182] = {.lex_state = 11},
  [183] = {.lex_state = 60, .external_lex_state = 4},
  [184] = {.lex_state = 11, .external_lex_state = 6},
  [185] = {.lex_state = 11, .external_lex_state = 6},
  [186] = {.lex_state = 60, .external_lex_state = 4},
  [187] = {.lex_state = 11, .external_lex_state = 6},
  [188] = {.lex_state = 60, .external_lex_state = 4},
  [189] = {.lex_state = 60, .external_lex_state = 4},
  [190] = {.lex_state = 11, .external_lex_state = 6},
  [191] = {.lex_state = 11, .external_lex_state = 6},
  [192] = {.lex_state = 11, .external_lex_state = 6},
  [193] = {.lex_state = 60, .external_lex_state = 4},
  [194] = {.lex_state = 11, .external_lex_state = 6},
  [195] = {.lex_state = 60, .external_lex_state = 4},
  [196] = {.lex_state = 11, .external_lex_state = 6},
  [197] = {.lex_state = 11, .external_lex_state = 6},
  [198] = {.lex_state = 11},
  [199] = {.lex_state = 11, .external_lex_state = 6},
  [200] = {.lex_state = 11},
  [201] = {.lex_state = 11, .external_lex_state = 6},
  [202] = {.lex_state = 11, .external_lex_state = 6},
  [203] = {.lex_state = 11},
  [204] = {.lex_state = 54, .external_lex_state = 6},
  [205] = {.lex_state = 60, .external_lex_state = 2},
  [206] = {.lex_state = 11, .external_lex_state = 6},
  [207] = {.lex_state = 11},
  [208] = {.lex_state = 60, .external_lex_state = 2},
  [209] = {.lex_state = 54, .external_lex_state = 6},
  [210] = {.lex_state = 11},
  [211] = {.lex_state = 11},
  [212] = {.lex_state = 60, .external_lex_state = 4},
  [213] = {.lex_state = 54},
  [214] = {.lex_state = 60, .external_lex_state = 2},
  [215] = {.lex_state = 11},
  [216] = {.lex_state = 60, .external_lex_state = 2},
  [217] = {.lex_state = 11},
  [218] = {.lex_state = 54, .external_lex_state = 6},
  [219] = {.lex_state = 11},
  [220] = {.lex_state = 11},
  [221] = {.lex_state = 11},
  [222] = {.lex_state = 11},
  [223] = {.lex_state = 11},
  [224] = {.lex_state = 60, .external_lex_state = 2},
  [225] = {.lex_state = 11},
  [226] = {.lex_state = 66},
  [227] = {.lex_state = 60, .external_lex_state = 2},
  [228] = {.lex_state = 60, .external_lex_state = 2},
  [229] = {.lex_state = 60, .external_lex_state = 2},
  [230] = {.lex_state = 60, .external_lex_state = 2},
  [231] = {.lex_state = 60, .external_lex_state = 2},
  [232] = {.lex_state = 60, .external_lex_state = 2},
  [233] = {.lex_state = 60, .external_lex_state = 2},
  [234] = {.lex_state = 60, .external_lex_state = 2},
  [235] = {.lex_state = 60, .external_lex_state = 2},
  [236] = {.lex_state = 60, .external_lex_state = 2},
  [237] = {.lex_state = 60, .external_lex_state = 2},
  [238] = {.lex_state = 60, .external_lex_state = 2},
  [239] = {.lex_state = 60},
  [240] = {.lex_state = 60, .external_lex_state = 2},
  [241] = {.lex_state = 60, .external_lex_state = 2},
  [242] = {.lex_state = 60, .external_lex_state = 2},
  [243] = {.lex_state = 60, .external_lex_state = 2},
  [244] = {.lex_state = 60, .external_lex_state = 2},
  [245] = {.lex_state = 60},
  [246] = {.lex_state = 60},
  [247] = {.lex_state = 60},
  [248] = {.lex_state = 11, .external_lex_state = 6},
  [249] = {.lex_state = 60},
  [250] = {.lex_state = 60},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 54},
  [253] = {.lex_state = 11, .external_lex_state = 6},
  [254] = {.lex_state = 11, .external_lex_state = 6},
  [255] = {.lex_state = 54},
  [256] = {.lex_state = 60},
  [257] = {.lex_state = 50, .external_lex_state = 6},
  [258] = {.lex_state = 11, .external_lex_state = 2},
  [259] = {.lex_state = 60},
  [260] = {.lex_state = 11, .external_lex_state = 6},
  [261] = {.lex_state = 60},
  [262] = {.lex_state = 60},
  [263] = {.lex_state = 53},
  [264] = {.lex_state = 53},
  [265] = {.lex_state = 50, .external_lex_state = 6},
  [266] = {.lex_state = 60},
  [267] = {.lex_state = 60},
  [268] = {.lex_state = 60},
  [269] = {.lex_state = 11, .external_lex_state = 6},
  [270] = {.lex_state = 11, .external_lex_state = 6},
  [271] = {.lex_state = 60},
  [272] = {.lex_state = 60},
  [273] = {.lex_state = 60},
  [274] = {.lex_state = 60},
  [275] = {.lex_state = 60},
  [276] = {.lex_state = 53},
  [277] = {.lex_state = 50},
  [278] = {.lex_state = 53},
  [279] = {.lex_state = 50},
  [280] = {.lex_state = 50},
  [281] = {.lex_state = 53},
  [282] = {.lex_state = 50},
  [283] = {.lex_state = 50},
  [284] = {.lex_state = 53},
  [285] = {.lex_state = 50},
  [286] = {.lex_state = 53},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 60},
  [289] = {.lex_state = 53},
  [290] = {.lex_state = 50},
  [291] = {.lex_state = 53},
  [292] = {.lex_state = 53},
  [293] = {.lex_state = 53},
  [294] = {.lex_state = 53},
  [295] = {.lex_state = 53},
  [296] = {.lex_state = 53},
  [297] = {.lex_state = 53},
  [298] = {.lex_state = 53},
  [299] = {.lex_state = 53},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 50},
  [302] = {.lex_state = 50},
  [303] = {.lex_state = 50},
  [304] = {.lex_state = 53},
  [305] = {.lex_state = 62},
  [306] = {.lex_state = 50},
  [307] = {.lex_state = 64},
  [308] = {.lex_state = 57, .external_lex_state = 6},
  [309] = {.lex_state = 64},
  [310] = {.lex_state = 53},
  [311] = {.lex_state = 62},
  [312] = {.lex_state = 0, .external_lex_state = 5},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0, .external_lex_state = 5},
  [316] = {.lex_state = 0, .external_lex_state = 6},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0, .external_lex_state = 6},
  [320] = {.lex_state = 0, .external_lex_state = 6},
  [321] = {.lex_state = 0, .external_lex_state = 6},
  [322] = {.lex_state = 640},
  [323] = {.lex_state = 0, .external_lex_state = 6},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0, .external_lex_state = 5},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 51},
  [328] = {.lex_state = 51},
  [329] = {.lex_state = 147},
  [330] = {.lex_state = 640},
  [331] = {.lex_state = 0, .external_lex_state = 6},
  [332] = {.lex_state = 0, .external_lex_state = 6},
  [333] = {.lex_state = 66},
  [334] = {.lex_state = 52},
  [335] = {.lex_state = 50},
  [336] = {.lex_state = 0, .external_lex_state = 5},
  [337] = {.lex_state = 0, .external_lex_state = 6},
  [338] = {.lex_state = 0, .external_lex_state = 6},
  [339] = {.lex_state = 0, .external_lex_state = 5},
  [340] = {.lex_state = 0, .external_lex_state = 5},
  [341] = {.lex_state = 0, .external_lex_state = 5},
  [342] = {.lex_state = 0, .external_lex_state = 6},
  [343] = {.lex_state = 0, .external_lex_state = 6},
  [344] = {.lex_state = 0, .external_lex_state = 6},
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
    [sym_source_file] = STATE(313),
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
    STATE(59), 1,
      sym_unbuffered_code,
    ACTIONS(77), 2,
      sym_class,
      sym_id,
    STATE(18), 2,
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
    STATE(63), 1,
      sym_unbuffered_code,
    ACTIONS(77), 2,
      sym_class,
      sym_id,
    STATE(14), 2,
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
    STATE(44), 1,
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
      sym__indent,
    STATE(37), 1,
      sym_children,
    ACTIONS(116), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(114), 10,
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
  [315] = 6,
    ACTIONS(124), 1,
      anon_sym_when,
    ACTIONS(126), 1,
      anon_sym_default,
    STATE(8), 1,
      sym__when_keyword,
    STATE(11), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(122), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(120), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [348] = 6,
    ACTIONS(132), 1,
      anon_sym_when,
    ACTIONS(135), 1,
      anon_sym_default,
    STATE(8), 1,
      sym__when_keyword,
    STATE(11), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(130), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(128), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [381] = 5,
    ACTIONS(142), 1,
      sym_tag_name,
    ACTIONS(145), 2,
      sym_class,
      sym_id,
    STATE(12), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(140), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(138), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [412] = 4,
    ACTIONS(118), 1,
      sym__indent,
    STATE(48), 1,
      sym_children,
    ACTIONS(150), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(148), 10,
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
  [441] = 5,
    ACTIONS(75), 1,
      sym_tag_name,
    ACTIONS(77), 2,
      sym_class,
      sym_id,
    STATE(12), 2,
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
  [472] = 4,
    ACTIONS(156), 1,
      sym__indent,
    STATE(56), 1,
      sym_children,
    ACTIONS(154), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(152), 10,
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
  [501] = 4,
    ACTIONS(162), 1,
      sym__indent,
    STATE(64), 1,
      sym_children,
    ACTIONS(160), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(158), 10,
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
  [530] = 4,
    ACTIONS(118), 1,
      sym__indent,
    STATE(64), 1,
      sym_children,
    ACTIONS(160), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(158), 10,
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
  [559] = 5,
    ACTIONS(75), 1,
      sym_tag_name,
    ACTIONS(77), 2,
      sym_class,
      sym_id,
    STATE(12), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(166), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(164), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [590] = 7,
    ACTIONS(168), 1,
      anon_sym_PIPE,
    ACTIONS(170), 1,
      sym_tag_name,
    ACTIONS(174), 1,
      sym__dedent,
    ACTIONS(172), 2,
      sym_class,
      sym_id,
    STATE(22), 4,
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
  [625] = 4,
    ACTIONS(180), 1,
      sym__un_delimited_javascript_line,
    STATE(20), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(176), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(178), 16,
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
  [654] = 4,
    ACTIONS(187), 1,
      sym__indent,
    STATE(42), 1,
      sym_children,
    ACTIONS(185), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(183), 10,
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
  [683] = 6,
    ACTIONS(189), 1,
      anon_sym_PIPE,
    ACTIONS(192), 1,
      sym_tag_name,
    ACTIONS(195), 2,
      sym_class,
      sym_id,
    STATE(22), 4,
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
  [716] = 2,
    ACTIONS(200), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(198), 12,
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
  [741] = 7,
    ACTIONS(168), 1,
      anon_sym_PIPE,
    ACTIONS(170), 1,
      sym_tag_name,
    ACTIONS(202), 1,
      sym__dedent,
    ACTIONS(172), 2,
      sym_class,
      sym_id,
    STATE(22), 4,
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
  [776] = 4,
    ACTIONS(208), 1,
      sym__un_delimited_javascript_line,
    STATE(20), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(204), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(206), 16,
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
  [805] = 3,
    ACTIONS(214), 1,
      sym__indent,
    ACTIONS(212), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(210), 10,
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
  [831] = 2,
    ACTIONS(216), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(218), 17,
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
  [883] = 4,
    ACTIONS(228), 1,
      sym__un_delimited_javascript_line,
    STATE(29), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(176), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(178), 14,
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
  [910] = 2,
    ACTIONS(160), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(158), 10,
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
  [933] = 3,
    ACTIONS(235), 1,
      sym__dedent,
    ACTIONS(233), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(231), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [958] = 5,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    ACTIONS(241), 1,
      sym__comment_content,
    ACTIONS(243), 1,
      sym__dedent,
    STATE(50), 1,
      aux_sym_comment_repeat1,
    ACTIONS(239), 14,
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
  [987] = 5,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    ACTIONS(241), 1,
      sym__comment_content,
    ACTIONS(243), 1,
      sym__dedent,
    STATE(60), 1,
      aux_sym_comment_repeat1,
    ACTIONS(239), 14,
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
  [1016] = 4,
    ACTIONS(245), 1,
      sym__indent,
    STATE(100), 1,
      sym_children,
    ACTIONS(150), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(148), 10,
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
  [1043] = 4,
    ACTIONS(247), 1,
      sym__indent,
    STATE(91), 1,
      sym_children,
    ACTIONS(185), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(183), 10,
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
  [1070] = 4,
    ACTIONS(249), 1,
      sym__indent,
    STATE(96), 1,
      sym_children,
    ACTIONS(160), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(158), 10,
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
  [1097] = 2,
    ACTIONS(253), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(251), 10,
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
  [1120] = 4,
    ACTIONS(245), 1,
      sym__indent,
    STATE(96), 1,
      sym_children,
    ACTIONS(160), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(158), 10,
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
  [1147] = 2,
    ACTIONS(257), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(255), 10,
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
  [1170] = 2,
    ACTIONS(261), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(259), 10,
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
  [1193] = 3,
    ACTIONS(267), 1,
      sym__dedent,
    ACTIONS(265), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(263), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1218] = 2,
    ACTIONS(154), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(152), 10,
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
  [1241] = 2,
    ACTIONS(154), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(152), 10,
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
  [1264] = 3,
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
  [1289] = 2,
    ACTIONS(271), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(269), 10,
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
  [1312] = 4,
    ACTIONS(273), 1,
      sym__un_delimited_javascript_line,
    STATE(29), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(204), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(206), 14,
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
  [1339] = 2,
    ACTIONS(116), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(114), 10,
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
  [1362] = 2,
    ACTIONS(116), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(114), 10,
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
  [1385] = 2,
    ACTIONS(277), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(275), 10,
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
  [1408] = 5,
    ACTIONS(241), 1,
      sym__comment_content,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    ACTIONS(283), 1,
      sym__dedent,
    STATE(60), 1,
      aux_sym_comment_repeat1,
    ACTIONS(281), 14,
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
  [1437] = 5,
    ACTIONS(241), 1,
      sym__comment_content,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    ACTIONS(289), 1,
      sym__dedent,
    STATE(33), 1,
      aux_sym_comment_repeat1,
    ACTIONS(287), 14,
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
  [1466] = 2,
    ACTIONS(293), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(291), 10,
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
  [1489] = 2,
    ACTIONS(297), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(295), 10,
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
  [1512] = 2,
    ACTIONS(301), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(299), 10,
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
  [1535] = 4,
    ACTIONS(303), 1,
      sym__indent,
    STATE(94), 1,
      sym_children,
    ACTIONS(154), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(152), 10,
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
  [1562] = 2,
    ACTIONS(160), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(158), 10,
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
  [1585] = 4,
    ACTIONS(245), 1,
      sym__indent,
    STATE(82), 1,
      sym_children,
    ACTIONS(116), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(114), 10,
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
    ACTIONS(307), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(305), 10,
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
    ACTIONS(166), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(164), 10,
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
  [1658] = 4,
    ACTIONS(313), 1,
      sym__comment_content,
    STATE(60), 1,
      aux_sym_comment_repeat1,
    ACTIONS(309), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(311), 14,
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
  [1685] = 2,
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
  [1708] = 2,
    ACTIONS(150), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(148), 10,
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
  [1754] = 2,
    ACTIONS(150), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(148), 10,
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
    ACTIONS(185), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(183), 10,
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
    STATE(117), 1,
      sym_children,
    ACTIONS(154), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(152), 9,
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
    STATE(74), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(324), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(322), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1850] = 4,
    ACTIONS(326), 1,
      sym__indent,
    STATE(121), 1,
      sym_children,
    ACTIONS(116), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(114), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1876] = 2,
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
  [1898] = 2,
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
  [1920] = 4,
    ACTIONS(326), 1,
      sym__indent,
    STATE(103), 1,
      sym_children,
    ACTIONS(150), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(148), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1946] = 3,
    ACTIONS(332), 1,
      sym__indent,
    ACTIONS(212), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(210), 10,
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
  [1970] = 2,
    ACTIONS(309), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(311), 15,
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
  [1992] = 5,
    ACTIONS(334), 1,
      sym_tag_name,
    ACTIONS(337), 2,
      sym_class,
      sym_id,
    STATE(74), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(140), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
    ACTIONS(138), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [2020] = 3,
    STATE(74), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(342), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(340), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2044] = 4,
    ACTIONS(326), 1,
      sym__indent,
    STATE(102), 1,
      sym_children,
    ACTIONS(160), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(158), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2070] = 2,
    ACTIONS(216), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(218), 15,
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
  [2092] = 4,
    ACTIONS(344), 1,
      sym__indent,
    STATE(124), 1,
      sym_children,
    ACTIONS(185), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(183), 9,
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
    STATE(102), 1,
      sym_children,
    ACTIONS(160), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(158), 9,
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
    ACTIONS(293), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(291), 10,
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
  [2165] = 3,
    ACTIONS(348), 1,
      sym__dedent,
    ACTIONS(265), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(263), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2188] = 2,
    ACTIONS(253), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(251), 10,
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
  [2209] = 2,
    ACTIONS(277), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(275), 10,
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
  [2230] = 2,
    ACTIONS(271), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(269), 10,
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
  [2251] = 2,
    ACTIONS(261), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(259), 10,
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
  [2272] = 3,
    ACTIONS(350), 1,
      sym__indent,
    ACTIONS(287), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(285), 9,
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
    ACTIONS(352), 1,
      sym__indent,
    ACTIONS(212), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(210), 9,
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
    ACTIONS(354), 1,
      sym__dedent,
    ACTIONS(233), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(231), 9,
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
    ACTIONS(185), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(183), 10,
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
    ACTIONS(257), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(255), 10,
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
    ACTIONS(154), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(152), 10,
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
    ACTIONS(154), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(152), 10,
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
    ACTIONS(160), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(158), 10,
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
    ACTIONS(160), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(158), 10,
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
  [2488] = 2,
    ACTIONS(150), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(148), 10,
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
    ACTIONS(150), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(148), 10,
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
  [2530] = 3,
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
  [2553] = 2,
    ACTIONS(301), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(299), 10,
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
  [2574] = 2,
    ACTIONS(116), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(114), 10,
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
  [2595] = 2,
    ACTIONS(116), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(114), 10,
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
  [2616] = 2,
    ACTIONS(150), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(148), 9,
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
    ACTIONS(116), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(114), 9,
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
    ACTIONS(293), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(291), 9,
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
  [2696] = 2,
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
  [2716] = 2,
    ACTIONS(277), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(275), 9,
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
    ACTIONS(297), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(295), 9,
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
  [2776] = 2,
    ACTIONS(271), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(269), 9,
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
    ACTIONS(281), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(279), 9,
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
  [2836] = 2,
    ACTIONS(261), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(259), 9,
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
    ACTIONS(239), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(237), 9,
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
    ACTIONS(185), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(183), 9,
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
    ACTIONS(307), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(305), 9,
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
    ACTIONS(160), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(158), 9,
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
    ACTIONS(160), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(158), 9,
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
    ACTIONS(150), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(148), 9,
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
    ACTIONS(257), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(255), 9,
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
    ACTIONS(253), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(251), 9,
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
    ACTIONS(116), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(114), 9,
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
    ACTIONS(154), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(152), 9,
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
    ACTIONS(154), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(152), 9,
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
    STATE(150), 1,
      aux_sym_tag_repeat1,
    STATE(153), 1,
      sym_attributes,
    ACTIONS(382), 2,
      sym_class,
      sym_id,
    STATE(234), 3,
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
    STATE(127), 1,
      aux_sym_tag_repeat1,
    STATE(154), 1,
      sym_attributes,
    ACTIONS(396), 2,
      sym_class,
      sym_id,
    STATE(89), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3150] = 11,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_BANG_EQ,
    ACTIONS(390), 1,
      anon_sym_EQ,
    ACTIONS(394), 1,
      anon_sym_DOT,
    ACTIONS(400), 1,
      anon_sym_COLON,
    ACTIONS(402), 1,
      anon_sym_,
    ACTIONS(404), 1,
      sym__newline,
    STATE(150), 1,
      aux_sym_tag_repeat1,
    STATE(159), 1,
      sym_attributes,
    ACTIONS(382), 2,
      sym_class,
      sym_id,
    STATE(92), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3187] = 11,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      anon_sym_COLON,
    ACTIONS(408), 1,
      anon_sym_BANG_EQ,
    ACTIONS(410), 1,
      anon_sym_EQ,
    ACTIONS(412), 1,
      anon_sym_,
    ACTIONS(414), 1,
      anon_sym_DOT,
    ACTIONS(418), 1,
      sym__newline,
    STATE(129), 1,
      aux_sym_tag_repeat1,
    STATE(160), 1,
      sym_attributes,
    ACTIONS(416), 2,
      sym_class,
      sym_id,
    STATE(65), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3224] = 11,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(408), 1,
      anon_sym_BANG_EQ,
    ACTIONS(410), 1,
      anon_sym_EQ,
    ACTIONS(414), 1,
      anon_sym_DOT,
    ACTIONS(420), 1,
      anon_sym_COLON,
    ACTIONS(422), 1,
      anon_sym_,
    ACTIONS(424), 1,
      sym__newline,
    STATE(150), 1,
      aux_sym_tag_repeat1,
    STATE(157), 1,
      sym_attributes,
    ACTIONS(382), 2,
      sym_class,
      sym_id,
    STATE(43), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3261] = 11,
    ACTIONS(372), 1,
      anon_sym_BANG_EQ,
    ACTIONS(374), 1,
      anon_sym_EQ,
    ACTIONS(378), 1,
      anon_sym_DOT,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(426), 1,
      anon_sym_COLON,
    ACTIONS(428), 1,
      anon_sym_,
    ACTIONS(432), 1,
      sym__newline,
    STATE(125), 1,
      aux_sym_tag_repeat1,
    STATE(152), 1,
      sym_attributes,
    ACTIONS(430), 2,
      sym_class,
      sym_id,
    STATE(227), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3298] = 11,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(434), 1,
      anon_sym_COLON,
    ACTIONS(436), 1,
      anon_sym_BANG_EQ,
    ACTIONS(438), 1,
      anon_sym_EQ,
    ACTIONS(440), 1,
      anon_sym_,
    ACTIONS(442), 1,
      anon_sym_DOT,
    ACTIONS(444), 1,
      sym__newline,
    STATE(150), 1,
      aux_sym_tag_repeat1,
    STATE(151), 1,
      sym_attributes,
    ACTIONS(382), 2,
      sym_class,
      sym_id,
    STATE(123), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3335] = 11,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(436), 1,
      anon_sym_BANG_EQ,
    ACTIONS(438), 1,
      anon_sym_EQ,
    ACTIONS(442), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_COLON,
    ACTIONS(448), 1,
      anon_sym_,
    ACTIONS(452), 1,
      sym__newline,
    STATE(131), 1,
      aux_sym_tag_repeat1,
    STATE(156), 1,
      sym_attributes,
    ACTIONS(450), 2,
      sym_class,
      sym_id,
    STATE(115), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3372] = 6,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(454), 1,
      anon_sym_BANG_EQ,
    ACTIONS(456), 1,
      anon_sym_EQ,
    STATE(62), 2,
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
  [3397] = 6,
    ACTIONS(17), 1,
      anon_sym_BANG_EQ,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(168), 1,
      anon_sym_PIPE,
    STATE(122), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(172), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(19), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3422] = 6,
    ACTIONS(458), 1,
      anon_sym_EQ,
    ACTIONS(460), 1,
      anon_sym_,
    ACTIONS(462), 1,
      anon_sym_DOT,
    STATE(136), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(464), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(284), 6,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
  [3447] = 6,
    ACTIONS(458), 1,
      anon_sym_EQ,
    ACTIONS(462), 1,
      anon_sym_DOT,
    ACTIONS(466), 1,
      anon_sym_,
    STATE(213), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(468), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(276), 6,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
  [3472] = 6,
    ACTIONS(470), 1,
      anon_sym_PIPE,
    ACTIONS(472), 1,
      anon_sym_BANG_EQ,
    ACTIONS(474), 1,
      anon_sym_EQ,
    STATE(229), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(476), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(158), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3497] = 6,
    ACTIONS(17), 1,
      anon_sym_BANG_EQ,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(168), 1,
      anon_sym_PIPE,
    STATE(119), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(172), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(19), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3522] = 6,
    ACTIONS(470), 1,
      anon_sym_PIPE,
    ACTIONS(472), 1,
      anon_sym_BANG_EQ,
    ACTIONS(474), 1,
      anon_sym_EQ,
    STATE(236), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(476), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(158), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3547] = 6,
    ACTIONS(168), 1,
      anon_sym_PIPE,
    ACTIONS(478), 1,
      anon_sym_BANG_EQ,
    ACTIONS(480), 1,
      anon_sym_EQ,
    STATE(101), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(172), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(24), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3572] = 6,
    ACTIONS(470), 1,
      anon_sym_PIPE,
    ACTIONS(472), 1,
      anon_sym_BANG_EQ,
    ACTIONS(474), 1,
      anon_sym_EQ,
    STATE(232), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(476), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(158), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3597] = 6,
    ACTIONS(17), 1,
      anon_sym_BANG_EQ,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(168), 1,
      anon_sym_PIPE,
    STATE(118), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(172), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(19), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3622] = 6,
    ACTIONS(168), 1,
      anon_sym_PIPE,
    ACTIONS(478), 1,
      anon_sym_BANG_EQ,
    ACTIONS(480), 1,
      anon_sym_EQ,
    STATE(93), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(172), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(24), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3647] = 6,
    ACTIONS(168), 1,
      anon_sym_PIPE,
    ACTIONS(478), 1,
      anon_sym_BANG_EQ,
    ACTIONS(480), 1,
      anon_sym_EQ,
    STATE(97), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(172), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(24), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3672] = 6,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(454), 1,
      anon_sym_BANG_EQ,
    ACTIONS(456), 1,
      anon_sym_EQ,
    STATE(30), 2,
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
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(454), 1,
      anon_sym_BANG_EQ,
    ACTIONS(456), 1,
      anon_sym_EQ,
    STATE(47), 2,
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
  [3722] = 8,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
    ACTIONS(484), 1,
      aux_sym__attribute_token1,
    STATE(135), 1,
      sym_attribute_name,
    STATE(148), 1,
      aux_sym_attributes_repeat1,
    STATE(264), 1,
      sym_angular_attribute_name,
    STATE(281), 1,
      sym_attribute,
    STATE(298), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(486), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [3750] = 8,
    ACTIONS(488), 1,
      anon_sym_RPAREN,
    ACTIONS(490), 1,
      aux_sym__attribute_token1,
    STATE(135), 1,
      sym_attribute_name,
    STATE(148), 1,
      aux_sym_attributes_repeat1,
    STATE(264), 1,
      sym_angular_attribute_name,
    STATE(310), 1,
      sym_attribute,
    STATE(298), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(493), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [3778] = 8,
    ACTIONS(484), 1,
      aux_sym__attribute_token1,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      sym_attribute_name,
    STATE(147), 1,
      aux_sym_attributes_repeat1,
    STATE(264), 1,
      sym_angular_attribute_name,
    STATE(299), 1,
      sym_attribute,
    STATE(298), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(486), 3,
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
    ACTIONS(436), 1,
      anon_sym_BANG_EQ,
    ACTIONS(438), 1,
      anon_sym_EQ,
    ACTIONS(442), 1,
      anon_sym_DOT,
    ACTIONS(505), 1,
      anon_sym_COLON,
    ACTIONS(507), 1,
      anon_sym_,
    ACTIONS(509), 1,
      sym__newline,
    STATE(118), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3849] = 7,
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
    ACTIONS(384), 1,
      sym__newline,
    STATE(234), 3,
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
    STATE(232), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3897] = 7,
    ACTIONS(388), 1,
      anon_sym_BANG_EQ,
    ACTIONS(390), 1,
      anon_sym_EQ,
    ACTIONS(394), 1,
      anon_sym_DOT,
    ACTIONS(400), 1,
      anon_sym_COLON,
    ACTIONS(402), 1,
      anon_sym_,
    ACTIONS(404), 1,
      sym__newline,
    STATE(92), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3921] = 4,
    ACTIONS(81), 1,
      sym__dedent,
    ACTIONS(517), 1,
      anon_sym_PIPE,
    ACTIONS(520), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(155), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3939] = 7,
    ACTIONS(434), 1,
      anon_sym_COLON,
    ACTIONS(436), 1,
      anon_sym_BANG_EQ,
    ACTIONS(438), 1,
      anon_sym_EQ,
    ACTIONS(440), 1,
      anon_sym_,
    ACTIONS(442), 1,
      anon_sym_DOT,
    ACTIONS(444), 1,
      sym__newline,
    STATE(123), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3963] = 7,
    ACTIONS(408), 1,
      anon_sym_BANG_EQ,
    ACTIONS(410), 1,
      anon_sym_EQ,
    ACTIONS(414), 1,
      anon_sym_DOT,
    ACTIONS(523), 1,
      anon_sym_COLON,
    ACTIONS(525), 1,
      anon_sym_,
    ACTIONS(527), 1,
      sym__newline,
    STATE(30), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3987] = 4,
    ACTIONS(470), 1,
      anon_sym_PIPE,
    ACTIONS(529), 1,
      sym__dedent,
    ACTIONS(476), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(155), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4005] = 7,
    ACTIONS(388), 1,
      anon_sym_BANG_EQ,
    ACTIONS(390), 1,
      anon_sym_EQ,
    ACTIONS(394), 1,
      anon_sym_DOT,
    ACTIONS(531), 1,
      anon_sym_COLON,
    ACTIONS(533), 1,
      anon_sym_,
    ACTIONS(535), 1,
      sym__newline,
    STATE(93), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4029] = 7,
    ACTIONS(408), 1,
      anon_sym_BANG_EQ,
    ACTIONS(410), 1,
      anon_sym_EQ,
    ACTIONS(414), 1,
      anon_sym_DOT,
    ACTIONS(420), 1,
      anon_sym_COLON,
    ACTIONS(422), 1,
      anon_sym_,
    ACTIONS(424), 1,
      sym__newline,
    STATE(43), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4053] = 3,
    ACTIONS(168), 1,
      anon_sym_PIPE,
    ACTIONS(172), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(24), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4068] = 7,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(543), 1,
      sym__dedent,
    STATE(163), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(196), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4091] = 7,
    ACTIONS(545), 1,
      aux_sym_content_token1,
    ACTIONS(548), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(551), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(554), 1,
      sym__dedent,
    STATE(163), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(196), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4114] = 3,
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
  [4129] = 3,
    ACTIONS(168), 1,
      anon_sym_PIPE,
    ACTIONS(172), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(19), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4144] = 7,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(556), 1,
      sym__dedent,
    STATE(163), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(196), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4167] = 8,
    ACTIONS(558), 1,
      aux_sym__ternary_attribute_value_token1,
    ACTIONS(560), 1,
      aux_sym__variable_attribute_value_token1,
    ACTIONS(562), 1,
      aux_sym__object_attribute_value_token1,
    ACTIONS(564), 1,
      aux_sym__template_attribute_value_token1,
    ACTIONS(566), 1,
      aux_sym__array_attribute_value_token1,
    ACTIONS(568), 1,
      anon_sym_SQUOTE,
    ACTIONS(570), 1,
      anon_sym_DQUOTE,
    STATE(304), 1,
      sym_quoted_attribute_value,
  [4192] = 3,
    ACTIONS(470), 1,
      anon_sym_PIPE,
    ACTIONS(476), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(158), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4207] = 7,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(572), 1,
      sym__dedent,
    STATE(163), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(196), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4230] = 7,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(574), 1,
      sym__dedent,
    STATE(163), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(196), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4253] = 6,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(576), 1,
      sym__newline,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(179), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4273] = 6,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(578), 1,
      sym__newline,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(179), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4293] = 6,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(580), 1,
      sym__newline,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(179), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4313] = 6,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(582), 1,
      sym__newline,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(202), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4333] = 6,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(584), 1,
      sym__newline,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(176), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4353] = 6,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(586), 1,
      sym__newline,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(179), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4373] = 6,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(162), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(196), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4393] = 6,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(588), 1,
      sym__newline,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(179), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4413] = 6,
    ACTIONS(590), 1,
      aux_sym_content_token1,
    ACTIONS(593), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(599), 1,
      sym__newline,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(179), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4433] = 6,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(601), 1,
      sym__newline,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(179), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4453] = 6,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(603), 1,
      sym__newline,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(179), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4473] = 6,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(169), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(196), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4493] = 3,
    ACTIONS(605), 1,
      sym__indent,
    STATE(231), 1,
      sym_children,
    ACTIONS(114), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4507] = 6,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(607), 1,
      sym__newline,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(179), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4527] = 6,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(609), 1,
      sym__newline,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(181), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4547] = 3,
    ACTIONS(605), 1,
      sym__indent,
    STATE(228), 1,
      sym_children,
    ACTIONS(148), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4561] = 6,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(611), 1,
      sym__newline,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(179), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4581] = 3,
    ACTIONS(613), 1,
      sym__indent,
    STATE(235), 1,
      sym_children,
    ACTIONS(158), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4595] = 3,
    ACTIONS(605), 1,
      sym__indent,
    STATE(235), 1,
      sym_children,
    ACTIONS(158), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4609] = 6,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(615), 1,
      sym__newline,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(179), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4629] = 6,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(617), 1,
      sym__newline,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(179), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4649] = 6,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(619), 1,
      sym__newline,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(179), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4669] = 3,
    ACTIONS(621), 1,
      sym__indent,
    STATE(230), 1,
      sym_children,
    ACTIONS(152), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4683] = 6,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(623), 1,
      sym__newline,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(179), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4703] = 3,
    ACTIONS(625), 1,
      sym__indent,
    STATE(237), 1,
      sym_children,
    ACTIONS(183), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4717] = 6,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(627), 1,
      sym__newline,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(179), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4737] = 6,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(629), 1,
      sym__newline,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(179), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4757] = 6,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(166), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(196), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4777] = 6,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(631), 1,
      sym__newline,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(178), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4797] = 6,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(170), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(196), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4817] = 6,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(633), 1,
      sym__newline,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(179), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4837] = 6,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(635), 1,
      sym__newline,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(179), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4857] = 5,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(173), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4874] = 2,
    ACTIONS(639), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(637), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [4885] = 3,
    ACTIONS(641), 1,
      sym__dedent,
    STATE(224), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(476), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4898] = 4,
    ACTIONS(645), 1,
      anon_sym_POUND,
    ACTIONS(647), 1,
      anon_sym_LBRACE,
    ACTIONS(643), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(649), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [4913] = 5,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(197), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4930] = 3,
    ACTIONS(651), 1,
      sym__dedent,
    STATE(224), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(476), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4943] = 2,
    ACTIONS(655), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(653), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [4954] = 5,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(190), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4971] = 5,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(172), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4988] = 2,
    ACTIONS(657), 1,
      sym__indent,
    ACTIONS(210), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4999] = 4,
    ACTIONS(661), 1,
      anon_sym_,
    ACTIONS(663), 1,
      anon_sym_DOT,
    STATE(213), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(659), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5014] = 3,
    ACTIONS(666), 1,
      sym__dedent,
    STATE(224), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(476), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5027] = 5,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(187), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5044] = 3,
    ACTIONS(668), 1,
      sym__dedent,
    STATE(224), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(476), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5057] = 5,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(192), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5074] = 2,
    ACTIONS(672), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(670), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [5085] = 5,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(201), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5102] = 5,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(191), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5119] = 5,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(184), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5136] = 5,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(171), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5153] = 5,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(194), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5170] = 3,
    ACTIONS(138), 1,
      sym__dedent,
    STATE(224), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(674), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5183] = 5,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(539), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(541), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(248), 1,
      aux_sym_content_repeat1,
    STATE(180), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5200] = 1,
    ACTIONS(488), 5,
      anon_sym_RPAREN,
      aux_sym__attribute_token1,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [5208] = 1,
    ACTIONS(183), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5216] = 1,
    ACTIONS(114), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5224] = 1,
    ACTIONS(114), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5232] = 1,
    ACTIONS(158), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5240] = 1,
    ACTIONS(251), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5248] = 1,
    ACTIONS(158), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5256] = 1,
    ACTIONS(316), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5264] = 1,
    ACTIONS(152), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5272] = 1,
    ACTIONS(148), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5280] = 1,
    ACTIONS(148), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5288] = 1,
    ACTIONS(152), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5296] = 1,
    ACTIONS(299), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5304] = 2,
    STATE(67), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(25), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5314] = 1,
    ACTIONS(255), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5322] = 1,
    ACTIONS(291), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5330] = 1,
    ACTIONS(259), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5338] = 1,
    ACTIONS(269), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5346] = 1,
    ACTIONS(275), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5354] = 2,
    STATE(208), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(476), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5364] = 2,
    STATE(216), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(476), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5374] = 2,
    STATE(214), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(476), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5384] = 4,
    ACTIONS(537), 1,
      aux_sym_content_token1,
    ACTIONS(679), 1,
      sym__newline,
    STATE(254), 1,
      aux_sym_content_repeat1,
    ACTIONS(677), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [5398] = 2,
    STATE(75), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(25), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5408] = 2,
    STATE(205), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(476), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5418] = 4,
    ACTIONS(681), 1,
      anon_sym_when,
    ACTIONS(683), 1,
      anon_sym_default,
    STATE(8), 1,
      sym__when_keyword,
    STATE(10), 2,
      sym_when,
      aux_sym_case_repeat1,
  [5432] = 2,
    ACTIONS(687), 1,
      anon_sym_,
    ACTIONS(685), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5442] = 3,
    ACTIONS(691), 1,
      anon_sym_LBRACE,
    ACTIONS(689), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(693), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [5454] = 4,
    ACTIONS(689), 1,
      sym__newline,
    ACTIONS(695), 1,
      aux_sym_content_token1,
    STATE(254), 1,
      aux_sym_content_repeat1,
    ACTIONS(693), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [5468] = 2,
    ACTIONS(700), 1,
      anon_sym_,
    ACTIONS(698), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5478] = 2,
    STATE(62), 1,
      sym_tag,
    ACTIONS(77), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5487] = 4,
    ACTIONS(702), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(704), 1,
      sym__newline,
    STATE(81), 1,
      sym__single_line_buf_code,
    STATE(338), 1,
      sym__un_delimited_javascript,
  [5500] = 2,
    ACTIONS(554), 2,
      sym__dedent,
      aux_sym_content_token1,
    ACTIONS(706), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [5509] = 2,
    STATE(30), 1,
      sym_tag,
    ACTIONS(77), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5518] = 2,
    ACTIONS(689), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(693), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [5527] = 2,
    STATE(43), 1,
      sym_tag,
    ACTIONS(77), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5536] = 2,
    STATE(92), 1,
      sym_tag,
    ACTIONS(172), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5545] = 2,
    ACTIONS(710), 1,
      anon_sym_,
    ACTIONS(708), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5554] = 3,
    ACTIONS(712), 1,
      anon_sym_EQ,
    ACTIONS(714), 1,
      anon_sym_,
    ACTIONS(716), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5565] = 4,
    ACTIONS(702), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(718), 1,
      sym__newline,
    STATE(41), 1,
      sym__single_line_buf_code,
    STATE(332), 1,
      sym__un_delimited_javascript,
  [5578] = 2,
    STATE(118), 1,
      sym_tag,
    ACTIONS(25), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5587] = 2,
    STATE(236), 1,
      sym_tag,
    ACTIONS(476), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5596] = 2,
    STATE(93), 1,
      sym_tag,
    ACTIONS(172), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5605] = 2,
    ACTIONS(720), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(722), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [5614] = 2,
    ACTIONS(724), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(726), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [5623] = 2,
    STATE(232), 1,
      sym_tag,
    ACTIONS(476), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5632] = 2,
    STATE(123), 1,
      sym_tag,
    ACTIONS(25), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5641] = 2,
    STATE(97), 1,
      sym_tag,
    ACTIONS(172), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5650] = 2,
    STATE(234), 1,
      sym_tag,
    ACTIONS(476), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5659] = 2,
    STATE(119), 1,
      sym_tag,
    ACTIONS(25), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5668] = 2,
    ACTIONS(728), 1,
      anon_sym_,
    ACTIONS(730), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5676] = 3,
    ACTIONS(702), 1,
      sym__un_delimited_javascript_line,
    STATE(84), 1,
      sym__single_line_buf_code,
    STATE(338), 1,
      sym__un_delimited_javascript,
  [5686] = 2,
    ACTIONS(732), 1,
      anon_sym_,
    ACTIONS(734), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5694] = 3,
    ACTIONS(702), 1,
      sym__un_delimited_javascript_line,
    STATE(110), 1,
      sym__single_line_buf_code,
    STATE(320), 1,
      sym__un_delimited_javascript,
  [5704] = 3,
    ACTIONS(736), 1,
      sym__un_delimited_javascript_line,
    STATE(46), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(88), 1,
      sym__multi_line_buf_code,
  [5714] = 3,
    ACTIONS(738), 1,
      anon_sym_,
    ACTIONS(740), 1,
      anon_sym_COMMA,
    ACTIONS(742), 1,
      anon_sym_RPAREN,
  [5724] = 3,
    ACTIONS(702), 1,
      sym__un_delimited_javascript_line,
    STATE(243), 1,
      sym__single_line_buf_code,
    STATE(331), 1,
      sym__un_delimited_javascript,
  [5734] = 3,
    ACTIONS(702), 1,
      sym__un_delimited_javascript_line,
    STATE(242), 1,
      sym__single_line_buf_code,
    STATE(331), 1,
      sym__un_delimited_javascript,
  [5744] = 2,
    ACTIONS(466), 1,
      anon_sym_,
    ACTIONS(468), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5752] = 3,
    ACTIONS(702), 1,
      sym__un_delimited_javascript_line,
    STATE(113), 1,
      sym__single_line_buf_code,
    STATE(320), 1,
      sym__un_delimited_javascript,
  [5762] = 2,
    ACTIONS(744), 1,
      anon_sym_,
    ACTIONS(746), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5770] = 3,
    ACTIONS(748), 1,
      anon_sym_SQUOTE,
    ACTIONS(750), 1,
      anon_sym_DQUOTE,
    STATE(291), 1,
      sym_quoted_javascript,
  [5780] = 1,
    ACTIONS(752), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5786] = 2,
    ACTIONS(754), 1,
      anon_sym_,
    ACTIONS(756), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5794] = 3,
    ACTIONS(758), 1,
      sym__un_delimited_javascript_line,
    STATE(25), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(31), 1,
      sym__multi_line_buf_code,
  [5804] = 2,
    ACTIONS(760), 1,
      anon_sym_,
    ACTIONS(762), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5812] = 2,
    ACTIONS(764), 1,
      anon_sym_,
    ACTIONS(766), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5820] = 2,
    ACTIONS(768), 1,
      anon_sym_,
    ACTIONS(770), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5828] = 2,
    ACTIONS(772), 1,
      anon_sym_,
    ACTIONS(774), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5836] = 2,
    ACTIONS(776), 1,
      anon_sym_,
    ACTIONS(778), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5844] = 2,
    ACTIONS(780), 1,
      anon_sym_,
    ACTIONS(782), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5852] = 2,
    ACTIONS(784), 1,
      anon_sym_,
    ACTIONS(786), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5860] = 2,
    ACTIONS(788), 1,
      anon_sym_,
    ACTIONS(790), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5868] = 3,
    ACTIONS(738), 1,
      anon_sym_,
    ACTIONS(740), 1,
      anon_sym_COMMA,
    ACTIONS(792), 1,
      anon_sym_RPAREN,
  [5878] = 1,
    ACTIONS(794), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [5884] = 3,
    ACTIONS(702), 1,
      sym__un_delimited_javascript_line,
    STATE(85), 1,
      sym__single_line_buf_code,
    STATE(338), 1,
      sym__un_delimited_javascript,
  [5894] = 3,
    ACTIONS(702), 1,
      sym__un_delimited_javascript_line,
    STATE(45), 1,
      sym__single_line_buf_code,
    STATE(332), 1,
      sym__un_delimited_javascript,
  [5904] = 3,
    ACTIONS(702), 1,
      sym__un_delimited_javascript_line,
    STATE(40), 1,
      sym__single_line_buf_code,
    STATE(332), 1,
      sym__un_delimited_javascript,
  [5914] = 2,
    ACTIONS(796), 1,
      anon_sym_,
    ACTIONS(798), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5922] = 2,
    ACTIONS(800), 1,
      anon_sym_DQUOTE,
    ACTIONS(802), 1,
      aux_sym_quoted_javascript_token2,
  [5929] = 2,
    ACTIONS(804), 1,
      sym__un_delimited_javascript_line,
    STATE(249), 1,
      sym__un_delimited_javascript,
  [5936] = 2,
    ACTIONS(800), 1,
      anon_sym_SQUOTE,
    ACTIONS(806), 1,
      aux_sym_quoted_javascript_token1,
  [5943] = 2,
    ACTIONS(808), 1,
      sym__comment_content,
    ACTIONS(810), 1,
      sym__newline,
  [5950] = 2,
    ACTIONS(812), 1,
      anon_sym_SQUOTE,
    ACTIONS(814), 1,
      aux_sym_quoted_javascript_token1,
  [5957] = 2,
    ACTIONS(738), 1,
      anon_sym_,
    ACTIONS(740), 1,
      anon_sym_COMMA,
  [5964] = 2,
    ACTIONS(812), 1,
      anon_sym_DQUOTE,
    ACTIONS(816), 1,
      aux_sym_quoted_javascript_token2,
  [5971] = 1,
    ACTIONS(818), 1,
      sym__indent,
  [5975] = 1,
    ACTIONS(820), 1,
      ts_builtin_sym_end,
  [5979] = 1,
    ACTIONS(822), 1,
      anon_sym_RBRACE,
  [5983] = 1,
    ACTIONS(824), 1,
      sym__indent,
  [5987] = 1,
    ACTIONS(826), 1,
      sym__newline,
  [5991] = 1,
    ACTIONS(828), 1,
      anon_sym_SQUOTE,
  [5995] = 1,
    ACTIONS(828), 1,
      anon_sym_DQUOTE,
  [5999] = 1,
    ACTIONS(830), 1,
      sym__newline,
  [6003] = 1,
    ACTIONS(832), 1,
      sym__newline,
  [6007] = 1,
    ACTIONS(834), 1,
      sym__newline,
  [6011] = 1,
    ACTIONS(836), 1,
      aux_sym_unbuffered_code_token1,
  [6015] = 1,
    ACTIONS(838), 1,
      sym__newline,
  [6019] = 1,
    ACTIONS(840), 1,
      anon_sym_SQUOTE,
  [6023] = 1,
    ACTIONS(842), 1,
      sym__indent,
  [6027] = 1,
    ACTIONS(840), 1,
      anon_sym_DQUOTE,
  [6031] = 1,
    ACTIONS(844), 1,
      sym__delimited_javascript,
  [6035] = 1,
    ACTIONS(846), 1,
      sym__delimited_javascript,
  [6039] = 1,
    ACTIONS(822), 1,
      anon_sym_RBRACE_RBRACE,
  [6043] = 1,
    ACTIONS(848), 1,
      aux_sym_unbuffered_code_token1,
  [6047] = 1,
    ACTIONS(850), 1,
      sym__newline,
  [6051] = 1,
    ACTIONS(852), 1,
      sym__newline,
  [6055] = 1,
    ACTIONS(854), 1,
      aux_sym__attribute_token1,
  [6059] = 1,
    ACTIONS(856), 1,
      aux_sym__when_keyword_token1,
  [6063] = 1,
    ACTIONS(858), 1,
      sym__un_delimited_javascript_line,
  [6067] = 1,
    ACTIONS(860), 1,
      sym__indent,
  [6071] = 1,
    ACTIONS(752), 1,
      sym__newline,
  [6075] = 1,
    ACTIONS(862), 1,
      sym__newline,
  [6079] = 1,
    ACTIONS(864), 1,
      sym__indent,
  [6083] = 1,
    ACTIONS(866), 1,
      sym__indent,
  [6087] = 1,
    ACTIONS(868), 1,
      sym__indent,
  [6091] = 1,
    ACTIONS(870), 1,
      sym__newline,
  [6095] = 1,
    ACTIONS(872), 1,
      sym__newline,
  [6099] = 1,
    ACTIONS(874), 1,
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
  [SMALL_STATE(11)] = 348,
  [SMALL_STATE(12)] = 381,
  [SMALL_STATE(13)] = 412,
  [SMALL_STATE(14)] = 441,
  [SMALL_STATE(15)] = 472,
  [SMALL_STATE(16)] = 501,
  [SMALL_STATE(17)] = 530,
  [SMALL_STATE(18)] = 559,
  [SMALL_STATE(19)] = 590,
  [SMALL_STATE(20)] = 625,
  [SMALL_STATE(21)] = 654,
  [SMALL_STATE(22)] = 683,
  [SMALL_STATE(23)] = 716,
  [SMALL_STATE(24)] = 741,
  [SMALL_STATE(25)] = 776,
  [SMALL_STATE(26)] = 805,
  [SMALL_STATE(27)] = 831,
  [SMALL_STATE(28)] = 855,
  [SMALL_STATE(29)] = 883,
  [SMALL_STATE(30)] = 910,
  [SMALL_STATE(31)] = 933,
  [SMALL_STATE(32)] = 958,
  [SMALL_STATE(33)] = 987,
  [SMALL_STATE(34)] = 1016,
  [SMALL_STATE(35)] = 1043,
  [SMALL_STATE(36)] = 1070,
  [SMALL_STATE(37)] = 1097,
  [SMALL_STATE(38)] = 1120,
  [SMALL_STATE(39)] = 1147,
  [SMALL_STATE(40)] = 1170,
  [SMALL_STATE(41)] = 1193,
  [SMALL_STATE(42)] = 1218,
  [SMALL_STATE(43)] = 1241,
  [SMALL_STATE(44)] = 1264,
  [SMALL_STATE(45)] = 1289,
  [SMALL_STATE(46)] = 1312,
  [SMALL_STATE(47)] = 1339,
  [SMALL_STATE(48)] = 1362,
  [SMALL_STATE(49)] = 1385,
  [SMALL_STATE(50)] = 1408,
  [SMALL_STATE(51)] = 1437,
  [SMALL_STATE(52)] = 1466,
  [SMALL_STATE(53)] = 1489,
  [SMALL_STATE(54)] = 1512,
  [SMALL_STATE(55)] = 1535,
  [SMALL_STATE(56)] = 1562,
  [SMALL_STATE(57)] = 1585,
  [SMALL_STATE(58)] = 1612,
  [SMALL_STATE(59)] = 1635,
  [SMALL_STATE(60)] = 1658,
  [SMALL_STATE(61)] = 1685,
  [SMALL_STATE(62)] = 1708,
  [SMALL_STATE(63)] = 1731,
  [SMALL_STATE(64)] = 1754,
  [SMALL_STATE(65)] = 1777,
  [SMALL_STATE(66)] = 1800,
  [SMALL_STATE(67)] = 1826,
  [SMALL_STATE(68)] = 1850,
  [SMALL_STATE(69)] = 1876,
  [SMALL_STATE(70)] = 1898,
  [SMALL_STATE(71)] = 1920,
  [SMALL_STATE(72)] = 1946,
  [SMALL_STATE(73)] = 1970,
  [SMALL_STATE(74)] = 1992,
  [SMALL_STATE(75)] = 2020,
  [SMALL_STATE(76)] = 2044,
  [SMALL_STATE(77)] = 2070,
  [SMALL_STATE(78)] = 2092,
  [SMALL_STATE(79)] = 2118,
  [SMALL_STATE(80)] = 2144,
  [SMALL_STATE(81)] = 2165,
  [SMALL_STATE(82)] = 2188,
  [SMALL_STATE(83)] = 2209,
  [SMALL_STATE(84)] = 2230,
  [SMALL_STATE(85)] = 2251,
  [SMALL_STATE(86)] = 2272,
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
  [SMALL_STATE(99)] = 2553,
  [SMALL_STATE(100)] = 2574,
  [SMALL_STATE(101)] = 2595,
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
  [SMALL_STATE(156)] = 3939,
  [SMALL_STATE(157)] = 3963,
  [SMALL_STATE(158)] = 3987,
  [SMALL_STATE(159)] = 4005,
  [SMALL_STATE(160)] = 4029,
  [SMALL_STATE(161)] = 4053,
  [SMALL_STATE(162)] = 4068,
  [SMALL_STATE(163)] = 4091,
  [SMALL_STATE(164)] = 4114,
  [SMALL_STATE(165)] = 4129,
  [SMALL_STATE(166)] = 4144,
  [SMALL_STATE(167)] = 4167,
  [SMALL_STATE(168)] = 4192,
  [SMALL_STATE(169)] = 4207,
  [SMALL_STATE(170)] = 4230,
  [SMALL_STATE(171)] = 4253,
  [SMALL_STATE(172)] = 4273,
  [SMALL_STATE(173)] = 4293,
  [SMALL_STATE(174)] = 4313,
  [SMALL_STATE(175)] = 4333,
  [SMALL_STATE(176)] = 4353,
  [SMALL_STATE(177)] = 4373,
  [SMALL_STATE(178)] = 4393,
  [SMALL_STATE(179)] = 4413,
  [SMALL_STATE(180)] = 4433,
  [SMALL_STATE(181)] = 4453,
  [SMALL_STATE(182)] = 4473,
  [SMALL_STATE(183)] = 4493,
  [SMALL_STATE(184)] = 4507,
  [SMALL_STATE(185)] = 4527,
  [SMALL_STATE(186)] = 4547,
  [SMALL_STATE(187)] = 4561,
  [SMALL_STATE(188)] = 4581,
  [SMALL_STATE(189)] = 4595,
  [SMALL_STATE(190)] = 4609,
  [SMALL_STATE(191)] = 4629,
  [SMALL_STATE(192)] = 4649,
  [SMALL_STATE(193)] = 4669,
  [SMALL_STATE(194)] = 4683,
  [SMALL_STATE(195)] = 4703,
  [SMALL_STATE(196)] = 4717,
  [SMALL_STATE(197)] = 4737,
  [SMALL_STATE(198)] = 4757,
  [SMALL_STATE(199)] = 4777,
  [SMALL_STATE(200)] = 4797,
  [SMALL_STATE(201)] = 4817,
  [SMALL_STATE(202)] = 4837,
  [SMALL_STATE(203)] = 4857,
  [SMALL_STATE(204)] = 4874,
  [SMALL_STATE(205)] = 4885,
  [SMALL_STATE(206)] = 4898,
  [SMALL_STATE(207)] = 4913,
  [SMALL_STATE(208)] = 4930,
  [SMALL_STATE(209)] = 4943,
  [SMALL_STATE(210)] = 4954,
  [SMALL_STATE(211)] = 4971,
  [SMALL_STATE(212)] = 4988,
  [SMALL_STATE(213)] = 4999,
  [SMALL_STATE(214)] = 5014,
  [SMALL_STATE(215)] = 5027,
  [SMALL_STATE(216)] = 5044,
  [SMALL_STATE(217)] = 5057,
  [SMALL_STATE(218)] = 5074,
  [SMALL_STATE(219)] = 5085,
  [SMALL_STATE(220)] = 5102,
  [SMALL_STATE(221)] = 5119,
  [SMALL_STATE(222)] = 5136,
  [SMALL_STATE(223)] = 5153,
  [SMALL_STATE(224)] = 5170,
  [SMALL_STATE(225)] = 5183,
  [SMALL_STATE(226)] = 5200,
  [SMALL_STATE(227)] = 5208,
  [SMALL_STATE(228)] = 5216,
  [SMALL_STATE(229)] = 5224,
  [SMALL_STATE(230)] = 5232,
  [SMALL_STATE(231)] = 5240,
  [SMALL_STATE(232)] = 5248,
  [SMALL_STATE(233)] = 5256,
  [SMALL_STATE(234)] = 5264,
  [SMALL_STATE(235)] = 5272,
  [SMALL_STATE(236)] = 5280,
  [SMALL_STATE(237)] = 5288,
  [SMALL_STATE(238)] = 5296,
  [SMALL_STATE(239)] = 5304,
  [SMALL_STATE(240)] = 5314,
  [SMALL_STATE(241)] = 5322,
  [SMALL_STATE(242)] = 5330,
  [SMALL_STATE(243)] = 5338,
  [SMALL_STATE(244)] = 5346,
  [SMALL_STATE(245)] = 5354,
  [SMALL_STATE(246)] = 5364,
  [SMALL_STATE(247)] = 5374,
  [SMALL_STATE(248)] = 5384,
  [SMALL_STATE(249)] = 5398,
  [SMALL_STATE(250)] = 5408,
  [SMALL_STATE(251)] = 5418,
  [SMALL_STATE(252)] = 5432,
  [SMALL_STATE(253)] = 5442,
  [SMALL_STATE(254)] = 5454,
  [SMALL_STATE(255)] = 5468,
  [SMALL_STATE(256)] = 5478,
  [SMALL_STATE(257)] = 5487,
  [SMALL_STATE(258)] = 5500,
  [SMALL_STATE(259)] = 5509,
  [SMALL_STATE(260)] = 5518,
  [SMALL_STATE(261)] = 5527,
  [SMALL_STATE(262)] = 5536,
  [SMALL_STATE(263)] = 5545,
  [SMALL_STATE(264)] = 5554,
  [SMALL_STATE(265)] = 5565,
  [SMALL_STATE(266)] = 5578,
  [SMALL_STATE(267)] = 5587,
  [SMALL_STATE(268)] = 5596,
  [SMALL_STATE(269)] = 5605,
  [SMALL_STATE(270)] = 5614,
  [SMALL_STATE(271)] = 5623,
  [SMALL_STATE(272)] = 5632,
  [SMALL_STATE(273)] = 5641,
  [SMALL_STATE(274)] = 5650,
  [SMALL_STATE(275)] = 5659,
  [SMALL_STATE(276)] = 5668,
  [SMALL_STATE(277)] = 5676,
  [SMALL_STATE(278)] = 5686,
  [SMALL_STATE(279)] = 5694,
  [SMALL_STATE(280)] = 5704,
  [SMALL_STATE(281)] = 5714,
  [SMALL_STATE(282)] = 5724,
  [SMALL_STATE(283)] = 5734,
  [SMALL_STATE(284)] = 5744,
  [SMALL_STATE(285)] = 5752,
  [SMALL_STATE(286)] = 5762,
  [SMALL_STATE(287)] = 5770,
  [SMALL_STATE(288)] = 5780,
  [SMALL_STATE(289)] = 5786,
  [SMALL_STATE(290)] = 5794,
  [SMALL_STATE(291)] = 5804,
  [SMALL_STATE(292)] = 5812,
  [SMALL_STATE(293)] = 5820,
  [SMALL_STATE(294)] = 5828,
  [SMALL_STATE(295)] = 5836,
  [SMALL_STATE(296)] = 5844,
  [SMALL_STATE(297)] = 5852,
  [SMALL_STATE(298)] = 5860,
  [SMALL_STATE(299)] = 5868,
  [SMALL_STATE(300)] = 5878,
  [SMALL_STATE(301)] = 5884,
  [SMALL_STATE(302)] = 5894,
  [SMALL_STATE(303)] = 5904,
  [SMALL_STATE(304)] = 5914,
  [SMALL_STATE(305)] = 5922,
  [SMALL_STATE(306)] = 5929,
  [SMALL_STATE(307)] = 5936,
  [SMALL_STATE(308)] = 5943,
  [SMALL_STATE(309)] = 5950,
  [SMALL_STATE(310)] = 5957,
  [SMALL_STATE(311)] = 5964,
  [SMALL_STATE(312)] = 5971,
  [SMALL_STATE(313)] = 5975,
  [SMALL_STATE(314)] = 5979,
  [SMALL_STATE(315)] = 5983,
  [SMALL_STATE(316)] = 5987,
  [SMALL_STATE(317)] = 5991,
  [SMALL_STATE(318)] = 5995,
  [SMALL_STATE(319)] = 5999,
  [SMALL_STATE(320)] = 6003,
  [SMALL_STATE(321)] = 6007,
  [SMALL_STATE(322)] = 6011,
  [SMALL_STATE(323)] = 6015,
  [SMALL_STATE(324)] = 6019,
  [SMALL_STATE(325)] = 6023,
  [SMALL_STATE(326)] = 6027,
  [SMALL_STATE(327)] = 6031,
  [SMALL_STATE(328)] = 6035,
  [SMALL_STATE(329)] = 6039,
  [SMALL_STATE(330)] = 6043,
  [SMALL_STATE(331)] = 6047,
  [SMALL_STATE(332)] = 6051,
  [SMALL_STATE(333)] = 6055,
  [SMALL_STATE(334)] = 6059,
  [SMALL_STATE(335)] = 6063,
  [SMALL_STATE(336)] = 6067,
  [SMALL_STATE(337)] = 6071,
  [SMALL_STATE(338)] = 6075,
  [SMALL_STATE(339)] = 6079,
  [SMALL_STATE(340)] = 6083,
  [SMALL_STATE(341)] = 6087,
  [SMALL_STATE(342)] = 6091,
  [SMALL_STATE(343)] = 6095,
  [SMALL_STATE(344)] = 6099,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(300),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(174),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(306),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(306),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(239),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(335),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(279),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(285),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(308),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(132),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(132),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(330),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(199),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(128),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(128),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 5, .production_id = 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 5, .production_id = 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(334),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(8),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(128),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(128),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(27),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(175),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(126),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(126),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_keyword, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_keyword, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 3),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 3),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(77),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 5),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 5),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 7),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 3),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffered_code, 2),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffered_code, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 3),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unescaped_buffered_code, 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unescaped_buffered_code, 2),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 2),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 5),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 5),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 5, .production_id = 4),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 5, .production_id = 4),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 4),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 4),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 5),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 5),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 6),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 6),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(323),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 2),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 3),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 3),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(132),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(132),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 6),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 6),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 2),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 2),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 1),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 1),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 2),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 2),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(252),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(263),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [502] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(150),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(185),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(130),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(206),
  [548] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(328),
  [551] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(327),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [590] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(206),
  [593] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(328),
  [596] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(327),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 1),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 1),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [663] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2), SHIFT_REPEAT(333),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [674] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(130),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_name, 1),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [695] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(206),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 2),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 2),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_angular_attribute_name, 1),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_angular_attribute_name, 1),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 1),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 1),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 3),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 3),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 3),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 3),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 3),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 3),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 5),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 5),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 3),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 3),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__un_delimited_javascript, 1),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 3),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 3),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ternary_attribute_value, 2),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ternary_attribute_value, 2),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_attribute_value, 2),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable_attribute_value, 2),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 2),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 2),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_attribute_value, 2),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__object_attribute_value, 2),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_attribute_value, 2),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__template_attribute_value, 2),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_attribute_value, 2),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__array_attribute_value, 2),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_attribute_value, 2),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_attribute_value, 2),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [820] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
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
