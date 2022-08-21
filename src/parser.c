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
#define STATE_COUNT 339
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 96
#define ALIAS_COUNT 2
#define TOKEN_COUNT 52
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
  anon_sym_POUND_LBRACE = 41,
  anon_sym_RBRACE = 42,
  anon_sym_LBRACE_LBRACE = 43,
  anon_sym_RBRACE_RBRACE = 44,
  sym__delimited_javascript = 45,
  sym__un_delimited_javascript_line = 46,
  anon_sym_DASH = 47,
  aux_sym_unbuffered_code_token1 = 48,
  sym__newline = 49,
  sym__indent = 50,
  sym__dedent = 51,
  sym_source_file = 52,
  sym_doctype = 53,
  sym_pipe = 54,
  sym_conditional = 55,
  sym_case = 56,
  sym__when_content = 57,
  sym__when_keyword = 58,
  sym_when = 59,
  sym_unescaped_buffered_code = 60,
  sym_buffered_code = 61,
  sym_tag = 62,
  sym__content_after_dot = 63,
  sym_attributes = 64,
  sym_attribute = 65,
  sym__ternary_attribute_value = 66,
  sym__string_attribute_value = 67,
  sym__variable_attribute_value = 68,
  sym__object_attribute_value = 69,
  sym__template_attribute_value = 70,
  sym__array_attribute_value = 71,
  sym__attribute = 72,
  sym__angular_attribute = 73,
  sym_children = 74,
  sym__children_choice = 75,
  sym_comment = 76,
  sym_angular_attribute_name = 77,
  sym_attribute_name = 78,
  sym_quoted_javascript = 79,
  sym_quoted_attribute_value = 80,
  aux_sym__content_or_javascript = 81,
  sym__un_delimited_javascript = 82,
  aux_sym__un_delimited_javascript_multiline = 83,
  sym__single_line_buf_code = 84,
  sym__multi_line_buf_code = 85,
  sym_unbuffered_code = 86,
  aux_sym_source_file_repeat1 = 87,
  aux_sym_conditional_repeat1 = 88,
  aux_sym_case_repeat1 = 89,
  aux_sym_tag_repeat1 = 90,
  aux_sym__content_after_dot_repeat1 = 91,
  aux_sym_attributes_repeat1 = 92,
  aux_sym__attribute_repeat1 = 93,
  aux_sym_children_repeat1 = 94,
  aux_sym_comment_repeat1 = 95,
  alias_sym_attribute_modifier = 96,
  alias_sym_attribute_value = 97,
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
      if (eof) ADVANCE(151);
      if (lookahead == '!') ADVANCE(79);
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == '#') ADVANCE(132);
      if (lookahead == '\'') ADVANCE(601);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == ')') ADVANCE(201);
      if (lookahead == '*') ADVANCE(142);
      if (lookahead == ',') ADVANCE(200);
      if (lookahead == '-') ADVANCE(638);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '=') ADVANCE(193);
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
      if (lookahead == '{') ADVANCE(133);
      if (lookahead == '|') ADVANCE(159);
      if (lookahead == '}') ADVANCE(622);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"') ADVANCE(202);
      if (lookahead == '`') ADVANCE(495);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\'') ADVANCE(203);
      if (lookahead == '`') ADVANCE(496);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(204);
      if (lookahead == '`') ADVANCE(500);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == ']') ADVANCE(502);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(63);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == ']') ADVANCE(503);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(65);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == ']') ADVANCE(505);
      if (lookahead == '`') ADVANCE(207);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(92);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(208);
      if (lookahead == ']') ADVANCE(506);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(135);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(209);
      if (lookahead == ']') ADVANCE(507);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(136);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(210);
      if (lookahead == ']') ADVANCE(508);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(137);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(211);
      if (lookahead == ']') ADVANCE(509);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(139);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == ',') ADVANCE(11);
      if (lookahead == '}') ADVANCE(482);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(63);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '\'') ADVANCE(213);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(483);
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
      if (lookahead == '`') ADVANCE(214);
      if (lookahead == '}') ADVANCE(484);
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
          lookahead == '\'') ADVANCE(215);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '}') ADVANCE(485);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(135);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(216);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(486);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(136);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(217);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(487);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(137);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(218);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(488);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(139);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == ',') ADVANCE(11);
      if (lookahead == '}') ADVANCE(482);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(63);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(213);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(483);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(65);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '`') ADVANCE(214);
      if (lookahead == '}') ADVANCE(484);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(92);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(215);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '}') ADVANCE(485);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(135);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(216);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(486);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(136);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(217);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(487);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(137);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(218);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(488);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(139);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"') ADVANCE(219);
      if (lookahead == '?') ADVANCE(42);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\'') ADVANCE(220);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead == '`') ADVANCE(221);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(222);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(223);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(224);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(225);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '"') ADVANCE(226);
      if (lookahead == ')') ADVANCE(444);
      if (lookahead == '`') ADVANCE(492);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(227);
      if (lookahead == ')') ADVANCE(445);
      if (lookahead == '`') ADVANCE(493);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(228);
      if (lookahead == ')') ADVANCE(446);
      if (lookahead == '`') ADVANCE(494);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == ')') ADVANCE(467);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(230);
      if (lookahead == ')') ADVANCE(468);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead == '`') ADVANCE(231);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(232);
      if (lookahead == ')') ADVANCE(478);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(233);
      if (lookahead == ')') ADVANCE(479);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(234);
      if (lookahead == ')') ADVANCE(480);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(235);
      if (lookahead == ')') ADVANCE(481);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(415);
      if (lookahead == '"') ADVANCE(236);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(63);
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(415);
      if (lookahead == '\'') ADVANCE(238);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(65);
      if (lookahead != 0) ADVANCE(238);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(415);
      if (lookahead == '`') ADVANCE(240);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(92);
      if (lookahead != 0) ADVANCE(240);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(415);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(242);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(135);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(415);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(244);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(136);
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(415);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(246);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(137);
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(415);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(248);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(139);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 49:
      if (lookahead == '\n') SKIP(49)
      if (lookahead == '#') ADVANCE(131);
      if (lookahead == '{') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(609);
      if (lookahead != 0) ADVANCE(610);
      END_STATE();
    case 50:
      if (lookahead == '\n') SKIP(50)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(634);
      if (lookahead != 0) ADVANCE(637);
      END_STATE();
    case 51:
      if (lookahead == '\n') SKIP(51)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(626);
      END_STATE();
    case 52:
      if (lookahead == '\n') SKIP(52)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(186);
      END_STATE();
    case 53:
      if (lookahead == ' ') ADVANCE(196);
      if (lookahead == '!') ADVANCE(79);
      if (lookahead == '#') ADVANCE(141);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == ')') ADVANCE(201);
      if (lookahead == ',') ADVANCE(200);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '=') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(53)
      END_STATE();
    case 54:
      if (lookahead == ' ') ADVANCE(196);
      if (lookahead == '!') ADVANCE(79);
      if (lookahead == ')') ADVANCE(201);
      if (lookahead == ',') ADVANCE(200);
      if (lookahead == '.') ADVANCE(197);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '=') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(54)
      END_STATE();
    case 55:
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == ',') ADVANCE(55);
      if (lookahead == '}') ADVANCE(489);
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
      if (lookahead == '}') ADVANCE(490);
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
          lookahead == '\r') ADVANCE(612);
      if (lookahead != 0) ADVANCE(620);
      END_STATE();
    case 58:
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '"') ADVANCE(606);
      if (lookahead == '\'') ADVANCE(602);
      if (lookahead == '?') ADVANCE(466);
      if (lookahead == '[') ADVANCE(457);
      if (lookahead == '`') ADVANCE(472);
      if (lookahead == '{') ADVANCE(458);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(464);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 59:
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '"') ADVANCE(606);
      if (lookahead == '\'') ADVANCE(602);
      if (lookahead == '?') ADVANCE(470);
      if (lookahead == '[') ADVANCE(457);
      if (lookahead == '`') ADVANCE(472);
      if (lookahead == '{') ADVANCE(458);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(464);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 60:
      if (lookahead == '!') ADVANCE(79);
      if (lookahead == '#') ADVANCE(141);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '=') ADVANCE(193);
      if (lookahead == '|') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(60)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 61:
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == '\'') ADVANCE(601);
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
      if (lookahead == '"') ADVANCE(605);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(607);
      if (lookahead != 0) ADVANCE(608);
      END_STATE();
    case 63:
      if (lookahead == '"') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 64:
      if (lookahead == '\'') ADVANCE(601);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(603);
      if (lookahead != 0) ADVANCE(604);
      END_STATE();
    case 65:
      if (lookahead == '\'') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 66:
      if (lookahead == '(') ADVANCE(143);
      if (lookahead == ')') ADVANCE(201);
      if (lookahead == '*') ADVANCE(142);
      if (lookahead == '[') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(66)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 67:
      if (lookahead == ')') ADVANCE(599);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      if (lookahead == ')') ADVANCE(476);
      if (lookahead == '?') ADVANCE(69);
      if (lookahead == '`') ADVANCE(419);
      if (lookahead != 0) ADVANCE(428);
      END_STATE();
    case 69:
      if (lookahead == ')') ADVANCE(476);
      if (lookahead == '`') ADVANCE(498);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 70:
      if (lookahead == ')') ADVANCE(475);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 71:
      if (lookahead == ')') ADVANCE(475);
      if (lookahead == '?') ADVANCE(461);
      if (lookahead == ' ' ||
          lookahead == '(') ADVANCE(70);
      if (lookahead != 0) ADVANCE(456);
      END_STATE();
    case 72:
      if (lookahead == ')') ADVANCE(474);
      if (lookahead == '?') ADVANCE(68);
      if (lookahead == '`') ADVANCE(497);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 73:
      if (lookahead == ')') ADVANCE(443);
      if (lookahead == '?') ADVANCE(74);
      if (lookahead != 0) ADVANCE(419);
      END_STATE();
    case 74:
      if (lookahead == ')') ADVANCE(443);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 75:
      if (lookahead == ',') ADVANCE(55);
      if (lookahead == '}') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(75);
      END_STATE();
    case 76:
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '?') ADVANCE(77);
      if (lookahead == '}') ADVANCE(490);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(85);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 77:
      if (lookahead == ',') ADVANCE(424);
      if (lookahead == '?') ADVANCE(75);
      if (lookahead == '}') ADVANCE(424);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(424);
      END_STATE();
    case 78:
      if (lookahead == '/') ADVANCE(511);
      END_STATE();
    case 79:
      if (lookahead == '=') ADVANCE(190);
      END_STATE();
    case 80:
      if (lookahead == '?') ADVANCE(88);
      if (lookahead == ']') ADVANCE(415);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(422);
      END_STATE();
    case 81:
      if (lookahead == '?') ADVANCE(469);
      if (lookahead == '`') ADVANCE(471);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(84);
      if (lookahead != 0) ADVANCE(472);
      END_STATE();
    case 82:
      if (lookahead == '?') ADVANCE(473);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(85);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 83:
      if (lookahead == '?') ADVANCE(460);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(85);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 84:
      if (lookahead == '?') ADVANCE(91);
      if (lookahead == '`') ADVANCE(499);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 85:
      if (lookahead == '?') ADVANCE(145);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 86:
      if (lookahead == '?') ADVANCE(80);
      if (lookahead == ']') ADVANCE(504);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(85);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 87:
      if (lookahead == ']') ADVANCE(501);
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
      if (lookahead == ']') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[') ADVANCE(88);
      END_STATE();
    case 89:
      if (lookahead == ']') ADVANCE(598);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 90:
      if (lookahead == '`') ADVANCE(491);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 91:
      if (lookahead == '`') ADVANCE(415);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(90);
      if (lookahead != 0) ADVANCE(427);
      END_STATE();
    case 92:
      if (lookahead == '`') ADVANCE(437);
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
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(152);
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
      if (lookahead == 'f') ADVANCE(162);
      END_STATE();
    case 104:
      if (lookahead == 'f') ADVANCE(166);
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
      if (lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(156);
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
      if (lookahead == 'n') ADVANCE(182);
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
      if (lookahead == 's') ADVANCE(169);
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
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(187);
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
      if (lookahead == '{') ADVANCE(621);
      END_STATE();
    case 132:
      if (lookahead == '{') ADVANCE(621);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(595);
      END_STATE();
    case 133:
      if (lookahead == '{') ADVANCE(623);
      END_STATE();
    case 134:
      if (lookahead == '}') ADVANCE(624);
      END_STATE();
    case 135:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(135);
      END_STATE();
    case 136:
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    case 137:
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 138:
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 139:
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 140:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(592);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      END_STATE();
    case 141:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(595);
      END_STATE();
    case 142:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(600);
      END_STATE();
    case 143:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 144:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 145:
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '?') ADVANCE(415);
      END_STATE();
    case 146:
      if (eof) ADVANCE(151);
      if (lookahead == '\n') SKIP(146)
      if (lookahead == '!') ADVANCE(630);
      if (lookahead == '#') ADVANCE(636);
      if (lookahead == '-') ADVANCE(639);
      if (lookahead == '.') ADVANCE(635);
      if (lookahead == '/') ADVANCE(629);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == 'c') ADVANCE(516);
      if (lookahead == 'd') ADVANCE(531);
      if (lookahead == 'e') ADVANCE(551);
      if (lookahead == 'i') ADVANCE(539);
      if (lookahead == 'u') ADVANCE(556);
      if (lookahead == 'w') ADVANCE(543);
      if (lookahead == '|') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0) ADVANCE(637);
      END_STATE();
    case 147:
      if (eof) ADVANCE(151);
      if (lookahead == '\n') SKIP(147)
      if (lookahead == '!') ADVANCE(630);
      if (lookahead == '#') ADVANCE(636);
      if (lookahead == '-') ADVANCE(639);
      if (lookahead == '.') ADVANCE(635);
      if (lookahead == '/') ADVANCE(629);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == 'c') ADVANCE(516);
      if (lookahead == 'd') ADVANCE(559);
      if (lookahead == 'e') ADVANCE(551);
      if (lookahead == 'i') ADVANCE(539);
      if (lookahead == 'u') ADVANCE(556);
      if (lookahead == '|') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0) ADVANCE(637);
      END_STATE();
    case 148:
      if (eof) ADVANCE(151);
      if (lookahead == ' ') SKIP(148)
      if (lookahead == '!') ADVANCE(614);
      if (lookahead == '#') ADVANCE(619);
      if (lookahead == '-') ADVANCE(640);
      if (lookahead == '.') ADVANCE(618);
      if (lookahead == '/') ADVANCE(613);
      if (lookahead == '=') ADVANCE(195);
      if (lookahead == 'c') ADVANCE(518);
      if (lookahead == 'd') ADVANCE(560);
      if (lookahead == 'e') ADVANCE(552);
      if (lookahead == 'i') ADVANCE(542);
      if (lookahead == 'u') ADVANCE(557);
      if (lookahead == '|') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      if (lookahead != 0) ADVANCE(620);
      END_STATE();
    case 149:
      if (eof) ADVANCE(151);
      if (lookahead == '!') ADVANCE(79);
      if (lookahead == '#') ADVANCE(141);
      if (lookahead == '-') ADVANCE(638);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '=') ADVANCE(193);
      if (lookahead == 'c') ADVANCE(514);
      if (lookahead == 'd') ADVANCE(528);
      if (lookahead == 'e') ADVANCE(550);
      if (lookahead == 'i') ADVANCE(538);
      if (lookahead == 'u') ADVANCE(555);
      if (lookahead == 'w') ADVANCE(544);
      if (lookahead == '|') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(149)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 150:
      if (eof) ADVANCE(151);
      if (lookahead == '!') ADVANCE(79);
      if (lookahead == '#') ADVANCE(141);
      if (lookahead == '-') ADVANCE(638);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead == '=') ADVANCE(193);
      if (lookahead == 'c') ADVANCE(514);
      if (lookahead == 'd') ADVANCE(558);
      if (lookahead == 'e') ADVANCE(550);
      if (lookahead == 'i') ADVANCE(538);
      if (lookahead == 'u') ADVANCE(555);
      if (lookahead == '|') ADVANCE(159);
      if (lookahead == '}') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(150)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_doctype);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_strict);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(632);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(616);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(107);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__when_keyword_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(186);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__when_keyword_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(592);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"') ADVANCE(202);
      if (lookahead == '`') ADVANCE(495);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\'') ADVANCE(203);
      if (lookahead == '`') ADVANCE(496);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(204);
      if (lookahead == '`') ADVANCE(500);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '"') ADVANCE(205);
      if (lookahead == ']') ADVANCE(502);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(63);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == ']') ADVANCE(503);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(65);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == ']') ADVANCE(505);
      if (lookahead == '`') ADVANCE(207);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(92);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(208);
      if (lookahead == ']') ADVANCE(506);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(135);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(209);
      if (lookahead == ']') ADVANCE(507);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(136);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(210);
      if (lookahead == ']') ADVANCE(508);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(137);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(211);
      if (lookahead == ']') ADVANCE(509);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(139);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == ',') ADVANCE(11);
      if (lookahead == '}') ADVANCE(482);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(63);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(213);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(483);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(65);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '`') ADVANCE(214);
      if (lookahead == '}') ADVANCE(484);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(92);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(215);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '}') ADVANCE(485);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(135);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(216);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(486);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(136);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(217);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(487);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(137);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(218);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(488);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(139);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"') ADVANCE(219);
      if (lookahead == '?') ADVANCE(42);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\'') ADVANCE(220);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead == '`') ADVANCE(221);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(222);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(223);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(224);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(225);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '"') ADVANCE(226);
      if (lookahead == ')') ADVANCE(444);
      if (lookahead == '`') ADVANCE(492);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(227);
      if (lookahead == ')') ADVANCE(445);
      if (lookahead == '`') ADVANCE(493);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(228);
      if (lookahead == ')') ADVANCE(446);
      if (lookahead == '`') ADVANCE(494);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == ')') ADVANCE(467);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(230);
      if (lookahead == ')') ADVANCE(468);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead == '`') ADVANCE(231);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(232);
      if (lookahead == ')') ADVANCE(478);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(233);
      if (lookahead == ')') ADVANCE(479);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(234);
      if (lookahead == ')') ADVANCE(480);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(235);
      if (lookahead == ')') ADVANCE(481);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(415);
      if (lookahead == ' ') ADVANCE(236);
      if (lookahead == '"') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(242);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '?') ADVANCE(309);
      if (lookahead == '`') ADVANCE(244);
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(415);
      if (lookahead == ' ') ADVANCE(236);
      if (lookahead == '"') ADVANCE(236);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '?') ADVANCE(309);
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(415);
      if (lookahead == ' ') ADVANCE(238);
      if (lookahead == '"') ADVANCE(242);
      if (lookahead == '\'') ADVANCE(238);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == '?') ADVANCE(310);
      if (lookahead == '`') ADVANCE(246);
      if (lookahead != 0) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(415);
      if (lookahead == ' ') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(238);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == '?') ADVANCE(310);
      if (lookahead != 0) ADVANCE(238);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(415);
      if (lookahead == ' ') ADVANCE(240);
      if (lookahead == '"') ADVANCE(244);
      if (lookahead == '\'') ADVANCE(246);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '?') ADVANCE(311);
      if (lookahead == '`') ADVANCE(240);
      if (lookahead != 0) ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(415);
      if (lookahead == ' ') ADVANCE(240);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '?') ADVANCE(311);
      if (lookahead == '`') ADVANCE(240);
      if (lookahead != 0) ADVANCE(240);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(415);
      if (lookahead == ' ') ADVANCE(242);
      if (lookahead == '"') ADVANCE(242);
      if (lookahead == '\'') ADVANCE(242);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '?') ADVANCE(312);
      if (lookahead == '`') ADVANCE(248);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(415);
      if (lookahead == ' ') ADVANCE(242);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(242);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '?') ADVANCE(312);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(415);
      if (lookahead == ' ') ADVANCE(244);
      if (lookahead == '"') ADVANCE(244);
      if (lookahead == '\'') ADVANCE(248);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '?') ADVANCE(313);
      if (lookahead == '`') ADVANCE(244);
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(415);
      if (lookahead == ' ') ADVANCE(244);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(244);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '?') ADVANCE(313);
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(415);
      if (lookahead == ' ') ADVANCE(246);
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '\'') ADVANCE(246);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '?') ADVANCE(314);
      if (lookahead == '`') ADVANCE(246);
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(415);
      if (lookahead == ' ') ADVANCE(246);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(246);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '?') ADVANCE(314);
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(415);
      if (lookahead == ' ') ADVANCE(248);
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '\'') ADVANCE(248);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(315);
      if (lookahead == '`') ADVANCE(248);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(415);
      if (lookahead == ' ') ADVANCE(248);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(248);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(315);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(250);
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == ')') ADVANCE(467);
      if (lookahead == '?') ADVANCE(316);
      if (lookahead == '`') ADVANCE(258);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(250);
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == ')') ADVANCE(467);
      if (lookahead == '?') ADVANCE(316);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(252);
      if (lookahead == '"') ADVANCE(256);
      if (lookahead == '\'') ADVANCE(252);
      if (lookahead == ')') ADVANCE(468);
      if (lookahead == '?') ADVANCE(317);
      if (lookahead == '`') ADVANCE(260);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(252);
      if (lookahead == '\'') ADVANCE(252);
      if (lookahead == ')') ADVANCE(468);
      if (lookahead == '?') ADVANCE(317);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(254);
      if (lookahead == '"') ADVANCE(258);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead == '?') ADVANCE(318);
      if (lookahead == '`') ADVANCE(254);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(254);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead == '?') ADVANCE(318);
      if (lookahead == '`') ADVANCE(254);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(256);
      if (lookahead == '"') ADVANCE(256);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == ')') ADVANCE(478);
      if (lookahead == '?') ADVANCE(319);
      if (lookahead == '`') ADVANCE(262);
      if (lookahead != 0) ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(256);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(256);
      if (lookahead == ')') ADVANCE(478);
      if (lookahead == '?') ADVANCE(319);
      if (lookahead != 0) ADVANCE(256);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(258);
      if (lookahead == '"') ADVANCE(258);
      if (lookahead == '\'') ADVANCE(262);
      if (lookahead == ')') ADVANCE(479);
      if (lookahead == '?') ADVANCE(320);
      if (lookahead == '`') ADVANCE(258);
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(258);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(258);
      if (lookahead == ')') ADVANCE(479);
      if (lookahead == '?') ADVANCE(320);
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(260);
      if (lookahead == '"') ADVANCE(262);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == ')') ADVANCE(480);
      if (lookahead == '?') ADVANCE(321);
      if (lookahead == '`') ADVANCE(260);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(260);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(260);
      if (lookahead == ')') ADVANCE(480);
      if (lookahead == '?') ADVANCE(321);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(262);
      if (lookahead == '"') ADVANCE(262);
      if (lookahead == '\'') ADVANCE(262);
      if (lookahead == ')') ADVANCE(481);
      if (lookahead == '?') ADVANCE(322);
      if (lookahead == '`') ADVANCE(262);
      if (lookahead != 0) ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(262);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(262);
      if (lookahead == ')') ADVANCE(481);
      if (lookahead == '?') ADVANCE(322);
      if (lookahead != 0) ADVANCE(262);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(236);
      if (lookahead == '"') ADVANCE(264);
      if (lookahead == '\'') ADVANCE(270);
      if (lookahead == '(') ADVANCE(250);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '?') ADVANCE(323);
      if (lookahead == '`') ADVANCE(272);
      if (lookahead != 0) ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(236);
      if (lookahead == '"') ADVANCE(264);
      if (lookahead == '(') ADVANCE(250);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '?') ADVANCE(323);
      if (lookahead != 0) ADVANCE(264);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(238);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '\'') ADVANCE(266);
      if (lookahead == '(') ADVANCE(252);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == '?') ADVANCE(324);
      if (lookahead == '`') ADVANCE(274);
      if (lookahead != 0) ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(266);
      if (lookahead == '(') ADVANCE(252);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == '?') ADVANCE(324);
      if (lookahead != 0) ADVANCE(266);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(240);
      if (lookahead == '"') ADVANCE(272);
      if (lookahead == '\'') ADVANCE(274);
      if (lookahead == '(') ADVANCE(254);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '?') ADVANCE(325);
      if (lookahead == '`') ADVANCE(268);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(240);
      if (lookahead == '(') ADVANCE(254);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '?') ADVANCE(325);
      if (lookahead == '`') ADVANCE(268);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(242);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '\'') ADVANCE(270);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '?') ADVANCE(326);
      if (lookahead == '`') ADVANCE(276);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(242);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(270);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '?') ADVANCE(326);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(244);
      if (lookahead == '"') ADVANCE(272);
      if (lookahead == '\'') ADVANCE(276);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '?') ADVANCE(327);
      if (lookahead == '`') ADVANCE(272);
      if (lookahead != 0) ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(244);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(272);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '?') ADVANCE(327);
      if (lookahead != 0) ADVANCE(272);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(246);
      if (lookahead == '"') ADVANCE(276);
      if (lookahead == '\'') ADVANCE(274);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '?') ADVANCE(328);
      if (lookahead == '`') ADVANCE(274);
      if (lookahead != 0) ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(246);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(274);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '?') ADVANCE(328);
      if (lookahead != 0) ADVANCE(274);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(248);
      if (lookahead == '"') ADVANCE(276);
      if (lookahead == '\'') ADVANCE(276);
      if (lookahead == '(') ADVANCE(262);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(329);
      if (lookahead == '`') ADVANCE(276);
      if (lookahead != 0) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(248);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(276);
      if (lookahead == '(') ADVANCE(262);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(329);
      if (lookahead != 0) ADVANCE(276);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(374);
      if (lookahead == '"') ADVANCE(278);
      if (lookahead == '\'') ADVANCE(280);
      if (lookahead == '(') ADVANCE(384);
      if (lookahead == ')') ADVANCE(1);
      if (lookahead == '?') ADVANCE(336);
      if (lookahead == '`') ADVANCE(272);
      if (lookahead != 0) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(375);
      if (lookahead == '"') ADVANCE(280);
      if (lookahead == '\'') ADVANCE(279);
      if (lookahead == '(') ADVANCE(385);
      if (lookahead == ')') ADVANCE(2);
      if (lookahead == '?') ADVANCE(337);
      if (lookahead == '`') ADVANCE(274);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(376);
      if (lookahead == '"') ADVANCE(280);
      if (lookahead == '\'') ADVANCE(280);
      if (lookahead == '(') ADVANCE(386);
      if (lookahead == ')') ADVANCE(3);
      if (lookahead == '?') ADVANCE(338);
      if (lookahead == '`') ADVANCE(276);
      if (lookahead != 0) ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(281);
      if (lookahead == '"') ADVANCE(281);
      if (lookahead == '\'') ADVANCE(284);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '?') ADVANCE(339);
      if (lookahead == ']') ADVANCE(236);
      if (lookahead == '`') ADVANCE(285);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(236);
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(282);
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == '?') ADVANCE(340);
      if (lookahead == ']') ADVANCE(238);
      if (lookahead == '`') ADVANCE(286);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(238);
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(283);
      if (lookahead == '"') ADVANCE(285);
      if (lookahead == '\'') ADVANCE(286);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '?') ADVANCE(341);
      if (lookahead == ']') ADVANCE(240);
      if (lookahead == '`') ADVANCE(283);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(240);
      if (lookahead != 0) ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(284);
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '\'') ADVANCE(284);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '?') ADVANCE(342);
      if (lookahead == ']') ADVANCE(242);
      if (lookahead == '`') ADVANCE(287);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(242);
      if (lookahead != 0) ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(285);
      if (lookahead == '"') ADVANCE(285);
      if (lookahead == '\'') ADVANCE(287);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '?') ADVANCE(343);
      if (lookahead == ']') ADVANCE(244);
      if (lookahead == '`') ADVANCE(285);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(244);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(286);
      if (lookahead == '"') ADVANCE(287);
      if (lookahead == '\'') ADVANCE(286);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '?') ADVANCE(344);
      if (lookahead == ']') ADVANCE(246);
      if (lookahead == '`') ADVANCE(286);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(246);
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(287);
      if (lookahead == '"') ADVANCE(287);
      if (lookahead == '\'') ADVANCE(287);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(345);
      if (lookahead == ']') ADVANCE(248);
      if (lookahead == '`') ADVANCE(287);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(248);
      if (lookahead != 0) ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(281);
      if (lookahead == '"') ADVANCE(288);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == '(') ADVANCE(250);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '?') ADVANCE(346);
      if (lookahead == '[') ADVANCE(264);
      if (lookahead == ']') ADVANCE(264);
      if (lookahead == '`') ADVANCE(292);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(282);
      if (lookahead == '"') ADVANCE(291);
      if (lookahead == '\'') ADVANCE(289);
      if (lookahead == '(') ADVANCE(252);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == '?') ADVANCE(347);
      if (lookahead == '[') ADVANCE(266);
      if (lookahead == ']') ADVANCE(266);
      if (lookahead == '`') ADVANCE(293);
      if (lookahead != 0) ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(283);
      if (lookahead == '"') ADVANCE(292);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '(') ADVANCE(254);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '?') ADVANCE(348);
      if (lookahead == '[') ADVANCE(268);
      if (lookahead == ']') ADVANCE(268);
      if (lookahead == '`') ADVANCE(290);
      if (lookahead != 0) ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(284);
      if (lookahead == '"') ADVANCE(291);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '?') ADVANCE(349);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == ']') ADVANCE(270);
      if (lookahead == '`') ADVANCE(294);
      if (lookahead != 0) ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(285);
      if (lookahead == '"') ADVANCE(292);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '?') ADVANCE(350);
      if (lookahead == '[') ADVANCE(272);
      if (lookahead == ']') ADVANCE(272);
      if (lookahead == '`') ADVANCE(292);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(286);
      if (lookahead == '"') ADVANCE(294);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '?') ADVANCE(351);
      if (lookahead == '[') ADVANCE(274);
      if (lookahead == ']') ADVANCE(274);
      if (lookahead == '`') ADVANCE(293);
      if (lookahead != 0) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(287);
      if (lookahead == '"') ADVANCE(294);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == '(') ADVANCE(262);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(352);
      if (lookahead == '[') ADVANCE(276);
      if (lookahead == ']') ADVANCE(276);
      if (lookahead == '`') ADVANCE(294);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == '"') ADVANCE(295);
      if (lookahead == '\'') ADVANCE(298);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == ',') ADVANCE(295);
      if (lookahead == '?') ADVANCE(353);
      if (lookahead == '`') ADVANCE(299);
      if (lookahead == '}') ADVANCE(295);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(236);
      if (lookahead != 0) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(296);
      if (lookahead == '"') ADVANCE(298);
      if (lookahead == '\'') ADVANCE(296);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == ',') ADVANCE(296);
      if (lookahead == '?') ADVANCE(354);
      if (lookahead == '`') ADVANCE(300);
      if (lookahead == '}') ADVANCE(296);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(238);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(297);
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '\'') ADVANCE(300);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == ',') ADVANCE(297);
      if (lookahead == '?') ADVANCE(355);
      if (lookahead == '`') ADVANCE(297);
      if (lookahead == '}') ADVANCE(297);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(240);
      if (lookahead != 0) ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(298);
      if (lookahead == '"') ADVANCE(298);
      if (lookahead == '\'') ADVANCE(298);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == ',') ADVANCE(298);
      if (lookahead == '?') ADVANCE(356);
      if (lookahead == '`') ADVANCE(301);
      if (lookahead == '}') ADVANCE(298);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(242);
      if (lookahead != 0) ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(299);
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '\'') ADVANCE(301);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == ',') ADVANCE(299);
      if (lookahead == '?') ADVANCE(357);
      if (lookahead == '`') ADVANCE(299);
      if (lookahead == '}') ADVANCE(299);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(244);
      if (lookahead != 0) ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(300);
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '\'') ADVANCE(300);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == ',') ADVANCE(300);
      if (lookahead == '?') ADVANCE(358);
      if (lookahead == '`') ADVANCE(300);
      if (lookahead == '}') ADVANCE(300);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(246);
      if (lookahead != 0) ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(301);
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '\'') ADVANCE(301);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ',') ADVANCE(301);
      if (lookahead == '?') ADVANCE(359);
      if (lookahead == '`') ADVANCE(301);
      if (lookahead == '}') ADVANCE(301);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead != 0) ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == '"') ADVANCE(302);
      if (lookahead == '\'') ADVANCE(305);
      if (lookahead == '(') ADVANCE(250);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == ',') ADVANCE(302);
      if (lookahead == '?') ADVANCE(360);
      if (lookahead == '`') ADVANCE(306);
      if (lookahead == '}') ADVANCE(302);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(264);
      if (lookahead != 0) ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(296);
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '(') ADVANCE(252);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == ',') ADVANCE(303);
      if (lookahead == '?') ADVANCE(361);
      if (lookahead == '`') ADVANCE(307);
      if (lookahead == '}') ADVANCE(303);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(266);
      if (lookahead != 0) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(297);
      if (lookahead == '"') ADVANCE(306);
      if (lookahead == '\'') ADVANCE(307);
      if (lookahead == '(') ADVANCE(254);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == ',') ADVANCE(304);
      if (lookahead == '?') ADVANCE(362);
      if (lookahead == '`') ADVANCE(304);
      if (lookahead == '}') ADVANCE(304);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(268);
      if (lookahead != 0) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(298);
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '\'') ADVANCE(305);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == ',') ADVANCE(305);
      if (lookahead == '?') ADVANCE(363);
      if (lookahead == '`') ADVANCE(308);
      if (lookahead == '}') ADVANCE(305);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(270);
      if (lookahead != 0) ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(299);
      if (lookahead == '"') ADVANCE(306);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == ',') ADVANCE(306);
      if (lookahead == '?') ADVANCE(364);
      if (lookahead == '`') ADVANCE(306);
      if (lookahead == '}') ADVANCE(306);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(272);
      if (lookahead != 0) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(300);
      if (lookahead == '"') ADVANCE(308);
      if (lookahead == '\'') ADVANCE(307);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == ',') ADVANCE(307);
      if (lookahead == '?') ADVANCE(365);
      if (lookahead == '`') ADVANCE(307);
      if (lookahead == '}') ADVANCE(307);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(274);
      if (lookahead != 0) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(301);
      if (lookahead == '"') ADVANCE(308);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == '(') ADVANCE(262);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ',') ADVANCE(308);
      if (lookahead == '?') ADVANCE(366);
      if (lookahead == '`') ADVANCE(308);
      if (lookahead == '}') ADVANCE(308);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(276);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == '"') ADVANCE(309);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(63);
      if (lookahead != 0) ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == '\'') ADVANCE(310);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(65);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == '`') ADVANCE(311);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(92);
      if (lookahead != 0) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(312);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(135);
      if (lookahead != 0) ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(313);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(136);
      if (lookahead != 0) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(314);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(137);
      if (lookahead != 0) ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(315);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(139);
      if (lookahead != 0) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '"') ADVANCE(316);
      if (lookahead == ')') ADVANCE(467);
      if (lookahead != 0) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '\'') ADVANCE(317);
      if (lookahead == ')') ADVANCE(468);
      if (lookahead != 0) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead == '`') ADVANCE(318);
      if (lookahead != 0) ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(319);
      if (lookahead == ')') ADVANCE(478);
      if (lookahead != 0) ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(320);
      if (lookahead == ')') ADVANCE(479);
      if (lookahead != 0) ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(321);
      if (lookahead == ')') ADVANCE(480);
      if (lookahead != 0) ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(322);
      if (lookahead == ')') ADVANCE(481);
      if (lookahead != 0) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == '"') ADVANCE(323);
      if (lookahead == '(') ADVANCE(316);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(63);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == '\'') ADVANCE(324);
      if (lookahead == '(') ADVANCE(317);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(65);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == '(') ADVANCE(318);
      if (lookahead == '`') ADVANCE(325);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(92);
      if (lookahead != 0) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(326);
      if (lookahead == '(') ADVANCE(319);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(135);
      if (lookahead != 0) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(327);
      if (lookahead == '(') ADVANCE(320);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(136);
      if (lookahead != 0) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(328);
      if (lookahead == '(') ADVANCE(321);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(137);
      if (lookahead != 0) ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(329);
      if (lookahead == '(') ADVANCE(322);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(139);
      if (lookahead != 0) ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == '"') ADVANCE(330);
      if (lookahead == '`') ADVANCE(309);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(1);
      if (lookahead != 0) ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == '\'') ADVANCE(331);
      if (lookahead == '`') ADVANCE(310);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(2);
      if (lookahead != 0) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(332);
      if (lookahead == '`') ADVANCE(312);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(3);
      if (lookahead != 0) ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '"') ADVANCE(333);
      if (lookahead == ')') ADVANCE(444);
      if (lookahead == '`') ADVANCE(316);
      if (lookahead != 0) ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '\'') ADVANCE(334);
      if (lookahead == ')') ADVANCE(445);
      if (lookahead == '`') ADVANCE(317);
      if (lookahead != 0) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(412);
      if (lookahead == ' ') ADVANCE(34);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(335);
      if (lookahead == ')') ADVANCE(446);
      if (lookahead == '`') ADVANCE(319);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead == '"') ADVANCE(336);
      if (lookahead == '(') ADVANCE(333);
      if (lookahead == '`') ADVANCE(323);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(1);
      if (lookahead != 0) ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead == '\'') ADVANCE(337);
      if (lookahead == '(') ADVANCE(334);
      if (lookahead == '`') ADVANCE(324);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(2);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(338);
      if (lookahead == '(') ADVANCE(335);
      if (lookahead == '`') ADVANCE(326);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(3);
      if (lookahead != 0) ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(409);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '"') ADVANCE(339);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == ']') ADVANCE(309);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(309);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(409);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(340);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == ']') ADVANCE(310);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(310);
      if (lookahead != 0) ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(409);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == ']') ADVANCE(311);
      if (lookahead == '`') ADVANCE(341);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(311);
      if (lookahead != 0) ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(409);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(342);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == ']') ADVANCE(312);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(312);
      if (lookahead != 0) ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(409);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(343);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == ']') ADVANCE(313);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(313);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(409);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(344);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == ']') ADVANCE(314);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(314);
      if (lookahead != 0) ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(409);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(345);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ']') ADVANCE(315);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(315);
      if (lookahead != 0) ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(408);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '"') ADVANCE(346);
      if (lookahead == '(') ADVANCE(316);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '[') ADVANCE(323);
      if (lookahead == ']') ADVANCE(323);
      if (lookahead != 0) ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(408);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(347);
      if (lookahead == '(') ADVANCE(317);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == '[') ADVANCE(324);
      if (lookahead == ']') ADVANCE(324);
      if (lookahead != 0) ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(408);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '(') ADVANCE(318);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '[') ADVANCE(325);
      if (lookahead == ']') ADVANCE(325);
      if (lookahead == '`') ADVANCE(348);
      if (lookahead != 0) ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(408);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(349);
      if (lookahead == '(') ADVANCE(319);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '[') ADVANCE(326);
      if (lookahead == ']') ADVANCE(326);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(408);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(350);
      if (lookahead == '(') ADVANCE(320);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '[') ADVANCE(327);
      if (lookahead == ']') ADVANCE(327);
      if (lookahead != 0) ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(408);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(351);
      if (lookahead == '(') ADVANCE(321);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '[') ADVANCE(328);
      if (lookahead == ']') ADVANCE(328);
      if (lookahead != 0) ADVANCE(351);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(408);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(352);
      if (lookahead == '(') ADVANCE(322);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '[') ADVANCE(329);
      if (lookahead == ']') ADVANCE(329);
      if (lookahead != 0) ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(411);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == ',') ADVANCE(353);
      if (lookahead == '}') ADVANCE(353);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(309);
      if (lookahead != 0) ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(411);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '\'') ADVANCE(354);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == ',') ADVANCE(354);
      if (lookahead == '}') ADVANCE(354);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(310);
      if (lookahead != 0) ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(411);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == ',') ADVANCE(355);
      if (lookahead == '`') ADVANCE(355);
      if (lookahead == '}') ADVANCE(355);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(311);
      if (lookahead != 0) ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(411);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(356);
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
      if (lookahead == '\n') ADVANCE(411);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(357);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == ',') ADVANCE(357);
      if (lookahead == '}') ADVANCE(357);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(313);
      if (lookahead != 0) ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(411);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(358);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == ',') ADVANCE(358);
      if (lookahead == '}') ADVANCE(358);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(314);
      if (lookahead != 0) ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(411);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(359);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ',') ADVANCE(359);
      if (lookahead == '}') ADVANCE(359);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(315);
      if (lookahead != 0) ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(410);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '"') ADVANCE(360);
      if (lookahead == '(') ADVANCE(316);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == ',') ADVANCE(360);
      if (lookahead == '}') ADVANCE(360);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(323);
      if (lookahead != 0) ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(410);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '\'') ADVANCE(361);
      if (lookahead == '(') ADVANCE(317);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == ',') ADVANCE(361);
      if (lookahead == '}') ADVANCE(361);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(324);
      if (lookahead != 0) ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(410);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '(') ADVANCE(318);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == ',') ADVANCE(362);
      if (lookahead == '`') ADVANCE(362);
      if (lookahead == '}') ADVANCE(362);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(325);
      if (lookahead != 0) ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(410);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(363);
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
      if (lookahead == '\n') ADVANCE(410);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(364);
      if (lookahead == '(') ADVANCE(320);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == ',') ADVANCE(364);
      if (lookahead == '}') ADVANCE(364);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(327);
      if (lookahead != 0) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(410);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(365);
      if (lookahead == '(') ADVANCE(321);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == ',') ADVANCE(365);
      if (lookahead == '}') ADVANCE(365);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(328);
      if (lookahead != 0) ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(410);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(366);
      if (lookahead == '(') ADVANCE(322);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ',') ADVANCE(366);
      if (lookahead == '}') ADVANCE(366);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(329);
      if (lookahead != 0) ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '"') ADVANCE(367);
      if (lookahead == '(') ADVANCE(316);
      if (lookahead == ')') ADVANCE(467);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '\'') ADVANCE(368);
      if (lookahead == '(') ADVANCE(317);
      if (lookahead == ')') ADVANCE(468);
      if (lookahead != 0) ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '(') ADVANCE(318);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead == '`') ADVANCE(369);
      if (lookahead != 0) ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(370);
      if (lookahead == '(') ADVANCE(319);
      if (lookahead == ')') ADVANCE(478);
      if (lookahead != 0) ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(371);
      if (lookahead == '(') ADVANCE(320);
      if (lookahead == ')') ADVANCE(479);
      if (lookahead != 0) ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(372);
      if (lookahead == '(') ADVANCE(321);
      if (lookahead == ')') ADVANCE(480);
      if (lookahead != 0) ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(413);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(373);
      if (lookahead == '(') ADVANCE(322);
      if (lookahead == ')') ADVANCE(481);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(374);
      if (lookahead == '"') ADVANCE(374);
      if (lookahead == '\'') ADVANCE(376);
      if (lookahead == ')') ADVANCE(1);
      if (lookahead == '?') ADVANCE(330);
      if (lookahead == '`') ADVANCE(244);
      if (lookahead != 0) ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(375);
      if (lookahead == '"') ADVANCE(376);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == ')') ADVANCE(2);
      if (lookahead == '?') ADVANCE(331);
      if (lookahead == '`') ADVANCE(246);
      if (lookahead != 0) ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(376);
      if (lookahead == '"') ADVANCE(376);
      if (lookahead == '\'') ADVANCE(376);
      if (lookahead == ')') ADVANCE(3);
      if (lookahead == '?') ADVANCE(332);
      if (lookahead == '`') ADVANCE(248);
      if (lookahead != 0) ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(394);
      if (lookahead == '"') ADVANCE(377);
      if (lookahead == '\'') ADVANCE(380);
      if (lookahead == '(') ADVANCE(401);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == '?') ADVANCE(265);
      if (lookahead == '`') ADVANCE(381);
      if (lookahead != 0) ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(395);
      if (lookahead == '"') ADVANCE(380);
      if (lookahead == '\'') ADVANCE(378);
      if (lookahead == '(') ADVANCE(402);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '`') ADVANCE(382);
      if (lookahead != 0) ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(396);
      if (lookahead == '"') ADVANCE(381);
      if (lookahead == '\'') ADVANCE(382);
      if (lookahead == '(') ADVANCE(403);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '?') ADVANCE(269);
      if (lookahead == '`') ADVANCE(379);
      if (lookahead != 0) ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(397);
      if (lookahead == '"') ADVANCE(380);
      if (lookahead == '\'') ADVANCE(380);
      if (lookahead == '(') ADVANCE(404);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '?') ADVANCE(271);
      if (lookahead == '`') ADVANCE(383);
      if (lookahead != 0) ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(398);
      if (lookahead == '"') ADVANCE(381);
      if (lookahead == '\'') ADVANCE(383);
      if (lookahead == '(') ADVANCE(405);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '?') ADVANCE(273);
      if (lookahead == '`') ADVANCE(381);
      if (lookahead != 0) ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(399);
      if (lookahead == '"') ADVANCE(383);
      if (lookahead == '\'') ADVANCE(382);
      if (lookahead == '(') ADVANCE(406);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '?') ADVANCE(275);
      if (lookahead == '`') ADVANCE(382);
      if (lookahead != 0) ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(400);
      if (lookahead == '"') ADVANCE(383);
      if (lookahead == '\'') ADVANCE(383);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '?') ADVANCE(277);
      if (lookahead == '`') ADVANCE(383);
      if (lookahead != 0) ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(384);
      if (lookahead == '"') ADVANCE(384);
      if (lookahead == '\'') ADVANCE(386);
      if (lookahead == ')') ADVANCE(444);
      if (lookahead == '?') ADVANCE(333);
      if (lookahead == '`') ADVANCE(258);
      if (lookahead != 0) ADVANCE(384);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(385);
      if (lookahead == '"') ADVANCE(386);
      if (lookahead == '\'') ADVANCE(385);
      if (lookahead == ')') ADVANCE(445);
      if (lookahead == '?') ADVANCE(334);
      if (lookahead == '`') ADVANCE(260);
      if (lookahead != 0) ADVANCE(385);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(386);
      if (lookahead == '"') ADVANCE(386);
      if (lookahead == '\'') ADVANCE(386);
      if (lookahead == ')') ADVANCE(446);
      if (lookahead == '?') ADVANCE(335);
      if (lookahead == '`') ADVANCE(262);
      if (lookahead != 0) ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(250);
      if (lookahead == '"') ADVANCE(387);
      if (lookahead == '\'') ADVANCE(390);
      if (lookahead == '(') ADVANCE(250);
      if (lookahead == ')') ADVANCE(467);
      if (lookahead == '?') ADVANCE(367);
      if (lookahead == '`') ADVANCE(391);
      if (lookahead != 0) ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(252);
      if (lookahead == '"') ADVANCE(390);
      if (lookahead == '\'') ADVANCE(388);
      if (lookahead == '(') ADVANCE(252);
      if (lookahead == ')') ADVANCE(468);
      if (lookahead == '?') ADVANCE(368);
      if (lookahead == '`') ADVANCE(392);
      if (lookahead != 0) ADVANCE(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(254);
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '\'') ADVANCE(392);
      if (lookahead == '(') ADVANCE(254);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead == '?') ADVANCE(369);
      if (lookahead == '`') ADVANCE(389);
      if (lookahead != 0) ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(256);
      if (lookahead == '"') ADVANCE(390);
      if (lookahead == '\'') ADVANCE(390);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(478);
      if (lookahead == '?') ADVANCE(370);
      if (lookahead == '`') ADVANCE(393);
      if (lookahead != 0) ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(258);
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '\'') ADVANCE(393);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == ')') ADVANCE(479);
      if (lookahead == '?') ADVANCE(371);
      if (lookahead == '`') ADVANCE(391);
      if (lookahead != 0) ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(260);
      if (lookahead == '"') ADVANCE(393);
      if (lookahead == '\'') ADVANCE(392);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == ')') ADVANCE(480);
      if (lookahead == '?') ADVANCE(372);
      if (lookahead == '`') ADVANCE(392);
      if (lookahead != 0) ADVANCE(392);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(262);
      if (lookahead == '"') ADVANCE(393);
      if (lookahead == '\'') ADVANCE(393);
      if (lookahead == '(') ADVANCE(262);
      if (lookahead == ')') ADVANCE(481);
      if (lookahead == '?') ADVANCE(373);
      if (lookahead == '`') ADVANCE(393);
      if (lookahead != 0) ADVANCE(393);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(430);
      if (lookahead == ' ') ADVANCE(394);
      if (lookahead == '"') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(397);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == '?') ADVANCE(237);
      if (lookahead == '`') ADVANCE(398);
      if (lookahead != 0) ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(430);
      if (lookahead == ' ') ADVANCE(395);
      if (lookahead == '"') ADVANCE(397);
      if (lookahead == '\'') ADVANCE(395);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '?') ADVANCE(239);
      if (lookahead == '`') ADVANCE(399);
      if (lookahead != 0) ADVANCE(395);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(430);
      if (lookahead == ' ') ADVANCE(396);
      if (lookahead == '"') ADVANCE(398);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '?') ADVANCE(241);
      if (lookahead == '`') ADVANCE(396);
      if (lookahead != 0) ADVANCE(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(430);
      if (lookahead == ' ') ADVANCE(397);
      if (lookahead == '"') ADVANCE(397);
      if (lookahead == '\'') ADVANCE(397);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '?') ADVANCE(243);
      if (lookahead == '`') ADVANCE(400);
      if (lookahead != 0) ADVANCE(397);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(430);
      if (lookahead == ' ') ADVANCE(398);
      if (lookahead == '"') ADVANCE(398);
      if (lookahead == '\'') ADVANCE(400);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '?') ADVANCE(245);
      if (lookahead == '`') ADVANCE(398);
      if (lookahead != 0) ADVANCE(398);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(430);
      if (lookahead == ' ') ADVANCE(399);
      if (lookahead == '"') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '?') ADVANCE(247);
      if (lookahead == '`') ADVANCE(399);
      if (lookahead != 0) ADVANCE(399);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(430);
      if (lookahead == ' ') ADVANCE(400);
      if (lookahead == '"') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(400);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '?') ADVANCE(249);
      if (lookahead == '`') ADVANCE(400);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(401);
      if (lookahead == '"') ADVANCE(401);
      if (lookahead == '\'') ADVANCE(404);
      if (lookahead == ')') ADVANCE(447);
      if (lookahead == '?') ADVANCE(251);
      if (lookahead == '`') ADVANCE(405);
      if (lookahead != 0) ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(402);
      if (lookahead == '"') ADVANCE(404);
      if (lookahead == '\'') ADVANCE(402);
      if (lookahead == ')') ADVANCE(448);
      if (lookahead == '?') ADVANCE(253);
      if (lookahead == '`') ADVANCE(406);
      if (lookahead != 0) ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(403);
      if (lookahead == '"') ADVANCE(405);
      if (lookahead == '\'') ADVANCE(406);
      if (lookahead == ')') ADVANCE(449);
      if (lookahead == '?') ADVANCE(255);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead != 0) ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(404);
      if (lookahead == '"') ADVANCE(404);
      if (lookahead == '\'') ADVANCE(404);
      if (lookahead == ')') ADVANCE(450);
      if (lookahead == '?') ADVANCE(257);
      if (lookahead == '`') ADVANCE(407);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(405);
      if (lookahead == '"') ADVANCE(405);
      if (lookahead == '\'') ADVANCE(407);
      if (lookahead == ')') ADVANCE(451);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == '`') ADVANCE(405);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(406);
      if (lookahead == '"') ADVANCE(407);
      if (lookahead == '\'') ADVANCE(406);
      if (lookahead == ')') ADVANCE(452);
      if (lookahead == '?') ADVANCE(261);
      if (lookahead == '`') ADVANCE(406);
      if (lookahead != 0) ADVANCE(406);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(407);
      if (lookahead == '"') ADVANCE(407);
      if (lookahead == '\'') ADVANCE(407);
      if (lookahead == ')') ADVANCE(453);
      if (lookahead == '?') ADVANCE(263);
      if (lookahead == '`') ADVANCE(407);
      if (lookahead != 0) ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead == '(') ADVANCE(414);
      if (lookahead == '[') ADVANCE(434);
      if (lookahead == ']') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(408);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead == ']') ADVANCE(442);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == '(') ADVANCE(414);
      if (lookahead == ',') ADVANCE(410);
      if (lookahead == '}') ADVANCE(410);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == ',') ADVANCE(411);
      if (lookahead == '}') ADVANCE(411);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(411);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(69);
      if (lookahead == ')') ADVANCE(476);
      if (lookahead == '`') ADVANCE(414);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == '(') ADVANCE(414);
      if (lookahead == ')') ADVANCE(443);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == ')') ADVANCE(443);
      if (lookahead != 0) ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(415);
      if (lookahead == '"') ADVANCE(236);
      if (lookahead == '\'') ADVANCE(238);
      if (lookahead == '?') ADVANCE(442);
      if (lookahead == '`') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(415);
      if (lookahead == '"') ADVANCE(264);
      if (lookahead == '\'') ADVANCE(266);
      if (lookahead == '(') ADVANCE(419);
      if (lookahead == '?') ADVANCE(434);
      if (lookahead == '`') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(415);
      if (lookahead == '(') ADVANCE(419);
      if (lookahead == '?') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(416);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(415);
      if (lookahead == '?') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(415);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(419);
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '\'') ADVANCE(252);
      if (lookahead == ')') ADVANCE(443);
      if (lookahead == '?') ADVANCE(414);
      if (lookahead == '`') ADVANCE(254);
      if (lookahead != 0) ADVANCE(419);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(419);
      if (lookahead == '"') ADVANCE(387);
      if (lookahead == '\'') ADVANCE(388);
      if (lookahead == '(') ADVANCE(419);
      if (lookahead == ')') ADVANCE(443);
      if (lookahead == '?') ADVANCE(413);
      if (lookahead == '`') ADVANCE(389);
      if (lookahead != 0) ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(419);
      if (lookahead == ')') ADVANCE(443);
      if (lookahead == '?') ADVANCE(414);
      if (lookahead != 0) ADVANCE(419);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(422);
      if (lookahead == '"') ADVANCE(281);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == '?') ADVANCE(409);
      if (lookahead == ']') ADVANCE(415);
      if (lookahead == '`') ADVANCE(283);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(422);
      if (lookahead == '"') ADVANCE(288);
      if (lookahead == '\'') ADVANCE(289);
      if (lookahead == '(') ADVANCE(419);
      if (lookahead == '?') ADVANCE(408);
      if (lookahead == '[') ADVANCE(416);
      if (lookahead == ']') ADVANCE(416);
      if (lookahead == '`') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(424);
      if (lookahead == '"') ADVANCE(295);
      if (lookahead == '\'') ADVANCE(296);
      if (lookahead == ',') ADVANCE(424);
      if (lookahead == '?') ADVANCE(411);
      if (lookahead == '`') ADVANCE(297);
      if (lookahead == '}') ADVANCE(424);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(424);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(424);
      if (lookahead == '"') ADVANCE(302);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '(') ADVANCE(419);
      if (lookahead == ',') ADVANCE(425);
      if (lookahead == '?') ADVANCE(410);
      if (lookahead == '`') ADVANCE(304);
      if (lookahead == '}') ADVANCE(425);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(425);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(427);
      if (lookahead == '"') ADVANCE(278);
      if (lookahead == '\'') ADVANCE(279);
      if (lookahead == '(') ADVANCE(428);
      if (lookahead == ')') ADVANCE(90);
      if (lookahead == '?') ADVANCE(435);
      if (lookahead == '`') ADVANCE(268);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(427);
      if (lookahead == '"') ADVANCE(374);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == ')') ADVANCE(90);
      if (lookahead == '?') ADVANCE(436);
      if (lookahead == '`') ADVANCE(240);
      if (lookahead != 0) ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(428);
      if (lookahead == '"') ADVANCE(384);
      if (lookahead == '\'') ADVANCE(385);
      if (lookahead == ')') ADVANCE(476);
      if (lookahead == '?') ADVANCE(412);
      if (lookahead == '`') ADVANCE(254);
      if (lookahead != 0) ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(430);
      if (lookahead == '"') ADVANCE(377);
      if (lookahead == '\'') ADVANCE(378);
      if (lookahead == '(') ADVANCE(431);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '?') ADVANCE(417);
      if (lookahead == '`') ADVANCE(379);
      if (lookahead != 0) ADVANCE(429);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(430);
      if (lookahead == '"') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(395);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '?') ADVANCE(418);
      if (lookahead == '`') ADVANCE(396);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(431);
      if (lookahead == '"') ADVANCE(401);
      if (lookahead == '\'') ADVANCE(402);
      if (lookahead == ')') ADVANCE(475);
      if (lookahead == '?') ADVANCE(421);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead != 0) ADVANCE(431);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '(') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(434);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '(') ADVANCE(412);
      if (lookahead == '`') ADVANCE(434);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(90);
      if (lookahead != 0) ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '`') ADVANCE(442);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(90);
      if (lookahead != 0) ADVANCE(436);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '`') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(135);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(442);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"') ADVANCE(202);
      if (lookahead == '`') ADVANCE(495);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\'') ADVANCE(203);
      if (lookahead == '`') ADVANCE(496);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(204);
      if (lookahead == '`') ADVANCE(500);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"') ADVANCE(219);
      if (lookahead == '?') ADVANCE(42);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\'') ADVANCE(220);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead == '`') ADVANCE(221);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(222);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(223);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(224);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(225);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == '[') ADVANCE(473);
      if (lookahead == ']') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(454);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ',') ADVANCE(455);
      if (lookahead == '}') ADVANCE(455);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(455);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(70);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(475);
      if (lookahead == '?') ADVANCE(461);
      if (lookahead != 0) ADVANCE(456);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(86);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '?') ADVANCE(462);
      if (lookahead == '[') ADVANCE(471);
      if (lookahead == ']') ADVANCE(471);
      if (lookahead != 0) ADVANCE(457);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == ',') ADVANCE(458);
      if (lookahead == '?') ADVANCE(463);
      if (lookahead == '}') ADVANCE(458);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(471);
      if (lookahead != 0) ADVANCE(458);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(443);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(415);
      if (lookahead == '(') ADVANCE(419);
      if (lookahead == '?') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(416);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(419);
      if (lookahead == '(') ADVANCE(419);
      if (lookahead == ')') ADVANCE(443);
      if (lookahead == '?') ADVANCE(459);
      if (lookahead != 0) ADVANCE(420);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(422);
      if (lookahead == '(') ADVANCE(419);
      if (lookahead == '?') ADVANCE(454);
      if (lookahead == '[') ADVANCE(416);
      if (lookahead == ']') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(423);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(424);
      if (lookahead == '(') ADVANCE(419);
      if (lookahead == ',') ADVANCE(425);
      if (lookahead == '?') ADVANCE(455);
      if (lookahead == '}') ADVANCE(425);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(425);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '"') ADVANCE(606);
      if (lookahead == '\'') ADVANCE(602);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '?') ADVANCE(466);
      if (lookahead == '[') ADVANCE(457);
      if (lookahead == '`') ADVANCE(472);
      if (lookahead == '{') ADVANCE(458);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(464);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(427);
      if (lookahead == '(') ADVANCE(428);
      if (lookahead == ')') ADVANCE(90);
      if (lookahead == '?') ADVANCE(469);
      if (lookahead == '`') ADVANCE(416);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(430);
      if (lookahead == '(') ADVANCE(431);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '?') ADVANCE(473);
      if (lookahead != 0) ADVANCE(429);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == '`') ADVANCE(473);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(90);
      if (lookahead != 0) ADVANCE(469);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '?') ADVANCE(473);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(85);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '?') ADVANCE(460);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(85);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == '?') ADVANCE(465);
      if (lookahead == '`') ADVANCE(471);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(84);
      if (lookahead != 0) ADVANCE(472);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(473);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '?') ADVANCE(91);
      if (lookahead == '`') ADVANCE(499);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '?') ADVANCE(145);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '`') ADVANCE(491);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '`') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(135);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == ',') ADVANCE(11);
      if (lookahead == '}') ADVANCE(482);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(63);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(213);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(483);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(65);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '`') ADVANCE(214);
      if (lookahead == '}') ADVANCE(484);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(92);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(215);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '}') ADVANCE(485);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(135);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(216);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(486);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(136);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(217);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(487);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(137);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(218);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(488);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(139);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == ',') ADVANCE(55);
      if (lookahead == '}') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(75);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '?') ADVANCE(77);
      if (lookahead == '}') ADVANCE(490);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(85);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == ')') ADVANCE(467);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(230);
      if (lookahead == ')') ADVANCE(468);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(232);
      if (lookahead == ')') ADVANCE(478);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '"') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == ')') ADVANCE(475);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == ')') ADVANCE(443);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '?') ADVANCE(145);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(135);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '?') ADVANCE(145);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '`') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(135);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__attribute_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(564);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(581);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(568);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(582);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(574);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(576);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(578);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(580);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(179);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(540);
      if (lookahead == 'o') ADVANCE(519);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(553);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(570);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(541);
      if (lookahead == 'o') ADVANCE(520);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(554);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(571);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(573);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(163);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(164);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(515);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(517);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(165);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(532);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(529);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(577);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(579);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(530);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(533);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(537);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(567);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(572);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(575);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(183);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(547);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(548);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(549);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(519);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(520);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(521);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(524);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(527);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(536);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(522);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(170);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(171);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(523);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(525);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(172);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(565);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(566);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(526);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(569);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(534);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(535);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(583);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(188);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(584);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(189);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(585);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(545);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(546);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(561);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(562);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(563);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(589);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(592);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(590);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(593);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(591);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(594);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(595);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token1);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token2);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(600);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '?') ADVANCE(460);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(85);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(604);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(604);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '?') ADVANCE(460);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(85);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(608);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(608);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '{') ADVANCE(610);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '{') ADVANCE(610);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(611);
      if (lookahead == ' ') ADVANCE(611);
      if (lookahead == '!') ADVANCE(614);
      if (lookahead == '#') ADVANCE(619);
      if (lookahead == '-') ADVANCE(640);
      if (lookahead == '.') ADVANCE(618);
      if (lookahead == '/') ADVANCE(613);
      if (lookahead == '=') ADVANCE(195);
      if (lookahead == 'c') ADVANCE(518);
      if (lookahead == 'd') ADVANCE(560);
      if (lookahead == 'e') ADVANCE(552);
      if (lookahead == 'i') ADVANCE(542);
      if (lookahead == 'u') ADVANCE(557);
      if (lookahead == '|') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      if (lookahead != 0) ADVANCE(620);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(612);
      if (lookahead == ' ') ADVANCE(612);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(612);
      if (lookahead != 0) ADVANCE(620);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '/') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '=') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == 'f') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == 'i') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(618);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(594);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__delimited_javascript);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(626);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__delimited_javascript);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(626);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(630);
      if (lookahead == '#') ADVANCE(636);
      if (lookahead == '-') ADVANCE(639);
      if (lookahead == '.') ADVANCE(635);
      if (lookahead == '/') ADVANCE(629);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == 'c') ADVANCE(516);
      if (lookahead == 'd') ADVANCE(531);
      if (lookahead == 'e') ADVANCE(551);
      if (lookahead == 'i') ADVANCE(539);
      if (lookahead == 'u') ADVANCE(556);
      if (lookahead == 'w') ADVANCE(543);
      if (lookahead == '|') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(630);
      if (lookahead == '#') ADVANCE(636);
      if (lookahead == '-') ADVANCE(639);
      if (lookahead == '.') ADVANCE(635);
      if (lookahead == '/') ADVANCE(629);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == 'c') ADVANCE(516);
      if (lookahead == 'd') ADVANCE(559);
      if (lookahead == 'e') ADVANCE(551);
      if (lookahead == 'i') ADVANCE(539);
      if (lookahead == 'u') ADVANCE(556);
      if (lookahead == '|') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '/') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '=') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'f') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'i') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(635);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(593);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(637);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(620);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_unbuffered_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(641);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 150},
  [2] = {.lex_state = 150},
  [3] = {.lex_state = 150},
  [4] = {.lex_state = 149, .external_lex_state = 2},
  [5] = {.lex_state = 149, .external_lex_state = 2},
  [6] = {.lex_state = 149, .external_lex_state = 3},
  [7] = {.lex_state = 149, .external_lex_state = 2},
  [8] = {.lex_state = 149, .external_lex_state = 2},
  [9] = {.lex_state = 149, .external_lex_state = 2},
  [10] = {.lex_state = 150, .external_lex_state = 2},
  [11] = {.lex_state = 149},
  [12] = {.lex_state = 150, .external_lex_state = 2},
  [13] = {.lex_state = 149},
  [14] = {.lex_state = 149, .external_lex_state = 2},
  [15] = {.lex_state = 149, .external_lex_state = 4},
  [16] = {.lex_state = 149, .external_lex_state = 2},
  [17] = {.lex_state = 146, .external_lex_state = 2},
  [18] = {.lex_state = 149, .external_lex_state = 4},
  [19] = {.lex_state = 146, .external_lex_state = 2},
  [20] = {.lex_state = 149, .external_lex_state = 4},
  [21] = {.lex_state = 149, .external_lex_state = 3},
  [22] = {.lex_state = 149, .external_lex_state = 4},
  [23] = {.lex_state = 150, .external_lex_state = 2},
  [24] = {.lex_state = 149, .external_lex_state = 4},
  [25] = {.lex_state = 149, .external_lex_state = 4},
  [26] = {.lex_state = 149, .external_lex_state = 4},
  [27] = {.lex_state = 149, .external_lex_state = 4},
  [28] = {.lex_state = 146, .external_lex_state = 2},
  [29] = {.lex_state = 148, .external_lex_state = 2},
  [30] = {.lex_state = 149, .external_lex_state = 2},
  [31] = {.lex_state = 149, .external_lex_state = 2},
  [32] = {.lex_state = 149, .external_lex_state = 2},
  [33] = {.lex_state = 149, .external_lex_state = 2},
  [34] = {.lex_state = 149, .external_lex_state = 2},
  [35] = {.lex_state = 147, .external_lex_state = 2},
  [36] = {.lex_state = 149, .external_lex_state = 2},
  [37] = {.lex_state = 149, .external_lex_state = 2},
  [38] = {.lex_state = 149, .external_lex_state = 2},
  [39] = {.lex_state = 150, .external_lex_state = 4},
  [40] = {.lex_state = 149, .external_lex_state = 2},
  [41] = {.lex_state = 149, .external_lex_state = 2},
  [42] = {.lex_state = 150, .external_lex_state = 4},
  [43] = {.lex_state = 149, .external_lex_state = 2},
  [44] = {.lex_state = 150, .external_lex_state = 4},
  [45] = {.lex_state = 149, .external_lex_state = 2},
  [46] = {.lex_state = 148, .external_lex_state = 2},
  [47] = {.lex_state = 148, .external_lex_state = 2},
  [48] = {.lex_state = 149, .external_lex_state = 2},
  [49] = {.lex_state = 149, .external_lex_state = 2},
  [50] = {.lex_state = 150, .external_lex_state = 4},
  [51] = {.lex_state = 149, .external_lex_state = 2},
  [52] = {.lex_state = 149, .external_lex_state = 2},
  [53] = {.lex_state = 149, .external_lex_state = 2},
  [54] = {.lex_state = 150, .external_lex_state = 4},
  [55] = {.lex_state = 149, .external_lex_state = 2},
  [56] = {.lex_state = 149, .external_lex_state = 2},
  [57] = {.lex_state = 149, .external_lex_state = 2},
  [58] = {.lex_state = 149, .external_lex_state = 2},
  [59] = {.lex_state = 149, .external_lex_state = 2},
  [60] = {.lex_state = 150, .external_lex_state = 4},
  [61] = {.lex_state = 148, .external_lex_state = 2},
  [62] = {.lex_state = 149, .external_lex_state = 2},
  [63] = {.lex_state = 149, .external_lex_state = 2},
  [64] = {.lex_state = 148, .external_lex_state = 2},
  [65] = {.lex_state = 147, .external_lex_state = 2},
  [66] = {.lex_state = 150, .external_lex_state = 5},
  [67] = {.lex_state = 150, .external_lex_state = 5},
  [68] = {.lex_state = 150},
  [69] = {.lex_state = 148, .external_lex_state = 2},
  [70] = {.lex_state = 150, .external_lex_state = 5},
  [71] = {.lex_state = 147, .external_lex_state = 2},
  [72] = {.lex_state = 149},
  [73] = {.lex_state = 150, .external_lex_state = 5},
  [74] = {.lex_state = 150, .external_lex_state = 5},
  [75] = {.lex_state = 150, .external_lex_state = 5},
  [76] = {.lex_state = 149},
  [77] = {.lex_state = 150},
  [78] = {.lex_state = 150, .external_lex_state = 4},
  [79] = {.lex_state = 150},
  [80] = {.lex_state = 150, .external_lex_state = 2},
  [81] = {.lex_state = 150, .external_lex_state = 2},
  [82] = {.lex_state = 150, .external_lex_state = 2},
  [83] = {.lex_state = 150, .external_lex_state = 2},
  [84] = {.lex_state = 150, .external_lex_state = 2},
  [85] = {.lex_state = 150, .external_lex_state = 2},
  [86] = {.lex_state = 150, .external_lex_state = 2},
  [87] = {.lex_state = 150, .external_lex_state = 5},
  [88] = {.lex_state = 150, .external_lex_state = 2},
  [89] = {.lex_state = 150, .external_lex_state = 2},
  [90] = {.lex_state = 150, .external_lex_state = 2},
  [91] = {.lex_state = 150, .external_lex_state = 2},
  [92] = {.lex_state = 150, .external_lex_state = 2},
  [93] = {.lex_state = 150, .external_lex_state = 2},
  [94] = {.lex_state = 150, .external_lex_state = 2},
  [95] = {.lex_state = 150, .external_lex_state = 2},
  [96] = {.lex_state = 150, .external_lex_state = 5},
  [97] = {.lex_state = 150, .external_lex_state = 2},
  [98] = {.lex_state = 150, .external_lex_state = 5},
  [99] = {.lex_state = 150, .external_lex_state = 2},
  [100] = {.lex_state = 150, .external_lex_state = 2},
  [101] = {.lex_state = 150, .external_lex_state = 2},
  [102] = {.lex_state = 150},
  [103] = {.lex_state = 150},
  [104] = {.lex_state = 150},
  [105] = {.lex_state = 150},
  [106] = {.lex_state = 150},
  [107] = {.lex_state = 150},
  [108] = {.lex_state = 150},
  [109] = {.lex_state = 150},
  [110] = {.lex_state = 150},
  [111] = {.lex_state = 150},
  [112] = {.lex_state = 150},
  [113] = {.lex_state = 150},
  [114] = {.lex_state = 150},
  [115] = {.lex_state = 150},
  [116] = {.lex_state = 150},
  [117] = {.lex_state = 150},
  [118] = {.lex_state = 150},
  [119] = {.lex_state = 150},
  [120] = {.lex_state = 150},
  [121] = {.lex_state = 150},
  [122] = {.lex_state = 150},
  [123] = {.lex_state = 150},
  [124] = {.lex_state = 150},
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
  [140] = {.lex_state = 54},
  [141] = {.lex_state = 60},
  [142] = {.lex_state = 60},
  [143] = {.lex_state = 60},
  [144] = {.lex_state = 54},
  [145] = {.lex_state = 60},
  [146] = {.lex_state = 60},
  [147] = {.lex_state = 66},
  [148] = {.lex_state = 66},
  [149] = {.lex_state = 66},
  [150] = {.lex_state = 53, .external_lex_state = 6},
  [151] = {.lex_state = 54, .external_lex_state = 6},
  [152] = {.lex_state = 54, .external_lex_state = 6},
  [153] = {.lex_state = 54, .external_lex_state = 6},
  [154] = {.lex_state = 60, .external_lex_state = 2},
  [155] = {.lex_state = 54, .external_lex_state = 6},
  [156] = {.lex_state = 60, .external_lex_state = 2},
  [157] = {.lex_state = 54, .external_lex_state = 6},
  [158] = {.lex_state = 54, .external_lex_state = 6},
  [159] = {.lex_state = 54, .external_lex_state = 6},
  [160] = {.lex_state = 54, .external_lex_state = 6},
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
  [172] = {.lex_state = 54, .external_lex_state = 6},
  [173] = {.lex_state = 60, .external_lex_state = 2},
  [174] = {.lex_state = 60, .external_lex_state = 2},
  [175] = {.lex_state = 49, .external_lex_state = 2},
  [176] = {.lex_state = 54, .external_lex_state = 6},
  [177] = {.lex_state = 54},
  [178] = {.lex_state = 60, .external_lex_state = 2},
  [179] = {.lex_state = 49, .external_lex_state = 2},
  [180] = {.lex_state = 49, .external_lex_state = 2},
  [181] = {.lex_state = 60, .external_lex_state = 2},
  [182] = {.lex_state = 49, .external_lex_state = 2},
  [183] = {.lex_state = 60, .external_lex_state = 2},
  [184] = {.lex_state = 60, .external_lex_state = 4},
  [185] = {.lex_state = 49, .external_lex_state = 2},
  [186] = {.lex_state = 54, .external_lex_state = 6},
  [187] = {.lex_state = 49, .external_lex_state = 6},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 49, .external_lex_state = 6},
  [190] = {.lex_state = 49, .external_lex_state = 6},
  [191] = {.lex_state = 49, .external_lex_state = 6},
  [192] = {.lex_state = 49},
  [193] = {.lex_state = 60},
  [194] = {.lex_state = 49, .external_lex_state = 6},
  [195] = {.lex_state = 49, .external_lex_state = 6},
  [196] = {.lex_state = 54},
  [197] = {.lex_state = 60},
  [198] = {.lex_state = 49, .external_lex_state = 6},
  [199] = {.lex_state = 60, .external_lex_state = 2},
  [200] = {.lex_state = 60, .external_lex_state = 2},
  [201] = {.lex_state = 60, .external_lex_state = 2},
  [202] = {.lex_state = 49, .external_lex_state = 6},
  [203] = {.lex_state = 60, .external_lex_state = 2},
  [204] = {.lex_state = 60, .external_lex_state = 2},
  [205] = {.lex_state = 49, .external_lex_state = 6},
  [206] = {.lex_state = 49, .external_lex_state = 6},
  [207] = {.lex_state = 60, .external_lex_state = 2},
  [208] = {.lex_state = 60, .external_lex_state = 2},
  [209] = {.lex_state = 49, .external_lex_state = 6},
  [210] = {.lex_state = 60, .external_lex_state = 2},
  [211] = {.lex_state = 49, .external_lex_state = 6},
  [212] = {.lex_state = 49},
  [213] = {.lex_state = 60, .external_lex_state = 2},
  [214] = {.lex_state = 49, .external_lex_state = 6},
  [215] = {.lex_state = 60, .external_lex_state = 2},
  [216] = {.lex_state = 49, .external_lex_state = 6},
  [217] = {.lex_state = 60, .external_lex_state = 2},
  [218] = {.lex_state = 60, .external_lex_state = 2},
  [219] = {.lex_state = 60},
  [220] = {.lex_state = 60, .external_lex_state = 2},
  [221] = {.lex_state = 60, .external_lex_state = 2},
  [222] = {.lex_state = 60, .external_lex_state = 2},
  [223] = {.lex_state = 60, .external_lex_state = 2},
  [224] = {.lex_state = 66},
  [225] = {.lex_state = 60, .external_lex_state = 2},
  [226] = {.lex_state = 49},
  [227] = {.lex_state = 60},
  [228] = {.lex_state = 49, .external_lex_state = 6},
  [229] = {.lex_state = 49, .external_lex_state = 6},
  [230] = {.lex_state = 49, .external_lex_state = 6},
  [231] = {.lex_state = 49, .external_lex_state = 6},
  [232] = {.lex_state = 49, .external_lex_state = 6},
  [233] = {.lex_state = 60},
  [234] = {.lex_state = 49},
  [235] = {.lex_state = 60},
  [236] = {.lex_state = 54},
  [237] = {.lex_state = 49, .external_lex_state = 6},
  [238] = {.lex_state = 49, .external_lex_state = 6},
  [239] = {.lex_state = 49, .external_lex_state = 6},
  [240] = {.lex_state = 50, .external_lex_state = 6},
  [241] = {.lex_state = 49},
  [242] = {.lex_state = 49},
  [243] = {.lex_state = 60},
  [244] = {.lex_state = 49},
  [245] = {.lex_state = 53},
  [246] = {.lex_state = 60},
  [247] = {.lex_state = 53},
  [248] = {.lex_state = 49},
  [249] = {.lex_state = 60},
  [250] = {.lex_state = 49},
  [251] = {.lex_state = 49},
  [252] = {.lex_state = 49, .external_lex_state = 6},
  [253] = {.lex_state = 60},
  [254] = {.lex_state = 49},
  [255] = {.lex_state = 60},
  [256] = {.lex_state = 50, .external_lex_state = 6},
  [257] = {.lex_state = 60},
  [258] = {.lex_state = 49},
  [259] = {.lex_state = 60},
  [260] = {.lex_state = 49},
  [261] = {.lex_state = 49},
  [262] = {.lex_state = 49},
  [263] = {.lex_state = 60},
  [264] = {.lex_state = 60},
  [265] = {.lex_state = 60},
  [266] = {.lex_state = 49},
  [267] = {.lex_state = 60},
  [268] = {.lex_state = 49, .external_lex_state = 2},
  [269] = {.lex_state = 60},
  [270] = {.lex_state = 53},
  [271] = {.lex_state = 53},
  [272] = {.lex_state = 50},
  [273] = {.lex_state = 50},
  [274] = {.lex_state = 50},
  [275] = {.lex_state = 50},
  [276] = {.lex_state = 50},
  [277] = {.lex_state = 53},
  [278] = {.lex_state = 50},
  [279] = {.lex_state = 50},
  [280] = {.lex_state = 53},
  [281] = {.lex_state = 53},
  [282] = {.lex_state = 60},
  [283] = {.lex_state = 53},
  [284] = {.lex_state = 53},
  [285] = {.lex_state = 53},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 50},
  [289] = {.lex_state = 53},
  [290] = {.lex_state = 53},
  [291] = {.lex_state = 53},
  [292] = {.lex_state = 53},
  [293] = {.lex_state = 53},
  [294] = {.lex_state = 53},
  [295] = {.lex_state = 53},
  [296] = {.lex_state = 50},
  [297] = {.lex_state = 50},
  [298] = {.lex_state = 53},
  [299] = {.lex_state = 64},
  [300] = {.lex_state = 50},
  [301] = {.lex_state = 62},
  [302] = {.lex_state = 62},
  [303] = {.lex_state = 64},
  [304] = {.lex_state = 57, .external_lex_state = 6},
  [305] = {.lex_state = 53},
  [306] = {.lex_state = 0, .external_lex_state = 5},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0, .external_lex_state = 6},
  [310] = {.lex_state = 0, .external_lex_state = 5},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0, .external_lex_state = 5},
  [314] = {.lex_state = 0, .external_lex_state = 5},
  [315] = {.lex_state = 150},
  [316] = {.lex_state = 641},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0, .external_lex_state = 6},
  [319] = {.lex_state = 0, .external_lex_state = 6},
  [320] = {.lex_state = 0, .external_lex_state = 6},
  [321] = {.lex_state = 0, .external_lex_state = 6},
  [322] = {.lex_state = 0, .external_lex_state = 6},
  [323] = {.lex_state = 66},
  [324] = {.lex_state = 51},
  [325] = {.lex_state = 51},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 641},
  [328] = {.lex_state = 0, .external_lex_state = 6},
  [329] = {.lex_state = 0, .external_lex_state = 6},
  [330] = {.lex_state = 0, .external_lex_state = 6},
  [331] = {.lex_state = 50},
  [332] = {.lex_state = 52},
  [333] = {.lex_state = 0, .external_lex_state = 5},
  [334] = {.lex_state = 0, .external_lex_state = 5},
  [335] = {.lex_state = 0, .external_lex_state = 5},
  [336] = {.lex_state = 0, .external_lex_state = 6},
  [337] = {.lex_state = 0, .external_lex_state = 6},
  [338] = {.lex_state = 0, .external_lex_state = 6},
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
    [anon_sym_POUND_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(326),
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
    STATE(48), 1,
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
    STATE(43), 1,
      sym_unbuffered_code,
    ACTIONS(77), 2,
      sym_class,
      sym_id,
    STATE(14), 2,
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
    STATE(36), 1,
      sym_unbuffered_code,
    ACTIONS(77), 2,
      sym_class,
      sym_id,
    STATE(16), 2,
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
  [286] = 5,
    ACTIONS(118), 1,
      sym_tag_name,
    ACTIONS(121), 2,
      sym_class,
      sym_id,
    STATE(9), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(116), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(114), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [317] = 7,
    ACTIONS(124), 1,
      anon_sym_PIPE,
    ACTIONS(126), 1,
      sym_tag_name,
    ACTIONS(130), 1,
      sym__dedent,
    ACTIONS(128), 2,
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
  [352] = 6,
    ACTIONS(136), 1,
      anon_sym_when,
    ACTIONS(138), 1,
      anon_sym_default,
    STATE(6), 1,
      sym__when_keyword,
    STATE(13), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(134), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(132), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [385] = 6,
    ACTIONS(140), 1,
      anon_sym_PIPE,
    ACTIONS(143), 1,
      sym_tag_name,
    ACTIONS(146), 2,
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
  [418] = 6,
    ACTIONS(153), 1,
      anon_sym_when,
    ACTIONS(156), 1,
      anon_sym_default,
    STATE(6), 1,
      sym__when_keyword,
    STATE(13), 2,
      sym_when,
      aux_sym_case_repeat1,
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
  [451] = 5,
    ACTIONS(75), 1,
      sym_tag_name,
    ACTIONS(77), 2,
      sym_class,
      sym_id,
    STATE(9), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(161), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(159), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [482] = 4,
    ACTIONS(167), 1,
      sym__indent,
    STATE(32), 1,
      sym_children,
    ACTIONS(165), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(163), 10,
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
  [511] = 5,
    ACTIONS(75), 1,
      sym_tag_name,
    ACTIONS(77), 2,
      sym_class,
      sym_id,
    STATE(9), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(106), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(104), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [542] = 4,
    ACTIONS(173), 1,
      sym__un_delimited_javascript_line,
    STATE(17), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(169), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(171), 16,
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
  [571] = 4,
    ACTIONS(167), 1,
      sym__indent,
    STATE(41), 1,
      sym_children,
    ACTIONS(178), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(176), 10,
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
  [600] = 4,
    ACTIONS(184), 1,
      sym__un_delimited_javascript_line,
    STATE(17), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(180), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(182), 16,
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
  [629] = 4,
    ACTIONS(186), 1,
      sym__indent,
    STATE(32), 1,
      sym_children,
    ACTIONS(165), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(163), 10,
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
  [658] = 2,
    ACTIONS(190), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(188), 12,
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
  [683] = 4,
    ACTIONS(167), 1,
      sym__indent,
    STATE(37), 1,
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
  [712] = 7,
    ACTIONS(124), 1,
      anon_sym_PIPE,
    ACTIONS(126), 1,
      sym_tag_name,
    ACTIONS(196), 1,
      sym__dedent,
    ACTIONS(128), 2,
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
  [747] = 4,
    ACTIONS(202), 1,
      sym__indent,
    STATE(38), 1,
      sym_children,
    ACTIONS(200), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(198), 10,
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
    ACTIONS(208), 1,
      sym__indent,
    STATE(57), 1,
      sym_children,
    ACTIONS(206), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(204), 10,
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
  [805] = 4,
    ACTIONS(214), 1,
      sym__indent,
    ACTIONS(216), 1,
      sym__dedent,
    ACTIONS(212), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
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
  [833] = 3,
    ACTIONS(222), 1,
      sym__indent,
    ACTIONS(220), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(218), 10,
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
  [859] = 2,
    ACTIONS(224), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(226), 17,
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
  [883] = 5,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(232), 1,
      sym__comment_content,
    ACTIONS(234), 1,
      sym__dedent,
    STATE(64), 1,
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
  [912] = 2,
    ACTIONS(238), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(236), 10,
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
  [935] = 2,
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
  [958] = 2,
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
  [981] = 2,
    ACTIONS(242), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(240), 10,
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
  [1004] = 3,
    ACTIONS(248), 1,
      sym__dedent,
    ACTIONS(246), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(244), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1029] = 4,
    ACTIONS(250), 1,
      sym__un_delimited_javascript_line,
    STATE(65), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(180), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(182), 14,
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
  [1056] = 2,
    ACTIONS(106), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(104), 10,
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
  [1079] = 2,
    ACTIONS(178), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(176), 10,
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
  [1102] = 2,
    ACTIONS(165), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(163), 10,
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
  [1125] = 4,
    ACTIONS(252), 1,
      sym__indent,
    STATE(99), 1,
      sym_children,
    ACTIONS(178), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(176), 10,
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
  [1152] = 2,
    ACTIONS(178), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(176), 10,
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
  [1175] = 2,
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
  [1198] = 4,
    ACTIONS(258), 1,
      sym__indent,
    STATE(93), 1,
      sym_children,
    ACTIONS(200), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(198), 10,
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
  [1225] = 2,
    ACTIONS(161), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(159), 10,
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
  [1248] = 4,
    ACTIONS(260), 1,
      sym__indent,
    STATE(86), 1,
      sym_children,
    ACTIONS(206), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(204), 10,
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
  [1275] = 2,
    ACTIONS(264), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(262), 10,
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
  [1298] = 5,
    ACTIONS(232), 1,
      sym__comment_content,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
    ACTIONS(270), 1,
      sym__dedent,
    STATE(61), 1,
      aux_sym_comment_repeat1,
    ACTIONS(268), 14,
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
  [1327] = 5,
    ACTIONS(232), 1,
      sym__comment_content,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
    ACTIONS(276), 1,
      sym__dedent,
    STATE(29), 1,
      aux_sym_comment_repeat1,
    ACTIONS(274), 14,
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
  [1356] = 3,
    ACTIONS(216), 1,
      sym__dedent,
    ACTIONS(212), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
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
  [1381] = 2,
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
  [1404] = 4,
    ACTIONS(252), 1,
      sym__indent,
    STATE(100), 1,
      sym_children,
    ACTIONS(165), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(163), 10,
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
  [1431] = 2,
    ACTIONS(165), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(163), 10,
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
  [1454] = 2,
    ACTIONS(284), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(282), 10,
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
  [1477] = 2,
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
  [1500] = 4,
    ACTIONS(290), 1,
      sym__indent,
    STATE(100), 1,
      sym_children,
    ACTIONS(165), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(163), 10,
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
  [1527] = 2,
    ACTIONS(200), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(198), 10,
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
  [1550] = 3,
    ACTIONS(296), 1,
      sym__dedent,
    ACTIONS(294), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
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
  [1575] = 2,
    ACTIONS(200), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(198), 10,
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
  [1598] = 2,
    ACTIONS(300), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(298), 10,
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
  [1621] = 2,
    ACTIONS(304), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(302), 10,
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
  [1644] = 4,
    ACTIONS(252), 1,
      sym__indent,
    STATE(94), 1,
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
  [1671] = 5,
    ACTIONS(232), 1,
      sym__comment_content,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
    ACTIONS(276), 1,
      sym__dedent,
    STATE(64), 1,
      aux_sym_comment_repeat1,
    ACTIONS(274), 14,
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
  [1700] = 2,
    ACTIONS(308), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(306), 10,
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
  [1723] = 2,
    ACTIONS(206), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(204), 10,
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
  [1746] = 4,
    ACTIONS(314), 1,
      sym__comment_content,
    STATE(64), 1,
      aux_sym_comment_repeat1,
    ACTIONS(310), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(312), 14,
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
  [1773] = 4,
    ACTIONS(317), 1,
      sym__un_delimited_javascript_line,
    STATE(65), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(169), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(171), 14,
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
  [1800] = 4,
    ACTIONS(320), 1,
      sym__indent,
    STATE(111), 1,
      sym_children,
    ACTIONS(165), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(163), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1826] = 4,
    ACTIONS(322), 1,
      sym__indent,
    STATE(111), 1,
      sym_children,
    ACTIONS(165), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(163), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1852] = 5,
    ACTIONS(324), 1,
      sym_tag_name,
    ACTIONS(327), 2,
      sym_class,
      sym_id,
    STATE(68), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(116), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
    ACTIONS(114), 7,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [1880] = 2,
    ACTIONS(310), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(312), 15,
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
  [1902] = 4,
    ACTIONS(322), 1,
      sym__indent,
    STATE(121), 1,
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
    ACTIONS(224), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(226), 15,
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
  [1950] = 2,
    ACTIONS(212), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
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
  [1972] = 4,
    ACTIONS(330), 1,
      sym__indent,
    STATE(112), 1,
      sym_children,
    ACTIONS(200), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(198), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1998] = 4,
    ACTIONS(332), 1,
      sym__indent,
    STATE(105), 1,
      sym_children,
    ACTIONS(206), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(204), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2024] = 4,
    ACTIONS(322), 1,
      sym__indent,
    STATE(115), 1,
      sym_children,
    ACTIONS(178), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(176), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2050] = 2,
    ACTIONS(336), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(334), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2072] = 3,
    STATE(68), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(340), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
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
  [2096] = 3,
    ACTIONS(342), 1,
      sym__indent,
    ACTIONS(220), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(218), 10,
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
  [2120] = 3,
    STATE(68), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(346), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(344), 9,
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
  [2165] = 3,
    ACTIONS(348), 1,
      sym__dedent,
    ACTIONS(246), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(244), 9,
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
    ACTIONS(206), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(204), 10,
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
    ACTIONS(284), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(282), 10,
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
  [2251] = 2,
    ACTIONS(300), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(298), 10,
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
  [2272] = 2,
    ACTIONS(200), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(198), 10,
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
  [2293] = 3,
    ACTIONS(354), 1,
      sym__indent,
    ACTIONS(352), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(350), 9,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2316] = 3,
    ACTIONS(356), 1,
      sym__dedent,
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
  [2339] = 2,
    ACTIONS(200), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(198), 10,
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
  [2360] = 2,
    ACTIONS(165), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(163), 10,
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
  [2381] = 2,
    ACTIONS(308), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(306), 10,
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
  [2402] = 2,
    ACTIONS(264), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(262), 10,
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
  [2423] = 2,
    ACTIONS(165), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(163), 10,
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
  [2444] = 2,
    ACTIONS(178), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(176), 10,
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
  [2465] = 2,
    ACTIONS(242), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(240), 10,
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
  [2486] = 3,
    ACTIONS(358), 1,
      sym__indent,
    ACTIONS(268), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(266), 9,
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
    ACTIONS(178), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(176), 10,
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
    ACTIONS(220), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(218), 9,
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
  [2574] = 2,
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
  [2595] = 2,
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
  [2616] = 2,
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
  [2636] = 2,
    ACTIONS(200), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(198), 9,
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
    ACTIONS(274), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(272), 9,
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
    ACTIONS(200), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(198), 9,
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
    ACTIONS(165), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(163), 9,
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
  [2736] = 2,
    ACTIONS(206), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(204), 9,
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
    ACTIONS(242), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(240), 9,
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
  [2796] = 2,
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
  [2816] = 2,
    ACTIONS(165), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(163), 9,
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
  [2856] = 2,
    ACTIONS(300), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(298), 9,
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
  [2896] = 2,
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
  [2916] = 2,
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
  [2936] = 2,
    ACTIONS(284), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(282), 9,
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
    ACTIONS(238), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(236), 9,
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
    ACTIONS(178), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(176), 9,
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
    ACTIONS(178), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(176), 9,
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
    ACTIONS(308), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(306), 9,
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
  [3056] = 2,
    ACTIONS(264), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(262), 9,
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
    STATE(129), 1,
      aux_sym_tag_repeat1,
    STATE(157), 1,
      sym_attributes,
    ACTIONS(382), 2,
      sym_class,
      sym_id,
    STATE(63), 3,
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
    STATE(150), 1,
      aux_sym_tag_repeat1,
    STATE(158), 1,
      sym_attributes,
    ACTIONS(396), 2,
      sym_class,
      sym_id,
    STATE(208), 3,
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
    STATE(130), 1,
      aux_sym_tag_repeat1,
    STATE(160), 1,
      sym_attributes,
    ACTIONS(410), 2,
      sym_class,
      sym_id,
    STATE(108), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3187] = 11,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      anon_sym_COLON,
    ACTIONS(416), 1,
      anon_sym_BANG_EQ,
    ACTIONS(418), 1,
      anon_sym_EQ,
    ACTIONS(420), 1,
      anon_sym_,
    ACTIONS(422), 1,
      anon_sym_DOT,
    ACTIONS(424), 1,
      sym__newline,
    STATE(150), 1,
      aux_sym_tag_repeat1,
    STATE(152), 1,
      sym_attributes,
    ACTIONS(396), 2,
      sym_class,
      sym_id,
    STATE(89), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3224] = 11,
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
    ACTIONS(430), 1,
      sym__newline,
    STATE(150), 1,
      aux_sym_tag_repeat1,
    STATE(159), 1,
      sym_attributes,
    ACTIONS(396), 2,
      sym_class,
      sym_id,
    STATE(55), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3261] = 11,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(402), 1,
      anon_sym_BANG_EQ,
    ACTIONS(404), 1,
      anon_sym_EQ,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(432), 1,
      anon_sym_COLON,
    ACTIONS(434), 1,
      anon_sym_,
    ACTIONS(436), 1,
      sym__newline,
    STATE(150), 1,
      aux_sym_tag_repeat1,
    STATE(155), 1,
      sym_attributes,
    ACTIONS(396), 2,
      sym_class,
      sym_id,
    STATE(103), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3298] = 11,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(416), 1,
      anon_sym_BANG_EQ,
    ACTIONS(418), 1,
      anon_sym_EQ,
    ACTIONS(422), 1,
      anon_sym_DOT,
    ACTIONS(438), 1,
      anon_sym_COLON,
    ACTIONS(440), 1,
      anon_sym_,
    ACTIONS(444), 1,
      sym__newline,
    STATE(128), 1,
      aux_sym_tag_repeat1,
    STATE(153), 1,
      sym_attributes,
    ACTIONS(442), 2,
      sym_class,
      sym_id,
    STATE(82), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3335] = 11,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_BANG_EQ,
    ACTIONS(390), 1,
      anon_sym_EQ,
    ACTIONS(394), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_COLON,
    ACTIONS(448), 1,
      anon_sym_,
    ACTIONS(452), 1,
      sym__newline,
    STATE(126), 1,
      aux_sym_tag_repeat1,
    STATE(151), 1,
      sym_attributes,
    ACTIONS(450), 2,
      sym_class,
      sym_id,
    STATE(203), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3372] = 6,
    ACTIONS(454), 1,
      anon_sym_PIPE,
    ACTIONS(456), 1,
      anon_sym_BANG_EQ,
    ACTIONS(458), 1,
      anon_sym_EQ,
    STATE(223), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(460), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(154), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3397] = 6,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(462), 1,
      anon_sym_BANG_EQ,
    ACTIONS(464), 1,
      anon_sym_EQ,
    STATE(31), 2,
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
  [3422] = 6,
    ACTIONS(124), 1,
      anon_sym_PIPE,
    ACTIONS(466), 1,
      anon_sym_BANG_EQ,
    ACTIONS(468), 1,
      anon_sym_EQ,
    STATE(97), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(128), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(23), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3447] = 6,
    ACTIONS(124), 1,
      anon_sym_PIPE,
    ACTIONS(466), 1,
      anon_sym_BANG_EQ,
    ACTIONS(468), 1,
      anon_sym_EQ,
    STATE(101), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(128), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(23), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3472] = 6,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(462), 1,
      anon_sym_BANG_EQ,
    ACTIONS(464), 1,
      anon_sym_EQ,
    STATE(40), 2,
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
  [3497] = 6,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(462), 1,
      anon_sym_BANG_EQ,
    ACTIONS(464), 1,
      anon_sym_EQ,
    STATE(51), 2,
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
  [3522] = 6,
    ACTIONS(17), 1,
      anon_sym_BANG_EQ,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(124), 1,
      anon_sym_PIPE,
    STATE(120), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(128), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(10), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3547] = 6,
    ACTIONS(470), 1,
      anon_sym_EQ,
    ACTIONS(472), 1,
      anon_sym_,
    ACTIONS(474), 1,
      anon_sym_DOT,
    STATE(144), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(476), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(270), 6,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
  [3572] = 6,
    ACTIONS(454), 1,
      anon_sym_PIPE,
    ACTIONS(456), 1,
      anon_sym_BANG_EQ,
    ACTIONS(458), 1,
      anon_sym_EQ,
    STATE(210), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(460), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(154), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3597] = 6,
    ACTIONS(454), 1,
      anon_sym_PIPE,
    ACTIONS(456), 1,
      anon_sym_BANG_EQ,
    ACTIONS(458), 1,
      anon_sym_EQ,
    STATE(218), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(460), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(154), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3622] = 6,
    ACTIONS(17), 1,
      anon_sym_BANG_EQ,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(124), 1,
      anon_sym_PIPE,
    STATE(106), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(128), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(10), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3647] = 6,
    ACTIONS(470), 1,
      anon_sym_EQ,
    ACTIONS(474), 1,
      anon_sym_DOT,
    ACTIONS(478), 1,
      anon_sym_,
    STATE(177), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(480), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(289), 6,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
  [3672] = 6,
    ACTIONS(124), 1,
      anon_sym_PIPE,
    ACTIONS(466), 1,
      anon_sym_BANG_EQ,
    ACTIONS(468), 1,
      anon_sym_EQ,
    STATE(90), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(128), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(23), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3697] = 6,
    ACTIONS(17), 1,
      anon_sym_BANG_EQ,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(124), 1,
      anon_sym_PIPE,
    STATE(123), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(128), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(10), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3722] = 8,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
    ACTIONS(484), 1,
      aux_sym__attribute_token1,
    STATE(140), 1,
      sym_attribute_name,
    STATE(148), 1,
      aux_sym_attributes_repeat1,
    STATE(247), 1,
      sym_angular_attribute_name,
    STATE(283), 1,
      sym_attribute,
    STATE(285), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(486), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [3750] = 8,
    ACTIONS(484), 1,
      aux_sym__attribute_token1,
    ACTIONS(488), 1,
      anon_sym_RPAREN,
    STATE(140), 1,
      sym_attribute_name,
    STATE(149), 1,
      aux_sym_attributes_repeat1,
    STATE(247), 1,
      sym_angular_attribute_name,
    STATE(271), 1,
      sym_attribute,
    STATE(285), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(486), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [3778] = 8,
    ACTIONS(490), 1,
      anon_sym_RPAREN,
    ACTIONS(492), 1,
      aux_sym__attribute_token1,
    STATE(140), 1,
      sym_attribute_name,
    STATE(149), 1,
      aux_sym_attributes_repeat1,
    STATE(247), 1,
      sym_angular_attribute_name,
    STATE(305), 1,
      sym_attribute,
    STATE(285), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(495), 3,
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
    STATE(208), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3849] = 7,
    ACTIONS(416), 1,
      anon_sym_BANG_EQ,
    ACTIONS(418), 1,
      anon_sym_EQ,
    ACTIONS(422), 1,
      anon_sym_DOT,
    ACTIONS(505), 1,
      anon_sym_COLON,
    ACTIONS(507), 1,
      anon_sym_,
    ACTIONS(509), 1,
      sym__newline,
    STATE(90), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3873] = 7,
    ACTIONS(414), 1,
      anon_sym_COLON,
    ACTIONS(416), 1,
      anon_sym_BANG_EQ,
    ACTIONS(418), 1,
      anon_sym_EQ,
    ACTIONS(420), 1,
      anon_sym_,
    ACTIONS(422), 1,
      anon_sym_DOT,
    ACTIONS(424), 1,
      sym__newline,
    STATE(89), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3897] = 4,
    ACTIONS(454), 1,
      anon_sym_PIPE,
    ACTIONS(511), 1,
      sym__dedent,
    ACTIONS(460), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(156), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3915] = 7,
    ACTIONS(402), 1,
      anon_sym_BANG_EQ,
    ACTIONS(404), 1,
      anon_sym_EQ,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(513), 1,
      anon_sym_COLON,
    ACTIONS(515), 1,
      anon_sym_,
    ACTIONS(517), 1,
      sym__newline,
    STATE(106), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3939] = 4,
    ACTIONS(81), 1,
      sym__dedent,
    ACTIONS(519), 1,
      anon_sym_PIPE,
    ACTIONS(522), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(156), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3957] = 7,
    ACTIONS(372), 1,
      anon_sym_BANG_EQ,
    ACTIONS(374), 1,
      anon_sym_EQ,
    ACTIONS(378), 1,
      anon_sym_DOT,
    ACTIONS(426), 1,
      anon_sym_COLON,
    ACTIONS(428), 1,
      anon_sym_,
    ACTIONS(430), 1,
      sym__newline,
    STATE(55), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3981] = 7,
    ACTIONS(388), 1,
      anon_sym_BANG_EQ,
    ACTIONS(390), 1,
      anon_sym_EQ,
    ACTIONS(394), 1,
      anon_sym_DOT,
    ACTIONS(525), 1,
      anon_sym_COLON,
    ACTIONS(527), 1,
      anon_sym_,
    ACTIONS(529), 1,
      sym__newline,
    STATE(210), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4005] = 7,
    ACTIONS(372), 1,
      anon_sym_BANG_EQ,
    ACTIONS(374), 1,
      anon_sym_EQ,
    ACTIONS(378), 1,
      anon_sym_DOT,
    ACTIONS(531), 1,
      anon_sym_COLON,
    ACTIONS(533), 1,
      anon_sym_,
    ACTIONS(535), 1,
      sym__newline,
    STATE(51), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4029] = 7,
    ACTIONS(402), 1,
      anon_sym_BANG_EQ,
    ACTIONS(404), 1,
      anon_sym_EQ,
    ACTIONS(408), 1,
      anon_sym_DOT,
    ACTIONS(432), 1,
      anon_sym_COLON,
    ACTIONS(434), 1,
      anon_sym_,
    ACTIONS(436), 1,
      sym__newline,
    STATE(103), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4053] = 3,
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
  [4068] = 3,
    ACTIONS(124), 1,
      anon_sym_PIPE,
    ACTIONS(128), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(10), 4,
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
    STATE(290), 1,
      sym_quoted_attribute_value,
  [4108] = 3,
    ACTIONS(454), 1,
      anon_sym_PIPE,
    ACTIONS(460), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(154), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4123] = 3,
    ACTIONS(124), 1,
      anon_sym_PIPE,
    ACTIONS(128), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(23), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4138] = 3,
    ACTIONS(551), 1,
      sym__indent,
    STATE(225), 1,
      sym_children,
    ACTIONS(176), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4152] = 3,
    ACTIONS(553), 1,
      sym__indent,
    STATE(217), 1,
      sym_children,
    ACTIONS(163), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4166] = 3,
    ACTIONS(551), 1,
      sym__indent,
    STATE(222), 1,
      sym_children,
    ACTIONS(192), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4180] = 3,
    ACTIONS(551), 1,
      sym__indent,
    STATE(217), 1,
      sym_children,
    ACTIONS(163), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4194] = 3,
    ACTIONS(555), 1,
      sym__indent,
    STATE(213), 1,
      sym_children,
    ACTIONS(198), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4208] = 3,
    ACTIONS(557), 1,
      sym__indent,
    STATE(207), 1,
      sym_children,
    ACTIONS(204), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4222] = 2,
    ACTIONS(561), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(559), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [4233] = 3,
    ACTIONS(114), 1,
      sym__dedent,
    STATE(173), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(563), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4246] = 3,
    ACTIONS(566), 1,
      sym__dedent,
    STATE(173), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(460), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4259] = 6,
    ACTIONS(568), 1,
      sym_content,
    ACTIONS(571), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(574), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(577), 1,
      sym__dedent,
    STATE(175), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(209), 1,
      aux_sym__content_or_javascript,
  [4278] = 2,
    ACTIONS(581), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(579), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [4289] = 4,
    ACTIONS(585), 1,
      anon_sym_,
    ACTIONS(587), 1,
      anon_sym_DOT,
    STATE(177), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(583), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4304] = 3,
    ACTIONS(590), 1,
      sym__dedent,
    STATE(173), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(460), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4317] = 6,
    ACTIONS(592), 1,
      sym_content,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(598), 1,
      sym__dedent,
    STATE(175), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(209), 1,
      aux_sym__content_or_javascript,
  [4336] = 6,
    ACTIONS(592), 1,
      sym_content,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(600), 1,
      sym__dedent,
    STATE(175), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(209), 1,
      aux_sym__content_or_javascript,
  [4355] = 3,
    ACTIONS(602), 1,
      sym__dedent,
    STATE(173), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(460), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4368] = 6,
    ACTIONS(592), 1,
      sym_content,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(604), 1,
      sym__dedent,
    STATE(175), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(209), 1,
      aux_sym__content_or_javascript,
  [4387] = 3,
    ACTIONS(606), 1,
      sym__dedent,
    STATE(173), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(460), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4400] = 2,
    ACTIONS(608), 1,
      sym__indent,
    ACTIONS(218), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4411] = 6,
    ACTIONS(592), 1,
      sym_content,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(610), 1,
      sym__dedent,
    STATE(175), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(209), 1,
      aux_sym__content_or_javascript,
  [4430] = 2,
    ACTIONS(614), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(612), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [4441] = 5,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(616), 1,
      sym_content,
    ACTIONS(618), 1,
      sym__newline,
    STATE(238), 1,
      aux_sym__content_or_javascript,
  [4457] = 4,
    ACTIONS(620), 1,
      anon_sym_when,
    ACTIONS(622), 1,
      anon_sym_default,
    STATE(6), 1,
      sym__when_keyword,
    STATE(11), 2,
      sym_when,
      aux_sym_case_repeat1,
  [4471] = 5,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(616), 1,
      sym_content,
    ACTIONS(624), 1,
      sym__newline,
    STATE(238), 1,
      aux_sym__content_or_javascript,
  [4487] = 5,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(616), 1,
      sym_content,
    ACTIONS(626), 1,
      sym__newline,
    STATE(238), 1,
      aux_sym__content_or_javascript,
  [4503] = 5,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(628), 1,
      sym_content,
    ACTIONS(630), 1,
      sym__newline,
    STATE(232), 1,
      aux_sym__content_or_javascript,
  [4519] = 5,
    ACTIONS(592), 1,
      sym_content,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(180), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(209), 1,
      aux_sym__content_or_javascript,
  [4535] = 2,
    STATE(77), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(25), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4545] = 5,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(616), 1,
      sym_content,
    ACTIONS(632), 1,
      sym__newline,
    STATE(238), 1,
      aux_sym__content_or_javascript,
  [4561] = 5,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(616), 1,
      sym_content,
    ACTIONS(634), 1,
      sym__newline,
    STATE(238), 1,
      aux_sym__content_or_javascript,
  [4577] = 2,
    ACTIONS(638), 1,
      anon_sym_,
    ACTIONS(636), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4587] = 2,
    STATE(181), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(460), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4597] = 5,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(616), 1,
      sym_content,
    ACTIONS(640), 1,
      sym__newline,
    STATE(238), 1,
      aux_sym__content_or_javascript,
  [4613] = 1,
    ACTIONS(278), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4621] = 1,
    ACTIONS(286), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4629] = 1,
    ACTIONS(282), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4637] = 5,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(642), 1,
      sym_content,
    ACTIONS(644), 1,
      sym__newline,
    STATE(205), 1,
      aux_sym__content_or_javascript,
  [4653] = 1,
    ACTIONS(204), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4661] = 1,
    ACTIONS(306), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4669] = 5,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(616), 1,
      sym_content,
    ACTIONS(646), 1,
      sym__newline,
    STATE(238), 1,
      aux_sym__content_or_javascript,
  [4685] = 5,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(616), 1,
      sym_content,
    ACTIONS(648), 1,
      sym__newline,
    STATE(238), 1,
      aux_sym__content_or_javascript,
  [4701] = 1,
    ACTIONS(198), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4709] = 1,
    ACTIONS(198), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4717] = 5,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(616), 1,
      sym_content,
    ACTIONS(650), 1,
      sym__newline,
    STATE(238), 1,
      aux_sym__content_or_javascript,
  [4733] = 1,
    ACTIONS(163), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4741] = 5,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(616), 1,
      sym_content,
    ACTIONS(652), 1,
      sym__newline,
    STATE(238), 1,
      aux_sym__content_or_javascript,
  [4757] = 5,
    ACTIONS(592), 1,
      sym_content,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(179), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(209), 1,
      aux_sym__content_or_javascript,
  [4773] = 1,
    ACTIONS(163), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4781] = 5,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(616), 1,
      sym_content,
    ACTIONS(654), 1,
      sym__newline,
    STATE(238), 1,
      aux_sym__content_or_javascript,
  [4797] = 1,
    ACTIONS(240), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4805] = 5,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(616), 1,
      sym_content,
    ACTIONS(656), 1,
      sym__newline,
    STATE(238), 1,
      aux_sym__content_or_javascript,
  [4821] = 1,
    ACTIONS(192), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4829] = 1,
    ACTIONS(192), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4837] = 2,
    STATE(178), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(460), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4847] = 1,
    ACTIONS(298), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4855] = 1,
    ACTIONS(262), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4863] = 1,
    ACTIONS(176), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4871] = 1,
    ACTIONS(176), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4879] = 1,
    ACTIONS(490), 5,
      anon_sym_RPAREN,
      aux_sym__attribute_token1,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [4887] = 1,
    ACTIONS(254), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4895] = 5,
    ACTIONS(592), 1,
      sym_content,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(182), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(209), 1,
      aux_sym__content_or_javascript,
  [4911] = 2,
    STATE(174), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(460), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4921] = 5,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(616), 1,
      sym_content,
    ACTIONS(658), 1,
      sym__newline,
    STATE(238), 1,
      aux_sym__content_or_javascript,
  [4937] = 5,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(616), 1,
      sym_content,
    ACTIONS(660), 1,
      sym__newline,
    STATE(238), 1,
      aux_sym__content_or_javascript,
  [4953] = 5,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(662), 1,
      sym_content,
    ACTIONS(664), 1,
      sym__newline,
    STATE(190), 1,
      aux_sym__content_or_javascript,
  [4969] = 5,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(666), 1,
      sym_content,
    ACTIONS(668), 1,
      sym__newline,
    STATE(229), 1,
      aux_sym__content_or_javascript,
  [4985] = 5,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(616), 1,
      sym_content,
    ACTIONS(670), 1,
      sym__newline,
    STATE(238), 1,
      aux_sym__content_or_javascript,
  [5001] = 2,
    STATE(79), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(25), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5011] = 5,
    ACTIONS(592), 1,
      sym_content,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(185), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(209), 1,
      aux_sym__content_or_javascript,
  [5027] = 2,
    STATE(183), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(460), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5037] = 2,
    ACTIONS(674), 1,
      anon_sym_,
    ACTIONS(672), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5047] = 5,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(616), 1,
      sym_content,
    ACTIONS(676), 1,
      sym__newline,
    STATE(238), 1,
      aux_sym__content_or_javascript,
  [5063] = 5,
    ACTIONS(678), 1,
      sym_content,
    ACTIONS(681), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(684), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(687), 1,
      sym__newline,
    STATE(238), 1,
      aux_sym__content_or_javascript,
  [5079] = 5,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(616), 1,
      sym_content,
    ACTIONS(689), 1,
      sym__newline,
    STATE(238), 1,
      aux_sym__content_or_javascript,
  [5095] = 4,
    ACTIONS(691), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(693), 1,
      sym__newline,
    STATE(88), 1,
      sym__single_line_buf_code,
    STATE(328), 1,
      sym__un_delimited_javascript,
  [5108] = 4,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(695), 1,
      sym_content,
    STATE(211), 1,
      aux_sym__content_or_javascript,
  [5121] = 4,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(697), 1,
      sym_content,
    STATE(237), 1,
      aux_sym__content_or_javascript,
  [5134] = 2,
    STATE(103), 1,
      sym_tag,
    ACTIONS(25), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5143] = 4,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(699), 1,
      sym_content,
    STATE(206), 1,
      aux_sym__content_or_javascript,
  [5156] = 2,
    ACTIONS(703), 1,
      anon_sym_,
    ACTIONS(701), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5165] = 2,
    STATE(31), 1,
      sym_tag,
    ACTIONS(77), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5174] = 3,
    ACTIONS(705), 1,
      anon_sym_EQ,
    ACTIONS(707), 1,
      anon_sym_,
    ACTIONS(709), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5185] = 4,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(711), 1,
      sym_content,
    STATE(189), 1,
      aux_sym__content_or_javascript,
  [5198] = 2,
    STATE(106), 1,
      sym_tag,
    ACTIONS(25), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5207] = 4,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(713), 1,
      sym_content,
    STATE(214), 1,
      aux_sym__content_or_javascript,
  [5220] = 4,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(715), 1,
      sym_content,
    STATE(228), 1,
      aux_sym__content_or_javascript,
  [5233] = 2,
    ACTIONS(717), 2,
      sym__newline,
      sym_content,
    ACTIONS(719), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [5242] = 2,
    STATE(89), 1,
      sym_tag,
    ACTIONS(128), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5251] = 4,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(721), 1,
      sym_content,
    STATE(195), 1,
      aux_sym__content_or_javascript,
  [5264] = 2,
    STATE(51), 1,
      sym_tag,
    ACTIONS(77), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5273] = 4,
    ACTIONS(691), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(723), 1,
      sym__newline,
    STATE(56), 1,
      sym__single_line_buf_code,
    STATE(319), 1,
      sym__un_delimited_javascript,
  [5286] = 2,
    STATE(123), 1,
      sym_tag,
    ACTIONS(25), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5295] = 4,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(725), 1,
      sym_content,
    STATE(194), 1,
      aux_sym__content_or_javascript,
  [5308] = 2,
    STATE(90), 1,
      sym_tag,
    ACTIONS(128), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5317] = 4,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(727), 1,
      sym_content,
    STATE(198), 1,
      aux_sym__content_or_javascript,
  [5330] = 4,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(729), 1,
      sym_content,
    STATE(216), 1,
      aux_sym__content_or_javascript,
  [5343] = 4,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(731), 1,
      sym_content,
    STATE(187), 1,
      aux_sym__content_or_javascript,
  [5356] = 2,
    STATE(55), 1,
      sym_tag,
    ACTIONS(77), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5365] = 2,
    STATE(101), 1,
      sym_tag,
    ACTIONS(128), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5374] = 2,
    STATE(218), 1,
      sym_tag,
    ACTIONS(460), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5383] = 4,
    ACTIONS(594), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(596), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(733), 1,
      sym_content,
    STATE(239), 1,
      aux_sym__content_or_javascript,
  [5396] = 2,
    STATE(210), 1,
      sym_tag,
    ACTIONS(460), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5405] = 2,
    ACTIONS(577), 2,
      sym__dedent,
      sym_content,
    ACTIONS(735), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [5414] = 2,
    STATE(208), 1,
      sym_tag,
    ACTIONS(460), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5423] = 2,
    ACTIONS(478), 1,
      anon_sym_,
    ACTIONS(480), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5431] = 3,
    ACTIONS(737), 1,
      anon_sym_,
    ACTIONS(739), 1,
      anon_sym_COMMA,
    ACTIONS(741), 1,
      anon_sym_RPAREN,
  [5441] = 3,
    ACTIONS(743), 1,
      sym__un_delimited_javascript_line,
    STATE(19), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(34), 1,
      sym__multi_line_buf_code,
  [5451] = 3,
    ACTIONS(691), 1,
      sym__un_delimited_javascript_line,
    STATE(80), 1,
      sym__single_line_buf_code,
    STATE(328), 1,
      sym__un_delimited_javascript,
  [5461] = 3,
    ACTIONS(691), 1,
      sym__un_delimited_javascript_line,
    STATE(83), 1,
      sym__single_line_buf_code,
    STATE(328), 1,
      sym__un_delimited_javascript,
  [5471] = 3,
    ACTIONS(691), 1,
      sym__un_delimited_javascript_line,
    STATE(200), 1,
      sym__single_line_buf_code,
    STATE(329), 1,
      sym__un_delimited_javascript,
  [5481] = 3,
    ACTIONS(691), 1,
      sym__un_delimited_javascript_line,
    STATE(201), 1,
      sym__single_line_buf_code,
    STATE(329), 1,
      sym__un_delimited_javascript,
  [5491] = 2,
    ACTIONS(745), 1,
      anon_sym_,
    ACTIONS(747), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5499] = 3,
    ACTIONS(691), 1,
      sym__un_delimited_javascript_line,
    STATE(116), 1,
      sym__single_line_buf_code,
    STATE(321), 1,
      sym__un_delimited_javascript,
  [5509] = 3,
    ACTIONS(691), 1,
      sym__un_delimited_javascript_line,
    STATE(118), 1,
      sym__single_line_buf_code,
    STATE(321), 1,
      sym__un_delimited_javascript,
  [5519] = 2,
    ACTIONS(749), 1,
      anon_sym_,
    ACTIONS(751), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5527] = 2,
    ACTIONS(753), 1,
      anon_sym_,
    ACTIONS(755), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5535] = 1,
    ACTIONS(757), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5541] = 3,
    ACTIONS(737), 1,
      anon_sym_,
    ACTIONS(739), 1,
      anon_sym_COMMA,
    ACTIONS(759), 1,
      anon_sym_RPAREN,
  [5551] = 2,
    ACTIONS(761), 1,
      anon_sym_,
    ACTIONS(763), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5559] = 2,
    ACTIONS(765), 1,
      anon_sym_,
    ACTIONS(767), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5567] = 3,
    ACTIONS(769), 1,
      anon_sym_SQUOTE,
    ACTIONS(771), 1,
      anon_sym_DQUOTE,
    STATE(291), 1,
      sym_quoted_javascript,
  [5577] = 1,
    ACTIONS(773), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [5583] = 3,
    ACTIONS(775), 1,
      sym__un_delimited_javascript_line,
    STATE(35), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(81), 1,
      sym__multi_line_buf_code,
  [5593] = 2,
    ACTIONS(777), 1,
      anon_sym_,
    ACTIONS(779), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5601] = 2,
    ACTIONS(781), 1,
      anon_sym_,
    ACTIONS(783), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5609] = 2,
    ACTIONS(785), 1,
      anon_sym_,
    ACTIONS(787), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5617] = 2,
    ACTIONS(789), 1,
      anon_sym_,
    ACTIONS(791), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5625] = 2,
    ACTIONS(793), 1,
      anon_sym_,
    ACTIONS(795), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5633] = 2,
    ACTIONS(797), 1,
      anon_sym_,
    ACTIONS(799), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5641] = 2,
    ACTIONS(801), 1,
      anon_sym_,
    ACTIONS(803), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5649] = 3,
    ACTIONS(691), 1,
      sym__un_delimited_javascript_line,
    STATE(53), 1,
      sym__single_line_buf_code,
    STATE(319), 1,
      sym__un_delimited_javascript,
  [5659] = 3,
    ACTIONS(691), 1,
      sym__un_delimited_javascript_line,
    STATE(52), 1,
      sym__single_line_buf_code,
    STATE(319), 1,
      sym__un_delimited_javascript,
  [5669] = 2,
    ACTIONS(805), 1,
      anon_sym_,
    ACTIONS(807), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5677] = 2,
    ACTIONS(809), 1,
      anon_sym_SQUOTE,
    ACTIONS(811), 1,
      aux_sym_quoted_javascript_token1,
  [5684] = 2,
    ACTIONS(813), 1,
      sym__un_delimited_javascript_line,
    STATE(233), 1,
      sym__un_delimited_javascript,
  [5691] = 2,
    ACTIONS(809), 1,
      anon_sym_DQUOTE,
    ACTIONS(815), 1,
      aux_sym_quoted_javascript_token2,
  [5698] = 2,
    ACTIONS(817), 1,
      anon_sym_DQUOTE,
    ACTIONS(819), 1,
      aux_sym_quoted_javascript_token2,
  [5705] = 2,
    ACTIONS(817), 1,
      anon_sym_SQUOTE,
    ACTIONS(821), 1,
      aux_sym_quoted_javascript_token1,
  [5712] = 2,
    ACTIONS(823), 1,
      sym__comment_content,
    ACTIONS(825), 1,
      sym__newline,
  [5719] = 2,
    ACTIONS(737), 1,
      anon_sym_,
    ACTIONS(739), 1,
      anon_sym_COMMA,
  [5726] = 1,
    ACTIONS(827), 1,
      sym__indent,
  [5730] = 1,
    ACTIONS(829), 1,
      anon_sym_DQUOTE,
  [5734] = 1,
    ACTIONS(831), 1,
      anon_sym_SQUOTE,
  [5738] = 1,
    ACTIONS(833), 1,
      sym__newline,
  [5742] = 1,
    ACTIONS(835), 1,
      sym__indent,
  [5746] = 1,
    ACTIONS(831), 1,
      anon_sym_DQUOTE,
  [5750] = 1,
    ACTIONS(829), 1,
      anon_sym_SQUOTE,
  [5754] = 1,
    ACTIONS(837), 1,
      sym__indent,
  [5758] = 1,
    ACTIONS(839), 1,
      sym__indent,
  [5762] = 1,
    ACTIONS(841), 1,
      anon_sym_RBRACE_RBRACE,
  [5766] = 1,
    ACTIONS(843), 1,
      aux_sym_unbuffered_code_token1,
  [5770] = 1,
    ACTIONS(841), 1,
      anon_sym_RBRACE,
  [5774] = 1,
    ACTIONS(845), 1,
      sym__newline,
  [5778] = 1,
    ACTIONS(847), 1,
      sym__newline,
  [5782] = 1,
    ACTIONS(849), 1,
      sym__newline,
  [5786] = 1,
    ACTIONS(851), 1,
      sym__newline,
  [5790] = 1,
    ACTIONS(853), 1,
      sym__newline,
  [5794] = 1,
    ACTIONS(855), 1,
      aux_sym__attribute_token1,
  [5798] = 1,
    ACTIONS(857), 1,
      sym__delimited_javascript,
  [5802] = 1,
    ACTIONS(859), 1,
      sym__delimited_javascript,
  [5806] = 1,
    ACTIONS(861), 1,
      ts_builtin_sym_end,
  [5810] = 1,
    ACTIONS(863), 1,
      aux_sym_unbuffered_code_token1,
  [5814] = 1,
    ACTIONS(865), 1,
      sym__newline,
  [5818] = 1,
    ACTIONS(867), 1,
      sym__newline,
  [5822] = 1,
    ACTIONS(757), 1,
      sym__newline,
  [5826] = 1,
    ACTIONS(869), 1,
      sym__un_delimited_javascript_line,
  [5830] = 1,
    ACTIONS(871), 1,
      aux_sym__when_keyword_token1,
  [5834] = 1,
    ACTIONS(873), 1,
      sym__indent,
  [5838] = 1,
    ACTIONS(875), 1,
      sym__indent,
  [5842] = 1,
    ACTIONS(877), 1,
      sym__indent,
  [5846] = 1,
    ACTIONS(879), 1,
      sym__newline,
  [5850] = 1,
    ACTIONS(881), 1,
      sym__newline,
  [5854] = 1,
    ACTIONS(883), 1,
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
  [SMALL_STATE(10)] = 317,
  [SMALL_STATE(11)] = 352,
  [SMALL_STATE(12)] = 385,
  [SMALL_STATE(13)] = 418,
  [SMALL_STATE(14)] = 451,
  [SMALL_STATE(15)] = 482,
  [SMALL_STATE(16)] = 511,
  [SMALL_STATE(17)] = 542,
  [SMALL_STATE(18)] = 571,
  [SMALL_STATE(19)] = 600,
  [SMALL_STATE(20)] = 629,
  [SMALL_STATE(21)] = 658,
  [SMALL_STATE(22)] = 683,
  [SMALL_STATE(23)] = 712,
  [SMALL_STATE(24)] = 747,
  [SMALL_STATE(25)] = 776,
  [SMALL_STATE(26)] = 805,
  [SMALL_STATE(27)] = 833,
  [SMALL_STATE(28)] = 859,
  [SMALL_STATE(29)] = 883,
  [SMALL_STATE(30)] = 912,
  [SMALL_STATE(31)] = 935,
  [SMALL_STATE(32)] = 958,
  [SMALL_STATE(33)] = 981,
  [SMALL_STATE(34)] = 1004,
  [SMALL_STATE(35)] = 1029,
  [SMALL_STATE(36)] = 1056,
  [SMALL_STATE(37)] = 1079,
  [SMALL_STATE(38)] = 1102,
  [SMALL_STATE(39)] = 1125,
  [SMALL_STATE(40)] = 1152,
  [SMALL_STATE(41)] = 1175,
  [SMALL_STATE(42)] = 1198,
  [SMALL_STATE(43)] = 1225,
  [SMALL_STATE(44)] = 1248,
  [SMALL_STATE(45)] = 1275,
  [SMALL_STATE(46)] = 1298,
  [SMALL_STATE(47)] = 1327,
  [SMALL_STATE(48)] = 1356,
  [SMALL_STATE(49)] = 1381,
  [SMALL_STATE(50)] = 1404,
  [SMALL_STATE(51)] = 1431,
  [SMALL_STATE(52)] = 1454,
  [SMALL_STATE(53)] = 1477,
  [SMALL_STATE(54)] = 1500,
  [SMALL_STATE(55)] = 1527,
  [SMALL_STATE(56)] = 1550,
  [SMALL_STATE(57)] = 1575,
  [SMALL_STATE(58)] = 1598,
  [SMALL_STATE(59)] = 1621,
  [SMALL_STATE(60)] = 1644,
  [SMALL_STATE(61)] = 1671,
  [SMALL_STATE(62)] = 1700,
  [SMALL_STATE(63)] = 1723,
  [SMALL_STATE(64)] = 1746,
  [SMALL_STATE(65)] = 1773,
  [SMALL_STATE(66)] = 1800,
  [SMALL_STATE(67)] = 1826,
  [SMALL_STATE(68)] = 1852,
  [SMALL_STATE(69)] = 1880,
  [SMALL_STATE(70)] = 1902,
  [SMALL_STATE(71)] = 1928,
  [SMALL_STATE(72)] = 1950,
  [SMALL_STATE(73)] = 1972,
  [SMALL_STATE(74)] = 1998,
  [SMALL_STATE(75)] = 2024,
  [SMALL_STATE(76)] = 2050,
  [SMALL_STATE(77)] = 2072,
  [SMALL_STATE(78)] = 2096,
  [SMALL_STATE(79)] = 2120,
  [SMALL_STATE(80)] = 2144,
  [SMALL_STATE(81)] = 2165,
  [SMALL_STATE(82)] = 2188,
  [SMALL_STATE(83)] = 2209,
  [SMALL_STATE(84)] = 2230,
  [SMALL_STATE(85)] = 2251,
  [SMALL_STATE(86)] = 2272,
  [SMALL_STATE(87)] = 2293,
  [SMALL_STATE(88)] = 2316,
  [SMALL_STATE(89)] = 2339,
  [SMALL_STATE(90)] = 2360,
  [SMALL_STATE(91)] = 2381,
  [SMALL_STATE(92)] = 2402,
  [SMALL_STATE(93)] = 2423,
  [SMALL_STATE(94)] = 2444,
  [SMALL_STATE(95)] = 2465,
  [SMALL_STATE(96)] = 2486,
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
  [SMALL_STATE(155)] = 3915,
  [SMALL_STATE(156)] = 3939,
  [SMALL_STATE(157)] = 3957,
  [SMALL_STATE(158)] = 3981,
  [SMALL_STATE(159)] = 4005,
  [SMALL_STATE(160)] = 4029,
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
  [SMALL_STATE(173)] = 4233,
  [SMALL_STATE(174)] = 4246,
  [SMALL_STATE(175)] = 4259,
  [SMALL_STATE(176)] = 4278,
  [SMALL_STATE(177)] = 4289,
  [SMALL_STATE(178)] = 4304,
  [SMALL_STATE(179)] = 4317,
  [SMALL_STATE(180)] = 4336,
  [SMALL_STATE(181)] = 4355,
  [SMALL_STATE(182)] = 4368,
  [SMALL_STATE(183)] = 4387,
  [SMALL_STATE(184)] = 4400,
  [SMALL_STATE(185)] = 4411,
  [SMALL_STATE(186)] = 4430,
  [SMALL_STATE(187)] = 4441,
  [SMALL_STATE(188)] = 4457,
  [SMALL_STATE(189)] = 4471,
  [SMALL_STATE(190)] = 4487,
  [SMALL_STATE(191)] = 4503,
  [SMALL_STATE(192)] = 4519,
  [SMALL_STATE(193)] = 4535,
  [SMALL_STATE(194)] = 4545,
  [SMALL_STATE(195)] = 4561,
  [SMALL_STATE(196)] = 4577,
  [SMALL_STATE(197)] = 4587,
  [SMALL_STATE(198)] = 4597,
  [SMALL_STATE(199)] = 4613,
  [SMALL_STATE(200)] = 4621,
  [SMALL_STATE(201)] = 4629,
  [SMALL_STATE(202)] = 4637,
  [SMALL_STATE(203)] = 4653,
  [SMALL_STATE(204)] = 4661,
  [SMALL_STATE(205)] = 4669,
  [SMALL_STATE(206)] = 4685,
  [SMALL_STATE(207)] = 4701,
  [SMALL_STATE(208)] = 4709,
  [SMALL_STATE(209)] = 4717,
  [SMALL_STATE(210)] = 4733,
  [SMALL_STATE(211)] = 4741,
  [SMALL_STATE(212)] = 4757,
  [SMALL_STATE(213)] = 4773,
  [SMALL_STATE(214)] = 4781,
  [SMALL_STATE(215)] = 4797,
  [SMALL_STATE(216)] = 4805,
  [SMALL_STATE(217)] = 4821,
  [SMALL_STATE(218)] = 4829,
  [SMALL_STATE(219)] = 4837,
  [SMALL_STATE(220)] = 4847,
  [SMALL_STATE(221)] = 4855,
  [SMALL_STATE(222)] = 4863,
  [SMALL_STATE(223)] = 4871,
  [SMALL_STATE(224)] = 4879,
  [SMALL_STATE(225)] = 4887,
  [SMALL_STATE(226)] = 4895,
  [SMALL_STATE(227)] = 4911,
  [SMALL_STATE(228)] = 4921,
  [SMALL_STATE(229)] = 4937,
  [SMALL_STATE(230)] = 4953,
  [SMALL_STATE(231)] = 4969,
  [SMALL_STATE(232)] = 4985,
  [SMALL_STATE(233)] = 5001,
  [SMALL_STATE(234)] = 5011,
  [SMALL_STATE(235)] = 5027,
  [SMALL_STATE(236)] = 5037,
  [SMALL_STATE(237)] = 5047,
  [SMALL_STATE(238)] = 5063,
  [SMALL_STATE(239)] = 5079,
  [SMALL_STATE(240)] = 5095,
  [SMALL_STATE(241)] = 5108,
  [SMALL_STATE(242)] = 5121,
  [SMALL_STATE(243)] = 5134,
  [SMALL_STATE(244)] = 5143,
  [SMALL_STATE(245)] = 5156,
  [SMALL_STATE(246)] = 5165,
  [SMALL_STATE(247)] = 5174,
  [SMALL_STATE(248)] = 5185,
  [SMALL_STATE(249)] = 5198,
  [SMALL_STATE(250)] = 5207,
  [SMALL_STATE(251)] = 5220,
  [SMALL_STATE(252)] = 5233,
  [SMALL_STATE(253)] = 5242,
  [SMALL_STATE(254)] = 5251,
  [SMALL_STATE(255)] = 5264,
  [SMALL_STATE(256)] = 5273,
  [SMALL_STATE(257)] = 5286,
  [SMALL_STATE(258)] = 5295,
  [SMALL_STATE(259)] = 5308,
  [SMALL_STATE(260)] = 5317,
  [SMALL_STATE(261)] = 5330,
  [SMALL_STATE(262)] = 5343,
  [SMALL_STATE(263)] = 5356,
  [SMALL_STATE(264)] = 5365,
  [SMALL_STATE(265)] = 5374,
  [SMALL_STATE(266)] = 5383,
  [SMALL_STATE(267)] = 5396,
  [SMALL_STATE(268)] = 5405,
  [SMALL_STATE(269)] = 5414,
  [SMALL_STATE(270)] = 5423,
  [SMALL_STATE(271)] = 5431,
  [SMALL_STATE(272)] = 5441,
  [SMALL_STATE(273)] = 5451,
  [SMALL_STATE(274)] = 5461,
  [SMALL_STATE(275)] = 5471,
  [SMALL_STATE(276)] = 5481,
  [SMALL_STATE(277)] = 5491,
  [SMALL_STATE(278)] = 5499,
  [SMALL_STATE(279)] = 5509,
  [SMALL_STATE(280)] = 5519,
  [SMALL_STATE(281)] = 5527,
  [SMALL_STATE(282)] = 5535,
  [SMALL_STATE(283)] = 5541,
  [SMALL_STATE(284)] = 5551,
  [SMALL_STATE(285)] = 5559,
  [SMALL_STATE(286)] = 5567,
  [SMALL_STATE(287)] = 5577,
  [SMALL_STATE(288)] = 5583,
  [SMALL_STATE(289)] = 5593,
  [SMALL_STATE(290)] = 5601,
  [SMALL_STATE(291)] = 5609,
  [SMALL_STATE(292)] = 5617,
  [SMALL_STATE(293)] = 5625,
  [SMALL_STATE(294)] = 5633,
  [SMALL_STATE(295)] = 5641,
  [SMALL_STATE(296)] = 5649,
  [SMALL_STATE(297)] = 5659,
  [SMALL_STATE(298)] = 5669,
  [SMALL_STATE(299)] = 5677,
  [SMALL_STATE(300)] = 5684,
  [SMALL_STATE(301)] = 5691,
  [SMALL_STATE(302)] = 5698,
  [SMALL_STATE(303)] = 5705,
  [SMALL_STATE(304)] = 5712,
  [SMALL_STATE(305)] = 5719,
  [SMALL_STATE(306)] = 5726,
  [SMALL_STATE(307)] = 5730,
  [SMALL_STATE(308)] = 5734,
  [SMALL_STATE(309)] = 5738,
  [SMALL_STATE(310)] = 5742,
  [SMALL_STATE(311)] = 5746,
  [SMALL_STATE(312)] = 5750,
  [SMALL_STATE(313)] = 5754,
  [SMALL_STATE(314)] = 5758,
  [SMALL_STATE(315)] = 5762,
  [SMALL_STATE(316)] = 5766,
  [SMALL_STATE(317)] = 5770,
  [SMALL_STATE(318)] = 5774,
  [SMALL_STATE(319)] = 5778,
  [SMALL_STATE(320)] = 5782,
  [SMALL_STATE(321)] = 5786,
  [SMALL_STATE(322)] = 5790,
  [SMALL_STATE(323)] = 5794,
  [SMALL_STATE(324)] = 5798,
  [SMALL_STATE(325)] = 5802,
  [SMALL_STATE(326)] = 5806,
  [SMALL_STATE(327)] = 5810,
  [SMALL_STATE(328)] = 5814,
  [SMALL_STATE(329)] = 5818,
  [SMALL_STATE(330)] = 5822,
  [SMALL_STATE(331)] = 5826,
  [SMALL_STATE(332)] = 5830,
  [SMALL_STATE(333)] = 5834,
  [SMALL_STATE(334)] = 5838,
  [SMALL_STATE(335)] = 5842,
  [SMALL_STATE(336)] = 5846,
  [SMALL_STATE(337)] = 5850,
  [SMALL_STATE(338)] = 5854,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(287),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(191),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(300),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(300),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(193),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(331),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(278),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(279),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(304),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(127),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(127),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(327),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(202),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(125),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(125),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(125),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(125),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 5, .production_id = 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 5, .production_id = 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(231),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(131),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(131),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(332),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(6),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(28),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_keyword, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_keyword, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 5),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 5),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 6),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 6),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 5),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 5),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 7),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 5, .production_id = 4),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 5, .production_id = 4),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 2),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffered_code, 2),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffered_code, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unescaped_buffered_code, 2),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unescaped_buffered_code, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 3),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 5),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 5),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 4),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 4),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 3),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 3),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(309),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(71),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(127),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(127),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 3),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 3),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 2),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 2),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 6),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 6),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 1),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 1),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 2),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(236),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(245),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [502] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(150),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(230),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(132),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(132),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(209),
  [571] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(325),
  [574] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(324),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [587] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2), SHIFT_REPEAT(323),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 2),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 2),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_name, 1),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [678] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(238),
  [681] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(325),
  [684] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(324),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_angular_attribute_name, 1),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_angular_attribute_name, 1),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 1),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 1),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 3),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 3),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 2),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 2),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 5),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 5),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 3),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 3),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__un_delimited_javascript, 1),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 3),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 3),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_attribute_value, 2),
  [783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_attribute_value, 2),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 3),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 3),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ternary_attribute_value, 2),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ternary_attribute_value, 2),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_attribute_value, 2),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__array_attribute_value, 2),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_attribute_value, 2),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__template_attribute_value, 2),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_attribute_value, 2),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__object_attribute_value, 2),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_attribute_value, 2),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable_attribute_value, 2),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [861] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
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
