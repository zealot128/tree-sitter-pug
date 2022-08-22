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
#define STATE_COUNT 381
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 105
#define ALIAS_COUNT 2
#define TOKEN_COUNT 56
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 8

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
  anon_sym_script_DOT = 17,
  aux_sym_script_block_token1 = 18,
  anon_sym_ = 19,
  anon_sym_DOT = 20,
  anon_sym_LPAREN = 21,
  anon_sym_COMMA = 22,
  anon_sym_RPAREN = 23,
  aux_sym__ternary_attribute_value_token1 = 24,
  aux_sym__variable_attribute_value_token1 = 25,
  aux_sym__object_attribute_value_token1 = 26,
  aux_sym__template_attribute_value_token1 = 27,
  aux_sym__array_attribute_value_token1 = 28,
  aux_sym__attribute_token1 = 29,
  anon_sym_SLASH_SLASH = 30,
  sym_tag_name = 31,
  sym_class = 32,
  sym_id = 33,
  aux_sym_angular_attribute_name_token1 = 34,
  aux_sym_angular_attribute_name_token2 = 35,
  aux_sym_angular_attribute_name_token3 = 36,
  anon_sym_SQUOTE = 37,
  aux_sym_quoted_javascript_token1 = 38,
  anon_sym_DQUOTE = 39,
  aux_sym_quoted_javascript_token2 = 40,
  aux_sym_content_token1 = 41,
  anon_sym_POUND = 42,
  anon_sym_LBRACE = 43,
  sym__comment_content = 44,
  anon_sym_POUND_LBRACE = 45,
  anon_sym_RBRACE = 46,
  anon_sym_LBRACE_LBRACE = 47,
  anon_sym_RBRACE_RBRACE = 48,
  sym__delimited_javascript = 49,
  sym__un_delimited_javascript_line = 50,
  anon_sym_DASH = 51,
  aux_sym_unbuffered_code_token1 = 52,
  sym__newline = 53,
  sym__indent = 54,
  sym__dedent = 55,
  sym_source_file = 56,
  sym_doctype = 57,
  sym_pipe = 58,
  sym_conditional = 59,
  sym_case = 60,
  sym__when_content = 61,
  sym__when_keyword = 62,
  sym_when = 63,
  sym_unescaped_buffered_code = 64,
  sym_buffered_code = 65,
  sym_script_block = 66,
  sym_tag = 67,
  sym__content_after_dot = 68,
  sym_attributes = 69,
  sym_attribute = 70,
  sym__ternary_attribute_value = 71,
  sym__string_attribute_value = 72,
  sym__variable_attribute_value = 73,
  sym__object_attribute_value = 74,
  sym__template_attribute_value = 75,
  sym__array_attribute_value = 76,
  sym__attribute = 77,
  sym__angular_attribute = 78,
  sym_children = 79,
  sym__children_choice = 80,
  sym_comment = 81,
  sym_angular_attribute_name = 82,
  sym_attribute_name = 83,
  sym_quoted_javascript = 84,
  sym_quoted_attribute_value = 85,
  sym_content = 86,
  aux_sym__content_or_javascript = 87,
  sym__un_delimited_javascript = 88,
  aux_sym__un_delimited_javascript_multiline = 89,
  sym__single_line_buf_code = 90,
  sym__multi_line_buf_code = 91,
  sym_unbuffered_code = 92,
  aux_sym_source_file_repeat1 = 93,
  aux_sym_conditional_repeat1 = 94,
  aux_sym_case_repeat1 = 95,
  aux_sym_script_block_repeat1 = 96,
  aux_sym_tag_repeat1 = 97,
  aux_sym__content_after_dot_repeat1 = 98,
  aux_sym_attributes_repeat1 = 99,
  aux_sym__attribute_repeat1 = 100,
  aux_sym_children_repeat1 = 101,
  aux_sym_comment_repeat1 = 102,
  aux_sym_content_repeat1 = 103,
  aux_sym__single_line_buf_code_repeat1 = 104,
  alias_sym_attribute_modifier = 105,
  alias_sym_attribute_value = 106,
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
  [anon_sym_script_DOT] = "script.",
  [aux_sym_script_block_token1] = "script_block_token1",
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
  [aux_sym_script_block_repeat1] = "script_block_repeat1",
  [aux_sym_tag_repeat1] = "tag_repeat1",
  [aux_sym__content_after_dot_repeat1] = "_content_after_dot_repeat1",
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
  [aux_sym__attribute_repeat1] = "_attribute_repeat1",
  [aux_sym_children_repeat1] = "children_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym_content_repeat1] = "content_repeat1",
  [aux_sym__single_line_buf_code_repeat1] = "_single_line_buf_code_repeat1",
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
  [anon_sym_script_DOT] = anon_sym_script_DOT,
  [aux_sym_script_block_token1] = aux_sym_script_block_token1,
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
  [aux_sym_script_block_repeat1] = aux_sym_script_block_repeat1,
  [aux_sym_tag_repeat1] = aux_sym_tag_repeat1,
  [aux_sym__content_after_dot_repeat1] = aux_sym__content_after_dot_repeat1,
  [aux_sym_attributes_repeat1] = aux_sym_attributes_repeat1,
  [aux_sym__attribute_repeat1] = aux_sym__attribute_repeat1,
  [aux_sym_children_repeat1] = aux_sym_children_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [aux_sym_content_repeat1] = aux_sym_content_repeat1,
  [aux_sym__single_line_buf_code_repeat1] = aux_sym__single_line_buf_code_repeat1,
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
  [anon_sym_script_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_script_block_token1] = {
    .visible = false,
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
  [aux_sym_comment_repeat1] = {
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
    [3] = aux_sym__when_keyword_token1,
  },
  [3] = {
    [1] = alias_sym_attribute_modifier,
  },
  [4] = {
    [0] = aux_sym__when_keyword_token1,
  },
  [5] = {
    [3] = sym_children,
  },
  [6] = {
    [1] = alias_sym_attribute_value,
  },
  [7] = {
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
      if (eof) ADVANCE(152);
      if (lookahead == '!') ADVANCE(80);
      if (lookahead == '"') ADVANCE(629);
      if (lookahead == '#') ADVANCE(635);
      if (lookahead == '\'') ADVANCE(625);
      if (lookahead == '(') ADVANCE(205);
      if (lookahead == ')') ADVANCE(207);
      if (lookahead == '*') ADVANCE(144);
      if (lookahead == ',') ADVANCE(206);
      if (lookahead == '-') ADVANCE(665);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(182);
      if (lookahead == '=') ADVANCE(194);
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
      if (lookahead == '{') ADVANCE(636);
      if (lookahead == '|') ADVANCE(160);
      if (lookahead == '}') ADVANCE(649);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"') ADVANCE(208);
      if (lookahead == '`') ADVANCE(501);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(209);
      if (lookahead == '`') ADVANCE(502);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(210);
      if (lookahead == '`') ADVANCE(506);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"') ADVANCE(211);
      if (lookahead == ']') ADVANCE(508);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(63);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(212);
      if (lookahead == ']') ADVANCE(509);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(65);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ']') ADVANCE(511);
      if (lookahead == '`') ADVANCE(213);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(93);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(214);
      if (lookahead == ']') ADVANCE(512);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(137);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(215);
      if (lookahead == ']') ADVANCE(513);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(138);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(216);
      if (lookahead == ']') ADVANCE(514);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(139);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(217);
      if (lookahead == ']') ADVANCE(515);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(141);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '#') ADVANCE(635);
      if (lookahead == '{') ADVANCE(636);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(633);
      if (lookahead != 0) ADVANCE(634);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '"') ADVANCE(218);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(488);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(63);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(219);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(489);
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
      if (lookahead == '`') ADVANCE(220);
      if (lookahead == '}') ADVANCE(490);
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
          lookahead == '\'') ADVANCE(221);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(491);
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
          lookahead == '`') ADVANCE(222);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(492);
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
          lookahead == '`') ADVANCE(223);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(493);
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
          lookahead == '`') ADVANCE(224);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(494);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(141);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"') ADVANCE(218);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(488);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(63);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(219);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(489);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(65);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '`') ADVANCE(220);
      if (lookahead == '}') ADVANCE(490);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(93);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(221);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(491);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(137);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(222);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(492);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(138);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(223);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(493);
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
          lookahead == '`') ADVANCE(224);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(494);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(141);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(226);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == '`') ADVANCE(227);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(228);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(229);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(230);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(231);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '"') ADVANCE(232);
      if (lookahead == ')') ADVANCE(450);
      if (lookahead == '`') ADVANCE(498);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(233);
      if (lookahead == ')') ADVANCE(451);
      if (lookahead == '`') ADVANCE(499);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(234);
      if (lookahead == ')') ADVANCE(452);
      if (lookahead == '`') ADVANCE(500);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == ')') ADVANCE(473);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == ')') ADVANCE(483);
      if (lookahead == '`') ADVANCE(237);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(238);
      if (lookahead == ')') ADVANCE(484);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(239);
      if (lookahead == ')') ADVANCE(485);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(240);
      if (lookahead == ')') ADVANCE(486);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(241);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == '"') ADVANCE(242);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(63);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == '\'') ADVANCE(244);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(65);
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == '`') ADVANCE(246);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(93);
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(248);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(137);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(250);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(138);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(252);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(139);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(254);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(141);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 50:
      if (lookahead == '\n') SKIP(50)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(661);
      if (lookahead != 0) ADVANCE(664);
      END_STATE();
    case 51:
      if (lookahead == '\n') SKIP(51)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(187);
      END_STATE();
    case 52:
      if (lookahead == '\n') SKIP(52)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(653);
      END_STATE();
    case 53:
      if (lookahead == '\n') SKIP(53)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 54:
      if (lookahead == ' ') ADVANCE(202);
      if (lookahead == '!') ADVANCE(80);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '(') ADVANCE(205);
      if (lookahead == ')') ADVANCE(207);
      if (lookahead == ',') ADVANCE(206);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == ':') ADVANCE(182);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(54)
      END_STATE();
    case 55:
      if (lookahead == ' ') ADVANCE(202);
      if (lookahead == '!') ADVANCE(80);
      if (lookahead == ')') ADVANCE(207);
      if (lookahead == ',') ADVANCE(206);
      if (lookahead == '.') ADVANCE(203);
      if (lookahead == ':') ADVANCE(182);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(55)
      END_STATE();
    case 56:
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '}') ADVANCE(495);
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
      if (lookahead == '}') ADVANCE(496);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(86);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 58:
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '"') ADVANCE(630);
      if (lookahead == '\'') ADVANCE(626);
      if (lookahead == '?') ADVANCE(472);
      if (lookahead == '[') ADVANCE(463);
      if (lookahead == '`') ADVANCE(478);
      if (lookahead == '{') ADVANCE(464);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(470);
      if (lookahead != 0) ADVANCE(477);
      END_STATE();
    case 59:
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '"') ADVANCE(630);
      if (lookahead == '\'') ADVANCE(626);
      if (lookahead == '?') ADVANCE(476);
      if (lookahead == '[') ADVANCE(463);
      if (lookahead == '`') ADVANCE(478);
      if (lookahead == '{') ADVANCE(464);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(470);
      if (lookahead != 0) ADVANCE(477);
      END_STATE();
    case 60:
      if (lookahead == '!') ADVANCE(80);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == '|') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(60)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 61:
      if (lookahead == '"') ADVANCE(629);
      if (lookahead == '\'') ADVANCE(625);
      if (lookahead == '[') ADVANCE(89);
      if (lookahead == '`') ADVANCE(82);
      if (lookahead == '{') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 62:
      if (lookahead == '"') ADVANCE(629);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(631);
      if (lookahead != 0) ADVANCE(632);
      END_STATE();
    case 63:
      if (lookahead == '"') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 64:
      if (lookahead == '\'') ADVANCE(625);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(627);
      if (lookahead != 0) ADVANCE(628);
      END_STATE();
    case 65:
      if (lookahead == '\'') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 66:
      if (lookahead == '(') ADVANCE(145);
      if (lookahead == ')') ADVANCE(207);
      if (lookahead == '*') ADVANCE(144);
      if (lookahead == '[') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(66)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(516);
      END_STATE();
    case 67:
      if (lookahead == ')') ADVANCE(623);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      if (lookahead == ')') ADVANCE(482);
      if (lookahead == '?') ADVANCE(69);
      if (lookahead == '`') ADVANCE(425);
      if (lookahead != 0) ADVANCE(434);
      END_STATE();
    case 69:
      if (lookahead == ')') ADVANCE(482);
      if (lookahead == '`') ADVANCE(504);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 70:
      if (lookahead == ')') ADVANCE(481);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 71:
      if (lookahead == ')') ADVANCE(481);
      if (lookahead == '?') ADVANCE(467);
      if (lookahead == ' ' ||
          lookahead == '(') ADVANCE(70);
      if (lookahead != 0) ADVANCE(462);
      END_STATE();
    case 72:
      if (lookahead == ')') ADVANCE(480);
      if (lookahead == '?') ADVANCE(68);
      if (lookahead == '`') ADVANCE(503);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 73:
      if (lookahead == ')') ADVANCE(449);
      if (lookahead == '?') ADVANCE(74);
      if (lookahead != 0) ADVANCE(425);
      END_STATE();
    case 74:
      if (lookahead == ')') ADVANCE(449);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 75:
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '}') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(75);
      END_STATE();
    case 76:
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '?') ADVANCE(77);
      if (lookahead == '}') ADVANCE(496);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(86);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 77:
      if (lookahead == ',') ADVANCE(430);
      if (lookahead == '?') ADVANCE(75);
      if (lookahead == '}') ADVANCE(430);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(430);
      END_STATE();
    case 78:
      if (lookahead == '.') ADVANCE(197);
      END_STATE();
    case 79:
      if (lookahead == '/') ADVANCE(517);
      END_STATE();
    case 80:
      if (lookahead == '=') ADVANCE(191);
      END_STATE();
    case 81:
      if (lookahead == '?') ADVANCE(89);
      if (lookahead == ']') ADVANCE(421);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(428);
      END_STATE();
    case 82:
      if (lookahead == '?') ADVANCE(475);
      if (lookahead == '`') ADVANCE(477);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(85);
      if (lookahead != 0) ADVANCE(478);
      END_STATE();
    case 83:
      if (lookahead == '?') ADVANCE(479);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(86);
      if (lookahead != 0) ADVANCE(477);
      END_STATE();
    case 84:
      if (lookahead == '?') ADVANCE(466);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(86);
      if (lookahead != 0) ADVANCE(477);
      END_STATE();
    case 85:
      if (lookahead == '?') ADVANCE(92);
      if (lookahead == '`') ADVANCE(505);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 86:
      if (lookahead == '?') ADVANCE(147);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 87:
      if (lookahead == '?') ADVANCE(81);
      if (lookahead == ']') ADVANCE(510);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(86);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 88:
      if (lookahead == ']') ADVANCE(507);
      if (lookahead == '-' ||
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
      if (lookahead == ']') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[') ADVANCE(89);
      END_STATE();
    case 90:
      if (lookahead == ']') ADVANCE(622);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 91:
      if (lookahead == '`') ADVANCE(497);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 92:
      if (lookahead == '`') ADVANCE(421);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(91);
      if (lookahead != 0) ADVANCE(433);
      END_STATE();
    case 93:
      if (lookahead == '`') ADVANCE(443);
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
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(153);
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
      if (lookahead == 'f') ADVANCE(163);
      END_STATE();
    case 106:
      if (lookahead == 'f') ADVANCE(167);
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
      if (lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(157);
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
      if (lookahead == 'n') ADVANCE(183);
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
      if (lookahead == 's') ADVANCE(170);
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
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(188);
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
      if (lookahead == '}') ADVANCE(651);
      END_STATE();
    case 137:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 138:
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 139:
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 140:
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 141:
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 142:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(616);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      END_STATE();
    case 143:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(619);
      END_STATE();
    case 144:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 145:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 146:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 147:
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '?') ADVANCE(421);
      END_STATE();
    case 148:
      if (eof) ADVANCE(152);
      if (lookahead == '\n') SKIP(148)
      if (lookahead == '!') ADVANCE(657);
      if (lookahead == '#') ADVANCE(663);
      if (lookahead == '-') ADVANCE(666);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == '/') ADVANCE(656);
      if (lookahead == '=') ADVANCE(195);
      if (lookahead == 'c') ADVANCE(525);
      if (lookahead == 'd') ADVANCE(543);
      if (lookahead == 'e') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(551);
      if (lookahead == 's') ADVANCE(530);
      if (lookahead == 'u') ADVANCE(571);
      if (lookahead == 'w') ADVANCE(555);
      if (lookahead == '|') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0) ADVANCE(664);
      END_STATE();
    case 149:
      if (eof) ADVANCE(152);
      if (lookahead == '\n') SKIP(149)
      if (lookahead == '!') ADVANCE(657);
      if (lookahead == '#') ADVANCE(663);
      if (lookahead == '-') ADVANCE(666);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == '/') ADVANCE(656);
      if (lookahead == '=') ADVANCE(195);
      if (lookahead == 'c') ADVANCE(525);
      if (lookahead == 'd') ADVANCE(574);
      if (lookahead == 'e') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(551);
      if (lookahead == 's') ADVANCE(530);
      if (lookahead == 'u') ADVANCE(571);
      if (lookahead == '|') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0) ADVANCE(664);
      END_STATE();
    case 150:
      if (eof) ADVANCE(152);
      if (lookahead == '!') ADVANCE(80);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '-') ADVANCE(665);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(182);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == 'c') ADVANCE(523);
      if (lookahead == 'd') ADVANCE(540);
      if (lookahead == 'e') ADVANCE(565);
      if (lookahead == 'i') ADVANCE(550);
      if (lookahead == 's') ADVANCE(528);
      if (lookahead == 'u') ADVANCE(570);
      if (lookahead == 'w') ADVANCE(556);
      if (lookahead == '|') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(150)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 151:
      if (eof) ADVANCE(152);
      if (lookahead == '!') ADVANCE(80);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '-') ADVANCE(665);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == 'c') ADVANCE(523);
      if (lookahead == 'd') ADVANCE(573);
      if (lookahead == 'e') ADVANCE(565);
      if (lookahead == 'i') ADVANCE(550);
      if (lookahead == 's') ADVANCE(528);
      if (lookahead == 'u') ADVANCE(570);
      if (lookahead == '|') ADVANCE(160);
      if (lookahead == '}') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(151)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_doctype);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_strict);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(659);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(641);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(110);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(110);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__when_keyword_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(187);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__when_keyword_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_script_DOT);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_script_DOT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_script_DOT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_script_block_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_script_block_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(616);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"') ADVANCE(208);
      if (lookahead == '`') ADVANCE(501);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(209);
      if (lookahead == '`') ADVANCE(502);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(210);
      if (lookahead == '`') ADVANCE(506);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"') ADVANCE(211);
      if (lookahead == ']') ADVANCE(508);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(63);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(212);
      if (lookahead == ']') ADVANCE(509);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(65);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ']') ADVANCE(511);
      if (lookahead == '`') ADVANCE(213);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(93);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(214);
      if (lookahead == ']') ADVANCE(512);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(137);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(215);
      if (lookahead == ']') ADVANCE(513);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(138);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(216);
      if (lookahead == ']') ADVANCE(514);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(139);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(217);
      if (lookahead == ']') ADVANCE(515);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(141);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"') ADVANCE(218);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(488);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(63);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(219);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(489);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(65);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '`') ADVANCE(220);
      if (lookahead == '}') ADVANCE(490);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(93);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(221);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(491);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(137);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(222);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(492);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(138);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(223);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(493);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(139);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(224);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(494);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(141);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(226);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == '`') ADVANCE(227);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(228);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(229);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(230);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(231);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '"') ADVANCE(232);
      if (lookahead == ')') ADVANCE(450);
      if (lookahead == '`') ADVANCE(498);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(233);
      if (lookahead == ')') ADVANCE(451);
      if (lookahead == '`') ADVANCE(499);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(234);
      if (lookahead == ')') ADVANCE(452);
      if (lookahead == '`') ADVANCE(500);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == ')') ADVANCE(473);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == ')') ADVANCE(483);
      if (lookahead == '`') ADVANCE(237);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(238);
      if (lookahead == ')') ADVANCE(484);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(239);
      if (lookahead == ')') ADVANCE(485);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(240);
      if (lookahead == ')') ADVANCE(486);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(241);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(242);
      if (lookahead == '"') ADVANCE(242);
      if (lookahead == '\'') ADVANCE(248);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '?') ADVANCE(315);
      if (lookahead == '`') ADVANCE(250);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(242);
      if (lookahead == '"') ADVANCE(242);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '?') ADVANCE(315);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(244);
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '\'') ADVANCE(244);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == '?') ADVANCE(316);
      if (lookahead == '`') ADVANCE(252);
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(244);
      if (lookahead == '\'') ADVANCE(244);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == '?') ADVANCE(316);
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(246);
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '\'') ADVANCE(252);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '?') ADVANCE(317);
      if (lookahead == '`') ADVANCE(246);
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(246);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '?') ADVANCE(317);
      if (lookahead == '`') ADVANCE(246);
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(248);
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '\'') ADVANCE(248);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '?') ADVANCE(318);
      if (lookahead == '`') ADVANCE(254);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(248);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(248);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '?') ADVANCE(318);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(250);
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '\'') ADVANCE(254);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(319);
      if (lookahead == '`') ADVANCE(250);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(250);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(250);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(319);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(252);
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '\'') ADVANCE(252);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(320);
      if (lookahead == '`') ADVANCE(252);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(252);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(252);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(320);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(254);
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '\'') ADVANCE(254);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == '?') ADVANCE(321);
      if (lookahead == '`') ADVANCE(254);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(254);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(254);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == '?') ADVANCE(321);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(256);
      if (lookahead == '"') ADVANCE(256);
      if (lookahead == '\'') ADVANCE(262);
      if (lookahead == ')') ADVANCE(473);
      if (lookahead == '?') ADVANCE(322);
      if (lookahead == '`') ADVANCE(264);
      if (lookahead != 0) ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(256);
      if (lookahead == '"') ADVANCE(256);
      if (lookahead == ')') ADVANCE(473);
      if (lookahead == '?') ADVANCE(322);
      if (lookahead != 0) ADVANCE(256);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(258);
      if (lookahead == '"') ADVANCE(262);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead == '?') ADVANCE(323);
      if (lookahead == '`') ADVANCE(266);
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(258);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead == '?') ADVANCE(323);
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(260);
      if (lookahead == '"') ADVANCE(264);
      if (lookahead == '\'') ADVANCE(266);
      if (lookahead == ')') ADVANCE(483);
      if (lookahead == '?') ADVANCE(324);
      if (lookahead == '`') ADVANCE(260);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(260);
      if (lookahead == ')') ADVANCE(483);
      if (lookahead == '?') ADVANCE(324);
      if (lookahead == '`') ADVANCE(260);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(262);
      if (lookahead == '"') ADVANCE(262);
      if (lookahead == '\'') ADVANCE(262);
      if (lookahead == ')') ADVANCE(484);
      if (lookahead == '?') ADVANCE(325);
      if (lookahead == '`') ADVANCE(268);
      if (lookahead != 0) ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(262);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(262);
      if (lookahead == ')') ADVANCE(484);
      if (lookahead == '?') ADVANCE(325);
      if (lookahead != 0) ADVANCE(262);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(264);
      if (lookahead == '"') ADVANCE(264);
      if (lookahead == '\'') ADVANCE(268);
      if (lookahead == ')') ADVANCE(485);
      if (lookahead == '?') ADVANCE(326);
      if (lookahead == '`') ADVANCE(264);
      if (lookahead != 0) ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(264);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(264);
      if (lookahead == ')') ADVANCE(485);
      if (lookahead == '?') ADVANCE(326);
      if (lookahead != 0) ADVANCE(264);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(266);
      if (lookahead == '"') ADVANCE(268);
      if (lookahead == '\'') ADVANCE(266);
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == '?') ADVANCE(327);
      if (lookahead == '`') ADVANCE(266);
      if (lookahead != 0) ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(266);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(266);
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == '?') ADVANCE(327);
      if (lookahead != 0) ADVANCE(266);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(268);
      if (lookahead == '"') ADVANCE(268);
      if (lookahead == '\'') ADVANCE(268);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == '?') ADVANCE(328);
      if (lookahead == '`') ADVANCE(268);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(268);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(268);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == '?') ADVANCE(328);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(242);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '\'') ADVANCE(276);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '?') ADVANCE(329);
      if (lookahead == '`') ADVANCE(278);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(242);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '?') ADVANCE(329);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(244);
      if (lookahead == '"') ADVANCE(276);
      if (lookahead == '\'') ADVANCE(272);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == '?') ADVANCE(330);
      if (lookahead == '`') ADVANCE(280);
      if (lookahead != 0) ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(244);
      if (lookahead == '\'') ADVANCE(272);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == '?') ADVANCE(330);
      if (lookahead != 0) ADVANCE(272);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(246);
      if (lookahead == '"') ADVANCE(278);
      if (lookahead == '\'') ADVANCE(280);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '?') ADVANCE(331);
      if (lookahead == '`') ADVANCE(274);
      if (lookahead != 0) ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(246);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '?') ADVANCE(331);
      if (lookahead == '`') ADVANCE(274);
      if (lookahead != 0) ADVANCE(274);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(248);
      if (lookahead == '"') ADVANCE(276);
      if (lookahead == '\'') ADVANCE(276);
      if (lookahead == '(') ADVANCE(262);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '?') ADVANCE(332);
      if (lookahead == '`') ADVANCE(282);
      if (lookahead != 0) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(248);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(276);
      if (lookahead == '(') ADVANCE(262);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '?') ADVANCE(332);
      if (lookahead != 0) ADVANCE(276);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(250);
      if (lookahead == '"') ADVANCE(278);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(333);
      if (lookahead == '`') ADVANCE(278);
      if (lookahead != 0) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(250);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(278);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(333);
      if (lookahead != 0) ADVANCE(278);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(252);
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '\'') ADVANCE(280);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(334);
      if (lookahead == '`') ADVANCE(280);
      if (lookahead != 0) ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(252);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(280);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(334);
      if (lookahead != 0) ADVANCE(280);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(254);
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == '?') ADVANCE(335);
      if (lookahead == '`') ADVANCE(282);
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(254);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(282);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == '?') ADVANCE(335);
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(380);
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '\'') ADVANCE(286);
      if (lookahead == '(') ADVANCE(390);
      if (lookahead == ')') ADVANCE(1);
      if (lookahead == '?') ADVANCE(342);
      if (lookahead == '`') ADVANCE(278);
      if (lookahead != 0) ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(381);
      if (lookahead == '"') ADVANCE(286);
      if (lookahead == '\'') ADVANCE(285);
      if (lookahead == '(') ADVANCE(391);
      if (lookahead == ')') ADVANCE(2);
      if (lookahead == '?') ADVANCE(343);
      if (lookahead == '`') ADVANCE(280);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(382);
      if (lookahead == '"') ADVANCE(286);
      if (lookahead == '\'') ADVANCE(286);
      if (lookahead == '(') ADVANCE(392);
      if (lookahead == ')') ADVANCE(3);
      if (lookahead == '?') ADVANCE(344);
      if (lookahead == '`') ADVANCE(282);
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(287);
      if (lookahead == '"') ADVANCE(287);
      if (lookahead == '\'') ADVANCE(290);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '?') ADVANCE(345);
      if (lookahead == ']') ADVANCE(242);
      if (lookahead == '`') ADVANCE(291);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(242);
      if (lookahead != 0) ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(288);
      if (lookahead == '"') ADVANCE(290);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == '?') ADVANCE(346);
      if (lookahead == ']') ADVANCE(244);
      if (lookahead == '`') ADVANCE(292);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(244);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(289);
      if (lookahead == '"') ADVANCE(291);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '?') ADVANCE(347);
      if (lookahead == ']') ADVANCE(246);
      if (lookahead == '`') ADVANCE(289);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(246);
      if (lookahead != 0) ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(290);
      if (lookahead == '"') ADVANCE(290);
      if (lookahead == '\'') ADVANCE(290);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '?') ADVANCE(348);
      if (lookahead == ']') ADVANCE(248);
      if (lookahead == '`') ADVANCE(293);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(248);
      if (lookahead != 0) ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead == '"') ADVANCE(291);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(349);
      if (lookahead == ']') ADVANCE(250);
      if (lookahead == '`') ADVANCE(291);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(250);
      if (lookahead != 0) ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == '"') ADVANCE(293);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(350);
      if (lookahead == ']') ADVANCE(252);
      if (lookahead == '`') ADVANCE(292);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(252);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '"') ADVANCE(293);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == '?') ADVANCE(351);
      if (lookahead == ']') ADVANCE(254);
      if (lookahead == '`') ADVANCE(293);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(254);
      if (lookahead != 0) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(287);
      if (lookahead == '"') ADVANCE(294);
      if (lookahead == '\'') ADVANCE(297);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '?') ADVANCE(352);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead == ']') ADVANCE(270);
      if (lookahead == '`') ADVANCE(298);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(288);
      if (lookahead == '"') ADVANCE(297);
      if (lookahead == '\'') ADVANCE(295);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == '?') ADVANCE(353);
      if (lookahead == '[') ADVANCE(272);
      if (lookahead == ']') ADVANCE(272);
      if (lookahead == '`') ADVANCE(299);
      if (lookahead != 0) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(289);
      if (lookahead == '"') ADVANCE(298);
      if (lookahead == '\'') ADVANCE(299);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '?') ADVANCE(354);
      if (lookahead == '[') ADVANCE(274);
      if (lookahead == ']') ADVANCE(274);
      if (lookahead == '`') ADVANCE(296);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(290);
      if (lookahead == '"') ADVANCE(297);
      if (lookahead == '\'') ADVANCE(297);
      if (lookahead == '(') ADVANCE(262);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '?') ADVANCE(355);
      if (lookahead == '[') ADVANCE(276);
      if (lookahead == ']') ADVANCE(276);
      if (lookahead == '`') ADVANCE(300);
      if (lookahead != 0) ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead == '"') ADVANCE(298);
      if (lookahead == '\'') ADVANCE(300);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(356);
      if (lookahead == '[') ADVANCE(278);
      if (lookahead == ']') ADVANCE(278);
      if (lookahead == '`') ADVANCE(298);
      if (lookahead != 0) ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '\'') ADVANCE(299);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(357);
      if (lookahead == '[') ADVANCE(280);
      if (lookahead == ']') ADVANCE(280);
      if (lookahead == '`') ADVANCE(299);
      if (lookahead != 0) ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '\'') ADVANCE(300);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == '?') ADVANCE(358);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == ']') ADVANCE(282);
      if (lookahead == '`') ADVANCE(300);
      if (lookahead != 0) ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(430);
      if (lookahead == ' ') ADVANCE(301);
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '\'') ADVANCE(304);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == ',') ADVANCE(301);
      if (lookahead == '?') ADVANCE(359);
      if (lookahead == '`') ADVANCE(305);
      if (lookahead == '}') ADVANCE(301);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(242);
      if (lookahead != 0) ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(430);
      if (lookahead == ' ') ADVANCE(302);
      if (lookahead == '"') ADVANCE(304);
      if (lookahead == '\'') ADVANCE(302);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == ',') ADVANCE(302);
      if (lookahead == '?') ADVANCE(360);
      if (lookahead == '`') ADVANCE(306);
      if (lookahead == '}') ADVANCE(302);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(244);
      if (lookahead != 0) ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(430);
      if (lookahead == ' ') ADVANCE(303);
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '\'') ADVANCE(306);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == ',') ADVANCE(303);
      if (lookahead == '?') ADVANCE(361);
      if (lookahead == '`') ADVANCE(303);
      if (lookahead == '}') ADVANCE(303);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(246);
      if (lookahead != 0) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(430);
      if (lookahead == ' ') ADVANCE(304);
      if (lookahead == '"') ADVANCE(304);
      if (lookahead == '\'') ADVANCE(304);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == ',') ADVANCE(304);
      if (lookahead == '?') ADVANCE(362);
      if (lookahead == '`') ADVANCE(307);
      if (lookahead == '}') ADVANCE(304);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead != 0) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(430);
      if (lookahead == ' ') ADVANCE(305);
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '\'') ADVANCE(307);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == ',') ADVANCE(305);
      if (lookahead == '?') ADVANCE(363);
      if (lookahead == '`') ADVANCE(305);
      if (lookahead == '}') ADVANCE(305);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(250);
      if (lookahead != 0) ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(430);
      if (lookahead == ' ') ADVANCE(306);
      if (lookahead == '"') ADVANCE(307);
      if (lookahead == '\'') ADVANCE(306);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ',') ADVANCE(306);
      if (lookahead == '?') ADVANCE(364);
      if (lookahead == '`') ADVANCE(306);
      if (lookahead == '}') ADVANCE(306);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(252);
      if (lookahead != 0) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(430);
      if (lookahead == ' ') ADVANCE(307);
      if (lookahead == '"') ADVANCE(307);
      if (lookahead == '\'') ADVANCE(307);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == ',') ADVANCE(307);
      if (lookahead == '?') ADVANCE(365);
      if (lookahead == '`') ADVANCE(307);
      if (lookahead == '}') ADVANCE(307);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead != 0) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(301);
      if (lookahead == '"') ADVANCE(308);
      if (lookahead == '\'') ADVANCE(311);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == ',') ADVANCE(308);
      if (lookahead == '?') ADVANCE(366);
      if (lookahead == '`') ADVANCE(312);
      if (lookahead == '}') ADVANCE(308);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(270);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(302);
      if (lookahead == '"') ADVANCE(311);
      if (lookahead == '\'') ADVANCE(309);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == ',') ADVANCE(309);
      if (lookahead == '?') ADVANCE(367);
      if (lookahead == '`') ADVANCE(313);
      if (lookahead == '}') ADVANCE(309);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(272);
      if (lookahead != 0) ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(303);
      if (lookahead == '"') ADVANCE(312);
      if (lookahead == '\'') ADVANCE(313);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == ',') ADVANCE(310);
      if (lookahead == '?') ADVANCE(368);
      if (lookahead == '`') ADVANCE(310);
      if (lookahead == '}') ADVANCE(310);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(274);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(304);
      if (lookahead == '"') ADVANCE(311);
      if (lookahead == '\'') ADVANCE(311);
      if (lookahead == '(') ADVANCE(262);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == ',') ADVANCE(311);
      if (lookahead == '?') ADVANCE(369);
      if (lookahead == '`') ADVANCE(314);
      if (lookahead == '}') ADVANCE(311);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(276);
      if (lookahead != 0) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(305);
      if (lookahead == '"') ADVANCE(312);
      if (lookahead == '\'') ADVANCE(314);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == ',') ADVANCE(312);
      if (lookahead == '?') ADVANCE(370);
      if (lookahead == '`') ADVANCE(312);
      if (lookahead == '}') ADVANCE(312);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(278);
      if (lookahead != 0) ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(306);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '\'') ADVANCE(313);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ',') ADVANCE(313);
      if (lookahead == '?') ADVANCE(371);
      if (lookahead == '`') ADVANCE(313);
      if (lookahead == '}') ADVANCE(313);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(280);
      if (lookahead != 0) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(307);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '\'') ADVANCE(314);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == ',') ADVANCE(314);
      if (lookahead == '?') ADVANCE(372);
      if (lookahead == '`') ADVANCE(314);
      if (lookahead == '}') ADVANCE(314);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(282);
      if (lookahead != 0) ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(448);
      if (lookahead == '"') ADVANCE(315);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(63);
      if (lookahead != 0) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(448);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(65);
      if (lookahead != 0) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(448);
      if (lookahead == '`') ADVANCE(317);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(93);
      if (lookahead != 0) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(448);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(318);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(137);
      if (lookahead != 0) ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(448);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(319);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(138);
      if (lookahead != 0) ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(448);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(320);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(139);
      if (lookahead != 0) ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(448);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(321);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(141);
      if (lookahead != 0) ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '"') ADVANCE(322);
      if (lookahead == ')') ADVANCE(473);
      if (lookahead != 0) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(323);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == ')') ADVANCE(483);
      if (lookahead == '`') ADVANCE(324);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(325);
      if (lookahead == ')') ADVANCE(484);
      if (lookahead != 0) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(326);
      if (lookahead == ')') ADVANCE(485);
      if (lookahead != 0) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(327);
      if (lookahead == ')') ADVANCE(486);
      if (lookahead != 0) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(328);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead != 0) ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(440);
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '(') ADVANCE(322);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(63);
      if (lookahead != 0) ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(440);
      if (lookahead == '\'') ADVANCE(330);
      if (lookahead == '(') ADVANCE(323);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(65);
      if (lookahead != 0) ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(440);
      if (lookahead == '(') ADVANCE(324);
      if (lookahead == '`') ADVANCE(331);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(93);
      if (lookahead != 0) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(440);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(332);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(137);
      if (lookahead != 0) ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(440);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(333);
      if (lookahead == '(') ADVANCE(326);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(138);
      if (lookahead != 0) ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(440);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(334);
      if (lookahead == '(') ADVANCE(327);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(139);
      if (lookahead != 0) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(440);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(335);
      if (lookahead == '(') ADVANCE(328);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(141);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == '"') ADVANCE(336);
      if (lookahead == '`') ADVANCE(315);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(1);
      if (lookahead != 0) ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == '\'') ADVANCE(337);
      if (lookahead == '`') ADVANCE(316);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(2);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(338);
      if (lookahead == '`') ADVANCE(318);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(3);
      if (lookahead != 0) ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '"') ADVANCE(339);
      if (lookahead == ')') ADVANCE(450);
      if (lookahead == '`') ADVANCE(322);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(340);
      if (lookahead == ')') ADVANCE(451);
      if (lookahead == '`') ADVANCE(323);
      if (lookahead != 0) ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(341);
      if (lookahead == ')') ADVANCE(452);
      if (lookahead == '`') ADVANCE(325);
      if (lookahead != 0) ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(441);
      if (lookahead == '"') ADVANCE(342);
      if (lookahead == '(') ADVANCE(339);
      if (lookahead == '`') ADVANCE(329);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(1);
      if (lookahead != 0) ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(441);
      if (lookahead == '\'') ADVANCE(343);
      if (lookahead == '(') ADVANCE(340);
      if (lookahead == '`') ADVANCE(330);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(2);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(441);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(344);
      if (lookahead == '(') ADVANCE(341);
      if (lookahead == '`') ADVANCE(332);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(3);
      if (lookahead != 0) ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(415);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '"') ADVANCE(345);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == ']') ADVANCE(315);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(315);
      if (lookahead != 0) ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(415);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(346);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == ']') ADVANCE(316);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(316);
      if (lookahead != 0) ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(415);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == ']') ADVANCE(317);
      if (lookahead == '`') ADVANCE(347);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(317);
      if (lookahead != 0) ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(415);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(348);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == ']') ADVANCE(318);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(318);
      if (lookahead != 0) ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(415);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(349);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == ']') ADVANCE(319);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(319);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(415);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(350);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ']') ADVANCE(320);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(320);
      if (lookahead != 0) ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(415);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(351);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == ']') ADVANCE(321);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(321);
      if (lookahead != 0) ADVANCE(351);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '"') ADVANCE(352);
      if (lookahead == '(') ADVANCE(322);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '[') ADVANCE(329);
      if (lookahead == ']') ADVANCE(329);
      if (lookahead != 0) ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(353);
      if (lookahead == '(') ADVANCE(323);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == '[') ADVANCE(330);
      if (lookahead == ']') ADVANCE(330);
      if (lookahead != 0) ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '(') ADVANCE(324);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '[') ADVANCE(331);
      if (lookahead == ']') ADVANCE(331);
      if (lookahead == '`') ADVANCE(354);
      if (lookahead != 0) ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(355);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '[') ADVANCE(332);
      if (lookahead == ']') ADVANCE(332);
      if (lookahead != 0) ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(356);
      if (lookahead == '(') ADVANCE(326);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '[') ADVANCE(333);
      if (lookahead == ']') ADVANCE(333);
      if (lookahead != 0) ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(357);
      if (lookahead == '(') ADVANCE(327);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '[') ADVANCE(334);
      if (lookahead == ']') ADVANCE(334);
      if (lookahead != 0) ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(414);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(358);
      if (lookahead == '(') ADVANCE(328);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == '[') ADVANCE(335);
      if (lookahead == ']') ADVANCE(335);
      if (lookahead != 0) ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '"') ADVANCE(359);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == ',') ADVANCE(359);
      if (lookahead == '}') ADVANCE(359);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(315);
      if (lookahead != 0) ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(360);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == ',') ADVANCE(360);
      if (lookahead == '}') ADVANCE(360);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(316);
      if (lookahead != 0) ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == ',') ADVANCE(361);
      if (lookahead == '`') ADVANCE(361);
      if (lookahead == '}') ADVANCE(361);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(317);
      if (lookahead != 0) ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(362);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == ',') ADVANCE(362);
      if (lookahead == '}') ADVANCE(362);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(318);
      if (lookahead != 0) ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(363);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == ',') ADVANCE(363);
      if (lookahead == '}') ADVANCE(363);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(319);
      if (lookahead != 0) ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(364);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ',') ADVANCE(364);
      if (lookahead == '}') ADVANCE(364);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(320);
      if (lookahead != 0) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(365);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == ',') ADVANCE(365);
      if (lookahead == '}') ADVANCE(365);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(321);
      if (lookahead != 0) ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '"') ADVANCE(366);
      if (lookahead == '(') ADVANCE(322);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == ',') ADVANCE(366);
      if (lookahead == '}') ADVANCE(366);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(329);
      if (lookahead != 0) ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(367);
      if (lookahead == '(') ADVANCE(323);
      if (lookahead == ')') ADVANCE(65);
      if (lookahead == ',') ADVANCE(367);
      if (lookahead == '}') ADVANCE(367);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(330);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '(') ADVANCE(324);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == ',') ADVANCE(368);
      if (lookahead == '`') ADVANCE(368);
      if (lookahead == '}') ADVANCE(368);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(331);
      if (lookahead != 0) ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(369);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == ',') ADVANCE(369);
      if (lookahead == '}') ADVANCE(369);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(332);
      if (lookahead != 0) ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(370);
      if (lookahead == '(') ADVANCE(326);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == ',') ADVANCE(370);
      if (lookahead == '}') ADVANCE(370);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(333);
      if (lookahead != 0) ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(371);
      if (lookahead == '(') ADVANCE(327);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ',') ADVANCE(371);
      if (lookahead == '}') ADVANCE(371);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(334);
      if (lookahead != 0) ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(372);
      if (lookahead == '(') ADVANCE(328);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == ',') ADVANCE(372);
      if (lookahead == '}') ADVANCE(372);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(335);
      if (lookahead != 0) ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '"') ADVANCE(373);
      if (lookahead == '(') ADVANCE(322);
      if (lookahead == ')') ADVANCE(473);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(374);
      if (lookahead == '(') ADVANCE(323);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead != 0) ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == '(') ADVANCE(324);
      if (lookahead == ')') ADVANCE(483);
      if (lookahead == '`') ADVANCE(375);
      if (lookahead != 0) ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(376);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == ')') ADVANCE(484);
      if (lookahead != 0) ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(377);
      if (lookahead == '(') ADVANCE(326);
      if (lookahead == ')') ADVANCE(485);
      if (lookahead != 0) ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(378);
      if (lookahead == '(') ADVANCE(327);
      if (lookahead == ')') ADVANCE(486);
      if (lookahead != 0) ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(379);
      if (lookahead == '(') ADVANCE(328);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead != 0) ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(433);
      if (lookahead == ' ') ADVANCE(380);
      if (lookahead == '"') ADVANCE(380);
      if (lookahead == '\'') ADVANCE(382);
      if (lookahead == ')') ADVANCE(1);
      if (lookahead == '?') ADVANCE(336);
      if (lookahead == '`') ADVANCE(250);
      if (lookahead != 0) ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(433);
      if (lookahead == ' ') ADVANCE(381);
      if (lookahead == '"') ADVANCE(382);
      if (lookahead == '\'') ADVANCE(381);
      if (lookahead == ')') ADVANCE(2);
      if (lookahead == '?') ADVANCE(337);
      if (lookahead == '`') ADVANCE(252);
      if (lookahead != 0) ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(433);
      if (lookahead == ' ') ADVANCE(382);
      if (lookahead == '"') ADVANCE(382);
      if (lookahead == '\'') ADVANCE(382);
      if (lookahead == ')') ADVANCE(3);
      if (lookahead == '?') ADVANCE(338);
      if (lookahead == '`') ADVANCE(254);
      if (lookahead != 0) ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead == ' ') ADVANCE(400);
      if (lookahead == '"') ADVANCE(383);
      if (lookahead == '\'') ADVANCE(386);
      if (lookahead == '(') ADVANCE(407);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '?') ADVANCE(271);
      if (lookahead == '`') ADVANCE(387);
      if (lookahead != 0) ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead == ' ') ADVANCE(401);
      if (lookahead == '"') ADVANCE(386);
      if (lookahead == '\'') ADVANCE(384);
      if (lookahead == '(') ADVANCE(408);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '?') ADVANCE(273);
      if (lookahead == '`') ADVANCE(388);
      if (lookahead != 0) ADVANCE(384);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead == ' ') ADVANCE(402);
      if (lookahead == '"') ADVANCE(387);
      if (lookahead == '\'') ADVANCE(388);
      if (lookahead == '(') ADVANCE(409);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '?') ADVANCE(275);
      if (lookahead == '`') ADVANCE(385);
      if (lookahead != 0) ADVANCE(385);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead == ' ') ADVANCE(403);
      if (lookahead == '"') ADVANCE(386);
      if (lookahead == '\'') ADVANCE(386);
      if (lookahead == '(') ADVANCE(410);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '?') ADVANCE(277);
      if (lookahead == '`') ADVANCE(389);
      if (lookahead != 0) ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead == ' ') ADVANCE(404);
      if (lookahead == '"') ADVANCE(387);
      if (lookahead == '\'') ADVANCE(389);
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '?') ADVANCE(279);
      if (lookahead == '`') ADVANCE(387);
      if (lookahead != 0) ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead == ' ') ADVANCE(405);
      if (lookahead == '"') ADVANCE(389);
      if (lookahead == '\'') ADVANCE(388);
      if (lookahead == '(') ADVANCE(412);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '?') ADVANCE(281);
      if (lookahead == '`') ADVANCE(388);
      if (lookahead != 0) ADVANCE(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead == ' ') ADVANCE(406);
      if (lookahead == '"') ADVANCE(389);
      if (lookahead == '\'') ADVANCE(389);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '?') ADVANCE(283);
      if (lookahead == '`') ADVANCE(389);
      if (lookahead != 0) ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == ' ') ADVANCE(390);
      if (lookahead == '"') ADVANCE(390);
      if (lookahead == '\'') ADVANCE(392);
      if (lookahead == ')') ADVANCE(450);
      if (lookahead == '?') ADVANCE(339);
      if (lookahead == '`') ADVANCE(264);
      if (lookahead != 0) ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == ' ') ADVANCE(391);
      if (lookahead == '"') ADVANCE(392);
      if (lookahead == '\'') ADVANCE(391);
      if (lookahead == ')') ADVANCE(451);
      if (lookahead == '?') ADVANCE(340);
      if (lookahead == '`') ADVANCE(266);
      if (lookahead != 0) ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == ' ') ADVANCE(392);
      if (lookahead == '"') ADVANCE(392);
      if (lookahead == '\'') ADVANCE(392);
      if (lookahead == ')') ADVANCE(452);
      if (lookahead == '?') ADVANCE(341);
      if (lookahead == '`') ADVANCE(268);
      if (lookahead != 0) ADVANCE(392);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(256);
      if (lookahead == '"') ADVANCE(393);
      if (lookahead == '\'') ADVANCE(396);
      if (lookahead == '(') ADVANCE(256);
      if (lookahead == ')') ADVANCE(473);
      if (lookahead == '?') ADVANCE(373);
      if (lookahead == '`') ADVANCE(397);
      if (lookahead != 0) ADVANCE(393);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(258);
      if (lookahead == '"') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(394);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead == '?') ADVANCE(374);
      if (lookahead == '`') ADVANCE(398);
      if (lookahead != 0) ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(260);
      if (lookahead == '"') ADVANCE(397);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == ')') ADVANCE(483);
      if (lookahead == '?') ADVANCE(375);
      if (lookahead == '`') ADVANCE(395);
      if (lookahead != 0) ADVANCE(395);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(262);
      if (lookahead == '"') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(396);
      if (lookahead == '(') ADVANCE(262);
      if (lookahead == ')') ADVANCE(484);
      if (lookahead == '?') ADVANCE(376);
      if (lookahead == '`') ADVANCE(399);
      if (lookahead != 0) ADVANCE(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(264);
      if (lookahead == '"') ADVANCE(397);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == ')') ADVANCE(485);
      if (lookahead == '?') ADVANCE(377);
      if (lookahead == '`') ADVANCE(397);
      if (lookahead != 0) ADVANCE(397);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(266);
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == '?') ADVANCE(378);
      if (lookahead == '`') ADVANCE(398);
      if (lookahead != 0) ADVANCE(398);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(268);
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == '?') ADVANCE(379);
      if (lookahead == '`') ADVANCE(399);
      if (lookahead != 0) ADVANCE(399);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == ' ') ADVANCE(400);
      if (lookahead == '"') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(403);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '?') ADVANCE(243);
      if (lookahead == '`') ADVANCE(404);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == ' ') ADVANCE(401);
      if (lookahead == '"') ADVANCE(403);
      if (lookahead == '\'') ADVANCE(401);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '?') ADVANCE(245);
      if (lookahead == '`') ADVANCE(405);
      if (lookahead != 0) ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == ' ') ADVANCE(402);
      if (lookahead == '"') ADVANCE(404);
      if (lookahead == '\'') ADVANCE(405);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '?') ADVANCE(247);
      if (lookahead == '`') ADVANCE(402);
      if (lookahead != 0) ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == ' ') ADVANCE(403);
      if (lookahead == '"') ADVANCE(403);
      if (lookahead == '\'') ADVANCE(403);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '?') ADVANCE(249);
      if (lookahead == '`') ADVANCE(406);
      if (lookahead != 0) ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == ' ') ADVANCE(404);
      if (lookahead == '"') ADVANCE(404);
      if (lookahead == '\'') ADVANCE(406);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '?') ADVANCE(251);
      if (lookahead == '`') ADVANCE(404);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == ' ') ADVANCE(405);
      if (lookahead == '"') ADVANCE(406);
      if (lookahead == '\'') ADVANCE(405);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '?') ADVANCE(253);
      if (lookahead == '`') ADVANCE(405);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == ' ') ADVANCE(406);
      if (lookahead == '"') ADVANCE(406);
      if (lookahead == '\'') ADVANCE(406);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '?') ADVANCE(255);
      if (lookahead == '`') ADVANCE(406);
      if (lookahead != 0) ADVANCE(406);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(407);
      if (lookahead == '"') ADVANCE(407);
      if (lookahead == '\'') ADVANCE(410);
      if (lookahead == ')') ADVANCE(453);
      if (lookahead == '?') ADVANCE(257);
      if (lookahead == '`') ADVANCE(411);
      if (lookahead != 0) ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(408);
      if (lookahead == '"') ADVANCE(410);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == ')') ADVANCE(454);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead != 0) ADVANCE(408);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(409);
      if (lookahead == '"') ADVANCE(411);
      if (lookahead == '\'') ADVANCE(412);
      if (lookahead == ')') ADVANCE(455);
      if (lookahead == '?') ADVANCE(261);
      if (lookahead == '`') ADVANCE(409);
      if (lookahead != 0) ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(410);
      if (lookahead == '"') ADVANCE(410);
      if (lookahead == '\'') ADVANCE(410);
      if (lookahead == ')') ADVANCE(456);
      if (lookahead == '?') ADVANCE(263);
      if (lookahead == '`') ADVANCE(413);
      if (lookahead != 0) ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(411);
      if (lookahead == '"') ADVANCE(411);
      if (lookahead == '\'') ADVANCE(413);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '?') ADVANCE(265);
      if (lookahead == '`') ADVANCE(411);
      if (lookahead != 0) ADVANCE(411);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(412);
      if (lookahead == '"') ADVANCE(413);
      if (lookahead == '\'') ADVANCE(412);
      if (lookahead == ')') ADVANCE(458);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(413);
      if (lookahead == '"') ADVANCE(413);
      if (lookahead == '\'') ADVANCE(413);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == '?') ADVANCE(269);
      if (lookahead == '`') ADVANCE(413);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(89);
      if (lookahead == '(') ADVANCE(420);
      if (lookahead == '[') ADVANCE(440);
      if (lookahead == ']') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(89);
      if (lookahead == ']') ADVANCE(448);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == '(') ADVANCE(420);
      if (lookahead == ',') ADVANCE(416);
      if (lookahead == '}') ADVANCE(416);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == ',') ADVANCE(417);
      if (lookahead == '}') ADVANCE(417);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(69);
      if (lookahead == ')') ADVANCE(482);
      if (lookahead == '`') ADVANCE(420);
      if (lookahead != 0) ADVANCE(418);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == '(') ADVANCE(420);
      if (lookahead == ')') ADVANCE(449);
      if (lookahead != 0) ADVANCE(419);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == ')') ADVANCE(449);
      if (lookahead != 0) ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(421);
      if (lookahead == '"') ADVANCE(242);
      if (lookahead == '\'') ADVANCE(244);
      if (lookahead == '?') ADVANCE(448);
      if (lookahead == '`') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(421);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '\'') ADVANCE(272);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == '?') ADVANCE(440);
      if (lookahead == '`') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(421);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == '?') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(422);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(421);
      if (lookahead == '?') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(421);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(425);
      if (lookahead == '"') ADVANCE(256);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == ')') ADVANCE(449);
      if (lookahead == '?') ADVANCE(420);
      if (lookahead == '`') ADVANCE(260);
      if (lookahead != 0) ADVANCE(425);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(425);
      if (lookahead == '"') ADVANCE(393);
      if (lookahead == '\'') ADVANCE(394);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == ')') ADVANCE(449);
      if (lookahead == '?') ADVANCE(419);
      if (lookahead == '`') ADVANCE(395);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(425);
      if (lookahead == ')') ADVANCE(449);
      if (lookahead == '?') ADVANCE(420);
      if (lookahead != 0) ADVANCE(425);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(428);
      if (lookahead == '"') ADVANCE(287);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '?') ADVANCE(415);
      if (lookahead == ']') ADVANCE(421);
      if (lookahead == '`') ADVANCE(289);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(428);
      if (lookahead == '"') ADVANCE(294);
      if (lookahead == '\'') ADVANCE(295);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == '?') ADVANCE(414);
      if (lookahead == '[') ADVANCE(422);
      if (lookahead == ']') ADVANCE(422);
      if (lookahead == '`') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(429);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(430);
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '\'') ADVANCE(302);
      if (lookahead == ',') ADVANCE(430);
      if (lookahead == '?') ADVANCE(417);
      if (lookahead == '`') ADVANCE(303);
      if (lookahead == '}') ADVANCE(430);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(430);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(430);
      if (lookahead == '"') ADVANCE(308);
      if (lookahead == '\'') ADVANCE(309);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == ',') ADVANCE(431);
      if (lookahead == '?') ADVANCE(416);
      if (lookahead == '`') ADVANCE(310);
      if (lookahead == '}') ADVANCE(431);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(431);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(433);
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '\'') ADVANCE(285);
      if (lookahead == '(') ADVANCE(434);
      if (lookahead == ')') ADVANCE(91);
      if (lookahead == '?') ADVANCE(441);
      if (lookahead == '`') ADVANCE(274);
      if (lookahead != 0) ADVANCE(432);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(433);
      if (lookahead == '"') ADVANCE(380);
      if (lookahead == '\'') ADVANCE(381);
      if (lookahead == ')') ADVANCE(91);
      if (lookahead == '?') ADVANCE(442);
      if (lookahead == '`') ADVANCE(246);
      if (lookahead != 0) ADVANCE(433);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(434);
      if (lookahead == '"') ADVANCE(390);
      if (lookahead == '\'') ADVANCE(391);
      if (lookahead == ')') ADVANCE(482);
      if (lookahead == '?') ADVANCE(418);
      if (lookahead == '`') ADVANCE(260);
      if (lookahead != 0) ADVANCE(434);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(436);
      if (lookahead == '"') ADVANCE(383);
      if (lookahead == '\'') ADVANCE(384);
      if (lookahead == '(') ADVANCE(437);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '?') ADVANCE(423);
      if (lookahead == '`') ADVANCE(385);
      if (lookahead != 0) ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(436);
      if (lookahead == '"') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(401);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '?') ADVANCE(424);
      if (lookahead == '`') ADVANCE(402);
      if (lookahead != 0) ADVANCE(436);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(437);
      if (lookahead == '"') ADVANCE(407);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == ')') ADVANCE(481);
      if (lookahead == '?') ADVANCE(427);
      if (lookahead == '`') ADVANCE(409);
      if (lookahead != 0) ADVANCE(437);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '(') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(440);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '(') ADVANCE(418);
      if (lookahead == '`') ADVANCE(440);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(91);
      if (lookahead != 0) ADVANCE(441);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '`') ADVANCE(448);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(91);
      if (lookahead != 0) ADVANCE(442);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '`') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(448);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"') ADVANCE(208);
      if (lookahead == '`') ADVANCE(501);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(209);
      if (lookahead == '`') ADVANCE(502);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(210);
      if (lookahead == '`') ADVANCE(506);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(226);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == '`') ADVANCE(227);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(228);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(229);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(230);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(231);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(89);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == '[') ADVANCE(479);
      if (lookahead == ']') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(460);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ',') ADVANCE(461);
      if (lookahead == '}') ADVANCE(461);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(461);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(70);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(481);
      if (lookahead == '?') ADVANCE(467);
      if (lookahead != 0) ADVANCE(462);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(87);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '?') ADVANCE(468);
      if (lookahead == '[') ADVANCE(477);
      if (lookahead == ']') ADVANCE(477);
      if (lookahead != 0) ADVANCE(463);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == ',') ADVANCE(464);
      if (lookahead == '?') ADVANCE(469);
      if (lookahead == '}') ADVANCE(464);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(477);
      if (lookahead != 0) ADVANCE(464);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(449);
      if (lookahead != 0) ADVANCE(465);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(421);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == '?') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(422);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(425);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == ')') ADVANCE(449);
      if (lookahead == '?') ADVANCE(465);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(428);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == '?') ADVANCE(460);
      if (lookahead == '[') ADVANCE(422);
      if (lookahead == ']') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(429);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(430);
      if (lookahead == '(') ADVANCE(425);
      if (lookahead == ',') ADVANCE(431);
      if (lookahead == '?') ADVANCE(461);
      if (lookahead == '}') ADVANCE(431);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(431);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '"') ADVANCE(630);
      if (lookahead == '\'') ADVANCE(626);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == '?') ADVANCE(472);
      if (lookahead == '[') ADVANCE(463);
      if (lookahead == '`') ADVANCE(478);
      if (lookahead == '{') ADVANCE(464);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(470);
      if (lookahead != 0) ADVANCE(477);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(433);
      if (lookahead == '(') ADVANCE(434);
      if (lookahead == ')') ADVANCE(91);
      if (lookahead == '?') ADVANCE(475);
      if (lookahead == '`') ADVANCE(422);
      if (lookahead != 0) ADVANCE(432);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(436);
      if (lookahead == '(') ADVANCE(437);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '?') ADVANCE(479);
      if (lookahead != 0) ADVANCE(435);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == '`') ADVANCE(479);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(91);
      if (lookahead != 0) ADVANCE(475);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '?') ADVANCE(479);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(86);
      if (lookahead != 0) ADVANCE(477);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '?') ADVANCE(466);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(86);
      if (lookahead != 0) ADVANCE(477);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == '?') ADVANCE(471);
      if (lookahead == '`') ADVANCE(477);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(85);
      if (lookahead != 0) ADVANCE(478);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(479);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '?') ADVANCE(92);
      if (lookahead == '`') ADVANCE(505);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '?') ADVANCE(147);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '`') ADVANCE(497);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '`') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"') ADVANCE(218);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(488);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(63);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(219);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(489);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(65);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '`') ADVANCE(220);
      if (lookahead == '}') ADVANCE(490);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(93);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(221);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(491);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(137);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(222);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(492);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(138);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(223);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(493);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(139);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(224);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(494);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(141);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '}') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(75);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '?') ADVANCE(77);
      if (lookahead == '}') ADVANCE(496);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(86);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == ')') ADVANCE(473);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(238);
      if (lookahead == ')') ADVANCE(484);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '"') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == ')') ADVANCE(481);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == ')') ADVANCE(449);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '?') ADVANCE(147);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '?') ADVANCE(147);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '`') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__attribute_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(516);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '.') ADVANCE(197);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(585);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(605);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(589);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(606);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(595);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(582);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(597);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(583);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(600);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(584);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(603);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(179);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(552);
      if (lookahead == 'o') ADVANCE(529);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(568);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(591);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(553);
      if (lookahead == 'o') ADVANCE(531);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(569);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(592);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(594);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(164);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(165);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(524);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(526);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(544);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(541);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(576);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(577);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(580);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(542);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(599);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(602);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(545);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(549);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(588);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(593);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(596);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(185);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(560);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(563);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(564);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(529);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(531);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(533);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(598);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(601);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(536);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(539);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(604);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(548);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(557);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(558);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(559);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(534);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(171);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(172);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(535);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(537);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(173);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(586);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(587);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(538);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(590);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(546);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(547);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(607);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(520);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(189);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(608);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(521);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(190);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(609);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(522);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(561);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(562);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(578);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(579);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(581);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(613);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(616);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(614);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(617);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(615);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(618);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(619);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token1);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token2);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '?') ADVANCE(466);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(86);
      if (lookahead != 0) ADVANCE(477);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(628);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(628);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '?') ADVANCE(466);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(86);
      if (lookahead != 0) ADVANCE(477);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(632);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(632);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '{') ADVANCE(634);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '{') ADVANCE(634);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(648);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(650);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '!') ADVANCE(639);
      if (lookahead == '#') ADVANCE(645);
      if (lookahead == '-') ADVANCE(667);
      if (lookahead == '.') ADVANCE(644);
      if (lookahead == '/') ADVANCE(638);
      if (lookahead == '=') ADVANCE(196);
      if (lookahead == 'c') ADVANCE(527);
      if (lookahead == 'd') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(567);
      if (lookahead == 'i') ADVANCE(554);
      if (lookahead == 's') ADVANCE(532);
      if (lookahead == 'u') ADVANCE(572);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '/') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '=') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == 'f') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == 'i') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(644);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(618);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__comment_content);
      if (eof) ADVANCE(152);
      if (lookahead == '!') ADVANCE(639);
      if (lookahead == '#') ADVANCE(645);
      if (lookahead == '-') ADVANCE(667);
      if (lookahead == '.') ADVANCE(644);
      if (lookahead == '/') ADVANCE(638);
      if (lookahead == '=') ADVANCE(196);
      if (lookahead == 'c') ADVANCE(527);
      if (lookahead == 'd') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(567);
      if (lookahead == 'i') ADVANCE(554);
      if (lookahead == 's') ADVANCE(532);
      if (lookahead == 'u') ADVANCE(572);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__delimited_javascript);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(653);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__delimited_javascript);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(653);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(657);
      if (lookahead == '#') ADVANCE(663);
      if (lookahead == '-') ADVANCE(666);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == '/') ADVANCE(656);
      if (lookahead == '=') ADVANCE(195);
      if (lookahead == 'c') ADVANCE(525);
      if (lookahead == 'd') ADVANCE(543);
      if (lookahead == 'e') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(551);
      if (lookahead == 's') ADVANCE(530);
      if (lookahead == 'u') ADVANCE(571);
      if (lookahead == 'w') ADVANCE(555);
      if (lookahead == '|') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(657);
      if (lookahead == '#') ADVANCE(663);
      if (lookahead == '-') ADVANCE(666);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == '/') ADVANCE(656);
      if (lookahead == '=') ADVANCE(195);
      if (lookahead == 'c') ADVANCE(525);
      if (lookahead == 'd') ADVANCE(574);
      if (lookahead == 'e') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(551);
      if (lookahead == 's') ADVANCE(530);
      if (lookahead == 'u') ADVANCE(571);
      if (lookahead == '|') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '/') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '=') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'f') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'i') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(662);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(617);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(646);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_unbuffered_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(668);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 151},
  [2] = {.lex_state = 151},
  [3] = {.lex_state = 151},
  [4] = {.lex_state = 150, .external_lex_state = 2},
  [5] = {.lex_state = 150, .external_lex_state = 2},
  [6] = {.lex_state = 150, .external_lex_state = 2},
  [7] = {.lex_state = 150, .external_lex_state = 2},
  [8] = {.lex_state = 150, .external_lex_state = 3},
  [9] = {.lex_state = 150, .external_lex_state = 4},
  [10] = {.lex_state = 150, .external_lex_state = 3},
  [11] = {.lex_state = 150, .external_lex_state = 2},
  [12] = {.lex_state = 151, .external_lex_state = 2},
  [13] = {.lex_state = 150},
  [14] = {.lex_state = 148, .external_lex_state = 2},
  [15] = {.lex_state = 151, .external_lex_state = 2},
  [16] = {.lex_state = 148, .external_lex_state = 2},
  [17] = {.lex_state = 150, .external_lex_state = 4},
  [18] = {.lex_state = 151, .external_lex_state = 2},
  [19] = {.lex_state = 150, .external_lex_state = 2},
  [20] = {.lex_state = 150, .external_lex_state = 4},
  [21] = {.lex_state = 150, .external_lex_state = 4},
  [22] = {.lex_state = 150, .external_lex_state = 4},
  [23] = {.lex_state = 150, .external_lex_state = 4},
  [24] = {.lex_state = 150},
  [25] = {.lex_state = 150, .external_lex_state = 2},
  [26] = {.lex_state = 148, .external_lex_state = 2},
  [27] = {.lex_state = 150, .external_lex_state = 4},
  [28] = {.lex_state = 150, .external_lex_state = 4},
  [29] = {.lex_state = 150, .external_lex_state = 2},
  [30] = {.lex_state = 150, .external_lex_state = 2},
  [31] = {.lex_state = 150, .external_lex_state = 2},
  [32] = {.lex_state = 151, .external_lex_state = 4},
  [33] = {.lex_state = 150, .external_lex_state = 2},
  [34] = {.lex_state = 647, .external_lex_state = 2},
  [35] = {.lex_state = 647, .external_lex_state = 3},
  [36] = {.lex_state = 150, .external_lex_state = 2},
  [37] = {.lex_state = 149, .external_lex_state = 2},
  [38] = {.lex_state = 151, .external_lex_state = 4},
  [39] = {.lex_state = 150, .external_lex_state = 2},
  [40] = {.lex_state = 150, .external_lex_state = 2},
  [41] = {.lex_state = 150, .external_lex_state = 2},
  [42] = {.lex_state = 150, .external_lex_state = 2},
  [43] = {.lex_state = 150, .external_lex_state = 2},
  [44] = {.lex_state = 150, .external_lex_state = 2},
  [45] = {.lex_state = 151, .external_lex_state = 4},
  [46] = {.lex_state = 149, .external_lex_state = 2},
  [47] = {.lex_state = 150, .external_lex_state = 2},
  [48] = {.lex_state = 151, .external_lex_state = 4},
  [49] = {.lex_state = 150, .external_lex_state = 2},
  [50] = {.lex_state = 150, .external_lex_state = 2},
  [51] = {.lex_state = 150, .external_lex_state = 2},
  [52] = {.lex_state = 150, .external_lex_state = 2},
  [53] = {.lex_state = 150, .external_lex_state = 2},
  [54] = {.lex_state = 150, .external_lex_state = 2},
  [55] = {.lex_state = 150, .external_lex_state = 2},
  [56] = {.lex_state = 150, .external_lex_state = 2},
  [57] = {.lex_state = 150, .external_lex_state = 2},
  [58] = {.lex_state = 150, .external_lex_state = 2},
  [59] = {.lex_state = 151, .external_lex_state = 4},
  [60] = {.lex_state = 151, .external_lex_state = 4},
  [61] = {.lex_state = 647, .external_lex_state = 2},
  [62] = {.lex_state = 647, .external_lex_state = 2},
  [63] = {.lex_state = 150, .external_lex_state = 2},
  [64] = {.lex_state = 150, .external_lex_state = 2},
  [65] = {.lex_state = 150, .external_lex_state = 2},
  [66] = {.lex_state = 150, .external_lex_state = 2},
  [67] = {.lex_state = 150, .external_lex_state = 2},
  [68] = {.lex_state = 151, .external_lex_state = 4},
  [69] = {.lex_state = 151},
  [70] = {.lex_state = 647, .external_lex_state = 2},
  [71] = {.lex_state = 151},
  [72] = {.lex_state = 151, .external_lex_state = 5},
  [73] = {.lex_state = 151, .external_lex_state = 5},
  [74] = {.lex_state = 149, .external_lex_state = 2},
  [75] = {.lex_state = 150},
  [76] = {.lex_state = 151, .external_lex_state = 5},
  [77] = {.lex_state = 151, .external_lex_state = 5},
  [78] = {.lex_state = 151, .external_lex_state = 5},
  [79] = {.lex_state = 150},
  [80] = {.lex_state = 151},
  [81] = {.lex_state = 151, .external_lex_state = 5},
  [82] = {.lex_state = 151, .external_lex_state = 4},
  [83] = {.lex_state = 151, .external_lex_state = 2},
  [84] = {.lex_state = 151, .external_lex_state = 2},
  [85] = {.lex_state = 151, .external_lex_state = 2},
  [86] = {.lex_state = 151, .external_lex_state = 2},
  [87] = {.lex_state = 151, .external_lex_state = 2},
  [88] = {.lex_state = 151, .external_lex_state = 2},
  [89] = {.lex_state = 151, .external_lex_state = 2},
  [90] = {.lex_state = 151, .external_lex_state = 5},
  [91] = {.lex_state = 151, .external_lex_state = 2},
  [92] = {.lex_state = 151, .external_lex_state = 2},
  [93] = {.lex_state = 151, .external_lex_state = 5},
  [94] = {.lex_state = 151, .external_lex_state = 2},
  [95] = {.lex_state = 151, .external_lex_state = 2},
  [96] = {.lex_state = 151, .external_lex_state = 2},
  [97] = {.lex_state = 151, .external_lex_state = 2},
  [98] = {.lex_state = 151, .external_lex_state = 2},
  [99] = {.lex_state = 151, .external_lex_state = 2},
  [100] = {.lex_state = 151, .external_lex_state = 2},
  [101] = {.lex_state = 151, .external_lex_state = 2},
  [102] = {.lex_state = 151, .external_lex_state = 2},
  [103] = {.lex_state = 151, .external_lex_state = 2},
  [104] = {.lex_state = 151, .external_lex_state = 2},
  [105] = {.lex_state = 151, .external_lex_state = 2},
  [106] = {.lex_state = 151, .external_lex_state = 2},
  [107] = {.lex_state = 151, .external_lex_state = 2},
  [108] = {.lex_state = 151},
  [109] = {.lex_state = 151},
  [110] = {.lex_state = 151},
  [111] = {.lex_state = 151},
  [112] = {.lex_state = 151},
  [113] = {.lex_state = 151},
  [114] = {.lex_state = 151},
  [115] = {.lex_state = 151},
  [116] = {.lex_state = 151},
  [117] = {.lex_state = 151},
  [118] = {.lex_state = 151},
  [119] = {.lex_state = 151},
  [120] = {.lex_state = 151},
  [121] = {.lex_state = 151},
  [122] = {.lex_state = 151},
  [123] = {.lex_state = 151},
  [124] = {.lex_state = 151},
  [125] = {.lex_state = 151},
  [126] = {.lex_state = 151},
  [127] = {.lex_state = 151},
  [128] = {.lex_state = 151},
  [129] = {.lex_state = 151},
  [130] = {.lex_state = 151},
  [131] = {.lex_state = 151},
  [132] = {.lex_state = 151},
  [133] = {.lex_state = 54, .external_lex_state = 6},
  [134] = {.lex_state = 54, .external_lex_state = 6},
  [135] = {.lex_state = 54, .external_lex_state = 6},
  [136] = {.lex_state = 54, .external_lex_state = 6},
  [137] = {.lex_state = 54, .external_lex_state = 6},
  [138] = {.lex_state = 54, .external_lex_state = 6},
  [139] = {.lex_state = 54, .external_lex_state = 6},
  [140] = {.lex_state = 54, .external_lex_state = 6},
  [141] = {.lex_state = 60},
  [142] = {.lex_state = 60},
  [143] = {.lex_state = 60},
  [144] = {.lex_state = 60},
  [145] = {.lex_state = 60},
  [146] = {.lex_state = 60},
  [147] = {.lex_state = 60},
  [148] = {.lex_state = 60},
  [149] = {.lex_state = 60},
  [150] = {.lex_state = 60},
  [151] = {.lex_state = 60},
  [152] = {.lex_state = 60},
  [153] = {.lex_state = 55},
  [154] = {.lex_state = 55},
  [155] = {.lex_state = 66},
  [156] = {.lex_state = 66},
  [157] = {.lex_state = 66},
  [158] = {.lex_state = 54, .external_lex_state = 6},
  [159] = {.lex_state = 60, .external_lex_state = 3},
  [160] = {.lex_state = 60, .external_lex_state = 3},
  [161] = {.lex_state = 55, .external_lex_state = 6},
  [162] = {.lex_state = 55, .external_lex_state = 6},
  [163] = {.lex_state = 55, .external_lex_state = 6},
  [164] = {.lex_state = 55, .external_lex_state = 6},
  [165] = {.lex_state = 55, .external_lex_state = 6},
  [166] = {.lex_state = 55, .external_lex_state = 6},
  [167] = {.lex_state = 55, .external_lex_state = 6},
  [168] = {.lex_state = 55, .external_lex_state = 6},
  [169] = {.lex_state = 11, .external_lex_state = 2},
  [170] = {.lex_state = 60, .external_lex_state = 1},
  [171] = {.lex_state = 60, .external_lex_state = 1},
  [172] = {.lex_state = 60, .external_lex_state = 1},
  [173] = {.lex_state = 60, .external_lex_state = 1},
  [174] = {.lex_state = 60, .external_lex_state = 1},
  [175] = {.lex_state = 60, .external_lex_state = 1},
  [176] = {.lex_state = 11, .external_lex_state = 2},
  [177] = {.lex_state = 11, .external_lex_state = 2},
  [178] = {.lex_state = 60},
  [179] = {.lex_state = 11, .external_lex_state = 2},
  [180] = {.lex_state = 11, .external_lex_state = 2},
  [181] = {.lex_state = 61},
  [182] = {.lex_state = 11, .external_lex_state = 2},
  [183] = {.lex_state = 60},
  [184] = {.lex_state = 11, .external_lex_state = 2},
  [185] = {.lex_state = 11, .external_lex_state = 2},
  [186] = {.lex_state = 11, .external_lex_state = 2},
  [187] = {.lex_state = 60},
  [188] = {.lex_state = 60},
  [189] = {.lex_state = 60, .external_lex_state = 3},
  [190] = {.lex_state = 11, .external_lex_state = 6},
  [191] = {.lex_state = 11, .external_lex_state = 6},
  [192] = {.lex_state = 11, .external_lex_state = 6},
  [193] = {.lex_state = 11},
  [194] = {.lex_state = 60, .external_lex_state = 3},
  [195] = {.lex_state = 11},
  [196] = {.lex_state = 11},
  [197] = {.lex_state = 11, .external_lex_state = 6},
  [198] = {.lex_state = 11},
  [199] = {.lex_state = 11, .external_lex_state = 6},
  [200] = {.lex_state = 11, .external_lex_state = 6},
  [201] = {.lex_state = 60, .external_lex_state = 1},
  [202] = {.lex_state = 11, .external_lex_state = 6},
  [203] = {.lex_state = 11, .external_lex_state = 6},
  [204] = {.lex_state = 11, .external_lex_state = 6},
  [205] = {.lex_state = 60, .external_lex_state = 3},
  [206] = {.lex_state = 11, .external_lex_state = 6},
  [207] = {.lex_state = 11, .external_lex_state = 6},
  [208] = {.lex_state = 11, .external_lex_state = 6},
  [209] = {.lex_state = 11, .external_lex_state = 6},
  [210] = {.lex_state = 11, .external_lex_state = 6},
  [211] = {.lex_state = 11, .external_lex_state = 6},
  [212] = {.lex_state = 11, .external_lex_state = 6},
  [213] = {.lex_state = 60, .external_lex_state = 3},
  [214] = {.lex_state = 11, .external_lex_state = 6},
  [215] = {.lex_state = 11},
  [216] = {.lex_state = 11},
  [217] = {.lex_state = 11, .external_lex_state = 6},
  [218] = {.lex_state = 11, .external_lex_state = 6},
  [219] = {.lex_state = 11, .external_lex_state = 6},
  [220] = {.lex_state = 11, .external_lex_state = 6},
  [221] = {.lex_state = 11},
  [222] = {.lex_state = 11, .external_lex_state = 6},
  [223] = {.lex_state = 11},
  [224] = {.lex_state = 60, .external_lex_state = 3},
  [225] = {.lex_state = 60, .external_lex_state = 3},
  [226] = {.lex_state = 60, .external_lex_state = 3},
  [227] = {.lex_state = 60, .external_lex_state = 3},
  [228] = {.lex_state = 55, .external_lex_state = 6},
  [229] = {.lex_state = 60, .external_lex_state = 3},
  [230] = {.lex_state = 60, .external_lex_state = 3},
  [231] = {.lex_state = 60, .external_lex_state = 3},
  [232] = {.lex_state = 11},
  [233] = {.lex_state = 11},
  [234] = {.lex_state = 60, .external_lex_state = 3},
  [235] = {.lex_state = 60, .external_lex_state = 3},
  [236] = {.lex_state = 60, .external_lex_state = 3},
  [237] = {.lex_state = 11},
  [238] = {.lex_state = 60, .external_lex_state = 3},
  [239] = {.lex_state = 60, .external_lex_state = 6},
  [240] = {.lex_state = 60, .external_lex_state = 3},
  [241] = {.lex_state = 60, .external_lex_state = 6},
  [242] = {.lex_state = 60, .external_lex_state = 3},
  [243] = {.lex_state = 60, .external_lex_state = 3},
  [244] = {.lex_state = 11},
  [245] = {.lex_state = 11},
  [246] = {.lex_state = 60, .external_lex_state = 3},
  [247] = {.lex_state = 60, .external_lex_state = 3},
  [248] = {.lex_state = 60, .external_lex_state = 3},
  [249] = {.lex_state = 60, .external_lex_state = 6},
  [250] = {.lex_state = 60, .external_lex_state = 3},
  [251] = {.lex_state = 60, .external_lex_state = 3},
  [252] = {.lex_state = 60, .external_lex_state = 3},
  [253] = {.lex_state = 55},
  [254] = {.lex_state = 11, .external_lex_state = 6},
  [255] = {.lex_state = 60, .external_lex_state = 6},
  [256] = {.lex_state = 11},
  [257] = {.lex_state = 11},
  [258] = {.lex_state = 11},
  [259] = {.lex_state = 55, .external_lex_state = 6},
  [260] = {.lex_state = 60, .external_lex_state = 3},
  [261] = {.lex_state = 11},
  [262] = {.lex_state = 55, .external_lex_state = 6},
  [263] = {.lex_state = 11},
  [264] = {.lex_state = 11},
  [265] = {.lex_state = 11},
  [266] = {.lex_state = 11, .external_lex_state = 6},
  [267] = {.lex_state = 60},
  [268] = {.lex_state = 11, .external_lex_state = 6},
  [269] = {.lex_state = 66},
  [270] = {.lex_state = 55},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 55},
  [273] = {.lex_state = 60},
  [274] = {.lex_state = 11, .external_lex_state = 6},
  [275] = {.lex_state = 11, .external_lex_state = 6},
  [276] = {.lex_state = 11, .external_lex_state = 6},
  [277] = {.lex_state = 11, .external_lex_state = 2},
  [278] = {.lex_state = 50, .external_lex_state = 6},
  [279] = {.lex_state = 60},
  [280] = {.lex_state = 53, .external_lex_state = 3},
  [281] = {.lex_state = 60},
  [282] = {.lex_state = 60},
  [283] = {.lex_state = 60},
  [284] = {.lex_state = 60},
  [285] = {.lex_state = 53, .external_lex_state = 3},
  [286] = {.lex_state = 60},
  [287] = {.lex_state = 50, .external_lex_state = 6},
  [288] = {.lex_state = 60},
  [289] = {.lex_state = 11, .external_lex_state = 6},
  [290] = {.lex_state = 60},
  [291] = {.lex_state = 60},
  [292] = {.lex_state = 60},
  [293] = {.lex_state = 54},
  [294] = {.lex_state = 54},
  [295] = {.lex_state = 60},
  [296] = {.lex_state = 60},
  [297] = {.lex_state = 50},
  [298] = {.lex_state = 50},
  [299] = {.lex_state = 54},
  [300] = {.lex_state = 54},
  [301] = {.lex_state = 53, .external_lex_state = 6},
  [302] = {.lex_state = 50},
  [303] = {.lex_state = 54},
  [304] = {.lex_state = 54},
  [305] = {.lex_state = 54},
  [306] = {.lex_state = 54},
  [307] = {.lex_state = 54},
  [308] = {.lex_state = 50},
  [309] = {.lex_state = 50},
  [310] = {.lex_state = 54},
  [311] = {.lex_state = 54},
  [312] = {.lex_state = 54},
  [313] = {.lex_state = 54},
  [314] = {.lex_state = 50},
  [315] = {.lex_state = 54},
  [316] = {.lex_state = 54},
  [317] = {.lex_state = 53, .external_lex_state = 3},
  [318] = {.lex_state = 50},
  [319] = {.lex_state = 54},
  [320] = {.lex_state = 60},
  [321] = {.lex_state = 53, .external_lex_state = 3},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 50},
  [324] = {.lex_state = 50},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 50},
  [327] = {.lex_state = 54},
  [328] = {.lex_state = 54},
  [329] = {.lex_state = 50},
  [330] = {.lex_state = 62},
  [331] = {.lex_state = 643},
  [332] = {.lex_state = 64},
  [333] = {.lex_state = 62},
  [334] = {.lex_state = 54},
  [335] = {.lex_state = 643, .external_lex_state = 6},
  [336] = {.lex_state = 643},
  [337] = {.lex_state = 64},
  [338] = {.lex_state = 0, .external_lex_state = 6},
  [339] = {.lex_state = 50},
  [340] = {.lex_state = 151},
  [341] = {.lex_state = 0, .external_lex_state = 6},
  [342] = {.lex_state = 0, .external_lex_state = 6},
  [343] = {.lex_state = 0, .external_lex_state = 6},
  [344] = {.lex_state = 66},
  [345] = {.lex_state = 0, .external_lex_state = 5},
  [346] = {.lex_state = 0, .external_lex_state = 6},
  [347] = {.lex_state = 668},
  [348] = {.lex_state = 0, .external_lex_state = 6},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0, .external_lex_state = 5},
  [351] = {.lex_state = 0, .external_lex_state = 5},
  [352] = {.lex_state = 0, .external_lex_state = 6},
  [353] = {.lex_state = 0, .external_lex_state = 6},
  [354] = {.lex_state = 0, .external_lex_state = 5},
  [355] = {.lex_state = 668},
  [356] = {.lex_state = 0, .external_lex_state = 6},
  [357] = {.lex_state = 0, .external_lex_state = 5},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 51},
  [360] = {.lex_state = 0, .external_lex_state = 6},
  [361] = {.lex_state = 52},
  [362] = {.lex_state = 0, .external_lex_state = 5},
  [363] = {.lex_state = 0, .external_lex_state = 6},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 52},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0, .external_lex_state = 5},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0, .external_lex_state = 5},
  [371] = {.lex_state = 0, .external_lex_state = 5},
  [372] = {.lex_state = 0, .external_lex_state = 5},
  [373] = {.lex_state = 0, .external_lex_state = 5},
  [374] = {.lex_state = 0, .external_lex_state = 5},
  [375] = {.lex_state = 0, .external_lex_state = 6},
  [376] = {.lex_state = 0, .external_lex_state = 6},
  [377] = {.lex_state = 0, .external_lex_state = 6},
  [378] = {.lex_state = 0, .external_lex_state = 6},
  [379] = {.lex_state = 0, .external_lex_state = 6},
  [380] = {.lex_state = 0, .external_lex_state = 6},
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
    [anon_sym_script_DOT] = ACTIONS(1),
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
    [sym_source_file] = STATE(358),
    [sym_doctype] = STATE(2),
    [sym_pipe] = STATE(2),
    [sym_conditional] = STATE(2),
    [sym_case] = STATE(2),
    [sym_unescaped_buffered_code] = STATE(2),
    [sym_buffered_code] = STATE(2),
    [sym_script_block] = STATE(2),
    [sym_tag] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_unbuffered_code] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
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
    [anon_sym_script_DOT] = ACTIONS(21),
    [anon_sym_SLASH_SLASH] = ACTIONS(23),
    [sym_tag_name] = ACTIONS(25),
    [sym_class] = ACTIONS(27),
    [sym_id] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
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
      anon_sym_script_DOT,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      sym_tag_name,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(27), 2,
      sym_class,
      sym_id,
    STATE(3), 11,
      sym_doctype,
      sym_pipe,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_source_file_repeat1,
  [58] = 15,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      anon_sym_doctype,
    ACTIONS(38), 1,
      anon_sym_PIPE,
    ACTIONS(44), 1,
      anon_sym_elseif,
    ACTIONS(47), 1,
      anon_sym_else,
    ACTIONS(50), 1,
      anon_sym_case,
    ACTIONS(53), 1,
      anon_sym_BANG_EQ,
    ACTIONS(56), 1,
      anon_sym_EQ,
    ACTIONS(59), 1,
      anon_sym_script_DOT,
    ACTIONS(62), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(65), 1,
      sym_tag_name,
    ACTIONS(71), 1,
      anon_sym_DASH,
    ACTIONS(41), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(68), 2,
      sym_class,
      sym_id,
    STATE(3), 11,
      sym_doctype,
      sym_pipe,
      sym_conditional,
      sym_case,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym_script_block,
      sym_tag,
      sym_comment,
      sym_unbuffered_code,
      aux_sym_source_file_repeat1,
  [116] = 7,
    ACTIONS(78), 1,
      anon_sym_PIPE,
    ACTIONS(80), 1,
      sym_tag_name,
    ACTIONS(84), 1,
      sym__dedent,
    ACTIONS(82), 2,
      sym_class,
      sym_id,
    STATE(5), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(74), 7,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
    ACTIONS(76), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
  [154] = 6,
    ACTIONS(90), 1,
      anon_sym_PIPE,
    ACTIONS(93), 1,
      sym_tag_name,
    ACTIONS(96), 2,
      sym_class,
      sym_id,
    STATE(5), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(88), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(86), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [190] = 7,
    ACTIONS(80), 1,
      sym_tag_name,
    ACTIONS(103), 1,
      anon_sym_DASH,
    STATE(31), 1,
      sym_unbuffered_code,
    ACTIONS(82), 2,
      sym_class,
      sym_id,
    STATE(19), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(101), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(99), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
  [227] = 7,
    ACTIONS(80), 1,
      sym_tag_name,
    ACTIONS(103), 1,
      anon_sym_DASH,
    STATE(33), 1,
      sym_unbuffered_code,
    ACTIONS(82), 2,
      sym_class,
      sym_id,
    STATE(25), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(107), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(105), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
  [264] = 6,
    ACTIONS(113), 1,
      anon_sym_COLON,
    ACTIONS(115), 1,
      sym__newline,
    ACTIONS(117), 1,
      sym__dedent,
    STATE(40), 1,
      sym__when_content,
    ACTIONS(111), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(109), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [299] = 4,
    ACTIONS(123), 1,
      sym__indent,
    STATE(53), 1,
      sym_children,
    ACTIONS(121), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(119), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [329] = 2,
    ACTIONS(127), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(125), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [355] = 5,
    ACTIONS(133), 1,
      sym_tag_name,
    ACTIONS(136), 2,
      sym_class,
      sym_id,
    STATE(11), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(131), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(129), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [387] = 6,
    ACTIONS(139), 1,
      anon_sym_PIPE,
    ACTIONS(142), 1,
      sym_tag_name,
    ACTIONS(145), 2,
      sym_class,
      sym_id,
    STATE(12), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(88), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
    ACTIONS(86), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [421] = 6,
    ACTIONS(152), 1,
      anon_sym_when,
    ACTIONS(154), 1,
      anon_sym_default,
    STATE(8), 1,
      sym__when_keyword,
    STATE(24), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(150), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(148), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [455] = 4,
    ACTIONS(160), 1,
      sym__un_delimited_javascript_line,
    STATE(16), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(156), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(158), 17,
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
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [485] = 7,
    ACTIONS(162), 1,
      anon_sym_PIPE,
    ACTIONS(164), 1,
      sym_tag_name,
    ACTIONS(168), 1,
      sym__dedent,
    ACTIONS(166), 2,
      sym_class,
      sym_id,
    STATE(12), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(76), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
    ACTIONS(74), 7,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [521] = 4,
    ACTIONS(174), 1,
      sym__un_delimited_javascript_line,
    STATE(16), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(170), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(172), 17,
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
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [551] = 4,
    ACTIONS(181), 1,
      sym__indent,
    STATE(44), 1,
      sym_children,
    ACTIONS(179), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(177), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [581] = 7,
    ACTIONS(162), 1,
      anon_sym_PIPE,
    ACTIONS(164), 1,
      sym_tag_name,
    ACTIONS(183), 1,
      sym__dedent,
    ACTIONS(166), 2,
      sym_class,
      sym_id,
    STATE(12), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(76), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
    ACTIONS(74), 7,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [617] = 5,
    ACTIONS(80), 1,
      sym_tag_name,
    ACTIONS(82), 2,
      sym_class,
      sym_id,
    STATE(11), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(187), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(185), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [649] = 4,
    ACTIONS(181), 1,
      sym__indent,
    STATE(50), 1,
      sym_children,
    ACTIONS(191), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(189), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [679] = 4,
    ACTIONS(181), 1,
      sym__indent,
    STATE(39), 1,
      sym_children,
    ACTIONS(195), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(193), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [709] = 4,
    ACTIONS(201), 1,
      sym__indent,
    STATE(64), 1,
      sym_children,
    ACTIONS(199), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(197), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [739] = 4,
    ACTIONS(203), 1,
      sym__indent,
    STATE(50), 1,
      sym_children,
    ACTIONS(191), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(189), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [769] = 6,
    ACTIONS(209), 1,
      anon_sym_when,
    ACTIONS(212), 1,
      anon_sym_default,
    STATE(8), 1,
      sym__when_keyword,
    STATE(24), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(207), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(205), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [803] = 5,
    ACTIONS(80), 1,
      sym_tag_name,
    ACTIONS(82), 2,
      sym_class,
      sym_id,
    STATE(11), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(101), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(99), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [835] = 2,
    ACTIONS(215), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(217), 18,
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
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      sym__un_delimited_javascript_line,
      anon_sym_DASH,
  [860] = 4,
    ACTIONS(223), 1,
      sym__indent,
    ACTIONS(225), 1,
      sym__dedent,
    ACTIONS(221), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(219), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [889] = 4,
    ACTIONS(231), 1,
      sym__indent,
    ACTIONS(233), 1,
      sym__dedent,
    ACTIONS(229), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(227), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [918] = 2,
    ACTIONS(237), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(235), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [942] = 2,
    ACTIONS(241), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(239), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [966] = 2,
    ACTIONS(187), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(185), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [990] = 4,
    ACTIONS(243), 1,
      sym__indent,
    STATE(104), 1,
      sym_children,
    ACTIONS(195), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(193), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1018] = 2,
    ACTIONS(101), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(99), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1042] = 5,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
    ACTIONS(249), 1,
      sym__comment_content,
    ACTIONS(251), 1,
      sym__dedent,
    STATE(62), 1,
      aux_sym_comment_repeat1,
    ACTIONS(247), 15,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1072] = 3,
    ACTIONS(257), 1,
      sym__newline,
    ACTIONS(253), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(255), 16,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      sym__comment_content,
      anon_sym_DASH,
  [1098] = 2,
    ACTIONS(261), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(259), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1122] = 4,
    ACTIONS(263), 1,
      sym__un_delimited_javascript_line,
    STATE(37), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(170), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(172), 15,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1150] = 4,
    ACTIONS(243), 1,
      sym__indent,
    STATE(88), 1,
      sym_children,
    ACTIONS(179), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(177), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1178] = 2,
    ACTIONS(268), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(266), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1202] = 3,
    ACTIONS(225), 1,
      sym__dedent,
    ACTIONS(221), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(219), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1228] = 2,
    ACTIONS(272), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(270), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1252] = 2,
    ACTIONS(276), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(274), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1276] = 2,
    ACTIONS(195), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(193), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1300] = 2,
    ACTIONS(195), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(193), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1324] = 4,
    ACTIONS(278), 1,
      sym__indent,
    STATE(96), 1,
      sym_children,
    ACTIONS(191), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(189), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1352] = 4,
    ACTIONS(280), 1,
      sym__un_delimited_javascript_line,
    STATE(37), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(156), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(158), 15,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1380] = 2,
    ACTIONS(284), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(282), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1404] = 4,
    ACTIONS(243), 1,
      sym__indent,
    STATE(96), 1,
      sym_children,
    ACTIONS(191), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(189), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1432] = 2,
    ACTIONS(179), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(177), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1456] = 2,
    ACTIONS(179), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(177), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1480] = 2,
    ACTIONS(288), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(286), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1504] = 3,
    ACTIONS(294), 1,
      sym__dedent,
    ACTIONS(292), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(290), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1530] = 2,
    ACTIONS(191), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(189), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1554] = 3,
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
    ACTIONS(296), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1580] = 3,
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
    ACTIONS(302), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1606] = 2,
    ACTIONS(191), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(189), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1630] = 2,
    ACTIONS(310), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(308), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1654] = 2,
    ACTIONS(314), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(312), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1678] = 4,
    ACTIONS(316), 1,
      sym__indent,
    STATE(97), 1,
      sym_children,
    ACTIONS(199), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(197), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1706] = 4,
    ACTIONS(318), 1,
      sym__indent,
    STATE(106), 1,
      sym_children,
    ACTIONS(121), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(119), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1734] = 5,
    ACTIONS(249), 1,
      sym__comment_content,
    ACTIONS(320), 1,
      ts_builtin_sym_end,
    ACTIONS(324), 1,
      sym__dedent,
    STATE(62), 1,
      aux_sym_comment_repeat1,
    ACTIONS(322), 15,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1764] = 4,
    ACTIONS(330), 1,
      sym__comment_content,
    STATE(62), 1,
      aux_sym_comment_repeat1,
    ACTIONS(326), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(328), 15,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1792] = 2,
    ACTIONS(121), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(119), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1816] = 2,
    ACTIONS(121), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(119), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1840] = 2,
    ACTIONS(335), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(333), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1864] = 2,
    ACTIONS(199), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(197), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1888] = 2,
    ACTIONS(339), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(337), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1912] = 4,
    ACTIONS(341), 1,
      sym__indent,
    ACTIONS(343), 1,
      sym__dedent,
    ACTIONS(229), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(227), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1939] = 5,
    ACTIONS(345), 1,
      sym_tag_name,
    ACTIONS(348), 2,
      sym_class,
      sym_id,
    STATE(69), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(131), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
    ACTIONS(129), 8,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [1968] = 2,
    ACTIONS(326), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(328), 16,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      sym__comment_content,
      anon_sym_DASH,
  [1991] = 3,
    STATE(69), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(353), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(351), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2016] = 4,
    ACTIONS(355), 1,
      sym__indent,
    STATE(111), 1,
      sym_children,
    ACTIONS(121), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(119), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2043] = 4,
    ACTIONS(357), 1,
      sym__indent,
    STATE(125), 1,
      sym_children,
    ACTIONS(179), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(177), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2070] = 2,
    ACTIONS(215), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(217), 16,
      anon_sym_doctype,
      anon_sym_PIPE,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      sym__un_delimited_javascript_line,
      anon_sym_DASH,
  [2093] = 2,
    ACTIONS(221), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(219), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2116] = 4,
    ACTIONS(359), 1,
      sym__indent,
    STATE(124), 1,
      sym_children,
    ACTIONS(191), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(189), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2143] = 4,
    ACTIONS(361), 1,
      sym__indent,
    STATE(121), 1,
      sym_children,
    ACTIONS(199), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(197), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2170] = 4,
    ACTIONS(357), 1,
      sym__indent,
    STATE(114), 1,
      sym_children,
    ACTIONS(195), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(193), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2197] = 2,
    ACTIONS(365), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(363), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2220] = 3,
    STATE(69), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(369), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(367), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2245] = 4,
    ACTIONS(357), 1,
      sym__indent,
    STATE(124), 1,
      sym_children,
    ACTIONS(191), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(189), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2272] = 4,
    ACTIONS(371), 1,
      sym__indent,
    ACTIONS(373), 1,
      sym__dedent,
    ACTIONS(229), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(227), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2299] = 2,
    ACTIONS(335), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(333), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2321] = 2,
    ACTIONS(191), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(189), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2343] = 2,
    ACTIONS(310), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(308), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2365] = 2,
    ACTIONS(241), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(239), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2387] = 2,
    ACTIONS(195), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(193), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2409] = 2,
    ACTIONS(195), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(193), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2431] = 2,
    ACTIONS(284), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(282), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2453] = 3,
    ACTIONS(379), 1,
      sym__indent,
    ACTIONS(377), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(375), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2477] = 3,
    ACTIONS(381), 1,
      sym__dedent,
    ACTIONS(292), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(290), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2501] = 3,
    ACTIONS(383), 1,
      sym__dedent,
    ACTIONS(304), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(302), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2525] = 3,
    ACTIONS(389), 1,
      sym__indent,
    ACTIONS(387), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(385), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2549] = 2,
    ACTIONS(199), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(197), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2571] = 2,
    ACTIONS(179), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(177), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2593] = 2,
    ACTIONS(179), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(177), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2615] = 2,
    ACTIONS(121), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(119), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2637] = 2,
    ACTIONS(121), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(119), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2659] = 2,
    ACTIONS(288), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(286), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2681] = 2,
    ACTIONS(314), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(312), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2703] = 3,
    ACTIONS(391), 1,
      sym__dedent,
    ACTIONS(292), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(290), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2727] = 2,
    ACTIONS(339), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(337), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2749] = 2,
    ACTIONS(272), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(270), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2771] = 2,
    ACTIONS(268), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(266), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2793] = 2,
    ACTIONS(261), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(259), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2815] = 2,
    ACTIONS(191), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(189), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2837] = 3,
    ACTIONS(393), 1,
      sym__dedent,
    ACTIONS(298), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(296), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2861] = 2,
    ACTIONS(288), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(286), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2882] = 2,
    ACTIONS(237), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(235), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2903] = 2,
    ACTIONS(191), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(189), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2924] = 2,
    ACTIONS(191), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(189), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2945] = 2,
    ACTIONS(276), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(274), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2966] = 2,
    ACTIONS(261), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(259), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2987] = 2,
    ACTIONS(268), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(266), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3008] = 2,
    ACTIONS(397), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(395), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3029] = 2,
    ACTIONS(272), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(270), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3050] = 2,
    ACTIONS(310), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(308), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3071] = 2,
    ACTIONS(322), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(320), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3092] = 2,
    ACTIONS(339), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(337), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3113] = 2,
    ACTIONS(121), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(119), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3134] = 2,
    ACTIONS(121), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(119), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3155] = 2,
    ACTIONS(195), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(193), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3176] = 2,
    ACTIONS(314), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(312), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3197] = 2,
    ACTIONS(179), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(177), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3218] = 2,
    ACTIONS(195), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(193), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3239] = 2,
    ACTIONS(284), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(282), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3260] = 2,
    ACTIONS(401), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(399), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3281] = 2,
    ACTIONS(241), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(239), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3302] = 2,
    ACTIONS(199), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(197), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3323] = 2,
    ACTIONS(179), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(177), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3344] = 2,
    ACTIONS(405), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(403), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3365] = 2,
    ACTIONS(335), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(333), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3386] = 11,
    ACTIONS(407), 1,
      anon_sym_COLON,
    ACTIONS(409), 1,
      anon_sym_BANG_EQ,
    ACTIONS(411), 1,
      anon_sym_EQ,
    ACTIONS(413), 1,
      anon_sym_,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(421), 1,
      sym__newline,
    STATE(138), 1,
      aux_sym_tag_repeat1,
    STATE(164), 1,
      sym_attributes,
    ACTIONS(419), 2,
      sym_class,
      sym_id,
    STATE(66), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3423] = 11,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(423), 1,
      anon_sym_COLON,
    ACTIONS(425), 1,
      anon_sym_BANG_EQ,
    ACTIONS(427), 1,
      anon_sym_EQ,
    ACTIONS(429), 1,
      anon_sym_,
    ACTIONS(431), 1,
      anon_sym_DOT,
    ACTIONS(435), 1,
      sym__newline,
    STATE(158), 1,
      aux_sym_tag_repeat1,
    STATE(162), 1,
      sym_attributes,
    ACTIONS(433), 2,
      sym_class,
      sym_id,
    STATE(120), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3460] = 11,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(437), 1,
      anon_sym_COLON,
    ACTIONS(439), 1,
      anon_sym_BANG_EQ,
    ACTIONS(441), 1,
      anon_sym_EQ,
    ACTIONS(443), 1,
      anon_sym_,
    ACTIONS(445), 1,
      anon_sym_DOT,
    ACTIONS(447), 1,
      sym__newline,
    STATE(158), 1,
      aux_sym_tag_repeat1,
    STATE(165), 1,
      sym_attributes,
    ACTIONS(433), 2,
      sym_class,
      sym_id,
    STATE(98), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3497] = 11,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(449), 1,
      anon_sym_COLON,
    ACTIONS(451), 1,
      anon_sym_BANG_EQ,
    ACTIONS(453), 1,
      anon_sym_EQ,
    ACTIONS(455), 1,
      anon_sym_,
    ACTIONS(457), 1,
      anon_sym_DOT,
    ACTIONS(461), 1,
      sym__newline,
    STATE(140), 1,
      aux_sym_tag_repeat1,
    STATE(168), 1,
      sym_attributes,
    ACTIONS(459), 2,
      sym_class,
      sym_id,
    STATE(229), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3534] = 11,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      anon_sym_BANG_EQ,
    ACTIONS(441), 1,
      anon_sym_EQ,
    ACTIONS(445), 1,
      anon_sym_DOT,
    ACTIONS(463), 1,
      anon_sym_COLON,
    ACTIONS(465), 1,
      anon_sym_,
    ACTIONS(469), 1,
      sym__newline,
    STATE(135), 1,
      aux_sym_tag_repeat1,
    STATE(161), 1,
      sym_attributes,
    ACTIONS(467), 2,
      sym_class,
      sym_id,
    STATE(94), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3571] = 11,
    ACTIONS(409), 1,
      anon_sym_BANG_EQ,
    ACTIONS(411), 1,
      anon_sym_EQ,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(471), 1,
      anon_sym_COLON,
    ACTIONS(473), 1,
      anon_sym_,
    ACTIONS(475), 1,
      sym__newline,
    STATE(158), 1,
      aux_sym_tag_repeat1,
    STATE(166), 1,
      sym_attributes,
    ACTIONS(433), 2,
      sym_class,
      sym_id,
    STATE(63), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3608] = 11,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      anon_sym_BANG_EQ,
    ACTIONS(427), 1,
      anon_sym_EQ,
    ACTIONS(431), 1,
      anon_sym_DOT,
    ACTIONS(477), 1,
      anon_sym_COLON,
    ACTIONS(479), 1,
      anon_sym_,
    ACTIONS(483), 1,
      sym__newline,
    STATE(134), 1,
      aux_sym_tag_repeat1,
    STATE(163), 1,
      sym_attributes,
    ACTIONS(481), 2,
      sym_class,
      sym_id,
    STATE(129), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3645] = 11,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(451), 1,
      anon_sym_BANG_EQ,
    ACTIONS(453), 1,
      anon_sym_EQ,
    ACTIONS(457), 1,
      anon_sym_DOT,
    ACTIONS(485), 1,
      anon_sym_COLON,
    ACTIONS(487), 1,
      anon_sym_,
    ACTIONS(489), 1,
      sym__newline,
    STATE(158), 1,
      aux_sym_tag_repeat1,
    STATE(167), 1,
      sym_attributes,
    ACTIONS(433), 2,
      sym_class,
      sym_id,
    STATE(225), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3682] = 7,
    ACTIONS(162), 1,
      anon_sym_PIPE,
    ACTIONS(491), 1,
      anon_sym_BANG_EQ,
    ACTIONS(493), 1,
      anon_sym_EQ,
    ACTIONS(495), 1,
      anon_sym_DOT,
    STATE(95), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(166), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(18), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3710] = 7,
    ACTIONS(17), 1,
      anon_sym_BANG_EQ,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(162), 1,
      anon_sym_PIPE,
    ACTIONS(497), 1,
      anon_sym_DOT,
    STATE(122), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(166), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(15), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3738] = 7,
    ACTIONS(78), 1,
      anon_sym_PIPE,
    ACTIONS(499), 1,
      anon_sym_BANG_EQ,
    ACTIONS(501), 1,
      anon_sym_EQ,
    ACTIONS(503), 1,
      anon_sym_DOT,
    STATE(43), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(82), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(4), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3766] = 7,
    ACTIONS(78), 1,
      anon_sym_PIPE,
    ACTIONS(499), 1,
      anon_sym_BANG_EQ,
    ACTIONS(501), 1,
      anon_sym_EQ,
    ACTIONS(503), 1,
      anon_sym_DOT,
    STATE(49), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(82), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(4), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3794] = 7,
    ACTIONS(162), 1,
      anon_sym_PIPE,
    ACTIONS(491), 1,
      anon_sym_BANG_EQ,
    ACTIONS(493), 1,
      anon_sym_EQ,
    ACTIONS(495), 1,
      anon_sym_DOT,
    STATE(84), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(166), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(18), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3822] = 7,
    ACTIONS(162), 1,
      anon_sym_PIPE,
    ACTIONS(491), 1,
      anon_sym_BANG_EQ,
    ACTIONS(493), 1,
      anon_sym_EQ,
    ACTIONS(495), 1,
      anon_sym_DOT,
    STATE(87), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(166), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(18), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3850] = 7,
    ACTIONS(17), 1,
      anon_sym_BANG_EQ,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(162), 1,
      anon_sym_PIPE,
    ACTIONS(497), 1,
      anon_sym_DOT,
    STATE(130), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(166), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(15), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3878] = 7,
    ACTIONS(505), 1,
      anon_sym_PIPE,
    ACTIONS(507), 1,
      anon_sym_BANG_EQ,
    ACTIONS(509), 1,
      anon_sym_EQ,
    ACTIONS(511), 1,
      anon_sym_DOT,
    STATE(248), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(513), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(159), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3906] = 7,
    ACTIONS(17), 1,
      anon_sym_BANG_EQ,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(162), 1,
      anon_sym_PIPE,
    ACTIONS(497), 1,
      anon_sym_DOT,
    STATE(110), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(166), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(15), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3934] = 7,
    ACTIONS(78), 1,
      anon_sym_PIPE,
    ACTIONS(499), 1,
      anon_sym_BANG_EQ,
    ACTIONS(501), 1,
      anon_sym_EQ,
    ACTIONS(503), 1,
      anon_sym_DOT,
    STATE(56), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(82), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(4), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3962] = 7,
    ACTIONS(505), 1,
      anon_sym_PIPE,
    ACTIONS(507), 1,
      anon_sym_BANG_EQ,
    ACTIONS(509), 1,
      anon_sym_EQ,
    ACTIONS(511), 1,
      anon_sym_DOT,
    STATE(243), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(513), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(159), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3990] = 7,
    ACTIONS(505), 1,
      anon_sym_PIPE,
    ACTIONS(507), 1,
      anon_sym_BANG_EQ,
    ACTIONS(509), 1,
      anon_sym_EQ,
    ACTIONS(511), 1,
      anon_sym_DOT,
    STATE(235), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(513), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(159), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4018] = 6,
    ACTIONS(515), 1,
      anon_sym_EQ,
    ACTIONS(517), 1,
      anon_sym_,
    ACTIONS(519), 1,
      anon_sym_DOT,
    STATE(253), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(521), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(310), 6,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
  [4043] = 6,
    ACTIONS(515), 1,
      anon_sym_EQ,
    ACTIONS(519), 1,
      anon_sym_DOT,
    ACTIONS(523), 1,
      anon_sym_,
    STATE(153), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(525), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(327), 6,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
  [4068] = 8,
    ACTIONS(527), 1,
      anon_sym_RPAREN,
    ACTIONS(529), 1,
      aux_sym__attribute_token1,
    STATE(154), 1,
      sym_attribute_name,
    STATE(156), 1,
      aux_sym_attributes_repeat1,
    STATE(293), 1,
      sym_angular_attribute_name,
    STATE(306), 1,
      sym_attribute,
    STATE(307), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(531), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [4096] = 8,
    ACTIONS(529), 1,
      aux_sym__attribute_token1,
    ACTIONS(533), 1,
      anon_sym_RPAREN,
    STATE(154), 1,
      sym_attribute_name,
    STATE(157), 1,
      aux_sym_attributes_repeat1,
    STATE(293), 1,
      sym_angular_attribute_name,
    STATE(328), 1,
      sym_attribute,
    STATE(307), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(531), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [4124] = 8,
    ACTIONS(535), 1,
      anon_sym_RPAREN,
    ACTIONS(537), 1,
      aux_sym__attribute_token1,
    STATE(154), 1,
      sym_attribute_name,
    STATE(157), 1,
      aux_sym_attributes_repeat1,
    STATE(293), 1,
      sym_angular_attribute_name,
    STATE(334), 1,
      sym_attribute,
    STATE(307), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(540), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [4152] = 4,
    STATE(158), 1,
      aux_sym_tag_repeat1,
    ACTIONS(545), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(547), 2,
      sym_class,
      sym_id,
    ACTIONS(543), 5,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LPAREN,
  [4171] = 5,
    ACTIONS(74), 1,
      sym__newline,
    ACTIONS(505), 1,
      anon_sym_PIPE,
    ACTIONS(550), 1,
      sym__dedent,
    ACTIONS(513), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(160), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4192] = 4,
    ACTIONS(552), 1,
      anon_sym_PIPE,
    ACTIONS(86), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(555), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(160), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4211] = 7,
    ACTIONS(437), 1,
      anon_sym_COLON,
    ACTIONS(439), 1,
      anon_sym_BANG_EQ,
    ACTIONS(441), 1,
      anon_sym_EQ,
    ACTIONS(443), 1,
      anon_sym_,
    ACTIONS(445), 1,
      anon_sym_DOT,
    ACTIONS(447), 1,
      sym__newline,
    STATE(98), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4235] = 7,
    ACTIONS(425), 1,
      anon_sym_BANG_EQ,
    ACTIONS(427), 1,
      anon_sym_EQ,
    ACTIONS(431), 1,
      anon_sym_DOT,
    ACTIONS(558), 1,
      anon_sym_COLON,
    ACTIONS(560), 1,
      anon_sym_,
    ACTIONS(562), 1,
      sym__newline,
    STATE(110), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4259] = 7,
    ACTIONS(423), 1,
      anon_sym_COLON,
    ACTIONS(425), 1,
      anon_sym_BANG_EQ,
    ACTIONS(427), 1,
      anon_sym_EQ,
    ACTIONS(429), 1,
      anon_sym_,
    ACTIONS(431), 1,
      anon_sym_DOT,
    ACTIONS(435), 1,
      sym__newline,
    STATE(120), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4283] = 7,
    ACTIONS(409), 1,
      anon_sym_BANG_EQ,
    ACTIONS(411), 1,
      anon_sym_EQ,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(471), 1,
      anon_sym_COLON,
    ACTIONS(473), 1,
      anon_sym_,
    ACTIONS(475), 1,
      sym__newline,
    STATE(63), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4307] = 7,
    ACTIONS(439), 1,
      anon_sym_BANG_EQ,
    ACTIONS(441), 1,
      anon_sym_EQ,
    ACTIONS(445), 1,
      anon_sym_DOT,
    ACTIONS(564), 1,
      anon_sym_COLON,
    ACTIONS(566), 1,
      anon_sym_,
    ACTIONS(568), 1,
      sym__newline,
    STATE(84), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4331] = 7,
    ACTIONS(409), 1,
      anon_sym_BANG_EQ,
    ACTIONS(411), 1,
      anon_sym_EQ,
    ACTIONS(415), 1,
      anon_sym_DOT,
    ACTIONS(570), 1,
      anon_sym_COLON,
    ACTIONS(572), 1,
      anon_sym_,
    ACTIONS(574), 1,
      sym__newline,
    STATE(56), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4355] = 7,
    ACTIONS(451), 1,
      anon_sym_BANG_EQ,
    ACTIONS(453), 1,
      anon_sym_EQ,
    ACTIONS(457), 1,
      anon_sym_DOT,
    ACTIONS(576), 1,
      anon_sym_COLON,
    ACTIONS(578), 1,
      anon_sym_,
    ACTIONS(580), 1,
      sym__newline,
    STATE(235), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4379] = 7,
    ACTIONS(451), 1,
      anon_sym_BANG_EQ,
    ACTIONS(453), 1,
      anon_sym_EQ,
    ACTIONS(457), 1,
      anon_sym_DOT,
    ACTIONS(485), 1,
      anon_sym_COLON,
    ACTIONS(487), 1,
      anon_sym_,
    ACTIONS(489), 1,
      sym__newline,
    STATE(225), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4403] = 7,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(588), 1,
      sym__dedent,
    STATE(176), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(202), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4426] = 3,
    ACTIONS(590), 1,
      sym__indent,
    STATE(251), 1,
      sym_children,
    ACTIONS(193), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4441] = 3,
    ACTIONS(590), 1,
      sym__indent,
    STATE(247), 1,
      sym_children,
    ACTIONS(177), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4456] = 3,
    ACTIONS(592), 1,
      sym__indent,
    STATE(242), 1,
      sym_children,
    ACTIONS(189), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4471] = 3,
    ACTIONS(590), 1,
      sym__indent,
    STATE(242), 1,
      sym_children,
    ACTIONS(189), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4486] = 3,
    ACTIONS(594), 1,
      sym__indent,
    STATE(238), 1,
      sym_children,
    ACTIONS(119), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4501] = 3,
    ACTIONS(596), 1,
      sym__indent,
    STATE(231), 1,
      sym_children,
    ACTIONS(197), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4516] = 7,
    ACTIONS(598), 1,
      aux_sym_content_token1,
    ACTIONS(601), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(604), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(607), 1,
      sym__dedent,
    STATE(176), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(202), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4539] = 7,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(609), 1,
      sym__dedent,
    STATE(176), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(202), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4562] = 3,
    ACTIONS(505), 1,
      anon_sym_PIPE,
    ACTIONS(513), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(159), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4577] = 7,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(611), 1,
      sym__dedent,
    STATE(176), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(202), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4600] = 7,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(613), 1,
      sym__dedent,
    STATE(176), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(202), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4623] = 8,
    ACTIONS(615), 1,
      aux_sym__ternary_attribute_value_token1,
    ACTIONS(617), 1,
      aux_sym__variable_attribute_value_token1,
    ACTIONS(619), 1,
      aux_sym__object_attribute_value_token1,
    ACTIONS(621), 1,
      aux_sym__template_attribute_value_token1,
    ACTIONS(623), 1,
      aux_sym__array_attribute_value_token1,
    ACTIONS(625), 1,
      anon_sym_SQUOTE,
    ACTIONS(627), 1,
      anon_sym_DQUOTE,
    STATE(305), 1,
      sym_quoted_attribute_value,
  [4648] = 7,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(629), 1,
      sym__dedent,
    STATE(176), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(202), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4671] = 3,
    ACTIONS(78), 1,
      anon_sym_PIPE,
    ACTIONS(82), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(4), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4686] = 7,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(631), 1,
      sym__dedent,
    STATE(176), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(202), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4709] = 7,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(633), 1,
      sym__dedent,
    STATE(176), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(202), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4732] = 7,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(635), 1,
      sym__dedent,
    STATE(176), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(202), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4755] = 3,
    ACTIONS(162), 1,
      anon_sym_PIPE,
    ACTIONS(166), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(15), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4770] = 3,
    ACTIONS(162), 1,
      anon_sym_PIPE,
    ACTIONS(166), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(18), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4785] = 4,
    ACTIONS(637), 1,
      sym__newline,
    ACTIONS(639), 1,
      sym__dedent,
    STATE(194), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(513), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4801] = 6,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(641), 1,
      sym__newline,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(197), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4821] = 6,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(643), 1,
      sym__newline,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(197), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4841] = 6,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(645), 1,
      sym__newline,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(191), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4861] = 6,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(180), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(202), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4881] = 4,
    ACTIONS(650), 1,
      sym__newline,
    ACTIONS(653), 1,
      sym__dedent,
    STATE(194), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(647), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [4897] = 6,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(177), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(202), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4917] = 6,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(179), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(202), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4937] = 6,
    ACTIONS(655), 1,
      aux_sym_content_token1,
    ACTIONS(658), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(661), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(664), 1,
      sym__newline,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(197), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4957] = 6,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(182), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(202), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4977] = 6,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(666), 1,
      sym__newline,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(197), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4997] = 6,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(668), 1,
      sym__newline,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(206), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5017] = 3,
    ACTIONS(670), 1,
      sym__indent,
    ACTIONS(672), 1,
      sym__dedent,
    ACTIONS(227), 5,
      sym__newline,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5031] = 6,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(674), 1,
      sym__newline,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(197), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5051] = 6,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(676), 1,
      sym__newline,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(197), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5071] = 6,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(678), 1,
      sym__newline,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(197), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5091] = 4,
    ACTIONS(637), 1,
      sym__newline,
    ACTIONS(680), 1,
      sym__dedent,
    STATE(194), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(513), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5107] = 6,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(682), 1,
      sym__newline,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(197), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5127] = 6,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(684), 1,
      sym__newline,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(197), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5147] = 6,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(686), 1,
      sym__newline,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(197), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5167] = 6,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(688), 1,
      sym__newline,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(197), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5187] = 6,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(690), 1,
      sym__newline,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(208), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5207] = 6,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(692), 1,
      sym__newline,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(197), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5227] = 6,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(694), 1,
      sym__newline,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(197), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5247] = 4,
    ACTIONS(637), 1,
      sym__newline,
    ACTIONS(696), 1,
      sym__dedent,
    STATE(194), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(513), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5263] = 6,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(698), 1,
      sym__newline,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(197), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5283] = 6,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(185), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(202), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5303] = 6,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(184), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(202), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5323] = 6,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(700), 1,
      sym__newline,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(197), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5343] = 6,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(702), 1,
      sym__newline,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(197), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5363] = 6,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(704), 1,
      sym__newline,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(197), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5383] = 6,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(706), 1,
      sym__newline,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(197), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5403] = 6,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(186), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(202), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5423] = 6,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(708), 1,
      sym__newline,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(190), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5443] = 6,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(169), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(202), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5463] = 4,
    ACTIONS(637), 1,
      sym__newline,
    ACTIONS(710), 1,
      sym__dedent,
    STATE(194), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(513), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5479] = 1,
    ACTIONS(119), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5488] = 1,
    ACTIONS(270), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5497] = 1,
    ACTIONS(337), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5506] = 2,
    ACTIONS(714), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(712), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [5517] = 1,
    ACTIONS(197), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5526] = 1,
    ACTIONS(333), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5535] = 1,
    ACTIONS(119), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5544] = 5,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(214), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5561] = 5,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(220), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5578] = 1,
    ACTIONS(312), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5587] = 1,
    ACTIONS(189), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5596] = 1,
    ACTIONS(239), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5605] = 5,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(218), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5622] = 1,
    ACTIONS(189), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5631] = 3,
    ACTIONS(716), 1,
      sym__newline,
    STATE(189), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(513), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5644] = 1,
    ACTIONS(286), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5653] = 3,
    ACTIONS(718), 1,
      sym__newline,
    STATE(213), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(513), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5666] = 1,
    ACTIONS(177), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5675] = 1,
    ACTIONS(177), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5684] = 5,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(211), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5701] = 5,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(209), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5718] = 1,
    ACTIONS(282), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5727] = 1,
    ACTIONS(193), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5736] = 1,
    ACTIONS(193), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5745] = 3,
    ACTIONS(720), 1,
      sym__newline,
    STATE(205), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(513), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5758] = 1,
    ACTIONS(308), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5767] = 1,
    ACTIONS(266), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5776] = 1,
    ACTIONS(259), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5785] = 4,
    ACTIONS(724), 1,
      anon_sym_,
    ACTIONS(726), 1,
      anon_sym_DOT,
    STATE(253), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(722), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5800] = 4,
    ACTIONS(731), 1,
      anon_sym_POUND,
    ACTIONS(733), 1,
      anon_sym_LBRACE,
    ACTIONS(729), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(735), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [5815] = 3,
    ACTIONS(737), 1,
      sym__newline,
    STATE(224), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(513), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5828] = 5,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(204), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5845] = 5,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(203), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5862] = 5,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(212), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5879] = 2,
    ACTIONS(741), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(739), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [5890] = 2,
    ACTIONS(743), 1,
      sym__dedent,
    ACTIONS(290), 5,
      sym__newline,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5901] = 5,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(207), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5918] = 2,
    ACTIONS(747), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(745), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [5929] = 5,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(219), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5946] = 5,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(199), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5963] = 5,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(584), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(586), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(274), 1,
      aux_sym_content_repeat1,
    STATE(217), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5980] = 4,
    ACTIONS(749), 1,
      aux_sym_content_token1,
    ACTIONS(754), 1,
      sym__newline,
    STATE(266), 1,
      aux_sym_content_repeat1,
    ACTIONS(752), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [5994] = 2,
    STATE(80), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(27), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [6004] = 3,
    ACTIONS(756), 1,
      anon_sym_LBRACE,
    ACTIONS(752), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(754), 2,
      sym__newline,
      aux_sym_content_token1,
  [6016] = 1,
    ACTIONS(535), 5,
      anon_sym_RPAREN,
      aux_sym__attribute_token1,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [6024] = 2,
    ACTIONS(760), 1,
      anon_sym_,
    ACTIONS(758), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6034] = 4,
    ACTIONS(762), 1,
      anon_sym_when,
    ACTIONS(764), 1,
      anon_sym_default,
    STATE(8), 1,
      sym__when_keyword,
    STATE(13), 2,
      sym_when,
      aux_sym_case_repeat1,
  [6048] = 2,
    ACTIONS(768), 1,
      anon_sym_,
    ACTIONS(766), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6058] = 2,
    STATE(71), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(27), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [6068] = 4,
    ACTIONS(582), 1,
      aux_sym_content_token1,
    ACTIONS(772), 1,
      sym__newline,
    STATE(266), 1,
      aux_sym_content_repeat1,
    ACTIONS(770), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [6082] = 2,
    ACTIONS(752), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(754), 2,
      sym__newline,
      aux_sym_content_token1,
  [6091] = 2,
    ACTIONS(774), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(776), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [6100] = 2,
    ACTIONS(607), 2,
      sym__dedent,
      aux_sym_content_token1,
    ACTIONS(778), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [6109] = 4,
    ACTIONS(780), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(782), 1,
      sym__newline,
    STATE(107), 1,
      sym__single_line_buf_code,
    STATE(348), 1,
      sym__un_delimited_javascript,
  [6122] = 2,
    STATE(49), 1,
      sym_tag,
    ACTIONS(82), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [6131] = 4,
    ACTIONS(784), 1,
      aux_sym_script_block_token1,
    ACTIONS(787), 1,
      sym__newline,
    ACTIONS(790), 1,
      sym__dedent,
    STATE(280), 1,
      aux_sym_script_block_repeat1,
  [6144] = 2,
    STATE(56), 1,
      sym_tag,
    ACTIONS(82), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [6153] = 2,
    STATE(130), 1,
      sym_tag,
    ACTIONS(27), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [6162] = 2,
    STATE(63), 1,
      sym_tag,
    ACTIONS(82), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [6171] = 2,
    STATE(98), 1,
      sym_tag,
    ACTIONS(166), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [6180] = 4,
    ACTIONS(792), 1,
      aux_sym_script_block_token1,
    ACTIONS(794), 1,
      sym__newline,
    ACTIONS(796), 1,
      sym__dedent,
    STATE(280), 1,
      aux_sym_script_block_repeat1,
  [6193] = 2,
    STATE(243), 1,
      sym_tag,
    ACTIONS(513), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [6202] = 4,
    ACTIONS(780), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(798), 1,
      sym__newline,
    STATE(54), 1,
      sym__single_line_buf_code,
    STATE(356), 1,
      sym__un_delimited_javascript,
  [6215] = 2,
    STATE(235), 1,
      sym_tag,
    ACTIONS(513), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [6224] = 2,
    ACTIONS(800), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(802), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [6233] = 2,
    STATE(120), 1,
      sym_tag,
    ACTIONS(27), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [6242] = 2,
    STATE(84), 1,
      sym_tag,
    ACTIONS(166), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [6251] = 2,
    STATE(225), 1,
      sym_tag,
    ACTIONS(513), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [6260] = 3,
    ACTIONS(804), 1,
      anon_sym_EQ,
    ACTIONS(806), 1,
      anon_sym_,
    ACTIONS(808), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6271] = 2,
    ACTIONS(812), 1,
      anon_sym_,
    ACTIONS(810), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6280] = 2,
    STATE(110), 1,
      sym_tag,
    ACTIONS(27), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [6289] = 2,
    STATE(95), 1,
      sym_tag,
    ACTIONS(166), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [6298] = 3,
    ACTIONS(780), 1,
      sym__un_delimited_javascript_line,
    STATE(57), 1,
      sym__single_line_buf_code,
    STATE(356), 1,
      sym__un_delimited_javascript,
  [6308] = 3,
    ACTIONS(780), 1,
      sym__un_delimited_javascript_line,
    STATE(67), 1,
      sym__single_line_buf_code,
    STATE(356), 1,
      sym__un_delimited_javascript,
  [6318] = 2,
    ACTIONS(814), 1,
      anon_sym_,
    ACTIONS(816), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6326] = 2,
    ACTIONS(818), 1,
      anon_sym_,
    ACTIONS(820), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6334] = 3,
    ACTIONS(792), 1,
      aux_sym_script_block_token1,
    ACTIONS(794), 1,
      sym__newline,
    STATE(285), 1,
      aux_sym_script_block_repeat1,
  [6344] = 3,
    ACTIONS(822), 1,
      sym__un_delimited_javascript_line,
    STATE(14), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(55), 1,
      sym__multi_line_buf_code,
  [6354] = 2,
    ACTIONS(824), 1,
      anon_sym_,
    ACTIONS(826), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6362] = 2,
    ACTIONS(828), 1,
      anon_sym_,
    ACTIONS(830), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6370] = 2,
    ACTIONS(832), 1,
      anon_sym_,
    ACTIONS(834), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6378] = 3,
    ACTIONS(836), 1,
      anon_sym_,
    ACTIONS(838), 1,
      anon_sym_COMMA,
    ACTIONS(840), 1,
      anon_sym_RPAREN,
  [6388] = 2,
    ACTIONS(842), 1,
      anon_sym_,
    ACTIONS(844), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6396] = 3,
    ACTIONS(780), 1,
      sym__un_delimited_javascript_line,
    STATE(250), 1,
      sym__single_line_buf_code,
    STATE(360), 1,
      sym__un_delimited_javascript,
  [6406] = 3,
    ACTIONS(780), 1,
      sym__un_delimited_javascript_line,
    STATE(227), 1,
      sym__single_line_buf_code,
    STATE(360), 1,
      sym__un_delimited_javascript,
  [6416] = 2,
    ACTIONS(846), 1,
      anon_sym_,
    ACTIONS(848), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6424] = 2,
    ACTIONS(850), 1,
      anon_sym_,
    ACTIONS(852), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6432] = 2,
    ACTIONS(854), 1,
      anon_sym_,
    ACTIONS(856), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6440] = 2,
    ACTIONS(858), 1,
      anon_sym_,
    ACTIONS(860), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6448] = 3,
    ACTIONS(780), 1,
      sym__un_delimited_javascript_line,
    STATE(85), 1,
      sym__single_line_buf_code,
    STATE(348), 1,
      sym__un_delimited_javascript,
  [6458] = 2,
    ACTIONS(862), 1,
      anon_sym_,
    ACTIONS(864), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6466] = 2,
    ACTIONS(866), 1,
      anon_sym_,
    ACTIONS(868), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6474] = 1,
    ACTIONS(870), 3,
      sym__newline,
      sym__dedent,
      aux_sym_script_block_token1,
  [6480] = 3,
    ACTIONS(780), 1,
      sym__un_delimited_javascript_line,
    STATE(102), 1,
      sym__single_line_buf_code,
    STATE(348), 1,
      sym__un_delimited_javascript,
  [6490] = 2,
    ACTIONS(872), 1,
      anon_sym_,
    ACTIONS(874), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6498] = 1,
    ACTIONS(876), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [6504] = 1,
    ACTIONS(790), 3,
      sym__newline,
      sym__dedent,
      aux_sym_script_block_token1,
  [6510] = 1,
    ACTIONS(878), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [6516] = 3,
    ACTIONS(880), 1,
      sym__un_delimited_javascript_line,
    STATE(46), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(92), 1,
      sym__multi_line_buf_code,
  [6526] = 3,
    ACTIONS(780), 1,
      sym__un_delimited_javascript_line,
    STATE(119), 1,
      sym__single_line_buf_code,
    STATE(343), 1,
      sym__un_delimited_javascript,
  [6536] = 3,
    ACTIONS(882), 1,
      anon_sym_SQUOTE,
    ACTIONS(884), 1,
      anon_sym_DQUOTE,
    STATE(316), 1,
      sym_quoted_javascript,
  [6546] = 3,
    ACTIONS(780), 1,
      sym__un_delimited_javascript_line,
    STATE(117), 1,
      sym__single_line_buf_code,
    STATE(343), 1,
      sym__un_delimited_javascript,
  [6556] = 2,
    ACTIONS(517), 1,
      anon_sym_,
    ACTIONS(521), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6564] = 3,
    ACTIONS(836), 1,
      anon_sym_,
    ACTIONS(838), 1,
      anon_sym_COMMA,
    ACTIONS(886), 1,
      anon_sym_RPAREN,
  [6574] = 2,
    ACTIONS(888), 1,
      sym__un_delimited_javascript_line,
    STATE(273), 1,
      sym__un_delimited_javascript,
  [6581] = 2,
    ACTIONS(890), 1,
      anon_sym_DQUOTE,
    ACTIONS(892), 1,
      aux_sym_quoted_javascript_token2,
  [6588] = 2,
    ACTIONS(894), 1,
      sym__comment_content,
    STATE(34), 1,
      aux_sym_comment_repeat1,
  [6595] = 2,
    ACTIONS(896), 1,
      anon_sym_SQUOTE,
    ACTIONS(898), 1,
      aux_sym_quoted_javascript_token1,
  [6602] = 2,
    ACTIONS(896), 1,
      anon_sym_DQUOTE,
    ACTIONS(900), 1,
      aux_sym_quoted_javascript_token2,
  [6609] = 2,
    ACTIONS(836), 1,
      anon_sym_,
    ACTIONS(838), 1,
      anon_sym_COMMA,
  [6616] = 2,
    ACTIONS(902), 1,
      sym__comment_content,
    ACTIONS(904), 1,
      sym__newline,
  [6623] = 2,
    ACTIONS(894), 1,
      sym__comment_content,
    STATE(61), 1,
      aux_sym_comment_repeat1,
  [6630] = 2,
    ACTIONS(890), 1,
      anon_sym_SQUOTE,
    ACTIONS(906), 1,
      aux_sym_quoted_javascript_token1,
  [6637] = 1,
    ACTIONS(908), 1,
      sym__newline,
  [6641] = 1,
    ACTIONS(910), 1,
      sym__un_delimited_javascript_line,
  [6645] = 1,
    ACTIONS(912), 1,
      anon_sym_RBRACE_RBRACE,
  [6649] = 1,
    ACTIONS(914), 1,
      sym__newline,
  [6653] = 1,
    ACTIONS(916), 1,
      sym__newline,
  [6657] = 1,
    ACTIONS(918), 1,
      sym__newline,
  [6661] = 1,
    ACTIONS(920), 1,
      aux_sym__attribute_token1,
  [6665] = 1,
    ACTIONS(922), 1,
      sym__indent,
  [6669] = 1,
    ACTIONS(924), 1,
      sym__newline,
  [6673] = 1,
    ACTIONS(926), 1,
      aux_sym_unbuffered_code_token1,
  [6677] = 1,
    ACTIONS(928), 1,
      sym__newline,
  [6681] = 1,
    ACTIONS(912), 1,
      anon_sym_RBRACE,
  [6685] = 1,
    ACTIONS(930), 1,
      sym__indent,
  [6689] = 1,
    ACTIONS(932), 1,
      sym__indent,
  [6693] = 1,
    ACTIONS(876), 1,
      sym__newline,
  [6697] = 1,
    ACTIONS(934), 1,
      sym__newline,
  [6701] = 1,
    ACTIONS(936), 1,
      sym__indent,
  [6705] = 1,
    ACTIONS(938), 1,
      aux_sym_unbuffered_code_token1,
  [6709] = 1,
    ACTIONS(940), 1,
      sym__newline,
  [6713] = 1,
    ACTIONS(942), 1,
      sym__indent,
  [6717] = 1,
    ACTIONS(944), 1,
      ts_builtin_sym_end,
  [6721] = 1,
    ACTIONS(946), 1,
      aux_sym__when_keyword_token1,
  [6725] = 1,
    ACTIONS(948), 1,
      sym__newline,
  [6729] = 1,
    ACTIONS(950), 1,
      sym__delimited_javascript,
  [6733] = 1,
    ACTIONS(952), 1,
      sym__indent,
  [6737] = 1,
    ACTIONS(954), 1,
      sym__newline,
  [6741] = 1,
    ACTIONS(956), 1,
      anon_sym_DQUOTE,
  [6745] = 1,
    ACTIONS(956), 1,
      anon_sym_SQUOTE,
  [6749] = 1,
    ACTIONS(958), 1,
      sym__delimited_javascript,
  [6753] = 1,
    ACTIONS(960), 1,
      anon_sym_DQUOTE,
  [6757] = 1,
    ACTIONS(962), 1,
      sym__indent,
  [6761] = 1,
    ACTIONS(960), 1,
      anon_sym_SQUOTE,
  [6765] = 1,
    ACTIONS(964), 1,
      sym__indent,
  [6769] = 1,
    ACTIONS(966), 1,
      sym__indent,
  [6773] = 1,
    ACTIONS(968), 1,
      sym__indent,
  [6777] = 1,
    ACTIONS(970), 1,
      sym__indent,
  [6781] = 1,
    ACTIONS(972), 1,
      sym__indent,
  [6785] = 1,
    ACTIONS(974), 1,
      sym__newline,
  [6789] = 1,
    ACTIONS(976), 1,
      sym__newline,
  [6793] = 1,
    ACTIONS(978), 1,
      sym__newline,
  [6797] = 1,
    ACTIONS(980), 1,
      sym__newline,
  [6801] = 1,
    ACTIONS(982), 1,
      sym__newline,
  [6805] = 1,
    ACTIONS(984), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 58,
  [SMALL_STATE(4)] = 116,
  [SMALL_STATE(5)] = 154,
  [SMALL_STATE(6)] = 190,
  [SMALL_STATE(7)] = 227,
  [SMALL_STATE(8)] = 264,
  [SMALL_STATE(9)] = 299,
  [SMALL_STATE(10)] = 329,
  [SMALL_STATE(11)] = 355,
  [SMALL_STATE(12)] = 387,
  [SMALL_STATE(13)] = 421,
  [SMALL_STATE(14)] = 455,
  [SMALL_STATE(15)] = 485,
  [SMALL_STATE(16)] = 521,
  [SMALL_STATE(17)] = 551,
  [SMALL_STATE(18)] = 581,
  [SMALL_STATE(19)] = 617,
  [SMALL_STATE(20)] = 649,
  [SMALL_STATE(21)] = 679,
  [SMALL_STATE(22)] = 709,
  [SMALL_STATE(23)] = 739,
  [SMALL_STATE(24)] = 769,
  [SMALL_STATE(25)] = 803,
  [SMALL_STATE(26)] = 835,
  [SMALL_STATE(27)] = 860,
  [SMALL_STATE(28)] = 889,
  [SMALL_STATE(29)] = 918,
  [SMALL_STATE(30)] = 942,
  [SMALL_STATE(31)] = 966,
  [SMALL_STATE(32)] = 990,
  [SMALL_STATE(33)] = 1018,
  [SMALL_STATE(34)] = 1042,
  [SMALL_STATE(35)] = 1072,
  [SMALL_STATE(36)] = 1098,
  [SMALL_STATE(37)] = 1122,
  [SMALL_STATE(38)] = 1150,
  [SMALL_STATE(39)] = 1178,
  [SMALL_STATE(40)] = 1202,
  [SMALL_STATE(41)] = 1228,
  [SMALL_STATE(42)] = 1252,
  [SMALL_STATE(43)] = 1276,
  [SMALL_STATE(44)] = 1300,
  [SMALL_STATE(45)] = 1324,
  [SMALL_STATE(46)] = 1352,
  [SMALL_STATE(47)] = 1380,
  [SMALL_STATE(48)] = 1404,
  [SMALL_STATE(49)] = 1432,
  [SMALL_STATE(50)] = 1456,
  [SMALL_STATE(51)] = 1480,
  [SMALL_STATE(52)] = 1504,
  [SMALL_STATE(53)] = 1530,
  [SMALL_STATE(54)] = 1554,
  [SMALL_STATE(55)] = 1580,
  [SMALL_STATE(56)] = 1606,
  [SMALL_STATE(57)] = 1630,
  [SMALL_STATE(58)] = 1654,
  [SMALL_STATE(59)] = 1678,
  [SMALL_STATE(60)] = 1706,
  [SMALL_STATE(61)] = 1734,
  [SMALL_STATE(62)] = 1764,
  [SMALL_STATE(63)] = 1792,
  [SMALL_STATE(64)] = 1816,
  [SMALL_STATE(65)] = 1840,
  [SMALL_STATE(66)] = 1864,
  [SMALL_STATE(67)] = 1888,
  [SMALL_STATE(68)] = 1912,
  [SMALL_STATE(69)] = 1939,
  [SMALL_STATE(70)] = 1968,
  [SMALL_STATE(71)] = 1991,
  [SMALL_STATE(72)] = 2016,
  [SMALL_STATE(73)] = 2043,
  [SMALL_STATE(74)] = 2070,
  [SMALL_STATE(75)] = 2093,
  [SMALL_STATE(76)] = 2116,
  [SMALL_STATE(77)] = 2143,
  [SMALL_STATE(78)] = 2170,
  [SMALL_STATE(79)] = 2197,
  [SMALL_STATE(80)] = 2220,
  [SMALL_STATE(81)] = 2245,
  [SMALL_STATE(82)] = 2272,
  [SMALL_STATE(83)] = 2299,
  [SMALL_STATE(84)] = 2321,
  [SMALL_STATE(85)] = 2343,
  [SMALL_STATE(86)] = 2365,
  [SMALL_STATE(87)] = 2387,
  [SMALL_STATE(88)] = 2409,
  [SMALL_STATE(89)] = 2431,
  [SMALL_STATE(90)] = 2453,
  [SMALL_STATE(91)] = 2477,
  [SMALL_STATE(92)] = 2501,
  [SMALL_STATE(93)] = 2525,
  [SMALL_STATE(94)] = 2549,
  [SMALL_STATE(95)] = 2571,
  [SMALL_STATE(96)] = 2593,
  [SMALL_STATE(97)] = 2615,
  [SMALL_STATE(98)] = 2637,
  [SMALL_STATE(99)] = 2659,
  [SMALL_STATE(100)] = 2681,
  [SMALL_STATE(101)] = 2703,
  [SMALL_STATE(102)] = 2727,
  [SMALL_STATE(103)] = 2749,
  [SMALL_STATE(104)] = 2771,
  [SMALL_STATE(105)] = 2793,
  [SMALL_STATE(106)] = 2815,
  [SMALL_STATE(107)] = 2837,
  [SMALL_STATE(108)] = 2861,
  [SMALL_STATE(109)] = 2882,
  [SMALL_STATE(110)] = 2903,
  [SMALL_STATE(111)] = 2924,
  [SMALL_STATE(112)] = 2945,
  [SMALL_STATE(113)] = 2966,
  [SMALL_STATE(114)] = 2987,
  [SMALL_STATE(115)] = 3008,
  [SMALL_STATE(116)] = 3029,
  [SMALL_STATE(117)] = 3050,
  [SMALL_STATE(118)] = 3071,
  [SMALL_STATE(119)] = 3092,
  [SMALL_STATE(120)] = 3113,
  [SMALL_STATE(121)] = 3134,
  [SMALL_STATE(122)] = 3155,
  [SMALL_STATE(123)] = 3176,
  [SMALL_STATE(124)] = 3197,
  [SMALL_STATE(125)] = 3218,
  [SMALL_STATE(126)] = 3239,
  [SMALL_STATE(127)] = 3260,
  [SMALL_STATE(128)] = 3281,
  [SMALL_STATE(129)] = 3302,
  [SMALL_STATE(130)] = 3323,
  [SMALL_STATE(131)] = 3344,
  [SMALL_STATE(132)] = 3365,
  [SMALL_STATE(133)] = 3386,
  [SMALL_STATE(134)] = 3423,
  [SMALL_STATE(135)] = 3460,
  [SMALL_STATE(136)] = 3497,
  [SMALL_STATE(137)] = 3534,
  [SMALL_STATE(138)] = 3571,
  [SMALL_STATE(139)] = 3608,
  [SMALL_STATE(140)] = 3645,
  [SMALL_STATE(141)] = 3682,
  [SMALL_STATE(142)] = 3710,
  [SMALL_STATE(143)] = 3738,
  [SMALL_STATE(144)] = 3766,
  [SMALL_STATE(145)] = 3794,
  [SMALL_STATE(146)] = 3822,
  [SMALL_STATE(147)] = 3850,
  [SMALL_STATE(148)] = 3878,
  [SMALL_STATE(149)] = 3906,
  [SMALL_STATE(150)] = 3934,
  [SMALL_STATE(151)] = 3962,
  [SMALL_STATE(152)] = 3990,
  [SMALL_STATE(153)] = 4018,
  [SMALL_STATE(154)] = 4043,
  [SMALL_STATE(155)] = 4068,
  [SMALL_STATE(156)] = 4096,
  [SMALL_STATE(157)] = 4124,
  [SMALL_STATE(158)] = 4152,
  [SMALL_STATE(159)] = 4171,
  [SMALL_STATE(160)] = 4192,
  [SMALL_STATE(161)] = 4211,
  [SMALL_STATE(162)] = 4235,
  [SMALL_STATE(163)] = 4259,
  [SMALL_STATE(164)] = 4283,
  [SMALL_STATE(165)] = 4307,
  [SMALL_STATE(166)] = 4331,
  [SMALL_STATE(167)] = 4355,
  [SMALL_STATE(168)] = 4379,
  [SMALL_STATE(169)] = 4403,
  [SMALL_STATE(170)] = 4426,
  [SMALL_STATE(171)] = 4441,
  [SMALL_STATE(172)] = 4456,
  [SMALL_STATE(173)] = 4471,
  [SMALL_STATE(174)] = 4486,
  [SMALL_STATE(175)] = 4501,
  [SMALL_STATE(176)] = 4516,
  [SMALL_STATE(177)] = 4539,
  [SMALL_STATE(178)] = 4562,
  [SMALL_STATE(179)] = 4577,
  [SMALL_STATE(180)] = 4600,
  [SMALL_STATE(181)] = 4623,
  [SMALL_STATE(182)] = 4648,
  [SMALL_STATE(183)] = 4671,
  [SMALL_STATE(184)] = 4686,
  [SMALL_STATE(185)] = 4709,
  [SMALL_STATE(186)] = 4732,
  [SMALL_STATE(187)] = 4755,
  [SMALL_STATE(188)] = 4770,
  [SMALL_STATE(189)] = 4785,
  [SMALL_STATE(190)] = 4801,
  [SMALL_STATE(191)] = 4821,
  [SMALL_STATE(192)] = 4841,
  [SMALL_STATE(193)] = 4861,
  [SMALL_STATE(194)] = 4881,
  [SMALL_STATE(195)] = 4897,
  [SMALL_STATE(196)] = 4917,
  [SMALL_STATE(197)] = 4937,
  [SMALL_STATE(198)] = 4957,
  [SMALL_STATE(199)] = 4977,
  [SMALL_STATE(200)] = 4997,
  [SMALL_STATE(201)] = 5017,
  [SMALL_STATE(202)] = 5031,
  [SMALL_STATE(203)] = 5051,
  [SMALL_STATE(204)] = 5071,
  [SMALL_STATE(205)] = 5091,
  [SMALL_STATE(206)] = 5107,
  [SMALL_STATE(207)] = 5127,
  [SMALL_STATE(208)] = 5147,
  [SMALL_STATE(209)] = 5167,
  [SMALL_STATE(210)] = 5187,
  [SMALL_STATE(211)] = 5207,
  [SMALL_STATE(212)] = 5227,
  [SMALL_STATE(213)] = 5247,
  [SMALL_STATE(214)] = 5263,
  [SMALL_STATE(215)] = 5283,
  [SMALL_STATE(216)] = 5303,
  [SMALL_STATE(217)] = 5323,
  [SMALL_STATE(218)] = 5343,
  [SMALL_STATE(219)] = 5363,
  [SMALL_STATE(220)] = 5383,
  [SMALL_STATE(221)] = 5403,
  [SMALL_STATE(222)] = 5423,
  [SMALL_STATE(223)] = 5443,
  [SMALL_STATE(224)] = 5463,
  [SMALL_STATE(225)] = 5479,
  [SMALL_STATE(226)] = 5488,
  [SMALL_STATE(227)] = 5497,
  [SMALL_STATE(228)] = 5506,
  [SMALL_STATE(229)] = 5517,
  [SMALL_STATE(230)] = 5526,
  [SMALL_STATE(231)] = 5535,
  [SMALL_STATE(232)] = 5544,
  [SMALL_STATE(233)] = 5561,
  [SMALL_STATE(234)] = 5578,
  [SMALL_STATE(235)] = 5587,
  [SMALL_STATE(236)] = 5596,
  [SMALL_STATE(237)] = 5605,
  [SMALL_STATE(238)] = 5622,
  [SMALL_STATE(239)] = 5631,
  [SMALL_STATE(240)] = 5644,
  [SMALL_STATE(241)] = 5653,
  [SMALL_STATE(242)] = 5666,
  [SMALL_STATE(243)] = 5675,
  [SMALL_STATE(244)] = 5684,
  [SMALL_STATE(245)] = 5701,
  [SMALL_STATE(246)] = 5718,
  [SMALL_STATE(247)] = 5727,
  [SMALL_STATE(248)] = 5736,
  [SMALL_STATE(249)] = 5745,
  [SMALL_STATE(250)] = 5758,
  [SMALL_STATE(251)] = 5767,
  [SMALL_STATE(252)] = 5776,
  [SMALL_STATE(253)] = 5785,
  [SMALL_STATE(254)] = 5800,
  [SMALL_STATE(255)] = 5815,
  [SMALL_STATE(256)] = 5828,
  [SMALL_STATE(257)] = 5845,
  [SMALL_STATE(258)] = 5862,
  [SMALL_STATE(259)] = 5879,
  [SMALL_STATE(260)] = 5890,
  [SMALL_STATE(261)] = 5901,
  [SMALL_STATE(262)] = 5918,
  [SMALL_STATE(263)] = 5929,
  [SMALL_STATE(264)] = 5946,
  [SMALL_STATE(265)] = 5963,
  [SMALL_STATE(266)] = 5980,
  [SMALL_STATE(267)] = 5994,
  [SMALL_STATE(268)] = 6004,
  [SMALL_STATE(269)] = 6016,
  [SMALL_STATE(270)] = 6024,
  [SMALL_STATE(271)] = 6034,
  [SMALL_STATE(272)] = 6048,
  [SMALL_STATE(273)] = 6058,
  [SMALL_STATE(274)] = 6068,
  [SMALL_STATE(275)] = 6082,
  [SMALL_STATE(276)] = 6091,
  [SMALL_STATE(277)] = 6100,
  [SMALL_STATE(278)] = 6109,
  [SMALL_STATE(279)] = 6122,
  [SMALL_STATE(280)] = 6131,
  [SMALL_STATE(281)] = 6144,
  [SMALL_STATE(282)] = 6153,
  [SMALL_STATE(283)] = 6162,
  [SMALL_STATE(284)] = 6171,
  [SMALL_STATE(285)] = 6180,
  [SMALL_STATE(286)] = 6193,
  [SMALL_STATE(287)] = 6202,
  [SMALL_STATE(288)] = 6215,
  [SMALL_STATE(289)] = 6224,
  [SMALL_STATE(290)] = 6233,
  [SMALL_STATE(291)] = 6242,
  [SMALL_STATE(292)] = 6251,
  [SMALL_STATE(293)] = 6260,
  [SMALL_STATE(294)] = 6271,
  [SMALL_STATE(295)] = 6280,
  [SMALL_STATE(296)] = 6289,
  [SMALL_STATE(297)] = 6298,
  [SMALL_STATE(298)] = 6308,
  [SMALL_STATE(299)] = 6318,
  [SMALL_STATE(300)] = 6326,
  [SMALL_STATE(301)] = 6334,
  [SMALL_STATE(302)] = 6344,
  [SMALL_STATE(303)] = 6354,
  [SMALL_STATE(304)] = 6362,
  [SMALL_STATE(305)] = 6370,
  [SMALL_STATE(306)] = 6378,
  [SMALL_STATE(307)] = 6388,
  [SMALL_STATE(308)] = 6396,
  [SMALL_STATE(309)] = 6406,
  [SMALL_STATE(310)] = 6416,
  [SMALL_STATE(311)] = 6424,
  [SMALL_STATE(312)] = 6432,
  [SMALL_STATE(313)] = 6440,
  [SMALL_STATE(314)] = 6448,
  [SMALL_STATE(315)] = 6458,
  [SMALL_STATE(316)] = 6466,
  [SMALL_STATE(317)] = 6474,
  [SMALL_STATE(318)] = 6480,
  [SMALL_STATE(319)] = 6490,
  [SMALL_STATE(320)] = 6498,
  [SMALL_STATE(321)] = 6504,
  [SMALL_STATE(322)] = 6510,
  [SMALL_STATE(323)] = 6516,
  [SMALL_STATE(324)] = 6526,
  [SMALL_STATE(325)] = 6536,
  [SMALL_STATE(326)] = 6546,
  [SMALL_STATE(327)] = 6556,
  [SMALL_STATE(328)] = 6564,
  [SMALL_STATE(329)] = 6574,
  [SMALL_STATE(330)] = 6581,
  [SMALL_STATE(331)] = 6588,
  [SMALL_STATE(332)] = 6595,
  [SMALL_STATE(333)] = 6602,
  [SMALL_STATE(334)] = 6609,
  [SMALL_STATE(335)] = 6616,
  [SMALL_STATE(336)] = 6623,
  [SMALL_STATE(337)] = 6630,
  [SMALL_STATE(338)] = 6637,
  [SMALL_STATE(339)] = 6641,
  [SMALL_STATE(340)] = 6645,
  [SMALL_STATE(341)] = 6649,
  [SMALL_STATE(342)] = 6653,
  [SMALL_STATE(343)] = 6657,
  [SMALL_STATE(344)] = 6661,
  [SMALL_STATE(345)] = 6665,
  [SMALL_STATE(346)] = 6669,
  [SMALL_STATE(347)] = 6673,
  [SMALL_STATE(348)] = 6677,
  [SMALL_STATE(349)] = 6681,
  [SMALL_STATE(350)] = 6685,
  [SMALL_STATE(351)] = 6689,
  [SMALL_STATE(352)] = 6693,
  [SMALL_STATE(353)] = 6697,
  [SMALL_STATE(354)] = 6701,
  [SMALL_STATE(355)] = 6705,
  [SMALL_STATE(356)] = 6709,
  [SMALL_STATE(357)] = 6713,
  [SMALL_STATE(358)] = 6717,
  [SMALL_STATE(359)] = 6721,
  [SMALL_STATE(360)] = 6725,
  [SMALL_STATE(361)] = 6729,
  [SMALL_STATE(362)] = 6733,
  [SMALL_STATE(363)] = 6737,
  [SMALL_STATE(364)] = 6741,
  [SMALL_STATE(365)] = 6745,
  [SMALL_STATE(366)] = 6749,
  [SMALL_STATE(367)] = 6753,
  [SMALL_STATE(368)] = 6757,
  [SMALL_STATE(369)] = 6761,
  [SMALL_STATE(370)] = 6765,
  [SMALL_STATE(371)] = 6769,
  [SMALL_STATE(372)] = 6773,
  [SMALL_STATE(373)] = 6777,
  [SMALL_STATE(374)] = 6781,
  [SMALL_STATE(375)] = 6785,
  [SMALL_STATE(376)] = 6789,
  [SMALL_STATE(377)] = 6793,
  [SMALL_STATE(378)] = 6797,
  [SMALL_STATE(379)] = 6801,
  [SMALL_STATE(380)] = 6805,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(322),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(200),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(329),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(329),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(267),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(339),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(326),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(324),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(346),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(335),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(139),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(139),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(355),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(210),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(133),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(133),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_keyword, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_keyword, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(133),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(133),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(192),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(137),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(137),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 5, .production_id = 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 5, .production_id = 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 4),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 4),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(26),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(359),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(8),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 6),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 6),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 7, .production_id = 7),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 7, .production_id = 7),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(74),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 7),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 6),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 6),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 4),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 4),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 5, .production_id = 5),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 5, .production_id = 5),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 5),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 5),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 3),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 5),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 5),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unescaped_buffered_code, 2),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unescaped_buffered_code, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 3),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 5),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 5),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(35),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 3),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffered_code, 2),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffered_code, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(139),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(139),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 3),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 3),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 2),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_block, 5, .production_id = 2),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_block, 5, .production_id = 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 6),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 6),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 2),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 2),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 2),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 2),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 1),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 1),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(270),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(294),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [547] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(158),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [552] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(222),
  [555] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(136),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(254),
  [601] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(361),
  [604] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(366),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2), SHIFT_REPEAT(136),
  [650] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2), SHIFT_REPEAT(194),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(254),
  [658] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(361),
  [661] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(366),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [726] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2), SHIFT_REPEAT(344),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 1),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 1),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [749] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(254),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_name, 1),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 3),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 3),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 3),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 3),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [784] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(338),
  [787] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(317),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 3),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 3),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 1),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 1),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_angular_attribute_name, 1),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_angular_attribute_name, 1),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_attribute_value, 2),
  [820] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__object_attribute_value, 2),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_attribute_value, 2),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__template_attribute_value, 2),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_attribute_value, 2),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__array_attribute_value, 2),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_attribute_value, 2),
  [834] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_attribute_value, 2),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 3),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 3),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 3),
  [852] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 3),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 6),
  [856] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 6),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ternary_attribute_value, 2),
  [860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ternary_attribute_value, 2),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_attribute_value, 2),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable_attribute_value, 2),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 3),
  [868] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 3),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 1),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 2),
  [874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 2),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__un_delimited_javascript, 1),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [890] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [944] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
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
