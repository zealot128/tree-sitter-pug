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
#define STATE_COUNT 454
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
      if (eof) ADVANCE(153);
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '"') ADVANCE(630);
      if (lookahead == '#') ADVANCE(636);
      if (lookahead == '\'') ADVANCE(626);
      if (lookahead == '(') ADVANCE(206);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead == ',') ADVANCE(207);
      if (lookahead == '-') ADVANCE(666);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == ':') ADVANCE(183);
      if (lookahead == '=') ADVANCE(195);
      if (lookahead == '[') ADVANCE(89);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == 'c') ADVANCE(95);
      if (lookahead == 'd') ADVANCE(103);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == 'h') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == 'u') ADVANCE(121);
      if (lookahead == 'w') ADVANCE(109);
      if (lookahead == 'x') ADVANCE(118);
      if (lookahead == '{') ADVANCE(637);
      if (lookahead == '|') ADVANCE(161);
      if (lookahead == '}') ADVANCE(650);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '"') ADVANCE(209);
      if (lookahead == '`') ADVANCE(502);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '\'') ADVANCE(210);
      if (lookahead == '`') ADVANCE(503);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(211);
      if (lookahead == '`') ADVANCE(507);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == ']') ADVANCE(509);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(63);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\'') ADVANCE(213);
      if (lookahead == ']') ADVANCE(510);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(66);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == ']') ADVANCE(512);
      if (lookahead == '`') ADVANCE(214);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(94);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(215);
      if (lookahead == ']') ADVANCE(513);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(138);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(216);
      if (lookahead == ']') ADVANCE(514);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(139);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(217);
      if (lookahead == ']') ADVANCE(515);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(140);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(218);
      if (lookahead == ']') ADVANCE(516);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(142);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '#') ADVANCE(636);
      if (lookahead == '{') ADVANCE(637);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(634);
      if (lookahead != 0) ADVANCE(635);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '"') ADVANCE(219);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(489);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(63);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(220);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(490);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(66);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '`') ADVANCE(221);
      if (lookahead == '}') ADVANCE(491);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(94);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(222);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(492);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(138);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(223);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(493);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(139);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(224);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(494);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(140);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(225);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(495);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(142);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '"') ADVANCE(219);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(489);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(63);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(220);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(490);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(66);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '`') ADVANCE(221);
      if (lookahead == '}') ADVANCE(491);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(94);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(222);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(492);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(138);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(223);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(493);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(139);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(224);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(494);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(140);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(225);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(495);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(142);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '"') ADVANCE(226);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\'') ADVANCE(227);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(229);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(230);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(231);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(232);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == ')') ADVANCE(451);
      if (lookahead == '`') ADVANCE(499);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(234);
      if (lookahead == ')') ADVANCE(452);
      if (lookahead == '`') ADVANCE(500);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(235);
      if (lookahead == ')') ADVANCE(453);
      if (lookahead == '`') ADVANCE(501);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"') ADVANCE(236);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == ')') ADVANCE(475);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ')') ADVANCE(484);
      if (lookahead == '`') ADVANCE(238);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(239);
      if (lookahead == ')') ADVANCE(485);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(240);
      if (lookahead == ')') ADVANCE(486);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(241);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(242);
      if (lookahead == ')') ADVANCE(488);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(63);
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(66);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == '`') ADVANCE(247);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(94);
      if (lookahead != 0) ADVANCE(247);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(249);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(138);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(251);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(139);
      if (lookahead != 0) ADVANCE(251);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(253);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(140);
      if (lookahead != 0) ADVANCE(253);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(255);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(142);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 50:
      if (lookahead == '\n') SKIP(50)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(662);
      if (lookahead != 0) ADVANCE(665);
      END_STATE();
    case 51:
      if (lookahead == '\n') SKIP(51)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(654);
      END_STATE();
    case 52:
      if (lookahead == '\n') SKIP(52)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(188);
      END_STATE();
    case 53:
      if (lookahead == '\n') SKIP(53)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead != 0) ADVANCE(202);
      END_STATE();
    case 54:
      if (lookahead == ' ') ADVANCE(203);
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '(') ADVANCE(206);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == ',') ADVANCE(207);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == ':') ADVANCE(183);
      if (lookahead == '=') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(54)
      END_STATE();
    case 55:
      if (lookahead == ' ') ADVANCE(203);
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == ',') ADVANCE(207);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == ':') ADVANCE(183);
      if (lookahead == '=') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(55)
      END_STATE();
    case 56:
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '}') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 57:
      if (lookahead == ' ') ADVANCE(77);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '?') ADVANCE(78);
      if (lookahead == '}') ADVANCE(497);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(87);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 58:
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '\'') ADVANCE(627);
      if (lookahead == '?') ADVANCE(473);
      if (lookahead == '[') ADVANCE(464);
      if (lookahead == '`') ADVANCE(479);
      if (lookahead == '{') ADVANCE(465);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(471);
      if (lookahead != 0) ADVANCE(478);
      END_STATE();
    case 59:
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '\'') ADVANCE(627);
      if (lookahead == '?') ADVANCE(477);
      if (lookahead == '[') ADVANCE(464);
      if (lookahead == '`') ADVANCE(479);
      if (lookahead == '{') ADVANCE(465);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(471);
      if (lookahead != 0) ADVANCE(478);
      END_STATE();
    case 60:
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == '=') ADVANCE(195);
      if (lookahead == 'e') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(551);
      if (lookahead == 'u') ADVANCE(571);
      if (lookahead == '|') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(60)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 61:
      if (lookahead == '"') ADVANCE(630);
      if (lookahead == '\'') ADVANCE(626);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == '`') ADVANCE(83);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 62:
      if (lookahead == '"') ADVANCE(630);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(632);
      if (lookahead != 0) ADVANCE(633);
      END_STATE();
    case 63:
      if (lookahead == '"') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 64:
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 65:
      if (lookahead == '\'') ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(628);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 66:
      if (lookahead == '\'') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 67:
      if (lookahead == '(') ADVANCE(146);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead == '[') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(67)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 68:
      if (lookahead == ')') ADVANCE(624);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 69:
      if (lookahead == ')') ADVANCE(483);
      if (lookahead == '?') ADVANCE(70);
      if (lookahead == '`') ADVANCE(426);
      if (lookahead != 0) ADVANCE(435);
      END_STATE();
    case 70:
      if (lookahead == ')') ADVANCE(483);
      if (lookahead == '`') ADVANCE(505);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 71:
      if (lookahead == ')') ADVANCE(482);
      if (lookahead == '?') ADVANCE(74);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 72:
      if (lookahead == ')') ADVANCE(482);
      if (lookahead == '?') ADVANCE(468);
      if (lookahead == ' ' ||
          lookahead == '(') ADVANCE(71);
      if (lookahead != 0) ADVANCE(463);
      END_STATE();
    case 73:
      if (lookahead == ')') ADVANCE(481);
      if (lookahead == '?') ADVANCE(69);
      if (lookahead == '`') ADVANCE(504);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 74:
      if (lookahead == ')') ADVANCE(450);
      if (lookahead == '?') ADVANCE(75);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 75:
      if (lookahead == ')') ADVANCE(450);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 76:
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '}') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 77:
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '?') ADVANCE(78);
      if (lookahead == '}') ADVANCE(497);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(87);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 78:
      if (lookahead == ',') ADVANCE(431);
      if (lookahead == '?') ADVANCE(76);
      if (lookahead == '}') ADVANCE(431);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(431);
      END_STATE();
    case 79:
      if (lookahead == '.') ADVANCE(198);
      END_STATE();
    case 80:
      if (lookahead == '/') ADVANCE(518);
      END_STATE();
    case 81:
      if (lookahead == '=') ADVANCE(192);
      END_STATE();
    case 82:
      if (lookahead == '?') ADVANCE(90);
      if (lookahead == ']') ADVANCE(422);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(429);
      END_STATE();
    case 83:
      if (lookahead == '?') ADVANCE(476);
      if (lookahead == '`') ADVANCE(478);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(86);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 84:
      if (lookahead == '?') ADVANCE(480);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(87);
      if (lookahead != 0) ADVANCE(478);
      END_STATE();
    case 85:
      if (lookahead == '?') ADVANCE(467);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(87);
      if (lookahead != 0) ADVANCE(478);
      END_STATE();
    case 86:
      if (lookahead == '?') ADVANCE(93);
      if (lookahead == '`') ADVANCE(506);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 87:
      if (lookahead == '?') ADVANCE(148);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 88:
      if (lookahead == '?') ADVANCE(82);
      if (lookahead == ']') ADVANCE(511);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(87);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 89:
      if (lookahead == ']') ADVANCE(508);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[') ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == ']') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[') ADVANCE(90);
      END_STATE();
    case 91:
      if (lookahead == ']') ADVANCE(623);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 92:
      if (lookahead == '`') ADVANCE(498);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 93:
      if (lookahead == '`') ADVANCE(422);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(92);
      if (lookahead != 0) ADVANCE(434);
      END_STATE();
    case 94:
      if (lookahead == '`') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 98:
      if (lookahead == 'c') ADVANCE(130);
      END_STATE();
    case 99:
      if (lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 106:
      if (lookahead == 'f') ADVANCE(164);
      END_STATE();
    case 107:
      if (lookahead == 'f') ADVANCE(168);
      END_STATE();
    case 108:
      if (lookahead == 'f') ADVANCE(96);
      END_STATE();
    case 109:
      if (lookahead == 'h') ADVANCE(104);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(160);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 118:
      if (lookahead == 'm') ADVANCE(113);
      END_STATE();
    case 119:
      if (lookahead == 'm') ADVANCE(114);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 122:
      if (lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 123:
      if (lookahead == 'p') ADVANCE(102);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 126:
      if (lookahead == 's') ADVANCE(171);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 128:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 135:
      if (lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 136:
      if (lookahead == 'y') ADVANCE(123);
      END_STATE();
    case 137:
      if (lookahead == '}') ADVANCE(652);
      END_STATE();
    case 138:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 139:
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 140:
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 141:
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 142:
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 143:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(617);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 144:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 145:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 146:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 147:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 148:
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '?') ADVANCE(422);
      END_STATE();
    case 149:
      if (eof) ADVANCE(153);
      if (lookahead == '\n') SKIP(149)
      if (lookahead == '!') ADVANCE(658);
      if (lookahead == '#') ADVANCE(664);
      if (lookahead == '-') ADVANCE(667);
      if (lookahead == '.') ADVANCE(663);
      if (lookahead == '/') ADVANCE(657);
      if (lookahead == '=') ADVANCE(196);
      if (lookahead == 'c') ADVANCE(526);
      if (lookahead == 'd') ADVANCE(544);
      if (lookahead == 'e') ADVANCE(567);
      if (lookahead == 'i') ADVANCE(552);
      if (lookahead == 's') ADVANCE(531);
      if (lookahead == 'u') ADVANCE(572);
      if (lookahead == 'w') ADVANCE(556);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0) ADVANCE(665);
      END_STATE();
    case 150:
      if (eof) ADVANCE(153);
      if (lookahead == '\n') SKIP(150)
      if (lookahead == '!') ADVANCE(658);
      if (lookahead == '#') ADVANCE(664);
      if (lookahead == '-') ADVANCE(667);
      if (lookahead == '.') ADVANCE(663);
      if (lookahead == '/') ADVANCE(657);
      if (lookahead == '=') ADVANCE(196);
      if (lookahead == 'c') ADVANCE(526);
      if (lookahead == 'd') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(567);
      if (lookahead == 'i') ADVANCE(552);
      if (lookahead == 's') ADVANCE(531);
      if (lookahead == 'u') ADVANCE(572);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0) ADVANCE(665);
      END_STATE();
    case 151:
      if (eof) ADVANCE(153);
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '-') ADVANCE(666);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == ':') ADVANCE(183);
      if (lookahead == '=') ADVANCE(195);
      if (lookahead == 'c') ADVANCE(524);
      if (lookahead == 'd') ADVANCE(541);
      if (lookahead == 'e') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(551);
      if (lookahead == 's') ADVANCE(529);
      if (lookahead == 'u') ADVANCE(571);
      if (lookahead == 'w') ADVANCE(557);
      if (lookahead == '|') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(151)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 152:
      if (eof) ADVANCE(153);
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '-') ADVANCE(666);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == '=') ADVANCE(195);
      if (lookahead == 'c') ADVANCE(524);
      if (lookahead == 'd') ADVANCE(574);
      if (lookahead == 'e') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(551);
      if (lookahead == 's') ADVANCE(529);
      if (lookahead == 'u') ADVANCE(571);
      if (lookahead == '|') ADVANCE(161);
      if (lookahead == '}') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(152)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_doctype);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_strict);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(660);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(642);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(111);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(111);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__when_keyword_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__when_keyword_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_script_DOT);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_script_DOT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_script_DOT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_script_block_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(202);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_script_block_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(617);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '"') ADVANCE(209);
      if (lookahead == '`') ADVANCE(502);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '\'') ADVANCE(210);
      if (lookahead == '`') ADVANCE(503);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(211);
      if (lookahead == '`') ADVANCE(507);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == ']') ADVANCE(509);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(63);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\'') ADVANCE(213);
      if (lookahead == ']') ADVANCE(510);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(66);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == ']') ADVANCE(512);
      if (lookahead == '`') ADVANCE(214);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(94);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(215);
      if (lookahead == ']') ADVANCE(513);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(138);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(216);
      if (lookahead == ']') ADVANCE(514);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(139);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(217);
      if (lookahead == ']') ADVANCE(515);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(140);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(218);
      if (lookahead == ']') ADVANCE(516);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(142);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '"') ADVANCE(219);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(489);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(63);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(220);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(490);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(66);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '`') ADVANCE(221);
      if (lookahead == '}') ADVANCE(491);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(94);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(222);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(492);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(138);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(223);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(493);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(139);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(224);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(494);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(140);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(225);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(495);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(142);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '"') ADVANCE(226);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\'') ADVANCE(227);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(229);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(230);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(231);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(232);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '"') ADVANCE(233);
      if (lookahead == ')') ADVANCE(451);
      if (lookahead == '`') ADVANCE(499);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(234);
      if (lookahead == ')') ADVANCE(452);
      if (lookahead == '`') ADVANCE(500);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(235);
      if (lookahead == ')') ADVANCE(453);
      if (lookahead == '`') ADVANCE(501);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"') ADVANCE(236);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == ')') ADVANCE(475);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ')') ADVANCE(484);
      if (lookahead == '`') ADVANCE(238);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(239);
      if (lookahead == ')') ADVANCE(485);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(240);
      if (lookahead == ')') ADVANCE(486);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(241);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(242);
      if (lookahead == ')') ADVANCE(488);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(243);
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '\'') ADVANCE(249);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '?') ADVANCE(316);
      if (lookahead == '`') ADVANCE(251);
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(243);
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '?') ADVANCE(316);
      if (lookahead != 0) ADVANCE(243);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(245);
      if (lookahead == '"') ADVANCE(249);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(317);
      if (lookahead == '`') ADVANCE(253);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(245);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(317);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead == '"') ADVANCE(251);
      if (lookahead == '\'') ADVANCE(253);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == '?') ADVANCE(318);
      if (lookahead == '`') ADVANCE(247);
      if (lookahead != 0) ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == '?') ADVANCE(318);
      if (lookahead == '`') ADVANCE(247);
      if (lookahead != 0) ADVANCE(247);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(249);
      if (lookahead == '"') ADVANCE(249);
      if (lookahead == '\'') ADVANCE(249);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(319);
      if (lookahead == '`') ADVANCE(255);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(249);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(249);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(319);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(251);
      if (lookahead == '"') ADVANCE(251);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(320);
      if (lookahead == '`') ADVANCE(251);
      if (lookahead != 0) ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(251);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(251);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(320);
      if (lookahead != 0) ADVANCE(251);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(253);
      if (lookahead == '"') ADVANCE(255);
      if (lookahead == '\'') ADVANCE(253);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '?') ADVANCE(321);
      if (lookahead == '`') ADVANCE(253);
      if (lookahead != 0) ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(253);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(253);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '?') ADVANCE(321);
      if (lookahead != 0) ADVANCE(253);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(255);
      if (lookahead == '"') ADVANCE(255);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == '?') ADVANCE(322);
      if (lookahead == '`') ADVANCE(255);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(255);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(255);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == '?') ADVANCE(322);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(257);
      if (lookahead == '"') ADVANCE(257);
      if (lookahead == '\'') ADVANCE(263);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead == '?') ADVANCE(323);
      if (lookahead == '`') ADVANCE(265);
      if (lookahead != 0) ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(257);
      if (lookahead == '"') ADVANCE(257);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead == '?') ADVANCE(323);
      if (lookahead != 0) ADVANCE(257);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(259);
      if (lookahead == '"') ADVANCE(263);
      if (lookahead == '\'') ADVANCE(259);
      if (lookahead == ')') ADVANCE(475);
      if (lookahead == '?') ADVANCE(324);
      if (lookahead == '`') ADVANCE(267);
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(259);
      if (lookahead == '\'') ADVANCE(259);
      if (lookahead == ')') ADVANCE(475);
      if (lookahead == '?') ADVANCE(324);
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(261);
      if (lookahead == '"') ADVANCE(265);
      if (lookahead == '\'') ADVANCE(267);
      if (lookahead == ')') ADVANCE(484);
      if (lookahead == '?') ADVANCE(325);
      if (lookahead == '`') ADVANCE(261);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(261);
      if (lookahead == ')') ADVANCE(484);
      if (lookahead == '?') ADVANCE(325);
      if (lookahead == '`') ADVANCE(261);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(263);
      if (lookahead == '"') ADVANCE(263);
      if (lookahead == '\'') ADVANCE(263);
      if (lookahead == ')') ADVANCE(485);
      if (lookahead == '?') ADVANCE(326);
      if (lookahead == '`') ADVANCE(269);
      if (lookahead != 0) ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(263);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(263);
      if (lookahead == ')') ADVANCE(485);
      if (lookahead == '?') ADVANCE(326);
      if (lookahead != 0) ADVANCE(263);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == '"') ADVANCE(265);
      if (lookahead == '\'') ADVANCE(269);
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == '?') ADVANCE(327);
      if (lookahead == '`') ADVANCE(265);
      if (lookahead != 0) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(265);
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == '?') ADVANCE(327);
      if (lookahead != 0) ADVANCE(265);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(267);
      if (lookahead == '"') ADVANCE(269);
      if (lookahead == '\'') ADVANCE(267);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == '?') ADVANCE(328);
      if (lookahead == '`') ADVANCE(267);
      if (lookahead != 0) ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(267);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(267);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == '?') ADVANCE(328);
      if (lookahead != 0) ADVANCE(267);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(269);
      if (lookahead == '"') ADVANCE(269);
      if (lookahead == '\'') ADVANCE(269);
      if (lookahead == ')') ADVANCE(488);
      if (lookahead == '?') ADVANCE(329);
      if (lookahead == '`') ADVANCE(269);
      if (lookahead != 0) ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(269);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(269);
      if (lookahead == ')') ADVANCE(488);
      if (lookahead == '?') ADVANCE(329);
      if (lookahead != 0) ADVANCE(269);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(243);
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '\'') ADVANCE(277);
      if (lookahead == '(') ADVANCE(257);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '?') ADVANCE(330);
      if (lookahead == '`') ADVANCE(279);
      if (lookahead != 0) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(243);
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '(') ADVANCE(257);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '?') ADVANCE(330);
      if (lookahead != 0) ADVANCE(271);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(245);
      if (lookahead == '"') ADVANCE(277);
      if (lookahead == '\'') ADVANCE(273);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(331);
      if (lookahead == '`') ADVANCE(281);
      if (lookahead != 0) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(245);
      if (lookahead == '\'') ADVANCE(273);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(331);
      if (lookahead != 0) ADVANCE(273);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '\'') ADVANCE(281);
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == '?') ADVANCE(332);
      if (lookahead == '`') ADVANCE(275);
      if (lookahead != 0) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(247);
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == '?') ADVANCE(332);
      if (lookahead == '`') ADVANCE(275);
      if (lookahead != 0) ADVANCE(275);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(249);
      if (lookahead == '"') ADVANCE(277);
      if (lookahead == '\'') ADVANCE(277);
      if (lookahead == '(') ADVANCE(263);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(333);
      if (lookahead == '`') ADVANCE(283);
      if (lookahead != 0) ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(249);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(277);
      if (lookahead == '(') ADVANCE(263);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(333);
      if (lookahead != 0) ADVANCE(277);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(251);
      if (lookahead == '"') ADVANCE(279);
      if (lookahead == '\'') ADVANCE(283);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(334);
      if (lookahead == '`') ADVANCE(279);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(251);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(279);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(334);
      if (lookahead != 0) ADVANCE(279);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(253);
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '\'') ADVANCE(281);
      if (lookahead == '(') ADVANCE(267);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '?') ADVANCE(335);
      if (lookahead == '`') ADVANCE(281);
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(253);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(281);
      if (lookahead == '(') ADVANCE(267);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '?') ADVANCE(335);
      if (lookahead != 0) ADVANCE(281);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(255);
      if (lookahead == '"') ADVANCE(283);
      if (lookahead == '\'') ADVANCE(283);
      if (lookahead == '(') ADVANCE(269);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == '?') ADVANCE(336);
      if (lookahead == '`') ADVANCE(283);
      if (lookahead != 0) ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(255);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(283);
      if (lookahead == '(') ADVANCE(269);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == '?') ADVANCE(336);
      if (lookahead != 0) ADVANCE(283);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(433);
      if (lookahead == ' ') ADVANCE(381);
      if (lookahead == '"') ADVANCE(285);
      if (lookahead == '\'') ADVANCE(287);
      if (lookahead == '(') ADVANCE(391);
      if (lookahead == ')') ADVANCE(1);
      if (lookahead == '?') ADVANCE(343);
      if (lookahead == '`') ADVANCE(279);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(433);
      if (lookahead == ' ') ADVANCE(382);
      if (lookahead == '"') ADVANCE(287);
      if (lookahead == '\'') ADVANCE(286);
      if (lookahead == '(') ADVANCE(392);
      if (lookahead == ')') ADVANCE(2);
      if (lookahead == '?') ADVANCE(344);
      if (lookahead == '`') ADVANCE(281);
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(433);
      if (lookahead == ' ') ADVANCE(383);
      if (lookahead == '"') ADVANCE(287);
      if (lookahead == '\'') ADVANCE(287);
      if (lookahead == '(') ADVANCE(393);
      if (lookahead == ')') ADVANCE(3);
      if (lookahead == '?') ADVANCE(345);
      if (lookahead == '`') ADVANCE(283);
      if (lookahead != 0) ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(288);
      if (lookahead == '"') ADVANCE(288);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '?') ADVANCE(346);
      if (lookahead == ']') ADVANCE(243);
      if (lookahead == '`') ADVANCE(292);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(243);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(289);
      if (lookahead == '"') ADVANCE(291);
      if (lookahead == '\'') ADVANCE(289);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(347);
      if (lookahead == ']') ADVANCE(245);
      if (lookahead == '`') ADVANCE(293);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(245);
      if (lookahead != 0) ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(290);
      if (lookahead == '"') ADVANCE(292);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == '?') ADVANCE(348);
      if (lookahead == ']') ADVANCE(247);
      if (lookahead == '`') ADVANCE(290);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(247);
      if (lookahead != 0) ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead == '"') ADVANCE(291);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(349);
      if (lookahead == ']') ADVANCE(249);
      if (lookahead == '`') ADVANCE(294);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(249);
      if (lookahead != 0) ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == '"') ADVANCE(292);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(350);
      if (lookahead == ']') ADVANCE(251);
      if (lookahead == '`') ADVANCE(292);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(251);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '"') ADVANCE(294);
      if (lookahead == '\'') ADVANCE(293);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '?') ADVANCE(351);
      if (lookahead == ']') ADVANCE(253);
      if (lookahead == '`') ADVANCE(293);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(253);
      if (lookahead != 0) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(294);
      if (lookahead == '"') ADVANCE(294);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == '?') ADVANCE(352);
      if (lookahead == ']') ADVANCE(255);
      if (lookahead == '`') ADVANCE(294);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(255);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(430);
      if (lookahead == ' ') ADVANCE(288);
      if (lookahead == '"') ADVANCE(295);
      if (lookahead == '\'') ADVANCE(298);
      if (lookahead == '(') ADVANCE(257);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '?') ADVANCE(353);
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == ']') ADVANCE(271);
      if (lookahead == '`') ADVANCE(299);
      if (lookahead != 0) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(430);
      if (lookahead == ' ') ADVANCE(289);
      if (lookahead == '"') ADVANCE(298);
      if (lookahead == '\'') ADVANCE(296);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(354);
      if (lookahead == '[') ADVANCE(273);
      if (lookahead == ']') ADVANCE(273);
      if (lookahead == '`') ADVANCE(300);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(430);
      if (lookahead == ' ') ADVANCE(290);
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '\'') ADVANCE(300);
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == '?') ADVANCE(355);
      if (lookahead == '[') ADVANCE(275);
      if (lookahead == ']') ADVANCE(275);
      if (lookahead == '`') ADVANCE(297);
      if (lookahead != 0) ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(430);
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead == '"') ADVANCE(298);
      if (lookahead == '\'') ADVANCE(298);
      if (lookahead == '(') ADVANCE(263);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(356);
      if (lookahead == '[') ADVANCE(277);
      if (lookahead == ']') ADVANCE(277);
      if (lookahead == '`') ADVANCE(301);
      if (lookahead != 0) ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(430);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '\'') ADVANCE(301);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(357);
      if (lookahead == '[') ADVANCE(279);
      if (lookahead == ']') ADVANCE(279);
      if (lookahead == '`') ADVANCE(299);
      if (lookahead != 0) ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(430);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '\'') ADVANCE(300);
      if (lookahead == '(') ADVANCE(267);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '?') ADVANCE(358);
      if (lookahead == '[') ADVANCE(281);
      if (lookahead == ']') ADVANCE(281);
      if (lookahead == '`') ADVANCE(300);
      if (lookahead != 0) ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(430);
      if (lookahead == ' ') ADVANCE(294);
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '\'') ADVANCE(301);
      if (lookahead == '(') ADVANCE(269);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == '?') ADVANCE(359);
      if (lookahead == '[') ADVANCE(283);
      if (lookahead == ']') ADVANCE(283);
      if (lookahead == '`') ADVANCE(301);
      if (lookahead != 0) ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(302);
      if (lookahead == '"') ADVANCE(302);
      if (lookahead == '\'') ADVANCE(305);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == ',') ADVANCE(302);
      if (lookahead == '?') ADVANCE(360);
      if (lookahead == '`') ADVANCE(306);
      if (lookahead == '}') ADVANCE(302);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(243);
      if (lookahead != 0) ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(303);
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(303);
      if (lookahead == '?') ADVANCE(361);
      if (lookahead == '`') ADVANCE(307);
      if (lookahead == '}') ADVANCE(303);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(245);
      if (lookahead != 0) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(304);
      if (lookahead == '"') ADVANCE(306);
      if (lookahead == '\'') ADVANCE(307);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == ',') ADVANCE(304);
      if (lookahead == '?') ADVANCE(362);
      if (lookahead == '`') ADVANCE(304);
      if (lookahead == '}') ADVANCE(304);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(247);
      if (lookahead != 0) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(305);
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '\'') ADVANCE(305);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == ',') ADVANCE(305);
      if (lookahead == '?') ADVANCE(363);
      if (lookahead == '`') ADVANCE(308);
      if (lookahead == '}') ADVANCE(305);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(249);
      if (lookahead != 0) ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(306);
      if (lookahead == '"') ADVANCE(306);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ',') ADVANCE(306);
      if (lookahead == '?') ADVANCE(364);
      if (lookahead == '`') ADVANCE(306);
      if (lookahead == '}') ADVANCE(306);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(251);
      if (lookahead != 0) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(307);
      if (lookahead == '"') ADVANCE(308);
      if (lookahead == '\'') ADVANCE(307);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == ',') ADVANCE(307);
      if (lookahead == '?') ADVANCE(365);
      if (lookahead == '`') ADVANCE(307);
      if (lookahead == '}') ADVANCE(307);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(253);
      if (lookahead != 0) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == '"') ADVANCE(308);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == ',') ADVANCE(308);
      if (lookahead == '?') ADVANCE(366);
      if (lookahead == '`') ADVANCE(308);
      if (lookahead == '}') ADVANCE(308);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(255);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(302);
      if (lookahead == '"') ADVANCE(309);
      if (lookahead == '\'') ADVANCE(312);
      if (lookahead == '(') ADVANCE(257);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == ',') ADVANCE(309);
      if (lookahead == '?') ADVANCE(367);
      if (lookahead == '`') ADVANCE(313);
      if (lookahead == '}') ADVANCE(309);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(271);
      if (lookahead != 0) ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(303);
      if (lookahead == '"') ADVANCE(312);
      if (lookahead == '\'') ADVANCE(310);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(310);
      if (lookahead == '?') ADVANCE(368);
      if (lookahead == '`') ADVANCE(314);
      if (lookahead == '}') ADVANCE(310);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(273);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(304);
      if (lookahead == '"') ADVANCE(313);
      if (lookahead == '\'') ADVANCE(314);
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == ',') ADVANCE(311);
      if (lookahead == '?') ADVANCE(369);
      if (lookahead == '`') ADVANCE(311);
      if (lookahead == '}') ADVANCE(311);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(275);
      if (lookahead != 0) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(305);
      if (lookahead == '"') ADVANCE(312);
      if (lookahead == '\'') ADVANCE(312);
      if (lookahead == '(') ADVANCE(263);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == ',') ADVANCE(312);
      if (lookahead == '?') ADVANCE(370);
      if (lookahead == '`') ADVANCE(315);
      if (lookahead == '}') ADVANCE(312);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(277);
      if (lookahead != 0) ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(306);
      if (lookahead == '"') ADVANCE(313);
      if (lookahead == '\'') ADVANCE(315);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ',') ADVANCE(313);
      if (lookahead == '?') ADVANCE(371);
      if (lookahead == '`') ADVANCE(313);
      if (lookahead == '}') ADVANCE(313);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(279);
      if (lookahead != 0) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(307);
      if (lookahead == '"') ADVANCE(315);
      if (lookahead == '\'') ADVANCE(314);
      if (lookahead == '(') ADVANCE(267);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == ',') ADVANCE(314);
      if (lookahead == '?') ADVANCE(372);
      if (lookahead == '`') ADVANCE(314);
      if (lookahead == '}') ADVANCE(314);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(281);
      if (lookahead != 0) ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == '"') ADVANCE(315);
      if (lookahead == '\'') ADVANCE(315);
      if (lookahead == '(') ADVANCE(269);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == ',') ADVANCE(315);
      if (lookahead == '?') ADVANCE(373);
      if (lookahead == '`') ADVANCE(315);
      if (lookahead == '}') ADVANCE(315);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(283);
      if (lookahead != 0) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(449);
      if (lookahead == '"') ADVANCE(316);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(63);
      if (lookahead != 0) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(449);
      if (lookahead == '\'') ADVANCE(317);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(66);
      if (lookahead != 0) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(449);
      if (lookahead == '`') ADVANCE(318);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(94);
      if (lookahead != 0) ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(449);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(319);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(138);
      if (lookahead != 0) ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(449);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(320);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(139);
      if (lookahead != 0) ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(449);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(321);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(140);
      if (lookahead != 0) ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(449);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(322);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(142);
      if (lookahead != 0) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '"') ADVANCE(323);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(324);
      if (lookahead == ')') ADVANCE(475);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == ')') ADVANCE(484);
      if (lookahead == '`') ADVANCE(325);
      if (lookahead != 0) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(326);
      if (lookahead == ')') ADVANCE(485);
      if (lookahead != 0) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(327);
      if (lookahead == ')') ADVANCE(486);
      if (lookahead != 0) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(328);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead != 0) ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(329);
      if (lookahead == ')') ADVANCE(488);
      if (lookahead != 0) ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(441);
      if (lookahead == '"') ADVANCE(330);
      if (lookahead == '(') ADVANCE(323);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(63);
      if (lookahead != 0) ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(441);
      if (lookahead == '\'') ADVANCE(331);
      if (lookahead == '(') ADVANCE(324);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(66);
      if (lookahead != 0) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(441);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == '`') ADVANCE(332);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(94);
      if (lookahead != 0) ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(441);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(333);
      if (lookahead == '(') ADVANCE(326);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(138);
      if (lookahead != 0) ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(441);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(334);
      if (lookahead == '(') ADVANCE(327);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(139);
      if (lookahead != 0) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(441);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(335);
      if (lookahead == '(') ADVANCE(328);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(140);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(441);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(336);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(142);
      if (lookahead != 0) ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(443);
      if (lookahead == '"') ADVANCE(337);
      if (lookahead == '`') ADVANCE(316);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(1);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(443);
      if (lookahead == '\'') ADVANCE(338);
      if (lookahead == '`') ADVANCE(317);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(2);
      if (lookahead != 0) ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(443);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(339);
      if (lookahead == '`') ADVANCE(319);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(3);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '"') ADVANCE(340);
      if (lookahead == ')') ADVANCE(451);
      if (lookahead == '`') ADVANCE(323);
      if (lookahead != 0) ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(341);
      if (lookahead == ')') ADVANCE(452);
      if (lookahead == '`') ADVANCE(324);
      if (lookahead != 0) ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(342);
      if (lookahead == ')') ADVANCE(453);
      if (lookahead == '`') ADVANCE(326);
      if (lookahead != 0) ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == '"') ADVANCE(343);
      if (lookahead == '(') ADVANCE(340);
      if (lookahead == '`') ADVANCE(330);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(1);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == '\'') ADVANCE(344);
      if (lookahead == '(') ADVANCE(341);
      if (lookahead == '`') ADVANCE(331);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(2);
      if (lookahead != 0) ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(345);
      if (lookahead == '(') ADVANCE(342);
      if (lookahead == '`') ADVANCE(333);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(3);
      if (lookahead != 0) ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '"') ADVANCE(346);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == ']') ADVANCE(316);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(316);
      if (lookahead != 0) ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(347);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ']') ADVANCE(317);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(317);
      if (lookahead != 0) ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == ']') ADVANCE(318);
      if (lookahead == '`') ADVANCE(348);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(318);
      if (lookahead != 0) ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(349);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == ']') ADVANCE(319);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(319);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(350);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ']') ADVANCE(320);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(320);
      if (lookahead != 0) ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(351);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == ']') ADVANCE(321);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(321);
      if (lookahead != 0) ADVANCE(351);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(352);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == ']') ADVANCE(322);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(322);
      if (lookahead != 0) ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(415);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '(') ADVANCE(323);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '[') ADVANCE(330);
      if (lookahead == ']') ADVANCE(330);
      if (lookahead != 0) ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(415);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(354);
      if (lookahead == '(') ADVANCE(324);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '[') ADVANCE(331);
      if (lookahead == ']') ADVANCE(331);
      if (lookahead != 0) ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(415);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == '[') ADVANCE(332);
      if (lookahead == ']') ADVANCE(332);
      if (lookahead == '`') ADVANCE(355);
      if (lookahead != 0) ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(415);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(356);
      if (lookahead == '(') ADVANCE(326);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '[') ADVANCE(333);
      if (lookahead == ']') ADVANCE(333);
      if (lookahead != 0) ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(415);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(357);
      if (lookahead == '(') ADVANCE(327);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '[') ADVANCE(334);
      if (lookahead == ']') ADVANCE(334);
      if (lookahead != 0) ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(415);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(358);
      if (lookahead == '(') ADVANCE(328);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '[') ADVANCE(335);
      if (lookahead == ']') ADVANCE(335);
      if (lookahead != 0) ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(415);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(359);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == '[') ADVANCE(336);
      if (lookahead == ']') ADVANCE(336);
      if (lookahead != 0) ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '"') ADVANCE(360);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == ',') ADVANCE(360);
      if (lookahead == '}') ADVANCE(360);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(316);
      if (lookahead != 0) ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(361);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(361);
      if (lookahead == '}') ADVANCE(361);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(317);
      if (lookahead != 0) ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == ',') ADVANCE(362);
      if (lookahead == '`') ADVANCE(362);
      if (lookahead == '}') ADVANCE(362);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(318);
      if (lookahead != 0) ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(363);
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
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '"' ||
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
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(365);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == ',') ADVANCE(365);
      if (lookahead == '}') ADVANCE(365);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(321);
      if (lookahead != 0) ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(366);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == ',') ADVANCE(366);
      if (lookahead == '}') ADVANCE(366);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(322);
      if (lookahead != 0) ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '"') ADVANCE(367);
      if (lookahead == '(') ADVANCE(323);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == ',') ADVANCE(367);
      if (lookahead == '}') ADVANCE(367);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(330);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(368);
      if (lookahead == '(') ADVANCE(324);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(368);
      if (lookahead == '}') ADVANCE(368);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(331);
      if (lookahead != 0) ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == ',') ADVANCE(369);
      if (lookahead == '`') ADVANCE(369);
      if (lookahead == '}') ADVANCE(369);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(332);
      if (lookahead != 0) ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(370);
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
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '"' ||
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
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(372);
      if (lookahead == '(') ADVANCE(328);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == ',') ADVANCE(372);
      if (lookahead == '}') ADVANCE(372);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(335);
      if (lookahead != 0) ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(373);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == ',') ADVANCE(373);
      if (lookahead == '}') ADVANCE(373);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(336);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '"') ADVANCE(374);
      if (lookahead == '(') ADVANCE(323);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead != 0) ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(375);
      if (lookahead == '(') ADVANCE(324);
      if (lookahead == ')') ADVANCE(475);
      if (lookahead != 0) ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == ')') ADVANCE(484);
      if (lookahead == '`') ADVANCE(376);
      if (lookahead != 0) ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(377);
      if (lookahead == '(') ADVANCE(326);
      if (lookahead == ')') ADVANCE(485);
      if (lookahead != 0) ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(378);
      if (lookahead == '(') ADVANCE(327);
      if (lookahead == ')') ADVANCE(486);
      if (lookahead != 0) ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(379);
      if (lookahead == '(') ADVANCE(328);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead != 0) ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(380);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == ')') ADVANCE(488);
      if (lookahead != 0) ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == ' ') ADVANCE(381);
      if (lookahead == '"') ADVANCE(381);
      if (lookahead == '\'') ADVANCE(383);
      if (lookahead == ')') ADVANCE(1);
      if (lookahead == '?') ADVANCE(337);
      if (lookahead == '`') ADVANCE(251);
      if (lookahead != 0) ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == ' ') ADVANCE(382);
      if (lookahead == '"') ADVANCE(383);
      if (lookahead == '\'') ADVANCE(382);
      if (lookahead == ')') ADVANCE(2);
      if (lookahead == '?') ADVANCE(338);
      if (lookahead == '`') ADVANCE(253);
      if (lookahead != 0) ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == ' ') ADVANCE(383);
      if (lookahead == '"') ADVANCE(383);
      if (lookahead == '\'') ADVANCE(383);
      if (lookahead == ')') ADVANCE(3);
      if (lookahead == '?') ADVANCE(339);
      if (lookahead == '`') ADVANCE(255);
      if (lookahead != 0) ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == ' ') ADVANCE(401);
      if (lookahead == '"') ADVANCE(384);
      if (lookahead == '\'') ADVANCE(387);
      if (lookahead == '(') ADVANCE(408);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '?') ADVANCE(272);
      if (lookahead == '`') ADVANCE(388);
      if (lookahead != 0) ADVANCE(384);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == ' ') ADVANCE(402);
      if (lookahead == '"') ADVANCE(387);
      if (lookahead == '\'') ADVANCE(385);
      if (lookahead == '(') ADVANCE(409);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '?') ADVANCE(274);
      if (lookahead == '`') ADVANCE(389);
      if (lookahead != 0) ADVANCE(385);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == ' ') ADVANCE(403);
      if (lookahead == '"') ADVANCE(388);
      if (lookahead == '\'') ADVANCE(389);
      if (lookahead == '(') ADVANCE(410);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '?') ADVANCE(276);
      if (lookahead == '`') ADVANCE(386);
      if (lookahead != 0) ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == ' ') ADVANCE(404);
      if (lookahead == '"') ADVANCE(387);
      if (lookahead == '\'') ADVANCE(387);
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '?') ADVANCE(278);
      if (lookahead == '`') ADVANCE(390);
      if (lookahead != 0) ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == ' ') ADVANCE(405);
      if (lookahead == '"') ADVANCE(388);
      if (lookahead == '\'') ADVANCE(390);
      if (lookahead == '(') ADVANCE(412);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '?') ADVANCE(280);
      if (lookahead == '`') ADVANCE(388);
      if (lookahead != 0) ADVANCE(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == ' ') ADVANCE(406);
      if (lookahead == '"') ADVANCE(390);
      if (lookahead == '\'') ADVANCE(389);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '?') ADVANCE(282);
      if (lookahead == '`') ADVANCE(389);
      if (lookahead != 0) ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == ' ') ADVANCE(407);
      if (lookahead == '"') ADVANCE(390);
      if (lookahead == '\'') ADVANCE(390);
      if (lookahead == '(') ADVANCE(414);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '?') ADVANCE(284);
      if (lookahead == '`') ADVANCE(390);
      if (lookahead != 0) ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead == ' ') ADVANCE(391);
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '\'') ADVANCE(393);
      if (lookahead == ')') ADVANCE(451);
      if (lookahead == '?') ADVANCE(340);
      if (lookahead == '`') ADVANCE(265);
      if (lookahead != 0) ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead == ' ') ADVANCE(392);
      if (lookahead == '"') ADVANCE(393);
      if (lookahead == '\'') ADVANCE(392);
      if (lookahead == ')') ADVANCE(452);
      if (lookahead == '?') ADVANCE(341);
      if (lookahead == '`') ADVANCE(267);
      if (lookahead != 0) ADVANCE(392);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead == ' ') ADVANCE(393);
      if (lookahead == '"') ADVANCE(393);
      if (lookahead == '\'') ADVANCE(393);
      if (lookahead == ')') ADVANCE(453);
      if (lookahead == '?') ADVANCE(342);
      if (lookahead == '`') ADVANCE(269);
      if (lookahead != 0) ADVANCE(393);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(257);
      if (lookahead == '"') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(397);
      if (lookahead == '(') ADVANCE(257);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead == '?') ADVANCE(374);
      if (lookahead == '`') ADVANCE(398);
      if (lookahead != 0) ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(259);
      if (lookahead == '"') ADVANCE(397);
      if (lookahead == '\'') ADVANCE(395);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == ')') ADVANCE(475);
      if (lookahead == '?') ADVANCE(375);
      if (lookahead == '`') ADVANCE(399);
      if (lookahead != 0) ADVANCE(395);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(261);
      if (lookahead == '"') ADVANCE(398);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == '(') ADVANCE(261);
      if (lookahead == ')') ADVANCE(484);
      if (lookahead == '?') ADVANCE(376);
      if (lookahead == '`') ADVANCE(396);
      if (lookahead != 0) ADVANCE(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(263);
      if (lookahead == '"') ADVANCE(397);
      if (lookahead == '\'') ADVANCE(397);
      if (lookahead == '(') ADVANCE(263);
      if (lookahead == ')') ADVANCE(485);
      if (lookahead == '?') ADVANCE(377);
      if (lookahead == '`') ADVANCE(400);
      if (lookahead != 0) ADVANCE(397);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(265);
      if (lookahead == '"') ADVANCE(398);
      if (lookahead == '\'') ADVANCE(400);
      if (lookahead == '(') ADVANCE(265);
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == '?') ADVANCE(378);
      if (lookahead == '`') ADVANCE(398);
      if (lookahead != 0) ADVANCE(398);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(267);
      if (lookahead == '"') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(399);
      if (lookahead == '(') ADVANCE(267);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == '?') ADVANCE(379);
      if (lookahead == '`') ADVANCE(399);
      if (lookahead != 0) ADVANCE(399);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(269);
      if (lookahead == '"') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(400);
      if (lookahead == '(') ADVANCE(269);
      if (lookahead == ')') ADVANCE(488);
      if (lookahead == '?') ADVANCE(380);
      if (lookahead == '`') ADVANCE(400);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(401);
      if (lookahead == '"') ADVANCE(401);
      if (lookahead == '\'') ADVANCE(404);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '?') ADVANCE(244);
      if (lookahead == '`') ADVANCE(405);
      if (lookahead != 0) ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(402);
      if (lookahead == '"') ADVANCE(404);
      if (lookahead == '\'') ADVANCE(402);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '?') ADVANCE(246);
      if (lookahead == '`') ADVANCE(406);
      if (lookahead != 0) ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(403);
      if (lookahead == '"') ADVANCE(405);
      if (lookahead == '\'') ADVANCE(406);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '?') ADVANCE(248);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead != 0) ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(404);
      if (lookahead == '"') ADVANCE(404);
      if (lookahead == '\'') ADVANCE(404);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '?') ADVANCE(250);
      if (lookahead == '`') ADVANCE(407);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(405);
      if (lookahead == '"') ADVANCE(405);
      if (lookahead == '\'') ADVANCE(407);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '?') ADVANCE(252);
      if (lookahead == '`') ADVANCE(405);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(406);
      if (lookahead == '"') ADVANCE(407);
      if (lookahead == '\'') ADVANCE(406);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '?') ADVANCE(254);
      if (lookahead == '`') ADVANCE(406);
      if (lookahead != 0) ADVANCE(406);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(407);
      if (lookahead == '"') ADVANCE(407);
      if (lookahead == '\'') ADVANCE(407);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '?') ADVANCE(256);
      if (lookahead == '`') ADVANCE(407);
      if (lookahead != 0) ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(438);
      if (lookahead == ' ') ADVANCE(408);
      if (lookahead == '"') ADVANCE(408);
      if (lookahead == '\'') ADVANCE(411);
      if (lookahead == ')') ADVANCE(454);
      if (lookahead == '?') ADVANCE(258);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead != 0) ADVANCE(408);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(438);
      if (lookahead == ' ') ADVANCE(409);
      if (lookahead == '"') ADVANCE(411);
      if (lookahead == '\'') ADVANCE(409);
      if (lookahead == ')') ADVANCE(455);
      if (lookahead == '?') ADVANCE(260);
      if (lookahead == '`') ADVANCE(413);
      if (lookahead != 0) ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(438);
      if (lookahead == ' ') ADVANCE(410);
      if (lookahead == '"') ADVANCE(412);
      if (lookahead == '\'') ADVANCE(413);
      if (lookahead == ')') ADVANCE(456);
      if (lookahead == '?') ADVANCE(262);
      if (lookahead == '`') ADVANCE(410);
      if (lookahead != 0) ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(438);
      if (lookahead == ' ') ADVANCE(411);
      if (lookahead == '"') ADVANCE(411);
      if (lookahead == '\'') ADVANCE(411);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '?') ADVANCE(264);
      if (lookahead == '`') ADVANCE(414);
      if (lookahead != 0) ADVANCE(411);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(438);
      if (lookahead == ' ') ADVANCE(412);
      if (lookahead == '"') ADVANCE(412);
      if (lookahead == '\'') ADVANCE(414);
      if (lookahead == ')') ADVANCE(458);
      if (lookahead == '?') ADVANCE(266);
      if (lookahead == '`') ADVANCE(412);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(438);
      if (lookahead == ' ') ADVANCE(413);
      if (lookahead == '"') ADVANCE(414);
      if (lookahead == '\'') ADVANCE(413);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == '?') ADVANCE(268);
      if (lookahead == '`') ADVANCE(413);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(438);
      if (lookahead == ' ') ADVANCE(414);
      if (lookahead == '"') ADVANCE(414);
      if (lookahead == '\'') ADVANCE(414);
      if (lookahead == ')') ADVANCE(460);
      if (lookahead == '?') ADVANCE(270);
      if (lookahead == '`') ADVANCE(414);
      if (lookahead != 0) ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead == '(') ADVANCE(421);
      if (lookahead == '[') ADVANCE(441);
      if (lookahead == ']') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead == ']') ADVANCE(449);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == '(') ADVANCE(421);
      if (lookahead == ',') ADVANCE(417);
      if (lookahead == '}') ADVANCE(417);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == ',') ADVANCE(418);
      if (lookahead == '}') ADVANCE(418);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(418);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(70);
      if (lookahead == ')') ADVANCE(483);
      if (lookahead == '`') ADVANCE(421);
      if (lookahead != 0) ADVANCE(419);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == '(') ADVANCE(421);
      if (lookahead == ')') ADVANCE(450);
      if (lookahead != 0) ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == ')') ADVANCE(450);
      if (lookahead != 0) ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(422);
      if (lookahead == '"') ADVANCE(243);
      if (lookahead == '\'') ADVANCE(245);
      if (lookahead == '?') ADVANCE(449);
      if (lookahead == '`') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(422);
      if (lookahead == '"') ADVANCE(271);
      if (lookahead == '\'') ADVANCE(273);
      if (lookahead == '(') ADVANCE(426);
      if (lookahead == '?') ADVANCE(441);
      if (lookahead == '`') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(422);
      if (lookahead == '(') ADVANCE(426);
      if (lookahead == '?') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(423);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(422);
      if (lookahead == '?') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(422);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(426);
      if (lookahead == '"') ADVANCE(257);
      if (lookahead == '\'') ADVANCE(259);
      if (lookahead == ')') ADVANCE(450);
      if (lookahead == '?') ADVANCE(421);
      if (lookahead == '`') ADVANCE(261);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(426);
      if (lookahead == '"') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(395);
      if (lookahead == '(') ADVANCE(426);
      if (lookahead == ')') ADVANCE(450);
      if (lookahead == '?') ADVANCE(420);
      if (lookahead == '`') ADVANCE(396);
      if (lookahead != 0) ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(426);
      if (lookahead == ')') ADVANCE(450);
      if (lookahead == '?') ADVANCE(421);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(429);
      if (lookahead == '"') ADVANCE(288);
      if (lookahead == '\'') ADVANCE(289);
      if (lookahead == '?') ADVANCE(416);
      if (lookahead == ']') ADVANCE(422);
      if (lookahead == '`') ADVANCE(290);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(429);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(429);
      if (lookahead == '"') ADVANCE(295);
      if (lookahead == '\'') ADVANCE(296);
      if (lookahead == '(') ADVANCE(426);
      if (lookahead == '?') ADVANCE(415);
      if (lookahead == '[') ADVANCE(423);
      if (lookahead == ']') ADVANCE(423);
      if (lookahead == '`') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(430);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(431);
      if (lookahead == '"') ADVANCE(302);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == ',') ADVANCE(431);
      if (lookahead == '?') ADVANCE(418);
      if (lookahead == '`') ADVANCE(304);
      if (lookahead == '}') ADVANCE(431);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(431);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(431);
      if (lookahead == '"') ADVANCE(309);
      if (lookahead == '\'') ADVANCE(310);
      if (lookahead == '(') ADVANCE(426);
      if (lookahead == ',') ADVANCE(432);
      if (lookahead == '?') ADVANCE(417);
      if (lookahead == '`') ADVANCE(311);
      if (lookahead == '}') ADVANCE(432);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(432);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(434);
      if (lookahead == '"') ADVANCE(285);
      if (lookahead == '\'') ADVANCE(286);
      if (lookahead == '(') ADVANCE(435);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '?') ADVANCE(442);
      if (lookahead == '`') ADVANCE(275);
      if (lookahead != 0) ADVANCE(433);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(434);
      if (lookahead == '"') ADVANCE(381);
      if (lookahead == '\'') ADVANCE(382);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '?') ADVANCE(443);
      if (lookahead == '`') ADVANCE(247);
      if (lookahead != 0) ADVANCE(434);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(435);
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '\'') ADVANCE(392);
      if (lookahead == ')') ADVANCE(483);
      if (lookahead == '?') ADVANCE(419);
      if (lookahead == '`') ADVANCE(261);
      if (lookahead != 0) ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(437);
      if (lookahead == '"') ADVANCE(384);
      if (lookahead == '\'') ADVANCE(385);
      if (lookahead == '(') ADVANCE(438);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '?') ADVANCE(424);
      if (lookahead == '`') ADVANCE(386);
      if (lookahead != 0) ADVANCE(436);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(437);
      if (lookahead == '"') ADVANCE(401);
      if (lookahead == '\'') ADVANCE(402);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '?') ADVANCE(425);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead != 0) ADVANCE(437);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(438);
      if (lookahead == '"') ADVANCE(408);
      if (lookahead == '\'') ADVANCE(409);
      if (lookahead == ')') ADVANCE(482);
      if (lookahead == '?') ADVANCE(428);
      if (lookahead == '`') ADVANCE(410);
      if (lookahead != 0) ADVANCE(438);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '(') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(441);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '(') ADVANCE(419);
      if (lookahead == '`') ADVANCE(441);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(92);
      if (lookahead != 0) ADVANCE(442);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '`') ADVANCE(449);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(92);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '`') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(449);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '"') ADVANCE(209);
      if (lookahead == '`') ADVANCE(502);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '\'') ADVANCE(210);
      if (lookahead == '`') ADVANCE(503);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(211);
      if (lookahead == '`') ADVANCE(507);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '"') ADVANCE(226);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\'') ADVANCE(227);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == '`') ADVANCE(228);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(229);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(230);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(231);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(232);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == '[') ADVANCE(480);
      if (lookahead == ']') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(461);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == ',') ADVANCE(462);
      if (lookahead == '}') ADVANCE(462);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(462);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(71);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(482);
      if (lookahead == '?') ADVANCE(468);
      if (lookahead != 0) ADVANCE(463);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '?') ADVANCE(469);
      if (lookahead == '[') ADVANCE(478);
      if (lookahead == ']') ADVANCE(478);
      if (lookahead != 0) ADVANCE(464);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(77);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == ',') ADVANCE(465);
      if (lookahead == '?') ADVANCE(470);
      if (lookahead == '}') ADVANCE(465);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(478);
      if (lookahead != 0) ADVANCE(465);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == ')') ADVANCE(450);
      if (lookahead != 0) ADVANCE(466);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(422);
      if (lookahead == '(') ADVANCE(426);
      if (lookahead == '?') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(423);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(426);
      if (lookahead == '(') ADVANCE(426);
      if (lookahead == ')') ADVANCE(450);
      if (lookahead == '?') ADVANCE(466);
      if (lookahead != 0) ADVANCE(427);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(429);
      if (lookahead == '(') ADVANCE(426);
      if (lookahead == '?') ADVANCE(461);
      if (lookahead == '[') ADVANCE(423);
      if (lookahead == ']') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(430);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(431);
      if (lookahead == '(') ADVANCE(426);
      if (lookahead == ',') ADVANCE(432);
      if (lookahead == '?') ADVANCE(462);
      if (lookahead == '}') ADVANCE(432);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(432);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '\'') ADVANCE(627);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '?') ADVANCE(473);
      if (lookahead == '[') ADVANCE(464);
      if (lookahead == '`') ADVANCE(479);
      if (lookahead == '{') ADVANCE(465);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(471);
      if (lookahead != 0) ADVANCE(478);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(434);
      if (lookahead == '(') ADVANCE(435);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '?') ADVANCE(476);
      if (lookahead == '`') ADVANCE(423);
      if (lookahead != 0) ADVANCE(433);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(437);
      if (lookahead == '(') ADVANCE(438);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '?') ADVANCE(480);
      if (lookahead != 0) ADVANCE(436);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '`') ADVANCE(480);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(92);
      if (lookahead != 0) ADVANCE(476);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == '?') ADVANCE(480);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(87);
      if (lookahead != 0) ADVANCE(478);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == '?') ADVANCE(467);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(87);
      if (lookahead != 0) ADVANCE(478);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == '?') ADVANCE(472);
      if (lookahead == '`') ADVANCE(478);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(86);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(480);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '?') ADVANCE(93);
      if (lookahead == '`') ADVANCE(506);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '?') ADVANCE(148);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '`') ADVANCE(498);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '`') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '"') ADVANCE(219);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(489);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(63);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(220);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(490);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(66);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '`') ADVANCE(221);
      if (lookahead == '}') ADVANCE(491);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(94);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(222);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(492);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(138);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(223);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(493);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(139);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(224);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(494);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(140);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(225);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(495);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(142);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '}') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '?') ADVANCE(78);
      if (lookahead == '}') ADVANCE(497);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(87);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"') ADVANCE(236);
      if (lookahead == ')') ADVANCE(474);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == ')') ADVANCE(475);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(239);
      if (lookahead == ')') ADVANCE(485);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '"') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == ')') ADVANCE(482);
      if (lookahead == '?') ADVANCE(74);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == ')') ADVANCE(450);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '?') ADVANCE(148);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '?') ADVANCE(148);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '`') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__attribute_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(517);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(586);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(606);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(590);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(607);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(596);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(583);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(598);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(584);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(601);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(585);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(604);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(553);
      if (lookahead == 'o') ADVANCE(530);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(569);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(592);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(554);
      if (lookahead == 'o') ADVANCE(532);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(570);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(593);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(595);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(165);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(525);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(527);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(167);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(545);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(542);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(577);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(578);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(581);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(543);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(600);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(603);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(546);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(550);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(589);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(594);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(597);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(185);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(561);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(564);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(565);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(530);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(532);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(534);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(599);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(602);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(537);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(540);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(605);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(549);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(558);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(559);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(560);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(535);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(172);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(173);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(536);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(538);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(587);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(588);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(539);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(591);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(547);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(548);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(608);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(521);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(190);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(609);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(522);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(191);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(610);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(523);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(562);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(563);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(579);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(580);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(582);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(614);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(617);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(615);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(618);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(616);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(619);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token1);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token2);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == '?') ADVANCE(467);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(87);
      if (lookahead != 0) ADVANCE(478);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(629);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(629);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == '?') ADVANCE(467);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(87);
      if (lookahead != 0) ADVANCE(478);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(633);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(633);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '{') ADVANCE(635);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '{') ADVANCE(635);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(649);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(651);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '!') ADVANCE(640);
      if (lookahead == '#') ADVANCE(646);
      if (lookahead == '-') ADVANCE(668);
      if (lookahead == '.') ADVANCE(645);
      if (lookahead == '/') ADVANCE(639);
      if (lookahead == '=') ADVANCE(197);
      if (lookahead == 'c') ADVANCE(528);
      if (lookahead == 'd') ADVANCE(576);
      if (lookahead == 'e') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead == 's') ADVANCE(533);
      if (lookahead == 'u') ADVANCE(573);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '/') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == 'f') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == 'i') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(645);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(619);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__comment_content);
      if (eof) ADVANCE(153);
      if (lookahead == '!') ADVANCE(640);
      if (lookahead == '#') ADVANCE(646);
      if (lookahead == '-') ADVANCE(668);
      if (lookahead == '.') ADVANCE(645);
      if (lookahead == '/') ADVANCE(639);
      if (lookahead == '=') ADVANCE(197);
      if (lookahead == 'c') ADVANCE(528);
      if (lookahead == 'd') ADVANCE(576);
      if (lookahead == 'e') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead == 's') ADVANCE(533);
      if (lookahead == 'u') ADVANCE(573);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__delimited_javascript);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(654);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__delimited_javascript);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(654);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(658);
      if (lookahead == '#') ADVANCE(664);
      if (lookahead == '-') ADVANCE(667);
      if (lookahead == '.') ADVANCE(663);
      if (lookahead == '/') ADVANCE(657);
      if (lookahead == '=') ADVANCE(196);
      if (lookahead == 'c') ADVANCE(526);
      if (lookahead == 'd') ADVANCE(544);
      if (lookahead == 'e') ADVANCE(567);
      if (lookahead == 'i') ADVANCE(552);
      if (lookahead == 's') ADVANCE(531);
      if (lookahead == 'u') ADVANCE(572);
      if (lookahead == 'w') ADVANCE(556);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(658);
      if (lookahead == '#') ADVANCE(664);
      if (lookahead == '-') ADVANCE(667);
      if (lookahead == '.') ADVANCE(663);
      if (lookahead == '/') ADVANCE(657);
      if (lookahead == '=') ADVANCE(196);
      if (lookahead == 'c') ADVANCE(526);
      if (lookahead == 'd') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(567);
      if (lookahead == 'i') ADVANCE(552);
      if (lookahead == 's') ADVANCE(531);
      if (lookahead == 'u') ADVANCE(572);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '/') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '=') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'f') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'i') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(663);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(618);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(647);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_unbuffered_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(669);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 152},
  [2] = {.lex_state = 152},
  [3] = {.lex_state = 152},
  [4] = {.lex_state = 151, .external_lex_state = 2},
  [5] = {.lex_state = 151, .external_lex_state = 2},
  [6] = {.lex_state = 152, .external_lex_state = 2},
  [7] = {.lex_state = 151, .external_lex_state = 2},
  [8] = {.lex_state = 151, .external_lex_state = 2},
  [9] = {.lex_state = 152, .external_lex_state = 2},
  [10] = {.lex_state = 152, .external_lex_state = 2},
  [11] = {.lex_state = 151, .external_lex_state = 3},
  [12] = {.lex_state = 151, .external_lex_state = 2},
  [13] = {.lex_state = 149, .external_lex_state = 2},
  [14] = {.lex_state = 149, .external_lex_state = 2},
  [15] = {.lex_state = 151, .external_lex_state = 2},
  [16] = {.lex_state = 151},
  [17] = {.lex_state = 151, .external_lex_state = 2},
  [18] = {.lex_state = 151, .external_lex_state = 4},
  [19] = {.lex_state = 151, .external_lex_state = 2},
  [20] = {.lex_state = 151, .external_lex_state = 4},
  [21] = {.lex_state = 151, .external_lex_state = 2},
  [22] = {.lex_state = 151, .external_lex_state = 4},
  [23] = {.lex_state = 151, .external_lex_state = 4},
  [24] = {.lex_state = 151},
  [25] = {.lex_state = 151, .external_lex_state = 3},
  [26] = {.lex_state = 151, .external_lex_state = 4},
  [27] = {.lex_state = 151, .external_lex_state = 4},
  [28] = {.lex_state = 149, .external_lex_state = 2},
  [29] = {.lex_state = 151, .external_lex_state = 4},
  [30] = {.lex_state = 151, .external_lex_state = 4},
  [31] = {.lex_state = 648, .external_lex_state = 3},
  [32] = {.lex_state = 151, .external_lex_state = 2},
  [33] = {.lex_state = 151, .external_lex_state = 2},
  [34] = {.lex_state = 151, .external_lex_state = 2},
  [35] = {.lex_state = 150, .external_lex_state = 2},
  [36] = {.lex_state = 151, .external_lex_state = 2},
  [37] = {.lex_state = 150, .external_lex_state = 2},
  [38] = {.lex_state = 152, .external_lex_state = 2},
  [39] = {.lex_state = 152, .external_lex_state = 4},
  [40] = {.lex_state = 152, .external_lex_state = 2},
  [41] = {.lex_state = 152, .external_lex_state = 2},
  [42] = {.lex_state = 152, .external_lex_state = 4},
  [43] = {.lex_state = 151, .external_lex_state = 2},
  [44] = {.lex_state = 152, .external_lex_state = 4},
  [45] = {.lex_state = 152, .external_lex_state = 4},
  [46] = {.lex_state = 648, .external_lex_state = 2},
  [47] = {.lex_state = 648, .external_lex_state = 2},
  [48] = {.lex_state = 151, .external_lex_state = 2},
  [49] = {.lex_state = 152, .external_lex_state = 4},
  [50] = {.lex_state = 151, .external_lex_state = 2},
  [51] = {.lex_state = 151, .external_lex_state = 2},
  [52] = {.lex_state = 151, .external_lex_state = 2},
  [53] = {.lex_state = 151, .external_lex_state = 2},
  [54] = {.lex_state = 151, .external_lex_state = 2},
  [55] = {.lex_state = 151, .external_lex_state = 2},
  [56] = {.lex_state = 151, .external_lex_state = 2},
  [57] = {.lex_state = 151, .external_lex_state = 2},
  [58] = {.lex_state = 151, .external_lex_state = 2},
  [59] = {.lex_state = 151, .external_lex_state = 2},
  [60] = {.lex_state = 151, .external_lex_state = 2},
  [61] = {.lex_state = 152, .external_lex_state = 4},
  [62] = {.lex_state = 151, .external_lex_state = 2},
  [63] = {.lex_state = 151, .external_lex_state = 2},
  [64] = {.lex_state = 151, .external_lex_state = 2},
  [65] = {.lex_state = 151, .external_lex_state = 2},
  [66] = {.lex_state = 151, .external_lex_state = 2},
  [67] = {.lex_state = 151, .external_lex_state = 2},
  [68] = {.lex_state = 648, .external_lex_state = 2},
  [69] = {.lex_state = 151, .external_lex_state = 2},
  [70] = {.lex_state = 151, .external_lex_state = 2},
  [71] = {.lex_state = 151, .external_lex_state = 2},
  [72] = {.lex_state = 151, .external_lex_state = 2},
  [73] = {.lex_state = 60},
  [74] = {.lex_state = 60},
  [75] = {.lex_state = 60},
  [76] = {.lex_state = 60},
  [77] = {.lex_state = 151},
  [78] = {.lex_state = 60},
  [79] = {.lex_state = 152},
  [80] = {.lex_state = 152},
  [81] = {.lex_state = 152, .external_lex_state = 4},
  [82] = {.lex_state = 152, .external_lex_state = 5},
  [83] = {.lex_state = 60},
  [84] = {.lex_state = 60},
  [85] = {.lex_state = 151},
  [86] = {.lex_state = 152, .external_lex_state = 5},
  [87] = {.lex_state = 60},
  [88] = {.lex_state = 152},
  [89] = {.lex_state = 60},
  [90] = {.lex_state = 150, .external_lex_state = 2},
  [91] = {.lex_state = 60},
  [92] = {.lex_state = 152, .external_lex_state = 5},
  [93] = {.lex_state = 152, .external_lex_state = 5},
  [94] = {.lex_state = 60},
  [95] = {.lex_state = 152, .external_lex_state = 5},
  [96] = {.lex_state = 60},
  [97] = {.lex_state = 152, .external_lex_state = 5},
  [98] = {.lex_state = 60},
  [99] = {.lex_state = 60},
  [100] = {.lex_state = 152, .external_lex_state = 4},
  [101] = {.lex_state = 60},
  [102] = {.lex_state = 648, .external_lex_state = 2},
  [103] = {.lex_state = 152, .external_lex_state = 2},
  [104] = {.lex_state = 152, .external_lex_state = 2},
  [105] = {.lex_state = 152, .external_lex_state = 2},
  [106] = {.lex_state = 152, .external_lex_state = 5},
  [107] = {.lex_state = 152, .external_lex_state = 2},
  [108] = {.lex_state = 152, .external_lex_state = 2},
  [109] = {.lex_state = 152, .external_lex_state = 2},
  [110] = {.lex_state = 152, .external_lex_state = 2},
  [111] = {.lex_state = 152, .external_lex_state = 2},
  [112] = {.lex_state = 152, .external_lex_state = 2},
  [113] = {.lex_state = 152, .external_lex_state = 2},
  [114] = {.lex_state = 152, .external_lex_state = 2},
  [115] = {.lex_state = 152, .external_lex_state = 2},
  [116] = {.lex_state = 152, .external_lex_state = 2},
  [117] = {.lex_state = 152, .external_lex_state = 2},
  [118] = {.lex_state = 152, .external_lex_state = 2},
  [119] = {.lex_state = 152, .external_lex_state = 2},
  [120] = {.lex_state = 152, .external_lex_state = 2},
  [121] = {.lex_state = 152, .external_lex_state = 2},
  [122] = {.lex_state = 152, .external_lex_state = 2},
  [123] = {.lex_state = 152, .external_lex_state = 2},
  [124] = {.lex_state = 152, .external_lex_state = 5},
  [125] = {.lex_state = 152, .external_lex_state = 2},
  [126] = {.lex_state = 152, .external_lex_state = 2},
  [127] = {.lex_state = 152, .external_lex_state = 2},
  [128] = {.lex_state = 152},
  [129] = {.lex_state = 152},
  [130] = {.lex_state = 152},
  [131] = {.lex_state = 152},
  [132] = {.lex_state = 152},
  [133] = {.lex_state = 152},
  [134] = {.lex_state = 152},
  [135] = {.lex_state = 152},
  [136] = {.lex_state = 152},
  [137] = {.lex_state = 152},
  [138] = {.lex_state = 152},
  [139] = {.lex_state = 152},
  [140] = {.lex_state = 152},
  [141] = {.lex_state = 152},
  [142] = {.lex_state = 152},
  [143] = {.lex_state = 152},
  [144] = {.lex_state = 152},
  [145] = {.lex_state = 152},
  [146] = {.lex_state = 152},
  [147] = {.lex_state = 152},
  [148] = {.lex_state = 152},
  [149] = {.lex_state = 152},
  [150] = {.lex_state = 152},
  [151] = {.lex_state = 152},
  [152] = {.lex_state = 152},
  [153] = {.lex_state = 60, .external_lex_state = 3},
  [154] = {.lex_state = 60, .external_lex_state = 3},
  [155] = {.lex_state = 60, .external_lex_state = 3},
  [156] = {.lex_state = 54, .external_lex_state = 6},
  [157] = {.lex_state = 54, .external_lex_state = 6},
  [158] = {.lex_state = 54, .external_lex_state = 6},
  [159] = {.lex_state = 54, .external_lex_state = 6},
  [160] = {.lex_state = 54, .external_lex_state = 6},
  [161] = {.lex_state = 54, .external_lex_state = 6},
  [162] = {.lex_state = 54, .external_lex_state = 6},
  [163] = {.lex_state = 54, .external_lex_state = 6},
  [164] = {.lex_state = 54, .external_lex_state = 6},
  [165] = {.lex_state = 54, .external_lex_state = 6},
  [166] = {.lex_state = 60},
  [167] = {.lex_state = 60},
  [168] = {.lex_state = 60},
  [169] = {.lex_state = 60},
  [170] = {.lex_state = 60},
  [171] = {.lex_state = 60, .external_lex_state = 3},
  [172] = {.lex_state = 60, .external_lex_state = 3},
  [173] = {.lex_state = 55},
  [174] = {.lex_state = 60, .external_lex_state = 1},
  [175] = {.lex_state = 60, .external_lex_state = 1},
  [176] = {.lex_state = 60, .external_lex_state = 3},
  [177] = {.lex_state = 60, .external_lex_state = 1},
  [178] = {.lex_state = 55},
  [179] = {.lex_state = 60, .external_lex_state = 1},
  [180] = {.lex_state = 60, .external_lex_state = 1},
  [181] = {.lex_state = 60, .external_lex_state = 1},
  [182] = {.lex_state = 67},
  [183] = {.lex_state = 67},
  [184] = {.lex_state = 60, .external_lex_state = 1},
  [185] = {.lex_state = 67},
  [186] = {.lex_state = 60, .external_lex_state = 3},
  [187] = {.lex_state = 60, .external_lex_state = 3},
  [188] = {.lex_state = 60, .external_lex_state = 3},
  [189] = {.lex_state = 60, .external_lex_state = 3},
  [190] = {.lex_state = 60, .external_lex_state = 3},
  [191] = {.lex_state = 60, .external_lex_state = 3},
  [192] = {.lex_state = 60, .external_lex_state = 3},
  [193] = {.lex_state = 60, .external_lex_state = 3},
  [194] = {.lex_state = 60, .external_lex_state = 3},
  [195] = {.lex_state = 60, .external_lex_state = 3},
  [196] = {.lex_state = 60, .external_lex_state = 3},
  [197] = {.lex_state = 60, .external_lex_state = 3},
  [198] = {.lex_state = 60, .external_lex_state = 3},
  [199] = {.lex_state = 60, .external_lex_state = 3},
  [200] = {.lex_state = 60, .external_lex_state = 3},
  [201] = {.lex_state = 60, .external_lex_state = 3},
  [202] = {.lex_state = 60, .external_lex_state = 3},
  [203] = {.lex_state = 60, .external_lex_state = 3},
  [204] = {.lex_state = 60, .external_lex_state = 3},
  [205] = {.lex_state = 60, .external_lex_state = 3},
  [206] = {.lex_state = 54, .external_lex_state = 6},
  [207] = {.lex_state = 55, .external_lex_state = 6},
  [208] = {.lex_state = 55, .external_lex_state = 6},
  [209] = {.lex_state = 55, .external_lex_state = 6},
  [210] = {.lex_state = 55, .external_lex_state = 6},
  [211] = {.lex_state = 55, .external_lex_state = 6},
  [212] = {.lex_state = 55, .external_lex_state = 6},
  [213] = {.lex_state = 55, .external_lex_state = 6},
  [214] = {.lex_state = 55, .external_lex_state = 6},
  [215] = {.lex_state = 55, .external_lex_state = 6},
  [216] = {.lex_state = 55, .external_lex_state = 6},
  [217] = {.lex_state = 11, .external_lex_state = 2},
  [218] = {.lex_state = 11, .external_lex_state = 2},
  [219] = {.lex_state = 11, .external_lex_state = 2},
  [220] = {.lex_state = 11, .external_lex_state = 2},
  [221] = {.lex_state = 11, .external_lex_state = 2},
  [222] = {.lex_state = 61},
  [223] = {.lex_state = 11, .external_lex_state = 2},
  [224] = {.lex_state = 11, .external_lex_state = 2},
  [225] = {.lex_state = 11, .external_lex_state = 2},
  [226] = {.lex_state = 11, .external_lex_state = 2},
  [227] = {.lex_state = 11, .external_lex_state = 2},
  [228] = {.lex_state = 11, .external_lex_state = 2},
  [229] = {.lex_state = 11, .external_lex_state = 6},
  [230] = {.lex_state = 11},
  [231] = {.lex_state = 64, .external_lex_state = 3},
  [232] = {.lex_state = 11},
  [233] = {.lex_state = 11, .external_lex_state = 6},
  [234] = {.lex_state = 64, .external_lex_state = 1},
  [235] = {.lex_state = 11, .external_lex_state = 6},
  [236] = {.lex_state = 11},
  [237] = {.lex_state = 11, .external_lex_state = 6},
  [238] = {.lex_state = 64, .external_lex_state = 1},
  [239] = {.lex_state = 11},
  [240] = {.lex_state = 11, .external_lex_state = 6},
  [241] = {.lex_state = 11, .external_lex_state = 6},
  [242] = {.lex_state = 64, .external_lex_state = 1},
  [243] = {.lex_state = 11, .external_lex_state = 6},
  [244] = {.lex_state = 64, .external_lex_state = 1},
  [245] = {.lex_state = 11, .external_lex_state = 6},
  [246] = {.lex_state = 64, .external_lex_state = 3},
  [247] = {.lex_state = 11, .external_lex_state = 6},
  [248] = {.lex_state = 11, .external_lex_state = 6},
  [249] = {.lex_state = 64, .external_lex_state = 1},
  [250] = {.lex_state = 11, .external_lex_state = 6},
  [251] = {.lex_state = 11},
  [252] = {.lex_state = 11, .external_lex_state = 6},
  [253] = {.lex_state = 11, .external_lex_state = 6},
  [254] = {.lex_state = 64, .external_lex_state = 1},
  [255] = {.lex_state = 11, .external_lex_state = 6},
  [256] = {.lex_state = 11, .external_lex_state = 6},
  [257] = {.lex_state = 64, .external_lex_state = 3},
  [258] = {.lex_state = 11},
  [259] = {.lex_state = 64, .external_lex_state = 3},
  [260] = {.lex_state = 11, .external_lex_state = 6},
  [261] = {.lex_state = 11},
  [262] = {.lex_state = 11, .external_lex_state = 6},
  [263] = {.lex_state = 11, .external_lex_state = 6},
  [264] = {.lex_state = 11, .external_lex_state = 6},
  [265] = {.lex_state = 64, .external_lex_state = 3},
  [266] = {.lex_state = 11, .external_lex_state = 6},
  [267] = {.lex_state = 11, .external_lex_state = 6},
  [268] = {.lex_state = 11, .external_lex_state = 6},
  [269] = {.lex_state = 11},
  [270] = {.lex_state = 11},
  [271] = {.lex_state = 11, .external_lex_state = 6},
  [272] = {.lex_state = 64, .external_lex_state = 3},
  [273] = {.lex_state = 11},
  [274] = {.lex_state = 11, .external_lex_state = 6},
  [275] = {.lex_state = 11, .external_lex_state = 6},
  [276] = {.lex_state = 11},
  [277] = {.lex_state = 11},
  [278] = {.lex_state = 55, .external_lex_state = 6},
  [279] = {.lex_state = 64, .external_lex_state = 1},
  [280] = {.lex_state = 11},
  [281] = {.lex_state = 64, .external_lex_state = 6},
  [282] = {.lex_state = 64, .external_lex_state = 6},
  [283] = {.lex_state = 11},
  [284] = {.lex_state = 11},
  [285] = {.lex_state = 55, .external_lex_state = 6},
  [286] = {.lex_state = 55},
  [287] = {.lex_state = 55, .external_lex_state = 6},
  [288] = {.lex_state = 11},
  [289] = {.lex_state = 11},
  [290] = {.lex_state = 11, .external_lex_state = 6},
  [291] = {.lex_state = 64, .external_lex_state = 6},
  [292] = {.lex_state = 11},
  [293] = {.lex_state = 11},
  [294] = {.lex_state = 64, .external_lex_state = 6},
  [295] = {.lex_state = 11},
  [296] = {.lex_state = 11},
  [297] = {.lex_state = 11},
  [298] = {.lex_state = 11},
  [299] = {.lex_state = 64, .external_lex_state = 6},
  [300] = {.lex_state = 11},
  [301] = {.lex_state = 11},
  [302] = {.lex_state = 64, .external_lex_state = 3},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 64},
  [305] = {.lex_state = 64, .external_lex_state = 3},
  [306] = {.lex_state = 67},
  [307] = {.lex_state = 11, .external_lex_state = 6},
  [308] = {.lex_state = 64, .external_lex_state = 3},
  [309] = {.lex_state = 64, .external_lex_state = 3},
  [310] = {.lex_state = 64, .external_lex_state = 3},
  [311] = {.lex_state = 64, .external_lex_state = 3},
  [312] = {.lex_state = 64},
  [313] = {.lex_state = 64},
  [314] = {.lex_state = 64, .external_lex_state = 3},
  [315] = {.lex_state = 11, .external_lex_state = 6},
  [316] = {.lex_state = 55},
  [317] = {.lex_state = 64},
  [318] = {.lex_state = 64},
  [319] = {.lex_state = 64, .external_lex_state = 3},
  [320] = {.lex_state = 64, .external_lex_state = 3},
  [321] = {.lex_state = 64, .external_lex_state = 3},
  [322] = {.lex_state = 64, .external_lex_state = 3},
  [323] = {.lex_state = 64, .external_lex_state = 3},
  [324] = {.lex_state = 11, .external_lex_state = 6},
  [325] = {.lex_state = 64, .external_lex_state = 3},
  [326] = {.lex_state = 64},
  [327] = {.lex_state = 64, .external_lex_state = 3},
  [328] = {.lex_state = 64},
  [329] = {.lex_state = 55},
  [330] = {.lex_state = 64, .external_lex_state = 3},
  [331] = {.lex_state = 64, .external_lex_state = 3},
  [332] = {.lex_state = 64},
  [333] = {.lex_state = 64, .external_lex_state = 3},
  [334] = {.lex_state = 64, .external_lex_state = 3},
  [335] = {.lex_state = 64},
  [336] = {.lex_state = 50, .external_lex_state = 6},
  [337] = {.lex_state = 64},
  [338] = {.lex_state = 64},
  [339] = {.lex_state = 11, .external_lex_state = 6},
  [340] = {.lex_state = 64},
  [341] = {.lex_state = 64},
  [342] = {.lex_state = 64},
  [343] = {.lex_state = 64},
  [344] = {.lex_state = 64},
  [345] = {.lex_state = 11, .external_lex_state = 2},
  [346] = {.lex_state = 64},
  [347] = {.lex_state = 11, .external_lex_state = 6},
  [348] = {.lex_state = 64},
  [349] = {.lex_state = 64},
  [350] = {.lex_state = 53, .external_lex_state = 3},
  [351] = {.lex_state = 64},
  [352] = {.lex_state = 64},
  [353] = {.lex_state = 54},
  [354] = {.lex_state = 64},
  [355] = {.lex_state = 11, .external_lex_state = 6},
  [356] = {.lex_state = 54},
  [357] = {.lex_state = 53, .external_lex_state = 3},
  [358] = {.lex_state = 64},
  [359] = {.lex_state = 50, .external_lex_state = 6},
  [360] = {.lex_state = 50},
  [361] = {.lex_state = 54},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 54},
  [364] = {.lex_state = 53, .external_lex_state = 3},
  [365] = {.lex_state = 53, .external_lex_state = 3},
  [366] = {.lex_state = 64},
  [367] = {.lex_state = 54},
  [368] = {.lex_state = 50},
  [369] = {.lex_state = 54},
  [370] = {.lex_state = 53, .external_lex_state = 6},
  [371] = {.lex_state = 50},
  [372] = {.lex_state = 54},
  [373] = {.lex_state = 50},
  [374] = {.lex_state = 54},
  [375] = {.lex_state = 54},
  [376] = {.lex_state = 50},
  [377] = {.lex_state = 54},
  [378] = {.lex_state = 54},
  [379] = {.lex_state = 50},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 50},
  [382] = {.lex_state = 50},
  [383] = {.lex_state = 50},
  [384] = {.lex_state = 54},
  [385] = {.lex_state = 54},
  [386] = {.lex_state = 50},
  [387] = {.lex_state = 54},
  [388] = {.lex_state = 54},
  [389] = {.lex_state = 54},
  [390] = {.lex_state = 54},
  [391] = {.lex_state = 54},
  [392] = {.lex_state = 50},
  [393] = {.lex_state = 50},
  [394] = {.lex_state = 62},
  [395] = {.lex_state = 50},
  [396] = {.lex_state = 50},
  [397] = {.lex_state = 644},
  [398] = {.lex_state = 50},
  [399] = {.lex_state = 65},
  [400] = {.lex_state = 644},
  [401] = {.lex_state = 54},
  [402] = {.lex_state = 50},
  [403] = {.lex_state = 644, .external_lex_state = 6},
  [404] = {.lex_state = 62},
  [405] = {.lex_state = 65},
  [406] = {.lex_state = 0, .external_lex_state = 5},
  [407] = {.lex_state = 0, .external_lex_state = 6},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 669},
  [410] = {.lex_state = 0, .external_lex_state = 6},
  [411] = {.lex_state = 0, .external_lex_state = 5},
  [412] = {.lex_state = 0, .external_lex_state = 5},
  [413] = {.lex_state = 51},
  [414] = {.lex_state = 51},
  [415] = {.lex_state = 0, .external_lex_state = 5},
  [416] = {.lex_state = 0, .external_lex_state = 6},
  [417] = {.lex_state = 0, .external_lex_state = 6},
  [418] = {.lex_state = 50},
  [419] = {.lex_state = 0, .external_lex_state = 6},
  [420] = {.lex_state = 0, .external_lex_state = 6},
  [421] = {.lex_state = 52},
  [422] = {.lex_state = 0, .external_lex_state = 6},
  [423] = {.lex_state = 0, .external_lex_state = 6},
  [424] = {.lex_state = 0, .external_lex_state = 6},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0, .external_lex_state = 5},
  [427] = {.lex_state = 67},
  [428] = {.lex_state = 0, .external_lex_state = 6},
  [429] = {.lex_state = 0, .external_lex_state = 6},
  [430] = {.lex_state = 0, .external_lex_state = 6},
  [431] = {.lex_state = 669},
  [432] = {.lex_state = 0, .external_lex_state = 5},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 152},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0, .external_lex_state = 5},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0, .external_lex_state = 5},
  [440] = {.lex_state = 0, .external_lex_state = 5},
  [441] = {.lex_state = 0, .external_lex_state = 5},
  [442] = {.lex_state = 0, .external_lex_state = 5},
  [443] = {.lex_state = 0, .external_lex_state = 5},
  [444] = {.lex_state = 0, .external_lex_state = 5},
  [445] = {.lex_state = 0, .external_lex_state = 5},
  [446] = {.lex_state = 0, .external_lex_state = 6},
  [447] = {.lex_state = 0, .external_lex_state = 6},
  [448] = {.lex_state = 0, .external_lex_state = 6},
  [449] = {.lex_state = 0, .external_lex_state = 6},
  [450] = {.lex_state = 0, .external_lex_state = 6},
  [451] = {.lex_state = 0, .external_lex_state = 6},
  [452] = {.lex_state = 0, .external_lex_state = 6},
  [453] = {.lex_state = 0, .external_lex_state = 6},
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
    [sym_source_file] = STATE(425),
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
  [116] = 9,
    ACTIONS(78), 1,
      anon_sym_PIPE,
    ACTIONS(84), 1,
      anon_sym_elseif,
    ACTIONS(87), 1,
      anon_sym_else,
    ACTIONS(90), 1,
      sym_tag_name,
    ACTIONS(81), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(93), 2,
      sym_class,
      sym_id,
    ACTIONS(76), 4,
      anon_sym_doctype,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
    STATE(4), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(74), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [159] = 10,
    ACTIONS(100), 1,
      anon_sym_PIPE,
    ACTIONS(104), 1,
      anon_sym_elseif,
    ACTIONS(106), 1,
      anon_sym_else,
    ACTIONS(108), 1,
      sym_tag_name,
    ACTIONS(112), 1,
      sym__dedent,
    ACTIONS(102), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(110), 2,
      sym_class,
      sym_id,
    ACTIONS(98), 4,
      anon_sym_doctype,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
    STATE(4), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(96), 6,
      ts_builtin_sym_end,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [204] = 10,
    ACTIONS(114), 1,
      anon_sym_PIPE,
    ACTIONS(118), 1,
      anon_sym_elseif,
    ACTIONS(120), 1,
      anon_sym_else,
    ACTIONS(122), 1,
      sym_tag_name,
    ACTIONS(126), 1,
      sym__dedent,
    ACTIONS(98), 2,
      anon_sym_doctype,
      anon_sym_case,
    ACTIONS(116), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(124), 2,
      sym_class,
      sym_id,
    STATE(9), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(96), 6,
      ts_builtin_sym_end,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [247] = 7,
    ACTIONS(108), 1,
      sym_tag_name,
    ACTIONS(132), 1,
      anon_sym_DASH,
    STATE(34), 1,
      sym_unbuffered_code,
    ACTIONS(110), 2,
      sym_class,
      sym_id,
    STATE(15), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(130), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(128), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
  [284] = 7,
    ACTIONS(108), 1,
      sym_tag_name,
    ACTIONS(132), 1,
      anon_sym_DASH,
    STATE(33), 1,
      sym_unbuffered_code,
    ACTIONS(110), 2,
      sym_class,
      sym_id,
    STATE(17), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(136), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(134), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
  [321] = 9,
    ACTIONS(138), 1,
      anon_sym_PIPE,
    ACTIONS(144), 1,
      anon_sym_elseif,
    ACTIONS(147), 1,
      anon_sym_else,
    ACTIONS(150), 1,
      sym_tag_name,
    ACTIONS(76), 2,
      anon_sym_doctype,
      anon_sym_case,
    ACTIONS(141), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(153), 2,
      sym_class,
      sym_id,
    STATE(9), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(74), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [362] = 10,
    ACTIONS(114), 1,
      anon_sym_PIPE,
    ACTIONS(118), 1,
      anon_sym_elseif,
    ACTIONS(120), 1,
      anon_sym_else,
    ACTIONS(122), 1,
      sym_tag_name,
    ACTIONS(156), 1,
      sym__dedent,
    ACTIONS(98), 2,
      anon_sym_doctype,
      anon_sym_case,
    ACTIONS(116), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(124), 2,
      sym_class,
      sym_id,
    STATE(9), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(96), 6,
      ts_builtin_sym_end,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [405] = 6,
    ACTIONS(162), 1,
      anon_sym_COLON,
    ACTIONS(164), 1,
      sym__newline,
    ACTIONS(166), 1,
      sym__dedent,
    STATE(36), 1,
      sym__when_content,
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
  [440] = 5,
    ACTIONS(172), 1,
      sym_tag_name,
    ACTIONS(175), 2,
      sym_class,
      sym_id,
    STATE(12), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(170), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(168), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [472] = 4,
    ACTIONS(182), 1,
      sym__un_delimited_javascript_line,
    STATE(14), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(178), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(180), 17,
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
  [502] = 4,
    ACTIONS(188), 1,
      sym__un_delimited_javascript_line,
    STATE(14), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(184), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(186), 17,
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
  [532] = 5,
    ACTIONS(108), 1,
      sym_tag_name,
    ACTIONS(110), 2,
      sym_class,
      sym_id,
    STATE(12), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(136), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(134), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [564] = 6,
    ACTIONS(195), 1,
      anon_sym_when,
    ACTIONS(198), 1,
      anon_sym_default,
    STATE(11), 1,
      sym__when_keyword,
    STATE(16), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(193), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(191), 10,
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
  [598] = 5,
    ACTIONS(108), 1,
      sym_tag_name,
    ACTIONS(110), 2,
      sym_class,
      sym_id,
    STATE(12), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(203), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(201), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [630] = 4,
    ACTIONS(209), 1,
      sym__indent,
    STATE(55), 1,
      sym_children,
    ACTIONS(207), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(205), 11,
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
  [660] = 3,
    STATE(12), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(213), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(211), 11,
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
  [688] = 4,
    ACTIONS(219), 1,
      sym__indent,
    STATE(69), 1,
      sym_children,
    ACTIONS(217), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(215), 11,
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
  [718] = 3,
    STATE(12), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(223), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(221), 11,
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
  [746] = 4,
    ACTIONS(209), 1,
      sym__indent,
    STATE(69), 1,
      sym_children,
    ACTIONS(217), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(215), 11,
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
  [776] = 4,
    ACTIONS(209), 1,
      sym__indent,
    STATE(59), 1,
      sym_children,
    ACTIONS(227), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(225), 11,
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
  [806] = 6,
    ACTIONS(233), 1,
      anon_sym_when,
    ACTIONS(235), 1,
      anon_sym_default,
    STATE(11), 1,
      sym__when_keyword,
    STATE(16), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(231), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(229), 10,
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
  [840] = 2,
    ACTIONS(239), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(237), 13,
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
  [866] = 4,
    ACTIONS(245), 1,
      sym__indent,
    STATE(51), 1,
      sym_children,
    ACTIONS(243), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(241), 11,
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
  [896] = 4,
    ACTIONS(251), 1,
      sym__indent,
    STATE(71), 1,
      sym_children,
    ACTIONS(249), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(247), 11,
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
  [926] = 2,
    ACTIONS(253), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(255), 18,
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
  [951] = 4,
    ACTIONS(261), 1,
      sym__indent,
    ACTIONS(263), 1,
      sym__dedent,
    ACTIONS(259), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(257), 10,
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
  [980] = 4,
    ACTIONS(269), 1,
      sym__indent,
    ACTIONS(271), 1,
      sym__dedent,
    ACTIONS(267), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(265), 10,
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
  [1009] = 3,
    ACTIONS(277), 1,
      sym__newline,
    ACTIONS(273), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(275), 16,
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
  [1035] = 2,
    ACTIONS(281), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(279), 11,
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
  [1059] = 2,
    ACTIONS(203), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(201), 11,
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
  [1083] = 2,
    ACTIONS(136), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(134), 11,
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
  [1107] = 4,
    ACTIONS(283), 1,
      sym__un_delimited_javascript_line,
    STATE(35), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(184), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(186), 15,
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
  [1135] = 3,
    ACTIONS(271), 1,
      sym__dedent,
    ACTIONS(267), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(265), 10,
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
  [1161] = 4,
    ACTIONS(286), 1,
      sym__un_delimited_javascript_line,
    STATE(35), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(178), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(180), 15,
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
  [1189] = 3,
    STATE(41), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(223), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(221), 11,
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
  [1215] = 4,
    ACTIONS(288), 1,
      sym__indent,
    STATE(126), 1,
      sym_children,
    ACTIONS(243), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(241), 11,
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
  [1243] = 3,
    STATE(41), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(213), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(211), 11,
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
  [1269] = 5,
    ACTIONS(290), 1,
      sym_tag_name,
    ACTIONS(293), 2,
      sym_class,
      sym_id,
    STATE(41), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(170), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
    ACTIONS(168), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [1299] = 4,
    ACTIONS(296), 1,
      sym__indent,
    STATE(125), 1,
      sym_children,
    ACTIONS(249), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(247), 11,
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
  [1327] = 3,
    ACTIONS(302), 1,
      sym__dedent,
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
  [1353] = 4,
    ACTIONS(304), 1,
      sym__indent,
    STATE(115), 1,
      sym_children,
    ACTIONS(217), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(215), 11,
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
  [1381] = 4,
    ACTIONS(306), 1,
      sym__indent,
    STATE(115), 1,
      sym_children,
    ACTIONS(217), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(215), 11,
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
  [1409] = 5,
    ACTIONS(308), 1,
      ts_builtin_sym_end,
    ACTIONS(312), 1,
      sym__comment_content,
    ACTIONS(314), 1,
      sym__dedent,
    STATE(47), 1,
      aux_sym_comment_repeat1,
    ACTIONS(310), 15,
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
  [1439] = 4,
    ACTIONS(320), 1,
      sym__comment_content,
    STATE(47), 1,
      aux_sym_comment_repeat1,
    ACTIONS(316), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(318), 15,
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
  [1467] = 2,
    ACTIONS(325), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(323), 11,
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
  [1491] = 4,
    ACTIONS(304), 1,
      sym__indent,
    STATE(103), 1,
      sym_children,
    ACTIONS(227), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(225), 11,
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
  [1519] = 2,
    ACTIONS(249), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(247), 11,
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
  [1543] = 2,
    ACTIONS(249), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(247), 11,
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
  [1567] = 3,
    ACTIONS(331), 1,
      sym__dedent,
    ACTIONS(329), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(327), 10,
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
  [1593] = 2,
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
  [1617] = 2,
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
  [1641] = 2,
    ACTIONS(343), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(341), 11,
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
  [1665] = 2,
    ACTIONS(347), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(345), 11,
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
  [1689] = 2,
    ACTIONS(243), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(241), 11,
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
  [1713] = 2,
    ACTIONS(207), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(205), 11,
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
  [1737] = 2,
    ACTIONS(207), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(205), 11,
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
  [1761] = 2,
    ACTIONS(351), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(349), 11,
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
  [1785] = 4,
    ACTIONS(304), 1,
      sym__indent,
    STATE(120), 1,
      sym_children,
    ACTIONS(207), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(205), 11,
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
  [1813] = 2,
    ACTIONS(355), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(353), 11,
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
  [1837] = 2,
    ACTIONS(359), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(357), 11,
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
  [1861] = 2,
    ACTIONS(227), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(225), 11,
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
  [1885] = 2,
    ACTIONS(363), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(361), 11,
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
  [1909] = 3,
    ACTIONS(369), 1,
      sym__dedent,
    ACTIONS(367), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(365), 10,
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
  [1935] = 2,
    ACTIONS(373), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(371), 11,
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
  [1959] = 5,
    ACTIONS(312), 1,
      sym__comment_content,
    ACTIONS(375), 1,
      ts_builtin_sym_end,
    ACTIONS(379), 1,
      sym__dedent,
    STATE(47), 1,
      aux_sym_comment_repeat1,
    ACTIONS(377), 15,
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
  [1989] = 2,
    ACTIONS(227), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(225), 11,
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
  [2013] = 2,
    ACTIONS(383), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(381), 11,
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
  [2037] = 2,
    ACTIONS(217), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(215), 11,
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
  [2061] = 2,
    ACTIONS(217), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(215), 11,
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
  [2085] = 11,
    ACTIONS(17), 1,
      anon_sym_BANG_EQ,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(114), 1,
      anon_sym_PIPE,
    ACTIONS(118), 1,
      anon_sym_elseif,
    ACTIONS(120), 1,
      anon_sym_else,
    ACTIONS(122), 1,
      sym_tag_name,
    ACTIONS(385), 1,
      anon_sym_DOT,
    ACTIONS(116), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(124), 2,
      sym_class,
      sym_id,
    STATE(143), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(6), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2126] = 11,
    ACTIONS(100), 1,
      anon_sym_PIPE,
    ACTIONS(104), 1,
      anon_sym_elseif,
    ACTIONS(106), 1,
      anon_sym_else,
    ACTIONS(108), 1,
      sym_tag_name,
    ACTIONS(387), 1,
      anon_sym_BANG_EQ,
    ACTIONS(389), 1,
      anon_sym_EQ,
    ACTIONS(391), 1,
      anon_sym_DOT,
    ACTIONS(102), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(110), 2,
      sym_class,
      sym_id,
    STATE(64), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(5), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2167] = 11,
    ACTIONS(393), 1,
      anon_sym_PIPE,
    ACTIONS(397), 1,
      anon_sym_elseif,
    ACTIONS(399), 1,
      anon_sym_else,
    ACTIONS(401), 1,
      anon_sym_BANG_EQ,
    ACTIONS(403), 1,
      anon_sym_EQ,
    ACTIONS(405), 1,
      anon_sym_DOT,
    ACTIONS(407), 1,
      sym_tag_name,
    ACTIONS(395), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(409), 2,
      sym_class,
      sym_id,
    STATE(323), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(155), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2208] = 11,
    ACTIONS(393), 1,
      anon_sym_PIPE,
    ACTIONS(397), 1,
      anon_sym_elseif,
    ACTIONS(399), 1,
      anon_sym_else,
    ACTIONS(401), 1,
      anon_sym_BANG_EQ,
    ACTIONS(403), 1,
      anon_sym_EQ,
    ACTIONS(405), 1,
      anon_sym_DOT,
    ACTIONS(407), 1,
      sym_tag_name,
    ACTIONS(395), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(409), 2,
      sym_class,
      sym_id,
    STATE(320), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(155), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2249] = 2,
    ACTIONS(413), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(411), 10,
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
  [2272] = 11,
    ACTIONS(393), 1,
      anon_sym_PIPE,
    ACTIONS(397), 1,
      anon_sym_elseif,
    ACTIONS(399), 1,
      anon_sym_else,
    ACTIONS(407), 1,
      sym_tag_name,
    ACTIONS(415), 1,
      anon_sym_BANG_EQ,
    ACTIONS(417), 1,
      anon_sym_EQ,
    ACTIONS(419), 1,
      anon_sym_DOT,
    ACTIONS(395), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(409), 2,
      sym_class,
      sym_id,
    STATE(203), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(153), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2313] = 3,
    STATE(80), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(213), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(211), 10,
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
  [2338] = 5,
    ACTIONS(421), 1,
      sym_tag_name,
    ACTIONS(424), 2,
      sym_class,
      sym_id,
    STATE(80), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(170), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
    ACTIONS(168), 8,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [2367] = 4,
    ACTIONS(427), 1,
      sym__indent,
    ACTIONS(429), 1,
      sym__dedent,
    ACTIONS(259), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(257), 10,
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
  [2394] = 4,
    ACTIONS(431), 1,
      sym__indent,
    STATE(131), 1,
      sym_children,
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
  [2421] = 11,
    ACTIONS(17), 1,
      anon_sym_BANG_EQ,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(114), 1,
      anon_sym_PIPE,
    ACTIONS(118), 1,
      anon_sym_elseif,
    ACTIONS(120), 1,
      anon_sym_else,
    ACTIONS(122), 1,
      sym_tag_name,
    ACTIONS(385), 1,
      anon_sym_DOT,
    ACTIONS(116), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(124), 2,
      sym_class,
      sym_id,
    STATE(147), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(6), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2462] = 11,
    ACTIONS(393), 1,
      anon_sym_PIPE,
    ACTIONS(397), 1,
      anon_sym_elseif,
    ACTIONS(399), 1,
      anon_sym_else,
    ACTIONS(407), 1,
      sym_tag_name,
    ACTIONS(415), 1,
      anon_sym_BANG_EQ,
    ACTIONS(417), 1,
      anon_sym_EQ,
    ACTIONS(419), 1,
      anon_sym_DOT,
    ACTIONS(395), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(409), 2,
      sym_class,
      sym_id,
    STATE(187), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(153), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2503] = 2,
    ACTIONS(267), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(265), 10,
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
  [2526] = 4,
    ACTIONS(433), 1,
      sym__indent,
    STATE(151), 1,
      sym_children,
    ACTIONS(249), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(247), 10,
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
  [2553] = 11,
    ACTIONS(100), 1,
      anon_sym_PIPE,
    ACTIONS(104), 1,
      anon_sym_elseif,
    ACTIONS(106), 1,
      anon_sym_else,
    ACTIONS(108), 1,
      sym_tag_name,
    ACTIONS(387), 1,
      anon_sym_BANG_EQ,
    ACTIONS(389), 1,
      anon_sym_EQ,
    ACTIONS(391), 1,
      anon_sym_DOT,
    ACTIONS(102), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(110), 2,
      sym_class,
      sym_id,
    STATE(58), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(5), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2594] = 3,
    STATE(80), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(223), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(221), 10,
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
  [2619] = 11,
    ACTIONS(393), 1,
      anon_sym_PIPE,
    ACTIONS(397), 1,
      anon_sym_elseif,
    ACTIONS(399), 1,
      anon_sym_else,
    ACTIONS(407), 1,
      sym_tag_name,
    ACTIONS(415), 1,
      anon_sym_BANG_EQ,
    ACTIONS(417), 1,
      anon_sym_EQ,
    ACTIONS(419), 1,
      anon_sym_DOT,
    ACTIONS(395), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(409), 2,
      sym_class,
      sym_id,
    STATE(194), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(153), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2660] = 2,
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
      sym__un_delimited_javascript_line,
      anon_sym_DASH,
  [2683] = 11,
    ACTIONS(17), 1,
      anon_sym_BANG_EQ,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(114), 1,
      anon_sym_PIPE,
    ACTIONS(118), 1,
      anon_sym_elseif,
    ACTIONS(120), 1,
      anon_sym_else,
    ACTIONS(122), 1,
      sym_tag_name,
    ACTIONS(385), 1,
      anon_sym_DOT,
    ACTIONS(116), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(124), 2,
      sym_class,
      sym_id,
    STATE(142), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(6), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2724] = 4,
    ACTIONS(431), 1,
      sym__indent,
    STATE(129), 1,
      sym_children,
    ACTIONS(227), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(225), 10,
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
  [2751] = 4,
    ACTIONS(431), 1,
      sym__indent,
    STATE(130), 1,
      sym_children,
    ACTIONS(217), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(215), 10,
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
  [2778] = 11,
    ACTIONS(114), 1,
      anon_sym_PIPE,
    ACTIONS(118), 1,
      anon_sym_elseif,
    ACTIONS(120), 1,
      anon_sym_else,
    ACTIONS(122), 1,
      sym_tag_name,
    ACTIONS(435), 1,
      anon_sym_BANG_EQ,
    ACTIONS(437), 1,
      anon_sym_EQ,
    ACTIONS(439), 1,
      anon_sym_DOT,
    ACTIONS(116), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(124), 2,
      sym_class,
      sym_id,
    STATE(107), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(10), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2819] = 4,
    ACTIONS(441), 1,
      sym__indent,
    STATE(130), 1,
      sym_children,
    ACTIONS(217), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(215), 10,
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
  [2846] = 11,
    ACTIONS(100), 1,
      anon_sym_PIPE,
    ACTIONS(104), 1,
      anon_sym_elseif,
    ACTIONS(106), 1,
      anon_sym_else,
    ACTIONS(108), 1,
      sym_tag_name,
    ACTIONS(387), 1,
      anon_sym_BANG_EQ,
    ACTIONS(389), 1,
      anon_sym_EQ,
    ACTIONS(391), 1,
      anon_sym_DOT,
    ACTIONS(102), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(110), 2,
      sym_class,
      sym_id,
    STATE(72), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(5), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2887] = 4,
    ACTIONS(443), 1,
      sym__indent,
    STATE(141), 1,
      sym_children,
    ACTIONS(243), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(241), 10,
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
  [2914] = 11,
    ACTIONS(114), 1,
      anon_sym_PIPE,
    ACTIONS(118), 1,
      anon_sym_elseif,
    ACTIONS(120), 1,
      anon_sym_else,
    ACTIONS(122), 1,
      sym_tag_name,
    ACTIONS(435), 1,
      anon_sym_BANG_EQ,
    ACTIONS(437), 1,
      anon_sym_EQ,
    ACTIONS(439), 1,
      anon_sym_DOT,
    ACTIONS(116), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(124), 2,
      sym_class,
      sym_id,
    STATE(104), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(10), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2955] = 11,
    ACTIONS(114), 1,
      anon_sym_PIPE,
    ACTIONS(118), 1,
      anon_sym_elseif,
    ACTIONS(120), 1,
      anon_sym_else,
    ACTIONS(122), 1,
      sym_tag_name,
    ACTIONS(435), 1,
      anon_sym_BANG_EQ,
    ACTIONS(437), 1,
      anon_sym_EQ,
    ACTIONS(439), 1,
      anon_sym_DOT,
    ACTIONS(116), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(124), 2,
      sym_class,
      sym_id,
    STATE(113), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(10), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2996] = 4,
    ACTIONS(445), 1,
      sym__indent,
    ACTIONS(447), 1,
      sym__dedent,
    ACTIONS(259), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(257), 10,
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
  [3023] = 11,
    ACTIONS(393), 1,
      anon_sym_PIPE,
    ACTIONS(397), 1,
      anon_sym_elseif,
    ACTIONS(399), 1,
      anon_sym_else,
    ACTIONS(401), 1,
      anon_sym_BANG_EQ,
    ACTIONS(403), 1,
      anon_sym_EQ,
    ACTIONS(405), 1,
      anon_sym_DOT,
    ACTIONS(407), 1,
      sym_tag_name,
    ACTIONS(395), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(409), 2,
      sym_class,
      sym_id,
    STATE(334), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(155), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3064] = 2,
    ACTIONS(316), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(318), 16,
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
  [3087] = 2,
    ACTIONS(207), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(205), 11,
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
  [3109] = 2,
    ACTIONS(217), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(215), 11,
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
  [3131] = 2,
    ACTIONS(347), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(345), 11,
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
  [3153] = 3,
    ACTIONS(453), 1,
      sym__indent,
    ACTIONS(451), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(449), 10,
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
  [3177] = 2,
    ACTIONS(207), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(205), 11,
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
  [3199] = 3,
    ACTIONS(455), 1,
      sym__dedent,
    ACTIONS(367), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(365), 10,
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
  [3223] = 2,
    ACTIONS(355), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(353), 11,
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
  [3245] = 3,
    ACTIONS(457), 1,
      sym__dedent,
    ACTIONS(300), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(298), 10,
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
  [3269] = 3,
    ACTIONS(459), 1,
      sym__dedent,
    ACTIONS(329), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(327), 10,
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
  [3293] = 2,
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
  [3315] = 2,
    ACTIONS(227), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(225), 11,
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
  [3337] = 2,
    ACTIONS(363), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(361), 11,
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
  [3359] = 2,
    ACTIONS(227), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(225), 11,
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
  [3381] = 2,
    ACTIONS(359), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(357), 11,
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
  [3403] = 2,
    ACTIONS(351), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(349), 11,
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
  [3425] = 2,
    ACTIONS(383), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(381), 11,
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
  [3447] = 3,
    ACTIONS(461), 1,
      sym__dedent,
    ACTIONS(367), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(365), 10,
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
  [3471] = 2,
    ACTIONS(343), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(341), 11,
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
  [3493] = 2,
    ACTIONS(243), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(241), 11,
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
  [3515] = 2,
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
  [3537] = 2,
    ACTIONS(281), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(279), 11,
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
  [3559] = 3,
    ACTIONS(467), 1,
      sym__indent,
    ACTIONS(465), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(463), 10,
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
  [3583] = 2,
    ACTIONS(217), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(215), 11,
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
  [3605] = 2,
    ACTIONS(249), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(247), 11,
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
  [3627] = 2,
    ACTIONS(249), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(247), 11,
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
  [3649] = 2,
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
  [3670] = 2,
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
  [3691] = 2,
    ACTIONS(227), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(225), 10,
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
  [3712] = 2,
    ACTIONS(343), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(341), 10,
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
  [3733] = 2,
    ACTIONS(347), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(345), 10,
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
  [3754] = 2,
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
  [3775] = 2,
    ACTIONS(351), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(349), 10,
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
  [3796] = 2,
    ACTIONS(359), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(357), 10,
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
  [3817] = 2,
    ACTIONS(471), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(469), 10,
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
  [3838] = 2,
    ACTIONS(243), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(241), 10,
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
  [3859] = 2,
    ACTIONS(383), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(381), 10,
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
  [3880] = 2,
    ACTIONS(475), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(473), 10,
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
  [3901] = 2,
    ACTIONS(373), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(371), 10,
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
  [3922] = 2,
    ACTIONS(249), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(247), 10,
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
  [3943] = 2,
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
  [3964] = 2,
    ACTIONS(227), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(225), 10,
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
  [3985] = 2,
    ACTIONS(325), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(323), 10,
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
  [4006] = 2,
    ACTIONS(363), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(361), 10,
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
  [4027] = 2,
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
  [4048] = 2,
    ACTIONS(217), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(215), 10,
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
  [4069] = 2,
    ACTIONS(355), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(353), 10,
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
  [4090] = 2,
    ACTIONS(479), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(477), 10,
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
  [4111] = 2,
    ACTIONS(281), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(279), 10,
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
  [4132] = 2,
    ACTIONS(217), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(215), 10,
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
  [4153] = 2,
    ACTIONS(249), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(247), 10,
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
  [4174] = 9,
    ACTIONS(96), 1,
      sym__newline,
    ACTIONS(393), 1,
      anon_sym_PIPE,
    ACTIONS(397), 1,
      anon_sym_elseif,
    ACTIONS(399), 1,
      anon_sym_else,
    ACTIONS(407), 1,
      sym_tag_name,
    ACTIONS(481), 1,
      sym__dedent,
    ACTIONS(395), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(409), 2,
      sym_class,
      sym_id,
    STATE(154), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4208] = 8,
    ACTIONS(483), 1,
      anon_sym_PIPE,
    ACTIONS(489), 1,
      anon_sym_elseif,
    ACTIONS(492), 1,
      anon_sym_else,
    ACTIONS(495), 1,
      sym_tag_name,
    ACTIONS(74), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(486), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(498), 2,
      sym_class,
      sym_id,
    STATE(154), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4240] = 9,
    ACTIONS(96), 1,
      sym__newline,
    ACTIONS(393), 1,
      anon_sym_PIPE,
    ACTIONS(397), 1,
      anon_sym_elseif,
    ACTIONS(399), 1,
      anon_sym_else,
    ACTIONS(407), 1,
      sym_tag_name,
    ACTIONS(501), 1,
      sym__dedent,
    ACTIONS(395), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(409), 2,
      sym_class,
      sym_id,
    STATE(154), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4274] = 11,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(505), 1,
      anon_sym_BANG_EQ,
    ACTIONS(507), 1,
      anon_sym_EQ,
    ACTIONS(509), 1,
      anon_sym_,
    ACTIONS(511), 1,
      anon_sym_DOT,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(517), 1,
      sym__newline,
    STATE(206), 1,
      aux_sym_tag_repeat1,
    STATE(214), 1,
      sym_attributes,
    ACTIONS(515), 2,
      sym_class,
      sym_id,
    STATE(205), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4311] = 11,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
      anon_sym_COLON,
    ACTIONS(521), 1,
      anon_sym_BANG_EQ,
    ACTIONS(523), 1,
      anon_sym_EQ,
    ACTIONS(525), 1,
      anon_sym_,
    ACTIONS(527), 1,
      anon_sym_DOT,
    ACTIONS(531), 1,
      sym__newline,
    STATE(162), 1,
      aux_sym_tag_repeat1,
    STATE(212), 1,
      sym_attributes,
    ACTIONS(529), 2,
      sym_class,
      sym_id,
    STATE(310), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4348] = 11,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      anon_sym_COLON,
    ACTIONS(535), 1,
      anon_sym_BANG_EQ,
    ACTIONS(537), 1,
      anon_sym_EQ,
    ACTIONS(539), 1,
      anon_sym_,
    ACTIONS(541), 1,
      anon_sym_DOT,
    ACTIONS(543), 1,
      sym__newline,
    STATE(206), 1,
      aux_sym_tag_repeat1,
    STATE(209), 1,
      sym_attributes,
    ACTIONS(515), 2,
      sym_class,
      sym_id,
    STATE(50), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4385] = 11,
    ACTIONS(505), 1,
      anon_sym_BANG_EQ,
    ACTIONS(507), 1,
      anon_sym_EQ,
    ACTIONS(511), 1,
      anon_sym_DOT,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(545), 1,
      anon_sym_COLON,
    ACTIONS(547), 1,
      anon_sym_,
    ACTIONS(551), 1,
      sym__newline,
    STATE(156), 1,
      aux_sym_tag_repeat1,
    STATE(207), 1,
      sym_attributes,
    ACTIONS(549), 2,
      sym_class,
      sym_id,
    STATE(189), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4422] = 11,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(535), 1,
      anon_sym_BANG_EQ,
    ACTIONS(537), 1,
      anon_sym_EQ,
    ACTIONS(541), 1,
      anon_sym_DOT,
    ACTIONS(553), 1,
      anon_sym_COLON,
    ACTIONS(555), 1,
      anon_sym_,
    ACTIONS(559), 1,
      sym__newline,
    STATE(158), 1,
      aux_sym_tag_repeat1,
    STATE(215), 1,
      sym_attributes,
    ACTIONS(557), 2,
      sym_class,
      sym_id,
    STATE(57), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4459] = 11,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(561), 1,
      anon_sym_COLON,
    ACTIONS(563), 1,
      anon_sym_BANG_EQ,
    ACTIONS(565), 1,
      anon_sym_EQ,
    ACTIONS(567), 1,
      anon_sym_,
    ACTIONS(569), 1,
      anon_sym_DOT,
    ACTIONS(573), 1,
      sym__newline,
    STATE(165), 1,
      aux_sym_tag_repeat1,
    STATE(211), 1,
      sym_attributes,
    ACTIONS(571), 2,
      sym_class,
      sym_id,
    STATE(137), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4496] = 11,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(521), 1,
      anon_sym_BANG_EQ,
    ACTIONS(523), 1,
      anon_sym_EQ,
    ACTIONS(527), 1,
      anon_sym_DOT,
    ACTIONS(575), 1,
      anon_sym_COLON,
    ACTIONS(577), 1,
      anon_sym_,
    ACTIONS(579), 1,
      sym__newline,
    STATE(206), 1,
      aux_sym_tag_repeat1,
    STATE(213), 1,
      sym_attributes,
    ACTIONS(515), 2,
      sym_class,
      sym_id,
    STATE(314), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4533] = 11,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(581), 1,
      anon_sym_COLON,
    ACTIONS(583), 1,
      anon_sym_BANG_EQ,
    ACTIONS(585), 1,
      anon_sym_EQ,
    ACTIONS(587), 1,
      anon_sym_,
    ACTIONS(589), 1,
      anon_sym_DOT,
    ACTIONS(591), 1,
      sym__newline,
    STATE(206), 1,
      aux_sym_tag_repeat1,
    STATE(208), 1,
      sym_attributes,
    ACTIONS(515), 2,
      sym_class,
      sym_id,
    STATE(127), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4570] = 11,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_BANG_EQ,
    ACTIONS(585), 1,
      anon_sym_EQ,
    ACTIONS(589), 1,
      anon_sym_DOT,
    ACTIONS(593), 1,
      anon_sym_COLON,
    ACTIONS(595), 1,
      anon_sym_,
    ACTIONS(599), 1,
      sym__newline,
    STATE(163), 1,
      aux_sym_tag_repeat1,
    STATE(210), 1,
      sym_attributes,
    ACTIONS(597), 2,
      sym_class,
      sym_id,
    STATE(121), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4607] = 11,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(563), 1,
      anon_sym_BANG_EQ,
    ACTIONS(565), 1,
      anon_sym_EQ,
    ACTIONS(569), 1,
      anon_sym_DOT,
    ACTIONS(601), 1,
      anon_sym_COLON,
    ACTIONS(603), 1,
      anon_sym_,
    ACTIONS(605), 1,
      sym__newline,
    STATE(206), 1,
      aux_sym_tag_repeat1,
    STATE(216), 1,
      sym_attributes,
    ACTIONS(515), 2,
      sym_class,
      sym_id,
    STATE(152), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4644] = 7,
    ACTIONS(393), 1,
      anon_sym_PIPE,
    ACTIONS(397), 1,
      anon_sym_elseif,
    ACTIONS(399), 1,
      anon_sym_else,
    ACTIONS(407), 1,
      sym_tag_name,
    ACTIONS(395), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(409), 2,
      sym_class,
      sym_id,
    STATE(155), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4672] = 7,
    ACTIONS(114), 1,
      anon_sym_PIPE,
    ACTIONS(118), 1,
      anon_sym_elseif,
    ACTIONS(120), 1,
      anon_sym_else,
    ACTIONS(122), 1,
      sym_tag_name,
    ACTIONS(116), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(124), 2,
      sym_class,
      sym_id,
    STATE(6), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4700] = 7,
    ACTIONS(100), 1,
      anon_sym_PIPE,
    ACTIONS(104), 1,
      anon_sym_elseif,
    ACTIONS(106), 1,
      anon_sym_else,
    ACTIONS(108), 1,
      sym_tag_name,
    ACTIONS(102), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(110), 2,
      sym_class,
      sym_id,
    STATE(5), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4728] = 7,
    ACTIONS(393), 1,
      anon_sym_PIPE,
    ACTIONS(397), 1,
      anon_sym_elseif,
    ACTIONS(399), 1,
      anon_sym_else,
    ACTIONS(407), 1,
      sym_tag_name,
    ACTIONS(395), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(409), 2,
      sym_class,
      sym_id,
    STATE(153), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4756] = 7,
    ACTIONS(114), 1,
      anon_sym_PIPE,
    ACTIONS(118), 1,
      anon_sym_elseif,
    ACTIONS(120), 1,
      anon_sym_else,
    ACTIONS(122), 1,
      sym_tag_name,
    ACTIONS(116), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(124), 2,
      sym_class,
      sym_id,
    STATE(10), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4784] = 3,
    STATE(176), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(223), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(221), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [4803] = 3,
    STATE(176), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(213), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(211), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [4822] = 6,
    ACTIONS(607), 1,
      anon_sym_EQ,
    ACTIONS(609), 1,
      anon_sym_,
    ACTIONS(611), 1,
      anon_sym_DOT,
    STATE(286), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(613), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(369), 6,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
  [4847] = 4,
    ACTIONS(615), 1,
      sym__indent,
    STATE(201), 1,
      sym_children,
    ACTIONS(217), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(215), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [4868] = 4,
    ACTIONS(617), 1,
      sym__indent,
    STATE(201), 1,
      sym_children,
    ACTIONS(217), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(215), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [4889] = 5,
    ACTIONS(619), 1,
      sym_tag_name,
    ACTIONS(622), 2,
      sym_class,
      sym_id,
    STATE(176), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(170), 3,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
    ACTIONS(168), 4,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
  [4912] = 4,
    ACTIONS(625), 1,
      sym__indent,
    STATE(204), 1,
      sym_children,
    ACTIONS(249), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(247), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [4933] = 6,
    ACTIONS(607), 1,
      anon_sym_EQ,
    ACTIONS(611), 1,
      anon_sym_DOT,
    ACTIONS(627), 1,
      anon_sym_,
    STATE(173), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(629), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(385), 6,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
  [4958] = 4,
    ACTIONS(617), 1,
      sym__indent,
    STATE(193), 1,
      sym_children,
    ACTIONS(227), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(225), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [4979] = 4,
    ACTIONS(617), 1,
      sym__indent,
    STATE(197), 1,
      sym_children,
    ACTIONS(207), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(205), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5000] = 4,
    ACTIONS(631), 1,
      sym__indent,
    STATE(188), 1,
      sym_children,
    ACTIONS(243), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(241), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5021] = 8,
    ACTIONS(633), 1,
      anon_sym_RPAREN,
    ACTIONS(635), 1,
      aux_sym__attribute_token1,
    STATE(178), 1,
      sym_attribute_name,
    STATE(185), 1,
      aux_sym_attributes_repeat1,
    STATE(356), 1,
      sym_angular_attribute_name,
    STATE(377), 1,
      sym_attribute,
    STATE(363), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(637), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [5049] = 8,
    ACTIONS(639), 1,
      anon_sym_RPAREN,
    ACTIONS(641), 1,
      aux_sym__attribute_token1,
    STATE(178), 1,
      sym_attribute_name,
    STATE(183), 1,
      aux_sym_attributes_repeat1,
    STATE(356), 1,
      sym_angular_attribute_name,
    STATE(401), 1,
      sym_attribute,
    STATE(363), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(644), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [5077] = 4,
    ACTIONS(647), 1,
      sym__indent,
    ACTIONS(649), 1,
      sym__dedent,
    ACTIONS(259), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(257), 5,
      sym__newline,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5097] = 8,
    ACTIONS(635), 1,
      aux_sym__attribute_token1,
    ACTIONS(651), 1,
      anon_sym_RPAREN,
    STATE(178), 1,
      sym_attribute_name,
    STATE(183), 1,
      aux_sym_attributes_repeat1,
    STATE(356), 1,
      sym_angular_attribute_name,
    STATE(387), 1,
      sym_attribute,
    STATE(363), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(637), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [5125] = 2,
    ACTIONS(351), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(349), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5140] = 2,
    ACTIONS(217), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(215), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5155] = 2,
    ACTIONS(249), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(247), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5170] = 2,
    ACTIONS(243), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(241), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5185] = 2,
    ACTIONS(383), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(381), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5200] = 2,
    ACTIONS(359), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(357), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5215] = 2,
    ACTIONS(355), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(353), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5230] = 2,
    ACTIONS(207), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(205), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5245] = 2,
    ACTIONS(207), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(205), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5260] = 2,
    ACTIONS(347), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(345), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5275] = 3,
    ACTIONS(653), 1,
      sym__dedent,
    ACTIONS(367), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(365), 5,
      sym__newline,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5292] = 2,
    ACTIONS(343), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(341), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5307] = 2,
    ACTIONS(339), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(337), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5322] = 2,
    ACTIONS(335), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(333), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5337] = 2,
    ACTIONS(363), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(361), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5352] = 2,
    ACTIONS(227), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(225), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5367] = 2,
    ACTIONS(281), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(279), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5382] = 2,
    ACTIONS(227), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(225), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5397] = 2,
    ACTIONS(217), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(215), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5412] = 2,
    ACTIONS(249), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(247), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5427] = 4,
    STATE(206), 1,
      aux_sym_tag_repeat1,
    ACTIONS(657), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(659), 2,
      sym_class,
      sym_id,
    ACTIONS(655), 5,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LPAREN,
  [5446] = 7,
    ACTIONS(503), 1,
      anon_sym_COLON,
    ACTIONS(505), 1,
      anon_sym_BANG_EQ,
    ACTIONS(507), 1,
      anon_sym_EQ,
    ACTIONS(509), 1,
      anon_sym_,
    ACTIONS(511), 1,
      anon_sym_DOT,
    ACTIONS(517), 1,
      sym__newline,
    STATE(205), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5470] = 7,
    ACTIONS(583), 1,
      anon_sym_BANG_EQ,
    ACTIONS(585), 1,
      anon_sym_EQ,
    ACTIONS(589), 1,
      anon_sym_DOT,
    ACTIONS(662), 1,
      anon_sym_COLON,
    ACTIONS(664), 1,
      anon_sym_,
    ACTIONS(666), 1,
      sym__newline,
    STATE(104), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5494] = 7,
    ACTIONS(535), 1,
      anon_sym_BANG_EQ,
    ACTIONS(537), 1,
      anon_sym_EQ,
    ACTIONS(541), 1,
      anon_sym_DOT,
    ACTIONS(668), 1,
      anon_sym_COLON,
    ACTIONS(670), 1,
      anon_sym_,
    ACTIONS(672), 1,
      sym__newline,
    STATE(72), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5518] = 7,
    ACTIONS(581), 1,
      anon_sym_COLON,
    ACTIONS(583), 1,
      anon_sym_BANG_EQ,
    ACTIONS(585), 1,
      anon_sym_EQ,
    ACTIONS(587), 1,
      anon_sym_,
    ACTIONS(589), 1,
      anon_sym_DOT,
    ACTIONS(591), 1,
      sym__newline,
    STATE(127), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5542] = 7,
    ACTIONS(563), 1,
      anon_sym_BANG_EQ,
    ACTIONS(565), 1,
      anon_sym_EQ,
    ACTIONS(569), 1,
      anon_sym_DOT,
    ACTIONS(601), 1,
      anon_sym_COLON,
    ACTIONS(603), 1,
      anon_sym_,
    ACTIONS(605), 1,
      sym__newline,
    STATE(152), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5566] = 7,
    ACTIONS(521), 1,
      anon_sym_BANG_EQ,
    ACTIONS(523), 1,
      anon_sym_EQ,
    ACTIONS(527), 1,
      anon_sym_DOT,
    ACTIONS(575), 1,
      anon_sym_COLON,
    ACTIONS(577), 1,
      anon_sym_,
    ACTIONS(579), 1,
      sym__newline,
    STATE(314), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5590] = 7,
    ACTIONS(521), 1,
      anon_sym_BANG_EQ,
    ACTIONS(523), 1,
      anon_sym_EQ,
    ACTIONS(527), 1,
      anon_sym_DOT,
    ACTIONS(674), 1,
      anon_sym_COLON,
    ACTIONS(676), 1,
      anon_sym_,
    ACTIONS(678), 1,
      sym__newline,
    STATE(320), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5614] = 7,
    ACTIONS(505), 1,
      anon_sym_BANG_EQ,
    ACTIONS(507), 1,
      anon_sym_EQ,
    ACTIONS(511), 1,
      anon_sym_DOT,
    ACTIONS(680), 1,
      anon_sym_COLON,
    ACTIONS(682), 1,
      anon_sym_,
    ACTIONS(684), 1,
      sym__newline,
    STATE(187), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5638] = 7,
    ACTIONS(533), 1,
      anon_sym_COLON,
    ACTIONS(535), 1,
      anon_sym_BANG_EQ,
    ACTIONS(537), 1,
      anon_sym_EQ,
    ACTIONS(539), 1,
      anon_sym_,
    ACTIONS(541), 1,
      anon_sym_DOT,
    ACTIONS(543), 1,
      sym__newline,
    STATE(50), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5662] = 7,
    ACTIONS(563), 1,
      anon_sym_BANG_EQ,
    ACTIONS(565), 1,
      anon_sym_EQ,
    ACTIONS(569), 1,
      anon_sym_DOT,
    ACTIONS(686), 1,
      anon_sym_COLON,
    ACTIONS(688), 1,
      anon_sym_,
    ACTIONS(690), 1,
      sym__newline,
    STATE(147), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5686] = 7,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(698), 1,
      sym__dedent,
    STATE(226), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(264), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5709] = 7,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(700), 1,
      sym__dedent,
    STATE(226), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(264), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5732] = 7,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(702), 1,
      sym__dedent,
    STATE(226), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(264), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5755] = 7,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(704), 1,
      sym__dedent,
    STATE(226), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(264), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5778] = 7,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(706), 1,
      sym__dedent,
    STATE(226), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(264), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5801] = 8,
    ACTIONS(708), 1,
      aux_sym__ternary_attribute_value_token1,
    ACTIONS(710), 1,
      aux_sym__variable_attribute_value_token1,
    ACTIONS(712), 1,
      aux_sym__object_attribute_value_token1,
    ACTIONS(714), 1,
      aux_sym__template_attribute_value_token1,
    ACTIONS(716), 1,
      aux_sym__array_attribute_value_token1,
    ACTIONS(718), 1,
      anon_sym_SQUOTE,
    ACTIONS(720), 1,
      anon_sym_DQUOTE,
    STATE(391), 1,
      sym_quoted_attribute_value,
  [5826] = 7,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(722), 1,
      sym__dedent,
    STATE(226), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(264), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5849] = 7,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(724), 1,
      sym__dedent,
    STATE(226), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(264), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5872] = 7,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(726), 1,
      sym__dedent,
    STATE(226), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(264), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5895] = 7,
    ACTIONS(728), 1,
      aux_sym_content_token1,
    ACTIONS(731), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(734), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(737), 1,
      sym__dedent,
    STATE(226), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(264), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5918] = 7,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(739), 1,
      sym__dedent,
    STATE(226), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(264), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5941] = 7,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(741), 1,
      sym__dedent,
    STATE(226), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(264), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5964] = 6,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(743), 1,
      sym__newline,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(267), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5984] = 6,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(221), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(264), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6004] = 4,
    ACTIONS(747), 1,
      sym__newline,
    ACTIONS(749), 1,
      sym__dedent,
    STATE(265), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(745), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [6020] = 6,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(217), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(264), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6040] = 6,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(751), 1,
      sym__newline,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(267), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6060] = 3,
    ACTIONS(753), 1,
      sym__indent,
    STATE(311), 1,
      sym_children,
    ACTIONS(241), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [6074] = 6,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(755), 1,
      sym__newline,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(267), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6094] = 6,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(218), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(264), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6114] = 6,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(757), 1,
      sym__newline,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(229), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6134] = 3,
    ACTIONS(759), 1,
      sym__indent,
    STATE(302), 1,
      sym_children,
    ACTIONS(247), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [6148] = 6,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(227), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(264), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6168] = 6,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(761), 1,
      sym__newline,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(267), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6188] = 6,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(763), 1,
      sym__newline,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(267), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6208] = 3,
    ACTIONS(765), 1,
      sym__indent,
    STATE(322), 1,
      sym_children,
    ACTIONS(215), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [6222] = 6,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(767), 1,
      sym__newline,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(267), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6242] = 3,
    ACTIONS(769), 1,
      sym__indent,
    STATE(322), 1,
      sym_children,
    ACTIONS(215), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [6256] = 6,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(771), 1,
      sym__newline,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(267), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6276] = 4,
    ACTIONS(747), 1,
      sym__newline,
    ACTIONS(773), 1,
      sym__dedent,
    STATE(265), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(745), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [6292] = 6,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(775), 1,
      sym__newline,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(267), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6312] = 6,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(777), 1,
      sym__newline,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(267), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6332] = 3,
    ACTIONS(765), 1,
      sym__indent,
    STATE(327), 1,
      sym_children,
    ACTIONS(225), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [6346] = 6,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(779), 1,
      sym__newline,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(267), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6366] = 6,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(220), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(264), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6386] = 6,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(781), 1,
      sym__newline,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(267), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6406] = 6,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(783), 1,
      sym__newline,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(252), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6426] = 3,
    ACTIONS(765), 1,
      sym__indent,
    STATE(333), 1,
      sym_children,
    ACTIONS(205), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [6440] = 6,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(785), 1,
      sym__newline,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(267), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6460] = 6,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(787), 1,
      sym__newline,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(267), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6480] = 4,
    ACTIONS(747), 1,
      sym__newline,
    ACTIONS(789), 1,
      sym__dedent,
    STATE(265), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(745), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [6496] = 6,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(224), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(264), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6516] = 4,
    ACTIONS(747), 1,
      sym__newline,
    ACTIONS(791), 1,
      sym__dedent,
    STATE(265), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(745), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [6532] = 6,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(793), 1,
      sym__newline,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(267), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6552] = 6,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(223), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(264), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6572] = 6,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(795), 1,
      sym__newline,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(245), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6592] = 6,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(797), 1,
      sym__newline,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(267), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6612] = 6,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(799), 1,
      sym__newline,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(267), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6632] = 4,
    ACTIONS(804), 1,
      sym__newline,
    ACTIONS(807), 1,
      sym__dedent,
    STATE(265), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(801), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [6648] = 6,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(809), 1,
      sym__newline,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(267), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6668] = 6,
    ACTIONS(811), 1,
      aux_sym_content_token1,
    ACTIONS(814), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(817), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(820), 1,
      sym__newline,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(267), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6688] = 6,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(822), 1,
      sym__newline,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(267), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6708] = 6,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(225), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(264), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6728] = 6,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(219), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(264), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6748] = 6,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(824), 1,
      sym__newline,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(267), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6768] = 4,
    ACTIONS(747), 1,
      sym__newline,
    ACTIONS(826), 1,
      sym__dedent,
    STATE(265), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(745), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [6784] = 6,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(228), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(264), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6804] = 6,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(828), 1,
      sym__newline,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(267), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6824] = 6,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(830), 1,
      sym__newline,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(274), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6844] = 5,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(235), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6861] = 5,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(248), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6878] = 2,
    ACTIONS(834), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(832), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [6889] = 3,
    ACTIONS(836), 1,
      sym__indent,
    ACTIONS(838), 1,
      sym__dedent,
    ACTIONS(257), 4,
      sym__newline,
      sym_tag_name,
      sym_class,
      sym_id,
  [6902] = 5,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(247), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6919] = 3,
    ACTIONS(840), 1,
      sym__newline,
    STATE(246), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(745), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [6932] = 3,
    ACTIONS(842), 1,
      sym__newline,
    STATE(259), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(745), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [6945] = 5,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(240), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6962] = 5,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(260), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6979] = 2,
    ACTIONS(846), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(844), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [6990] = 4,
    ACTIONS(850), 1,
      anon_sym_,
    ACTIONS(852), 1,
      anon_sym_DOT,
    STATE(286), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(848), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7005] = 2,
    ACTIONS(857), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(855), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [7016] = 5,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(256), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7033] = 5,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(250), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7050] = 4,
    ACTIONS(861), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      anon_sym_LBRACE,
    ACTIONS(859), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(865), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [7065] = 3,
    ACTIONS(867), 1,
      sym__newline,
    STATE(231), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(745), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7078] = 5,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(233), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7095] = 5,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(271), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7112] = 3,
    ACTIONS(869), 1,
      sym__newline,
    STATE(257), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(745), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7125] = 5,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(241), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7142] = 5,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(266), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7159] = 5,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(243), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7176] = 5,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(255), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7193] = 3,
    ACTIONS(871), 1,
      sym__newline,
    STATE(272), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(745), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7206] = 5,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(263), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7223] = 5,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(694), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(696), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(324), 1,
      aux_sym_content_repeat1,
    STATE(268), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7240] = 1,
    ACTIONS(215), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7248] = 4,
    ACTIONS(873), 1,
      anon_sym_when,
    ACTIONS(875), 1,
      anon_sym_default,
    STATE(11), 1,
      sym__when_keyword,
    STATE(24), 2,
      sym_when,
      aux_sym_case_repeat1,
  [7262] = 2,
    STATE(88), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(27), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7272] = 2,
    ACTIONS(877), 1,
      sym__dedent,
    ACTIONS(365), 4,
      sym__newline,
      sym_tag_name,
      sym_class,
      sym_id,
  [7282] = 1,
    ACTIONS(639), 5,
      anon_sym_RPAREN,
      aux_sym__attribute_token1,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [7290] = 4,
    ACTIONS(879), 1,
      aux_sym_content_token1,
    ACTIONS(884), 1,
      sym__newline,
    STATE(307), 1,
      aux_sym_content_repeat1,
    ACTIONS(882), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [7304] = 1,
    ACTIONS(357), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7312] = 1,
    ACTIONS(349), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7320] = 1,
    ACTIONS(241), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7328] = 1,
    ACTIONS(247), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7336] = 2,
    STATE(38), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(124), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7346] = 2,
    STATE(19), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(110), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7356] = 1,
    ACTIONS(247), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7364] = 3,
    ACTIONS(886), 1,
      anon_sym_LBRACE,
    ACTIONS(882), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(884), 2,
      sym__newline,
      aux_sym_content_token1,
  [7376] = 2,
    ACTIONS(890), 1,
      anon_sym_,
    ACTIONS(888), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7386] = 2,
    STATE(40), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(124), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7396] = 2,
    STATE(21), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(110), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7406] = 1,
    ACTIONS(279), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7414] = 1,
    ACTIONS(215), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7422] = 1,
    ACTIONS(381), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7430] = 1,
    ACTIONS(225), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7438] = 1,
    ACTIONS(225), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7446] = 4,
    ACTIONS(692), 1,
      aux_sym_content_token1,
    ACTIONS(894), 1,
      sym__newline,
    STATE(307), 1,
      aux_sym_content_repeat1,
    ACTIONS(892), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [7460] = 1,
    ACTIONS(353), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7468] = 2,
    STATE(79), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(27), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7478] = 1,
    ACTIONS(205), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7486] = 2,
    STATE(172), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(409), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7496] = 2,
    ACTIONS(898), 1,
      anon_sym_,
    ACTIONS(896), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7506] = 1,
    ACTIONS(345), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7514] = 1,
    ACTIONS(337), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7522] = 2,
    STATE(171), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(409), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7532] = 1,
    ACTIONS(341), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7540] = 1,
    ACTIONS(205), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7548] = 2,
    STATE(104), 1,
      sym_tag,
    ACTIONS(124), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7557] = 4,
    ACTIONS(900), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(902), 1,
      sym__newline,
    STATE(110), 1,
      sym__single_line_buf_code,
    STATE(410), 1,
      sym__un_delimited_javascript,
  [7570] = 2,
    STATE(113), 1,
      sym_tag,
    ACTIONS(124), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7579] = 2,
    STATE(203), 1,
      sym_tag,
    ACTIONS(409), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7588] = 2,
    ACTIONS(904), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(906), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [7597] = 2,
    STATE(152), 1,
      sym_tag,
    ACTIONS(27), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7606] = 2,
    STATE(143), 1,
      sym_tag,
    ACTIONS(27), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7615] = 2,
    STATE(187), 1,
      sym_tag,
    ACTIONS(409), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7624] = 2,
    STATE(205), 1,
      sym_tag,
    ACTIONS(409), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7633] = 2,
    STATE(64), 1,
      sym_tag,
    ACTIONS(110), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7642] = 2,
    ACTIONS(737), 2,
      sym__dedent,
      aux_sym_content_token1,
    ACTIONS(908), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [7651] = 2,
    STATE(72), 1,
      sym_tag,
    ACTIONS(110), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7660] = 2,
    ACTIONS(882), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(884), 2,
      sym__newline,
      aux_sym_content_token1,
  [7669] = 2,
    STATE(50), 1,
      sym_tag,
    ACTIONS(110), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7678] = 2,
    STATE(314), 1,
      sym_tag,
    ACTIONS(745), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7687] = 4,
    ACTIONS(910), 1,
      aux_sym_script_block_token1,
    ACTIONS(913), 1,
      sym__newline,
    ACTIONS(916), 1,
      sym__dedent,
    STATE(350), 1,
      aux_sym_script_block_repeat1,
  [7700] = 2,
    STATE(147), 1,
      sym_tag,
    ACTIONS(27), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7709] = 2,
    STATE(127), 1,
      sym_tag,
    ACTIONS(124), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7718] = 2,
    ACTIONS(920), 1,
      anon_sym_,
    ACTIONS(918), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7727] = 2,
    STATE(320), 1,
      sym_tag,
    ACTIONS(745), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7736] = 2,
    ACTIONS(922), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(924), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [7745] = 3,
    ACTIONS(926), 1,
      anon_sym_EQ,
    ACTIONS(928), 1,
      anon_sym_,
    ACTIONS(930), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7756] = 4,
    ACTIONS(932), 1,
      aux_sym_script_block_token1,
    ACTIONS(934), 1,
      sym__newline,
    ACTIONS(936), 1,
      sym__dedent,
    STATE(350), 1,
      aux_sym_script_block_repeat1,
  [7769] = 2,
    STATE(323), 1,
      sym_tag,
    ACTIONS(745), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7778] = 4,
    ACTIONS(900), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(938), 1,
      sym__newline,
    STATE(43), 1,
      sym__single_line_buf_code,
    STATE(417), 1,
      sym__un_delimited_javascript,
  [7791] = 3,
    ACTIONS(900), 1,
      sym__un_delimited_javascript_line,
    STATE(309), 1,
      sym__single_line_buf_code,
    STATE(430), 1,
      sym__un_delimited_javascript,
  [7801] = 2,
    ACTIONS(940), 1,
      anon_sym_,
    ACTIONS(942), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7809] = 1,
    ACTIONS(944), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [7815] = 2,
    ACTIONS(946), 1,
      anon_sym_,
    ACTIONS(948), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7823] = 1,
    ACTIONS(950), 3,
      sym__newline,
      sym__dedent,
      aux_sym_script_block_token1,
  [7829] = 1,
    ACTIONS(916), 3,
      sym__newline,
      sym__dedent,
      aux_sym_script_block_token1,
  [7835] = 1,
    ACTIONS(952), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7841] = 2,
    ACTIONS(954), 1,
      anon_sym_,
    ACTIONS(956), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7849] = 3,
    ACTIONS(900), 1,
      sym__un_delimited_javascript_line,
    STATE(60), 1,
      sym__single_line_buf_code,
    STATE(417), 1,
      sym__un_delimited_javascript,
  [7859] = 2,
    ACTIONS(958), 1,
      anon_sym_,
    ACTIONS(960), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7867] = 3,
    ACTIONS(932), 1,
      aux_sym_script_block_token1,
    ACTIONS(934), 1,
      sym__newline,
    STATE(357), 1,
      aux_sym_script_block_repeat1,
  [7877] = 3,
    ACTIONS(900), 1,
      sym__un_delimited_javascript_line,
    STATE(117), 1,
      sym__single_line_buf_code,
    STATE(410), 1,
      sym__un_delimited_javascript,
  [7887] = 2,
    ACTIONS(962), 1,
      anon_sym_,
    ACTIONS(964), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7895] = 3,
    ACTIONS(900), 1,
      sym__un_delimited_javascript_line,
    STATE(116), 1,
      sym__single_line_buf_code,
    STATE(410), 1,
      sym__un_delimited_javascript,
  [7905] = 2,
    ACTIONS(966), 1,
      anon_sym_,
    ACTIONS(968), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7913] = 2,
    ACTIONS(970), 1,
      anon_sym_,
    ACTIONS(972), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7921] = 3,
    ACTIONS(900), 1,
      sym__un_delimited_javascript_line,
    STATE(63), 1,
      sym__single_line_buf_code,
    STATE(417), 1,
      sym__un_delimited_javascript,
  [7931] = 3,
    ACTIONS(974), 1,
      anon_sym_,
    ACTIONS(976), 1,
      anon_sym_COMMA,
    ACTIONS(978), 1,
      anon_sym_RPAREN,
  [7941] = 2,
    ACTIONS(980), 1,
      anon_sym_,
    ACTIONS(982), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7949] = 3,
    ACTIONS(900), 1,
      sym__un_delimited_javascript_line,
    STATE(308), 1,
      sym__single_line_buf_code,
    STATE(430), 1,
      sym__un_delimited_javascript,
  [7959] = 3,
    ACTIONS(984), 1,
      anon_sym_SQUOTE,
    ACTIONS(986), 1,
      anon_sym_DQUOTE,
    STATE(367), 1,
      sym_quoted_javascript,
  [7969] = 3,
    ACTIONS(900), 1,
      sym__un_delimited_javascript_line,
    STATE(191), 1,
      sym__single_line_buf_code,
    STATE(422), 1,
      sym__un_delimited_javascript,
  [7979] = 3,
    ACTIONS(900), 1,
      sym__un_delimited_javascript_line,
    STATE(186), 1,
      sym__single_line_buf_code,
    STATE(422), 1,
      sym__un_delimited_javascript,
  [7989] = 3,
    ACTIONS(900), 1,
      sym__un_delimited_javascript_line,
    STATE(134), 1,
      sym__single_line_buf_code,
    STATE(420), 1,
      sym__un_delimited_javascript,
  [7999] = 2,
    ACTIONS(988), 1,
      anon_sym_,
    ACTIONS(990), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8007] = 2,
    ACTIONS(609), 1,
      anon_sym_,
    ACTIONS(613), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8015] = 3,
    ACTIONS(900), 1,
      sym__un_delimited_javascript_line,
    STATE(135), 1,
      sym__single_line_buf_code,
    STATE(420), 1,
      sym__un_delimited_javascript,
  [8025] = 3,
    ACTIONS(974), 1,
      anon_sym_,
    ACTIONS(976), 1,
      anon_sym_COMMA,
    ACTIONS(992), 1,
      anon_sym_RPAREN,
  [8035] = 2,
    ACTIONS(994), 1,
      anon_sym_,
    ACTIONS(996), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8043] = 2,
    ACTIONS(998), 1,
      anon_sym_,
    ACTIONS(1000), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8051] = 2,
    ACTIONS(1002), 1,
      anon_sym_,
    ACTIONS(1004), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8059] = 2,
    ACTIONS(1006), 1,
      anon_sym_,
    ACTIONS(1008), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8067] = 3,
    ACTIONS(1010), 1,
      sym__un_delimited_javascript_line,
    STATE(13), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(52), 1,
      sym__multi_line_buf_code,
  [8077] = 3,
    ACTIONS(1012), 1,
      sym__un_delimited_javascript_line,
    STATE(37), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(111), 1,
      sym__multi_line_buf_code,
  [8087] = 2,
    ACTIONS(1014), 1,
      anon_sym_DQUOTE,
    ACTIONS(1016), 1,
      aux_sym_quoted_javascript_token2,
  [8094] = 2,
    ACTIONS(1018), 1,
      sym__un_delimited_javascript_line,
    STATE(328), 1,
      sym__un_delimited_javascript,
  [8101] = 2,
    ACTIONS(1018), 1,
      sym__un_delimited_javascript_line,
    STATE(326), 1,
      sym__un_delimited_javascript,
  [8108] = 2,
    ACTIONS(1020), 1,
      sym__comment_content,
    STATE(46), 1,
      aux_sym_comment_repeat1,
  [8115] = 2,
    ACTIONS(1018), 1,
      sym__un_delimited_javascript_line,
    STATE(317), 1,
      sym__un_delimited_javascript,
  [8122] = 2,
    ACTIONS(1014), 1,
      anon_sym_SQUOTE,
    ACTIONS(1022), 1,
      aux_sym_quoted_javascript_token1,
  [8129] = 2,
    ACTIONS(1020), 1,
      sym__comment_content,
    STATE(68), 1,
      aux_sym_comment_repeat1,
  [8136] = 2,
    ACTIONS(974), 1,
      anon_sym_,
    ACTIONS(976), 1,
      anon_sym_COMMA,
  [8143] = 2,
    ACTIONS(1018), 1,
      sym__un_delimited_javascript_line,
    STATE(313), 1,
      sym__un_delimited_javascript,
  [8150] = 2,
    ACTIONS(1024), 1,
      sym__comment_content,
    ACTIONS(1026), 1,
      sym__newline,
  [8157] = 2,
    ACTIONS(1028), 1,
      anon_sym_DQUOTE,
    ACTIONS(1030), 1,
      aux_sym_quoted_javascript_token2,
  [8164] = 2,
    ACTIONS(1028), 1,
      anon_sym_SQUOTE,
    ACTIONS(1032), 1,
      aux_sym_quoted_javascript_token1,
  [8171] = 1,
    ACTIONS(1034), 1,
      sym__indent,
  [8175] = 1,
    ACTIONS(1036), 1,
      sym__newline,
  [8179] = 1,
    ACTIONS(1038), 1,
      anon_sym_RBRACE,
  [8183] = 1,
    ACTIONS(1040), 1,
      aux_sym_unbuffered_code_token1,
  [8187] = 1,
    ACTIONS(1042), 1,
      sym__newline,
  [8191] = 1,
    ACTIONS(1044), 1,
      sym__indent,
  [8195] = 1,
    ACTIONS(1046), 1,
      sym__indent,
  [8199] = 1,
    ACTIONS(1048), 1,
      sym__delimited_javascript,
  [8203] = 1,
    ACTIONS(1050), 1,
      sym__delimited_javascript,
  [8207] = 1,
    ACTIONS(1052), 1,
      sym__indent,
  [8211] = 1,
    ACTIONS(1054), 1,
      sym__newline,
  [8215] = 1,
    ACTIONS(1056), 1,
      sym__newline,
  [8219] = 1,
    ACTIONS(1058), 1,
      sym__un_delimited_javascript_line,
  [8223] = 1,
    ACTIONS(1060), 1,
      sym__newline,
  [8227] = 1,
    ACTIONS(1062), 1,
      sym__newline,
  [8231] = 1,
    ACTIONS(1064), 1,
      aux_sym__when_keyword_token1,
  [8235] = 1,
    ACTIONS(1066), 1,
      sym__newline,
  [8239] = 1,
    ACTIONS(1068), 1,
      sym__newline,
  [8243] = 1,
    ACTIONS(1070), 1,
      sym__newline,
  [8247] = 1,
    ACTIONS(1072), 1,
      ts_builtin_sym_end,
  [8251] = 1,
    ACTIONS(1074), 1,
      sym__indent,
  [8255] = 1,
    ACTIONS(1076), 1,
      aux_sym__attribute_token1,
  [8259] = 1,
    ACTIONS(952), 1,
      sym__newline,
  [8263] = 1,
    ACTIONS(1078), 1,
      sym__newline,
  [8267] = 1,
    ACTIONS(1080), 1,
      sym__newline,
  [8271] = 1,
    ACTIONS(1082), 1,
      aux_sym_unbuffered_code_token1,
  [8275] = 1,
    ACTIONS(1084), 1,
      sym__indent,
  [8279] = 1,
    ACTIONS(1086), 1,
      anon_sym_DQUOTE,
  [8283] = 1,
    ACTIONS(1086), 1,
      anon_sym_SQUOTE,
  [8287] = 1,
    ACTIONS(1038), 1,
      anon_sym_RBRACE_RBRACE,
  [8291] = 1,
    ACTIONS(1088), 1,
      anon_sym_DQUOTE,
  [8295] = 1,
    ACTIONS(1090), 1,
      sym__indent,
  [8299] = 1,
    ACTIONS(1088), 1,
      anon_sym_SQUOTE,
  [8303] = 1,
    ACTIONS(1092), 1,
      sym__indent,
  [8307] = 1,
    ACTIONS(1094), 1,
      sym__indent,
  [8311] = 1,
    ACTIONS(1096), 1,
      sym__indent,
  [8315] = 1,
    ACTIONS(1098), 1,
      sym__indent,
  [8319] = 1,
    ACTIONS(1100), 1,
      sym__indent,
  [8323] = 1,
    ACTIONS(1102), 1,
      sym__indent,
  [8327] = 1,
    ACTIONS(1104), 1,
      sym__indent,
  [8331] = 1,
    ACTIONS(1106), 1,
      sym__newline,
  [8335] = 1,
    ACTIONS(1108), 1,
      sym__newline,
  [8339] = 1,
    ACTIONS(1110), 1,
      sym__newline,
  [8343] = 1,
    ACTIONS(1112), 1,
      sym__newline,
  [8347] = 1,
    ACTIONS(1114), 1,
      sym__newline,
  [8351] = 1,
    ACTIONS(1116), 1,
      sym__newline,
  [8355] = 1,
    ACTIONS(1118), 1,
      sym__newline,
  [8359] = 1,
    ACTIONS(1120), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 58,
  [SMALL_STATE(4)] = 116,
  [SMALL_STATE(5)] = 159,
  [SMALL_STATE(6)] = 204,
  [SMALL_STATE(7)] = 247,
  [SMALL_STATE(8)] = 284,
  [SMALL_STATE(9)] = 321,
  [SMALL_STATE(10)] = 362,
  [SMALL_STATE(11)] = 405,
  [SMALL_STATE(12)] = 440,
  [SMALL_STATE(13)] = 472,
  [SMALL_STATE(14)] = 502,
  [SMALL_STATE(15)] = 532,
  [SMALL_STATE(16)] = 564,
  [SMALL_STATE(17)] = 598,
  [SMALL_STATE(18)] = 630,
  [SMALL_STATE(19)] = 660,
  [SMALL_STATE(20)] = 688,
  [SMALL_STATE(21)] = 718,
  [SMALL_STATE(22)] = 746,
  [SMALL_STATE(23)] = 776,
  [SMALL_STATE(24)] = 806,
  [SMALL_STATE(25)] = 840,
  [SMALL_STATE(26)] = 866,
  [SMALL_STATE(27)] = 896,
  [SMALL_STATE(28)] = 926,
  [SMALL_STATE(29)] = 951,
  [SMALL_STATE(30)] = 980,
  [SMALL_STATE(31)] = 1009,
  [SMALL_STATE(32)] = 1035,
  [SMALL_STATE(33)] = 1059,
  [SMALL_STATE(34)] = 1083,
  [SMALL_STATE(35)] = 1107,
  [SMALL_STATE(36)] = 1135,
  [SMALL_STATE(37)] = 1161,
  [SMALL_STATE(38)] = 1189,
  [SMALL_STATE(39)] = 1215,
  [SMALL_STATE(40)] = 1243,
  [SMALL_STATE(41)] = 1269,
  [SMALL_STATE(42)] = 1299,
  [SMALL_STATE(43)] = 1327,
  [SMALL_STATE(44)] = 1353,
  [SMALL_STATE(45)] = 1381,
  [SMALL_STATE(46)] = 1409,
  [SMALL_STATE(47)] = 1439,
  [SMALL_STATE(48)] = 1467,
  [SMALL_STATE(49)] = 1491,
  [SMALL_STATE(50)] = 1519,
  [SMALL_STATE(51)] = 1543,
  [SMALL_STATE(52)] = 1567,
  [SMALL_STATE(53)] = 1593,
  [SMALL_STATE(54)] = 1617,
  [SMALL_STATE(55)] = 1641,
  [SMALL_STATE(56)] = 1665,
  [SMALL_STATE(57)] = 1689,
  [SMALL_STATE(58)] = 1713,
  [SMALL_STATE(59)] = 1737,
  [SMALL_STATE(60)] = 1761,
  [SMALL_STATE(61)] = 1785,
  [SMALL_STATE(62)] = 1813,
  [SMALL_STATE(63)] = 1837,
  [SMALL_STATE(64)] = 1861,
  [SMALL_STATE(65)] = 1885,
  [SMALL_STATE(66)] = 1909,
  [SMALL_STATE(67)] = 1935,
  [SMALL_STATE(68)] = 1959,
  [SMALL_STATE(69)] = 1989,
  [SMALL_STATE(70)] = 2013,
  [SMALL_STATE(71)] = 2037,
  [SMALL_STATE(72)] = 2061,
  [SMALL_STATE(73)] = 2085,
  [SMALL_STATE(74)] = 2126,
  [SMALL_STATE(75)] = 2167,
  [SMALL_STATE(76)] = 2208,
  [SMALL_STATE(77)] = 2249,
  [SMALL_STATE(78)] = 2272,
  [SMALL_STATE(79)] = 2313,
  [SMALL_STATE(80)] = 2338,
  [SMALL_STATE(81)] = 2367,
  [SMALL_STATE(82)] = 2394,
  [SMALL_STATE(83)] = 2421,
  [SMALL_STATE(84)] = 2462,
  [SMALL_STATE(85)] = 2503,
  [SMALL_STATE(86)] = 2526,
  [SMALL_STATE(87)] = 2553,
  [SMALL_STATE(88)] = 2594,
  [SMALL_STATE(89)] = 2619,
  [SMALL_STATE(90)] = 2660,
  [SMALL_STATE(91)] = 2683,
  [SMALL_STATE(92)] = 2724,
  [SMALL_STATE(93)] = 2751,
  [SMALL_STATE(94)] = 2778,
  [SMALL_STATE(95)] = 2819,
  [SMALL_STATE(96)] = 2846,
  [SMALL_STATE(97)] = 2887,
  [SMALL_STATE(98)] = 2914,
  [SMALL_STATE(99)] = 2955,
  [SMALL_STATE(100)] = 2996,
  [SMALL_STATE(101)] = 3023,
  [SMALL_STATE(102)] = 3064,
  [SMALL_STATE(103)] = 3087,
  [SMALL_STATE(104)] = 3109,
  [SMALL_STATE(105)] = 3131,
  [SMALL_STATE(106)] = 3153,
  [SMALL_STATE(107)] = 3177,
  [SMALL_STATE(108)] = 3199,
  [SMALL_STATE(109)] = 3223,
  [SMALL_STATE(110)] = 3245,
  [SMALL_STATE(111)] = 3269,
  [SMALL_STATE(112)] = 3293,
  [SMALL_STATE(113)] = 3315,
  [SMALL_STATE(114)] = 3337,
  [SMALL_STATE(115)] = 3359,
  [SMALL_STATE(116)] = 3381,
  [SMALL_STATE(117)] = 3403,
  [SMALL_STATE(118)] = 3425,
  [SMALL_STATE(119)] = 3447,
  [SMALL_STATE(120)] = 3471,
  [SMALL_STATE(121)] = 3493,
  [SMALL_STATE(122)] = 3515,
  [SMALL_STATE(123)] = 3537,
  [SMALL_STATE(124)] = 3559,
  [SMALL_STATE(125)] = 3583,
  [SMALL_STATE(126)] = 3605,
  [SMALL_STATE(127)] = 3627,
  [SMALL_STATE(128)] = 3649,
  [SMALL_STATE(129)] = 3670,
  [SMALL_STATE(130)] = 3691,
  [SMALL_STATE(131)] = 3712,
  [SMALL_STATE(132)] = 3733,
  [SMALL_STATE(133)] = 3754,
  [SMALL_STATE(134)] = 3775,
  [SMALL_STATE(135)] = 3796,
  [SMALL_STATE(136)] = 3817,
  [SMALL_STATE(137)] = 3838,
  [SMALL_STATE(138)] = 3859,
  [SMALL_STATE(139)] = 3880,
  [SMALL_STATE(140)] = 3901,
  [SMALL_STATE(141)] = 3922,
  [SMALL_STATE(142)] = 3943,
  [SMALL_STATE(143)] = 3964,
  [SMALL_STATE(144)] = 3985,
  [SMALL_STATE(145)] = 4006,
  [SMALL_STATE(146)] = 4027,
  [SMALL_STATE(147)] = 4048,
  [SMALL_STATE(148)] = 4069,
  [SMALL_STATE(149)] = 4090,
  [SMALL_STATE(150)] = 4111,
  [SMALL_STATE(151)] = 4132,
  [SMALL_STATE(152)] = 4153,
  [SMALL_STATE(153)] = 4174,
  [SMALL_STATE(154)] = 4208,
  [SMALL_STATE(155)] = 4240,
  [SMALL_STATE(156)] = 4274,
  [SMALL_STATE(157)] = 4311,
  [SMALL_STATE(158)] = 4348,
  [SMALL_STATE(159)] = 4385,
  [SMALL_STATE(160)] = 4422,
  [SMALL_STATE(161)] = 4459,
  [SMALL_STATE(162)] = 4496,
  [SMALL_STATE(163)] = 4533,
  [SMALL_STATE(164)] = 4570,
  [SMALL_STATE(165)] = 4607,
  [SMALL_STATE(166)] = 4644,
  [SMALL_STATE(167)] = 4672,
  [SMALL_STATE(168)] = 4700,
  [SMALL_STATE(169)] = 4728,
  [SMALL_STATE(170)] = 4756,
  [SMALL_STATE(171)] = 4784,
  [SMALL_STATE(172)] = 4803,
  [SMALL_STATE(173)] = 4822,
  [SMALL_STATE(174)] = 4847,
  [SMALL_STATE(175)] = 4868,
  [SMALL_STATE(176)] = 4889,
  [SMALL_STATE(177)] = 4912,
  [SMALL_STATE(178)] = 4933,
  [SMALL_STATE(179)] = 4958,
  [SMALL_STATE(180)] = 4979,
  [SMALL_STATE(181)] = 5000,
  [SMALL_STATE(182)] = 5021,
  [SMALL_STATE(183)] = 5049,
  [SMALL_STATE(184)] = 5077,
  [SMALL_STATE(185)] = 5097,
  [SMALL_STATE(186)] = 5125,
  [SMALL_STATE(187)] = 5140,
  [SMALL_STATE(188)] = 5155,
  [SMALL_STATE(189)] = 5170,
  [SMALL_STATE(190)] = 5185,
  [SMALL_STATE(191)] = 5200,
  [SMALL_STATE(192)] = 5215,
  [SMALL_STATE(193)] = 5230,
  [SMALL_STATE(194)] = 5245,
  [SMALL_STATE(195)] = 5260,
  [SMALL_STATE(196)] = 5275,
  [SMALL_STATE(197)] = 5292,
  [SMALL_STATE(198)] = 5307,
  [SMALL_STATE(199)] = 5322,
  [SMALL_STATE(200)] = 5337,
  [SMALL_STATE(201)] = 5352,
  [SMALL_STATE(202)] = 5367,
  [SMALL_STATE(203)] = 5382,
  [SMALL_STATE(204)] = 5397,
  [SMALL_STATE(205)] = 5412,
  [SMALL_STATE(206)] = 5427,
  [SMALL_STATE(207)] = 5446,
  [SMALL_STATE(208)] = 5470,
  [SMALL_STATE(209)] = 5494,
  [SMALL_STATE(210)] = 5518,
  [SMALL_STATE(211)] = 5542,
  [SMALL_STATE(212)] = 5566,
  [SMALL_STATE(213)] = 5590,
  [SMALL_STATE(214)] = 5614,
  [SMALL_STATE(215)] = 5638,
  [SMALL_STATE(216)] = 5662,
  [SMALL_STATE(217)] = 5686,
  [SMALL_STATE(218)] = 5709,
  [SMALL_STATE(219)] = 5732,
  [SMALL_STATE(220)] = 5755,
  [SMALL_STATE(221)] = 5778,
  [SMALL_STATE(222)] = 5801,
  [SMALL_STATE(223)] = 5826,
  [SMALL_STATE(224)] = 5849,
  [SMALL_STATE(225)] = 5872,
  [SMALL_STATE(226)] = 5895,
  [SMALL_STATE(227)] = 5918,
  [SMALL_STATE(228)] = 5941,
  [SMALL_STATE(229)] = 5964,
  [SMALL_STATE(230)] = 5984,
  [SMALL_STATE(231)] = 6004,
  [SMALL_STATE(232)] = 6020,
  [SMALL_STATE(233)] = 6040,
  [SMALL_STATE(234)] = 6060,
  [SMALL_STATE(235)] = 6074,
  [SMALL_STATE(236)] = 6094,
  [SMALL_STATE(237)] = 6114,
  [SMALL_STATE(238)] = 6134,
  [SMALL_STATE(239)] = 6148,
  [SMALL_STATE(240)] = 6168,
  [SMALL_STATE(241)] = 6188,
  [SMALL_STATE(242)] = 6208,
  [SMALL_STATE(243)] = 6222,
  [SMALL_STATE(244)] = 6242,
  [SMALL_STATE(245)] = 6256,
  [SMALL_STATE(246)] = 6276,
  [SMALL_STATE(247)] = 6292,
  [SMALL_STATE(248)] = 6312,
  [SMALL_STATE(249)] = 6332,
  [SMALL_STATE(250)] = 6346,
  [SMALL_STATE(251)] = 6366,
  [SMALL_STATE(252)] = 6386,
  [SMALL_STATE(253)] = 6406,
  [SMALL_STATE(254)] = 6426,
  [SMALL_STATE(255)] = 6440,
  [SMALL_STATE(256)] = 6460,
  [SMALL_STATE(257)] = 6480,
  [SMALL_STATE(258)] = 6496,
  [SMALL_STATE(259)] = 6516,
  [SMALL_STATE(260)] = 6532,
  [SMALL_STATE(261)] = 6552,
  [SMALL_STATE(262)] = 6572,
  [SMALL_STATE(263)] = 6592,
  [SMALL_STATE(264)] = 6612,
  [SMALL_STATE(265)] = 6632,
  [SMALL_STATE(266)] = 6648,
  [SMALL_STATE(267)] = 6668,
  [SMALL_STATE(268)] = 6688,
  [SMALL_STATE(269)] = 6708,
  [SMALL_STATE(270)] = 6728,
  [SMALL_STATE(271)] = 6748,
  [SMALL_STATE(272)] = 6768,
  [SMALL_STATE(273)] = 6784,
  [SMALL_STATE(274)] = 6804,
  [SMALL_STATE(275)] = 6824,
  [SMALL_STATE(276)] = 6844,
  [SMALL_STATE(277)] = 6861,
  [SMALL_STATE(278)] = 6878,
  [SMALL_STATE(279)] = 6889,
  [SMALL_STATE(280)] = 6902,
  [SMALL_STATE(281)] = 6919,
  [SMALL_STATE(282)] = 6932,
  [SMALL_STATE(283)] = 6945,
  [SMALL_STATE(284)] = 6962,
  [SMALL_STATE(285)] = 6979,
  [SMALL_STATE(286)] = 6990,
  [SMALL_STATE(287)] = 7005,
  [SMALL_STATE(288)] = 7016,
  [SMALL_STATE(289)] = 7033,
  [SMALL_STATE(290)] = 7050,
  [SMALL_STATE(291)] = 7065,
  [SMALL_STATE(292)] = 7078,
  [SMALL_STATE(293)] = 7095,
  [SMALL_STATE(294)] = 7112,
  [SMALL_STATE(295)] = 7125,
  [SMALL_STATE(296)] = 7142,
  [SMALL_STATE(297)] = 7159,
  [SMALL_STATE(298)] = 7176,
  [SMALL_STATE(299)] = 7193,
  [SMALL_STATE(300)] = 7206,
  [SMALL_STATE(301)] = 7223,
  [SMALL_STATE(302)] = 7240,
  [SMALL_STATE(303)] = 7248,
  [SMALL_STATE(304)] = 7262,
  [SMALL_STATE(305)] = 7272,
  [SMALL_STATE(306)] = 7282,
  [SMALL_STATE(307)] = 7290,
  [SMALL_STATE(308)] = 7304,
  [SMALL_STATE(309)] = 7312,
  [SMALL_STATE(310)] = 7320,
  [SMALL_STATE(311)] = 7328,
  [SMALL_STATE(312)] = 7336,
  [SMALL_STATE(313)] = 7346,
  [SMALL_STATE(314)] = 7356,
  [SMALL_STATE(315)] = 7364,
  [SMALL_STATE(316)] = 7376,
  [SMALL_STATE(317)] = 7386,
  [SMALL_STATE(318)] = 7396,
  [SMALL_STATE(319)] = 7406,
  [SMALL_STATE(320)] = 7414,
  [SMALL_STATE(321)] = 7422,
  [SMALL_STATE(322)] = 7430,
  [SMALL_STATE(323)] = 7438,
  [SMALL_STATE(324)] = 7446,
  [SMALL_STATE(325)] = 7460,
  [SMALL_STATE(326)] = 7468,
  [SMALL_STATE(327)] = 7478,
  [SMALL_STATE(328)] = 7486,
  [SMALL_STATE(329)] = 7496,
  [SMALL_STATE(330)] = 7506,
  [SMALL_STATE(331)] = 7514,
  [SMALL_STATE(332)] = 7522,
  [SMALL_STATE(333)] = 7532,
  [SMALL_STATE(334)] = 7540,
  [SMALL_STATE(335)] = 7548,
  [SMALL_STATE(336)] = 7557,
  [SMALL_STATE(337)] = 7570,
  [SMALL_STATE(338)] = 7579,
  [SMALL_STATE(339)] = 7588,
  [SMALL_STATE(340)] = 7597,
  [SMALL_STATE(341)] = 7606,
  [SMALL_STATE(342)] = 7615,
  [SMALL_STATE(343)] = 7624,
  [SMALL_STATE(344)] = 7633,
  [SMALL_STATE(345)] = 7642,
  [SMALL_STATE(346)] = 7651,
  [SMALL_STATE(347)] = 7660,
  [SMALL_STATE(348)] = 7669,
  [SMALL_STATE(349)] = 7678,
  [SMALL_STATE(350)] = 7687,
  [SMALL_STATE(351)] = 7700,
  [SMALL_STATE(352)] = 7709,
  [SMALL_STATE(353)] = 7718,
  [SMALL_STATE(354)] = 7727,
  [SMALL_STATE(355)] = 7736,
  [SMALL_STATE(356)] = 7745,
  [SMALL_STATE(357)] = 7756,
  [SMALL_STATE(358)] = 7769,
  [SMALL_STATE(359)] = 7778,
  [SMALL_STATE(360)] = 7791,
  [SMALL_STATE(361)] = 7801,
  [SMALL_STATE(362)] = 7809,
  [SMALL_STATE(363)] = 7815,
  [SMALL_STATE(364)] = 7823,
  [SMALL_STATE(365)] = 7829,
  [SMALL_STATE(366)] = 7835,
  [SMALL_STATE(367)] = 7841,
  [SMALL_STATE(368)] = 7849,
  [SMALL_STATE(369)] = 7859,
  [SMALL_STATE(370)] = 7867,
  [SMALL_STATE(371)] = 7877,
  [SMALL_STATE(372)] = 7887,
  [SMALL_STATE(373)] = 7895,
  [SMALL_STATE(374)] = 7905,
  [SMALL_STATE(375)] = 7913,
  [SMALL_STATE(376)] = 7921,
  [SMALL_STATE(377)] = 7931,
  [SMALL_STATE(378)] = 7941,
  [SMALL_STATE(379)] = 7949,
  [SMALL_STATE(380)] = 7959,
  [SMALL_STATE(381)] = 7969,
  [SMALL_STATE(382)] = 7979,
  [SMALL_STATE(383)] = 7989,
  [SMALL_STATE(384)] = 7999,
  [SMALL_STATE(385)] = 8007,
  [SMALL_STATE(386)] = 8015,
  [SMALL_STATE(387)] = 8025,
  [SMALL_STATE(388)] = 8035,
  [SMALL_STATE(389)] = 8043,
  [SMALL_STATE(390)] = 8051,
  [SMALL_STATE(391)] = 8059,
  [SMALL_STATE(392)] = 8067,
  [SMALL_STATE(393)] = 8077,
  [SMALL_STATE(394)] = 8087,
  [SMALL_STATE(395)] = 8094,
  [SMALL_STATE(396)] = 8101,
  [SMALL_STATE(397)] = 8108,
  [SMALL_STATE(398)] = 8115,
  [SMALL_STATE(399)] = 8122,
  [SMALL_STATE(400)] = 8129,
  [SMALL_STATE(401)] = 8136,
  [SMALL_STATE(402)] = 8143,
  [SMALL_STATE(403)] = 8150,
  [SMALL_STATE(404)] = 8157,
  [SMALL_STATE(405)] = 8164,
  [SMALL_STATE(406)] = 8171,
  [SMALL_STATE(407)] = 8175,
  [SMALL_STATE(408)] = 8179,
  [SMALL_STATE(409)] = 8183,
  [SMALL_STATE(410)] = 8187,
  [SMALL_STATE(411)] = 8191,
  [SMALL_STATE(412)] = 8195,
  [SMALL_STATE(413)] = 8199,
  [SMALL_STATE(414)] = 8203,
  [SMALL_STATE(415)] = 8207,
  [SMALL_STATE(416)] = 8211,
  [SMALL_STATE(417)] = 8215,
  [SMALL_STATE(418)] = 8219,
  [SMALL_STATE(419)] = 8223,
  [SMALL_STATE(420)] = 8227,
  [SMALL_STATE(421)] = 8231,
  [SMALL_STATE(422)] = 8235,
  [SMALL_STATE(423)] = 8239,
  [SMALL_STATE(424)] = 8243,
  [SMALL_STATE(425)] = 8247,
  [SMALL_STATE(426)] = 8251,
  [SMALL_STATE(427)] = 8255,
  [SMALL_STATE(428)] = 8259,
  [SMALL_STATE(429)] = 8263,
  [SMALL_STATE(430)] = 8267,
  [SMALL_STATE(431)] = 8271,
  [SMALL_STATE(432)] = 8275,
  [SMALL_STATE(433)] = 8279,
  [SMALL_STATE(434)] = 8283,
  [SMALL_STATE(435)] = 8287,
  [SMALL_STATE(436)] = 8291,
  [SMALL_STATE(437)] = 8295,
  [SMALL_STATE(438)] = 8299,
  [SMALL_STATE(439)] = 8303,
  [SMALL_STATE(440)] = 8307,
  [SMALL_STATE(441)] = 8311,
  [SMALL_STATE(442)] = 8315,
  [SMALL_STATE(443)] = 8319,
  [SMALL_STATE(444)] = 8323,
  [SMALL_STATE(445)] = 8327,
  [SMALL_STATE(446)] = 8331,
  [SMALL_STATE(447)] = 8335,
  [SMALL_STATE(448)] = 8339,
  [SMALL_STATE(449)] = 8343,
  [SMALL_STATE(450)] = 8347,
  [SMALL_STATE(451)] = 8351,
  [SMALL_STATE(452)] = 8355,
  [SMALL_STATE(453)] = 8359,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(362),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(262),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(396),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(396),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(304),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(418),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(386),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(383),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(429),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(403),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(161),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(161),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(431),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(237),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(402),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(402),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(318),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(160),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(160),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 2),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(275),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(398),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(398),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(312),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(164),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(164),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(160),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(160),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 4),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 4),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(28),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(421),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(11),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 5, .production_id = 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 5, .production_id = 1),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_keyword, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_keyword, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 2),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 1),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 3),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 3),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(90),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(164),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(164),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 3),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 3),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 5),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 5),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(31),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 4),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 4),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 5),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 5),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 3),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 7, .production_id = 7),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 7, .production_id = 7),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 7),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 6),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 6),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffered_code, 2),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffered_code, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 5, .production_id = 5),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 5, .production_id = 5),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unescaped_buffered_code, 2),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unescaped_buffered_code, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 2),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 5),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 5),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 6),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 6),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 3),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [421] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(161),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(161),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 2),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_block, 5, .production_id = 2),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_block, 5, .production_id = 2),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 6),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 6),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(253),
  [486] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(395),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(395),
  [492] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(332),
  [495] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(159),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(159),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 2),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 2),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [619] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(159),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(159),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 1),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 1),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(316),
  [644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(353),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [659] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(206),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [728] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(290),
  [731] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(413),
  [734] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(414),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [801] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2), SHIFT_REPEAT(157),
  [804] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2), SHIFT_REPEAT(265),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [811] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(290),
  [814] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(413),
  [817] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(414),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [852] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2), SHIFT_REPEAT(427),
  [855] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 1),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 1),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [879] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(290),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_name, 1),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [896] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 3),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 3),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 3),
  [906] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 3),
  [908] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [910] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(416),
  [913] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(364),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2),
  [918] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_angular_attribute_name, 1),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_angular_attribute_name, 1),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 3),
  [924] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 3),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 1),
  [930] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 1),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 6),
  [942] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 6),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [948] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 1),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__un_delimited_javascript, 1),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 3),
  [956] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 3),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 3),
  [960] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 3),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_attribute_value, 2),
  [964] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable_attribute_value, 2),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_attribute_value, 2),
  [968] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__object_attribute_value, 2),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 2),
  [972] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 2),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ternary_attribute_value, 2),
  [982] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ternary_attribute_value, 2),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_attribute_value, 2),
  [990] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__template_attribute_value, 2),
  [992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_attribute_value, 2),
  [996] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__array_attribute_value, 2),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 3),
  [1000] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 3),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [1004] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_attribute_value, 2),
  [1008] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_attribute_value, 2),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1014] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1028] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1072] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
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
