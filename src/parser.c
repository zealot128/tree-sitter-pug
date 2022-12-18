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
#define STATE_COUNT 854
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 115
#define ALIAS_COUNT 1
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 7

enum {
  anon_sym_doctype = 1,
  anon_sym_html = 2,
  anon_sym_strict = 3,
  anon_sym_xml = 4,
  anon_sym_PIPE = 5,
  anon_sym_COLON = 6,
  sym_filter_name = 7,
  aux_sym_filter_content_token1 = 8,
  aux_sym_filter_content_token2 = 9,
  anon_sym_unless = 10,
  anon_sym_if = 11,
  anon_sym_elseif = 12,
  anon_sym_else = 13,
  anon_sym_case = 14,
  anon_sym_when = 15,
  aux_sym__when_keyword_token1 = 16,
  anon_sym_default = 17,
  anon_sym_BANG_EQ = 18,
  anon_sym_EQ = 19,
  anon_sym_script_DOT = 20,
  aux_sym_script_block_token1 = 21,
  anon_sym_SLASH = 22,
  anon_sym_ = 23,
  anon_sym_DOT = 24,
  anon_sym_LPAREN = 25,
  anon_sym_COMMA = 26,
  anon_sym_RPAREN = 27,
  aux_sym__ternary_attribute_value_token1 = 28,
  aux_sym__variable_attribute_value_token1 = 29,
  aux_sym__object_attribute_value_token1 = 30,
  aux_sym__template_attribute_value_token1 = 31,
  aux_sym__array_attribute_value_token1 = 32,
  aux_sym__attribute_token1 = 33,
  anon_sym_SLASH_SLASH = 34,
  anon_sym_SLASH_SLASH_DASH = 35,
  sym_tag_name = 36,
  sym_class = 37,
  sym_id = 38,
  aux_sym_angular_attribute_name_token1 = 39,
  aux_sym_angular_attribute_name_token2 = 40,
  aux_sym_angular_attribute_name_token3 = 41,
  sym_attribute_name = 42,
  anon_sym_SQUOTE = 43,
  aux_sym_quoted_javascript_token1 = 44,
  anon_sym_DQUOTE = 45,
  aux_sym_quoted_javascript_token2 = 46,
  aux_sym_content_token1 = 47,
  anon_sym_POUND = 48,
  anon_sym_LBRACE = 49,
  anon_sym_POUND_LBRACE = 50,
  anon_sym_RBRACE = 51,
  anon_sym_LBRACE_LBRACE = 52,
  anon_sym_RBRACE_RBRACE = 53,
  sym__delimited_javascript = 54,
  sym__un_delimited_javascript_line = 55,
  anon_sym_DASH = 56,
  aux_sym_unbuffered_code_token1 = 57,
  sym__newline = 58,
  sym__indent = 59,
  sym__dedent = 60,
  sym_source_file = 61,
  sym_doctype = 62,
  sym_pipe = 63,
  sym_filter = 64,
  sym_filter_content = 65,
  sym_conditional = 66,
  sym_case = 67,
  sym__when_content = 68,
  sym__dummy_tag = 69,
  sym__when_keyword = 70,
  sym_when = 71,
  sym_unescaped_buffered_code = 72,
  sym_buffered_code = 73,
  sym_script_block = 74,
  sym_tag = 75,
  sym__content_after_dot = 76,
  sym_attributes = 77,
  sym_attribute = 78,
  sym__ternary_attribute_value = 79,
  sym__string_attribute_value = 80,
  sym__variable_attribute_value = 81,
  sym__object_attribute_value = 82,
  sym__template_attribute_value = 83,
  sym__array_attribute_value = 84,
  sym__attribute = 85,
  sym__angular_attribute = 86,
  sym_children = 87,
  sym__children_choice = 88,
  sym_comment = 89,
  sym__comment = 90,
  sym__comment_not_first_line = 91,
  sym_angular_attribute_name = 92,
  sym_quoted_javascript = 93,
  sym_quoted_attribute_value = 94,
  sym_content = 95,
  sym__comment_content = 96,
  aux_sym__content_or_javascript = 97,
  sym__un_delimited_javascript = 98,
  aux_sym__un_delimited_javascript_multiline = 99,
  sym__single_line_buf_code = 100,
  sym__multi_line_buf_code = 101,
  sym_unbuffered_code = 102,
  aux_sym_source_file_repeat1 = 103,
  aux_sym_filter_content_repeat1 = 104,
  aux_sym_case_repeat1 = 105,
  aux_sym_script_block_repeat1 = 106,
  aux_sym_tag_repeat1 = 107,
  aux_sym__content_after_dot_repeat1 = 108,
  aux_sym_attributes_repeat1 = 109,
  aux_sym__attribute_repeat1 = 110,
  aux_sym_children_repeat1 = 111,
  aux_sym__comment_repeat1 = 112,
  aux_sym_content_repeat1 = 113,
  aux_sym__single_line_buf_code_repeat1 = 114,
  alias_sym_attribute_value = 115,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_doctype] = "doctype",
  [anon_sym_html] = "doctype_name",
  [anon_sym_strict] = "doctype_name",
  [anon_sym_xml] = "doctype_name",
  [anon_sym_PIPE] = "|",
  [anon_sym_COLON] = ":",
  [sym_filter_name] = "filter_name",
  [aux_sym_filter_content_token1] = "filter_content_token1",
  [aux_sym_filter_content_token2] = "filter_content_token2",
  [anon_sym_unless] = "unless",
  [anon_sym_if] = "if",
  [anon_sym_elseif] = "else if",
  [anon_sym_else] = "else",
  [anon_sym_case] = "case",
  [anon_sym_when] = "when",
  [aux_sym__when_keyword_token1] = "javascript",
  [anon_sym_default] = "default",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_EQ] = "=",
  [anon_sym_script_DOT] = "script.",
  [aux_sym_script_block_token1] = "script_block_token1",
  [anon_sym_SLASH] = "self_close_slash",
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
  [aux_sym__attribute_token1] = "attribute_modifier",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_SLASH_SLASH_DASH] = "//-",
  [sym_tag_name] = "tag_name",
  [sym_class] = "class",
  [sym_id] = "id",
  [aux_sym_angular_attribute_name_token1] = "angular_attribute_name_token1",
  [aux_sym_angular_attribute_name_token2] = "angular_attribute_name_token2",
  [aux_sym_angular_attribute_name_token3] = "angular_attribute_name_token3",
  [sym_attribute_name] = "attribute_name",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_javascript_token1] = "javascript",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_javascript_token2] = "javascript",
  [aux_sym_content_token1] = "content_token1",
  [anon_sym_POUND] = "#",
  [anon_sym_LBRACE] = "{",
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
  [sym_filter] = "filter",
  [sym_filter_content] = "content",
  [sym_conditional] = "conditional",
  [sym_case] = "case",
  [sym__when_content] = "_when_content",
  [sym__dummy_tag] = "children",
  [sym__when_keyword] = "_when_keyword",
  [sym_when] = "when",
  [sym_unescaped_buffered_code] = "unescaped_buffered_code",
  [sym_buffered_code] = "buffered_code",
  [sym_script_block] = "script_block",
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
  [sym__comment] = "_comment",
  [sym__comment_not_first_line] = "_comment_not_first_line",
  [sym_angular_attribute_name] = "attribute_name",
  [sym_quoted_javascript] = "quoted_javascript",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [sym_content] = "content",
  [sym__comment_content] = "_comment_content",
  [aux_sym__content_or_javascript] = "_content_or_javascript",
  [sym__un_delimited_javascript] = "javascript",
  [aux_sym__un_delimited_javascript_multiline] = "_un_delimited_javascript_multiline",
  [sym__single_line_buf_code] = "_single_line_buf_code",
  [sym__multi_line_buf_code] = "_multi_line_buf_code",
  [sym_unbuffered_code] = "unbuffered_code",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_filter_content_repeat1] = "filter_content_repeat1",
  [aux_sym_case_repeat1] = "case_repeat1",
  [aux_sym_script_block_repeat1] = "script_block_repeat1",
  [aux_sym_tag_repeat1] = "tag_repeat1",
  [aux_sym__content_after_dot_repeat1] = "_content_after_dot_repeat1",
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
  [aux_sym__attribute_repeat1] = "_attribute_repeat1",
  [aux_sym_children_repeat1] = "children_repeat1",
  [aux_sym__comment_repeat1] = "_comment_repeat1",
  [aux_sym_content_repeat1] = "content_repeat1",
  [aux_sym__single_line_buf_code_repeat1] = "_single_line_buf_code_repeat1",
  [alias_sym_attribute_value] = "attribute_value",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_doctype] = anon_sym_doctype,
  [anon_sym_html] = anon_sym_html,
  [anon_sym_strict] = anon_sym_html,
  [anon_sym_xml] = anon_sym_html,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_filter_name] = sym_filter_name,
  [aux_sym_filter_content_token1] = aux_sym_filter_content_token1,
  [aux_sym_filter_content_token2] = aux_sym_filter_content_token2,
  [anon_sym_unless] = anon_sym_unless,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_elseif] = anon_sym_elseif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_when] = anon_sym_when,
  [aux_sym__when_keyword_token1] = aux_sym__when_keyword_token1,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_script_DOT] = anon_sym_script_DOT,
  [aux_sym_script_block_token1] = aux_sym_script_block_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
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
  [anon_sym_SLASH_SLASH_DASH] = anon_sym_SLASH_SLASH_DASH,
  [sym_tag_name] = sym_tag_name,
  [sym_class] = sym_class,
  [sym_id] = sym_id,
  [aux_sym_angular_attribute_name_token1] = aux_sym_angular_attribute_name_token1,
  [aux_sym_angular_attribute_name_token2] = aux_sym_angular_attribute_name_token2,
  [aux_sym_angular_attribute_name_token3] = aux_sym_angular_attribute_name_token3,
  [sym_attribute_name] = sym_attribute_name,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_javascript_token1] = aux_sym__when_keyword_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_javascript_token2] = aux_sym__when_keyword_token1,
  [aux_sym_content_token1] = aux_sym_content_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
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
  [sym_filter] = sym_filter,
  [sym_filter_content] = sym_content,
  [sym_conditional] = sym_conditional,
  [sym_case] = sym_case,
  [sym__when_content] = sym__when_content,
  [sym__dummy_tag] = sym_children,
  [sym__when_keyword] = sym__when_keyword,
  [sym_when] = sym_when,
  [sym_unescaped_buffered_code] = sym_unescaped_buffered_code,
  [sym_buffered_code] = sym_buffered_code,
  [sym_script_block] = sym_script_block,
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
  [sym__comment] = sym__comment,
  [sym__comment_not_first_line] = sym__comment_not_first_line,
  [sym_angular_attribute_name] = sym_attribute_name,
  [sym_quoted_javascript] = sym_quoted_javascript,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [sym_content] = sym_content,
  [sym__comment_content] = sym__comment_content,
  [aux_sym__content_or_javascript] = aux_sym__content_or_javascript,
  [sym__un_delimited_javascript] = aux_sym__when_keyword_token1,
  [aux_sym__un_delimited_javascript_multiline] = aux_sym__un_delimited_javascript_multiline,
  [sym__single_line_buf_code] = sym__single_line_buf_code,
  [sym__multi_line_buf_code] = sym__multi_line_buf_code,
  [sym_unbuffered_code] = sym_unbuffered_code,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_filter_content_repeat1] = aux_sym_filter_content_repeat1,
  [aux_sym_case_repeat1] = aux_sym_case_repeat1,
  [aux_sym_script_block_repeat1] = aux_sym_script_block_repeat1,
  [aux_sym_tag_repeat1] = aux_sym_tag_repeat1,
  [aux_sym__content_after_dot_repeat1] = aux_sym__content_after_dot_repeat1,
  [aux_sym_attributes_repeat1] = aux_sym_attributes_repeat1,
  [aux_sym__attribute_repeat1] = aux_sym__attribute_repeat1,
  [aux_sym_children_repeat1] = aux_sym_children_repeat1,
  [aux_sym__comment_repeat1] = aux_sym__comment_repeat1,
  [aux_sym_content_repeat1] = aux_sym_content_repeat1,
  [aux_sym__single_line_buf_code_repeat1] = aux_sym__single_line_buf_code_repeat1,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_filter_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_filter_content_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_filter_content_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_unless] = {
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
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
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
  [anon_sym_script_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_script_block_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = true,
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
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH_DASH] = {
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
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
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
  [sym_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_filter_content] = {
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
  [sym__dummy_tag] = {
    .visible = true,
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
  [sym_script_block] = {
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
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [sym__comment_not_first_line] = {
    .visible = false,
    .named = true,
  },
  [sym_angular_attribute_name] = {
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
  [sym__comment_content] = {
    .visible = false,
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
  [aux_sym_filter_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_case_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_script_block_repeat1] = {
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
  [aux_sym__comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__single_line_buf_code_repeat1] = {
    .visible = false,
    .named = false,
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
    [3] = aux_sym__when_keyword_token1,
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
  aux_sym_script_block_repeat1, 2,
    aux_sym_script_block_repeat1,
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
      if (eof) ADVANCE(157);
      if (lookahead == '!') ADVANCE(80);
      if (lookahead == '"') ADVANCE(664);
      if (lookahead == '#') ADVANCE(670);
      if (lookahead == '\'') ADVANCE(660);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == ')') ADVANCE(266);
      if (lookahead == '*') ADVANCE(147);
      if (lookahead == ',') ADVANCE(265);
      if (lookahead == '-') ADVANCE(689);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == '/') ADVANCE(260);
      if (lookahead == ':') ADVANCE(168);
      if (lookahead == '=') ADVANCE(251);
      if (lookahead == '[') ADVANCE(88);
      if (lookahead == '`') ADVANCE(91);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(102);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'h') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(105);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == 'u') ADVANCE(120);
      if (lookahead == 'w') ADVANCE(108);
      if (lookahead == 'x') ADVANCE(117);
      if (lookahead == '{') ADVANCE(671);
      if (lookahead == '|') ADVANCE(165);
      if (lookahead == '}') ADVANCE(673);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"') ADVANCE(267);
      if (lookahead == '`') ADVANCE(560);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(268);
      if (lookahead == '`') ADVANCE(561);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(269);
      if (lookahead == '`') ADVANCE(565);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == ']') ADVANCE(567);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(62);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(271);
      if (lookahead == ']') ADVANCE(568);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(66);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ']') ADVANCE(570);
      if (lookahead == '`') ADVANCE(272);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(93);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(273);
      if (lookahead == ']') ADVANCE(571);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(137);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(274);
      if (lookahead == ']') ADVANCE(572);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(138);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(275);
      if (lookahead == ']') ADVANCE(573);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(139);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(276);
      if (lookahead == ']') ADVANCE(574);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(141);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '#') ADVANCE(670);
      if (lookahead == '{') ADVANCE(671);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(668);
      if (lookahead != 0) ADVANCE(669);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '"') ADVANCE(277);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(547);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(62);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(278);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(548);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(66);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '`') ADVANCE(279);
      if (lookahead == '}') ADVANCE(549);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(93);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(280);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(550);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(137);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(281);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(551);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(138);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(282);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(552);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(139);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(283);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(553);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(141);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"') ADVANCE(277);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(547);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(62);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(278);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(548);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(66);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '`') ADVANCE(279);
      if (lookahead == '}') ADVANCE(549);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(93);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(280);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(550);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(137);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(281);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(551);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(138);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(282);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(552);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(139);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(283);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(553);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(141);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(285);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == '`') ADVANCE(286);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(287);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(288);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(289);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(290);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '"') ADVANCE(291);
      if (lookahead == ')') ADVANCE(509);
      if (lookahead == '`') ADVANCE(557);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == ')') ADVANCE(510);
      if (lookahead == '`') ADVANCE(558);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(293);
      if (lookahead == ')') ADVANCE(511);
      if (lookahead == '`') ADVANCE(559);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"') ADVANCE(294);
      if (lookahead == ')') ADVANCE(532);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(295);
      if (lookahead == ')') ADVANCE(533);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == ')') ADVANCE(542);
      if (lookahead == '`') ADVANCE(296);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(297);
      if (lookahead == ')') ADVANCE(543);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(298);
      if (lookahead == ')') ADVANCE(544);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(299);
      if (lookahead == ')') ADVANCE(545);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(300);
      if (lookahead == ')') ADVANCE(546);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(480);
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(62);
      if (lookahead != 0) ADVANCE(301);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(480);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(66);
      if (lookahead != 0) ADVANCE(303);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(480);
      if (lookahead == '`') ADVANCE(305);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(93);
      if (lookahead != 0) ADVANCE(305);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(480);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(307);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(137);
      if (lookahead != 0) ADVANCE(307);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(480);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(309);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(138);
      if (lookahead != 0) ADVANCE(309);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(480);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(311);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(139);
      if (lookahead != 0) ADVANCE(311);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(480);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(313);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(141);
      if (lookahead != 0) ADVANCE(313);
      END_STATE();
    case 50:
      if (lookahead == '\n') SKIP(50)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 51:
      if (lookahead == '\n') SKIP(51)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 52:
      if (lookahead == '\n') SKIP(52)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(243);
      END_STATE();
    case 53:
      if (lookahead == '\n') SKIP(53)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(685);
      if (lookahead != 0) ADVANCE(688);
      END_STATE();
    case 54:
      if (lookahead == ' ') ADVANCE(261);
      if (lookahead == '!') ADVANCE(80);
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == ')') ADVANCE(266);
      if (lookahead == ',') ADVANCE(265);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == '/') ADVANCE(259);
      if (lookahead == ':') ADVANCE(168);
      if (lookahead == '=') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(54)
      END_STATE();
    case 55:
      if (lookahead == ' ') ADVANCE(261);
      if (lookahead == '!') ADVANCE(80);
      if (lookahead == ')') ADVANCE(266);
      if (lookahead == ',') ADVANCE(265);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == '/') ADVANCE(259);
      if (lookahead == ':') ADVANCE(168);
      if (lookahead == '=') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(55)
      END_STATE();
    case 56:
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '}') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(75);
      END_STATE();
    case 57:
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '?') ADVANCE(77);
      if (lookahead == '}') ADVANCE(555);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(86);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 58:
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '"') ADVANCE(665);
      if (lookahead == '\'') ADVANCE(661);
      if (lookahead == '?') ADVANCE(531);
      if (lookahead == '[') ADVANCE(522);
      if (lookahead == '`') ADVANCE(537);
      if (lookahead == '{') ADVANCE(523);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(529);
      if (lookahead != 0) ADVANCE(536);
      END_STATE();
    case 59:
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '"') ADVANCE(665);
      if (lookahead == '\'') ADVANCE(661);
      if (lookahead == '?') ADVANCE(535);
      if (lookahead == '[') ADVANCE(522);
      if (lookahead == '`') ADVANCE(537);
      if (lookahead == '{') ADVANCE(523);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(529);
      if (lookahead != 0) ADVANCE(536);
      END_STATE();
    case 60:
      if (lookahead == '"') ADVANCE(664);
      if (lookahead == '\'') ADVANCE(660);
      if (lookahead == '[') ADVANCE(89);
      if (lookahead == '`') ADVANCE(82);
      if (lookahead == '{') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 61:
      if (lookahead == '"') ADVANCE(664);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(666);
      if (lookahead != 0) ADVANCE(667);
      END_STATE();
    case 62:
      if (lookahead == '"') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 63:
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 64:
      if (lookahead == '#') ADVANCE(146);
      if (lookahead == '(') ADVANCE(148);
      if (lookahead == ')') ADVANCE(266);
      if (lookahead == '*') ADVANCE(147);
      if (lookahead == '[') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 65:
      if (lookahead == '\'') ADVANCE(660);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(662);
      if (lookahead != 0) ADVANCE(663);
      END_STATE();
    case 66:
      if (lookahead == '\'') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 67:
      if (lookahead == ')') ADVANCE(657);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      if (lookahead == ')') ADVANCE(541);
      if (lookahead == '?') ADVANCE(69);
      if (lookahead == '`') ADVANCE(484);
      if (lookahead != 0) ADVANCE(493);
      END_STATE();
    case 69:
      if (lookahead == ')') ADVANCE(541);
      if (lookahead == '`') ADVANCE(563);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 70:
      if (lookahead == ')') ADVANCE(540);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 71:
      if (lookahead == ')') ADVANCE(540);
      if (lookahead == '?') ADVANCE(526);
      if (lookahead == ' ' ||
          lookahead == '(') ADVANCE(70);
      if (lookahead != 0) ADVANCE(521);
      END_STATE();
    case 72:
      if (lookahead == ')') ADVANCE(539);
      if (lookahead == '?') ADVANCE(68);
      if (lookahead == '`') ADVANCE(562);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 73:
      if (lookahead == ')') ADVANCE(508);
      if (lookahead == '?') ADVANCE(74);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 74:
      if (lookahead == ')') ADVANCE(508);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 75:
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '}') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(75);
      END_STATE();
    case 76:
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '?') ADVANCE(77);
      if (lookahead == '}') ADVANCE(555);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(86);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 77:
      if (lookahead == ',') ADVANCE(489);
      if (lookahead == '?') ADVANCE(75);
      if (lookahead == '}') ADVANCE(489);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(489);
      END_STATE();
    case 78:
      if (lookahead == '.') ADVANCE(254);
      END_STATE();
    case 79:
      if (lookahead == '/') ADVANCE(576);
      END_STATE();
    case 80:
      if (lookahead == '=') ADVANCE(248);
      END_STATE();
    case 81:
      if (lookahead == '?') ADVANCE(89);
      if (lookahead == ']') ADVANCE(480);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(487);
      END_STATE();
    case 82:
      if (lookahead == '?') ADVANCE(534);
      if (lookahead == '`') ADVANCE(536);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(85);
      if (lookahead != 0) ADVANCE(537);
      END_STATE();
    case 83:
      if (lookahead == '?') ADVANCE(538);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(86);
      if (lookahead != 0) ADVANCE(536);
      END_STATE();
    case 84:
      if (lookahead == '?') ADVANCE(525);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(86);
      if (lookahead != 0) ADVANCE(536);
      END_STATE();
    case 85:
      if (lookahead == '?') ADVANCE(92);
      if (lookahead == '`') ADVANCE(564);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 86:
      if (lookahead == '?') ADVANCE(150);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 87:
      if (lookahead == '?') ADVANCE(81);
      if (lookahead == ']') ADVANCE(569);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(86);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 88:
      if (lookahead == ']') ADVANCE(566);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[') ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == ']') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[') ADVANCE(89);
      END_STATE();
    case 90:
      if (lookahead == ']') ADVANCE(656);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 91:
      if (lookahead == '`') ADVANCE(556);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 92:
      if (lookahead == '`') ADVANCE(480);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(91);
      if (lookahead != 0) ADVANCE(492);
      END_STATE();
    case 93:
      if (lookahead == '`') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(123);
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 98:
      if (lookahead == 'c') ADVANCE(131);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 105:
      if (lookahead == 'f') ADVANCE(223);
      END_STATE();
    case 106:
      if (lookahead == 'f') ADVANCE(227);
      END_STATE();
    case 107:
      if (lookahead == 'f') ADVANCE(95);
      END_STATE();
    case 108:
      if (lookahead == 'h') ADVANCE(103);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(164);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 117:
      if (lookahead == 'm') ADVANCE(112);
      END_STATE();
    case 118:
      if (lookahead == 'm') ADVANCE(113);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(238);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(130);
      END_STATE();
    case 122:
      if (lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 125:
      if (lookahead == 's') ADVANCE(219);
      END_STATE();
    case 126:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 128:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 134:
      if (lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 135:
      if (lookahead == 'y') ADVANCE(122);
      END_STATE();
    case 136:
      if (lookahead == '}') ADVANCE(675);
      END_STATE();
    case 137:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 138:
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 139:
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 140:
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 141:
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 142:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(142)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 143:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(143)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 144:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(652);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 145:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 146:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 147:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(658);
      END_STATE();
    case 148:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 149:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 150:
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '?') ADVANCE(480);
      END_STATE();
    case 151:
      if (eof) ADVANCE(157);
      if (lookahead == '\n') SKIP(151)
      if (lookahead == '!') ADVANCE(681);
      if (lookahead == '#') ADVANCE(687);
      if (lookahead == '-') ADVANCE(691);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == '/') ADVANCE(680);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '=') ADVANCE(253);
      if (lookahead == 'c') ADVANCE(586);
      if (lookahead == 'd') ADVANCE(601);
      if (lookahead == 'e') ADVANCE(617);
      if (lookahead == 'i') ADVANCE(606);
      if (lookahead == 's') ADVANCE(590);
      if (lookahead == 'u') ADVANCE(621);
      if (lookahead == 'w') ADVANCE(608);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0) ADVANCE(688);
      END_STATE();
    case 152:
      if (eof) ADVANCE(157);
      if (lookahead == '\n') SKIP(152)
      if (lookahead == '!') ADVANCE(681);
      if (lookahead == '#') ADVANCE(687);
      if (lookahead == '-') ADVANCE(691);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == '/') ADVANCE(680);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '=') ADVANCE(253);
      if (lookahead == 'c') ADVANCE(586);
      if (lookahead == 'd') ADVANCE(623);
      if (lookahead == 'e') ADVANCE(617);
      if (lookahead == 'i') ADVANCE(606);
      if (lookahead == 's') ADVANCE(590);
      if (lookahead == 'u') ADVANCE(621);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0) ADVANCE(688);
      END_STATE();
    case 153:
      if (eof) ADVANCE(157);
      if (lookahead == '!') ADVANCE(80);
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '-') ADVANCE(689);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(168);
      if (lookahead == '=') ADVANCE(251);
      if (lookahead == 'c') ADVANCE(584);
      if (lookahead == 'd') ADVANCE(622);
      if (lookahead == 'e') ADVANCE(616);
      if (lookahead == 'i') ADVANCE(604);
      if (lookahead == 's') ADVANCE(588);
      if (lookahead == 'u') ADVANCE(619);
      if (lookahead == '|') ADVANCE(165);
      if (lookahead == '}') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(153)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 154:
      if (eof) ADVANCE(157);
      if (lookahead == '!') ADVANCE(80);
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '-') ADVANCE(689);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(168);
      if (lookahead == '=') ADVANCE(251);
      if (lookahead == 'c') ADVANCE(584);
      if (lookahead == 'd') ADVANCE(595);
      if (lookahead == 'e') ADVANCE(616);
      if (lookahead == 'i') ADVANCE(604);
      if (lookahead == 's') ADVANCE(588);
      if (lookahead == 'u') ADVANCE(619);
      if (lookahead == 'w') ADVANCE(609);
      if (lookahead == '|') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(154)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 155:
      if (eof) ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(172);
      if (lookahead == '!') ADVANCE(80);
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == '-') ADVANCE(689);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(168);
      if (lookahead == '=') ADVANCE(251);
      if (lookahead == 'c') ADVANCE(584);
      if (lookahead == 'd') ADVANCE(622);
      if (lookahead == 'e') ADVANCE(616);
      if (lookahead == 'i') ADVANCE(604);
      if (lookahead == 's') ADVANCE(588);
      if (lookahead == 'u') ADVANCE(619);
      if (lookahead == '|') ADVANCE(165);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(155)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 156:
      if (eof) ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(172);
      if (lookahead == '!') ADVANCE(80);
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == '-') ADVANCE(689);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(168);
      if (lookahead == '=') ADVANCE(251);
      if (lookahead == 'c') ADVANCE(584);
      if (lookahead == 'd') ADVANCE(595);
      if (lookahead == 'e') ADVANCE(616);
      if (lookahead == 'i') ADVANCE(604);
      if (lookahead == 's') ADVANCE(588);
      if (lookahead == 'u') ADVANCE(619);
      if (lookahead == 'w') ADVANCE(609);
      if (lookahead == '|') ADVANCE(165);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(156)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_doctype);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_strict);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_filter_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_filter_content_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '!') ADVANCE(177);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '-') ADVANCE(690);
      if (lookahead == '.') ADVANCE(214);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == ':') ADVANCE(169);
      if (lookahead == '=') ADVANCE(252);
      if (lookahead == 'c') ADVANCE(178);
      if (lookahead == 'd') ADVANCE(185);
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == 'i') ADVANCE(188);
      if (lookahead == 's') ADVANCE(180);
      if (lookahead == 'u') ADVANCE(198);
      if (lookahead == 'w') ADVANCE(191);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '!') ADVANCE(177);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '-') ADVANCE(690);
      if (lookahead == '.') ADVANCE(214);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == ':') ADVANCE(169);
      if (lookahead == '=') ADVANCE(252);
      if (lookahead == 'c') ADVANCE(178);
      if (lookahead == 'd') ADVANCE(199);
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == 'i') ADVANCE(188);
      if (lookahead == 's') ADVANCE(180);
      if (lookahead == 'u') ADVANCE(198);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '.') ADVANCE(255);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '/') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '=') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'c') ADVANCE(202);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'c') ADVANCE(207);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == 'o') ADVANCE(181);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'e') ADVANCE(197);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'f') ADVANCE(225);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'f') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'f') ADVANCE(179);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'h') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'i') ADVANCE(200);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'l') ADVANCE(209);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'l') ADVANCE(187);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'l') ADVANCE(206);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'n') ADVANCE(240);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'n') ADVANCE(195);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'o') ADVANCE(181);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'p') ADVANCE(208);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'p') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'r') ADVANCE(192);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 's') ADVANCE(221);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 's') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 's') ADVANCE(203);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 't') ADVANCE(211);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 't') ADVANCE(246);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'u') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == 'y') ADVANCE(201);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(215);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (eof) ADVANCE(157);
      if (lookahead == '!') ADVANCE(177);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '-') ADVANCE(690);
      if (lookahead == '.') ADVANCE(214);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == ':') ADVANCE(169);
      if (lookahead == '=') ADVANCE(252);
      if (lookahead == 'c') ADVANCE(178);
      if (lookahead == 'd') ADVANCE(185);
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == 'i') ADVANCE(188);
      if (lookahead == 's') ADVANCE(180);
      if (lookahead == 'u') ADVANCE(198);
      if (lookahead == 'w') ADVANCE(191);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_filter_content_token2);
      if (eof) ADVANCE(157);
      if (lookahead == '!') ADVANCE(177);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '-') ADVANCE(690);
      if (lookahead == '.') ADVANCE(214);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead == ':') ADVANCE(169);
      if (lookahead == '=') ADVANCE(252);
      if (lookahead == 'c') ADVANCE(178);
      if (lookahead == 'd') ADVANCE(199);
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == 'i') ADVANCE(188);
      if (lookahead == 's') ADVANCE(180);
      if (lookahead == 'u') ADVANCE(198);
      if (lookahead == '|') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(193);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(683);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(110);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(110);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__when_keyword_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(243);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__when_keyword_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_script_DOT);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_script_DOT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_script_DOT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_script_block_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_script_block_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(576);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(652);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"') ADVANCE(267);
      if (lookahead == '`') ADVANCE(560);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(268);
      if (lookahead == '`') ADVANCE(561);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(269);
      if (lookahead == '`') ADVANCE(565);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == ']') ADVANCE(567);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(62);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(271);
      if (lookahead == ']') ADVANCE(568);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(66);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ']') ADVANCE(570);
      if (lookahead == '`') ADVANCE(272);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(93);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(273);
      if (lookahead == ']') ADVANCE(571);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(137);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(274);
      if (lookahead == ']') ADVANCE(572);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(138);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(275);
      if (lookahead == ']') ADVANCE(573);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(139);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(276);
      if (lookahead == ']') ADVANCE(574);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(141);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"') ADVANCE(277);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(547);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(62);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(278);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(548);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(66);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '`') ADVANCE(279);
      if (lookahead == '}') ADVANCE(549);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(93);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(280);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(550);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(137);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(281);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(551);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(138);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(282);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(552);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(139);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(283);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(553);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(141);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(285);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == '`') ADVANCE(286);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(287);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(288);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(289);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(290);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '"') ADVANCE(291);
      if (lookahead == ')') ADVANCE(509);
      if (lookahead == '`') ADVANCE(557);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == ')') ADVANCE(510);
      if (lookahead == '`') ADVANCE(558);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(293);
      if (lookahead == ')') ADVANCE(511);
      if (lookahead == '`') ADVANCE(559);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"') ADVANCE(294);
      if (lookahead == ')') ADVANCE(532);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(295);
      if (lookahead == ')') ADVANCE(533);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == ')') ADVANCE(542);
      if (lookahead == '`') ADVANCE(296);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(297);
      if (lookahead == ')') ADVANCE(543);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(298);
      if (lookahead == ')') ADVANCE(544);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(299);
      if (lookahead == ')') ADVANCE(545);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(300);
      if (lookahead == ')') ADVANCE(546);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(480);
      if (lookahead == ' ') ADVANCE(301);
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '\'') ADVANCE(307);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '?') ADVANCE(374);
      if (lookahead == '`') ADVANCE(309);
      if (lookahead != 0) ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(480);
      if (lookahead == ' ') ADVANCE(301);
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '?') ADVANCE(374);
      if (lookahead != 0) ADVANCE(301);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(480);
      if (lookahead == ' ') ADVANCE(303);
      if (lookahead == '"') ADVANCE(307);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(375);
      if (lookahead == '`') ADVANCE(311);
      if (lookahead != 0) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(480);
      if (lookahead == ' ') ADVANCE(303);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(375);
      if (lookahead != 0) ADVANCE(303);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(480);
      if (lookahead == ' ') ADVANCE(305);
      if (lookahead == '"') ADVANCE(309);
      if (lookahead == '\'') ADVANCE(311);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '?') ADVANCE(376);
      if (lookahead == '`') ADVANCE(305);
      if (lookahead != 0) ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(480);
      if (lookahead == ' ') ADVANCE(305);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '?') ADVANCE(376);
      if (lookahead == '`') ADVANCE(305);
      if (lookahead != 0) ADVANCE(305);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(480);
      if (lookahead == ' ') ADVANCE(307);
      if (lookahead == '"') ADVANCE(307);
      if (lookahead == '\'') ADVANCE(307);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '?') ADVANCE(377);
      if (lookahead == '`') ADVANCE(313);
      if (lookahead != 0) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(480);
      if (lookahead == ' ') ADVANCE(307);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(307);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '?') ADVANCE(377);
      if (lookahead != 0) ADVANCE(307);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(480);
      if (lookahead == ' ') ADVANCE(309);
      if (lookahead == '"') ADVANCE(309);
      if (lookahead == '\'') ADVANCE(313);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(378);
      if (lookahead == '`') ADVANCE(309);
      if (lookahead != 0) ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(480);
      if (lookahead == ' ') ADVANCE(309);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(309);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(378);
      if (lookahead != 0) ADVANCE(309);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(480);
      if (lookahead == ' ') ADVANCE(311);
      if (lookahead == '"') ADVANCE(313);
      if (lookahead == '\'') ADVANCE(311);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(379);
      if (lookahead == '`') ADVANCE(311);
      if (lookahead != 0) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(480);
      if (lookahead == ' ') ADVANCE(311);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(311);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(379);
      if (lookahead != 0) ADVANCE(311);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(480);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == '"') ADVANCE(313);
      if (lookahead == '\'') ADVANCE(313);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == '?') ADVANCE(380);
      if (lookahead == '`') ADVANCE(313);
      if (lookahead != 0) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(480);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(313);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == '?') ADVANCE(380);
      if (lookahead != 0) ADVANCE(313);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(484);
      if (lookahead == ' ') ADVANCE(315);
      if (lookahead == '"') ADVANCE(315);
      if (lookahead == '\'') ADVANCE(321);
      if (lookahead == ')') ADVANCE(532);
      if (lookahead == '?') ADVANCE(381);
      if (lookahead == '`') ADVANCE(323);
      if (lookahead != 0) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(484);
      if (lookahead == ' ') ADVANCE(315);
      if (lookahead == '"') ADVANCE(315);
      if (lookahead == ')') ADVANCE(532);
      if (lookahead == '?') ADVANCE(381);
      if (lookahead != 0) ADVANCE(315);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(484);
      if (lookahead == ' ') ADVANCE(317);
      if (lookahead == '"') ADVANCE(321);
      if (lookahead == '\'') ADVANCE(317);
      if (lookahead == ')') ADVANCE(533);
      if (lookahead == '?') ADVANCE(382);
      if (lookahead == '`') ADVANCE(325);
      if (lookahead != 0) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(484);
      if (lookahead == ' ') ADVANCE(317);
      if (lookahead == '\'') ADVANCE(317);
      if (lookahead == ')') ADVANCE(533);
      if (lookahead == '?') ADVANCE(382);
      if (lookahead != 0) ADVANCE(317);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(484);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead == '"') ADVANCE(323);
      if (lookahead == '\'') ADVANCE(325);
      if (lookahead == ')') ADVANCE(542);
      if (lookahead == '?') ADVANCE(383);
      if (lookahead == '`') ADVANCE(319);
      if (lookahead != 0) ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(484);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead == ')') ADVANCE(542);
      if (lookahead == '?') ADVANCE(383);
      if (lookahead == '`') ADVANCE(319);
      if (lookahead != 0) ADVANCE(319);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(484);
      if (lookahead == ' ') ADVANCE(321);
      if (lookahead == '"') ADVANCE(321);
      if (lookahead == '\'') ADVANCE(321);
      if (lookahead == ')') ADVANCE(543);
      if (lookahead == '?') ADVANCE(384);
      if (lookahead == '`') ADVANCE(327);
      if (lookahead != 0) ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(484);
      if (lookahead == ' ') ADVANCE(321);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(321);
      if (lookahead == ')') ADVANCE(543);
      if (lookahead == '?') ADVANCE(384);
      if (lookahead != 0) ADVANCE(321);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(484);
      if (lookahead == ' ') ADVANCE(323);
      if (lookahead == '"') ADVANCE(323);
      if (lookahead == '\'') ADVANCE(327);
      if (lookahead == ')') ADVANCE(544);
      if (lookahead == '?') ADVANCE(385);
      if (lookahead == '`') ADVANCE(323);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(484);
      if (lookahead == ' ') ADVANCE(323);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(323);
      if (lookahead == ')') ADVANCE(544);
      if (lookahead == '?') ADVANCE(385);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(484);
      if (lookahead == ' ') ADVANCE(325);
      if (lookahead == '"') ADVANCE(327);
      if (lookahead == '\'') ADVANCE(325);
      if (lookahead == ')') ADVANCE(545);
      if (lookahead == '?') ADVANCE(386);
      if (lookahead == '`') ADVANCE(325);
      if (lookahead != 0) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(484);
      if (lookahead == ' ') ADVANCE(325);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(325);
      if (lookahead == ')') ADVANCE(545);
      if (lookahead == '?') ADVANCE(386);
      if (lookahead != 0) ADVANCE(325);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(484);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead == '"') ADVANCE(327);
      if (lookahead == '\'') ADVANCE(327);
      if (lookahead == ')') ADVANCE(546);
      if (lookahead == '?') ADVANCE(387);
      if (lookahead == '`') ADVANCE(327);
      if (lookahead != 0) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(484);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(327);
      if (lookahead == ')') ADVANCE(546);
      if (lookahead == '?') ADVANCE(387);
      if (lookahead != 0) ADVANCE(327);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(481);
      if (lookahead == ' ') ADVANCE(301);
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '\'') ADVANCE(335);
      if (lookahead == '(') ADVANCE(315);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '?') ADVANCE(388);
      if (lookahead == '`') ADVANCE(337);
      if (lookahead != 0) ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(481);
      if (lookahead == ' ') ADVANCE(301);
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '(') ADVANCE(315);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '?') ADVANCE(388);
      if (lookahead != 0) ADVANCE(329);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(481);
      if (lookahead == ' ') ADVANCE(303);
      if (lookahead == '"') ADVANCE(335);
      if (lookahead == '\'') ADVANCE(331);
      if (lookahead == '(') ADVANCE(317);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(389);
      if (lookahead == '`') ADVANCE(339);
      if (lookahead != 0) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(481);
      if (lookahead == ' ') ADVANCE(303);
      if (lookahead == '\'') ADVANCE(331);
      if (lookahead == '(') ADVANCE(317);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(389);
      if (lookahead != 0) ADVANCE(331);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(481);
      if (lookahead == ' ') ADVANCE(305);
      if (lookahead == '"') ADVANCE(337);
      if (lookahead == '\'') ADVANCE(339);
      if (lookahead == '(') ADVANCE(319);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '?') ADVANCE(390);
      if (lookahead == '`') ADVANCE(333);
      if (lookahead != 0) ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(481);
      if (lookahead == ' ') ADVANCE(305);
      if (lookahead == '(') ADVANCE(319);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '?') ADVANCE(390);
      if (lookahead == '`') ADVANCE(333);
      if (lookahead != 0) ADVANCE(333);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(481);
      if (lookahead == ' ') ADVANCE(307);
      if (lookahead == '"') ADVANCE(335);
      if (lookahead == '\'') ADVANCE(335);
      if (lookahead == '(') ADVANCE(321);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '?') ADVANCE(391);
      if (lookahead == '`') ADVANCE(341);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(481);
      if (lookahead == ' ') ADVANCE(307);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(335);
      if (lookahead == '(') ADVANCE(321);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '?') ADVANCE(391);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(481);
      if (lookahead == ' ') ADVANCE(309);
      if (lookahead == '"') ADVANCE(337);
      if (lookahead == '\'') ADVANCE(341);
      if (lookahead == '(') ADVANCE(323);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(392);
      if (lookahead == '`') ADVANCE(337);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(481);
      if (lookahead == ' ') ADVANCE(309);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(337);
      if (lookahead == '(') ADVANCE(323);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(392);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(481);
      if (lookahead == ' ') ADVANCE(311);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == '\'') ADVANCE(339);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(393);
      if (lookahead == '`') ADVANCE(339);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(481);
      if (lookahead == ' ') ADVANCE(311);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(339);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(393);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(481);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == '\'') ADVANCE(341);
      if (lookahead == '(') ADVANCE(327);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == '?') ADVANCE(394);
      if (lookahead == '`') ADVANCE(341);
      if (lookahead != 0) ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(481);
      if (lookahead == ' ') ADVANCE(313);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(341);
      if (lookahead == '(') ADVANCE(327);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == '?') ADVANCE(394);
      if (lookahead != 0) ADVANCE(341);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(491);
      if (lookahead == ' ') ADVANCE(439);
      if (lookahead == '"') ADVANCE(343);
      if (lookahead == '\'') ADVANCE(345);
      if (lookahead == '(') ADVANCE(449);
      if (lookahead == ')') ADVANCE(1);
      if (lookahead == '?') ADVANCE(401);
      if (lookahead == '`') ADVANCE(337);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(491);
      if (lookahead == ' ') ADVANCE(440);
      if (lookahead == '"') ADVANCE(345);
      if (lookahead == '\'') ADVANCE(344);
      if (lookahead == '(') ADVANCE(450);
      if (lookahead == ')') ADVANCE(2);
      if (lookahead == '?') ADVANCE(402);
      if (lookahead == '`') ADVANCE(339);
      if (lookahead != 0) ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(491);
      if (lookahead == ' ') ADVANCE(441);
      if (lookahead == '"') ADVANCE(345);
      if (lookahead == '\'') ADVANCE(345);
      if (lookahead == '(') ADVANCE(451);
      if (lookahead == ')') ADVANCE(3);
      if (lookahead == '?') ADVANCE(403);
      if (lookahead == '`') ADVANCE(341);
      if (lookahead != 0) ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(487);
      if (lookahead == ' ') ADVANCE(346);
      if (lookahead == '"') ADVANCE(346);
      if (lookahead == '\'') ADVANCE(349);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '?') ADVANCE(404);
      if (lookahead == ']') ADVANCE(301);
      if (lookahead == '`') ADVANCE(350);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(301);
      if (lookahead != 0) ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(487);
      if (lookahead == ' ') ADVANCE(347);
      if (lookahead == '"') ADVANCE(349);
      if (lookahead == '\'') ADVANCE(347);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(405);
      if (lookahead == ']') ADVANCE(303);
      if (lookahead == '`') ADVANCE(351);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(303);
      if (lookahead != 0) ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(487);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead == '"') ADVANCE(350);
      if (lookahead == '\'') ADVANCE(351);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '?') ADVANCE(406);
      if (lookahead == ']') ADVANCE(305);
      if (lookahead == '`') ADVANCE(348);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(305);
      if (lookahead != 0) ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(487);
      if (lookahead == ' ') ADVANCE(349);
      if (lookahead == '"') ADVANCE(349);
      if (lookahead == '\'') ADVANCE(349);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '?') ADVANCE(407);
      if (lookahead == ']') ADVANCE(307);
      if (lookahead == '`') ADVANCE(352);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(307);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(487);
      if (lookahead == ' ') ADVANCE(350);
      if (lookahead == '"') ADVANCE(350);
      if (lookahead == '\'') ADVANCE(352);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(408);
      if (lookahead == ']') ADVANCE(309);
      if (lookahead == '`') ADVANCE(350);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(309);
      if (lookahead != 0) ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(487);
      if (lookahead == ' ') ADVANCE(351);
      if (lookahead == '"') ADVANCE(352);
      if (lookahead == '\'') ADVANCE(351);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(409);
      if (lookahead == ']') ADVANCE(311);
      if (lookahead == '`') ADVANCE(351);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(311);
      if (lookahead != 0) ADVANCE(351);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(487);
      if (lookahead == ' ') ADVANCE(352);
      if (lookahead == '"') ADVANCE(352);
      if (lookahead == '\'') ADVANCE(352);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == '?') ADVANCE(410);
      if (lookahead == ']') ADVANCE(313);
      if (lookahead == '`') ADVANCE(352);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(313);
      if (lookahead != 0) ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(488);
      if (lookahead == ' ') ADVANCE(346);
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '\'') ADVANCE(356);
      if (lookahead == '(') ADVANCE(315);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '?') ADVANCE(411);
      if (lookahead == '[') ADVANCE(329);
      if (lookahead == ']') ADVANCE(329);
      if (lookahead == '`') ADVANCE(357);
      if (lookahead != 0) ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(488);
      if (lookahead == ' ') ADVANCE(347);
      if (lookahead == '"') ADVANCE(356);
      if (lookahead == '\'') ADVANCE(354);
      if (lookahead == '(') ADVANCE(317);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(412);
      if (lookahead == '[') ADVANCE(331);
      if (lookahead == ']') ADVANCE(331);
      if (lookahead == '`') ADVANCE(358);
      if (lookahead != 0) ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(488);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead == '"') ADVANCE(357);
      if (lookahead == '\'') ADVANCE(358);
      if (lookahead == '(') ADVANCE(319);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '?') ADVANCE(413);
      if (lookahead == '[') ADVANCE(333);
      if (lookahead == ']') ADVANCE(333);
      if (lookahead == '`') ADVANCE(355);
      if (lookahead != 0) ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(488);
      if (lookahead == ' ') ADVANCE(349);
      if (lookahead == '"') ADVANCE(356);
      if (lookahead == '\'') ADVANCE(356);
      if (lookahead == '(') ADVANCE(321);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '?') ADVANCE(414);
      if (lookahead == '[') ADVANCE(335);
      if (lookahead == ']') ADVANCE(335);
      if (lookahead == '`') ADVANCE(359);
      if (lookahead != 0) ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(488);
      if (lookahead == ' ') ADVANCE(350);
      if (lookahead == '"') ADVANCE(357);
      if (lookahead == '\'') ADVANCE(359);
      if (lookahead == '(') ADVANCE(323);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(415);
      if (lookahead == '[') ADVANCE(337);
      if (lookahead == ']') ADVANCE(337);
      if (lookahead == '`') ADVANCE(357);
      if (lookahead != 0) ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(488);
      if (lookahead == ' ') ADVANCE(351);
      if (lookahead == '"') ADVANCE(359);
      if (lookahead == '\'') ADVANCE(358);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(416);
      if (lookahead == '[') ADVANCE(339);
      if (lookahead == ']') ADVANCE(339);
      if (lookahead == '`') ADVANCE(358);
      if (lookahead != 0) ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(488);
      if (lookahead == ' ') ADVANCE(352);
      if (lookahead == '"') ADVANCE(359);
      if (lookahead == '\'') ADVANCE(359);
      if (lookahead == '(') ADVANCE(327);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == '?') ADVANCE(417);
      if (lookahead == '[') ADVANCE(341);
      if (lookahead == ']') ADVANCE(341);
      if (lookahead == '`') ADVANCE(359);
      if (lookahead != 0) ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(489);
      if (lookahead == ' ') ADVANCE(360);
      if (lookahead == '"') ADVANCE(360);
      if (lookahead == '\'') ADVANCE(363);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == ',') ADVANCE(360);
      if (lookahead == '?') ADVANCE(418);
      if (lookahead == '`') ADVANCE(364);
      if (lookahead == '}') ADVANCE(360);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(301);
      if (lookahead != 0) ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(489);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead == '"') ADVANCE(363);
      if (lookahead == '\'') ADVANCE(361);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(361);
      if (lookahead == '?') ADVANCE(419);
      if (lookahead == '`') ADVANCE(365);
      if (lookahead == '}') ADVANCE(361);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(303);
      if (lookahead != 0) ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(489);
      if (lookahead == ' ') ADVANCE(362);
      if (lookahead == '"') ADVANCE(364);
      if (lookahead == '\'') ADVANCE(365);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == ',') ADVANCE(362);
      if (lookahead == '?') ADVANCE(420);
      if (lookahead == '`') ADVANCE(362);
      if (lookahead == '}') ADVANCE(362);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(305);
      if (lookahead != 0) ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(489);
      if (lookahead == ' ') ADVANCE(363);
      if (lookahead == '"') ADVANCE(363);
      if (lookahead == '\'') ADVANCE(363);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == ',') ADVANCE(363);
      if (lookahead == '?') ADVANCE(421);
      if (lookahead == '`') ADVANCE(366);
      if (lookahead == '}') ADVANCE(363);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(307);
      if (lookahead != 0) ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(489);
      if (lookahead == ' ') ADVANCE(364);
      if (lookahead == '"') ADVANCE(364);
      if (lookahead == '\'') ADVANCE(366);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == ',') ADVANCE(364);
      if (lookahead == '?') ADVANCE(422);
      if (lookahead == '`') ADVANCE(364);
      if (lookahead == '}') ADVANCE(364);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(309);
      if (lookahead != 0) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(489);
      if (lookahead == ' ') ADVANCE(365);
      if (lookahead == '"') ADVANCE(366);
      if (lookahead == '\'') ADVANCE(365);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ',') ADVANCE(365);
      if (lookahead == '?') ADVANCE(423);
      if (lookahead == '`') ADVANCE(365);
      if (lookahead == '}') ADVANCE(365);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(311);
      if (lookahead != 0) ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(489);
      if (lookahead == ' ') ADVANCE(366);
      if (lookahead == '"') ADVANCE(366);
      if (lookahead == '\'') ADVANCE(366);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == ',') ADVANCE(366);
      if (lookahead == '?') ADVANCE(424);
      if (lookahead == '`') ADVANCE(366);
      if (lookahead == '}') ADVANCE(366);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(313);
      if (lookahead != 0) ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(490);
      if (lookahead == ' ') ADVANCE(360);
      if (lookahead == '"') ADVANCE(367);
      if (lookahead == '\'') ADVANCE(370);
      if (lookahead == '(') ADVANCE(315);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == ',') ADVANCE(367);
      if (lookahead == '?') ADVANCE(425);
      if (lookahead == '`') ADVANCE(371);
      if (lookahead == '}') ADVANCE(367);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(329);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(490);
      if (lookahead == ' ') ADVANCE(361);
      if (lookahead == '"') ADVANCE(370);
      if (lookahead == '\'') ADVANCE(368);
      if (lookahead == '(') ADVANCE(317);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(368);
      if (lookahead == '?') ADVANCE(426);
      if (lookahead == '`') ADVANCE(372);
      if (lookahead == '}') ADVANCE(368);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(331);
      if (lookahead != 0) ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(490);
      if (lookahead == ' ') ADVANCE(362);
      if (lookahead == '"') ADVANCE(371);
      if (lookahead == '\'') ADVANCE(372);
      if (lookahead == '(') ADVANCE(319);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == ',') ADVANCE(369);
      if (lookahead == '?') ADVANCE(427);
      if (lookahead == '`') ADVANCE(369);
      if (lookahead == '}') ADVANCE(369);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(333);
      if (lookahead != 0) ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(490);
      if (lookahead == ' ') ADVANCE(363);
      if (lookahead == '"') ADVANCE(370);
      if (lookahead == '\'') ADVANCE(370);
      if (lookahead == '(') ADVANCE(321);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == ',') ADVANCE(370);
      if (lookahead == '?') ADVANCE(428);
      if (lookahead == '`') ADVANCE(373);
      if (lookahead == '}') ADVANCE(370);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(335);
      if (lookahead != 0) ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(490);
      if (lookahead == ' ') ADVANCE(364);
      if (lookahead == '"') ADVANCE(371);
      if (lookahead == '\'') ADVANCE(373);
      if (lookahead == '(') ADVANCE(323);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == ',') ADVANCE(371);
      if (lookahead == '?') ADVANCE(429);
      if (lookahead == '`') ADVANCE(371);
      if (lookahead == '}') ADVANCE(371);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(337);
      if (lookahead != 0) ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(490);
      if (lookahead == ' ') ADVANCE(365);
      if (lookahead == '"') ADVANCE(373);
      if (lookahead == '\'') ADVANCE(372);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ',') ADVANCE(372);
      if (lookahead == '?') ADVANCE(430);
      if (lookahead == '`') ADVANCE(372);
      if (lookahead == '}') ADVANCE(372);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(339);
      if (lookahead != 0) ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(490);
      if (lookahead == ' ') ADVANCE(366);
      if (lookahead == '"') ADVANCE(373);
      if (lookahead == '\'') ADVANCE(373);
      if (lookahead == '(') ADVANCE(327);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == ',') ADVANCE(373);
      if (lookahead == '?') ADVANCE(431);
      if (lookahead == '`') ADVANCE(373);
      if (lookahead == '}') ADVANCE(373);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(341);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(507);
      if (lookahead == '"') ADVANCE(374);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(62);
      if (lookahead != 0) ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(507);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(66);
      if (lookahead != 0) ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(507);
      if (lookahead == '`') ADVANCE(376);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(93);
      if (lookahead != 0) ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(507);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(377);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(137);
      if (lookahead != 0) ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(507);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(378);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(138);
      if (lookahead != 0) ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(507);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(379);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(139);
      if (lookahead != 0) ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(507);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(380);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(141);
      if (lookahead != 0) ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(479);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '"') ADVANCE(381);
      if (lookahead == ')') ADVANCE(532);
      if (lookahead != 0) ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(479);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(382);
      if (lookahead == ')') ADVANCE(533);
      if (lookahead != 0) ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(479);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == ')') ADVANCE(542);
      if (lookahead == '`') ADVANCE(383);
      if (lookahead != 0) ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(479);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(384);
      if (lookahead == ')') ADVANCE(543);
      if (lookahead != 0) ADVANCE(384);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(479);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(385);
      if (lookahead == ')') ADVANCE(544);
      if (lookahead != 0) ADVANCE(385);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(479);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(386);
      if (lookahead == ')') ADVANCE(545);
      if (lookahead != 0) ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(479);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(387);
      if (lookahead == ')') ADVANCE(546);
      if (lookahead != 0) ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(499);
      if (lookahead == '"') ADVANCE(388);
      if (lookahead == '(') ADVANCE(381);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(62);
      if (lookahead != 0) ADVANCE(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(499);
      if (lookahead == '\'') ADVANCE(389);
      if (lookahead == '(') ADVANCE(382);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(66);
      if (lookahead != 0) ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(499);
      if (lookahead == '(') ADVANCE(383);
      if (lookahead == '`') ADVANCE(390);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(93);
      if (lookahead != 0) ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(499);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(391);
      if (lookahead == '(') ADVANCE(384);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(137);
      if (lookahead != 0) ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(499);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(392);
      if (lookahead == '(') ADVANCE(385);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(138);
      if (lookahead != 0) ADVANCE(392);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(499);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(393);
      if (lookahead == '(') ADVANCE(386);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(139);
      if (lookahead != 0) ADVANCE(393);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(499);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(394);
      if (lookahead == '(') ADVANCE(387);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(141);
      if (lookahead != 0) ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(501);
      if (lookahead == '"') ADVANCE(395);
      if (lookahead == '`') ADVANCE(374);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(1);
      if (lookahead != 0) ADVANCE(395);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(501);
      if (lookahead == '\'') ADVANCE(396);
      if (lookahead == '`') ADVANCE(375);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(2);
      if (lookahead != 0) ADVANCE(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(501);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(397);
      if (lookahead == '`') ADVANCE(377);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(3);
      if (lookahead != 0) ADVANCE(397);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(477);
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '"') ADVANCE(398);
      if (lookahead == ')') ADVANCE(509);
      if (lookahead == '`') ADVANCE(381);
      if (lookahead != 0) ADVANCE(398);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(477);
      if (lookahead == ' ') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == ')') ADVANCE(510);
      if (lookahead == '`') ADVANCE(382);
      if (lookahead != 0) ADVANCE(399);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(477);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(400);
      if (lookahead == ')') ADVANCE(511);
      if (lookahead == '`') ADVANCE(384);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(500);
      if (lookahead == '"') ADVANCE(401);
      if (lookahead == '(') ADVANCE(398);
      if (lookahead == '`') ADVANCE(388);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(1);
      if (lookahead != 0) ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(500);
      if (lookahead == '\'') ADVANCE(402);
      if (lookahead == '(') ADVANCE(399);
      if (lookahead == '`') ADVANCE(389);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(2);
      if (lookahead != 0) ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(500);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(403);
      if (lookahead == '(') ADVANCE(400);
      if (lookahead == '`') ADVANCE(391);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(3);
      if (lookahead != 0) ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(474);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '"') ADVANCE(404);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == ']') ADVANCE(374);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(374);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(474);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(405);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ']') ADVANCE(375);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(375);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(474);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == ']') ADVANCE(376);
      if (lookahead == '`') ADVANCE(406);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(376);
      if (lookahead != 0) ADVANCE(406);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(474);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(407);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == ']') ADVANCE(377);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(377);
      if (lookahead != 0) ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(474);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(408);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == ']') ADVANCE(378);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(378);
      if (lookahead != 0) ADVANCE(408);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(474);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(409);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ']') ADVANCE(379);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(379);
      if (lookahead != 0) ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(474);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(410);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == ']') ADVANCE(380);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(380);
      if (lookahead != 0) ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(473);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '"') ADVANCE(411);
      if (lookahead == '(') ADVANCE(381);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '[') ADVANCE(388);
      if (lookahead == ']') ADVANCE(388);
      if (lookahead != 0) ADVANCE(411);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(473);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(412);
      if (lookahead == '(') ADVANCE(382);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '[') ADVANCE(389);
      if (lookahead == ']') ADVANCE(389);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(473);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '(') ADVANCE(383);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '[') ADVANCE(390);
      if (lookahead == ']') ADVANCE(390);
      if (lookahead == '`') ADVANCE(413);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(473);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(414);
      if (lookahead == '(') ADVANCE(384);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '[') ADVANCE(391);
      if (lookahead == ']') ADVANCE(391);
      if (lookahead != 0) ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(473);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(415);
      if (lookahead == '(') ADVANCE(385);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '[') ADVANCE(392);
      if (lookahead == ']') ADVANCE(392);
      if (lookahead != 0) ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(473);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(416);
      if (lookahead == '(') ADVANCE(386);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '[') ADVANCE(393);
      if (lookahead == ']') ADVANCE(393);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(473);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(417);
      if (lookahead == '(') ADVANCE(387);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == '[') ADVANCE(394);
      if (lookahead == ']') ADVANCE(394);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(476);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '"') ADVANCE(418);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == ',') ADVANCE(418);
      if (lookahead == '}') ADVANCE(418);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(374);
      if (lookahead != 0) ADVANCE(418);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(476);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(419);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(419);
      if (lookahead == '}') ADVANCE(419);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(375);
      if (lookahead != 0) ADVANCE(419);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(476);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == ',') ADVANCE(420);
      if (lookahead == '`') ADVANCE(420);
      if (lookahead == '}') ADVANCE(420);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(376);
      if (lookahead != 0) ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(476);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(421);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == ',') ADVANCE(421);
      if (lookahead == '}') ADVANCE(421);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(377);
      if (lookahead != 0) ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(476);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(422);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == ',') ADVANCE(422);
      if (lookahead == '}') ADVANCE(422);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(378);
      if (lookahead != 0) ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(476);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(423);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ',') ADVANCE(423);
      if (lookahead == '}') ADVANCE(423);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(379);
      if (lookahead != 0) ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(476);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(424);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == ',') ADVANCE(424);
      if (lookahead == '}') ADVANCE(424);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(380);
      if (lookahead != 0) ADVANCE(424);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(475);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '"') ADVANCE(425);
      if (lookahead == '(') ADVANCE(381);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == ',') ADVANCE(425);
      if (lookahead == '}') ADVANCE(425);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(388);
      if (lookahead != 0) ADVANCE(425);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(475);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(426);
      if (lookahead == '(') ADVANCE(382);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(426);
      if (lookahead == '}') ADVANCE(426);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(389);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(475);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '(') ADVANCE(383);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == ',') ADVANCE(427);
      if (lookahead == '`') ADVANCE(427);
      if (lookahead == '}') ADVANCE(427);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(390);
      if (lookahead != 0) ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(475);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(428);
      if (lookahead == '(') ADVANCE(384);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == ',') ADVANCE(428);
      if (lookahead == '}') ADVANCE(428);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(391);
      if (lookahead != 0) ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(475);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(429);
      if (lookahead == '(') ADVANCE(385);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == ',') ADVANCE(429);
      if (lookahead == '}') ADVANCE(429);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(392);
      if (lookahead != 0) ADVANCE(429);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(475);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(430);
      if (lookahead == '(') ADVANCE(386);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ',') ADVANCE(430);
      if (lookahead == '}') ADVANCE(430);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(393);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(475);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(431);
      if (lookahead == '(') ADVANCE(387);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == ',') ADVANCE(431);
      if (lookahead == '}') ADVANCE(431);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(394);
      if (lookahead != 0) ADVANCE(431);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(478);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '"') ADVANCE(432);
      if (lookahead == '(') ADVANCE(381);
      if (lookahead == ')') ADVANCE(532);
      if (lookahead != 0) ADVANCE(432);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(478);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(433);
      if (lookahead == '(') ADVANCE(382);
      if (lookahead == ')') ADVANCE(533);
      if (lookahead != 0) ADVANCE(433);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(478);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == '(') ADVANCE(383);
      if (lookahead == ')') ADVANCE(542);
      if (lookahead == '`') ADVANCE(434);
      if (lookahead != 0) ADVANCE(434);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(478);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(435);
      if (lookahead == '(') ADVANCE(384);
      if (lookahead == ')') ADVANCE(543);
      if (lookahead != 0) ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(478);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(436);
      if (lookahead == '(') ADVANCE(385);
      if (lookahead == ')') ADVANCE(544);
      if (lookahead != 0) ADVANCE(436);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(478);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(437);
      if (lookahead == '(') ADVANCE(386);
      if (lookahead == ')') ADVANCE(545);
      if (lookahead != 0) ADVANCE(437);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(478);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(438);
      if (lookahead == '(') ADVANCE(387);
      if (lookahead == ')') ADVANCE(546);
      if (lookahead != 0) ADVANCE(438);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(492);
      if (lookahead == ' ') ADVANCE(439);
      if (lookahead == '"') ADVANCE(439);
      if (lookahead == '\'') ADVANCE(441);
      if (lookahead == ')') ADVANCE(1);
      if (lookahead == '?') ADVANCE(395);
      if (lookahead == '`') ADVANCE(309);
      if (lookahead != 0) ADVANCE(439);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(492);
      if (lookahead == ' ') ADVANCE(440);
      if (lookahead == '"') ADVANCE(441);
      if (lookahead == '\'') ADVANCE(440);
      if (lookahead == ')') ADVANCE(2);
      if (lookahead == '?') ADVANCE(396);
      if (lookahead == '`') ADVANCE(311);
      if (lookahead != 0) ADVANCE(440);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(492);
      if (lookahead == ' ') ADVANCE(441);
      if (lookahead == '"') ADVANCE(441);
      if (lookahead == '\'') ADVANCE(441);
      if (lookahead == ')') ADVANCE(3);
      if (lookahead == '?') ADVANCE(397);
      if (lookahead == '`') ADVANCE(313);
      if (lookahead != 0) ADVANCE(441);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(494);
      if (lookahead == ' ') ADVANCE(459);
      if (lookahead == '"') ADVANCE(442);
      if (lookahead == '\'') ADVANCE(445);
      if (lookahead == '(') ADVANCE(466);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '?') ADVANCE(330);
      if (lookahead == '`') ADVANCE(446);
      if (lookahead != 0) ADVANCE(442);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(494);
      if (lookahead == ' ') ADVANCE(460);
      if (lookahead == '"') ADVANCE(445);
      if (lookahead == '\'') ADVANCE(443);
      if (lookahead == '(') ADVANCE(467);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '?') ADVANCE(332);
      if (lookahead == '`') ADVANCE(447);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(494);
      if (lookahead == ' ') ADVANCE(461);
      if (lookahead == '"') ADVANCE(446);
      if (lookahead == '\'') ADVANCE(447);
      if (lookahead == '(') ADVANCE(468);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '?') ADVANCE(334);
      if (lookahead == '`') ADVANCE(444);
      if (lookahead != 0) ADVANCE(444);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(494);
      if (lookahead == ' ') ADVANCE(462);
      if (lookahead == '"') ADVANCE(445);
      if (lookahead == '\'') ADVANCE(445);
      if (lookahead == '(') ADVANCE(469);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '?') ADVANCE(336);
      if (lookahead == '`') ADVANCE(448);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(494);
      if (lookahead == ' ') ADVANCE(463);
      if (lookahead == '"') ADVANCE(446);
      if (lookahead == '\'') ADVANCE(448);
      if (lookahead == '(') ADVANCE(470);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '?') ADVANCE(338);
      if (lookahead == '`') ADVANCE(446);
      if (lookahead != 0) ADVANCE(446);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(494);
      if (lookahead == ' ') ADVANCE(464);
      if (lookahead == '"') ADVANCE(448);
      if (lookahead == '\'') ADVANCE(447);
      if (lookahead == '(') ADVANCE(471);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '?') ADVANCE(340);
      if (lookahead == '`') ADVANCE(447);
      if (lookahead != 0) ADVANCE(447);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(494);
      if (lookahead == ' ') ADVANCE(465);
      if (lookahead == '"') ADVANCE(448);
      if (lookahead == '\'') ADVANCE(448);
      if (lookahead == '(') ADVANCE(472);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '?') ADVANCE(342);
      if (lookahead == '`') ADVANCE(448);
      if (lookahead != 0) ADVANCE(448);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(493);
      if (lookahead == ' ') ADVANCE(449);
      if (lookahead == '"') ADVANCE(449);
      if (lookahead == '\'') ADVANCE(451);
      if (lookahead == ')') ADVANCE(509);
      if (lookahead == '?') ADVANCE(398);
      if (lookahead == '`') ADVANCE(323);
      if (lookahead != 0) ADVANCE(449);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(493);
      if (lookahead == ' ') ADVANCE(450);
      if (lookahead == '"') ADVANCE(451);
      if (lookahead == '\'') ADVANCE(450);
      if (lookahead == ')') ADVANCE(510);
      if (lookahead == '?') ADVANCE(399);
      if (lookahead == '`') ADVANCE(325);
      if (lookahead != 0) ADVANCE(450);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(493);
      if (lookahead == ' ') ADVANCE(451);
      if (lookahead == '"') ADVANCE(451);
      if (lookahead == '\'') ADVANCE(451);
      if (lookahead == ')') ADVANCE(511);
      if (lookahead == '?') ADVANCE(400);
      if (lookahead == '`') ADVANCE(327);
      if (lookahead != 0) ADVANCE(451);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(485);
      if (lookahead == ' ') ADVANCE(315);
      if (lookahead == '"') ADVANCE(452);
      if (lookahead == '\'') ADVANCE(455);
      if (lookahead == '(') ADVANCE(315);
      if (lookahead == ')') ADVANCE(532);
      if (lookahead == '?') ADVANCE(432);
      if (lookahead == '`') ADVANCE(456);
      if (lookahead != 0) ADVANCE(452);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(485);
      if (lookahead == ' ') ADVANCE(317);
      if (lookahead == '"') ADVANCE(455);
      if (lookahead == '\'') ADVANCE(453);
      if (lookahead == '(') ADVANCE(317);
      if (lookahead == ')') ADVANCE(533);
      if (lookahead == '?') ADVANCE(433);
      if (lookahead == '`') ADVANCE(457);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(485);
      if (lookahead == ' ') ADVANCE(319);
      if (lookahead == '"') ADVANCE(456);
      if (lookahead == '\'') ADVANCE(457);
      if (lookahead == '(') ADVANCE(319);
      if (lookahead == ')') ADVANCE(542);
      if (lookahead == '?') ADVANCE(434);
      if (lookahead == '`') ADVANCE(454);
      if (lookahead != 0) ADVANCE(454);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(485);
      if (lookahead == ' ') ADVANCE(321);
      if (lookahead == '"') ADVANCE(455);
      if (lookahead == '\'') ADVANCE(455);
      if (lookahead == '(') ADVANCE(321);
      if (lookahead == ')') ADVANCE(543);
      if (lookahead == '?') ADVANCE(435);
      if (lookahead == '`') ADVANCE(458);
      if (lookahead != 0) ADVANCE(455);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(485);
      if (lookahead == ' ') ADVANCE(323);
      if (lookahead == '"') ADVANCE(456);
      if (lookahead == '\'') ADVANCE(458);
      if (lookahead == '(') ADVANCE(323);
      if (lookahead == ')') ADVANCE(544);
      if (lookahead == '?') ADVANCE(436);
      if (lookahead == '`') ADVANCE(456);
      if (lookahead != 0) ADVANCE(456);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(485);
      if (lookahead == ' ') ADVANCE(325);
      if (lookahead == '"') ADVANCE(458);
      if (lookahead == '\'') ADVANCE(457);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == ')') ADVANCE(545);
      if (lookahead == '?') ADVANCE(437);
      if (lookahead == '`') ADVANCE(457);
      if (lookahead != 0) ADVANCE(457);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(485);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead == '"') ADVANCE(458);
      if (lookahead == '\'') ADVANCE(458);
      if (lookahead == '(') ADVANCE(327);
      if (lookahead == ')') ADVANCE(546);
      if (lookahead == '?') ADVANCE(438);
      if (lookahead == '`') ADVANCE(458);
      if (lookahead != 0) ADVANCE(458);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(495);
      if (lookahead == ' ') ADVANCE(459);
      if (lookahead == '"') ADVANCE(459);
      if (lookahead == '\'') ADVANCE(462);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '?') ADVANCE(302);
      if (lookahead == '`') ADVANCE(463);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(495);
      if (lookahead == ' ') ADVANCE(460);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead == '\'') ADVANCE(460);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '?') ADVANCE(304);
      if (lookahead == '`') ADVANCE(464);
      if (lookahead != 0) ADVANCE(460);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(495);
      if (lookahead == ' ') ADVANCE(461);
      if (lookahead == '"') ADVANCE(463);
      if (lookahead == '\'') ADVANCE(464);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '?') ADVANCE(306);
      if (lookahead == '`') ADVANCE(461);
      if (lookahead != 0) ADVANCE(461);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(495);
      if (lookahead == ' ') ADVANCE(462);
      if (lookahead == '"') ADVANCE(462);
      if (lookahead == '\'') ADVANCE(462);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '?') ADVANCE(308);
      if (lookahead == '`') ADVANCE(465);
      if (lookahead != 0) ADVANCE(462);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(495);
      if (lookahead == ' ') ADVANCE(463);
      if (lookahead == '"') ADVANCE(463);
      if (lookahead == '\'') ADVANCE(465);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '?') ADVANCE(310);
      if (lookahead == '`') ADVANCE(463);
      if (lookahead != 0) ADVANCE(463);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(495);
      if (lookahead == ' ') ADVANCE(464);
      if (lookahead == '"') ADVANCE(465);
      if (lookahead == '\'') ADVANCE(464);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '?') ADVANCE(312);
      if (lookahead == '`') ADVANCE(464);
      if (lookahead != 0) ADVANCE(464);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(495);
      if (lookahead == ' ') ADVANCE(465);
      if (lookahead == '"') ADVANCE(465);
      if (lookahead == '\'') ADVANCE(465);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '?') ADVANCE(314);
      if (lookahead == '`') ADVANCE(465);
      if (lookahead != 0) ADVANCE(465);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(496);
      if (lookahead == ' ') ADVANCE(466);
      if (lookahead == '"') ADVANCE(466);
      if (lookahead == '\'') ADVANCE(469);
      if (lookahead == ')') ADVANCE(512);
      if (lookahead == '?') ADVANCE(316);
      if (lookahead == '`') ADVANCE(470);
      if (lookahead != 0) ADVANCE(466);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(496);
      if (lookahead == ' ') ADVANCE(467);
      if (lookahead == '"') ADVANCE(469);
      if (lookahead == '\'') ADVANCE(467);
      if (lookahead == ')') ADVANCE(513);
      if (lookahead == '?') ADVANCE(318);
      if (lookahead == '`') ADVANCE(471);
      if (lookahead != 0) ADVANCE(467);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(496);
      if (lookahead == ' ') ADVANCE(468);
      if (lookahead == '"') ADVANCE(470);
      if (lookahead == '\'') ADVANCE(471);
      if (lookahead == ')') ADVANCE(514);
      if (lookahead == '?') ADVANCE(320);
      if (lookahead == '`') ADVANCE(468);
      if (lookahead != 0) ADVANCE(468);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(496);
      if (lookahead == ' ') ADVANCE(469);
      if (lookahead == '"') ADVANCE(469);
      if (lookahead == '\'') ADVANCE(469);
      if (lookahead == ')') ADVANCE(515);
      if (lookahead == '?') ADVANCE(322);
      if (lookahead == '`') ADVANCE(472);
      if (lookahead != 0) ADVANCE(469);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(496);
      if (lookahead == ' ') ADVANCE(470);
      if (lookahead == '"') ADVANCE(470);
      if (lookahead == '\'') ADVANCE(472);
      if (lookahead == ')') ADVANCE(516);
      if (lookahead == '?') ADVANCE(324);
      if (lookahead == '`') ADVANCE(470);
      if (lookahead != 0) ADVANCE(470);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(496);
      if (lookahead == ' ') ADVANCE(471);
      if (lookahead == '"') ADVANCE(472);
      if (lookahead == '\'') ADVANCE(471);
      if (lookahead == ')') ADVANCE(517);
      if (lookahead == '?') ADVANCE(326);
      if (lookahead == '`') ADVANCE(471);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(496);
      if (lookahead == ' ') ADVANCE(472);
      if (lookahead == '"') ADVANCE(472);
      if (lookahead == '\'') ADVANCE(472);
      if (lookahead == ')') ADVANCE(518);
      if (lookahead == '?') ADVANCE(328);
      if (lookahead == '`') ADVANCE(472);
      if (lookahead != 0) ADVANCE(472);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(89);
      if (lookahead == '(') ADVANCE(479);
      if (lookahead == '[') ADVANCE(499);
      if (lookahead == ']') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(473);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(89);
      if (lookahead == ']') ADVANCE(507);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(474);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == '(') ADVANCE(479);
      if (lookahead == ',') ADVANCE(475);
      if (lookahead == '}') ADVANCE(475);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(475);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == ',') ADVANCE(476);
      if (lookahead == '}') ADVANCE(476);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(476);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(69);
      if (lookahead == ')') ADVANCE(541);
      if (lookahead == '`') ADVANCE(479);
      if (lookahead != 0) ADVANCE(477);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == '(') ADVANCE(479);
      if (lookahead == ')') ADVANCE(508);
      if (lookahead != 0) ADVANCE(478);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == ')') ADVANCE(508);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(480);
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '?') ADVANCE(507);
      if (lookahead == '`') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(480);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(480);
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '\'') ADVANCE(331);
      if (lookahead == '(') ADVANCE(484);
      if (lookahead == '?') ADVANCE(499);
      if (lookahead == '`') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(481);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(480);
      if (lookahead == '(') ADVANCE(484);
      if (lookahead == '?') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(481);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(480);
      if (lookahead == '?') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(480);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(484);
      if (lookahead == '"') ADVANCE(315);
      if (lookahead == '\'') ADVANCE(317);
      if (lookahead == ')') ADVANCE(508);
      if (lookahead == '?') ADVANCE(479);
      if (lookahead == '`') ADVANCE(319);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(484);
      if (lookahead == '"') ADVANCE(452);
      if (lookahead == '\'') ADVANCE(453);
      if (lookahead == '(') ADVANCE(484);
      if (lookahead == ')') ADVANCE(508);
      if (lookahead == '?') ADVANCE(478);
      if (lookahead == '`') ADVANCE(454);
      if (lookahead != 0) ADVANCE(485);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(484);
      if (lookahead == ')') ADVANCE(508);
      if (lookahead == '?') ADVANCE(479);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(487);
      if (lookahead == '"') ADVANCE(346);
      if (lookahead == '\'') ADVANCE(347);
      if (lookahead == '?') ADVANCE(474);
      if (lookahead == ']') ADVANCE(480);
      if (lookahead == '`') ADVANCE(348);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(487);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(487);
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '\'') ADVANCE(354);
      if (lookahead == '(') ADVANCE(484);
      if (lookahead == '?') ADVANCE(473);
      if (lookahead == '[') ADVANCE(481);
      if (lookahead == ']') ADVANCE(481);
      if (lookahead == '`') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(488);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(489);
      if (lookahead == '"') ADVANCE(360);
      if (lookahead == '\'') ADVANCE(361);
      if (lookahead == ',') ADVANCE(489);
      if (lookahead == '?') ADVANCE(476);
      if (lookahead == '`') ADVANCE(362);
      if (lookahead == '}') ADVANCE(489);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(489);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(489);
      if (lookahead == '"') ADVANCE(367);
      if (lookahead == '\'') ADVANCE(368);
      if (lookahead == '(') ADVANCE(484);
      if (lookahead == ',') ADVANCE(490);
      if (lookahead == '?') ADVANCE(475);
      if (lookahead == '`') ADVANCE(369);
      if (lookahead == '}') ADVANCE(490);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(490);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(492);
      if (lookahead == '"') ADVANCE(343);
      if (lookahead == '\'') ADVANCE(344);
      if (lookahead == '(') ADVANCE(493);
      if (lookahead == ')') ADVANCE(91);
      if (lookahead == '?') ADVANCE(500);
      if (lookahead == '`') ADVANCE(333);
      if (lookahead != 0) ADVANCE(491);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(492);
      if (lookahead == '"') ADVANCE(439);
      if (lookahead == '\'') ADVANCE(440);
      if (lookahead == ')') ADVANCE(91);
      if (lookahead == '?') ADVANCE(501);
      if (lookahead == '`') ADVANCE(305);
      if (lookahead != 0) ADVANCE(492);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(493);
      if (lookahead == '"') ADVANCE(449);
      if (lookahead == '\'') ADVANCE(450);
      if (lookahead == ')') ADVANCE(541);
      if (lookahead == '?') ADVANCE(477);
      if (lookahead == '`') ADVANCE(319);
      if (lookahead != 0) ADVANCE(493);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(495);
      if (lookahead == '"') ADVANCE(442);
      if (lookahead == '\'') ADVANCE(443);
      if (lookahead == '(') ADVANCE(496);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '?') ADVANCE(482);
      if (lookahead == '`') ADVANCE(444);
      if (lookahead != 0) ADVANCE(494);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(495);
      if (lookahead == '"') ADVANCE(459);
      if (lookahead == '\'') ADVANCE(460);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '?') ADVANCE(483);
      if (lookahead == '`') ADVANCE(461);
      if (lookahead != 0) ADVANCE(495);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(496);
      if (lookahead == '"') ADVANCE(466);
      if (lookahead == '\'') ADVANCE(467);
      if (lookahead == ')') ADVANCE(540);
      if (lookahead == '?') ADVANCE(486);
      if (lookahead == '`') ADVANCE(468);
      if (lookahead != 0) ADVANCE(496);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '(') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(499);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '(') ADVANCE(477);
      if (lookahead == '`') ADVANCE(499);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(91);
      if (lookahead != 0) ADVANCE(500);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '`') ADVANCE(507);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(91);
      if (lookahead != 0) ADVANCE(501);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '`') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(507);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"') ADVANCE(267);
      if (lookahead == '`') ADVANCE(560);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(268);
      if (lookahead == '`') ADVANCE(561);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(269);
      if (lookahead == '`') ADVANCE(565);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(285);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == '`') ADVANCE(286);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(287);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(288);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(289);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(290);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(89);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == '[') ADVANCE(538);
      if (lookahead == ']') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(519);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ',') ADVANCE(520);
      if (lookahead == '}') ADVANCE(520);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(520);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(70);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(540);
      if (lookahead == '?') ADVANCE(526);
      if (lookahead != 0) ADVANCE(521);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(87);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '?') ADVANCE(527);
      if (lookahead == '[') ADVANCE(536);
      if (lookahead == ']') ADVANCE(536);
      if (lookahead != 0) ADVANCE(522);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == ',') ADVANCE(523);
      if (lookahead == '?') ADVANCE(528);
      if (lookahead == '}') ADVANCE(523);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(536);
      if (lookahead != 0) ADVANCE(523);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(508);
      if (lookahead != 0) ADVANCE(524);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(480);
      if (lookahead == '(') ADVANCE(484);
      if (lookahead == '?') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(481);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(484);
      if (lookahead == '(') ADVANCE(484);
      if (lookahead == ')') ADVANCE(508);
      if (lookahead == '?') ADVANCE(524);
      if (lookahead != 0) ADVANCE(485);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(487);
      if (lookahead == '(') ADVANCE(484);
      if (lookahead == '?') ADVANCE(519);
      if (lookahead == '[') ADVANCE(481);
      if (lookahead == ']') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(488);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(489);
      if (lookahead == '(') ADVANCE(484);
      if (lookahead == ',') ADVANCE(490);
      if (lookahead == '?') ADVANCE(520);
      if (lookahead == '}') ADVANCE(490);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(490);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '"') ADVANCE(665);
      if (lookahead == '\'') ADVANCE(661);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == '?') ADVANCE(531);
      if (lookahead == '[') ADVANCE(522);
      if (lookahead == '`') ADVANCE(537);
      if (lookahead == '{') ADVANCE(523);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(529);
      if (lookahead != 0) ADVANCE(536);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(492);
      if (lookahead == '(') ADVANCE(493);
      if (lookahead == ')') ADVANCE(91);
      if (lookahead == '?') ADVANCE(534);
      if (lookahead == '`') ADVANCE(481);
      if (lookahead != 0) ADVANCE(491);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(495);
      if (lookahead == '(') ADVANCE(496);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '?') ADVANCE(538);
      if (lookahead != 0) ADVANCE(494);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == '`') ADVANCE(538);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(91);
      if (lookahead != 0) ADVANCE(534);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '?') ADVANCE(538);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(86);
      if (lookahead != 0) ADVANCE(536);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '?') ADVANCE(525);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(86);
      if (lookahead != 0) ADVANCE(536);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == '?') ADVANCE(530);
      if (lookahead == '`') ADVANCE(536);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(85);
      if (lookahead != 0) ADVANCE(537);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(538);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '?') ADVANCE(92);
      if (lookahead == '`') ADVANCE(564);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '?') ADVANCE(150);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '`') ADVANCE(556);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '`') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"') ADVANCE(277);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(547);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(62);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(278);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(548);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(66);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '`') ADVANCE(279);
      if (lookahead == '}') ADVANCE(549);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(93);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(280);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(550);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(137);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(281);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(551);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(138);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(282);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(552);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(139);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(283);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(553);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(141);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '}') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(75);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '?') ADVANCE(77);
      if (lookahead == '}') ADVANCE(555);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(86);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"') ADVANCE(294);
      if (lookahead == ')') ADVANCE(532);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(295);
      if (lookahead == ')') ADVANCE(533);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(297);
      if (lookahead == ')') ADVANCE(543);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '"') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == ')') ADVANCE(540);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == ')') ADVANCE(508);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '?') ADVANCE(150);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '?') ADVANCE(150);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '`') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__attribute_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '-') ADVANCE(579);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '-') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '-') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '.') ADVANCE(254);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '.') ADVANCE(256);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(630);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(644);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(634);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(645);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(628);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(638);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(629);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(641);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(605);
      if (lookahead == 'o') ADVANCE(589);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(618);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(635);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(231);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(607);
      if (lookahead == 'o') ADVANCE(591);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(620);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(636);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(224);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(585);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(226);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(587);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(602);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(596);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(624);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(625);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(597);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(640);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(643);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(603);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(632);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(637);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(239);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(612);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(241);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(615);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(589);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(591);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(639);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(642);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(594);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(600);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(610);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(611);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(592);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(220);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(593);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(222);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(598);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(631);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(633);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(599);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(646);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(582);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(245);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(647);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(583);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(247);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(613);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(614);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(626);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(627);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(648);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(650);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(652);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(650);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(651);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(653);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token1);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token2);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token3);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(658);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(659);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '?') ADVANCE(525);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(86);
      if (lookahead != 0) ADVANCE(536);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(663);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(663);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '?') ADVANCE(525);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(86);
      if (lookahead != 0) ADVANCE(536);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(667);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(667);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '{') ADVANCE(669);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '{') ADVANCE(669);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(672);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(674);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__delimited_javascript);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__delimited_javascript);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(677);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(681);
      if (lookahead == '#') ADVANCE(687);
      if (lookahead == '-') ADVANCE(691);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == '/') ADVANCE(680);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '=') ADVANCE(253);
      if (lookahead == 'c') ADVANCE(586);
      if (lookahead == 'd') ADVANCE(601);
      if (lookahead == 'e') ADVANCE(617);
      if (lookahead == 'i') ADVANCE(606);
      if (lookahead == 's') ADVANCE(590);
      if (lookahead == 'u') ADVANCE(621);
      if (lookahead == 'w') ADVANCE(608);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(681);
      if (lookahead == '#') ADVANCE(687);
      if (lookahead == '-') ADVANCE(691);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == '/') ADVANCE(680);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '=') ADVANCE(253);
      if (lookahead == 'c') ADVANCE(586);
      if (lookahead == 'd') ADVANCE(623);
      if (lookahead == 'e') ADVANCE(617);
      if (lookahead == 'i') ADVANCE(606);
      if (lookahead == 's') ADVANCE(590);
      if (lookahead == 'u') ADVANCE(621);
      if (lookahead == '|') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '/') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '=') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'f') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'i') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(686);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(653);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(688);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_unbuffered_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(692);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 153},
  [2] = {.lex_state = 154, .external_lex_state = 2},
  [3] = {.lex_state = 154, .external_lex_state = 2},
  [4] = {.lex_state = 154, .external_lex_state = 2},
  [5] = {.lex_state = 154, .external_lex_state = 2},
  [6] = {.lex_state = 154, .external_lex_state = 2},
  [7] = {.lex_state = 153, .external_lex_state = 2},
  [8] = {.lex_state = 153, .external_lex_state = 2},
  [9] = {.lex_state = 153, .external_lex_state = 2},
  [10] = {.lex_state = 153, .external_lex_state = 2},
  [11] = {.lex_state = 153, .external_lex_state = 3},
  [12] = {.lex_state = 153, .external_lex_state = 3},
  [13] = {.lex_state = 153, .external_lex_state = 3},
  [14] = {.lex_state = 153, .external_lex_state = 3},
  [15] = {.lex_state = 153, .external_lex_state = 3},
  [16] = {.lex_state = 153, .external_lex_state = 3},
  [17] = {.lex_state = 153, .external_lex_state = 3},
  [18] = {.lex_state = 153, .external_lex_state = 3},
  [19] = {.lex_state = 153, .external_lex_state = 3},
  [20] = {.lex_state = 153, .external_lex_state = 3},
  [21] = {.lex_state = 153, .external_lex_state = 2},
  [22] = {.lex_state = 153, .external_lex_state = 3},
  [23] = {.lex_state = 153, .external_lex_state = 2},
  [24] = {.lex_state = 153, .external_lex_state = 3},
  [25] = {.lex_state = 153, .external_lex_state = 3},
  [26] = {.lex_state = 153, .external_lex_state = 3},
  [27] = {.lex_state = 153, .external_lex_state = 3},
  [28] = {.lex_state = 153, .external_lex_state = 3},
  [29] = {.lex_state = 153, .external_lex_state = 3},
  [30] = {.lex_state = 153, .external_lex_state = 3},
  [31] = {.lex_state = 153, .external_lex_state = 3},
  [32] = {.lex_state = 153, .external_lex_state = 3},
  [33] = {.lex_state = 153, .external_lex_state = 3},
  [34] = {.lex_state = 153, .external_lex_state = 3},
  [35] = {.lex_state = 153, .external_lex_state = 3},
  [36] = {.lex_state = 153, .external_lex_state = 3},
  [37] = {.lex_state = 153, .external_lex_state = 3},
  [38] = {.lex_state = 153, .external_lex_state = 3},
  [39] = {.lex_state = 153, .external_lex_state = 3},
  [40] = {.lex_state = 153, .external_lex_state = 3},
  [41] = {.lex_state = 153, .external_lex_state = 3},
  [42] = {.lex_state = 153, .external_lex_state = 3},
  [43] = {.lex_state = 153, .external_lex_state = 3},
  [44] = {.lex_state = 153, .external_lex_state = 3},
  [45] = {.lex_state = 153, .external_lex_state = 3},
  [46] = {.lex_state = 153, .external_lex_state = 3},
  [47] = {.lex_state = 153, .external_lex_state = 3},
  [48] = {.lex_state = 153},
  [49] = {.lex_state = 153},
  [50] = {.lex_state = 156, .external_lex_state = 2},
  [51] = {.lex_state = 156, .external_lex_state = 2},
  [52] = {.lex_state = 154, .external_lex_state = 2},
  [53] = {.lex_state = 154, .external_lex_state = 2},
  [54] = {.lex_state = 217, .external_lex_state = 2},
  [55] = {.lex_state = 155, .external_lex_state = 2},
  [56] = {.lex_state = 156, .external_lex_state = 2},
  [57] = {.lex_state = 217, .external_lex_state = 2},
  [58] = {.lex_state = 154, .external_lex_state = 1},
  [59] = {.lex_state = 155, .external_lex_state = 2},
  [60] = {.lex_state = 154, .external_lex_state = 1},
  [61] = {.lex_state = 151, .external_lex_state = 2},
  [62] = {.lex_state = 154, .external_lex_state = 1},
  [63] = {.lex_state = 217, .external_lex_state = 2},
  [64] = {.lex_state = 155, .external_lex_state = 3},
  [65] = {.lex_state = 156, .external_lex_state = 2},
  [66] = {.lex_state = 154, .external_lex_state = 2},
  [67] = {.lex_state = 154, .external_lex_state = 1},
  [68] = {.lex_state = 154, .external_lex_state = 1},
  [69] = {.lex_state = 217, .external_lex_state = 2},
  [70] = {.lex_state = 154, .external_lex_state = 1},
  [71] = {.lex_state = 154, .external_lex_state = 2},
  [72] = {.lex_state = 154, .external_lex_state = 1},
  [73] = {.lex_state = 151, .external_lex_state = 2},
  [74] = {.lex_state = 154, .external_lex_state = 1},
  [75] = {.lex_state = 154, .external_lex_state = 1},
  [76] = {.lex_state = 154, .external_lex_state = 4},
  [77] = {.lex_state = 154, .external_lex_state = 1},
  [78] = {.lex_state = 151, .external_lex_state = 2},
  [79] = {.lex_state = 154, .external_lex_state = 4},
  [80] = {.lex_state = 154, .external_lex_state = 4},
  [81] = {.lex_state = 156, .external_lex_state = 2},
  [82] = {.lex_state = 155, .external_lex_state = 2},
  [83] = {.lex_state = 154, .external_lex_state = 1},
  [84] = {.lex_state = 151, .external_lex_state = 2},
  [85] = {.lex_state = 156, .external_lex_state = 2},
  [86] = {.lex_state = 154, .external_lex_state = 1},
  [87] = {.lex_state = 154, .external_lex_state = 4},
  [88] = {.lex_state = 154, .external_lex_state = 1},
  [89] = {.lex_state = 154, .external_lex_state = 1},
  [90] = {.lex_state = 154, .external_lex_state = 1},
  [91] = {.lex_state = 154, .external_lex_state = 1},
  [92] = {.lex_state = 217, .external_lex_state = 2},
  [93] = {.lex_state = 154, .external_lex_state = 1},
  [94] = {.lex_state = 154, .external_lex_state = 4},
  [95] = {.lex_state = 156, .external_lex_state = 2},
  [96] = {.lex_state = 154, .external_lex_state = 4},
  [97] = {.lex_state = 154, .external_lex_state = 1},
  [98] = {.lex_state = 151, .external_lex_state = 2},
  [99] = {.lex_state = 154, .external_lex_state = 4},
  [100] = {.lex_state = 154, .external_lex_state = 1},
  [101] = {.lex_state = 218, .external_lex_state = 2},
  [102] = {.lex_state = 154, .external_lex_state = 1},
  [103] = {.lex_state = 154, .external_lex_state = 4},
  [104] = {.lex_state = 154},
  [105] = {.lex_state = 154},
  [106] = {.lex_state = 154, .external_lex_state = 4},
  [107] = {.lex_state = 218, .external_lex_state = 2},
  [108] = {.lex_state = 155, .external_lex_state = 3},
  [109] = {.lex_state = 154, .external_lex_state = 4},
  [110] = {.lex_state = 153, .external_lex_state = 1},
  [111] = {.lex_state = 154, .external_lex_state = 1},
  [112] = {.lex_state = 153, .external_lex_state = 1},
  [113] = {.lex_state = 154, .external_lex_state = 2},
  [114] = {.lex_state = 154, .external_lex_state = 2},
  [115] = {.lex_state = 154, .external_lex_state = 1},
  [116] = {.lex_state = 153, .external_lex_state = 1},
  [117] = {.lex_state = 153, .external_lex_state = 1},
  [118] = {.lex_state = 153, .external_lex_state = 1},
  [119] = {.lex_state = 153, .external_lex_state = 1},
  [120] = {.lex_state = 154, .external_lex_state = 2},
  [121] = {.lex_state = 152, .external_lex_state = 2},
  [122] = {.lex_state = 152, .external_lex_state = 2},
  [123] = {.lex_state = 154, .external_lex_state = 2},
  [124] = {.lex_state = 154, .external_lex_state = 2},
  [125] = {.lex_state = 153, .external_lex_state = 1},
  [126] = {.lex_state = 153, .external_lex_state = 1},
  [127] = {.lex_state = 154, .external_lex_state = 2},
  [128] = {.lex_state = 154, .external_lex_state = 2},
  [129] = {.lex_state = 154, .external_lex_state = 2},
  [130] = {.lex_state = 154, .external_lex_state = 2},
  [131] = {.lex_state = 154, .external_lex_state = 2},
  [132] = {.lex_state = 154, .external_lex_state = 2},
  [133] = {.lex_state = 154, .external_lex_state = 2},
  [134] = {.lex_state = 154, .external_lex_state = 2},
  [135] = {.lex_state = 154, .external_lex_state = 2},
  [136] = {.lex_state = 154, .external_lex_state = 2},
  [137] = {.lex_state = 154, .external_lex_state = 2},
  [138] = {.lex_state = 218, .external_lex_state = 2},
  [139] = {.lex_state = 154, .external_lex_state = 2},
  [140] = {.lex_state = 154, .external_lex_state = 2},
  [141] = {.lex_state = 154, .external_lex_state = 2},
  [142] = {.lex_state = 218, .external_lex_state = 2},
  [143] = {.lex_state = 154, .external_lex_state = 2},
  [144] = {.lex_state = 151, .external_lex_state = 2},
  [145] = {.lex_state = 154, .external_lex_state = 2},
  [146] = {.lex_state = 156, .external_lex_state = 2},
  [147] = {.lex_state = 154, .external_lex_state = 2},
  [148] = {.lex_state = 154, .external_lex_state = 2},
  [149] = {.lex_state = 154, .external_lex_state = 2},
  [150] = {.lex_state = 155, .external_lex_state = 2},
  [151] = {.lex_state = 217, .external_lex_state = 2},
  [152] = {.lex_state = 154, .external_lex_state = 2},
  [153] = {.lex_state = 154, .external_lex_state = 2},
  [154] = {.lex_state = 154, .external_lex_state = 2},
  [155] = {.lex_state = 154, .external_lex_state = 2},
  [156] = {.lex_state = 156, .external_lex_state = 2},
  [157] = {.lex_state = 156, .external_lex_state = 2},
  [158] = {.lex_state = 154, .external_lex_state = 2},
  [159] = {.lex_state = 154, .external_lex_state = 2},
  [160] = {.lex_state = 154, .external_lex_state = 2},
  [161] = {.lex_state = 154, .external_lex_state = 2},
  [162] = {.lex_state = 154, .external_lex_state = 2},
  [163] = {.lex_state = 154, .external_lex_state = 2},
  [164] = {.lex_state = 154, .external_lex_state = 2},
  [165] = {.lex_state = 154, .external_lex_state = 2},
  [166] = {.lex_state = 154, .external_lex_state = 2},
  [167] = {.lex_state = 154, .external_lex_state = 2},
  [168] = {.lex_state = 153, .external_lex_state = 1},
  [169] = {.lex_state = 152, .external_lex_state = 5},
  [170] = {.lex_state = 153, .external_lex_state = 1},
  [171] = {.lex_state = 153, .external_lex_state = 1},
  [172] = {.lex_state = 155, .external_lex_state = 2},
  [173] = {.lex_state = 154, .external_lex_state = 5},
  [174] = {.lex_state = 154, .external_lex_state = 2},
  [175] = {.lex_state = 153, .external_lex_state = 1},
  [176] = {.lex_state = 154, .external_lex_state = 2},
  [177] = {.lex_state = 154, .external_lex_state = 5},
  [178] = {.lex_state = 218, .external_lex_state = 2},
  [179] = {.lex_state = 154, .external_lex_state = 5},
  [180] = {.lex_state = 153, .external_lex_state = 1},
  [181] = {.lex_state = 154, .external_lex_state = 2},
  [182] = {.lex_state = 154, .external_lex_state = 5},
  [183] = {.lex_state = 154, .external_lex_state = 2},
  [184] = {.lex_state = 154, .external_lex_state = 5},
  [185] = {.lex_state = 155, .external_lex_state = 2},
  [186] = {.lex_state = 153, .external_lex_state = 1},
  [187] = {.lex_state = 154, .external_lex_state = 5},
  [188] = {.lex_state = 154, .external_lex_state = 2},
  [189] = {.lex_state = 153, .external_lex_state = 1},
  [190] = {.lex_state = 218},
  [191] = {.lex_state = 152, .external_lex_state = 5},
  [192] = {.lex_state = 154, .external_lex_state = 2},
  [193] = {.lex_state = 154, .external_lex_state = 5},
  [194] = {.lex_state = 154, .external_lex_state = 5},
  [195] = {.lex_state = 154, .external_lex_state = 5},
  [196] = {.lex_state = 155, .external_lex_state = 2},
  [197] = {.lex_state = 153, .external_lex_state = 1},
  [198] = {.lex_state = 153, .external_lex_state = 1},
  [199] = {.lex_state = 154, .external_lex_state = 2},
  [200] = {.lex_state = 154, .external_lex_state = 2},
  [201] = {.lex_state = 154, .external_lex_state = 2},
  [202] = {.lex_state = 152, .external_lex_state = 2},
  [203] = {.lex_state = 154, .external_lex_state = 5},
  [204] = {.lex_state = 154, .external_lex_state = 2},
  [205] = {.lex_state = 154, .external_lex_state = 5},
  [206] = {.lex_state = 152, .external_lex_state = 2},
  [207] = {.lex_state = 154, .external_lex_state = 2},
  [208] = {.lex_state = 154, .external_lex_state = 5},
  [209] = {.lex_state = 154, .external_lex_state = 5},
  [210] = {.lex_state = 154, .external_lex_state = 5},
  [211] = {.lex_state = 154, .external_lex_state = 2},
  [212] = {.lex_state = 154, .external_lex_state = 2},
  [213] = {.lex_state = 154, .external_lex_state = 2},
  [214] = {.lex_state = 154, .external_lex_state = 2},
  [215] = {.lex_state = 154, .external_lex_state = 2},
  [216] = {.lex_state = 154, .external_lex_state = 2},
  [217] = {.lex_state = 154, .external_lex_state = 2},
  [218] = {.lex_state = 153, .external_lex_state = 1},
  [219] = {.lex_state = 154, .external_lex_state = 5},
  [220] = {.lex_state = 154, .external_lex_state = 5},
  [221] = {.lex_state = 154, .external_lex_state = 2},
  [222] = {.lex_state = 154, .external_lex_state = 2},
  [223] = {.lex_state = 218},
  [224] = {.lex_state = 154, .external_lex_state = 2},
  [225] = {.lex_state = 154, .external_lex_state = 2},
  [226] = {.lex_state = 154, .external_lex_state = 2},
  [227] = {.lex_state = 154, .external_lex_state = 2},
  [228] = {.lex_state = 154, .external_lex_state = 2},
  [229] = {.lex_state = 154, .external_lex_state = 2},
  [230] = {.lex_state = 154, .external_lex_state = 2},
  [231] = {.lex_state = 154, .external_lex_state = 2},
  [232] = {.lex_state = 154, .external_lex_state = 2},
  [233] = {.lex_state = 154, .external_lex_state = 2},
  [234] = {.lex_state = 152, .external_lex_state = 2},
  [235] = {.lex_state = 153, .external_lex_state = 2},
  [236] = {.lex_state = 153, .external_lex_state = 6},
  [237] = {.lex_state = 153, .external_lex_state = 2},
  [238] = {.lex_state = 155, .external_lex_state = 3},
  [239] = {.lex_state = 153, .external_lex_state = 2},
  [240] = {.lex_state = 153, .external_lex_state = 2},
  [241] = {.lex_state = 153, .external_lex_state = 2},
  [242] = {.lex_state = 153, .external_lex_state = 2},
  [243] = {.lex_state = 153, .external_lex_state = 2},
  [244] = {.lex_state = 155, .external_lex_state = 3},
  [245] = {.lex_state = 153, .external_lex_state = 2},
  [246] = {.lex_state = 153, .external_lex_state = 2},
  [247] = {.lex_state = 153, .external_lex_state = 2},
  [248] = {.lex_state = 153, .external_lex_state = 2},
  [249] = {.lex_state = 153, .external_lex_state = 6},
  [250] = {.lex_state = 153, .external_lex_state = 2},
  [251] = {.lex_state = 153, .external_lex_state = 2},
  [252] = {.lex_state = 155, .external_lex_state = 3},
  [253] = {.lex_state = 153, .external_lex_state = 2},
  [254] = {.lex_state = 153, .external_lex_state = 2},
  [255] = {.lex_state = 152, .external_lex_state = 2},
  [256] = {.lex_state = 153, .external_lex_state = 2},
  [257] = {.lex_state = 153, .external_lex_state = 2},
  [258] = {.lex_state = 153, .external_lex_state = 6},
  [259] = {.lex_state = 153, .external_lex_state = 2},
  [260] = {.lex_state = 153, .external_lex_state = 2},
  [261] = {.lex_state = 153, .external_lex_state = 2},
  [262] = {.lex_state = 153, .external_lex_state = 2},
  [263] = {.lex_state = 153, .external_lex_state = 2},
  [264] = {.lex_state = 153, .external_lex_state = 2},
  [265] = {.lex_state = 153, .external_lex_state = 2},
  [266] = {.lex_state = 153, .external_lex_state = 2},
  [267] = {.lex_state = 153, .external_lex_state = 2},
  [268] = {.lex_state = 153, .external_lex_state = 2},
  [269] = {.lex_state = 153, .external_lex_state = 2},
  [270] = {.lex_state = 153, .external_lex_state = 2},
  [271] = {.lex_state = 153, .external_lex_state = 4},
  [272] = {.lex_state = 155, .external_lex_state = 2},
  [273] = {.lex_state = 153, .external_lex_state = 6},
  [274] = {.lex_state = 155, .external_lex_state = 2},
  [275] = {.lex_state = 153, .external_lex_state = 2},
  [276] = {.lex_state = 218, .external_lex_state = 2},
  [277] = {.lex_state = 153, .external_lex_state = 1},
  [278] = {.lex_state = 153, .external_lex_state = 6},
  [279] = {.lex_state = 155, .external_lex_state = 2},
  [280] = {.lex_state = 153, .external_lex_state = 6},
  [281] = {.lex_state = 153, .external_lex_state = 6},
  [282] = {.lex_state = 153, .external_lex_state = 4},
  [283] = {.lex_state = 153, .external_lex_state = 2},
  [284] = {.lex_state = 152, .external_lex_state = 5},
  [285] = {.lex_state = 153, .external_lex_state = 6},
  [286] = {.lex_state = 154},
  [287] = {.lex_state = 153, .external_lex_state = 1},
  [288] = {.lex_state = 153, .external_lex_state = 2},
  [289] = {.lex_state = 153, .external_lex_state = 2},
  [290] = {.lex_state = 153, .external_lex_state = 5},
  [291] = {.lex_state = 153, .external_lex_state = 2},
  [292] = {.lex_state = 153, .external_lex_state = 2},
  [293] = {.lex_state = 153, .external_lex_state = 2},
  [294] = {.lex_state = 153, .external_lex_state = 2},
  [295] = {.lex_state = 153, .external_lex_state = 2},
  [296] = {.lex_state = 153, .external_lex_state = 2},
  [297] = {.lex_state = 153, .external_lex_state = 2},
  [298] = {.lex_state = 153, .external_lex_state = 2},
  [299] = {.lex_state = 153, .external_lex_state = 2},
  [300] = {.lex_state = 153, .external_lex_state = 2},
  [301] = {.lex_state = 153, .external_lex_state = 2},
  [302] = {.lex_state = 153, .external_lex_state = 2},
  [303] = {.lex_state = 153, .external_lex_state = 2},
  [304] = {.lex_state = 153, .external_lex_state = 2},
  [305] = {.lex_state = 153, .external_lex_state = 2},
  [306] = {.lex_state = 153, .external_lex_state = 2},
  [307] = {.lex_state = 153, .external_lex_state = 5},
  [308] = {.lex_state = 153, .external_lex_state = 5},
  [309] = {.lex_state = 153, .external_lex_state = 2},
  [310] = {.lex_state = 153, .external_lex_state = 2},
  [311] = {.lex_state = 153, .external_lex_state = 2},
  [312] = {.lex_state = 153, .external_lex_state = 2},
  [313] = {.lex_state = 153, .external_lex_state = 2},
  [314] = {.lex_state = 153, .external_lex_state = 5},
  [315] = {.lex_state = 218},
  [316] = {.lex_state = 153, .external_lex_state = 2},
  [317] = {.lex_state = 153, .external_lex_state = 2},
  [318] = {.lex_state = 153, .external_lex_state = 2},
  [319] = {.lex_state = 153, .external_lex_state = 2},
  [320] = {.lex_state = 153, .external_lex_state = 2},
  [321] = {.lex_state = 153, .external_lex_state = 6},
  [322] = {.lex_state = 153, .external_lex_state = 2},
  [323] = {.lex_state = 153, .external_lex_state = 2},
  [324] = {.lex_state = 153, .external_lex_state = 2},
  [325] = {.lex_state = 153},
  [326] = {.lex_state = 153},
  [327] = {.lex_state = 153},
  [328] = {.lex_state = 153},
  [329] = {.lex_state = 153},
  [330] = {.lex_state = 153},
  [331] = {.lex_state = 153},
  [332] = {.lex_state = 153},
  [333] = {.lex_state = 153},
  [334] = {.lex_state = 153},
  [335] = {.lex_state = 153},
  [336] = {.lex_state = 153},
  [337] = {.lex_state = 153},
  [338] = {.lex_state = 153},
  [339] = {.lex_state = 153},
  [340] = {.lex_state = 153},
  [341] = {.lex_state = 153},
  [342] = {.lex_state = 153},
  [343] = {.lex_state = 153},
  [344] = {.lex_state = 153},
  [345] = {.lex_state = 153},
  [346] = {.lex_state = 153},
  [347] = {.lex_state = 153},
  [348] = {.lex_state = 153},
  [349] = {.lex_state = 153},
  [350] = {.lex_state = 153},
  [351] = {.lex_state = 153},
  [352] = {.lex_state = 153},
  [353] = {.lex_state = 153},
  [354] = {.lex_state = 153},
  [355] = {.lex_state = 54, .external_lex_state = 3},
  [356] = {.lex_state = 54, .external_lex_state = 3},
  [357] = {.lex_state = 54, .external_lex_state = 3},
  [358] = {.lex_state = 54, .external_lex_state = 3},
  [359] = {.lex_state = 54, .external_lex_state = 3},
  [360] = {.lex_state = 54, .external_lex_state = 3},
  [361] = {.lex_state = 54, .external_lex_state = 3},
  [362] = {.lex_state = 54, .external_lex_state = 3},
  [363] = {.lex_state = 54, .external_lex_state = 3},
  [364] = {.lex_state = 54, .external_lex_state = 3},
  [365] = {.lex_state = 54, .external_lex_state = 3},
  [366] = {.lex_state = 54, .external_lex_state = 3},
  [367] = {.lex_state = 54, .external_lex_state = 3},
  [368] = {.lex_state = 54, .external_lex_state = 3},
  [369] = {.lex_state = 55},
  [370] = {.lex_state = 55},
  [371] = {.lex_state = 54, .external_lex_state = 3},
  [372] = {.lex_state = 64},
  [373] = {.lex_state = 64},
  [374] = {.lex_state = 55, .external_lex_state = 3},
  [375] = {.lex_state = 55, .external_lex_state = 3},
  [376] = {.lex_state = 64},
  [377] = {.lex_state = 64},
  [378] = {.lex_state = 55, .external_lex_state = 3},
  [379] = {.lex_state = 55, .external_lex_state = 3},
  [380] = {.lex_state = 55, .external_lex_state = 3},
  [381] = {.lex_state = 64},
  [382] = {.lex_state = 55, .external_lex_state = 3},
  [383] = {.lex_state = 64},
  [384] = {.lex_state = 64},
  [385] = {.lex_state = 55, .external_lex_state = 3},
  [386] = {.lex_state = 55, .external_lex_state = 3},
  [387] = {.lex_state = 64},
  [388] = {.lex_state = 55, .external_lex_state = 3},
  [389] = {.lex_state = 55, .external_lex_state = 3},
  [390] = {.lex_state = 55, .external_lex_state = 3},
  [391] = {.lex_state = 64},
  [392] = {.lex_state = 64},
  [393] = {.lex_state = 55, .external_lex_state = 3},
  [394] = {.lex_state = 64},
  [395] = {.lex_state = 64},
  [396] = {.lex_state = 55, .external_lex_state = 3},
  [397] = {.lex_state = 64},
  [398] = {.lex_state = 55, .external_lex_state = 3},
  [399] = {.lex_state = 55, .external_lex_state = 3},
  [400] = {.lex_state = 55, .external_lex_state = 3},
  [401] = {.lex_state = 55, .external_lex_state = 3},
  [402] = {.lex_state = 55, .external_lex_state = 3},
  [403] = {.lex_state = 55, .external_lex_state = 3},
  [404] = {.lex_state = 55, .external_lex_state = 3},
  [405] = {.lex_state = 55, .external_lex_state = 3},
  [406] = {.lex_state = 55, .external_lex_state = 3},
  [407] = {.lex_state = 55, .external_lex_state = 3},
  [408] = {.lex_state = 55, .external_lex_state = 3},
  [409] = {.lex_state = 55, .external_lex_state = 3},
  [410] = {.lex_state = 55, .external_lex_state = 3},
  [411] = {.lex_state = 55, .external_lex_state = 3},
  [412] = {.lex_state = 55, .external_lex_state = 3},
  [413] = {.lex_state = 55, .external_lex_state = 3},
  [414] = {.lex_state = 55, .external_lex_state = 3},
  [415] = {.lex_state = 55, .external_lex_state = 3},
  [416] = {.lex_state = 55, .external_lex_state = 3},
  [417] = {.lex_state = 55, .external_lex_state = 3},
  [418] = {.lex_state = 55, .external_lex_state = 3},
  [419] = {.lex_state = 55, .external_lex_state = 3},
  [420] = {.lex_state = 11, .external_lex_state = 5},
  [421] = {.lex_state = 11, .external_lex_state = 5},
  [422] = {.lex_state = 11, .external_lex_state = 5},
  [423] = {.lex_state = 11, .external_lex_state = 5},
  [424] = {.lex_state = 11, .external_lex_state = 5},
  [425] = {.lex_state = 11, .external_lex_state = 5},
  [426] = {.lex_state = 11, .external_lex_state = 5},
  [427] = {.lex_state = 11, .external_lex_state = 5},
  [428] = {.lex_state = 11, .external_lex_state = 5},
  [429] = {.lex_state = 11, .external_lex_state = 5},
  [430] = {.lex_state = 11, .external_lex_state = 5},
  [431] = {.lex_state = 11, .external_lex_state = 5},
  [432] = {.lex_state = 11, .external_lex_state = 5},
  [433] = {.lex_state = 11, .external_lex_state = 5},
  [434] = {.lex_state = 60},
  [435] = {.lex_state = 11, .external_lex_state = 5},
  [436] = {.lex_state = 11, .external_lex_state = 3},
  [437] = {.lex_state = 63, .external_lex_state = 2},
  [438] = {.lex_state = 11, .external_lex_state = 3},
  [439] = {.lex_state = 63, .external_lex_state = 2},
  [440] = {.lex_state = 55, .external_lex_state = 3},
  [441] = {.lex_state = 11, .external_lex_state = 3},
  [442] = {.lex_state = 63, .external_lex_state = 1},
  [443] = {.lex_state = 11, .external_lex_state = 3},
  [444] = {.lex_state = 63, .external_lex_state = 1},
  [445] = {.lex_state = 55, .external_lex_state = 3},
  [446] = {.lex_state = 11},
  [447] = {.lex_state = 11, .external_lex_state = 3},
  [448] = {.lex_state = 11, .external_lex_state = 3},
  [449] = {.lex_state = 11, .external_lex_state = 3},
  [450] = {.lex_state = 63, .external_lex_state = 2},
  [451] = {.lex_state = 63, .external_lex_state = 1},
  [452] = {.lex_state = 11, .external_lex_state = 3},
  [453] = {.lex_state = 11},
  [454] = {.lex_state = 11, .external_lex_state = 3},
  [455] = {.lex_state = 11, .external_lex_state = 3},
  [456] = {.lex_state = 11, .external_lex_state = 3},
  [457] = {.lex_state = 11, .external_lex_state = 3},
  [458] = {.lex_state = 11, .external_lex_state = 3},
  [459] = {.lex_state = 11},
  [460] = {.lex_state = 63, .external_lex_state = 1},
  [461] = {.lex_state = 63, .external_lex_state = 2},
  [462] = {.lex_state = 11, .external_lex_state = 3},
  [463] = {.lex_state = 11, .external_lex_state = 3},
  [464] = {.lex_state = 11, .external_lex_state = 3},
  [465] = {.lex_state = 63, .external_lex_state = 2},
  [466] = {.lex_state = 11, .external_lex_state = 3},
  [467] = {.lex_state = 63, .external_lex_state = 1},
  [468] = {.lex_state = 63, .external_lex_state = 2},
  [469] = {.lex_state = 11, .external_lex_state = 3},
  [470] = {.lex_state = 11, .external_lex_state = 3},
  [471] = {.lex_state = 11},
  [472] = {.lex_state = 11, .external_lex_state = 3},
  [473] = {.lex_state = 11, .external_lex_state = 3},
  [474] = {.lex_state = 11},
  [475] = {.lex_state = 11, .external_lex_state = 3},
  [476] = {.lex_state = 11, .external_lex_state = 3},
  [477] = {.lex_state = 11, .external_lex_state = 3},
  [478] = {.lex_state = 11, .external_lex_state = 3},
  [479] = {.lex_state = 11},
  [480] = {.lex_state = 11},
  [481] = {.lex_state = 11},
  [482] = {.lex_state = 11, .external_lex_state = 3},
  [483] = {.lex_state = 55, .external_lex_state = 3},
  [484] = {.lex_state = 11},
  [485] = {.lex_state = 11},
  [486] = {.lex_state = 11, .external_lex_state = 3},
  [487] = {.lex_state = 11, .external_lex_state = 3},
  [488] = {.lex_state = 11, .external_lex_state = 3},
  [489] = {.lex_state = 63, .external_lex_state = 1},
  [490] = {.lex_state = 11, .external_lex_state = 3},
  [491] = {.lex_state = 63, .external_lex_state = 1},
  [492] = {.lex_state = 11},
  [493] = {.lex_state = 11, .external_lex_state = 3},
  [494] = {.lex_state = 11, .external_lex_state = 3},
  [495] = {.lex_state = 11, .external_lex_state = 3},
  [496] = {.lex_state = 11, .external_lex_state = 3},
  [497] = {.lex_state = 11},
  [498] = {.lex_state = 11, .external_lex_state = 3},
  [499] = {.lex_state = 63, .external_lex_state = 2},
  [500] = {.lex_state = 11, .external_lex_state = 3},
  [501] = {.lex_state = 11, .external_lex_state = 3},
  [502] = {.lex_state = 11, .external_lex_state = 3},
  [503] = {.lex_state = 11, .external_lex_state = 3},
  [504] = {.lex_state = 11},
  [505] = {.lex_state = 63, .external_lex_state = 1},
  [506] = {.lex_state = 11},
  [507] = {.lex_state = 11, .external_lex_state = 3},
  [508] = {.lex_state = 63, .external_lex_state = 2},
  [509] = {.lex_state = 63, .external_lex_state = 2},
  [510] = {.lex_state = 11, .external_lex_state = 3},
  [511] = {.lex_state = 63, .external_lex_state = 3},
  [512] = {.lex_state = 11},
  [513] = {.lex_state = 11},
  [514] = {.lex_state = 63, .external_lex_state = 3},
  [515] = {.lex_state = 11},
  [516] = {.lex_state = 11},
  [517] = {.lex_state = 11},
  [518] = {.lex_state = 11},
  [519] = {.lex_state = 11},
  [520] = {.lex_state = 11},
  [521] = {.lex_state = 63, .external_lex_state = 3},
  [522] = {.lex_state = 11},
  [523] = {.lex_state = 63, .external_lex_state = 3},
  [524] = {.lex_state = 11},
  [525] = {.lex_state = 11},
  [526] = {.lex_state = 11},
  [527] = {.lex_state = 11},
  [528] = {.lex_state = 63, .external_lex_state = 3},
  [529] = {.lex_state = 11},
  [530] = {.lex_state = 11},
  [531] = {.lex_state = 63, .external_lex_state = 1},
  [532] = {.lex_state = 11},
  [533] = {.lex_state = 11},
  [534] = {.lex_state = 55},
  [535] = {.lex_state = 11},
  [536] = {.lex_state = 11},
  [537] = {.lex_state = 63, .external_lex_state = 3},
  [538] = {.lex_state = 11},
  [539] = {.lex_state = 63, .external_lex_state = 3},
  [540] = {.lex_state = 11},
  [541] = {.lex_state = 11},
  [542] = {.lex_state = 11},
  [543] = {.lex_state = 11},
  [544] = {.lex_state = 11},
  [545] = {.lex_state = 63, .external_lex_state = 3},
  [546] = {.lex_state = 11},
  [547] = {.lex_state = 11},
  [548] = {.lex_state = 11},
  [549] = {.lex_state = 63, .external_lex_state = 2},
  [550] = {.lex_state = 63, .external_lex_state = 2},
  [551] = {.lex_state = 63, .external_lex_state = 2},
  [552] = {.lex_state = 63, .external_lex_state = 2},
  [553] = {.lex_state = 63},
  [554] = {.lex_state = 11, .external_lex_state = 3},
  [555] = {.lex_state = 63},
  [556] = {.lex_state = 63, .external_lex_state = 2},
  [557] = {.lex_state = 63, .external_lex_state = 2},
  [558] = {.lex_state = 63},
  [559] = {.lex_state = 63, .external_lex_state = 2},
  [560] = {.lex_state = 63, .external_lex_state = 2},
  [561] = {.lex_state = 55},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 64},
  [564] = {.lex_state = 63, .external_lex_state = 2},
  [565] = {.lex_state = 63, .external_lex_state = 2},
  [566] = {.lex_state = 63, .external_lex_state = 2},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 11, .external_lex_state = 3},
  [569] = {.lex_state = 63, .external_lex_state = 2},
  [570] = {.lex_state = 11, .external_lex_state = 3},
  [571] = {.lex_state = 63, .external_lex_state = 2},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 63},
  [574] = {.lex_state = 11, .external_lex_state = 3},
  [575] = {.lex_state = 50, .external_lex_state = 2},
  [576] = {.lex_state = 63},
  [577] = {.lex_state = 213, .external_lex_state = 5},
  [578] = {.lex_state = 63},
  [579] = {.lex_state = 50, .external_lex_state = 2},
  [580] = {.lex_state = 63},
  [581] = {.lex_state = 63},
  [582] = {.lex_state = 53, .external_lex_state = 3},
  [583] = {.lex_state = 63},
  [584] = {.lex_state = 213, .external_lex_state = 5},
  [585] = {.lex_state = 11, .external_lex_state = 5},
  [586] = {.lex_state = 53, .external_lex_state = 3},
  [587] = {.lex_state = 63},
  [588] = {.lex_state = 50, .external_lex_state = 2},
  [589] = {.lex_state = 213, .external_lex_state = 5},
  [590] = {.lex_state = 63},
  [591] = {.lex_state = 11, .external_lex_state = 3},
  [592] = {.lex_state = 63},
  [593] = {.lex_state = 63},
  [594] = {.lex_state = 63},
  [595] = {.lex_state = 63},
  [596] = {.lex_state = 63},
  [597] = {.lex_state = 53, .external_lex_state = 3},
  [598] = {.lex_state = 63},
  [599] = {.lex_state = 63},
  [600] = {.lex_state = 213, .external_lex_state = 5},
  [601] = {.lex_state = 63},
  [602] = {.lex_state = 213, .external_lex_state = 5},
  [603] = {.lex_state = 50, .external_lex_state = 2},
  [604] = {.lex_state = 50, .external_lex_state = 2},
  [605] = {.lex_state = 63},
  [606] = {.lex_state = 63},
  [607] = {.lex_state = 63},
  [608] = {.lex_state = 53, .external_lex_state = 3},
  [609] = {.lex_state = 53, .external_lex_state = 3},
  [610] = {.lex_state = 63},
  [611] = {.lex_state = 63},
  [612] = {.lex_state = 63},
  [613] = {.lex_state = 11, .external_lex_state = 3},
  [614] = {.lex_state = 63},
  [615] = {.lex_state = 63},
  [616] = {.lex_state = 63},
  [617] = {.lex_state = 54},
  [618] = {.lex_state = 50, .external_lex_state = 2},
  [619] = {.lex_state = 63},
  [620] = {.lex_state = 213, .external_lex_state = 5},
  [621] = {.lex_state = 63},
  [622] = {.lex_state = 54},
  [623] = {.lex_state = 63},
  [624] = {.lex_state = 54},
  [625] = {.lex_state = 54},
  [626] = {.lex_state = 53},
  [627] = {.lex_state = 213, .external_lex_state = 5},
  [628] = {.lex_state = 54},
  [629] = {.lex_state = 54},
  [630] = {.lex_state = 54},
  [631] = {.lex_state = 213},
  [632] = {.lex_state = 54},
  [633] = {.lex_state = 54},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 213, .external_lex_state = 5},
  [636] = {.lex_state = 53},
  [637] = {.lex_state = 53},
  [638] = {.lex_state = 53},
  [639] = {.lex_state = 213},
  [640] = {.lex_state = 53},
  [641] = {.lex_state = 54},
  [642] = {.lex_state = 53},
  [643] = {.lex_state = 213, .external_lex_state = 5},
  [644] = {.lex_state = 213, .external_lex_state = 3},
  [645] = {.lex_state = 54},
  [646] = {.lex_state = 213},
  [647] = {.lex_state = 213},
  [648] = {.lex_state = 54},
  [649] = {.lex_state = 50, .external_lex_state = 3},
  [650] = {.lex_state = 213},
  [651] = {.lex_state = 54},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 213},
  [654] = {.lex_state = 50, .external_lex_state = 3},
  [655] = {.lex_state = 50, .external_lex_state = 3},
  [656] = {.lex_state = 54},
  [657] = {.lex_state = 54},
  [658] = {.lex_state = 0, .external_lex_state = 3},
  [659] = {.lex_state = 50, .external_lex_state = 2},
  [660] = {.lex_state = 213, .external_lex_state = 5},
  [661] = {.lex_state = 213, .external_lex_state = 5},
  [662] = {.lex_state = 53},
  [663] = {.lex_state = 53},
  [664] = {.lex_state = 213},
  [665] = {.lex_state = 213, .external_lex_state = 5},
  [666] = {.lex_state = 213, .external_lex_state = 3},
  [667] = {.lex_state = 50, .external_lex_state = 3},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 53},
  [670] = {.lex_state = 213, .external_lex_state = 5},
  [671] = {.lex_state = 0},
  [672] = {.lex_state = 213},
  [673] = {.lex_state = 53},
  [674] = {.lex_state = 54},
  [675] = {.lex_state = 54},
  [676] = {.lex_state = 54},
  [677] = {.lex_state = 53},
  [678] = {.lex_state = 53},
  [679] = {.lex_state = 54},
  [680] = {.lex_state = 0, .external_lex_state = 3},
  [681] = {.lex_state = 213, .external_lex_state = 5},
  [682] = {.lex_state = 54},
  [683] = {.lex_state = 53},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 54},
  [686] = {.lex_state = 53},
  [687] = {.lex_state = 53},
  [688] = {.lex_state = 50, .external_lex_state = 3},
  [689] = {.lex_state = 54},
  [690] = {.lex_state = 54},
  [691] = {.lex_state = 54},
  [692] = {.lex_state = 213},
  [693] = {.lex_state = 53},
  [694] = {.lex_state = 213},
  [695] = {.lex_state = 54},
  [696] = {.lex_state = 213, .external_lex_state = 5},
  [697] = {.lex_state = 213, .external_lex_state = 5},
  [698] = {.lex_state = 54},
  [699] = {.lex_state = 0, .external_lex_state = 3},
  [700] = {.lex_state = 50, .external_lex_state = 2},
  [701] = {.lex_state = 54},
  [702] = {.lex_state = 54},
  [703] = {.lex_state = 213, .external_lex_state = 3},
  [704] = {.lex_state = 53},
  [705] = {.lex_state = 53},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 213, .external_lex_state = 3},
  [708] = {.lex_state = 53},
  [709] = {.lex_state = 213, .external_lex_state = 3},
  [710] = {.lex_state = 213, .external_lex_state = 5},
  [711] = {.lex_state = 0, .external_lex_state = 6},
  [712] = {.lex_state = 53},
  [713] = {.lex_state = 0, .external_lex_state = 6},
  [714] = {.lex_state = 0, .external_lex_state = 6},
  [715] = {.lex_state = 0, .external_lex_state = 6},
  [716] = {.lex_state = 0, .external_lex_state = 6},
  [717] = {.lex_state = 53},
  [718] = {.lex_state = 53},
  [719] = {.lex_state = 53},
  [720] = {.lex_state = 53},
  [721] = {.lex_state = 213, .external_lex_state = 5},
  [722] = {.lex_state = 213, .external_lex_state = 5},
  [723] = {.lex_state = 65},
  [724] = {.lex_state = 61},
  [725] = {.lex_state = 65},
  [726] = {.lex_state = 61},
  [727] = {.lex_state = 54},
  [728] = {.lex_state = 0, .external_lex_state = 6},
  [729] = {.lex_state = 0, .external_lex_state = 3},
  [730] = {.lex_state = 0, .external_lex_state = 6},
  [731] = {.lex_state = 0, .external_lex_state = 6},
  [732] = {.lex_state = 0, .external_lex_state = 6},
  [733] = {.lex_state = 0, .external_lex_state = 6},
  [734] = {.lex_state = 692},
  [735] = {.lex_state = 0, .external_lex_state = 3},
  [736] = {.lex_state = 692},
  [737] = {.lex_state = 0, .external_lex_state = 3},
  [738] = {.lex_state = 0, .external_lex_state = 3},
  [739] = {.lex_state = 0, .external_lex_state = 6},
  [740] = {.lex_state = 53},
  [741] = {.lex_state = 0, .external_lex_state = 6},
  [742] = {.lex_state = 0, .external_lex_state = 3},
  [743] = {.lex_state = 0, .external_lex_state = 3},
  [744] = {.lex_state = 142},
  [745] = {.lex_state = 0, .external_lex_state = 6},
  [746] = {.lex_state = 0, .external_lex_state = 3},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 213},
  [750] = {.lex_state = 142},
  [751] = {.lex_state = 0, .external_lex_state = 3},
  [752] = {.lex_state = 0, .external_lex_state = 3},
  [753] = {.lex_state = 0, .external_lex_state = 3},
  [754] = {.lex_state = 692},
  [755] = {.lex_state = 0, .external_lex_state = 3},
  [756] = {.lex_state = 0, .external_lex_state = 6},
  [757] = {.lex_state = 0, .external_lex_state = 6},
  [758] = {.lex_state = 142},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 51},
  [761] = {.lex_state = 0, .external_lex_state = 6},
  [762] = {.lex_state = 51},
  [763] = {.lex_state = 0, .external_lex_state = 3},
  [764] = {.lex_state = 0, .external_lex_state = 3},
  [765] = {.lex_state = 0, .external_lex_state = 3},
  [766] = {.lex_state = 0, .external_lex_state = 3},
  [767] = {.lex_state = 0, .external_lex_state = 3},
  [768] = {.lex_state = 692},
  [769] = {.lex_state = 0, .external_lex_state = 3},
  [770] = {.lex_state = 0, .external_lex_state = 6},
  [771] = {.lex_state = 0, .external_lex_state = 6},
  [772] = {.lex_state = 213},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 0, .external_lex_state = 6},
  [775] = {.lex_state = 0, .external_lex_state = 3},
  [776] = {.lex_state = 0, .external_lex_state = 3},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 142},
  [779] = {.lex_state = 0, .external_lex_state = 6},
  [780] = {.lex_state = 0, .external_lex_state = 3},
  [781] = {.lex_state = 0, .external_lex_state = 6},
  [782] = {.lex_state = 0, .external_lex_state = 3},
  [783] = {.lex_state = 0, .external_lex_state = 3},
  [784] = {.lex_state = 0, .external_lex_state = 3},
  [785] = {.lex_state = 0, .external_lex_state = 6},
  [786] = {.lex_state = 0, .external_lex_state = 3},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 153},
  [789] = {.lex_state = 0, .external_lex_state = 6},
  [790] = {.lex_state = 0, .external_lex_state = 6},
  [791] = {.lex_state = 213},
  [792] = {.lex_state = 0, .external_lex_state = 3},
  [793] = {.lex_state = 213},
  [794] = {.lex_state = 0, .external_lex_state = 6},
  [795] = {.lex_state = 692},
  [796] = {.lex_state = 0, .external_lex_state = 6},
  [797] = {.lex_state = 0, .external_lex_state = 3},
  [798] = {.lex_state = 0, .external_lex_state = 3},
  [799] = {.lex_state = 0, .external_lex_state = 6},
  [800] = {.lex_state = 0, .external_lex_state = 3},
  [801] = {.lex_state = 0, .external_lex_state = 3},
  [802] = {.lex_state = 0, .external_lex_state = 3},
  [803] = {.lex_state = 0, .external_lex_state = 3},
  [804] = {.lex_state = 0, .external_lex_state = 3},
  [805] = {.lex_state = 213},
  [806] = {.lex_state = 143},
  [807] = {.lex_state = 0, .external_lex_state = 3},
  [808] = {.lex_state = 52},
  [809] = {.lex_state = 0, .external_lex_state = 3},
  [810] = {.lex_state = 0, .external_lex_state = 3},
  [811] = {.lex_state = 0, .external_lex_state = 3},
  [812] = {.lex_state = 0, .external_lex_state = 6},
  [813] = {.lex_state = 0, .external_lex_state = 6},
  [814] = {.lex_state = 0, .external_lex_state = 6},
  [815] = {.lex_state = 0, .external_lex_state = 6},
  [816] = {.lex_state = 0, .external_lex_state = 3},
  [817] = {.lex_state = 0, .external_lex_state = 3},
  [818] = {.lex_state = 0, .external_lex_state = 6},
  [819] = {.lex_state = 0, .external_lex_state = 6},
  [820] = {.lex_state = 0, .external_lex_state = 6},
  [821] = {.lex_state = 0, .external_lex_state = 6},
  [822] = {.lex_state = 142},
  [823] = {.lex_state = 0, .external_lex_state = 6},
  [824] = {.lex_state = 0, .external_lex_state = 6},
  [825] = {.lex_state = 0, .external_lex_state = 6},
  [826] = {.lex_state = 0, .external_lex_state = 6},
  [827] = {.lex_state = 0, .external_lex_state = 3},
  [828] = {.lex_state = 0, .external_lex_state = 6},
  [829] = {.lex_state = 0, .external_lex_state = 6},
  [830] = {.lex_state = 0, .external_lex_state = 6},
  [831] = {.lex_state = 0, .external_lex_state = 6},
  [832] = {.lex_state = 0, .external_lex_state = 6},
  [833] = {.lex_state = 0, .external_lex_state = 6},
  [834] = {.lex_state = 0, .external_lex_state = 6},
  [835] = {.lex_state = 0, .external_lex_state = 6},
  [836] = {.lex_state = 53},
  [837] = {.lex_state = 0, .external_lex_state = 3},
  [838] = {.lex_state = 0, .external_lex_state = 3},
  [839] = {.lex_state = 0, .external_lex_state = 3},
  [840] = {.lex_state = 53},
  [841] = {.lex_state = 0, .external_lex_state = 3},
  [842] = {.lex_state = 0, .external_lex_state = 3},
  [843] = {.lex_state = 0, .external_lex_state = 3},
  [844] = {.lex_state = 0, .external_lex_state = 3},
  [845] = {.lex_state = 0, .external_lex_state = 3},
  [846] = {.lex_state = 0, .external_lex_state = 3},
  [847] = {.lex_state = 0, .external_lex_state = 3},
  [848] = {.lex_state = 0, .external_lex_state = 3},
  [849] = {.lex_state = 0, .external_lex_state = 3},
  [850] = {.lex_state = 0, .external_lex_state = 3},
  [851] = {.lex_state = 0, .external_lex_state = 3},
  [852] = {.lex_state = 0, .external_lex_state = 3},
  [853] = {.lex_state = 0, .external_lex_state = 3},
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
    [ts_external_token__newline] = true,
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
    [ts_external_token__dedent] = true,
  },
  [6] = {
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
    [anon_sym_unless] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_elseif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_when] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_script_DOT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym__template_attribute_value_token1] = ACTIONS(1),
    [aux_sym__array_attribute_value_token1] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_DASH] = ACTIONS(1),
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
    [sym_source_file] = STATE(747),
    [sym_doctype] = STATE(49),
    [sym_pipe] = STATE(49),
    [sym_filter] = STATE(49),
    [sym_conditional] = STATE(49),
    [sym_case] = STATE(49),
    [sym_unescaped_buffered_code] = STATE(49),
    [sym_buffered_code] = STATE(49),
    [sym_script_block] = STATE(49),
    [sym_tag] = STATE(49),
    [sym_comment] = STATE(49),
    [sym__comment] = STATE(347),
    [sym__comment_not_first_line] = STATE(347),
    [sym_unbuffered_code] = STATE(49),
    [aux_sym_source_file_repeat1] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_doctype] = ACTIONS(5),
    [anon_sym_PIPE] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_unless] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_elseif] = ACTIONS(13),
    [anon_sym_else] = ACTIONS(15),
    [anon_sym_case] = ACTIONS(17),
    [anon_sym_BANG_EQ] = ACTIONS(19),
    [anon_sym_EQ] = ACTIONS(21),
    [anon_sym_script_DOT] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
    [anon_sym_SLASH_SLASH_DASH] = ACTIONS(27),
    [sym_tag_name] = ACTIONS(29),
    [sym_class] = ACTIONS(31),
    [sym_id] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(37), 1,
      anon_sym_doctype,
    ACTIONS(40), 1,
      anon_sym_PIPE,
    ACTIONS(43), 1,
      anon_sym_COLON,
    ACTIONS(49), 1,
      anon_sym_elseif,
    ACTIONS(52), 1,
      anon_sym_else,
    ACTIONS(55), 1,
      anon_sym_case,
    ACTIONS(60), 1,
      anon_sym_BANG_EQ,
    ACTIONS(63), 1,
      anon_sym_EQ,
    ACTIONS(66), 1,
      anon_sym_script_DOT,
    ACTIONS(69), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(72), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(75), 1,
      sym_tag_name,
    ACTIONS(81), 1,
      anon_sym_DASH,
    ACTIONS(84), 1,
      sym__newline,
    ACTIONS(35), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(46), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(58), 2,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(78), 2,
      sym_class,
      sym_id,
    STATE(127), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(2), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [78] = 21,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      anon_sym_doctype,
    ACTIONS(91), 1,
      anon_sym_PIPE,
    ACTIONS(93), 1,
      anon_sym_COLON,
    ACTIONS(97), 1,
      anon_sym_elseif,
    ACTIONS(99), 1,
      anon_sym_else,
    ACTIONS(101), 1,
      anon_sym_case,
    ACTIONS(105), 1,
      anon_sym_BANG_EQ,
    ACTIONS(107), 1,
      anon_sym_EQ,
    ACTIONS(109), 1,
      anon_sym_script_DOT,
    ACTIONS(111), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(113), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(115), 1,
      sym_tag_name,
    ACTIONS(119), 1,
      anon_sym_DASH,
    ACTIONS(121), 1,
      sym__newline,
    ACTIONS(123), 1,
      sym__dedent,
    ACTIONS(95), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(103), 2,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(117), 2,
      sym_class,
      sym_id,
    STATE(127), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(2), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [158] = 21,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      anon_sym_doctype,
    ACTIONS(91), 1,
      anon_sym_PIPE,
    ACTIONS(93), 1,
      anon_sym_COLON,
    ACTIONS(97), 1,
      anon_sym_elseif,
    ACTIONS(99), 1,
      anon_sym_else,
    ACTIONS(101), 1,
      anon_sym_case,
    ACTIONS(105), 1,
      anon_sym_BANG_EQ,
    ACTIONS(107), 1,
      anon_sym_EQ,
    ACTIONS(109), 1,
      anon_sym_script_DOT,
    ACTIONS(111), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(113), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(115), 1,
      sym_tag_name,
    ACTIONS(119), 1,
      anon_sym_DASH,
    ACTIONS(121), 1,
      sym__newline,
    ACTIONS(125), 1,
      sym__dedent,
    ACTIONS(95), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(103), 2,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(117), 2,
      sym_class,
      sym_id,
    STATE(127), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(2), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [238] = 20,
    ACTIONS(35), 1,
      sym__dedent,
    ACTIONS(127), 1,
      anon_sym_doctype,
    ACTIONS(130), 1,
      anon_sym_PIPE,
    ACTIONS(133), 1,
      anon_sym_COLON,
    ACTIONS(139), 1,
      anon_sym_elseif,
    ACTIONS(142), 1,
      anon_sym_else,
    ACTIONS(145), 1,
      anon_sym_case,
    ACTIONS(148), 1,
      anon_sym_BANG_EQ,
    ACTIONS(151), 1,
      anon_sym_EQ,
    ACTIONS(154), 1,
      anon_sym_script_DOT,
    ACTIONS(157), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(160), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(163), 1,
      sym_tag_name,
    ACTIONS(169), 1,
      anon_sym_DASH,
    ACTIONS(172), 1,
      sym__newline,
    ACTIONS(58), 2,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(136), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(166), 2,
      sym_class,
      sym_id,
    STATE(211), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(5), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [315] = 20,
    ACTIONS(175), 1,
      anon_sym_doctype,
    ACTIONS(177), 1,
      anon_sym_PIPE,
    ACTIONS(179), 1,
      anon_sym_COLON,
    ACTIONS(183), 1,
      anon_sym_elseif,
    ACTIONS(185), 1,
      anon_sym_else,
    ACTIONS(187), 1,
      anon_sym_case,
    ACTIONS(189), 1,
      anon_sym_BANG_EQ,
    ACTIONS(191), 1,
      anon_sym_EQ,
    ACTIONS(193), 1,
      anon_sym_script_DOT,
    ACTIONS(195), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(197), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(199), 1,
      sym_tag_name,
    ACTIONS(203), 1,
      anon_sym_DASH,
    ACTIONS(205), 1,
      sym__newline,
    ACTIONS(207), 1,
      sym__dedent,
    ACTIONS(103), 2,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(181), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(201), 2,
      sym_class,
      sym_id,
    STATE(211), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(5), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [392] = 19,
    ACTIONS(55), 1,
      anon_sym_case,
    ACTIONS(209), 1,
      anon_sym_doctype,
    ACTIONS(212), 1,
      anon_sym_PIPE,
    ACTIONS(215), 1,
      anon_sym_COLON,
    ACTIONS(221), 1,
      anon_sym_elseif,
    ACTIONS(224), 1,
      anon_sym_else,
    ACTIONS(227), 1,
      anon_sym_BANG_EQ,
    ACTIONS(230), 1,
      anon_sym_EQ,
    ACTIONS(233), 1,
      anon_sym_script_DOT,
    ACTIONS(236), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(239), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(242), 1,
      sym_tag_name,
    ACTIONS(248), 1,
      anon_sym_DASH,
    ACTIONS(251), 1,
      sym__newline,
    ACTIONS(35), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(218), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(245), 2,
      sym_class,
      sym_id,
    STATE(275), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(7), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [466] = 20,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      anon_sym_case,
    ACTIONS(254), 1,
      anon_sym_doctype,
    ACTIONS(256), 1,
      anon_sym_PIPE,
    ACTIONS(258), 1,
      anon_sym_COLON,
    ACTIONS(262), 1,
      anon_sym_elseif,
    ACTIONS(264), 1,
      anon_sym_else,
    ACTIONS(266), 1,
      anon_sym_BANG_EQ,
    ACTIONS(268), 1,
      anon_sym_EQ,
    ACTIONS(270), 1,
      anon_sym_script_DOT,
    ACTIONS(272), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(274), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(276), 1,
      sym_tag_name,
    ACTIONS(280), 1,
      anon_sym_DASH,
    ACTIONS(282), 1,
      sym__newline,
    ACTIONS(284), 1,
      sym__dedent,
    ACTIONS(260), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(278), 2,
      sym_class,
      sym_id,
    STATE(275), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(7), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [542] = 20,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      anon_sym_case,
    ACTIONS(254), 1,
      anon_sym_doctype,
    ACTIONS(256), 1,
      anon_sym_PIPE,
    ACTIONS(258), 1,
      anon_sym_COLON,
    ACTIONS(262), 1,
      anon_sym_elseif,
    ACTIONS(264), 1,
      anon_sym_else,
    ACTIONS(266), 1,
      anon_sym_BANG_EQ,
    ACTIONS(268), 1,
      anon_sym_EQ,
    ACTIONS(270), 1,
      anon_sym_script_DOT,
    ACTIONS(272), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(274), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(276), 1,
      sym_tag_name,
    ACTIONS(280), 1,
      anon_sym_DASH,
    ACTIONS(282), 1,
      sym__newline,
    ACTIONS(286), 1,
      sym__dedent,
    ACTIONS(260), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(278), 2,
      sym_class,
      sym_id,
    STATE(275), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(7), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [618] = 19,
    ACTIONS(187), 1,
      anon_sym_case,
    ACTIONS(288), 1,
      anon_sym_doctype,
    ACTIONS(290), 1,
      anon_sym_PIPE,
    ACTIONS(292), 1,
      anon_sym_COLON,
    ACTIONS(296), 1,
      anon_sym_elseif,
    ACTIONS(298), 1,
      anon_sym_else,
    ACTIONS(300), 1,
      anon_sym_BANG_EQ,
    ACTIONS(302), 1,
      anon_sym_EQ,
    ACTIONS(304), 1,
      anon_sym_script_DOT,
    ACTIONS(306), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(308), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(310), 1,
      sym_tag_name,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(316), 1,
      sym__newline,
    ACTIONS(318), 1,
      sym__dedent,
    ACTIONS(294), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(312), 2,
      sym_class,
      sym_id,
    STATE(316), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(21), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [691] = 19,
    ACTIONS(187), 1,
      anon_sym_case,
    ACTIONS(288), 1,
      anon_sym_doctype,
    ACTIONS(290), 1,
      anon_sym_PIPE,
    ACTIONS(292), 1,
      anon_sym_COLON,
    ACTIONS(296), 1,
      anon_sym_elseif,
    ACTIONS(298), 1,
      anon_sym_else,
    ACTIONS(300), 1,
      anon_sym_BANG_EQ,
    ACTIONS(302), 1,
      anon_sym_EQ,
    ACTIONS(304), 1,
      anon_sym_script_DOT,
    ACTIONS(306), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(308), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(310), 1,
      sym_tag_name,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      sym__newline,
    ACTIONS(294), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(312), 2,
      sym_class,
      sym_id,
    STATE(316), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(10), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [764] = 19,
    ACTIONS(187), 1,
      anon_sym_case,
    ACTIONS(288), 1,
      anon_sym_doctype,
    ACTIONS(290), 1,
      anon_sym_PIPE,
    ACTIONS(292), 1,
      anon_sym_COLON,
    ACTIONS(296), 1,
      anon_sym_elseif,
    ACTIONS(298), 1,
      anon_sym_else,
    ACTIONS(300), 1,
      anon_sym_BANG_EQ,
    ACTIONS(302), 1,
      anon_sym_EQ,
    ACTIONS(304), 1,
      anon_sym_script_DOT,
    ACTIONS(306), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(308), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(310), 1,
      sym_tag_name,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(326), 1,
      sym__newline,
    ACTIONS(294), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(312), 2,
      sym_class,
      sym_id,
    STATE(316), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(23), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [837] = 19,
    ACTIONS(187), 1,
      anon_sym_case,
    ACTIONS(288), 1,
      anon_sym_doctype,
    ACTIONS(290), 1,
      anon_sym_PIPE,
    ACTIONS(292), 1,
      anon_sym_COLON,
    ACTIONS(296), 1,
      anon_sym_elseif,
    ACTIONS(298), 1,
      anon_sym_else,
    ACTIONS(300), 1,
      anon_sym_BANG_EQ,
    ACTIONS(302), 1,
      anon_sym_EQ,
    ACTIONS(304), 1,
      anon_sym_script_DOT,
    ACTIONS(306), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(308), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(310), 1,
      sym_tag_name,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(326), 1,
      sym__newline,
    ACTIONS(294), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(312), 2,
      sym_class,
      sym_id,
    STATE(316), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(23), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [910] = 19,
    ACTIONS(89), 1,
      anon_sym_doctype,
    ACTIONS(91), 1,
      anon_sym_PIPE,
    ACTIONS(93), 1,
      anon_sym_COLON,
    ACTIONS(97), 1,
      anon_sym_elseif,
    ACTIONS(99), 1,
      anon_sym_else,
    ACTIONS(101), 1,
      anon_sym_case,
    ACTIONS(105), 1,
      anon_sym_BANG_EQ,
    ACTIONS(107), 1,
      anon_sym_EQ,
    ACTIONS(109), 1,
      anon_sym_script_DOT,
    ACTIONS(111), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(113), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(115), 1,
      sym_tag_name,
    ACTIONS(119), 1,
      anon_sym_DASH,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(330), 1,
      sym__newline,
    ACTIONS(95), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(117), 2,
      sym_class,
      sym_id,
    STATE(127), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(4), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [983] = 19,
    ACTIONS(89), 1,
      anon_sym_doctype,
    ACTIONS(91), 1,
      anon_sym_PIPE,
    ACTIONS(93), 1,
      anon_sym_COLON,
    ACTIONS(97), 1,
      anon_sym_elseif,
    ACTIONS(99), 1,
      anon_sym_else,
    ACTIONS(101), 1,
      anon_sym_case,
    ACTIONS(105), 1,
      anon_sym_BANG_EQ,
    ACTIONS(107), 1,
      anon_sym_EQ,
    ACTIONS(109), 1,
      anon_sym_script_DOT,
    ACTIONS(111), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(113), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(115), 1,
      sym_tag_name,
    ACTIONS(119), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      sym__newline,
    ACTIONS(95), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(117), 2,
      sym_class,
      sym_id,
    STATE(127), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(3), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [1056] = 19,
    ACTIONS(175), 1,
      anon_sym_doctype,
    ACTIONS(177), 1,
      anon_sym_PIPE,
    ACTIONS(179), 1,
      anon_sym_COLON,
    ACTIONS(183), 1,
      anon_sym_elseif,
    ACTIONS(185), 1,
      anon_sym_else,
    ACTIONS(187), 1,
      anon_sym_case,
    ACTIONS(189), 1,
      anon_sym_BANG_EQ,
    ACTIONS(191), 1,
      anon_sym_EQ,
    ACTIONS(193), 1,
      anon_sym_script_DOT,
    ACTIONS(195), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(197), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(199), 1,
      sym_tag_name,
    ACTIONS(203), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      anon_sym_DOT,
    ACTIONS(338), 1,
      sym__newline,
    ACTIONS(181), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(201), 2,
      sym_class,
      sym_id,
    STATE(211), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(6), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [1129] = 19,
    ACTIONS(89), 1,
      anon_sym_doctype,
    ACTIONS(91), 1,
      anon_sym_PIPE,
    ACTIONS(93), 1,
      anon_sym_COLON,
    ACTIONS(97), 1,
      anon_sym_elseif,
    ACTIONS(99), 1,
      anon_sym_else,
    ACTIONS(101), 1,
      anon_sym_case,
    ACTIONS(105), 1,
      anon_sym_BANG_EQ,
    ACTIONS(107), 1,
      anon_sym_EQ,
    ACTIONS(109), 1,
      anon_sym_script_DOT,
    ACTIONS(111), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(113), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(115), 1,
      sym_tag_name,
    ACTIONS(119), 1,
      anon_sym_DASH,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(330), 1,
      sym__newline,
    ACTIONS(95), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(117), 2,
      sym_class,
      sym_id,
    STATE(127), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(4), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [1202] = 19,
    ACTIONS(101), 1,
      anon_sym_case,
    ACTIONS(254), 1,
      anon_sym_doctype,
    ACTIONS(256), 1,
      anon_sym_PIPE,
    ACTIONS(258), 1,
      anon_sym_COLON,
    ACTIONS(262), 1,
      anon_sym_elseif,
    ACTIONS(264), 1,
      anon_sym_else,
    ACTIONS(266), 1,
      anon_sym_BANG_EQ,
    ACTIONS(268), 1,
      anon_sym_EQ,
    ACTIONS(270), 1,
      anon_sym_script_DOT,
    ACTIONS(272), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(274), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(276), 1,
      sym_tag_name,
    ACTIONS(280), 1,
      anon_sym_DASH,
    ACTIONS(340), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      sym__newline,
    ACTIONS(260), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(278), 2,
      sym_class,
      sym_id,
    STATE(275), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(8), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [1275] = 19,
    ACTIONS(89), 1,
      anon_sym_doctype,
    ACTIONS(91), 1,
      anon_sym_PIPE,
    ACTIONS(93), 1,
      anon_sym_COLON,
    ACTIONS(97), 1,
      anon_sym_elseif,
    ACTIONS(99), 1,
      anon_sym_else,
    ACTIONS(101), 1,
      anon_sym_case,
    ACTIONS(105), 1,
      anon_sym_BANG_EQ,
    ACTIONS(107), 1,
      anon_sym_EQ,
    ACTIONS(109), 1,
      anon_sym_script_DOT,
    ACTIONS(111), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(113), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(115), 1,
      sym_tag_name,
    ACTIONS(119), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      sym__newline,
    ACTIONS(95), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(117), 2,
      sym_class,
      sym_id,
    STATE(127), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(3), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [1348] = 19,
    ACTIONS(101), 1,
      anon_sym_case,
    ACTIONS(254), 1,
      anon_sym_doctype,
    ACTIONS(256), 1,
      anon_sym_PIPE,
    ACTIONS(258), 1,
      anon_sym_COLON,
    ACTIONS(262), 1,
      anon_sym_elseif,
    ACTIONS(264), 1,
      anon_sym_else,
    ACTIONS(266), 1,
      anon_sym_BANG_EQ,
    ACTIONS(268), 1,
      anon_sym_EQ,
    ACTIONS(270), 1,
      anon_sym_script_DOT,
    ACTIONS(272), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(274), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(276), 1,
      sym_tag_name,
    ACTIONS(280), 1,
      anon_sym_DASH,
    ACTIONS(340), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      sym__newline,
    ACTIONS(260), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(278), 2,
      sym_class,
      sym_id,
    STATE(275), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(8), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [1421] = 19,
    ACTIONS(35), 1,
      sym__dedent,
    ACTIONS(145), 1,
      anon_sym_case,
    ACTIONS(344), 1,
      anon_sym_doctype,
    ACTIONS(347), 1,
      anon_sym_PIPE,
    ACTIONS(350), 1,
      anon_sym_COLON,
    ACTIONS(356), 1,
      anon_sym_elseif,
    ACTIONS(359), 1,
      anon_sym_else,
    ACTIONS(362), 1,
      anon_sym_BANG_EQ,
    ACTIONS(365), 1,
      anon_sym_EQ,
    ACTIONS(368), 1,
      anon_sym_script_DOT,
    ACTIONS(371), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(374), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(377), 1,
      sym_tag_name,
    ACTIONS(383), 1,
      anon_sym_DASH,
    ACTIONS(386), 1,
      sym__newline,
    ACTIONS(353), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(380), 2,
      sym_class,
      sym_id,
    STATE(316), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(21), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [1494] = 19,
    ACTIONS(89), 1,
      anon_sym_doctype,
    ACTIONS(91), 1,
      anon_sym_PIPE,
    ACTIONS(93), 1,
      anon_sym_COLON,
    ACTIONS(97), 1,
      anon_sym_elseif,
    ACTIONS(99), 1,
      anon_sym_else,
    ACTIONS(101), 1,
      anon_sym_case,
    ACTIONS(105), 1,
      anon_sym_BANG_EQ,
    ACTIONS(107), 1,
      anon_sym_EQ,
    ACTIONS(109), 1,
      anon_sym_script_DOT,
    ACTIONS(111), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(113), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(115), 1,
      sym_tag_name,
    ACTIONS(119), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      sym__newline,
    ACTIONS(95), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(117), 2,
      sym_class,
      sym_id,
    STATE(127), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(3), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [1567] = 19,
    ACTIONS(187), 1,
      anon_sym_case,
    ACTIONS(288), 1,
      anon_sym_doctype,
    ACTIONS(290), 1,
      anon_sym_PIPE,
    ACTIONS(292), 1,
      anon_sym_COLON,
    ACTIONS(296), 1,
      anon_sym_elseif,
    ACTIONS(298), 1,
      anon_sym_else,
    ACTIONS(300), 1,
      anon_sym_BANG_EQ,
    ACTIONS(302), 1,
      anon_sym_EQ,
    ACTIONS(304), 1,
      anon_sym_script_DOT,
    ACTIONS(306), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(308), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(310), 1,
      sym_tag_name,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(316), 1,
      sym__newline,
    ACTIONS(389), 1,
      sym__dedent,
    ACTIONS(294), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(312), 2,
      sym_class,
      sym_id,
    STATE(316), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(21), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [1640] = 19,
    ACTIONS(89), 1,
      anon_sym_doctype,
    ACTIONS(91), 1,
      anon_sym_PIPE,
    ACTIONS(93), 1,
      anon_sym_COLON,
    ACTIONS(97), 1,
      anon_sym_elseif,
    ACTIONS(99), 1,
      anon_sym_else,
    ACTIONS(101), 1,
      anon_sym_case,
    ACTIONS(105), 1,
      anon_sym_BANG_EQ,
    ACTIONS(107), 1,
      anon_sym_EQ,
    ACTIONS(109), 1,
      anon_sym_script_DOT,
    ACTIONS(111), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(113), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(115), 1,
      sym_tag_name,
    ACTIONS(119), 1,
      anon_sym_DASH,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(330), 1,
      sym__newline,
    ACTIONS(95), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(117), 2,
      sym_class,
      sym_id,
    STATE(127), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(4), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [1713] = 19,
    ACTIONS(175), 1,
      anon_sym_doctype,
    ACTIONS(177), 1,
      anon_sym_PIPE,
    ACTIONS(179), 1,
      anon_sym_COLON,
    ACTIONS(183), 1,
      anon_sym_elseif,
    ACTIONS(185), 1,
      anon_sym_else,
    ACTIONS(187), 1,
      anon_sym_case,
    ACTIONS(189), 1,
      anon_sym_BANG_EQ,
    ACTIONS(191), 1,
      anon_sym_EQ,
    ACTIONS(193), 1,
      anon_sym_script_DOT,
    ACTIONS(195), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(197), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(199), 1,
      sym_tag_name,
    ACTIONS(203), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      anon_sym_DOT,
    ACTIONS(338), 1,
      sym__newline,
    ACTIONS(181), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(201), 2,
      sym_class,
      sym_id,
    STATE(211), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(6), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [1786] = 19,
    ACTIONS(175), 1,
      anon_sym_doctype,
    ACTIONS(177), 1,
      anon_sym_PIPE,
    ACTIONS(179), 1,
      anon_sym_COLON,
    ACTIONS(183), 1,
      anon_sym_elseif,
    ACTIONS(185), 1,
      anon_sym_else,
    ACTIONS(187), 1,
      anon_sym_case,
    ACTIONS(189), 1,
      anon_sym_BANG_EQ,
    ACTIONS(191), 1,
      anon_sym_EQ,
    ACTIONS(193), 1,
      anon_sym_script_DOT,
    ACTIONS(195), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(197), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(199), 1,
      sym_tag_name,
    ACTIONS(203), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      anon_sym_DOT,
    ACTIONS(338), 1,
      sym__newline,
    ACTIONS(181), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(201), 2,
      sym_class,
      sym_id,
    STATE(211), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(6), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [1859] = 19,
    ACTIONS(101), 1,
      anon_sym_case,
    ACTIONS(254), 1,
      anon_sym_doctype,
    ACTIONS(256), 1,
      anon_sym_PIPE,
    ACTIONS(258), 1,
      anon_sym_COLON,
    ACTIONS(262), 1,
      anon_sym_elseif,
    ACTIONS(264), 1,
      anon_sym_else,
    ACTIONS(266), 1,
      anon_sym_BANG_EQ,
    ACTIONS(268), 1,
      anon_sym_EQ,
    ACTIONS(270), 1,
      anon_sym_script_DOT,
    ACTIONS(272), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(274), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(276), 1,
      sym_tag_name,
    ACTIONS(280), 1,
      anon_sym_DASH,
    ACTIONS(340), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      sym__newline,
    ACTIONS(260), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(278), 2,
      sym_class,
      sym_id,
    STATE(275), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(8), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [1932] = 19,
    ACTIONS(101), 1,
      anon_sym_case,
    ACTIONS(254), 1,
      anon_sym_doctype,
    ACTIONS(256), 1,
      anon_sym_PIPE,
    ACTIONS(258), 1,
      anon_sym_COLON,
    ACTIONS(262), 1,
      anon_sym_elseif,
    ACTIONS(264), 1,
      anon_sym_else,
    ACTIONS(266), 1,
      anon_sym_BANG_EQ,
    ACTIONS(268), 1,
      anon_sym_EQ,
    ACTIONS(270), 1,
      anon_sym_script_DOT,
    ACTIONS(272), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(274), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(276), 1,
      sym_tag_name,
    ACTIONS(280), 1,
      anon_sym_DASH,
    ACTIONS(391), 1,
      anon_sym_DOT,
    ACTIONS(393), 1,
      sym__newline,
    ACTIONS(260), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(278), 2,
      sym_class,
      sym_id,
    STATE(275), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(9), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [2005] = 19,
    ACTIONS(101), 1,
      anon_sym_case,
    ACTIONS(254), 1,
      anon_sym_doctype,
    ACTIONS(256), 1,
      anon_sym_PIPE,
    ACTIONS(258), 1,
      anon_sym_COLON,
    ACTIONS(262), 1,
      anon_sym_elseif,
    ACTIONS(264), 1,
      anon_sym_else,
    ACTIONS(266), 1,
      anon_sym_BANG_EQ,
    ACTIONS(268), 1,
      anon_sym_EQ,
    ACTIONS(270), 1,
      anon_sym_script_DOT,
    ACTIONS(272), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(274), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(276), 1,
      sym_tag_name,
    ACTIONS(280), 1,
      anon_sym_DASH,
    ACTIONS(391), 1,
      anon_sym_DOT,
    ACTIONS(393), 1,
      sym__newline,
    ACTIONS(260), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(278), 2,
      sym_class,
      sym_id,
    STATE(275), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(9), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [2078] = 19,
    ACTIONS(101), 1,
      anon_sym_case,
    ACTIONS(254), 1,
      anon_sym_doctype,
    ACTIONS(256), 1,
      anon_sym_PIPE,
    ACTIONS(258), 1,
      anon_sym_COLON,
    ACTIONS(262), 1,
      anon_sym_elseif,
    ACTIONS(264), 1,
      anon_sym_else,
    ACTIONS(266), 1,
      anon_sym_BANG_EQ,
    ACTIONS(268), 1,
      anon_sym_EQ,
    ACTIONS(270), 1,
      anon_sym_script_DOT,
    ACTIONS(272), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(274), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(276), 1,
      sym_tag_name,
    ACTIONS(280), 1,
      anon_sym_DASH,
    ACTIONS(391), 1,
      anon_sym_DOT,
    ACTIONS(393), 1,
      sym__newline,
    ACTIONS(260), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(278), 2,
      sym_class,
      sym_id,
    STATE(275), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(9), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [2151] = 19,
    ACTIONS(187), 1,
      anon_sym_case,
    ACTIONS(288), 1,
      anon_sym_doctype,
    ACTIONS(290), 1,
      anon_sym_PIPE,
    ACTIONS(292), 1,
      anon_sym_COLON,
    ACTIONS(296), 1,
      anon_sym_elseif,
    ACTIONS(298), 1,
      anon_sym_else,
    ACTIONS(300), 1,
      anon_sym_BANG_EQ,
    ACTIONS(302), 1,
      anon_sym_EQ,
    ACTIONS(304), 1,
      anon_sym_script_DOT,
    ACTIONS(306), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(308), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(310), 1,
      sym_tag_name,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      sym__newline,
    ACTIONS(294), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(312), 2,
      sym_class,
      sym_id,
    STATE(316), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(10), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [2224] = 19,
    ACTIONS(89), 1,
      anon_sym_doctype,
    ACTIONS(91), 1,
      anon_sym_PIPE,
    ACTIONS(93), 1,
      anon_sym_COLON,
    ACTIONS(97), 1,
      anon_sym_elseif,
    ACTIONS(99), 1,
      anon_sym_else,
    ACTIONS(101), 1,
      anon_sym_case,
    ACTIONS(105), 1,
      anon_sym_BANG_EQ,
    ACTIONS(107), 1,
      anon_sym_EQ,
    ACTIONS(109), 1,
      anon_sym_script_DOT,
    ACTIONS(111), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(113), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(115), 1,
      sym_tag_name,
    ACTIONS(119), 1,
      anon_sym_DASH,
    ACTIONS(328), 1,
      anon_sym_DOT,
    ACTIONS(330), 1,
      sym__newline,
    ACTIONS(95), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(117), 2,
      sym_class,
      sym_id,
    STATE(127), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(4), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [2297] = 19,
    ACTIONS(89), 1,
      anon_sym_doctype,
    ACTIONS(91), 1,
      anon_sym_PIPE,
    ACTIONS(93), 1,
      anon_sym_COLON,
    ACTIONS(97), 1,
      anon_sym_elseif,
    ACTIONS(99), 1,
      anon_sym_else,
    ACTIONS(101), 1,
      anon_sym_case,
    ACTIONS(105), 1,
      anon_sym_BANG_EQ,
    ACTIONS(107), 1,
      anon_sym_EQ,
    ACTIONS(109), 1,
      anon_sym_script_DOT,
    ACTIONS(111), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(113), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(115), 1,
      sym_tag_name,
    ACTIONS(119), 1,
      anon_sym_DASH,
    ACTIONS(332), 1,
      anon_sym_DOT,
    ACTIONS(334), 1,
      sym__newline,
    ACTIONS(95), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(117), 2,
      sym_class,
      sym_id,
    STATE(127), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(3), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [2370] = 19,
    ACTIONS(175), 1,
      anon_sym_doctype,
    ACTIONS(177), 1,
      anon_sym_PIPE,
    ACTIONS(179), 1,
      anon_sym_COLON,
    ACTIONS(183), 1,
      anon_sym_elseif,
    ACTIONS(185), 1,
      anon_sym_else,
    ACTIONS(187), 1,
      anon_sym_case,
    ACTIONS(189), 1,
      anon_sym_BANG_EQ,
    ACTIONS(191), 1,
      anon_sym_EQ,
    ACTIONS(193), 1,
      anon_sym_script_DOT,
    ACTIONS(195), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(197), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(199), 1,
      sym_tag_name,
    ACTIONS(203), 1,
      anon_sym_DASH,
    ACTIONS(336), 1,
      anon_sym_DOT,
    ACTIONS(338), 1,
      sym__newline,
    ACTIONS(181), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(201), 2,
      sym_class,
      sym_id,
    STATE(211), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(6), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [2443] = 19,
    ACTIONS(187), 1,
      anon_sym_case,
    ACTIONS(288), 1,
      anon_sym_doctype,
    ACTIONS(290), 1,
      anon_sym_PIPE,
    ACTIONS(292), 1,
      anon_sym_COLON,
    ACTIONS(296), 1,
      anon_sym_elseif,
    ACTIONS(298), 1,
      anon_sym_else,
    ACTIONS(300), 1,
      anon_sym_BANG_EQ,
    ACTIONS(302), 1,
      anon_sym_EQ,
    ACTIONS(304), 1,
      anon_sym_script_DOT,
    ACTIONS(306), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(308), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(310), 1,
      sym_tag_name,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      sym__newline,
    ACTIONS(294), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(312), 2,
      sym_class,
      sym_id,
    STATE(316), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(10), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [2516] = 19,
    ACTIONS(187), 1,
      anon_sym_case,
    ACTIONS(288), 1,
      anon_sym_doctype,
    ACTIONS(290), 1,
      anon_sym_PIPE,
    ACTIONS(292), 1,
      anon_sym_COLON,
    ACTIONS(296), 1,
      anon_sym_elseif,
    ACTIONS(298), 1,
      anon_sym_else,
    ACTIONS(300), 1,
      anon_sym_BANG_EQ,
    ACTIONS(302), 1,
      anon_sym_EQ,
    ACTIONS(304), 1,
      anon_sym_script_DOT,
    ACTIONS(306), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(308), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(310), 1,
      sym_tag_name,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(326), 1,
      sym__newline,
    ACTIONS(294), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(312), 2,
      sym_class,
      sym_id,
    STATE(316), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(23), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [2589] = 19,
    ACTIONS(101), 1,
      anon_sym_case,
    ACTIONS(254), 1,
      anon_sym_doctype,
    ACTIONS(256), 1,
      anon_sym_PIPE,
    ACTIONS(258), 1,
      anon_sym_COLON,
    ACTIONS(262), 1,
      anon_sym_elseif,
    ACTIONS(264), 1,
      anon_sym_else,
    ACTIONS(266), 1,
      anon_sym_BANG_EQ,
    ACTIONS(268), 1,
      anon_sym_EQ,
    ACTIONS(270), 1,
      anon_sym_script_DOT,
    ACTIONS(272), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(274), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(276), 1,
      sym_tag_name,
    ACTIONS(280), 1,
      anon_sym_DASH,
    ACTIONS(340), 1,
      anon_sym_DOT,
    ACTIONS(342), 1,
      sym__newline,
    ACTIONS(260), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(278), 2,
      sym_class,
      sym_id,
    STATE(275), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(8), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [2662] = 19,
    ACTIONS(187), 1,
      anon_sym_case,
    ACTIONS(288), 1,
      anon_sym_doctype,
    ACTIONS(290), 1,
      anon_sym_PIPE,
    ACTIONS(292), 1,
      anon_sym_COLON,
    ACTIONS(296), 1,
      anon_sym_elseif,
    ACTIONS(298), 1,
      anon_sym_else,
    ACTIONS(300), 1,
      anon_sym_BANG_EQ,
    ACTIONS(302), 1,
      anon_sym_EQ,
    ACTIONS(304), 1,
      anon_sym_script_DOT,
    ACTIONS(306), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(308), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(310), 1,
      sym_tag_name,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(324), 1,
      anon_sym_DOT,
    ACTIONS(326), 1,
      sym__newline,
    ACTIONS(294), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(312), 2,
      sym_class,
      sym_id,
    STATE(316), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(23), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [2735] = 19,
    ACTIONS(187), 1,
      anon_sym_case,
    ACTIONS(288), 1,
      anon_sym_doctype,
    ACTIONS(290), 1,
      anon_sym_PIPE,
    ACTIONS(292), 1,
      anon_sym_COLON,
    ACTIONS(296), 1,
      anon_sym_elseif,
    ACTIONS(298), 1,
      anon_sym_else,
    ACTIONS(300), 1,
      anon_sym_BANG_EQ,
    ACTIONS(302), 1,
      anon_sym_EQ,
    ACTIONS(304), 1,
      anon_sym_script_DOT,
    ACTIONS(306), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(308), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(310), 1,
      sym_tag_name,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      anon_sym_DOT,
    ACTIONS(322), 1,
      sym__newline,
    ACTIONS(294), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(312), 2,
      sym_class,
      sym_id,
    STATE(316), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(10), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [2808] = 19,
    ACTIONS(101), 1,
      anon_sym_case,
    ACTIONS(254), 1,
      anon_sym_doctype,
    ACTIONS(256), 1,
      anon_sym_PIPE,
    ACTIONS(258), 1,
      anon_sym_COLON,
    ACTIONS(262), 1,
      anon_sym_elseif,
    ACTIONS(264), 1,
      anon_sym_else,
    ACTIONS(266), 1,
      anon_sym_BANG_EQ,
    ACTIONS(268), 1,
      anon_sym_EQ,
    ACTIONS(270), 1,
      anon_sym_script_DOT,
    ACTIONS(272), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(274), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(276), 1,
      sym_tag_name,
    ACTIONS(280), 1,
      anon_sym_DASH,
    ACTIONS(391), 1,
      anon_sym_DOT,
    ACTIONS(393), 1,
      sym__newline,
    ACTIONS(260), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(278), 2,
      sym_class,
      sym_id,
    STATE(275), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(9), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [2881] = 18,
    ACTIONS(101), 1,
      anon_sym_case,
    ACTIONS(254), 1,
      anon_sym_doctype,
    ACTIONS(256), 1,
      anon_sym_PIPE,
    ACTIONS(258), 1,
      anon_sym_COLON,
    ACTIONS(262), 1,
      anon_sym_elseif,
    ACTIONS(264), 1,
      anon_sym_else,
    ACTIONS(266), 1,
      anon_sym_BANG_EQ,
    ACTIONS(268), 1,
      anon_sym_EQ,
    ACTIONS(270), 1,
      anon_sym_script_DOT,
    ACTIONS(272), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(274), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(276), 1,
      sym_tag_name,
    ACTIONS(280), 1,
      anon_sym_DASH,
    ACTIONS(393), 1,
      sym__newline,
    ACTIONS(260), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(278), 2,
      sym_class,
      sym_id,
    STATE(275), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(9), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [2951] = 18,
    ACTIONS(89), 1,
      anon_sym_doctype,
    ACTIONS(91), 1,
      anon_sym_PIPE,
    ACTIONS(93), 1,
      anon_sym_COLON,
    ACTIONS(97), 1,
      anon_sym_elseif,
    ACTIONS(99), 1,
      anon_sym_else,
    ACTIONS(101), 1,
      anon_sym_case,
    ACTIONS(105), 1,
      anon_sym_BANG_EQ,
    ACTIONS(107), 1,
      anon_sym_EQ,
    ACTIONS(109), 1,
      anon_sym_script_DOT,
    ACTIONS(111), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(113), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(115), 1,
      sym_tag_name,
    ACTIONS(119), 1,
      anon_sym_DASH,
    ACTIONS(330), 1,
      sym__newline,
    ACTIONS(95), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(117), 2,
      sym_class,
      sym_id,
    STATE(127), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(4), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [3021] = 18,
    ACTIONS(101), 1,
      anon_sym_case,
    ACTIONS(254), 1,
      anon_sym_doctype,
    ACTIONS(256), 1,
      anon_sym_PIPE,
    ACTIONS(258), 1,
      anon_sym_COLON,
    ACTIONS(262), 1,
      anon_sym_elseif,
    ACTIONS(264), 1,
      anon_sym_else,
    ACTIONS(266), 1,
      anon_sym_BANG_EQ,
    ACTIONS(268), 1,
      anon_sym_EQ,
    ACTIONS(270), 1,
      anon_sym_script_DOT,
    ACTIONS(272), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(274), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(276), 1,
      sym_tag_name,
    ACTIONS(280), 1,
      anon_sym_DASH,
    ACTIONS(342), 1,
      sym__newline,
    ACTIONS(260), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(278), 2,
      sym_class,
      sym_id,
    STATE(275), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(8), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [3091] = 18,
    ACTIONS(187), 1,
      anon_sym_case,
    ACTIONS(288), 1,
      anon_sym_doctype,
    ACTIONS(290), 1,
      anon_sym_PIPE,
    ACTIONS(292), 1,
      anon_sym_COLON,
    ACTIONS(296), 1,
      anon_sym_elseif,
    ACTIONS(298), 1,
      anon_sym_else,
    ACTIONS(300), 1,
      anon_sym_BANG_EQ,
    ACTIONS(302), 1,
      anon_sym_EQ,
    ACTIONS(304), 1,
      anon_sym_script_DOT,
    ACTIONS(306), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(308), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(310), 1,
      sym_tag_name,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(322), 1,
      sym__newline,
    ACTIONS(294), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(312), 2,
      sym_class,
      sym_id,
    STATE(316), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(10), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [3161] = 18,
    ACTIONS(89), 1,
      anon_sym_doctype,
    ACTIONS(91), 1,
      anon_sym_PIPE,
    ACTIONS(93), 1,
      anon_sym_COLON,
    ACTIONS(97), 1,
      anon_sym_elseif,
    ACTIONS(99), 1,
      anon_sym_else,
    ACTIONS(101), 1,
      anon_sym_case,
    ACTIONS(105), 1,
      anon_sym_BANG_EQ,
    ACTIONS(107), 1,
      anon_sym_EQ,
    ACTIONS(109), 1,
      anon_sym_script_DOT,
    ACTIONS(111), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(113), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(115), 1,
      sym_tag_name,
    ACTIONS(119), 1,
      anon_sym_DASH,
    ACTIONS(334), 1,
      sym__newline,
    ACTIONS(95), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(117), 2,
      sym_class,
      sym_id,
    STATE(127), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(3), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [3231] = 18,
    ACTIONS(187), 1,
      anon_sym_case,
    ACTIONS(288), 1,
      anon_sym_doctype,
    ACTIONS(290), 1,
      anon_sym_PIPE,
    ACTIONS(292), 1,
      anon_sym_COLON,
    ACTIONS(296), 1,
      anon_sym_elseif,
    ACTIONS(298), 1,
      anon_sym_else,
    ACTIONS(300), 1,
      anon_sym_BANG_EQ,
    ACTIONS(302), 1,
      anon_sym_EQ,
    ACTIONS(304), 1,
      anon_sym_script_DOT,
    ACTIONS(306), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(308), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(310), 1,
      sym_tag_name,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(326), 1,
      sym__newline,
    ACTIONS(294), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(312), 2,
      sym_class,
      sym_id,
    STATE(316), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(23), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [3301] = 18,
    ACTIONS(175), 1,
      anon_sym_doctype,
    ACTIONS(177), 1,
      anon_sym_PIPE,
    ACTIONS(179), 1,
      anon_sym_COLON,
    ACTIONS(183), 1,
      anon_sym_elseif,
    ACTIONS(185), 1,
      anon_sym_else,
    ACTIONS(187), 1,
      anon_sym_case,
    ACTIONS(189), 1,
      anon_sym_BANG_EQ,
    ACTIONS(191), 1,
      anon_sym_EQ,
    ACTIONS(193), 1,
      anon_sym_script_DOT,
    ACTIONS(195), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(197), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(199), 1,
      sym_tag_name,
    ACTIONS(203), 1,
      anon_sym_DASH,
    ACTIONS(338), 1,
      sym__newline,
    ACTIONS(181), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(201), 2,
      sym_class,
      sym_id,
    STATE(211), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(6), 13,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym__children_choice,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_children_repeat1,
  [3371] = 18,
    ACTIONS(395), 1,
      ts_builtin_sym_end,
    ACTIONS(397), 1,
      anon_sym_doctype,
    ACTIONS(400), 1,
      anon_sym_PIPE,
    ACTIONS(403), 1,
      anon_sym_COLON,
    ACTIONS(409), 1,
      anon_sym_elseif,
    ACTIONS(412), 1,
      anon_sym_else,
    ACTIONS(415), 1,
      anon_sym_case,
    ACTIONS(418), 1,
      anon_sym_BANG_EQ,
    ACTIONS(421), 1,
      anon_sym_EQ,
    ACTIONS(424), 1,
      anon_sym_script_DOT,
    ACTIONS(427), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(430), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(433), 1,
      sym_tag_name,
    ACTIONS(439), 1,
      anon_sym_DASH,
    ACTIONS(406), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(436), 2,
      sym_class,
      sym_id,
    STATE(347), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(48), 12,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_source_file_repeat1,
  [3440] = 18,
    ACTIONS(5), 1,
      anon_sym_doctype,
    ACTIONS(7), 1,
      anon_sym_PIPE,
    ACTIONS(9), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_elseif,
    ACTIONS(15), 1,
      anon_sym_else,
    ACTIONS(17), 1,
      anon_sym_case,
    ACTIONS(19), 1,
      anon_sym_BANG_EQ,
    ACTIONS(21), 1,
      anon_sym_EQ,
    ACTIONS(23), 1,
      anon_sym_script_DOT,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(29), 1,
      sym_tag_name,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(442), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(31), 2,
      sym_class,
      sym_id,
    STATE(347), 2,
      sym__comment,
      sym__comment_not_first_line,
    STATE(48), 12,
      sym_doctype,
      sym_pipe,
      sym_filter,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_source_file_repeat1,
  [3509] = 9,
    ACTIONS(448), 1,
      anon_sym_COLON,
    ACTIONS(450), 1,
      aux_sym_filter_content_token1,
    ACTIONS(452), 1,
      anon_sym_LPAREN,
    ACTIONS(454), 1,
      sym__newline,
    STATE(56), 1,
      sym_attributes,
    STATE(131), 1,
      sym_filter,
    STATE(132), 1,
      sym_filter_content,
    ACTIONS(444), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(446), 18,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3555] = 9,
    ACTIONS(444), 1,
      sym__dedent,
    ACTIONS(456), 1,
      anon_sym_COLON,
    ACTIONS(458), 1,
      aux_sym_filter_content_token1,
    ACTIONS(460), 1,
      anon_sym_LPAREN,
    ACTIONS(462), 1,
      sym__newline,
    STATE(65), 1,
      sym_attributes,
    STATE(225), 1,
      sym_filter,
    STATE(229), 1,
      sym_filter_content,
    ACTIONS(446), 18,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3600] = 6,
    ACTIONS(468), 1,
      anon_sym_when,
    ACTIONS(470), 1,
      anon_sym_default,
    STATE(658), 1,
      sym__when_keyword,
    STATE(53), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(466), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(464), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3638] = 6,
    ACTIONS(476), 1,
      anon_sym_when,
    ACTIONS(479), 1,
      anon_sym_default,
    STATE(658), 1,
      sym__when_keyword,
    STATE(53), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(474), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(472), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3676] = 5,
    ACTIONS(486), 1,
      aux_sym_filter_content_token2,
    STATE(54), 1,
      aux_sym__comment_repeat1,
    STATE(797), 1,
      sym__comment_content,
    ACTIONS(482), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(484), 19,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3712] = 9,
    ACTIONS(489), 1,
      anon_sym_COLON,
    ACTIONS(491), 1,
      aux_sym_filter_content_token1,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    ACTIONS(495), 1,
      sym__newline,
    STATE(82), 1,
      sym_attributes,
    STATE(235), 1,
      sym_filter,
    STATE(261), 1,
      sym_filter_content,
    ACTIONS(444), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(446), 16,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3756] = 7,
    ACTIONS(448), 1,
      anon_sym_COLON,
    ACTIONS(450), 1,
      aux_sym_filter_content_token1,
    ACTIONS(454), 1,
      sym__newline,
    STATE(131), 1,
      sym_filter,
    STATE(136), 1,
      sym_filter_content,
    ACTIONS(497), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(499), 18,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3796] = 5,
    ACTIONS(505), 1,
      aux_sym_filter_content_token2,
    STATE(54), 1,
      aux_sym__comment_repeat1,
    STATE(797), 1,
      sym__comment_content,
    ACTIONS(501), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(503), 19,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3832] = 4,
    ACTIONS(511), 1,
      sym__indent,
    STATE(123), 1,
      sym_children,
    ACTIONS(509), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(507), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3865] = 9,
    ACTIONS(444), 1,
      sym__dedent,
    ACTIONS(513), 1,
      anon_sym_COLON,
    ACTIONS(515), 1,
      aux_sym_filter_content_token1,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      sym__newline,
    STATE(150), 1,
      sym_attributes,
    STATE(302), 1,
      sym_filter_content,
    STATE(303), 1,
      sym_filter,
    ACTIONS(446), 16,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3908] = 4,
    ACTIONS(525), 1,
      sym__indent,
    STATE(114), 1,
      sym_children,
    ACTIONS(523), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(521), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3941] = 4,
    ACTIONS(531), 1,
      sym__un_delimited_javascript_line,
    STATE(73), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(527), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(529), 19,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3974] = 4,
    ACTIONS(537), 1,
      sym__indent,
    STATE(140), 1,
      sym_children,
    ACTIONS(535), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(533), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4007] = 5,
    ACTIONS(539), 1,
      aux_sym_filter_content_token2,
    STATE(63), 1,
      aux_sym__comment_repeat1,
    STATE(827), 1,
      sym__comment_content,
    ACTIONS(482), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(484), 19,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4042] = 9,
    ACTIONS(444), 1,
      ts_builtin_sym_end,
    ACTIONS(542), 1,
      anon_sym_COLON,
    ACTIONS(544), 1,
      aux_sym_filter_content_token1,
    ACTIONS(546), 1,
      anon_sym_LPAREN,
    ACTIONS(548), 1,
      sym__newline,
    STATE(108), 1,
      sym_attributes,
    STATE(332), 1,
      sym_filter_content,
    STATE(335), 1,
      sym_filter,
    ACTIONS(446), 16,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4085] = 7,
    ACTIONS(456), 1,
      anon_sym_COLON,
    ACTIONS(458), 1,
      aux_sym_filter_content_token1,
    ACTIONS(462), 1,
      sym__newline,
    ACTIONS(497), 1,
      sym__dedent,
    STATE(225), 1,
      sym_filter,
    STATE(233), 1,
      sym_filter_content,
    ACTIONS(499), 18,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4124] = 6,
    ACTIONS(468), 1,
      anon_sym_when,
    ACTIONS(550), 1,
      anon_sym_default,
    STATE(680), 1,
      sym__when_keyword,
    STATE(71), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(466), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(464), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4161] = 4,
    ACTIONS(511), 1,
      sym__indent,
    STATE(143), 1,
      sym_children,
    ACTIONS(554), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(552), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4194] = 4,
    ACTIONS(556), 1,
      sym__indent,
    STATE(143), 1,
      sym_children,
    ACTIONS(554), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(552), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4227] = 5,
    ACTIONS(558), 1,
      aux_sym_filter_content_token2,
    STATE(63), 1,
      aux_sym__comment_repeat1,
    STATE(827), 1,
      sym__comment_content,
    ACTIONS(501), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(503), 19,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4262] = 4,
    ACTIONS(511), 1,
      sym__indent,
    STATE(152), 1,
      sym_children,
    ACTIONS(562), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(560), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4295] = 6,
    ACTIONS(476), 1,
      anon_sym_when,
    ACTIONS(564), 1,
      anon_sym_default,
    STATE(680), 1,
      sym__when_keyword,
    STATE(71), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(474), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(472), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4332] = 4,
    ACTIONS(567), 1,
      sym__indent,
    STATE(152), 1,
      sym_children,
    ACTIONS(562), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(560), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4365] = 4,
    ACTIONS(573), 1,
      sym__un_delimited_javascript_line,
    STATE(73), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(569), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(571), 19,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4398] = 4,
    ACTIONS(511), 1,
      sym__indent,
    STATE(162), 1,
      sym_children,
    ACTIONS(578), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(576), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4431] = 4,
    ACTIONS(511), 1,
      sym__indent,
    STATE(160), 1,
      sym_children,
    ACTIONS(582), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(580), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4464] = 4,
    ACTIONS(584), 1,
      sym__indent,
    STATE(193), 1,
      sym_children,
    ACTIONS(554), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(552), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4496] = 4,
    ACTIONS(586), 1,
      sym__indent,
    STATE(221), 1,
      sym_children,
    ACTIONS(562), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(560), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4528] = 4,
    ACTIONS(588), 1,
      sym__un_delimited_javascript_line,
    STATE(78), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(569), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(571), 19,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4560] = 4,
    ACTIONS(591), 1,
      sym__indent,
    STATE(179), 1,
      sym_children,
    ACTIONS(523), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(521), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4592] = 4,
    ACTIONS(593), 1,
      sym__indent,
    STATE(184), 1,
      sym_children,
    ACTIONS(535), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(533), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4624] = 2,
    ACTIONS(595), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(597), 19,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4652] = 7,
    ACTIONS(489), 1,
      anon_sym_COLON,
    ACTIONS(491), 1,
      aux_sym_filter_content_token1,
    ACTIONS(495), 1,
      sym__newline,
    STATE(235), 1,
      sym_filter,
    STATE(241), 1,
      sym_filter_content,
    ACTIONS(497), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(499), 16,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4690] = 3,
    ACTIONS(603), 1,
      sym__indent,
    ACTIONS(601), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(599), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4720] = 4,
    ACTIONS(605), 1,
      sym__un_delimited_javascript_line,
    STATE(78), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(527), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(529), 19,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4752] = 2,
    ACTIONS(607), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(609), 19,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4780] = 3,
    ACTIONS(615), 1,
      sym__indent,
    ACTIONS(613), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(611), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4810] = 4,
    ACTIONS(617), 1,
      sym__indent,
    STATE(193), 1,
      sym_children,
    ACTIONS(554), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(552), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4842] = 4,
    ACTIONS(619), 1,
      sym__indent,
    STATE(217), 1,
      sym_children,
    ACTIONS(554), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(552), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4874] = 4,
    ACTIONS(619), 1,
      sym__indent,
    STATE(199), 1,
      sym_children,
    ACTIONS(509), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(507), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4906] = 4,
    ACTIONS(619), 1,
      sym__indent,
    STATE(221), 1,
      sym_children,
    ACTIONS(562), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(560), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4938] = 4,
    ACTIONS(621), 1,
      sym__indent,
    STATE(217), 1,
      sym_children,
    ACTIONS(554), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(552), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4970] = 2,
    ACTIONS(482), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(484), 20,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      aux_sym_filter_content_token2,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4998] = 4,
    ACTIONS(619), 1,
      sym__indent,
    STATE(226), 1,
      sym_children,
    ACTIONS(582), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(580), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5030] = 4,
    ACTIONS(584), 1,
      sym__indent,
    STATE(203), 1,
      sym_children,
    ACTIONS(562), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(560), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5062] = 2,
    ACTIONS(623), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(625), 19,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5090] = 4,
    ACTIONS(627), 1,
      sym__indent,
    STATE(203), 1,
      sym_children,
    ACTIONS(562), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(560), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5122] = 4,
    ACTIONS(629), 1,
      sym__indent,
    STATE(215), 1,
      sym_children,
    ACTIONS(535), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(533), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5154] = 2,
    ACTIONS(631), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(633), 20,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      sym__un_delimited_javascript_line,
      anon_sym_DASH,
  [5182] = 4,
    ACTIONS(584), 1,
      sym__indent,
    STATE(208), 1,
      sym_children,
    ACTIONS(582), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(580), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5214] = 4,
    ACTIONS(635), 1,
      sym__indent,
    STATE(213), 1,
      sym_children,
    ACTIONS(523), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(521), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5246] = 5,
    ACTIONS(637), 1,
      aux_sym_filter_content_token2,
    STATE(107), 1,
      aux_sym__comment_repeat1,
    STATE(746), 1,
      sym__comment_content,
    ACTIONS(501), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(503), 17,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5280] = 4,
    ACTIONS(619), 1,
      sym__indent,
    STATE(228), 1,
      sym_children,
    ACTIONS(578), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(576), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5312] = 5,
    ACTIONS(584), 1,
      sym__indent,
    ACTIONS(639), 1,
      sym__dedent,
    STATE(194), 1,
      sym_children,
    ACTIONS(509), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(507), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5346] = 6,
    ACTIONS(468), 1,
      anon_sym_when,
    ACTIONS(641), 1,
      anon_sym_default,
    STATE(699), 1,
      sym__when_keyword,
    STATE(105), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(466), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(464), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5382] = 6,
    ACTIONS(476), 1,
      anon_sym_when,
    ACTIONS(643), 1,
      anon_sym_default,
    STATE(699), 1,
      sym__when_keyword,
    STATE(105), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(474), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(472), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5418] = 4,
    ACTIONS(584), 1,
      sym__indent,
    STATE(210), 1,
      sym_children,
    ACTIONS(578), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(576), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5450] = 5,
    ACTIONS(646), 1,
      aux_sym_filter_content_token2,
    STATE(107), 1,
      aux_sym__comment_repeat1,
    STATE(746), 1,
      sym__comment_content,
    ACTIONS(482), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(484), 17,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5484] = 7,
    ACTIONS(497), 1,
      ts_builtin_sym_end,
    ACTIONS(542), 1,
      anon_sym_COLON,
    ACTIONS(544), 1,
      aux_sym_filter_content_token1,
    ACTIONS(548), 1,
      sym__newline,
    STATE(335), 1,
      sym_filter,
    STATE(341), 1,
      sym_filter_content,
    ACTIONS(499), 16,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5521] = 3,
    ACTIONS(649), 1,
      sym__indent,
    ACTIONS(613), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(611), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5550] = 4,
    ACTIONS(651), 1,
      sym__indent,
    STATE(256), 1,
      sym_children,
    ACTIONS(562), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(560), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5581] = 3,
    ACTIONS(653), 1,
      sym__indent,
    ACTIONS(613), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(611), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5610] = 4,
    ACTIONS(655), 1,
      sym__indent,
    STATE(251), 1,
      sym_children,
    ACTIONS(554), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(552), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5641] = 2,
    ACTIONS(509), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(507), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5668] = 2,
    ACTIONS(535), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(533), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5695] = 3,
    ACTIONS(657), 1,
      sym__indent,
    ACTIONS(601), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(599), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5724] = 4,
    ACTIONS(659), 1,
      sym__indent,
    STATE(251), 1,
      sym_children,
    ACTIONS(554), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(552), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5755] = 4,
    ACTIONS(659), 1,
      sym__indent,
    STATE(256), 1,
      sym_children,
    ACTIONS(562), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(560), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5786] = 4,
    ACTIONS(659), 1,
      sym__indent,
    STATE(263), 1,
      sym_children,
    ACTIONS(582), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(580), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5817] = 4,
    ACTIONS(661), 1,
      sym__indent,
    STATE(243), 1,
      sym_children,
    ACTIONS(535), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(533), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5848] = 2,
    ACTIONS(523), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(521), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5875] = 4,
    ACTIONS(663), 1,
      sym__un_delimited_javascript_line,
    STATE(122), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(527), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(529), 17,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5906] = 4,
    ACTIONS(665), 1,
      sym__un_delimited_javascript_line,
    STATE(122), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(569), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(571), 17,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5937] = 2,
    ACTIONS(670), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(668), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5964] = 2,
    ACTIONS(674), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(672), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5991] = 4,
    ACTIONS(676), 1,
      sym__indent,
    STATE(237), 1,
      sym_children,
    ACTIONS(523), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(521), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6022] = 4,
    ACTIONS(659), 1,
      sym__indent,
    STATE(266), 1,
      sym_children,
    ACTIONS(578), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(576), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6053] = 2,
    ACTIONS(680), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(678), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6080] = 2,
    ACTIONS(684), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(682), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6107] = 2,
    ACTIONS(688), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(686), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6134] = 2,
    ACTIONS(692), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(690), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6161] = 2,
    ACTIONS(696), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(694), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6188] = 2,
    ACTIONS(499), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(497), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6215] = 2,
    ACTIONS(700), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(698), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6242] = 3,
    ACTIONS(706), 1,
      sym__dedent,
    ACTIONS(704), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(702), 12,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6271] = 2,
    ACTIONS(710), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(708), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6298] = 2,
    ACTIONS(714), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(712), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6325] = 2,
    ACTIONS(718), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(716), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6352] = 5,
    ACTIONS(720), 1,
      aux_sym_filter_content_token2,
    STATE(142), 1,
      aux_sym__comment_repeat1,
    STATE(810), 1,
      sym__comment_content,
    ACTIONS(501), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(503), 17,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6385] = 2,
    ACTIONS(724), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(722), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6412] = 2,
    ACTIONS(554), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(552), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6439] = 2,
    ACTIONS(728), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(726), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6466] = 5,
    ACTIONS(730), 1,
      aux_sym_filter_content_token2,
    STATE(142), 1,
      aux_sym__comment_repeat1,
    STATE(810), 1,
      sym__comment_content,
    ACTIONS(482), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(484), 17,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6499] = 2,
    ACTIONS(562), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(560), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6526] = 2,
    ACTIONS(631), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(633), 20,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      sym__un_delimited_javascript_line,
      anon_sym_DASH,
  [6553] = 2,
    ACTIONS(735), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(733), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6580] = 2,
    ACTIONS(623), 3,
      sym__newline,
      sym__dedent,
      aux_sym_filter_content_token1,
    ACTIONS(625), 19,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6607] = 2,
    ACTIONS(739), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(737), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6634] = 2,
    ACTIONS(743), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(741), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6661] = 2,
    ACTIONS(747), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(745), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6688] = 7,
    ACTIONS(497), 1,
      sym__dedent,
    ACTIONS(513), 1,
      anon_sym_COLON,
    ACTIONS(515), 1,
      aux_sym_filter_content_token1,
    ACTIONS(519), 1,
      sym__newline,
    STATE(298), 1,
      sym_filter_content,
    STATE(303), 1,
      sym_filter,
    ACTIONS(499), 16,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6725] = 2,
    ACTIONS(482), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(484), 20,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      aux_sym_filter_content_token2,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6752] = 2,
    ACTIONS(582), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(580), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6779] = 2,
    ACTIONS(751), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(749), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6806] = 2,
    ACTIONS(755), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(753), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6833] = 2,
    ACTIONS(759), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(757), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6860] = 2,
    ACTIONS(607), 3,
      sym__newline,
      sym__dedent,
      aux_sym_filter_content_token1,
    ACTIONS(609), 19,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6887] = 2,
    ACTIONS(595), 3,
      sym__newline,
      sym__dedent,
      aux_sym_filter_content_token1,
    ACTIONS(597), 19,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6914] = 2,
    ACTIONS(763), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(761), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6941] = 2,
    ACTIONS(767), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(765), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6968] = 2,
    ACTIONS(578), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(576), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6995] = 2,
    ACTIONS(771), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(769), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7022] = 2,
    ACTIONS(775), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(773), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7049] = 3,
    ACTIONS(781), 1,
      sym__dedent,
    ACTIONS(779), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(777), 12,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7078] = 2,
    ACTIONS(739), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(737), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7104] = 2,
    ACTIONS(728), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(726), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7130] = 2,
    ACTIONS(763), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(761), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7156] = 2,
    ACTIONS(509), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(507), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7182] = 4,
    ACTIONS(783), 1,
      sym__indent,
    STATE(323), 1,
      sym_children,
    ACTIONS(523), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(521), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7212] = 4,
    ACTIONS(785), 1,
      sym__un_delimited_javascript_line,
    STATE(191), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(527), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(529), 17,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7242] = 4,
    ACTIONS(787), 1,
      sym__indent,
    STATE(324), 1,
      sym_children,
    ACTIONS(535), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(533), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7272] = 4,
    ACTIONS(789), 1,
      sym__indent,
    STATE(318), 1,
      sym_children,
    ACTIONS(554), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(552), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7302] = 2,
    ACTIONS(623), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(625), 17,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7328] = 3,
    ACTIONS(639), 1,
      sym__dedent,
    ACTIONS(509), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(507), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7356] = 2,
    ACTIONS(718), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(716), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7382] = 4,
    ACTIONS(791), 1,
      sym__indent,
    STATE(318), 1,
      sym_children,
    ACTIONS(554), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(552), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7412] = 2,
    ACTIONS(674), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(672), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7438] = 2,
    ACTIONS(523), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(521), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7464] = 2,
    ACTIONS(482), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(484), 18,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      aux_sym_filter_content_token2,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7490] = 2,
    ACTIONS(535), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(533), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7516] = 4,
    ACTIONS(789), 1,
      sym__indent,
    STATE(313), 1,
      sym_children,
    ACTIONS(562), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(560), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7546] = 2,
    ACTIONS(767), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(765), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7572] = 2,
    ACTIONS(724), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(722), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7598] = 3,
    ACTIONS(793), 1,
      sym__dedent,
    ACTIONS(779), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(777), 11,
      sym__newline,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7626] = 2,
    ACTIONS(554), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(552), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7652] = 2,
    ACTIONS(607), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(609), 17,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7678] = 4,
    ACTIONS(795), 1,
      sym__indent,
    STATE(313), 1,
      sym_children,
    ACTIONS(562), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(560), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7708] = 2,
    ACTIONS(743), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(741), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7734] = 2,
    ACTIONS(747), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(745), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7760] = 4,
    ACTIONS(789), 1,
      sym__indent,
    STATE(309), 1,
      sym_children,
    ACTIONS(582), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(580), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7790] = 5,
    ACTIONS(501), 1,
      ts_builtin_sym_end,
    ACTIONS(797), 1,
      aux_sym_filter_content_token2,
    STATE(223), 1,
      aux_sym__comment_repeat1,
    STATE(767), 1,
      sym__comment_content,
    ACTIONS(503), 17,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7822] = 4,
    ACTIONS(799), 1,
      sym__un_delimited_javascript_line,
    STATE(191), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(569), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(571), 17,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7852] = 2,
    ACTIONS(735), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(733), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7878] = 2,
    ACTIONS(562), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(560), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7904] = 2,
    ACTIONS(670), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(668), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7930] = 2,
    ACTIONS(674), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(672), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7956] = 2,
    ACTIONS(595), 4,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(597), 17,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7982] = 4,
    ACTIONS(789), 1,
      sym__indent,
    STATE(288), 1,
      sym_children,
    ACTIONS(578), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(576), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8012] = 3,
    ACTIONS(802), 1,
      sym__indent,
    ACTIONS(613), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(611), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8040] = 2,
    ACTIONS(670), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(668), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8066] = 2,
    ACTIONS(755), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(753), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8092] = 2,
    ACTIONS(743), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(741), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8118] = 4,
    ACTIONS(804), 1,
      sym__un_delimited_javascript_line,
    STATE(206), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(527), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(529), 17,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8148] = 2,
    ACTIONS(582), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(580), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8174] = 2,
    ACTIONS(751), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(749), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8200] = 2,
    ACTIONS(759), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(757), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8226] = 4,
    ACTIONS(806), 1,
      sym__un_delimited_javascript_line,
    STATE(206), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(569), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(571), 17,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8256] = 2,
    ACTIONS(523), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(521), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8282] = 2,
    ACTIONS(578), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(576), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8308] = 2,
    ACTIONS(771), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(769), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8334] = 2,
    ACTIONS(775), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(773), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8360] = 2,
    ACTIONS(680), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(678), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8386] = 2,
    ACTIONS(684), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(682), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8412] = 2,
    ACTIONS(535), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(533), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8438] = 2,
    ACTIONS(688), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(686), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8464] = 2,
    ACTIONS(554), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(552), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8490] = 2,
    ACTIONS(724), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(722), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8516] = 2,
    ACTIONS(562), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(560), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8542] = 3,
    ACTIONS(809), 1,
      sym__indent,
    ACTIONS(601), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(599), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8570] = 2,
    ACTIONS(755), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(753), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8596] = 2,
    ACTIONS(751), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(749), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8622] = 2,
    ACTIONS(582), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(580), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8648] = 2,
    ACTIONS(692), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(690), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8674] = 5,
    ACTIONS(482), 1,
      ts_builtin_sym_end,
    ACTIONS(811), 1,
      aux_sym_filter_content_token2,
    STATE(223), 1,
      aux_sym__comment_repeat1,
    STATE(767), 1,
      sym__comment_content,
    ACTIONS(484), 17,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8706] = 2,
    ACTIONS(759), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(757), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8732] = 2,
    ACTIONS(696), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(694), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8758] = 2,
    ACTIONS(578), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(576), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8784] = 2,
    ACTIONS(771), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(769), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8810] = 2,
    ACTIONS(775), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(773), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8836] = 2,
    ACTIONS(499), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(497), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8862] = 2,
    ACTIONS(700), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(698), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8888] = 3,
    ACTIONS(814), 1,
      sym__dedent,
    ACTIONS(704), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(702), 11,
      sym__newline,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8916] = 2,
    ACTIONS(710), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(708), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8942] = 2,
    ACTIONS(714), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(712), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8968] = 2,
    ACTIONS(631), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(633), 18,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      sym__un_delimited_javascript_line,
      anon_sym_DASH,
  [8994] = 2,
    ACTIONS(696), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(694), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9019] = 4,
    ACTIONS(816), 1,
      sym__indent,
    STATE(348), 1,
      sym_children,
    ACTIONS(523), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(521), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9048] = 2,
    ACTIONS(535), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(533), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9073] = 2,
    ACTIONS(595), 3,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(597), 17,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9098] = 3,
    ACTIONS(818), 1,
      sym__dedent,
    ACTIONS(704), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(702), 12,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9125] = 2,
    ACTIONS(710), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(708), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9150] = 2,
    ACTIONS(714), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(712), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9175] = 2,
    ACTIONS(718), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(716), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9200] = 2,
    ACTIONS(554), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(552), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9225] = 2,
    ACTIONS(607), 3,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(609), 17,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9250] = 2,
    ACTIONS(728), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(726), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9275] = 2,
    ACTIONS(735), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(733), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9300] = 2,
    ACTIONS(724), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(722), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9325] = 2,
    ACTIONS(739), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(737), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9350] = 4,
    ACTIONS(820), 1,
      sym__indent,
    STATE(336), 1,
      sym_children,
    ACTIONS(554), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(552), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9379] = 2,
    ACTIONS(747), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(745), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9404] = 2,
    ACTIONS(562), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(560), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9429] = 2,
    ACTIONS(623), 3,
      sym__newline,
      ts_builtin_sym_end,
      aux_sym_filter_content_token1,
    ACTIONS(625), 17,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9454] = 3,
    ACTIONS(822), 1,
      sym__dedent,
    ACTIONS(779), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(777), 12,
      sym__newline,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9481] = 2,
    ACTIONS(767), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(765), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9506] = 2,
    ACTIONS(631), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(633), 18,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      sym__un_delimited_javascript_line,
      anon_sym_DASH,
  [9531] = 2,
    ACTIONS(582), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(580), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9556] = 2,
    ACTIONS(759), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(757), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9581] = 4,
    ACTIONS(824), 1,
      sym__indent,
    STATE(339), 1,
      sym_children,
    ACTIONS(562), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(560), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9610] = 2,
    ACTIONS(700), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(698), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9635] = 2,
    ACTIONS(763), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(761), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9660] = 2,
    ACTIONS(499), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(497), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9685] = 2,
    ACTIONS(692), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(690), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9710] = 2,
    ACTIONS(578), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(576), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9735] = 2,
    ACTIONS(523), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(521), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9760] = 2,
    ACTIONS(771), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(769), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9785] = 2,
    ACTIONS(775), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(773), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9810] = 2,
    ACTIONS(751), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(749), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9835] = 2,
    ACTIONS(755), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(753), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9860] = 2,
    ACTIONS(688), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(686), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9885] = 2,
    ACTIONS(684), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(682), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9910] = 3,
    ACTIONS(826), 1,
      sym__indent,
    ACTIONS(613), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(611), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9937] = 2,
    ACTIONS(595), 3,
      sym__newline,
      sym__dedent,
      aux_sym_filter_content_token1,
    ACTIONS(597), 17,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9962] = 4,
    ACTIONS(824), 1,
      sym__indent,
    STATE(336), 1,
      sym_children,
    ACTIONS(554), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(552), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [9991] = 2,
    ACTIONS(607), 3,
      sym__newline,
      sym__dedent,
      aux_sym_filter_content_token1,
    ACTIONS(609), 17,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10016] = 2,
    ACTIONS(680), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(678), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10041] = 2,
    ACTIONS(482), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(484), 18,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      aux_sym_filter_content_token2,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10066] = 3,
    ACTIONS(828), 1,
      sym__indent,
    ACTIONS(601), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(599), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10093] = 4,
    ACTIONS(824), 1,
      sym__indent,
    STATE(333), 1,
      sym_children,
    ACTIONS(578), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(576), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10122] = 2,
    ACTIONS(623), 3,
      sym__newline,
      sym__dedent,
      aux_sym_filter_content_token1,
    ACTIONS(625), 17,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10147] = 4,
    ACTIONS(830), 1,
      sym__indent,
    STATE(352), 1,
      sym_children,
    ACTIONS(535), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(533), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10176] = 4,
    ACTIONS(832), 1,
      sym__indent,
    STATE(339), 1,
      sym_children,
    ACTIONS(562), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(560), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10205] = 4,
    ACTIONS(834), 1,
      sym__indent,
    ACTIONS(836), 1,
      sym__dedent,
    ACTIONS(613), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(611), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10234] = 2,
    ACTIONS(743), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(741), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10259] = 2,
    ACTIONS(631), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(633), 18,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      sym__un_delimited_javascript_line,
      anon_sym_DASH,
  [10284] = 4,
    ACTIONS(824), 1,
      sym__indent,
    STATE(344), 1,
      sym_children,
    ACTIONS(582), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(580), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10313] = 2,
    ACTIONS(840), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(838), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10338] = 3,
    ACTIONS(842), 1,
      sym__indent,
    ACTIONS(613), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(611), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10365] = 2,
    ACTIONS(775), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(773), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10389] = 2,
    ACTIONS(710), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(708), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10413] = 2,
    ACTIONS(743), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(741), 12,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10437] = 2,
    ACTIONS(763), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(761), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10461] = 2,
    ACTIONS(747), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(745), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10485] = 2,
    ACTIONS(739), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(737), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10509] = 2,
    ACTIONS(735), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(733), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10533] = 2,
    ACTIONS(728), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(726), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10557] = 2,
    ACTIONS(767), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(765), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10581] = 2,
    ACTIONS(718), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(716), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10605] = 2,
    ACTIONS(714), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(712), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10629] = 2,
    ACTIONS(743), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(741), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10653] = 3,
    ACTIONS(844), 1,
      sym__dedent,
    ACTIONS(704), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(702), 11,
      sym__newline,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10679] = 2,
    ACTIONS(700), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(698), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10703] = 2,
    ACTIONS(499), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(497), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10727] = 2,
    ACTIONS(696), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(694), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10751] = 2,
    ACTIONS(692), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(690), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10775] = 3,
    ACTIONS(846), 1,
      sym__dedent,
    ACTIONS(779), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(777), 11,
      sym__newline,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10801] = 2,
    ACTIONS(771), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(769), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10825] = 3,
    ACTIONS(848), 1,
      sym__dedent,
    ACTIONS(743), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(741), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10851] = 3,
    ACTIONS(850), 1,
      sym__dedent,
    ACTIONS(704), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(702), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10877] = 2,
    ACTIONS(578), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(576), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10901] = 2,
    ACTIONS(688), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(686), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10925] = 2,
    ACTIONS(759), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(757), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10949] = 2,
    ACTIONS(684), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(682), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10973] = 2,
    ACTIONS(582), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(580), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [10997] = 3,
    ACTIONS(852), 1,
      sym__dedent,
    ACTIONS(779), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(777), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11023] = 2,
    ACTIONS(482), 1,
      ts_builtin_sym_end,
    ACTIONS(484), 18,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_COLON,
      aux_sym_filter_content_token2,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11047] = 2,
    ACTIONS(680), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(678), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11071] = 2,
    ACTIONS(755), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(753), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11095] = 2,
    ACTIONS(562), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(560), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11119] = 2,
    ACTIONS(751), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(749), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11143] = 2,
    ACTIONS(724), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(722), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11167] = 3,
    ACTIONS(854), 1,
      sym__indent,
    ACTIONS(601), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(599), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11193] = 2,
    ACTIONS(523), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(521), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11217] = 2,
    ACTIONS(535), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(533), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11241] = 2,
    ACTIONS(554), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(552), 12,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11265] = 2,
    ACTIONS(684), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(682), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11288] = 2,
    ACTIONS(692), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(690), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11311] = 2,
    ACTIONS(763), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(761), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11334] = 2,
    ACTIONS(724), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(722), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11357] = 2,
    ACTIONS(747), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(745), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11380] = 2,
    ACTIONS(700), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(698), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11403] = 2,
    ACTIONS(767), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(765), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11426] = 2,
    ACTIONS(499), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(497), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11449] = 2,
    ACTIONS(775), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(773), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11472] = 2,
    ACTIONS(728), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(726), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11495] = 2,
    ACTIONS(696), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(694), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11518] = 2,
    ACTIONS(562), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(560), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11541] = 2,
    ACTIONS(710), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(708), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11564] = 2,
    ACTIONS(523), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(521), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11587] = 2,
    ACTIONS(582), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(580), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11610] = 2,
    ACTIONS(751), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(749), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11633] = 2,
    ACTIONS(714), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(712), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11656] = 2,
    ACTIONS(759), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(757), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11679] = 2,
    ACTIONS(858), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(856), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11702] = 2,
    ACTIONS(578), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(576), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11725] = 2,
    ACTIONS(771), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(769), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11748] = 2,
    ACTIONS(862), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(860), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11771] = 2,
    ACTIONS(680), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(678), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11794] = 2,
    ACTIONS(535), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(533), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11817] = 2,
    ACTIONS(718), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(716), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11840] = 2,
    ACTIONS(735), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(733), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11863] = 2,
    ACTIONS(739), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(737), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11886] = 2,
    ACTIONS(554), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(552), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11909] = 2,
    ACTIONS(688), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(686), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11932] = 2,
    ACTIONS(755), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(753), 11,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [11955] = 12,
    ACTIONS(864), 1,
      anon_sym_COLON,
    ACTIONS(866), 1,
      anon_sym_BANG_EQ,
    ACTIONS(868), 1,
      anon_sym_EQ,
    ACTIONS(870), 1,
      anon_sym_SLASH,
    ACTIONS(872), 1,
      anon_sym_,
    ACTIONS(874), 1,
      anon_sym_DOT,
    ACTIONS(876), 1,
      anon_sym_LPAREN,
    ACTIONS(880), 1,
      sym__newline,
    STATE(371), 1,
      aux_sym_tag_repeat1,
    STATE(388), 1,
      sym_attributes,
    ACTIONS(878), 2,
      sym_class,
      sym_id,
    STATE(323), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [11995] = 12,
    ACTIONS(876), 1,
      anon_sym_LPAREN,
    ACTIONS(882), 1,
      anon_sym_COLON,
    ACTIONS(884), 1,
      anon_sym_BANG_EQ,
    ACTIONS(886), 1,
      anon_sym_EQ,
    ACTIONS(888), 1,
      anon_sym_SLASH,
    ACTIONS(890), 1,
      anon_sym_,
    ACTIONS(892), 1,
      anon_sym_DOT,
    ACTIONS(896), 1,
      sym__newline,
    STATE(367), 1,
      aux_sym_tag_repeat1,
    STATE(374), 1,
      sym_attributes,
    ACTIONS(894), 2,
      sym_class,
      sym_id,
    STATE(207), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [12035] = 12,
    ACTIONS(866), 1,
      anon_sym_BANG_EQ,
    ACTIONS(868), 1,
      anon_sym_EQ,
    ACTIONS(874), 1,
      anon_sym_DOT,
    ACTIONS(876), 1,
      anon_sym_LPAREN,
    ACTIONS(898), 1,
      anon_sym_COLON,
    ACTIONS(900), 1,
      anon_sym_SLASH,
    ACTIONS(902), 1,
      anon_sym_,
    ACTIONS(906), 1,
      sym__newline,
    STATE(355), 1,
      aux_sym_tag_repeat1,
    STATE(393), 1,
      sym_attributes,
    ACTIONS(904), 2,
      sym_class,
      sym_id,
    STATE(322), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [12075] = 12,
    ACTIONS(876), 1,
      anon_sym_LPAREN,
    ACTIONS(908), 1,
      anon_sym_COLON,
    ACTIONS(910), 1,
      anon_sym_BANG_EQ,
    ACTIONS(912), 1,
      anon_sym_EQ,
    ACTIONS(914), 1,
      anon_sym_SLASH,
    ACTIONS(916), 1,
      anon_sym_,
    ACTIONS(918), 1,
      anon_sym_DOT,
    ACTIONS(922), 1,
      sym__newline,
    STATE(364), 1,
      aux_sym_tag_repeat1,
    STATE(385), 1,
      sym_attributes,
    ACTIONS(920), 2,
      sym_class,
      sym_id,
    STATE(120), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [12115] = 12,
    ACTIONS(876), 1,
      anon_sym_LPAREN,
    ACTIONS(924), 1,
      anon_sym_COLON,
    ACTIONS(926), 1,
      anon_sym_BANG_EQ,
    ACTIONS(928), 1,
      anon_sym_EQ,
    ACTIONS(930), 1,
      anon_sym_SLASH,
    ACTIONS(932), 1,
      anon_sym_,
    ACTIONS(934), 1,
      anon_sym_DOT,
    ACTIONS(936), 1,
      sym__newline,
    STATE(371), 1,
      aux_sym_tag_repeat1,
    STATE(378), 1,
      sym_attributes,
    ACTIONS(878), 2,
      sym_class,
      sym_id,
    STATE(237), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [12155] = 12,
    ACTIONS(876), 1,
      anon_sym_LPAREN,
    ACTIONS(926), 1,
      anon_sym_BANG_EQ,
    ACTIONS(928), 1,
      anon_sym_EQ,
    ACTIONS(934), 1,
      anon_sym_DOT,
    ACTIONS(938), 1,
      anon_sym_COLON,
    ACTIONS(940), 1,
      anon_sym_SLASH,
    ACTIONS(942), 1,
      anon_sym_,
    ACTIONS(946), 1,
      sym__newline,
    STATE(359), 1,
      aux_sym_tag_repeat1,
    STATE(382), 1,
      sym_attributes,
    ACTIONS(944), 2,
      sym_class,
      sym_id,
    STATE(264), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [12195] = 12,
    ACTIONS(876), 1,
      anon_sym_LPAREN,
    ACTIONS(948), 1,
      anon_sym_COLON,
    ACTIONS(950), 1,
      anon_sym_BANG_EQ,
    ACTIONS(952), 1,
      anon_sym_EQ,
    ACTIONS(954), 1,
      anon_sym_SLASH,
    ACTIONS(956), 1,
      anon_sym_,
    ACTIONS(958), 1,
      anon_sym_DOT,
    ACTIONS(962), 1,
      sym__newline,
    STATE(363), 1,
      aux_sym_tag_repeat1,
    STATE(398), 1,
      sym_attributes,
    ACTIONS(960), 2,
      sym_class,
      sym_id,
    STATE(564), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [12235] = 12,
    ACTIONS(876), 1,
      anon_sym_LPAREN,
    ACTIONS(964), 1,
      anon_sym_COLON,
    ACTIONS(966), 1,
      anon_sym_BANG_EQ,
    ACTIONS(968), 1,
      anon_sym_EQ,
    ACTIONS(970), 1,
      anon_sym_SLASH,
    ACTIONS(972), 1,
      anon_sym_,
    ACTIONS(974), 1,
      anon_sym_DOT,
    ACTIONS(976), 1,
      sym__newline,
    STATE(371), 1,
      aux_sym_tag_repeat1,
    STATE(379), 1,
      sym_attributes,
    ACTIONS(878), 2,
      sym_class,
      sym_id,
    STATE(348), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [12275] = 12,
    ACTIONS(876), 1,
      anon_sym_LPAREN,
    ACTIONS(950), 1,
      anon_sym_BANG_EQ,
    ACTIONS(952), 1,
      anon_sym_EQ,
    ACTIONS(958), 1,
      anon_sym_DOT,
    ACTIONS(978), 1,
      anon_sym_COLON,
    ACTIONS(980), 1,
      anon_sym_SLASH,
    ACTIONS(982), 1,
      anon_sym_,
    ACTIONS(984), 1,
      sym__newline,
    STATE(371), 1,
      aux_sym_tag_repeat1,
    STATE(390), 1,
      sym_attributes,
    ACTIONS(878), 2,
      sym_class,
      sym_id,
    STATE(557), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [12315] = 12,
    ACTIONS(876), 1,
      anon_sym_LPAREN,
    ACTIONS(910), 1,
      anon_sym_BANG_EQ,
    ACTIONS(912), 1,
      anon_sym_EQ,
    ACTIONS(918), 1,
      anon_sym_DOT,
    ACTIONS(986), 1,
      anon_sym_COLON,
    ACTIONS(988), 1,
      anon_sym_SLASH,
    ACTIONS(990), 1,
      anon_sym_,
    ACTIONS(992), 1,
      sym__newline,
    STATE(371), 1,
      aux_sym_tag_repeat1,
    STATE(389), 1,
      sym_attributes,
    ACTIONS(878), 2,
      sym_class,
      sym_id,
    STATE(114), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [12355] = 12,
    ACTIONS(876), 1,
      anon_sym_LPAREN,
    ACTIONS(994), 1,
      anon_sym_COLON,
    ACTIONS(996), 1,
      anon_sym_BANG_EQ,
    ACTIONS(998), 1,
      anon_sym_EQ,
    ACTIONS(1000), 1,
      anon_sym_SLASH,
    ACTIONS(1002), 1,
      anon_sym_,
    ACTIONS(1004), 1,
      anon_sym_DOT,
    ACTIONS(1008), 1,
      sym__newline,
    STATE(366), 1,
      aux_sym_tag_repeat1,
    STATE(380), 1,
      sym_attributes,
    ACTIONS(1006), 2,
      sym_class,
      sym_id,
    STATE(177), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [12395] = 12,
    ACTIONS(876), 1,
      anon_sym_LPAREN,
    ACTIONS(996), 1,
      anon_sym_BANG_EQ,
    ACTIONS(998), 1,
      anon_sym_EQ,
    ACTIONS(1004), 1,
      anon_sym_DOT,
    ACTIONS(1010), 1,
      anon_sym_COLON,
    ACTIONS(1012), 1,
      anon_sym_SLASH,
    ACTIONS(1014), 1,
      anon_sym_,
    ACTIONS(1016), 1,
      sym__newline,
    STATE(371), 1,
      aux_sym_tag_repeat1,
    STATE(375), 1,
      sym_attributes,
    ACTIONS(878), 2,
      sym_class,
      sym_id,
    STATE(179), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [12435] = 12,
    ACTIONS(876), 1,
      anon_sym_LPAREN,
    ACTIONS(884), 1,
      anon_sym_BANG_EQ,
    ACTIONS(886), 1,
      anon_sym_EQ,
    ACTIONS(892), 1,
      anon_sym_DOT,
    ACTIONS(1018), 1,
      anon_sym_COLON,
    ACTIONS(1020), 1,
      anon_sym_SLASH,
    ACTIONS(1022), 1,
      anon_sym_,
    ACTIONS(1024), 1,
      sym__newline,
    STATE(371), 1,
      aux_sym_tag_repeat1,
    STATE(386), 1,
      sym_attributes,
    ACTIONS(878), 2,
      sym_class,
      sym_id,
    STATE(213), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [12475] = 12,
    ACTIONS(876), 1,
      anon_sym_LPAREN,
    ACTIONS(966), 1,
      anon_sym_BANG_EQ,
    ACTIONS(968), 1,
      anon_sym_EQ,
    ACTIONS(974), 1,
      anon_sym_DOT,
    ACTIONS(1026), 1,
      anon_sym_COLON,
    ACTIONS(1028), 1,
      anon_sym_SLASH,
    ACTIONS(1030), 1,
      anon_sym_,
    ACTIONS(1034), 1,
      sym__newline,
    STATE(362), 1,
      aux_sym_tag_repeat1,
    STATE(396), 1,
      sym_attributes,
    ACTIONS(1032), 2,
      sym_class,
      sym_id,
    STATE(338), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [12515] = 6,
    ACTIONS(1036), 1,
      anon_sym_EQ,
    ACTIONS(1038), 1,
      anon_sym_,
    ACTIONS(1040), 1,
      anon_sym_DOT,
    STATE(370), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(1042), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(682), 6,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
  [12540] = 6,
    ACTIONS(1036), 1,
      anon_sym_EQ,
    ACTIONS(1040), 1,
      anon_sym_DOT,
    ACTIONS(1044), 1,
      anon_sym_,
    STATE(534), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(1046), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(645), 6,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
  [12565] = 4,
    STATE(371), 1,
      aux_sym_tag_repeat1,
    ACTIONS(1050), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(1052), 2,
      sym_class,
      sym_id,
    ACTIONS(1048), 6,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_LPAREN,
  [12585] = 7,
    ACTIONS(1055), 1,
      anon_sym_RPAREN,
    ACTIONS(1060), 1,
      sym_attribute_name,
    STATE(372), 1,
      aux_sym_attributes_repeat1,
    STATE(617), 1,
      sym_angular_attribute_name,
    STATE(727), 1,
      sym_attribute,
    STATE(633), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1057), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [12610] = 7,
    ACTIONS(1063), 1,
      anon_sym_RPAREN,
    ACTIONS(1067), 1,
      sym_attribute_name,
    STATE(387), 1,
      aux_sym_attributes_repeat1,
    STATE(617), 1,
      sym_angular_attribute_name,
    STATE(656), 1,
      sym_attribute,
    STATE(633), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1065), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [12635] = 8,
    ACTIONS(884), 1,
      anon_sym_BANG_EQ,
    ACTIONS(886), 1,
      anon_sym_EQ,
    ACTIONS(892), 1,
      anon_sym_DOT,
    ACTIONS(1018), 1,
      anon_sym_COLON,
    ACTIONS(1020), 1,
      anon_sym_SLASH,
    ACTIONS(1022), 1,
      anon_sym_,
    ACTIONS(1024), 1,
      sym__newline,
    STATE(213), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [12662] = 8,
    ACTIONS(996), 1,
      anon_sym_BANG_EQ,
    ACTIONS(998), 1,
      anon_sym_EQ,
    ACTIONS(1004), 1,
      anon_sym_DOT,
    ACTIONS(1069), 1,
      anon_sym_COLON,
    ACTIONS(1071), 1,
      anon_sym_SLASH,
    ACTIONS(1073), 1,
      anon_sym_,
    ACTIONS(1075), 1,
      sym__newline,
    STATE(184), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [12689] = 7,
    ACTIONS(1067), 1,
      sym_attribute_name,
    ACTIONS(1077), 1,
      anon_sym_RPAREN,
    STATE(372), 1,
      aux_sym_attributes_repeat1,
    STATE(617), 1,
      sym_angular_attribute_name,
    STATE(625), 1,
      sym_attribute,
    STATE(633), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1065), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [12714] = 7,
    ACTIONS(1067), 1,
      sym_attribute_name,
    ACTIONS(1079), 1,
      anon_sym_RPAREN,
    STATE(372), 1,
      aux_sym_attributes_repeat1,
    STATE(617), 1,
      sym_angular_attribute_name,
    STATE(689), 1,
      sym_attribute,
    STATE(633), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1065), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [12739] = 8,
    ACTIONS(926), 1,
      anon_sym_BANG_EQ,
    ACTIONS(928), 1,
      anon_sym_EQ,
    ACTIONS(934), 1,
      anon_sym_DOT,
    ACTIONS(1081), 1,
      anon_sym_COLON,
    ACTIONS(1083), 1,
      anon_sym_SLASH,
    ACTIONS(1085), 1,
      anon_sym_,
    ACTIONS(1087), 1,
      sym__newline,
    STATE(243), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [12766] = 8,
    ACTIONS(966), 1,
      anon_sym_BANG_EQ,
    ACTIONS(968), 1,
      anon_sym_EQ,
    ACTIONS(974), 1,
      anon_sym_DOT,
    ACTIONS(1089), 1,
      anon_sym_COLON,
    ACTIONS(1091), 1,
      anon_sym_SLASH,
    ACTIONS(1093), 1,
      anon_sym_,
    ACTIONS(1095), 1,
      sym__newline,
    STATE(352), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [12793] = 8,
    ACTIONS(996), 1,
      anon_sym_BANG_EQ,
    ACTIONS(998), 1,
      anon_sym_EQ,
    ACTIONS(1004), 1,
      anon_sym_DOT,
    ACTIONS(1010), 1,
      anon_sym_COLON,
    ACTIONS(1012), 1,
      anon_sym_SLASH,
    ACTIONS(1014), 1,
      anon_sym_,
    ACTIONS(1016), 1,
      sym__newline,
    STATE(179), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [12820] = 7,
    ACTIONS(1067), 1,
      sym_attribute_name,
    ACTIONS(1097), 1,
      anon_sym_RPAREN,
    STATE(372), 1,
      aux_sym_attributes_repeat1,
    STATE(617), 1,
      sym_angular_attribute_name,
    STATE(685), 1,
      sym_attribute,
    STATE(633), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1065), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [12845] = 8,
    ACTIONS(924), 1,
      anon_sym_COLON,
    ACTIONS(926), 1,
      anon_sym_BANG_EQ,
    ACTIONS(928), 1,
      anon_sym_EQ,
    ACTIONS(930), 1,
      anon_sym_SLASH,
    ACTIONS(932), 1,
      anon_sym_,
    ACTIONS(934), 1,
      anon_sym_DOT,
    ACTIONS(936), 1,
      sym__newline,
    STATE(237), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [12872] = 7,
    ACTIONS(1067), 1,
      sym_attribute_name,
    ACTIONS(1099), 1,
      anon_sym_RPAREN,
    STATE(381), 1,
      aux_sym_attributes_repeat1,
    STATE(617), 1,
      sym_angular_attribute_name,
    STATE(657), 1,
      sym_attribute,
    STATE(633), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1065), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [12897] = 7,
    ACTIONS(1067), 1,
      sym_attribute_name,
    ACTIONS(1101), 1,
      anon_sym_RPAREN,
    STATE(376), 1,
      aux_sym_attributes_repeat1,
    STATE(617), 1,
      sym_angular_attribute_name,
    STATE(641), 1,
      sym_attribute,
    STATE(633), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1065), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [12922] = 8,
    ACTIONS(910), 1,
      anon_sym_BANG_EQ,
    ACTIONS(912), 1,
      anon_sym_EQ,
    ACTIONS(918), 1,
      anon_sym_DOT,
    ACTIONS(986), 1,
      anon_sym_COLON,
    ACTIONS(988), 1,
      anon_sym_SLASH,
    ACTIONS(990), 1,
      anon_sym_,
    ACTIONS(992), 1,
      sym__newline,
    STATE(114), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [12949] = 8,
    ACTIONS(884), 1,
      anon_sym_BANG_EQ,
    ACTIONS(886), 1,
      anon_sym_EQ,
    ACTIONS(892), 1,
      anon_sym_DOT,
    ACTIONS(1103), 1,
      anon_sym_COLON,
    ACTIONS(1105), 1,
      anon_sym_SLASH,
    ACTIONS(1107), 1,
      anon_sym_,
    ACTIONS(1109), 1,
      sym__newline,
    STATE(215), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [12976] = 7,
    ACTIONS(1067), 1,
      sym_attribute_name,
    ACTIONS(1111), 1,
      anon_sym_RPAREN,
    STATE(372), 1,
      aux_sym_attributes_repeat1,
    STATE(617), 1,
      sym_angular_attribute_name,
    STATE(624), 1,
      sym_attribute,
    STATE(633), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1065), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [13001] = 8,
    ACTIONS(866), 1,
      anon_sym_BANG_EQ,
    ACTIONS(868), 1,
      anon_sym_EQ,
    ACTIONS(874), 1,
      anon_sym_DOT,
    ACTIONS(1113), 1,
      anon_sym_COLON,
    ACTIONS(1115), 1,
      anon_sym_SLASH,
    ACTIONS(1117), 1,
      anon_sym_,
    ACTIONS(1119), 1,
      sym__newline,
    STATE(324), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [13028] = 8,
    ACTIONS(910), 1,
      anon_sym_BANG_EQ,
    ACTIONS(912), 1,
      anon_sym_EQ,
    ACTIONS(918), 1,
      anon_sym_DOT,
    ACTIONS(1121), 1,
      anon_sym_COLON,
    ACTIONS(1123), 1,
      anon_sym_SLASH,
    ACTIONS(1125), 1,
      anon_sym_,
    ACTIONS(1127), 1,
      sym__newline,
    STATE(140), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [13055] = 8,
    ACTIONS(950), 1,
      anon_sym_BANG_EQ,
    ACTIONS(952), 1,
      anon_sym_EQ,
    ACTIONS(958), 1,
      anon_sym_DOT,
    ACTIONS(1129), 1,
      anon_sym_COLON,
    ACTIONS(1131), 1,
      anon_sym_SLASH,
    ACTIONS(1133), 1,
      anon_sym_,
    ACTIONS(1135), 1,
      sym__newline,
    STATE(559), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [13082] = 7,
    ACTIONS(1067), 1,
      sym_attribute_name,
    ACTIONS(1137), 1,
      anon_sym_RPAREN,
    STATE(372), 1,
      aux_sym_attributes_repeat1,
    STATE(617), 1,
      sym_angular_attribute_name,
    STATE(695), 1,
      sym_attribute,
    STATE(633), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1065), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [13107] = 7,
    ACTIONS(1067), 1,
      sym_attribute_name,
    ACTIONS(1139), 1,
      anon_sym_RPAREN,
    STATE(372), 1,
      aux_sym_attributes_repeat1,
    STATE(617), 1,
      sym_angular_attribute_name,
    STATE(691), 1,
      sym_attribute,
    STATE(633), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1065), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [13132] = 8,
    ACTIONS(864), 1,
      anon_sym_COLON,
    ACTIONS(866), 1,
      anon_sym_BANG_EQ,
    ACTIONS(868), 1,
      anon_sym_EQ,
    ACTIONS(870), 1,
      anon_sym_SLASH,
    ACTIONS(872), 1,
      anon_sym_,
    ACTIONS(874), 1,
      anon_sym_DOT,
    ACTIONS(880), 1,
      sym__newline,
    STATE(323), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [13159] = 7,
    ACTIONS(1067), 1,
      sym_attribute_name,
    ACTIONS(1141), 1,
      anon_sym_RPAREN,
    STATE(391), 1,
      aux_sym_attributes_repeat1,
    STATE(617), 1,
      sym_angular_attribute_name,
    STATE(690), 1,
      sym_attribute,
    STATE(633), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1065), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [13184] = 7,
    ACTIONS(1067), 1,
      sym_attribute_name,
    ACTIONS(1143), 1,
      anon_sym_RPAREN,
    STATE(392), 1,
      aux_sym_attributes_repeat1,
    STATE(617), 1,
      sym_angular_attribute_name,
    STATE(698), 1,
      sym_attribute,
    STATE(633), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1065), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [13209] = 8,
    ACTIONS(964), 1,
      anon_sym_COLON,
    ACTIONS(966), 1,
      anon_sym_BANG_EQ,
    ACTIONS(968), 1,
      anon_sym_EQ,
    ACTIONS(970), 1,
      anon_sym_SLASH,
    ACTIONS(972), 1,
      anon_sym_,
    ACTIONS(974), 1,
      anon_sym_DOT,
    ACTIONS(976), 1,
      sym__newline,
    STATE(348), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [13236] = 7,
    ACTIONS(1067), 1,
      sym_attribute_name,
    ACTIONS(1145), 1,
      anon_sym_RPAREN,
    STATE(377), 1,
      aux_sym_attributes_repeat1,
    STATE(617), 1,
      sym_angular_attribute_name,
    STATE(632), 1,
      sym_attribute,
    STATE(633), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(1065), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [13261] = 8,
    ACTIONS(950), 1,
      anon_sym_BANG_EQ,
    ACTIONS(952), 1,
      anon_sym_EQ,
    ACTIONS(958), 1,
      anon_sym_DOT,
    ACTIONS(978), 1,
      anon_sym_COLON,
    ACTIONS(980), 1,
      anon_sym_SLASH,
    ACTIONS(982), 1,
      anon_sym_,
    ACTIONS(984), 1,
      sym__newline,
    STATE(557), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [13288] = 7,
    ACTIONS(924), 1,
      anon_sym_COLON,
    ACTIONS(926), 1,
      anon_sym_BANG_EQ,
    ACTIONS(928), 1,
      anon_sym_EQ,
    ACTIONS(932), 1,
      anon_sym_,
    ACTIONS(934), 1,
      anon_sym_DOT,
    ACTIONS(936), 1,
      sym__newline,
    STATE(237), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [13312] = 7,
    ACTIONS(910), 1,
      anon_sym_BANG_EQ,
    ACTIONS(912), 1,
      anon_sym_EQ,
    ACTIONS(918), 1,
      anon_sym_DOT,
    ACTIONS(1121), 1,
      anon_sym_COLON,
    ACTIONS(1125), 1,
      anon_sym_,
    ACTIONS(1127), 1,
      sym__newline,
    STATE(140), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [13336] = 7,
    ACTIONS(884), 1,
      anon_sym_BANG_EQ,
    ACTIONS(886), 1,
      anon_sym_EQ,
    ACTIONS(892), 1,
      anon_sym_DOT,
    ACTIONS(1018), 1,
      anon_sym_COLON,
    ACTIONS(1022), 1,
      anon_sym_,
    ACTIONS(1024), 1,
      sym__newline,
    STATE(213), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [13360] = 7,
    ACTIONS(926), 1,
      anon_sym_BANG_EQ,
    ACTIONS(928), 1,
      anon_sym_EQ,
    ACTIONS(934), 1,
      anon_sym_DOT,
    ACTIONS(1147), 1,
      anon_sym_COLON,
    ACTIONS(1149), 1,
      anon_sym_,
    ACTIONS(1151), 1,
      sym__newline,
    STATE(251), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [13384] = 7,
    ACTIONS(864), 1,
      anon_sym_COLON,
    ACTIONS(866), 1,
      anon_sym_BANG_EQ,
    ACTIONS(868), 1,
      anon_sym_EQ,
    ACTIONS(872), 1,
      anon_sym_,
    ACTIONS(874), 1,
      anon_sym_DOT,
    ACTIONS(880), 1,
      sym__newline,
    STATE(323), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [13408] = 7,
    ACTIONS(950), 1,
      anon_sym_BANG_EQ,
    ACTIONS(952), 1,
      anon_sym_EQ,
    ACTIONS(958), 1,
      anon_sym_DOT,
    ACTIONS(978), 1,
      anon_sym_COLON,
    ACTIONS(982), 1,
      anon_sym_,
    ACTIONS(984), 1,
      sym__newline,
    STATE(557), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [13432] = 7,
    ACTIONS(966), 1,
      anon_sym_BANG_EQ,
    ACTIONS(968), 1,
      anon_sym_EQ,
    ACTIONS(974), 1,
      anon_sym_DOT,
    ACTIONS(1089), 1,
      anon_sym_COLON,
    ACTIONS(1093), 1,
      anon_sym_,
    ACTIONS(1095), 1,
      sym__newline,
    STATE(352), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [13456] = 7,
    ACTIONS(950), 1,
      anon_sym_BANG_EQ,
    ACTIONS(952), 1,
      anon_sym_EQ,
    ACTIONS(958), 1,
      anon_sym_DOT,
    ACTIONS(1129), 1,
      anon_sym_COLON,
    ACTIONS(1133), 1,
      anon_sym_,
    ACTIONS(1135), 1,
      sym__newline,
    STATE(559), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [13480] = 7,
    ACTIONS(910), 1,
      anon_sym_BANG_EQ,
    ACTIONS(912), 1,
      anon_sym_EQ,
    ACTIONS(918), 1,
      anon_sym_DOT,
    ACTIONS(1153), 1,
      anon_sym_COLON,
    ACTIONS(1155), 1,
      anon_sym_,
    ACTIONS(1157), 1,
      sym__newline,
    STATE(143), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [13504] = 7,
    ACTIONS(966), 1,
      anon_sym_BANG_EQ,
    ACTIONS(968), 1,
      anon_sym_EQ,
    ACTIONS(974), 1,
      anon_sym_DOT,
    ACTIONS(1159), 1,
      anon_sym_COLON,
    ACTIONS(1161), 1,
      anon_sym_,
    ACTIONS(1163), 1,
      sym__newline,
    STATE(336), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [13528] = 7,
    ACTIONS(884), 1,
      anon_sym_BANG_EQ,
    ACTIONS(886), 1,
      anon_sym_EQ,
    ACTIONS(892), 1,
      anon_sym_DOT,
    ACTIONS(1103), 1,
      anon_sym_COLON,
    ACTIONS(1107), 1,
      anon_sym_,
    ACTIONS(1109), 1,
      sym__newline,
    STATE(215), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [13552] = 7,
    ACTIONS(866), 1,
      anon_sym_BANG_EQ,
    ACTIONS(868), 1,
      anon_sym_EQ,
    ACTIONS(874), 1,
      anon_sym_DOT,
    ACTIONS(1113), 1,
      anon_sym_COLON,
    ACTIONS(1117), 1,
      anon_sym_,
    ACTIONS(1119), 1,
      sym__newline,
    STATE(324), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [13576] = 7,
    ACTIONS(950), 1,
      anon_sym_BANG_EQ,
    ACTIONS(952), 1,
      anon_sym_EQ,
    ACTIONS(958), 1,
      anon_sym_DOT,
    ACTIONS(1165), 1,
      anon_sym_COLON,
    ACTIONS(1167), 1,
      anon_sym_,
    ACTIONS(1169), 1,
      sym__newline,
    STATE(552), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [13600] = 7,
    ACTIONS(996), 1,
      anon_sym_BANG_EQ,
    ACTIONS(998), 1,
      anon_sym_EQ,
    ACTIONS(1004), 1,
      anon_sym_DOT,
    ACTIONS(1171), 1,
      anon_sym_COLON,
    ACTIONS(1173), 1,
      anon_sym_,
    ACTIONS(1175), 1,
      sym__newline,
    STATE(193), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [13624] = 7,
    ACTIONS(926), 1,
      anon_sym_BANG_EQ,
    ACTIONS(928), 1,
      anon_sym_EQ,
    ACTIONS(934), 1,
      anon_sym_DOT,
    ACTIONS(1081), 1,
      anon_sym_COLON,
    ACTIONS(1085), 1,
      anon_sym_,
    ACTIONS(1087), 1,
      sym__newline,
    STATE(243), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [13648] = 7,
    ACTIONS(910), 1,
      anon_sym_BANG_EQ,
    ACTIONS(912), 1,
      anon_sym_EQ,
    ACTIONS(918), 1,
      anon_sym_DOT,
    ACTIONS(986), 1,
      anon_sym_COLON,
    ACTIONS(990), 1,
      anon_sym_,
    ACTIONS(992), 1,
      sym__newline,
    STATE(114), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [13672] = 7,
    ACTIONS(866), 1,
      anon_sym_BANG_EQ,
    ACTIONS(868), 1,
      anon_sym_EQ,
    ACTIONS(874), 1,
      anon_sym_DOT,
    ACTIONS(1177), 1,
      anon_sym_COLON,
    ACTIONS(1179), 1,
      anon_sym_,
    ACTIONS(1181), 1,
      sym__newline,
    STATE(318), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [13696] = 7,
    ACTIONS(996), 1,
      anon_sym_BANG_EQ,
    ACTIONS(998), 1,
      anon_sym_EQ,
    ACTIONS(1004), 1,
      anon_sym_DOT,
    ACTIONS(1010), 1,
      anon_sym_COLON,
    ACTIONS(1014), 1,
      anon_sym_,
    ACTIONS(1016), 1,
      sym__newline,
    STATE(179), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [13720] = 7,
    ACTIONS(996), 1,
      anon_sym_BANG_EQ,
    ACTIONS(998), 1,
      anon_sym_EQ,
    ACTIONS(1004), 1,
      anon_sym_DOT,
    ACTIONS(1069), 1,
      anon_sym_COLON,
    ACTIONS(1073), 1,
      anon_sym_,
    ACTIONS(1075), 1,
      sym__newline,
    STATE(184), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [13744] = 7,
    ACTIONS(964), 1,
      anon_sym_COLON,
    ACTIONS(966), 1,
      anon_sym_BANG_EQ,
    ACTIONS(968), 1,
      anon_sym_EQ,
    ACTIONS(972), 1,
      anon_sym_,
    ACTIONS(974), 1,
      anon_sym_DOT,
    ACTIONS(976), 1,
      sym__newline,
    STATE(348), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [13768] = 7,
    ACTIONS(884), 1,
      anon_sym_BANG_EQ,
    ACTIONS(886), 1,
      anon_sym_EQ,
    ACTIONS(892), 1,
      anon_sym_DOT,
    ACTIONS(1183), 1,
      anon_sym_COLON,
    ACTIONS(1185), 1,
      anon_sym_,
    ACTIONS(1187), 1,
      sym__newline,
    STATE(217), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [13792] = 7,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1195), 1,
      sym__dedent,
    STATE(429), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(449), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13815] = 7,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1197), 1,
      sym__dedent,
    STATE(429), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(449), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13838] = 7,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1199), 1,
      sym__dedent,
    STATE(429), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(449), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13861] = 7,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1201), 1,
      sym__dedent,
    STATE(429), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(449), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13884] = 7,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1203), 1,
      sym__dedent,
    STATE(429), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(449), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13907] = 7,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1205), 1,
      sym__dedent,
    STATE(429), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(449), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13930] = 7,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1207), 1,
      sym__dedent,
    STATE(429), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(449), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13953] = 7,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1209), 1,
      sym__dedent,
    STATE(429), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(449), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13976] = 7,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1211), 1,
      sym__dedent,
    STATE(429), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(449), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [13999] = 7,
    ACTIONS(1213), 1,
      aux_sym_content_token1,
    ACTIONS(1216), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1219), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1222), 1,
      sym__dedent,
    STATE(429), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(449), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [14022] = 7,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1224), 1,
      sym__dedent,
    STATE(429), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(449), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [14045] = 7,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1226), 1,
      sym__dedent,
    STATE(429), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(449), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [14068] = 7,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1228), 1,
      sym__dedent,
    STATE(429), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(449), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [14091] = 7,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1230), 1,
      sym__dedent,
    STATE(429), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(449), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [14114] = 8,
    ACTIONS(1232), 1,
      aux_sym__ternary_attribute_value_token1,
    ACTIONS(1234), 1,
      aux_sym__variable_attribute_value_token1,
    ACTIONS(1236), 1,
      aux_sym__object_attribute_value_token1,
    ACTIONS(1238), 1,
      aux_sym__template_attribute_value_token1,
    ACTIONS(1240), 1,
      aux_sym__array_attribute_value_token1,
    ACTIONS(1242), 1,
      anon_sym_SQUOTE,
    ACTIONS(1244), 1,
      anon_sym_DQUOTE,
    STATE(651), 1,
      sym_quoted_attribute_value,
  [14139] = 7,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1246), 1,
      sym__dedent,
    STATE(429), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(449), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [14162] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1248), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(466), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [14182] = 4,
    ACTIONS(1252), 1,
      sym__newline,
    ACTIONS(1254), 1,
      sym__dedent,
    STATE(468), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1250), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [14198] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1256), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(466), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [14218] = 4,
    ACTIONS(1252), 1,
      sym__newline,
    ACTIONS(1258), 1,
      sym__dedent,
    STATE(468), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1250), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [14234] = 2,
    ACTIONS(595), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(597), 5,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_DOT,
  [14246] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1260), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(466), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [14266] = 3,
    ACTIONS(1262), 1,
      sym__indent,
    STATE(551), 1,
      sym_children,
    ACTIONS(576), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [14280] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1264), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(466), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [14300] = 3,
    ACTIONS(1266), 1,
      sym__indent,
    STATE(559), 1,
      sym_children,
    ACTIONS(533), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [14314] = 2,
    ACTIONS(623), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(625), 5,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_DOT,
  [14326] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(432), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(449), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [14346] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1268), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(466), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [14366] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1270), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(466), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [14386] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1272), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(466), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [14406] = 4,
    ACTIONS(1252), 1,
      sym__newline,
    ACTIONS(1274), 1,
      sym__dedent,
    STATE(468), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1250), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [14422] = 3,
    ACTIONS(1262), 1,
      sym__indent,
    STATE(549), 1,
      sym_children,
    ACTIONS(580), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [14436] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1276), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(455), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [14456] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(423), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(449), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [14476] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1278), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(466), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [14496] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1280), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(466), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [14516] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1282), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(466), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [14536] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1284), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(466), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [14556] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1286), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(456), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [14576] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(428), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(449), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [14596] = 3,
    ACTIONS(1288), 1,
      sym__indent,
    STATE(565), 1,
      sym_children,
    ACTIONS(560), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [14610] = 4,
    ACTIONS(1252), 1,
      sym__newline,
    ACTIONS(1290), 1,
      sym__dedent,
    STATE(468), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1250), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [14626] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1292), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(466), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [14646] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1294), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(466), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [14666] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1296), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(466), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [14686] = 4,
    ACTIONS(1252), 1,
      sym__newline,
    ACTIONS(1298), 1,
      sym__dedent,
    STATE(468), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1250), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [14702] = 6,
    ACTIONS(1300), 1,
      aux_sym_content_token1,
    ACTIONS(1303), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1306), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1309), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(466), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [14722] = 3,
    ACTIONS(1262), 1,
      sym__indent,
    STATE(565), 1,
      sym_children,
    ACTIONS(560), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [14736] = 4,
    ACTIONS(1314), 1,
      sym__newline,
    ACTIONS(1317), 1,
      sym__dedent,
    STATE(468), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1311), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [14752] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1319), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(466), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [14772] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1321), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(466), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [14792] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(424), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(449), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [14812] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1323), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(466), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [14832] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1325), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(466), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [14852] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(425), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(449), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [14872] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1327), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(466), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [14892] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1329), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(466), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [14912] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1331), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(466), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [14932] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1333), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(466), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [14952] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(435), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(449), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [14972] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(431), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(449), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [14992] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(422), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(449), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15012] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1335), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(466), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15032] = 2,
    ACTIONS(607), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(609), 5,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_DOT,
  [15044] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(427), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(449), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15064] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(430), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(449), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15084] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1337), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(494), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15104] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1339), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(466), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15124] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1341), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(493), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15144] = 3,
    ACTIONS(1262), 1,
      sym__indent,
    STATE(552), 1,
      sym_children,
    ACTIONS(552), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [15158] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1343), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(487), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15178] = 3,
    ACTIONS(1345), 1,
      sym__indent,
    STATE(552), 1,
      sym_children,
    ACTIONS(552), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [15192] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(433), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(449), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15212] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1347), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(466), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15232] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1349), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(466), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15252] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1351), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(466), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15272] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1353), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(466), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15292] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(426), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(449), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15312] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1355), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(466), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15332] = 4,
    ACTIONS(1252), 1,
      sym__newline,
    ACTIONS(1357), 1,
      sym__dedent,
    STATE(468), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1250), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [15348] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1359), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(466), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15368] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1361), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(466), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15388] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1363), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(466), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15408] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1365), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(466), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15428] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(420), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(449), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15448] = 3,
    ACTIONS(1367), 1,
      sym__indent,
    STATE(557), 1,
      sym_children,
    ACTIONS(521), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [15462] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(421), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(449), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15482] = 6,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1369), 1,
      sym__newline,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(466), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15502] = 4,
    ACTIONS(1252), 1,
      sym__newline,
    ACTIONS(1371), 1,
      sym__dedent,
    STATE(468), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1250), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [15518] = 4,
    ACTIONS(1252), 1,
      sym__newline,
    ACTIONS(1373), 1,
      sym__dedent,
    STATE(468), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1250), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [15534] = 4,
    ACTIONS(1377), 1,
      anon_sym_POUND,
    ACTIONS(1379), 1,
      anon_sym_LBRACE,
    ACTIONS(1375), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1381), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [15549] = 3,
    ACTIONS(1383), 1,
      sym__newline,
    STATE(499), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1250), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [15562] = 5,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(502), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15579] = 5,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(472), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15596] = 3,
    ACTIONS(1385), 1,
      sym__newline,
    STATE(450), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1250), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [15609] = 5,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(478), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15626] = 5,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(469), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15643] = 5,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(448), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15660] = 5,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(454), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15677] = 5,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(447), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15694] = 5,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(462), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15711] = 3,
    ACTIONS(1387), 1,
      sym__newline,
    STATE(509), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1250), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [15724] = 5,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(436), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15741] = 3,
    ACTIONS(1389), 1,
      sym__newline,
    STATE(461), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1250), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [15754] = 5,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(464), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15771] = 5,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(482), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15788] = 5,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(503), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15805] = 5,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(500), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15822] = 3,
    ACTIONS(1391), 1,
      sym__newline,
    STATE(508), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1250), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [15835] = 5,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(501), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15852] = 5,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(463), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15869] = 2,
    ACTIONS(1393), 1,
      sym__indent,
    ACTIONS(611), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [15880] = 5,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(496), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15897] = 5,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(475), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15914] = 4,
    ACTIONS(1397), 1,
      anon_sym_,
    ACTIONS(1399), 1,
      anon_sym_DOT,
    STATE(534), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(1395), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15929] = 5,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(457), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15946] = 5,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(441), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15963] = 3,
    ACTIONS(1402), 1,
      sym__newline,
    STATE(465), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1250), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [15976] = 5,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(473), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [15993] = 3,
    ACTIONS(1404), 1,
      sym__newline,
    STATE(439), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1250), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [16006] = 5,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(470), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [16023] = 5,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(443), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [16040] = 5,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(498), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [16057] = 5,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(438), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [16074] = 5,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(495), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [16091] = 3,
    ACTIONS(1406), 1,
      sym__newline,
    STATE(437), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1250), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [16104] = 5,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(477), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [16121] = 5,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(476), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [16138] = 5,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1191), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1193), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(554), 1,
      aux_sym_content_repeat1,
    STATE(507), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [16155] = 1,
    ACTIONS(576), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [16163] = 1,
    ACTIONS(769), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [16171] = 1,
    ACTIONS(773), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [16179] = 1,
    ACTIONS(560), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [16187] = 3,
    STATE(176), 1,
      sym_tag,
    STATE(199), 1,
      sym__dummy_tag,
    ACTIONS(201), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [16199] = 4,
    ACTIONS(1189), 1,
      aux_sym_content_token1,
    ACTIONS(1410), 1,
      sym__newline,
    STATE(568), 1,
      aux_sym_content_repeat1,
    ACTIONS(1408), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [16213] = 3,
    STATE(194), 1,
      sym__dummy_tag,
    STATE(195), 1,
      sym_tag,
    ACTIONS(1412), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [16225] = 1,
    ACTIONS(757), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [16233] = 1,
    ACTIONS(533), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [16241] = 3,
    STATE(123), 1,
      sym__dummy_tag,
    STATE(124), 1,
      sym_tag,
    ACTIONS(117), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [16253] = 1,
    ACTIONS(552), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [16261] = 1,
    ACTIONS(753), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [16269] = 2,
    ACTIONS(1397), 1,
      anon_sym_,
    ACTIONS(1395), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16279] = 4,
    ACTIONS(1414), 1,
      anon_sym_when,
    ACTIONS(1416), 1,
      anon_sym_default,
    STATE(699), 1,
      sym__when_keyword,
    STATE(104), 2,
      sym_when,
      aux_sym_case_repeat1,
  [16293] = 1,
    ACTIONS(1055), 5,
      anon_sym_RPAREN,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
      sym_attribute_name,
  [16301] = 1,
    ACTIONS(521), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [16309] = 1,
    ACTIONS(580), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [16317] = 1,
    ACTIONS(741), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [16325] = 4,
    ACTIONS(1414), 1,
      anon_sym_when,
    ACTIONS(1418), 1,
      anon_sym_default,
    STATE(658), 1,
      sym__when_keyword,
    STATE(52), 2,
      sym_when,
      aux_sym_case_repeat1,
  [16339] = 4,
    ACTIONS(1420), 1,
      aux_sym_content_token1,
    ACTIONS(1425), 1,
      sym__newline,
    STATE(568), 1,
      aux_sym_content_repeat1,
    ACTIONS(1423), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [16353] = 1,
    ACTIONS(722), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [16361] = 3,
    ACTIONS(1427), 1,
      anon_sym_LBRACE,
    ACTIONS(1423), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1425), 2,
      sym__newline,
      aux_sym_content_token1,
  [16373] = 1,
    ACTIONS(749), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [16381] = 4,
    ACTIONS(1414), 1,
      anon_sym_when,
    ACTIONS(1429), 1,
      anon_sym_default,
    STATE(680), 1,
      sym__when_keyword,
    STATE(66), 2,
      sym_when,
      aux_sym_case_repeat1,
  [16395] = 2,
    STATE(339), 1,
      sym_tag,
    ACTIONS(31), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [16404] = 2,
    ACTIONS(1431), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1433), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [16413] = 4,
    ACTIONS(1435), 1,
      aux_sym_script_block_token1,
    ACTIONS(1437), 1,
      sym__newline,
    ACTIONS(1439), 1,
      sym__dedent,
    STATE(579), 1,
      aux_sym_script_block_repeat1,
  [16426] = 2,
    STATE(213), 1,
      sym_tag,
    ACTIONS(201), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [16435] = 4,
    ACTIONS(482), 1,
      sym__dedent,
    ACTIONS(1441), 1,
      aux_sym_filter_content_token2,
    STATE(577), 1,
      aux_sym__comment_repeat1,
    STATE(803), 1,
      sym__comment_content,
  [16448] = 2,
    STATE(557), 1,
      sym_tag,
    ACTIONS(1250), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [16457] = 4,
    ACTIONS(1444), 1,
      aux_sym_script_block_token1,
    ACTIONS(1447), 1,
      sym__newline,
    ACTIONS(1450), 1,
      sym__dedent,
    STATE(579), 1,
      aux_sym_script_block_repeat1,
  [16470] = 2,
    STATE(313), 1,
      sym_tag,
    ACTIONS(312), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [16479] = 2,
    STATE(348), 1,
      sym_tag,
    ACTIONS(31), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [16488] = 4,
    ACTIONS(1452), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1454), 1,
      sym__newline,
    STATE(134), 1,
      sym__single_line_buf_code,
    STATE(800), 1,
      sym__un_delimited_javascript,
  [16501] = 2,
    STATE(559), 1,
      sym_tag,
    ACTIONS(1250), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [16510] = 4,
    ACTIONS(1456), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1458), 1,
      sym__dedent,
    STATE(577), 1,
      aux_sym__comment_repeat1,
    STATE(803), 1,
      sym__comment_content,
  [16523] = 2,
    ACTIONS(1222), 2,
      sym__dedent,
      aux_sym_content_token1,
    ACTIONS(1460), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [16532] = 4,
    ACTIONS(1452), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1462), 1,
      sym__newline,
    STATE(308), 1,
      sym__single_line_buf_code,
    STATE(776), 1,
      sym__un_delimited_javascript,
  [16545] = 2,
    STATE(318), 1,
      sym_tag,
    ACTIONS(312), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [16554] = 4,
    ACTIONS(1435), 1,
      aux_sym_script_block_token1,
    ACTIONS(1437), 1,
      sym__newline,
    ACTIONS(1464), 1,
      sym__dedent,
    STATE(579), 1,
      aux_sym_script_block_repeat1,
  [16567] = 4,
    ACTIONS(1456), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1466), 1,
      sym__dedent,
    STATE(577), 1,
      aux_sym__comment_repeat1,
    STATE(803), 1,
      sym__comment_content,
  [16580] = 2,
    STATE(243), 1,
      sym_tag,
    ACTIONS(278), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [16589] = 2,
    ACTIONS(1423), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1425), 2,
      sym__newline,
      aux_sym_content_token1,
  [16598] = 2,
    STATE(336), 1,
      sym_tag,
    ACTIONS(31), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [16607] = 2,
    STATE(552), 1,
      sym_tag,
    ACTIONS(1250), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [16616] = 2,
    STATE(324), 1,
      sym_tag,
    ACTIONS(312), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [16625] = 2,
    STATE(251), 1,
      sym_tag,
    ACTIONS(278), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [16634] = 2,
    STATE(323), 1,
      sym_tag,
    ACTIONS(312), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [16643] = 4,
    ACTIONS(1452), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1468), 1,
      sym__newline,
    STATE(239), 1,
      sym__single_line_buf_code,
    STATE(753), 1,
      sym__un_delimited_javascript,
  [16656] = 2,
    STATE(152), 1,
      sym_tag,
    ACTIONS(117), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [16665] = 2,
    STATE(565), 1,
      sym_tag,
    ACTIONS(1250), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [16674] = 4,
    ACTIONS(1456), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1470), 1,
      sym__dedent,
    STATE(577), 1,
      aux_sym__comment_repeat1,
    STATE(803), 1,
      sym__comment_content,
  [16687] = 2,
    STATE(143), 1,
      sym_tag,
    ACTIONS(117), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [16696] = 4,
    ACTIONS(1456), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1472), 1,
      sym__dedent,
    STATE(577), 1,
      aux_sym__comment_repeat1,
    STATE(803), 1,
      sym__comment_content,
  [16709] = 4,
    ACTIONS(1435), 1,
      aux_sym_script_block_token1,
    ACTIONS(1437), 1,
      sym__newline,
    ACTIONS(1474), 1,
      sym__dedent,
    STATE(579), 1,
      aux_sym_script_block_repeat1,
  [16722] = 4,
    ACTIONS(1435), 1,
      aux_sym_script_block_token1,
    ACTIONS(1437), 1,
      sym__newline,
    ACTIONS(1476), 1,
      sym__dedent,
    STATE(579), 1,
      aux_sym_script_block_repeat1,
  [16735] = 2,
    STATE(140), 1,
      sym_tag,
    ACTIONS(117), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [16744] = 2,
    STATE(217), 1,
      sym_tag,
    ACTIONS(201), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [16753] = 2,
    STATE(179), 1,
      sym_tag,
    ACTIONS(1412), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [16762] = 4,
    ACTIONS(1452), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1478), 1,
      sym__newline,
    STATE(300), 1,
      sym__single_line_buf_code,
    STATE(782), 1,
      sym__un_delimited_javascript,
  [16775] = 4,
    ACTIONS(1452), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1480), 1,
      sym__newline,
    STATE(231), 1,
      sym__single_line_buf_code,
    STATE(735), 1,
      sym__un_delimited_javascript,
  [16788] = 2,
    STATE(256), 1,
      sym_tag,
    ACTIONS(278), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [16797] = 2,
    STATE(184), 1,
      sym_tag,
    ACTIONS(1412), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [16806] = 2,
    STATE(114), 1,
      sym_tag,
    ACTIONS(117), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [16815] = 2,
    ACTIONS(1482), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1484), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [16824] = 2,
    STATE(352), 1,
      sym_tag,
    ACTIONS(31), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [16833] = 2,
    STATE(237), 1,
      sym_tag,
    ACTIONS(278), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [16842] = 2,
    STATE(215), 1,
      sym_tag,
    ACTIONS(201), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [16851] = 3,
    ACTIONS(1486), 1,
      anon_sym_EQ,
    ACTIONS(1488), 1,
      anon_sym_,
    ACTIONS(1490), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16862] = 4,
    ACTIONS(1435), 1,
      aux_sym_script_block_token1,
    ACTIONS(1437), 1,
      sym__newline,
    ACTIONS(1492), 1,
      sym__dedent,
    STATE(579), 1,
      aux_sym_script_block_repeat1,
  [16875] = 2,
    STATE(221), 1,
      sym_tag,
    ACTIONS(201), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [16884] = 4,
    ACTIONS(1456), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1494), 1,
      sym__dedent,
    STATE(577), 1,
      aux_sym__comment_repeat1,
    STATE(803), 1,
      sym__comment_content,
  [16897] = 2,
    STATE(203), 1,
      sym_tag,
    ACTIONS(1412), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [16906] = 2,
    ACTIONS(1498), 1,
      anon_sym_,
    ACTIONS(1496), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16915] = 2,
    STATE(193), 1,
      sym_tag,
    ACTIONS(1412), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [16924] = 3,
    ACTIONS(1500), 1,
      anon_sym_,
    ACTIONS(1502), 1,
      anon_sym_COMMA,
    ACTIONS(1504), 1,
      anon_sym_RPAREN,
  [16934] = 3,
    ACTIONS(1500), 1,
      anon_sym_,
    ACTIONS(1502), 1,
      anon_sym_COMMA,
    ACTIONS(1506), 1,
      anon_sym_RPAREN,
  [16944] = 3,
    ACTIONS(1508), 1,
      sym__un_delimited_javascript_line,
    STATE(202), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(305), 1,
      sym__multi_line_buf_code,
  [16954] = 3,
    ACTIONS(1510), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1512), 1,
      sym__dedent,
    STATE(661), 1,
      aux_sym_filter_content_repeat1,
  [16964] = 2,
    ACTIONS(1514), 1,
      anon_sym_,
    ACTIONS(1516), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16972] = 2,
    ACTIONS(1518), 1,
      anon_sym_,
    ACTIONS(1520), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16980] = 2,
    ACTIONS(1522), 1,
      anon_sym_,
    ACTIONS(1524), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [16988] = 3,
    ACTIONS(1526), 1,
      aux_sym_filter_content_token2,
    STATE(138), 1,
      aux_sym__comment_repeat1,
    STATE(810), 1,
      sym__comment_content,
  [16998] = 3,
    ACTIONS(1500), 1,
      anon_sym_,
    ACTIONS(1502), 1,
      anon_sym_COMMA,
    ACTIONS(1528), 1,
      anon_sym_RPAREN,
  [17008] = 2,
    ACTIONS(1530), 1,
      anon_sym_,
    ACTIONS(1532), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [17016] = 1,
    ACTIONS(1534), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [17022] = 3,
    ACTIONS(1510), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1536), 1,
      sym__dedent,
    STATE(627), 1,
      aux_sym_filter_content_repeat1,
  [17032] = 3,
    ACTIONS(1452), 1,
      sym__un_delimited_javascript_line,
    STATE(267), 1,
      sym__single_line_buf_code,
    STATE(753), 1,
      sym__un_delimited_javascript,
  [17042] = 3,
    ACTIONS(1452), 1,
      sym__un_delimited_javascript_line,
    STATE(219), 1,
      sym__single_line_buf_code,
    STATE(816), 1,
      sym__un_delimited_javascript,
  [17052] = 3,
    ACTIONS(1452), 1,
      sym__un_delimited_javascript_line,
    STATE(220), 1,
      sym__single_line_buf_code,
    STATE(816), 1,
      sym__un_delimited_javascript,
  [17062] = 3,
    ACTIONS(1456), 1,
      aux_sym_filter_content_token2,
    STATE(589), 1,
      aux_sym__comment_repeat1,
    STATE(803), 1,
      sym__comment_content,
  [17072] = 3,
    ACTIONS(1452), 1,
      sym__un_delimited_javascript_line,
    STATE(560), 1,
      sym__single_line_buf_code,
    STATE(742), 1,
      sym__un_delimited_javascript,
  [17082] = 3,
    ACTIONS(1500), 1,
      anon_sym_,
    ACTIONS(1502), 1,
      anon_sym_COMMA,
    ACTIONS(1538), 1,
      anon_sym_RPAREN,
  [17092] = 3,
    ACTIONS(1452), 1,
      sym__un_delimited_javascript_line,
    STATE(571), 1,
      sym__single_line_buf_code,
    STATE(742), 1,
      sym__un_delimited_javascript,
  [17102] = 3,
    ACTIONS(1510), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1540), 1,
      sym__dedent,
    STATE(697), 1,
      aux_sym_filter_content_repeat1,
  [17112] = 3,
    ACTIONS(1542), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1544), 1,
      sym__newline,
    STATE(784), 1,
      sym__comment_content,
  [17122] = 2,
    ACTIONS(1546), 1,
      anon_sym_,
    ACTIONS(1548), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [17130] = 3,
    ACTIONS(1456), 1,
      aux_sym_filter_content_token2,
    STATE(620), 1,
      aux_sym__comment_repeat1,
    STATE(803), 1,
      sym__comment_content,
  [17140] = 3,
    ACTIONS(1456), 1,
      aux_sym_filter_content_token2,
    STATE(600), 1,
      aux_sym__comment_repeat1,
    STATE(803), 1,
      sym__comment_content,
  [17150] = 2,
    ACTIONS(1550), 1,
      anon_sym_,
    ACTIONS(1552), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [17158] = 3,
    ACTIONS(1435), 1,
      aux_sym_script_block_token1,
    ACTIONS(1437), 1,
      sym__newline,
    STATE(603), 1,
      aux_sym_script_block_repeat1,
  [17168] = 3,
    ACTIONS(1456), 1,
      aux_sym_filter_content_token2,
    STATE(584), 1,
      aux_sym__comment_repeat1,
    STATE(803), 1,
      sym__comment_content,
  [17178] = 2,
    ACTIONS(1554), 1,
      anon_sym_,
    ACTIONS(1556), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [17186] = 1,
    ACTIONS(1558), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [17192] = 3,
    ACTIONS(1456), 1,
      aux_sym_filter_content_token2,
    STATE(602), 1,
      aux_sym__comment_repeat1,
    STATE(803), 1,
      sym__comment_content,
  [17202] = 3,
    ACTIONS(1435), 1,
      aux_sym_script_block_token1,
    ACTIONS(1437), 1,
      sym__newline,
    STATE(575), 1,
      aux_sym_script_block_repeat1,
  [17212] = 3,
    ACTIONS(1435), 1,
      aux_sym_script_block_token1,
    ACTIONS(1437), 1,
      sym__newline,
    STATE(618), 1,
      aux_sym_script_block_repeat1,
  [17222] = 3,
    ACTIONS(1500), 1,
      anon_sym_,
    ACTIONS(1502), 1,
      anon_sym_COMMA,
    ACTIONS(1560), 1,
      anon_sym_RPAREN,
  [17232] = 3,
    ACTIONS(1500), 1,
      anon_sym_,
    ACTIONS(1502), 1,
      anon_sym_COMMA,
    ACTIONS(1562), 1,
      anon_sym_RPAREN,
  [17242] = 3,
    ACTIONS(1564), 1,
      anon_sym_COLON,
    ACTIONS(1566), 1,
      sym__newline,
    STATE(113), 1,
      sym__when_content,
  [17252] = 1,
    ACTIONS(1568), 3,
      sym__newline,
      sym__dedent,
      aux_sym_script_block_token1,
  [17258] = 3,
    ACTIONS(1510), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1570), 1,
      sym__dedent,
    STATE(670), 1,
      aux_sym_filter_content_repeat1,
  [17268] = 3,
    ACTIONS(1572), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1575), 1,
      sym__dedent,
    STATE(661), 1,
      aux_sym_filter_content_repeat1,
  [17278] = 3,
    ACTIONS(1452), 1,
      sym__un_delimited_javascript_line,
    STATE(153), 1,
      sym__single_line_buf_code,
    STATE(800), 1,
      sym__un_delimited_javascript,
  [17288] = 3,
    ACTIONS(1452), 1,
      sym__un_delimited_javascript_line,
    STATE(154), 1,
      sym__single_line_buf_code,
    STATE(800), 1,
      sym__un_delimited_javascript,
  [17298] = 3,
    ACTIONS(1577), 1,
      aux_sym_filter_content_token2,
    STATE(69), 1,
      aux_sym__comment_repeat1,
    STATE(827), 1,
      sym__comment_content,
  [17308] = 3,
    ACTIONS(1510), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1579), 1,
      sym__dedent,
    STATE(661), 1,
      aux_sym_filter_content_repeat1,
  [17318] = 3,
    ACTIONS(1581), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1583), 1,
      sym__newline,
    STATE(775), 1,
      sym__comment_content,
  [17328] = 3,
    ACTIONS(1435), 1,
      aux_sym_script_block_token1,
    ACTIONS(1437), 1,
      sym__newline,
    STATE(588), 1,
      aux_sym_script_block_repeat1,
  [17338] = 1,
    ACTIONS(1585), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [17344] = 3,
    ACTIONS(1587), 1,
      sym__un_delimited_javascript_line,
    STATE(84), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(183), 1,
      sym__multi_line_buf_code,
  [17354] = 3,
    ACTIONS(1510), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1589), 1,
      sym__dedent,
    STATE(661), 1,
      aux_sym_filter_content_repeat1,
  [17364] = 1,
    ACTIONS(1591), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [17370] = 3,
    ACTIONS(1593), 1,
      aux_sym_filter_content_token2,
    STATE(190), 1,
      aux_sym__comment_repeat1,
    STATE(767), 1,
      sym__comment_content,
  [17380] = 3,
    ACTIONS(1595), 1,
      sym__un_delimited_javascript_line,
    STATE(121), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(253), 1,
      sym__multi_line_buf_code,
  [17390] = 2,
    ACTIONS(1597), 1,
      anon_sym_,
    ACTIONS(1599), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [17398] = 2,
    ACTIONS(1601), 1,
      anon_sym_,
    ACTIONS(1603), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [17406] = 2,
    ACTIONS(1605), 1,
      anon_sym_,
    ACTIONS(1607), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [17414] = 3,
    ACTIONS(1452), 1,
      sym__un_delimited_javascript_line,
    STATE(317), 1,
      sym__single_line_buf_code,
    STATE(782), 1,
      sym__un_delimited_javascript,
  [17424] = 3,
    ACTIONS(1452), 1,
      sym__un_delimited_javascript_line,
    STATE(319), 1,
      sym__single_line_buf_code,
    STATE(782), 1,
      sym__un_delimited_javascript,
  [17434] = 2,
    ACTIONS(1609), 1,
      anon_sym_,
    ACTIONS(1611), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [17442] = 3,
    ACTIONS(1613), 1,
      anon_sym_COLON,
    ACTIONS(1615), 1,
      sym__newline,
    STATE(167), 1,
      sym__when_content,
  [17452] = 3,
    ACTIONS(1510), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1617), 1,
      sym__dedent,
    STATE(661), 1,
      aux_sym_filter_content_repeat1,
  [17462] = 2,
    ACTIONS(1044), 1,
      anon_sym_,
    ACTIONS(1046), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [17470] = 3,
    ACTIONS(1619), 1,
      sym__un_delimited_javascript_line,
    STATE(61), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(163), 1,
      sym__multi_line_buf_code,
  [17480] = 3,
    ACTIONS(1621), 1,
      anon_sym_SQUOTE,
    ACTIONS(1623), 1,
      anon_sym_DQUOTE,
    STATE(628), 1,
      sym_quoted_javascript,
  [17490] = 3,
    ACTIONS(1500), 1,
      anon_sym_,
    ACTIONS(1502), 1,
      anon_sym_COMMA,
    ACTIONS(1625), 1,
      anon_sym_RPAREN,
  [17500] = 3,
    ACTIONS(1452), 1,
      sym__un_delimited_javascript_line,
    STATE(340), 1,
      sym__single_line_buf_code,
    STATE(798), 1,
      sym__un_delimited_javascript,
  [17510] = 3,
    ACTIONS(1452), 1,
      sym__un_delimited_javascript_line,
    STATE(354), 1,
      sym__single_line_buf_code,
    STATE(798), 1,
      sym__un_delimited_javascript,
  [17520] = 3,
    ACTIONS(1435), 1,
      aux_sym_script_block_token1,
    ACTIONS(1437), 1,
      sym__newline,
    STATE(604), 1,
      aux_sym_script_block_repeat1,
  [17530] = 3,
    ACTIONS(1500), 1,
      anon_sym_,
    ACTIONS(1502), 1,
      anon_sym_COMMA,
    ACTIONS(1627), 1,
      anon_sym_RPAREN,
  [17540] = 3,
    ACTIONS(1500), 1,
      anon_sym_,
    ACTIONS(1502), 1,
      anon_sym_COMMA,
    ACTIONS(1629), 1,
      anon_sym_RPAREN,
  [17550] = 3,
    ACTIONS(1500), 1,
      anon_sym_,
    ACTIONS(1502), 1,
      anon_sym_COMMA,
    ACTIONS(1631), 1,
      anon_sym_RPAREN,
  [17560] = 3,
    ACTIONS(1633), 1,
      aux_sym_filter_content_token2,
    STATE(57), 1,
      aux_sym__comment_repeat1,
    STATE(797), 1,
      sym__comment_content,
  [17570] = 3,
    ACTIONS(1635), 1,
      sym__un_delimited_javascript_line,
    STATE(169), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(314), 1,
      sym__multi_line_buf_code,
  [17580] = 3,
    ACTIONS(1637), 1,
      aux_sym_filter_content_token2,
    STATE(101), 1,
      aux_sym__comment_repeat1,
    STATE(746), 1,
      sym__comment_content,
  [17590] = 3,
    ACTIONS(1500), 1,
      anon_sym_,
    ACTIONS(1502), 1,
      anon_sym_COMMA,
    ACTIONS(1639), 1,
      anon_sym_RPAREN,
  [17600] = 3,
    ACTIONS(1510), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1641), 1,
      sym__dedent,
    STATE(681), 1,
      aux_sym_filter_content_repeat1,
  [17610] = 3,
    ACTIONS(1510), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1643), 1,
      sym__dedent,
    STATE(661), 1,
      aux_sym_filter_content_repeat1,
  [17620] = 3,
    ACTIONS(1500), 1,
      anon_sym_,
    ACTIONS(1502), 1,
      anon_sym_COMMA,
    ACTIONS(1645), 1,
      anon_sym_RPAREN,
  [17630] = 3,
    ACTIONS(1647), 1,
      anon_sym_COLON,
    ACTIONS(1649), 1,
      sym__newline,
    STATE(173), 1,
      sym__when_content,
  [17640] = 1,
    ACTIONS(1450), 3,
      sym__newline,
      sym__dedent,
      aux_sym_script_block_token1,
  [17646] = 2,
    ACTIONS(1651), 1,
      anon_sym_,
    ACTIONS(1653), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [17654] = 2,
    ACTIONS(1655), 1,
      anon_sym_,
    ACTIONS(1657), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [17662] = 3,
    ACTIONS(1659), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1661), 1,
      sym__newline,
    STATE(801), 1,
      sym__comment_content,
  [17672] = 3,
    ACTIONS(1452), 1,
      sym__un_delimited_javascript_line,
    STATE(200), 1,
      sym__single_line_buf_code,
    STATE(735), 1,
      sym__un_delimited_javascript,
  [17682] = 3,
    ACTIONS(1452), 1,
      sym__un_delimited_javascript_line,
    STATE(204), 1,
      sym__single_line_buf_code,
    STATE(735), 1,
      sym__un_delimited_javascript,
  [17692] = 1,
    ACTIONS(1663), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [17698] = 3,
    ACTIONS(1665), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1667), 1,
      sym__newline,
    STATE(751), 1,
      sym__comment_content,
  [17708] = 3,
    ACTIONS(1452), 1,
      sym__un_delimited_javascript_line,
    STATE(268), 1,
      sym__single_line_buf_code,
    STATE(753), 1,
      sym__un_delimited_javascript,
  [17718] = 3,
    ACTIONS(1669), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1671), 1,
      sym__newline,
    STATE(738), 1,
      sym__comment_content,
  [17728] = 3,
    ACTIONS(1510), 1,
      aux_sym_filter_content_token2,
    ACTIONS(1673), 1,
      sym__dedent,
    STATE(665), 1,
      aux_sym_filter_content_repeat1,
  [17738] = 2,
    ACTIONS(659), 1,
      sym__indent,
    STATE(259), 1,
      sym_children,
  [17745] = 2,
    ACTIONS(1452), 1,
      sym__un_delimited_javascript_line,
    STATE(764), 1,
      sym__un_delimited_javascript,
  [17752] = 2,
    ACTIONS(619), 1,
      sym__indent,
    STATE(230), 1,
      sym_children,
  [17759] = 2,
    ACTIONS(789), 1,
      sym__indent,
    STATE(297), 1,
      sym_children,
  [17766] = 2,
    ACTIONS(789), 1,
      sym__indent,
    STATE(301), 1,
      sym_children,
  [17773] = 2,
    ACTIONS(511), 1,
      sym__indent,
    STATE(137), 1,
      sym_children,
  [17780] = 2,
    ACTIONS(1452), 1,
      sym__un_delimited_javascript_line,
    STATE(783), 1,
      sym__un_delimited_javascript,
  [17787] = 2,
    ACTIONS(1452), 1,
      sym__un_delimited_javascript_line,
    STATE(769), 1,
      sym__un_delimited_javascript,
  [17794] = 2,
    ACTIONS(1452), 1,
      sym__un_delimited_javascript_line,
    STATE(755), 1,
      sym__un_delimited_javascript,
  [17801] = 2,
    ACTIONS(1452), 1,
      sym__un_delimited_javascript_line,
    STATE(737), 1,
      sym__un_delimited_javascript,
  [17808] = 1,
    ACTIONS(482), 2,
      sym__dedent,
      aux_sym_filter_content_token2,
  [17813] = 1,
    ACTIONS(1575), 2,
      sym__dedent,
      aux_sym_filter_content_token2,
  [17818] = 2,
    ACTIONS(1675), 1,
      anon_sym_SQUOTE,
    ACTIONS(1677), 1,
      aux_sym_quoted_javascript_token1,
  [17825] = 2,
    ACTIONS(1675), 1,
      anon_sym_DQUOTE,
    ACTIONS(1679), 1,
      aux_sym_quoted_javascript_token2,
  [17832] = 2,
    ACTIONS(1681), 1,
      anon_sym_SQUOTE,
    ACTIONS(1683), 1,
      aux_sym_quoted_javascript_token1,
  [17839] = 2,
    ACTIONS(1681), 1,
      anon_sym_DQUOTE,
    ACTIONS(1685), 1,
      aux_sym_quoted_javascript_token2,
  [17846] = 2,
    ACTIONS(1500), 1,
      anon_sym_,
    ACTIONS(1502), 1,
      anon_sym_COMMA,
  [17853] = 2,
    ACTIONS(824), 1,
      sym__indent,
    STATE(349), 1,
      sym_children,
  [17860] = 1,
    ACTIONS(1687), 2,
      sym__newline,
      anon_sym_COLON,
  [17865] = 2,
    ACTIONS(619), 1,
      sym__indent,
    STATE(174), 1,
      sym_children,
  [17872] = 2,
    ACTIONS(511), 1,
      sym__indent,
    STATE(133), 1,
      sym_children,
  [17879] = 2,
    ACTIONS(659), 1,
      sym__indent,
    STATE(242), 1,
      sym_children,
  [17886] = 2,
    ACTIONS(824), 1,
      sym__indent,
    STATE(330), 1,
      sym_children,
  [17893] = 1,
    ACTIONS(1689), 1,
      aux_sym_unbuffered_code_token1,
  [17897] = 1,
    ACTIONS(1691), 1,
      sym__newline,
  [17901] = 1,
    ACTIONS(1693), 1,
      aux_sym_unbuffered_code_token1,
  [17905] = 1,
    ACTIONS(1695), 1,
      sym__newline,
  [17909] = 1,
    ACTIONS(1697), 1,
      sym__newline,
  [17913] = 1,
    ACTIONS(1699), 1,
      sym__indent,
  [17917] = 1,
    ACTIONS(1701), 1,
      sym__un_delimited_javascript_line,
  [17921] = 1,
    ACTIONS(1703), 1,
      sym__indent,
  [17925] = 1,
    ACTIONS(1705), 1,
      sym__newline,
  [17929] = 1,
    ACTIONS(1707), 1,
      sym__newline,
  [17933] = 1,
    ACTIONS(1709), 1,
      sym_filter_name,
  [17937] = 1,
    ACTIONS(1711), 1,
      sym__indent,
  [17941] = 1,
    ACTIONS(1713), 1,
      sym__newline,
  [17945] = 1,
    ACTIONS(1715), 1,
      ts_builtin_sym_end,
  [17949] = 1,
    ACTIONS(1717), 1,
      anon_sym_DQUOTE,
  [17953] = 1,
    ACTIONS(1719), 1,
      aux_sym_filter_content_token2,
  [17957] = 1,
    ACTIONS(1721), 1,
      sym_filter_name,
  [17961] = 1,
    ACTIONS(1723), 1,
      sym__newline,
  [17965] = 1,
    ACTIONS(1725), 1,
      sym__newline,
  [17969] = 1,
    ACTIONS(1727), 1,
      sym__newline,
  [17973] = 1,
    ACTIONS(1729), 1,
      aux_sym_unbuffered_code_token1,
  [17977] = 1,
    ACTIONS(1731), 1,
      sym__newline,
  [17981] = 1,
    ACTIONS(1733), 1,
      sym__indent,
  [17985] = 1,
    ACTIONS(1735), 1,
      sym__indent,
  [17989] = 1,
    ACTIONS(1737), 1,
      sym_filter_name,
  [17993] = 1,
    ACTIONS(1717), 1,
      anon_sym_SQUOTE,
  [17997] = 1,
    ACTIONS(1739), 1,
      sym__delimited_javascript,
  [18001] = 1,
    ACTIONS(1741), 1,
      sym__indent,
  [18005] = 1,
    ACTIONS(1743), 1,
      sym__delimited_javascript,
  [18009] = 1,
    ACTIONS(1745), 1,
      sym__newline,
  [18013] = 1,
    ACTIONS(1747), 1,
      sym__newline,
  [18017] = 1,
    ACTIONS(1749), 1,
      sym__newline,
  [18021] = 1,
    ACTIONS(1751), 1,
      sym__newline,
  [18025] = 1,
    ACTIONS(1753), 1,
      sym__newline,
  [18029] = 1,
    ACTIONS(1755), 1,
      aux_sym_unbuffered_code_token1,
  [18033] = 1,
    ACTIONS(1757), 1,
      sym__newline,
  [18037] = 1,
    ACTIONS(1759), 1,
      sym__indent,
  [18041] = 1,
    ACTIONS(1761), 1,
      sym__indent,
  [18045] = 1,
    ACTIONS(1763), 1,
      aux_sym_filter_content_token2,
  [18049] = 1,
    ACTIONS(1765), 1,
      anon_sym_DQUOTE,
  [18053] = 1,
    ACTIONS(1767), 1,
      sym__indent,
  [18057] = 1,
    ACTIONS(1769), 1,
      sym__newline,
  [18061] = 1,
    ACTIONS(1771), 1,
      sym__newline,
  [18065] = 1,
    ACTIONS(1765), 1,
      anon_sym_SQUOTE,
  [18069] = 1,
    ACTIONS(1773), 1,
      sym_filter_name,
  [18073] = 1,
    ACTIONS(1775), 1,
      sym__indent,
  [18077] = 1,
    ACTIONS(1777), 1,
      sym__newline,
  [18081] = 1,
    ACTIONS(1779), 1,
      sym__indent,
  [18085] = 1,
    ACTIONS(1781), 1,
      sym__newline,
  [18089] = 1,
    ACTIONS(1783), 1,
      sym__newline,
  [18093] = 1,
    ACTIONS(1785), 1,
      sym__newline,
  [18097] = 1,
    ACTIONS(1787), 1,
      sym__indent,
  [18101] = 1,
    ACTIONS(1789), 1,
      sym__newline,
  [18105] = 1,
    ACTIONS(1791), 1,
      anon_sym_RBRACE,
  [18109] = 1,
    ACTIONS(1791), 1,
      anon_sym_RBRACE_RBRACE,
  [18113] = 1,
    ACTIONS(1793), 1,
      sym__indent,
  [18117] = 1,
    ACTIONS(1795), 1,
      sym__indent,
  [18121] = 1,
    ACTIONS(1797), 1,
      aux_sym_filter_content_token2,
  [18125] = 1,
    ACTIONS(1799), 1,
      sym__newline,
  [18129] = 1,
    ACTIONS(1801), 1,
      aux_sym_filter_content_token2,
  [18133] = 1,
    ACTIONS(1803), 1,
      sym__indent,
  [18137] = 1,
    ACTIONS(1805), 1,
      aux_sym_unbuffered_code_token1,
  [18141] = 1,
    ACTIONS(1807), 1,
      sym__indent,
  [18145] = 1,
    ACTIONS(1809), 1,
      sym__newline,
  [18149] = 1,
    ACTIONS(1811), 1,
      sym__newline,
  [18153] = 1,
    ACTIONS(1813), 1,
      sym__indent,
  [18157] = 1,
    ACTIONS(1815), 1,
      sym__newline,
  [18161] = 1,
    ACTIONS(1817), 1,
      sym__newline,
  [18165] = 1,
    ACTIONS(1819), 1,
      sym__newline,
  [18169] = 1,
    ACTIONS(1821), 1,
      sym__newline,
  [18173] = 1,
    ACTIONS(1823), 1,
      sym__newline,
  [18177] = 1,
    ACTIONS(1825), 1,
      aux_sym_filter_content_token2,
  [18181] = 1,
    ACTIONS(1827), 1,
      aux_sym__attribute_token1,
  [18185] = 1,
    ACTIONS(1829), 1,
      sym__newline,
  [18189] = 1,
    ACTIONS(1831), 1,
      aux_sym__when_keyword_token1,
  [18193] = 1,
    ACTIONS(1833), 1,
      sym__newline,
  [18197] = 1,
    ACTIONS(1835), 1,
      sym__newline,
  [18201] = 1,
    ACTIONS(1837), 1,
      sym__newline,
  [18205] = 1,
    ACTIONS(1839), 1,
      sym__indent,
  [18209] = 1,
    ACTIONS(1841), 1,
      sym__indent,
  [18213] = 1,
    ACTIONS(1843), 1,
      sym__indent,
  [18217] = 1,
    ACTIONS(1845), 1,
      sym__indent,
  [18221] = 1,
    ACTIONS(1847), 1,
      sym__newline,
  [18225] = 1,
    ACTIONS(1849), 1,
      sym__newline,
  [18229] = 1,
    ACTIONS(1851), 1,
      sym__indent,
  [18233] = 1,
    ACTIONS(1853), 1,
      sym__indent,
  [18237] = 1,
    ACTIONS(1855), 1,
      sym__indent,
  [18241] = 1,
    ACTIONS(1857), 1,
      sym__indent,
  [18245] = 1,
    ACTIONS(1859), 1,
      sym_filter_name,
  [18249] = 1,
    ACTIONS(1861), 1,
      sym__indent,
  [18253] = 1,
    ACTIONS(1863), 1,
      sym__indent,
  [18257] = 1,
    ACTIONS(1865), 1,
      sym__indent,
  [18261] = 1,
    ACTIONS(1867), 1,
      sym__indent,
  [18265] = 1,
    ACTIONS(1869), 1,
      sym__newline,
  [18269] = 1,
    ACTIONS(1871), 1,
      sym__indent,
  [18273] = 1,
    ACTIONS(1873), 1,
      sym__indent,
  [18277] = 1,
    ACTIONS(1875), 1,
      sym__indent,
  [18281] = 1,
    ACTIONS(1877), 1,
      sym__indent,
  [18285] = 1,
    ACTIONS(1879), 1,
      sym__indent,
  [18289] = 1,
    ACTIONS(1881), 1,
      sym__indent,
  [18293] = 1,
    ACTIONS(1883), 1,
      sym__indent,
  [18297] = 1,
    ACTIONS(1885), 1,
      sym__indent,
  [18301] = 1,
    ACTIONS(1887), 1,
      sym__un_delimited_javascript_line,
  [18305] = 1,
    ACTIONS(1889), 1,
      sym__newline,
  [18309] = 1,
    ACTIONS(1891), 1,
      sym__newline,
  [18313] = 1,
    ACTIONS(1893), 1,
      sym__newline,
  [18317] = 1,
    ACTIONS(1895), 1,
      sym__un_delimited_javascript_line,
  [18321] = 1,
    ACTIONS(1897), 1,
      sym__newline,
  [18325] = 1,
    ACTIONS(1899), 1,
      sym__newline,
  [18329] = 1,
    ACTIONS(1901), 1,
      sym__newline,
  [18333] = 1,
    ACTIONS(1903), 1,
      sym__newline,
  [18337] = 1,
    ACTIONS(1905), 1,
      sym__newline,
  [18341] = 1,
    ACTIONS(1907), 1,
      sym__newline,
  [18345] = 1,
    ACTIONS(1909), 1,
      sym__newline,
  [18349] = 1,
    ACTIONS(1911), 1,
      sym__newline,
  [18353] = 1,
    ACTIONS(1913), 1,
      sym__newline,
  [18357] = 1,
    ACTIONS(1915), 1,
      sym__newline,
  [18361] = 1,
    ACTIONS(1917), 1,
      sym__newline,
  [18365] = 1,
    ACTIONS(1919), 1,
      sym__newline,
  [18369] = 1,
    ACTIONS(1921), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 78,
  [SMALL_STATE(4)] = 158,
  [SMALL_STATE(5)] = 238,
  [SMALL_STATE(6)] = 315,
  [SMALL_STATE(7)] = 392,
  [SMALL_STATE(8)] = 466,
  [SMALL_STATE(9)] = 542,
  [SMALL_STATE(10)] = 618,
  [SMALL_STATE(11)] = 691,
  [SMALL_STATE(12)] = 764,
  [SMALL_STATE(13)] = 837,
  [SMALL_STATE(14)] = 910,
  [SMALL_STATE(15)] = 983,
  [SMALL_STATE(16)] = 1056,
  [SMALL_STATE(17)] = 1129,
  [SMALL_STATE(18)] = 1202,
  [SMALL_STATE(19)] = 1275,
  [SMALL_STATE(20)] = 1348,
  [SMALL_STATE(21)] = 1421,
  [SMALL_STATE(22)] = 1494,
  [SMALL_STATE(23)] = 1567,
  [SMALL_STATE(24)] = 1640,
  [SMALL_STATE(25)] = 1713,
  [SMALL_STATE(26)] = 1786,
  [SMALL_STATE(27)] = 1859,
  [SMALL_STATE(28)] = 1932,
  [SMALL_STATE(29)] = 2005,
  [SMALL_STATE(30)] = 2078,
  [SMALL_STATE(31)] = 2151,
  [SMALL_STATE(32)] = 2224,
  [SMALL_STATE(33)] = 2297,
  [SMALL_STATE(34)] = 2370,
  [SMALL_STATE(35)] = 2443,
  [SMALL_STATE(36)] = 2516,
  [SMALL_STATE(37)] = 2589,
  [SMALL_STATE(38)] = 2662,
  [SMALL_STATE(39)] = 2735,
  [SMALL_STATE(40)] = 2808,
  [SMALL_STATE(41)] = 2881,
  [SMALL_STATE(42)] = 2951,
  [SMALL_STATE(43)] = 3021,
  [SMALL_STATE(44)] = 3091,
  [SMALL_STATE(45)] = 3161,
  [SMALL_STATE(46)] = 3231,
  [SMALL_STATE(47)] = 3301,
  [SMALL_STATE(48)] = 3371,
  [SMALL_STATE(49)] = 3440,
  [SMALL_STATE(50)] = 3509,
  [SMALL_STATE(51)] = 3555,
  [SMALL_STATE(52)] = 3600,
  [SMALL_STATE(53)] = 3638,
  [SMALL_STATE(54)] = 3676,
  [SMALL_STATE(55)] = 3712,
  [SMALL_STATE(56)] = 3756,
  [SMALL_STATE(57)] = 3796,
  [SMALL_STATE(58)] = 3832,
  [SMALL_STATE(59)] = 3865,
  [SMALL_STATE(60)] = 3908,
  [SMALL_STATE(61)] = 3941,
  [SMALL_STATE(62)] = 3974,
  [SMALL_STATE(63)] = 4007,
  [SMALL_STATE(64)] = 4042,
  [SMALL_STATE(65)] = 4085,
  [SMALL_STATE(66)] = 4124,
  [SMALL_STATE(67)] = 4161,
  [SMALL_STATE(68)] = 4194,
  [SMALL_STATE(69)] = 4227,
  [SMALL_STATE(70)] = 4262,
  [SMALL_STATE(71)] = 4295,
  [SMALL_STATE(72)] = 4332,
  [SMALL_STATE(73)] = 4365,
  [SMALL_STATE(74)] = 4398,
  [SMALL_STATE(75)] = 4431,
  [SMALL_STATE(76)] = 4464,
  [SMALL_STATE(77)] = 4496,
  [SMALL_STATE(78)] = 4528,
  [SMALL_STATE(79)] = 4560,
  [SMALL_STATE(80)] = 4592,
  [SMALL_STATE(81)] = 4624,
  [SMALL_STATE(82)] = 4652,
  [SMALL_STATE(83)] = 4690,
  [SMALL_STATE(84)] = 4720,
  [SMALL_STATE(85)] = 4752,
  [SMALL_STATE(86)] = 4780,
  [SMALL_STATE(87)] = 4810,
  [SMALL_STATE(88)] = 4842,
  [SMALL_STATE(89)] = 4874,
  [SMALL_STATE(90)] = 4906,
  [SMALL_STATE(91)] = 4938,
  [SMALL_STATE(92)] = 4970,
  [SMALL_STATE(93)] = 4998,
  [SMALL_STATE(94)] = 5030,
  [SMALL_STATE(95)] = 5062,
  [SMALL_STATE(96)] = 5090,
  [SMALL_STATE(97)] = 5122,
  [SMALL_STATE(98)] = 5154,
  [SMALL_STATE(99)] = 5182,
  [SMALL_STATE(100)] = 5214,
  [SMALL_STATE(101)] = 5246,
  [SMALL_STATE(102)] = 5280,
  [SMALL_STATE(103)] = 5312,
  [SMALL_STATE(104)] = 5346,
  [SMALL_STATE(105)] = 5382,
  [SMALL_STATE(106)] = 5418,
  [SMALL_STATE(107)] = 5450,
  [SMALL_STATE(108)] = 5484,
  [SMALL_STATE(109)] = 5521,
  [SMALL_STATE(110)] = 5550,
  [SMALL_STATE(111)] = 5581,
  [SMALL_STATE(112)] = 5610,
  [SMALL_STATE(113)] = 5641,
  [SMALL_STATE(114)] = 5668,
  [SMALL_STATE(115)] = 5695,
  [SMALL_STATE(116)] = 5724,
  [SMALL_STATE(117)] = 5755,
  [SMALL_STATE(118)] = 5786,
  [SMALL_STATE(119)] = 5817,
  [SMALL_STATE(120)] = 5848,
  [SMALL_STATE(121)] = 5875,
  [SMALL_STATE(122)] = 5906,
  [SMALL_STATE(123)] = 5937,
  [SMALL_STATE(124)] = 5964,
  [SMALL_STATE(125)] = 5991,
  [SMALL_STATE(126)] = 6022,
  [SMALL_STATE(127)] = 6053,
  [SMALL_STATE(128)] = 6080,
  [SMALL_STATE(129)] = 6107,
  [SMALL_STATE(130)] = 6134,
  [SMALL_STATE(131)] = 6161,
  [SMALL_STATE(132)] = 6188,
  [SMALL_STATE(133)] = 6215,
  [SMALL_STATE(134)] = 6242,
  [SMALL_STATE(135)] = 6271,
  [SMALL_STATE(136)] = 6298,
  [SMALL_STATE(137)] = 6325,
  [SMALL_STATE(138)] = 6352,
  [SMALL_STATE(139)] = 6385,
  [SMALL_STATE(140)] = 6412,
  [SMALL_STATE(141)] = 6439,
  [SMALL_STATE(142)] = 6466,
  [SMALL_STATE(143)] = 6499,
  [SMALL_STATE(144)] = 6526,
  [SMALL_STATE(145)] = 6553,
  [SMALL_STATE(146)] = 6580,
  [SMALL_STATE(147)] = 6607,
  [SMALL_STATE(148)] = 6634,
  [SMALL_STATE(149)] = 6661,
  [SMALL_STATE(150)] = 6688,
  [SMALL_STATE(151)] = 6725,
  [SMALL_STATE(152)] = 6752,
  [SMALL_STATE(153)] = 6779,
  [SMALL_STATE(154)] = 6806,
  [SMALL_STATE(155)] = 6833,
  [SMALL_STATE(156)] = 6860,
  [SMALL_STATE(157)] = 6887,
  [SMALL_STATE(158)] = 6914,
  [SMALL_STATE(159)] = 6941,
  [SMALL_STATE(160)] = 6968,
  [SMALL_STATE(161)] = 6995,
  [SMALL_STATE(162)] = 7022,
  [SMALL_STATE(163)] = 7049,
  [SMALL_STATE(164)] = 7078,
  [SMALL_STATE(165)] = 7104,
  [SMALL_STATE(166)] = 7130,
  [SMALL_STATE(167)] = 7156,
  [SMALL_STATE(168)] = 7182,
  [SMALL_STATE(169)] = 7212,
  [SMALL_STATE(170)] = 7242,
  [SMALL_STATE(171)] = 7272,
  [SMALL_STATE(172)] = 7302,
  [SMALL_STATE(173)] = 7328,
  [SMALL_STATE(174)] = 7356,
  [SMALL_STATE(175)] = 7382,
  [SMALL_STATE(176)] = 7412,
  [SMALL_STATE(177)] = 7438,
  [SMALL_STATE(178)] = 7464,
  [SMALL_STATE(179)] = 7490,
  [SMALL_STATE(180)] = 7516,
  [SMALL_STATE(181)] = 7546,
  [SMALL_STATE(182)] = 7572,
  [SMALL_STATE(183)] = 7598,
  [SMALL_STATE(184)] = 7626,
  [SMALL_STATE(185)] = 7652,
  [SMALL_STATE(186)] = 7678,
  [SMALL_STATE(187)] = 7708,
  [SMALL_STATE(188)] = 7734,
  [SMALL_STATE(189)] = 7760,
  [SMALL_STATE(190)] = 7790,
  [SMALL_STATE(191)] = 7822,
  [SMALL_STATE(192)] = 7852,
  [SMALL_STATE(193)] = 7878,
  [SMALL_STATE(194)] = 7904,
  [SMALL_STATE(195)] = 7930,
  [SMALL_STATE(196)] = 7956,
  [SMALL_STATE(197)] = 7982,
  [SMALL_STATE(198)] = 8012,
  [SMALL_STATE(199)] = 8040,
  [SMALL_STATE(200)] = 8066,
  [SMALL_STATE(201)] = 8092,
  [SMALL_STATE(202)] = 8118,
  [SMALL_STATE(203)] = 8148,
  [SMALL_STATE(204)] = 8174,
  [SMALL_STATE(205)] = 8200,
  [SMALL_STATE(206)] = 8226,
  [SMALL_STATE(207)] = 8256,
  [SMALL_STATE(208)] = 8282,
  [SMALL_STATE(209)] = 8308,
  [SMALL_STATE(210)] = 8334,
  [SMALL_STATE(211)] = 8360,
  [SMALL_STATE(212)] = 8386,
  [SMALL_STATE(213)] = 8412,
  [SMALL_STATE(214)] = 8438,
  [SMALL_STATE(215)] = 8464,
  [SMALL_STATE(216)] = 8490,
  [SMALL_STATE(217)] = 8516,
  [SMALL_STATE(218)] = 8542,
  [SMALL_STATE(219)] = 8570,
  [SMALL_STATE(220)] = 8596,
  [SMALL_STATE(221)] = 8622,
  [SMALL_STATE(222)] = 8648,
  [SMALL_STATE(223)] = 8674,
  [SMALL_STATE(224)] = 8706,
  [SMALL_STATE(225)] = 8732,
  [SMALL_STATE(226)] = 8758,
  [SMALL_STATE(227)] = 8784,
  [SMALL_STATE(228)] = 8810,
  [SMALL_STATE(229)] = 8836,
  [SMALL_STATE(230)] = 8862,
  [SMALL_STATE(231)] = 8888,
  [SMALL_STATE(232)] = 8916,
  [SMALL_STATE(233)] = 8942,
  [SMALL_STATE(234)] = 8968,
  [SMALL_STATE(235)] = 8994,
  [SMALL_STATE(236)] = 9019,
  [SMALL_STATE(237)] = 9048,
  [SMALL_STATE(238)] = 9073,
  [SMALL_STATE(239)] = 9098,
  [SMALL_STATE(240)] = 9125,
  [SMALL_STATE(241)] = 9150,
  [SMALL_STATE(242)] = 9175,
  [SMALL_STATE(243)] = 9200,
  [SMALL_STATE(244)] = 9225,
  [SMALL_STATE(245)] = 9250,
  [SMALL_STATE(246)] = 9275,
  [SMALL_STATE(247)] = 9300,
  [SMALL_STATE(248)] = 9325,
  [SMALL_STATE(249)] = 9350,
  [SMALL_STATE(250)] = 9379,
  [SMALL_STATE(251)] = 9404,
  [SMALL_STATE(252)] = 9429,
  [SMALL_STATE(253)] = 9454,
  [SMALL_STATE(254)] = 9481,
  [SMALL_STATE(255)] = 9506,
  [SMALL_STATE(256)] = 9531,
  [SMALL_STATE(257)] = 9556,
  [SMALL_STATE(258)] = 9581,
  [SMALL_STATE(259)] = 9610,
  [SMALL_STATE(260)] = 9635,
  [SMALL_STATE(261)] = 9660,
  [SMALL_STATE(262)] = 9685,
  [SMALL_STATE(263)] = 9710,
  [SMALL_STATE(264)] = 9735,
  [SMALL_STATE(265)] = 9760,
  [SMALL_STATE(266)] = 9785,
  [SMALL_STATE(267)] = 9810,
  [SMALL_STATE(268)] = 9835,
  [SMALL_STATE(269)] = 9860,
  [SMALL_STATE(270)] = 9885,
  [SMALL_STATE(271)] = 9910,
  [SMALL_STATE(272)] = 9937,
  [SMALL_STATE(273)] = 9962,
  [SMALL_STATE(274)] = 9991,
  [SMALL_STATE(275)] = 10016,
  [SMALL_STATE(276)] = 10041,
  [SMALL_STATE(277)] = 10066,
  [SMALL_STATE(278)] = 10093,
  [SMALL_STATE(279)] = 10122,
  [SMALL_STATE(280)] = 10147,
  [SMALL_STATE(281)] = 10176,
  [SMALL_STATE(282)] = 10205,
  [SMALL_STATE(283)] = 10234,
  [SMALL_STATE(284)] = 10259,
  [SMALL_STATE(285)] = 10284,
  [SMALL_STATE(286)] = 10313,
  [SMALL_STATE(287)] = 10338,
  [SMALL_STATE(288)] = 10365,
  [SMALL_STATE(289)] = 10389,
  [SMALL_STATE(290)] = 10413,
  [SMALL_STATE(291)] = 10437,
  [SMALL_STATE(292)] = 10461,
  [SMALL_STATE(293)] = 10485,
  [SMALL_STATE(294)] = 10509,
  [SMALL_STATE(295)] = 10533,
  [SMALL_STATE(296)] = 10557,
  [SMALL_STATE(297)] = 10581,
  [SMALL_STATE(298)] = 10605,
  [SMALL_STATE(299)] = 10629,
  [SMALL_STATE(300)] = 10653,
  [SMALL_STATE(301)] = 10679,
  [SMALL_STATE(302)] = 10703,
  [SMALL_STATE(303)] = 10727,
  [SMALL_STATE(304)] = 10751,
  [SMALL_STATE(305)] = 10775,
  [SMALL_STATE(306)] = 10801,
  [SMALL_STATE(307)] = 10825,
  [SMALL_STATE(308)] = 10851,
  [SMALL_STATE(309)] = 10877,
  [SMALL_STATE(310)] = 10901,
  [SMALL_STATE(311)] = 10925,
  [SMALL_STATE(312)] = 10949,
  [SMALL_STATE(313)] = 10973,
  [SMALL_STATE(314)] = 10997,
  [SMALL_STATE(315)] = 11023,
  [SMALL_STATE(316)] = 11047,
  [SMALL_STATE(317)] = 11071,
  [SMALL_STATE(318)] = 11095,
  [SMALL_STATE(319)] = 11119,
  [SMALL_STATE(320)] = 11143,
  [SMALL_STATE(321)] = 11167,
  [SMALL_STATE(322)] = 11193,
  [SMALL_STATE(323)] = 11217,
  [SMALL_STATE(324)] = 11241,
  [SMALL_STATE(325)] = 11265,
  [SMALL_STATE(326)] = 11288,
  [SMALL_STATE(327)] = 11311,
  [SMALL_STATE(328)] = 11334,
  [SMALL_STATE(329)] = 11357,
  [SMALL_STATE(330)] = 11380,
  [SMALL_STATE(331)] = 11403,
  [SMALL_STATE(332)] = 11426,
  [SMALL_STATE(333)] = 11449,
  [SMALL_STATE(334)] = 11472,
  [SMALL_STATE(335)] = 11495,
  [SMALL_STATE(336)] = 11518,
  [SMALL_STATE(337)] = 11541,
  [SMALL_STATE(338)] = 11564,
  [SMALL_STATE(339)] = 11587,
  [SMALL_STATE(340)] = 11610,
  [SMALL_STATE(341)] = 11633,
  [SMALL_STATE(342)] = 11656,
  [SMALL_STATE(343)] = 11679,
  [SMALL_STATE(344)] = 11702,
  [SMALL_STATE(345)] = 11725,
  [SMALL_STATE(346)] = 11748,
  [SMALL_STATE(347)] = 11771,
  [SMALL_STATE(348)] = 11794,
  [SMALL_STATE(349)] = 11817,
  [SMALL_STATE(350)] = 11840,
  [SMALL_STATE(351)] = 11863,
  [SMALL_STATE(352)] = 11886,
  [SMALL_STATE(353)] = 11909,
  [SMALL_STATE(354)] = 11932,
  [SMALL_STATE(355)] = 11955,
  [SMALL_STATE(356)] = 11995,
  [SMALL_STATE(357)] = 12035,
  [SMALL_STATE(358)] = 12075,
  [SMALL_STATE(359)] = 12115,
  [SMALL_STATE(360)] = 12155,
  [SMALL_STATE(361)] = 12195,
  [SMALL_STATE(362)] = 12235,
  [SMALL_STATE(363)] = 12275,
  [SMALL_STATE(364)] = 12315,
  [SMALL_STATE(365)] = 12355,
  [SMALL_STATE(366)] = 12395,
  [SMALL_STATE(367)] = 12435,
  [SMALL_STATE(368)] = 12475,
  [SMALL_STATE(369)] = 12515,
  [SMALL_STATE(370)] = 12540,
  [SMALL_STATE(371)] = 12565,
  [SMALL_STATE(372)] = 12585,
  [SMALL_STATE(373)] = 12610,
  [SMALL_STATE(374)] = 12635,
  [SMALL_STATE(375)] = 12662,
  [SMALL_STATE(376)] = 12689,
  [SMALL_STATE(377)] = 12714,
  [SMALL_STATE(378)] = 12739,
  [SMALL_STATE(379)] = 12766,
  [SMALL_STATE(380)] = 12793,
  [SMALL_STATE(381)] = 12820,
  [SMALL_STATE(382)] = 12845,
  [SMALL_STATE(383)] = 12872,
  [SMALL_STATE(384)] = 12897,
  [SMALL_STATE(385)] = 12922,
  [SMALL_STATE(386)] = 12949,
  [SMALL_STATE(387)] = 12976,
  [SMALL_STATE(388)] = 13001,
  [SMALL_STATE(389)] = 13028,
  [SMALL_STATE(390)] = 13055,
  [SMALL_STATE(391)] = 13082,
  [SMALL_STATE(392)] = 13107,
  [SMALL_STATE(393)] = 13132,
  [SMALL_STATE(394)] = 13159,
  [SMALL_STATE(395)] = 13184,
  [SMALL_STATE(396)] = 13209,
  [SMALL_STATE(397)] = 13236,
  [SMALL_STATE(398)] = 13261,
  [SMALL_STATE(399)] = 13288,
  [SMALL_STATE(400)] = 13312,
  [SMALL_STATE(401)] = 13336,
  [SMALL_STATE(402)] = 13360,
  [SMALL_STATE(403)] = 13384,
  [SMALL_STATE(404)] = 13408,
  [SMALL_STATE(405)] = 13432,
  [SMALL_STATE(406)] = 13456,
  [SMALL_STATE(407)] = 13480,
  [SMALL_STATE(408)] = 13504,
  [SMALL_STATE(409)] = 13528,
  [SMALL_STATE(410)] = 13552,
  [SMALL_STATE(411)] = 13576,
  [SMALL_STATE(412)] = 13600,
  [SMALL_STATE(413)] = 13624,
  [SMALL_STATE(414)] = 13648,
  [SMALL_STATE(415)] = 13672,
  [SMALL_STATE(416)] = 13696,
  [SMALL_STATE(417)] = 13720,
  [SMALL_STATE(418)] = 13744,
  [SMALL_STATE(419)] = 13768,
  [SMALL_STATE(420)] = 13792,
  [SMALL_STATE(421)] = 13815,
  [SMALL_STATE(422)] = 13838,
  [SMALL_STATE(423)] = 13861,
  [SMALL_STATE(424)] = 13884,
  [SMALL_STATE(425)] = 13907,
  [SMALL_STATE(426)] = 13930,
  [SMALL_STATE(427)] = 13953,
  [SMALL_STATE(428)] = 13976,
  [SMALL_STATE(429)] = 13999,
  [SMALL_STATE(430)] = 14022,
  [SMALL_STATE(431)] = 14045,
  [SMALL_STATE(432)] = 14068,
  [SMALL_STATE(433)] = 14091,
  [SMALL_STATE(434)] = 14114,
  [SMALL_STATE(435)] = 14139,
  [SMALL_STATE(436)] = 14162,
  [SMALL_STATE(437)] = 14182,
  [SMALL_STATE(438)] = 14198,
  [SMALL_STATE(439)] = 14218,
  [SMALL_STATE(440)] = 14234,
  [SMALL_STATE(441)] = 14246,
  [SMALL_STATE(442)] = 14266,
  [SMALL_STATE(443)] = 14280,
  [SMALL_STATE(444)] = 14300,
  [SMALL_STATE(445)] = 14314,
  [SMALL_STATE(446)] = 14326,
  [SMALL_STATE(447)] = 14346,
  [SMALL_STATE(448)] = 14366,
  [SMALL_STATE(449)] = 14386,
  [SMALL_STATE(450)] = 14406,
  [SMALL_STATE(451)] = 14422,
  [SMALL_STATE(452)] = 14436,
  [SMALL_STATE(453)] = 14456,
  [SMALL_STATE(454)] = 14476,
  [SMALL_STATE(455)] = 14496,
  [SMALL_STATE(456)] = 14516,
  [SMALL_STATE(457)] = 14536,
  [SMALL_STATE(458)] = 14556,
  [SMALL_STATE(459)] = 14576,
  [SMALL_STATE(460)] = 14596,
  [SMALL_STATE(461)] = 14610,
  [SMALL_STATE(462)] = 14626,
  [SMALL_STATE(463)] = 14646,
  [SMALL_STATE(464)] = 14666,
  [SMALL_STATE(465)] = 14686,
  [SMALL_STATE(466)] = 14702,
  [SMALL_STATE(467)] = 14722,
  [SMALL_STATE(468)] = 14736,
  [SMALL_STATE(469)] = 14752,
  [SMALL_STATE(470)] = 14772,
  [SMALL_STATE(471)] = 14792,
  [SMALL_STATE(472)] = 14812,
  [SMALL_STATE(473)] = 14832,
  [SMALL_STATE(474)] = 14852,
  [SMALL_STATE(475)] = 14872,
  [SMALL_STATE(476)] = 14892,
  [SMALL_STATE(477)] = 14912,
  [SMALL_STATE(478)] = 14932,
  [SMALL_STATE(479)] = 14952,
  [SMALL_STATE(480)] = 14972,
  [SMALL_STATE(481)] = 14992,
  [SMALL_STATE(482)] = 15012,
  [SMALL_STATE(483)] = 15032,
  [SMALL_STATE(484)] = 15044,
  [SMALL_STATE(485)] = 15064,
  [SMALL_STATE(486)] = 15084,
  [SMALL_STATE(487)] = 15104,
  [SMALL_STATE(488)] = 15124,
  [SMALL_STATE(489)] = 15144,
  [SMALL_STATE(490)] = 15158,
  [SMALL_STATE(491)] = 15178,
  [SMALL_STATE(492)] = 15192,
  [SMALL_STATE(493)] = 15212,
  [SMALL_STATE(494)] = 15232,
  [SMALL_STATE(495)] = 15252,
  [SMALL_STATE(496)] = 15272,
  [SMALL_STATE(497)] = 15292,
  [SMALL_STATE(498)] = 15312,
  [SMALL_STATE(499)] = 15332,
  [SMALL_STATE(500)] = 15348,
  [SMALL_STATE(501)] = 15368,
  [SMALL_STATE(502)] = 15388,
  [SMALL_STATE(503)] = 15408,
  [SMALL_STATE(504)] = 15428,
  [SMALL_STATE(505)] = 15448,
  [SMALL_STATE(506)] = 15462,
  [SMALL_STATE(507)] = 15482,
  [SMALL_STATE(508)] = 15502,
  [SMALL_STATE(509)] = 15518,
  [SMALL_STATE(510)] = 15534,
  [SMALL_STATE(511)] = 15549,
  [SMALL_STATE(512)] = 15562,
  [SMALL_STATE(513)] = 15579,
  [SMALL_STATE(514)] = 15596,
  [SMALL_STATE(515)] = 15609,
  [SMALL_STATE(516)] = 15626,
  [SMALL_STATE(517)] = 15643,
  [SMALL_STATE(518)] = 15660,
  [SMALL_STATE(519)] = 15677,
  [SMALL_STATE(520)] = 15694,
  [SMALL_STATE(521)] = 15711,
  [SMALL_STATE(522)] = 15724,
  [SMALL_STATE(523)] = 15741,
  [SMALL_STATE(524)] = 15754,
  [SMALL_STATE(525)] = 15771,
  [SMALL_STATE(526)] = 15788,
  [SMALL_STATE(527)] = 15805,
  [SMALL_STATE(528)] = 15822,
  [SMALL_STATE(529)] = 15835,
  [SMALL_STATE(530)] = 15852,
  [SMALL_STATE(531)] = 15869,
  [SMALL_STATE(532)] = 15880,
  [SMALL_STATE(533)] = 15897,
  [SMALL_STATE(534)] = 15914,
  [SMALL_STATE(535)] = 15929,
  [SMALL_STATE(536)] = 15946,
  [SMALL_STATE(537)] = 15963,
  [SMALL_STATE(538)] = 15976,
  [SMALL_STATE(539)] = 15993,
  [SMALL_STATE(540)] = 16006,
  [SMALL_STATE(541)] = 16023,
  [SMALL_STATE(542)] = 16040,
  [SMALL_STATE(543)] = 16057,
  [SMALL_STATE(544)] = 16074,
  [SMALL_STATE(545)] = 16091,
  [SMALL_STATE(546)] = 16104,
  [SMALL_STATE(547)] = 16121,
  [SMALL_STATE(548)] = 16138,
  [SMALL_STATE(549)] = 16155,
  [SMALL_STATE(550)] = 16163,
  [SMALL_STATE(551)] = 16171,
  [SMALL_STATE(552)] = 16179,
  [SMALL_STATE(553)] = 16187,
  [SMALL_STATE(554)] = 16199,
  [SMALL_STATE(555)] = 16213,
  [SMALL_STATE(556)] = 16225,
  [SMALL_STATE(557)] = 16233,
  [SMALL_STATE(558)] = 16241,
  [SMALL_STATE(559)] = 16253,
  [SMALL_STATE(560)] = 16261,
  [SMALL_STATE(561)] = 16269,
  [SMALL_STATE(562)] = 16279,
  [SMALL_STATE(563)] = 16293,
  [SMALL_STATE(564)] = 16301,
  [SMALL_STATE(565)] = 16309,
  [SMALL_STATE(566)] = 16317,
  [SMALL_STATE(567)] = 16325,
  [SMALL_STATE(568)] = 16339,
  [SMALL_STATE(569)] = 16353,
  [SMALL_STATE(570)] = 16361,
  [SMALL_STATE(571)] = 16373,
  [SMALL_STATE(572)] = 16381,
  [SMALL_STATE(573)] = 16395,
  [SMALL_STATE(574)] = 16404,
  [SMALL_STATE(575)] = 16413,
  [SMALL_STATE(576)] = 16426,
  [SMALL_STATE(577)] = 16435,
  [SMALL_STATE(578)] = 16448,
  [SMALL_STATE(579)] = 16457,
  [SMALL_STATE(580)] = 16470,
  [SMALL_STATE(581)] = 16479,
  [SMALL_STATE(582)] = 16488,
  [SMALL_STATE(583)] = 16501,
  [SMALL_STATE(584)] = 16510,
  [SMALL_STATE(585)] = 16523,
  [SMALL_STATE(586)] = 16532,
  [SMALL_STATE(587)] = 16545,
  [SMALL_STATE(588)] = 16554,
  [SMALL_STATE(589)] = 16567,
  [SMALL_STATE(590)] = 16580,
  [SMALL_STATE(591)] = 16589,
  [SMALL_STATE(592)] = 16598,
  [SMALL_STATE(593)] = 16607,
  [SMALL_STATE(594)] = 16616,
  [SMALL_STATE(595)] = 16625,
  [SMALL_STATE(596)] = 16634,
  [SMALL_STATE(597)] = 16643,
  [SMALL_STATE(598)] = 16656,
  [SMALL_STATE(599)] = 16665,
  [SMALL_STATE(600)] = 16674,
  [SMALL_STATE(601)] = 16687,
  [SMALL_STATE(602)] = 16696,
  [SMALL_STATE(603)] = 16709,
  [SMALL_STATE(604)] = 16722,
  [SMALL_STATE(605)] = 16735,
  [SMALL_STATE(606)] = 16744,
  [SMALL_STATE(607)] = 16753,
  [SMALL_STATE(608)] = 16762,
  [SMALL_STATE(609)] = 16775,
  [SMALL_STATE(610)] = 16788,
  [SMALL_STATE(611)] = 16797,
  [SMALL_STATE(612)] = 16806,
  [SMALL_STATE(613)] = 16815,
  [SMALL_STATE(614)] = 16824,
  [SMALL_STATE(615)] = 16833,
  [SMALL_STATE(616)] = 16842,
  [SMALL_STATE(617)] = 16851,
  [SMALL_STATE(618)] = 16862,
  [SMALL_STATE(619)] = 16875,
  [SMALL_STATE(620)] = 16884,
  [SMALL_STATE(621)] = 16897,
  [SMALL_STATE(622)] = 16906,
  [SMALL_STATE(623)] = 16915,
  [SMALL_STATE(624)] = 16924,
  [SMALL_STATE(625)] = 16934,
  [SMALL_STATE(626)] = 16944,
  [SMALL_STATE(627)] = 16954,
  [SMALL_STATE(628)] = 16964,
  [SMALL_STATE(629)] = 16972,
  [SMALL_STATE(630)] = 16980,
  [SMALL_STATE(631)] = 16988,
  [SMALL_STATE(632)] = 16998,
  [SMALL_STATE(633)] = 17008,
  [SMALL_STATE(634)] = 17016,
  [SMALL_STATE(635)] = 17022,
  [SMALL_STATE(636)] = 17032,
  [SMALL_STATE(637)] = 17042,
  [SMALL_STATE(638)] = 17052,
  [SMALL_STATE(639)] = 17062,
  [SMALL_STATE(640)] = 17072,
  [SMALL_STATE(641)] = 17082,
  [SMALL_STATE(642)] = 17092,
  [SMALL_STATE(643)] = 17102,
  [SMALL_STATE(644)] = 17112,
  [SMALL_STATE(645)] = 17122,
  [SMALL_STATE(646)] = 17130,
  [SMALL_STATE(647)] = 17140,
  [SMALL_STATE(648)] = 17150,
  [SMALL_STATE(649)] = 17158,
  [SMALL_STATE(650)] = 17168,
  [SMALL_STATE(651)] = 17178,
  [SMALL_STATE(652)] = 17186,
  [SMALL_STATE(653)] = 17192,
  [SMALL_STATE(654)] = 17202,
  [SMALL_STATE(655)] = 17212,
  [SMALL_STATE(656)] = 17222,
  [SMALL_STATE(657)] = 17232,
  [SMALL_STATE(658)] = 17242,
  [SMALL_STATE(659)] = 17252,
  [SMALL_STATE(660)] = 17258,
  [SMALL_STATE(661)] = 17268,
  [SMALL_STATE(662)] = 17278,
  [SMALL_STATE(663)] = 17288,
  [SMALL_STATE(664)] = 17298,
  [SMALL_STATE(665)] = 17308,
  [SMALL_STATE(666)] = 17318,
  [SMALL_STATE(667)] = 17328,
  [SMALL_STATE(668)] = 17338,
  [SMALL_STATE(669)] = 17344,
  [SMALL_STATE(670)] = 17354,
  [SMALL_STATE(671)] = 17364,
  [SMALL_STATE(672)] = 17370,
  [SMALL_STATE(673)] = 17380,
  [SMALL_STATE(674)] = 17390,
  [SMALL_STATE(675)] = 17398,
  [SMALL_STATE(676)] = 17406,
  [SMALL_STATE(677)] = 17414,
  [SMALL_STATE(678)] = 17424,
  [SMALL_STATE(679)] = 17434,
  [SMALL_STATE(680)] = 17442,
  [SMALL_STATE(681)] = 17452,
  [SMALL_STATE(682)] = 17462,
  [SMALL_STATE(683)] = 17470,
  [SMALL_STATE(684)] = 17480,
  [SMALL_STATE(685)] = 17490,
  [SMALL_STATE(686)] = 17500,
  [SMALL_STATE(687)] = 17510,
  [SMALL_STATE(688)] = 17520,
  [SMALL_STATE(689)] = 17530,
  [SMALL_STATE(690)] = 17540,
  [SMALL_STATE(691)] = 17550,
  [SMALL_STATE(692)] = 17560,
  [SMALL_STATE(693)] = 17570,
  [SMALL_STATE(694)] = 17580,
  [SMALL_STATE(695)] = 17590,
  [SMALL_STATE(696)] = 17600,
  [SMALL_STATE(697)] = 17610,
  [SMALL_STATE(698)] = 17620,
  [SMALL_STATE(699)] = 17630,
  [SMALL_STATE(700)] = 17640,
  [SMALL_STATE(701)] = 17646,
  [SMALL_STATE(702)] = 17654,
  [SMALL_STATE(703)] = 17662,
  [SMALL_STATE(704)] = 17672,
  [SMALL_STATE(705)] = 17682,
  [SMALL_STATE(706)] = 17692,
  [SMALL_STATE(707)] = 17698,
  [SMALL_STATE(708)] = 17708,
  [SMALL_STATE(709)] = 17718,
  [SMALL_STATE(710)] = 17728,
  [SMALL_STATE(711)] = 17738,
  [SMALL_STATE(712)] = 17745,
  [SMALL_STATE(713)] = 17752,
  [SMALL_STATE(714)] = 17759,
  [SMALL_STATE(715)] = 17766,
  [SMALL_STATE(716)] = 17773,
  [SMALL_STATE(717)] = 17780,
  [SMALL_STATE(718)] = 17787,
  [SMALL_STATE(719)] = 17794,
  [SMALL_STATE(720)] = 17801,
  [SMALL_STATE(721)] = 17808,
  [SMALL_STATE(722)] = 17813,
  [SMALL_STATE(723)] = 17818,
  [SMALL_STATE(724)] = 17825,
  [SMALL_STATE(725)] = 17832,
  [SMALL_STATE(726)] = 17839,
  [SMALL_STATE(727)] = 17846,
  [SMALL_STATE(728)] = 17853,
  [SMALL_STATE(729)] = 17860,
  [SMALL_STATE(730)] = 17865,
  [SMALL_STATE(731)] = 17872,
  [SMALL_STATE(732)] = 17879,
  [SMALL_STATE(733)] = 17886,
  [SMALL_STATE(734)] = 17893,
  [SMALL_STATE(735)] = 17897,
  [SMALL_STATE(736)] = 17901,
  [SMALL_STATE(737)] = 17905,
  [SMALL_STATE(738)] = 17909,
  [SMALL_STATE(739)] = 17913,
  [SMALL_STATE(740)] = 17917,
  [SMALL_STATE(741)] = 17921,
  [SMALL_STATE(742)] = 17925,
  [SMALL_STATE(743)] = 17929,
  [SMALL_STATE(744)] = 17933,
  [SMALL_STATE(745)] = 17937,
  [SMALL_STATE(746)] = 17941,
  [SMALL_STATE(747)] = 17945,
  [SMALL_STATE(748)] = 17949,
  [SMALL_STATE(749)] = 17953,
  [SMALL_STATE(750)] = 17957,
  [SMALL_STATE(751)] = 17961,
  [SMALL_STATE(752)] = 17965,
  [SMALL_STATE(753)] = 17969,
  [SMALL_STATE(754)] = 17973,
  [SMALL_STATE(755)] = 17977,
  [SMALL_STATE(756)] = 17981,
  [SMALL_STATE(757)] = 17985,
  [SMALL_STATE(758)] = 17989,
  [SMALL_STATE(759)] = 17993,
  [SMALL_STATE(760)] = 17997,
  [SMALL_STATE(761)] = 18001,
  [SMALL_STATE(762)] = 18005,
  [SMALL_STATE(763)] = 18009,
  [SMALL_STATE(764)] = 18013,
  [SMALL_STATE(765)] = 18017,
  [SMALL_STATE(766)] = 18021,
  [SMALL_STATE(767)] = 18025,
  [SMALL_STATE(768)] = 18029,
  [SMALL_STATE(769)] = 18033,
  [SMALL_STATE(770)] = 18037,
  [SMALL_STATE(771)] = 18041,
  [SMALL_STATE(772)] = 18045,
  [SMALL_STATE(773)] = 18049,
  [SMALL_STATE(774)] = 18053,
  [SMALL_STATE(775)] = 18057,
  [SMALL_STATE(776)] = 18061,
  [SMALL_STATE(777)] = 18065,
  [SMALL_STATE(778)] = 18069,
  [SMALL_STATE(779)] = 18073,
  [SMALL_STATE(780)] = 18077,
  [SMALL_STATE(781)] = 18081,
  [SMALL_STATE(782)] = 18085,
  [SMALL_STATE(783)] = 18089,
  [SMALL_STATE(784)] = 18093,
  [SMALL_STATE(785)] = 18097,
  [SMALL_STATE(786)] = 18101,
  [SMALL_STATE(787)] = 18105,
  [SMALL_STATE(788)] = 18109,
  [SMALL_STATE(789)] = 18113,
  [SMALL_STATE(790)] = 18117,
  [SMALL_STATE(791)] = 18121,
  [SMALL_STATE(792)] = 18125,
  [SMALL_STATE(793)] = 18129,
  [SMALL_STATE(794)] = 18133,
  [SMALL_STATE(795)] = 18137,
  [SMALL_STATE(796)] = 18141,
  [SMALL_STATE(797)] = 18145,
  [SMALL_STATE(798)] = 18149,
  [SMALL_STATE(799)] = 18153,
  [SMALL_STATE(800)] = 18157,
  [SMALL_STATE(801)] = 18161,
  [SMALL_STATE(802)] = 18165,
  [SMALL_STATE(803)] = 18169,
  [SMALL_STATE(804)] = 18173,
  [SMALL_STATE(805)] = 18177,
  [SMALL_STATE(806)] = 18181,
  [SMALL_STATE(807)] = 18185,
  [SMALL_STATE(808)] = 18189,
  [SMALL_STATE(809)] = 18193,
  [SMALL_STATE(810)] = 18197,
  [SMALL_STATE(811)] = 18201,
  [SMALL_STATE(812)] = 18205,
  [SMALL_STATE(813)] = 18209,
  [SMALL_STATE(814)] = 18213,
  [SMALL_STATE(815)] = 18217,
  [SMALL_STATE(816)] = 18221,
  [SMALL_STATE(817)] = 18225,
  [SMALL_STATE(818)] = 18229,
  [SMALL_STATE(819)] = 18233,
  [SMALL_STATE(820)] = 18237,
  [SMALL_STATE(821)] = 18241,
  [SMALL_STATE(822)] = 18245,
  [SMALL_STATE(823)] = 18249,
  [SMALL_STATE(824)] = 18253,
  [SMALL_STATE(825)] = 18257,
  [SMALL_STATE(826)] = 18261,
  [SMALL_STATE(827)] = 18265,
  [SMALL_STATE(828)] = 18269,
  [SMALL_STATE(829)] = 18273,
  [SMALL_STATE(830)] = 18277,
  [SMALL_STATE(831)] = 18281,
  [SMALL_STATE(832)] = 18285,
  [SMALL_STATE(833)] = 18289,
  [SMALL_STATE(834)] = 18293,
  [SMALL_STATE(835)] = 18297,
  [SMALL_STATE(836)] = 18301,
  [SMALL_STATE(837)] = 18305,
  [SMALL_STATE(838)] = 18309,
  [SMALL_STATE(839)] = 18313,
  [SMALL_STATE(840)] = 18317,
  [SMALL_STATE(841)] = 18321,
  [SMALL_STATE(842)] = 18325,
  [SMALL_STATE(843)] = 18329,
  [SMALL_STATE(844)] = 18333,
  [SMALL_STATE(845)] = 18337,
  [SMALL_STATE(846)] = 18341,
  [SMALL_STATE(847)] = 18345,
  [SMALL_STATE(848)] = 18349,
  [SMALL_STATE(849)] = 18353,
  [SMALL_STATE(850)] = 18357,
  [SMALL_STATE(851)] = 18361,
  [SMALL_STATE(852)] = 18365,
  [SMALL_STATE(853)] = 18369,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(652),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(712),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(743),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(740),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(809),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(644),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(668),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(490),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(758),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(719),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(719),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(752),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(836),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(663),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(662),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(841),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(707),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(707),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(358),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(358),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(754),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(668),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(719),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(752),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(836),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(707),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(634),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(452),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(822),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(717),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(717),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(780),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(840),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(704),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(705),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(847),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(703),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(703),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(356),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(356),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(734),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(5),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(634),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(717),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(780),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(840),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(703),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(706),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(488),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(778),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(720),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(720),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(792),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(708),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(636),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(837),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(666),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(666),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(360),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(360),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(736),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(7),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(706),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(778),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(720),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(792),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(666),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(736),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(671),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(744),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(718),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(766),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(709),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(768),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(843),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(851),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(846),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(849),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(853),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(804),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [344] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(671),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(458),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(744),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(718),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(718),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(766),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(677),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(678),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(844),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(709),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(709),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(357),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(357),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(768),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(21),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(839),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(652),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(486),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(750),
  [406] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(712),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(712),
  [412] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(743),
  [415] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(740),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(687),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(686),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(809),
  [427] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(644),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(644),
  [433] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(368),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(368),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(795),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 2),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(758),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(756),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(822),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(805),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 5, .production_id = 1),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 5, .production_id = 1),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(808),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(658),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2),
  [476] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(808),
  [479] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(658),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_repeat1, 2),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_repeat1, 2),
  [486] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_repeat1, 2), SHIFT_REPEAT(797),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(778),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 3),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 3),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment, 5),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment, 5),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(797),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 2),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(744),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(793),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 3),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 3),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [539] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_repeat1, 2), SHIFT_REPEAT(827),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(750),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(791),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(680),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(827),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [564] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(680),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [573] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(98),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 7),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [588] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(144),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment, 3),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment, 3),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 2),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 2),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(746),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(699),
  [643] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(699),
  [646] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_repeat1, 2), SHIFT_REPEAT(746),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [665] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(234),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 2),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 2),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dummy_tag, 1),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__dummy_tag, 1),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 2),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 2),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 2),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 2),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 3),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 3),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter_content, 1),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter_content, 1),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 3),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 3),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 3),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter_content, 2),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter_content, 2),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 4),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 4),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 4),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 4),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(810),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 4),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 4),
  [730] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_repeat1, 2), SHIFT_REPEAT(810),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter_content, 3),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter_content, 3),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_block, 5, .production_id = 2),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_block, 5, .production_id = 2),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 5),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 5),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_not_first_line, 5),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_not_first_line, 5),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffered_code, 2),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffered_code, 2),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unescaped_buffered_code, 2),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unescaped_buffered_code, 2),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 5, .production_id = 4),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 5, .production_id = 4),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 6),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 6),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter_content, 4),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter_content, 4),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 7, .production_id = 6),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 7, .production_id = 6),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 8),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 8),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 5),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 5),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(767),
  [799] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(284),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [806] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(255),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [811] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_repeat1, 2), SHIFT_REPEAT(767),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 3),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 3),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 6),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 6),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 3),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 3),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(594),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(677),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(678),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(850),
  [876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(576),
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(704),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(705),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(852),
  [894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(596),
  [900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [904] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(612),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(663),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(662),
  [914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(848),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(590),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(708),
  [928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(636),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [934] = {.entry = {.count = 1, .reusable = false}}, SHIFT(838),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [938] = {.entry = {.count = 1, .reusable = false}}, SHIFT(615),
  [940] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [948] = {.entry = {.count = 1, .reusable = false}}, SHIFT(578),
  [950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(640),
  [952] = {.entry = {.count = 1, .reusable = false}}, SHIFT(642),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(842),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [964] = {.entry = {.count = 1, .reusable = false}}, SHIFT(614),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(687),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(686),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(786),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(583),
  [980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(605),
  [988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(607),
  [996] = {.entry = {.count = 1, .reusable = false}}, SHIFT(637),
  [998] = {.entry = {.count = 1, .reusable = false}}, SHIFT(638),
  [1000] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1004] = {.entry = {.count = 1, .reusable = false}}, SHIFT(845),
  [1006] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1010] = {.entry = {.count = 1, .reusable = false}}, SHIFT(611),
  [1012] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(616),
  [1020] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1026] = {.entry = {.count = 1, .reusable = false}}, SHIFT(581),
  [1028] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1032] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 1),
  [1040] = {.entry = {.count = 1, .reusable = false}}, SHIFT(806),
  [1042] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 1),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 2),
  [1046] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 2),
  [1048] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [1052] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(371),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [1057] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(622),
  [1060] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(369),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1069] = {.entry = {.count = 1, .reusable = false}}, SHIFT(623),
  [1071] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1081] = {.entry = {.count = 1, .reusable = false}}, SHIFT(595),
  [1083] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1089] = {.entry = {.count = 1, .reusable = false}}, SHIFT(592),
  [1091] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(606),
  [1105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [1115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(601),
  [1123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [1131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(610),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(598),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(573),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(599),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(621),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(580),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(619),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(760),
  [1193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(762),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(510),
  [1216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(760),
  [1219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(762),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(674),
  [1234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(630),
  [1236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(676),
  [1238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(675),
  [1240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(629),
  [1242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(723),
  [1244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(724),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(510),
  [1303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(760),
  [1306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(762),
  [1309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2),
  [1311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2), SHIFT_REPEAT(361),
  [1314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2), SHIFT_REPEAT(468),
  [1317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 1),
  [1377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(570),
  [1379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(591),
  [1381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 1),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [1397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [1399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2), SHIFT_REPEAT(806),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [1410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(808),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(510),
  [1423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [1425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [1427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(613),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 3),
  [1433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 3),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_repeat1, 2), SHIFT_REPEAT(803),
  [1444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(802),
  [1447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(659),
  [1450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(763),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(803),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(774),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [1482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 3),
  [1484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 3),
  [1486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(684),
  [1488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 1),
  [1490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 1),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_angular_attribute_name, 1),
  [1498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_angular_attribute_name, 1),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(563),
  [1504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [1506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 3),
  [1516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 3),
  [1518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_attribute_value, 2),
  [1520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__array_attribute_value, 2),
  [1522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_attribute_value, 2),
  [1524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable_attribute_value, 2),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [1530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [1532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [1546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 3),
  [1548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 3),
  [1550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 5),
  [1552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 5),
  [1554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_attribute_value, 2),
  [1556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_attribute_value, 2),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [1562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 1),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filter_content_repeat1, 2), SHIFT_REPEAT(807),
  [1575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filter_content_repeat1, 2),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ternary_attribute_value, 2),
  [1599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ternary_attribute_value, 2),
  [1601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_attribute_value, 2),
  [1603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__template_attribute_value, 2),
  [1605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_attribute_value, 2),
  [1607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__object_attribute_value, 2),
  [1609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 3),
  [1611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 3),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [1627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [1629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [1631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(797),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [1653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [1655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 2),
  [1657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 2),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(829),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(701),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [1681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(702),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(759),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(748),
  [1687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_keyword, 2),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(732),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(765),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1715] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(731),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [1745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__un_delimited_javascript, 1),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(730),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(796),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(729),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(757),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(818),
  [1899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [1903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [1905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(830),
  [1913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [1915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [1917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [1919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [1921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
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
