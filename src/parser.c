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
#define STATE_COUNT 374
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 104
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
  alias_sym_attribute_modifier = 104,
  alias_sym_attribute_value = 105,
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
      if (eof) ADVANCE(154);
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '#') ADVANCE(637);
      if (lookahead == '\'') ADVANCE(627);
      if (lookahead == '(') ADVANCE(207);
      if (lookahead == ')') ADVANCE(209);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead == ',') ADVANCE(208);
      if (lookahead == '-') ADVANCE(666);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '=') ADVANCE(196);
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
      if (lookahead == '{') ADVANCE(638);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '}') ADVANCE(650);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '"') ADVANCE(210);
      if (lookahead == '`') ADVANCE(503);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '\'') ADVANCE(211);
      if (lookahead == '`') ADVANCE(504);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(212);
      if (lookahead == '`') ADVANCE(508);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == ']') ADVANCE(510);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(64);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\'') ADVANCE(214);
      if (lookahead == ']') ADVANCE(511);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(66);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == ']') ADVANCE(513);
      if (lookahead == '`') ADVANCE(215);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(94);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(216);
      if (lookahead == ']') ADVANCE(514);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(138);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(217);
      if (lookahead == ']') ADVANCE(515);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(139);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(218);
      if (lookahead == ']') ADVANCE(516);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(140);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(219);
      if (lookahead == ']') ADVANCE(517);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(142);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '#') ADVANCE(637);
      if (lookahead == '{') ADVANCE(638);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(635);
      if (lookahead != 0) ADVANCE(636);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '"') ADVANCE(220);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(490);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(64);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(221);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(491);
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
      if (lookahead == '`') ADVANCE(222);
      if (lookahead == '}') ADVANCE(492);
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
          lookahead == '\'') ADVANCE(223);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(493);
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
          lookahead == '`') ADVANCE(224);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(494);
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
          lookahead == '`') ADVANCE(225);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(495);
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
          lookahead == '`') ADVANCE(226);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(496);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(142);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '"') ADVANCE(220);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(490);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(64);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(221);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(491);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(66);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '`') ADVANCE(222);
      if (lookahead == '}') ADVANCE(492);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(94);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(223);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(493);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(138);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(224);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(494);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(139);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(225);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(495);
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
          lookahead == '`') ADVANCE(226);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(496);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(142);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '"') ADVANCE(227);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == '`') ADVANCE(229);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(230);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(231);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(232);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(233);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == ')') ADVANCE(452);
      if (lookahead == '`') ADVANCE(500);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(235);
      if (lookahead == ')') ADVANCE(453);
      if (lookahead == '`') ADVANCE(501);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(236);
      if (lookahead == ')') ADVANCE(454);
      if (lookahead == '`') ADVANCE(502);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"') ADVANCE(237);
      if (lookahead == ')') ADVANCE(475);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(238);
      if (lookahead == ')') ADVANCE(476);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ')') ADVANCE(485);
      if (lookahead == '`') ADVANCE(239);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(240);
      if (lookahead == ')') ADVANCE(486);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(241);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(242);
      if (lookahead == ')') ADVANCE(488);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(243);
      if (lookahead == ')') ADVANCE(489);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '"') ADVANCE(244);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(64);
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '\'') ADVANCE(246);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(66);
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '`') ADVANCE(248);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(94);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(250);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(138);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(252);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(139);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(254);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(140);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(256);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(142);
      if (lookahead != 0) ADVANCE(256);
      END_STATE();
    case 50:
      if (lookahead == '\n') SKIP(50)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 51:
      if (lookahead == '\n') SKIP(51)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(189);
      END_STATE();
    case 52:
      if (lookahead == '\n') SKIP(52)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(654);
      END_STATE();
    case 53:
      if (lookahead == '\n') SKIP(53)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(662);
      if (lookahead != 0) ADVANCE(665);
      END_STATE();
    case 54:
      if (lookahead == ' ') ADVANCE(204);
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '(') ADVANCE(207);
      if (lookahead == ')') ADVANCE(209);
      if (lookahead == ',') ADVANCE(208);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '=') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(54)
      END_STATE();
    case 55:
      if (lookahead == ' ') ADVANCE(204);
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == ')') ADVANCE(209);
      if (lookahead == ',') ADVANCE(208);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '=') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(55)
      END_STATE();
    case 56:
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '}') ADVANCE(497);
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
      if (lookahead == '}') ADVANCE(498);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(87);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 58:
      if (lookahead == ' ') SKIP(58)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(640);
      if (lookahead != 0) ADVANCE(648);
      END_STATE();
    case 59:
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == '"') ADVANCE(632);
      if (lookahead == '\'') ADVANCE(628);
      if (lookahead == '?') ADVANCE(474);
      if (lookahead == '[') ADVANCE(465);
      if (lookahead == '`') ADVANCE(480);
      if (lookahead == '{') ADVANCE(466);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(472);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 60:
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == '"') ADVANCE(632);
      if (lookahead == '\'') ADVANCE(628);
      if (lookahead == '?') ADVANCE(478);
      if (lookahead == '[') ADVANCE(465);
      if (lookahead == '`') ADVANCE(480);
      if (lookahead == '{') ADVANCE(466);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(472);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 61:
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == '=') ADVANCE(196);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(61)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 62:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '\'') ADVANCE(627);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == '`') ADVANCE(83);
      if (lookahead == '{') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 63:
      if (lookahead == '"') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(633);
      if (lookahead != 0) ADVANCE(634);
      END_STATE();
    case 64:
      if (lookahead == '"') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 65:
      if (lookahead == '\'') ADVANCE(627);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(629);
      if (lookahead != 0) ADVANCE(630);
      END_STATE();
    case 66:
      if (lookahead == '\'') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 67:
      if (lookahead == '(') ADVANCE(146);
      if (lookahead == ')') ADVANCE(209);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 68:
      if (lookahead == ')') ADVANCE(625);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 69:
      if (lookahead == ')') ADVANCE(484);
      if (lookahead == '?') ADVANCE(70);
      if (lookahead == '`') ADVANCE(427);
      if (lookahead != 0) ADVANCE(436);
      END_STATE();
    case 70:
      if (lookahead == ')') ADVANCE(484);
      if (lookahead == '`') ADVANCE(506);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 71:
      if (lookahead == ')') ADVANCE(483);
      if (lookahead == '?') ADVANCE(74);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 72:
      if (lookahead == ')') ADVANCE(483);
      if (lookahead == '?') ADVANCE(469);
      if (lookahead == ' ' ||
          lookahead == '(') ADVANCE(71);
      if (lookahead != 0) ADVANCE(464);
      END_STATE();
    case 73:
      if (lookahead == ')') ADVANCE(482);
      if (lookahead == '?') ADVANCE(69);
      if (lookahead == '`') ADVANCE(505);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 74:
      if (lookahead == ')') ADVANCE(451);
      if (lookahead == '?') ADVANCE(75);
      if (lookahead != 0) ADVANCE(427);
      END_STATE();
    case 75:
      if (lookahead == ')') ADVANCE(451);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 76:
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '}') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 77:
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '?') ADVANCE(78);
      if (lookahead == '}') ADVANCE(498);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(87);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 78:
      if (lookahead == ',') ADVANCE(432);
      if (lookahead == '?') ADVANCE(76);
      if (lookahead == '}') ADVANCE(432);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(432);
      END_STATE();
    case 79:
      if (lookahead == '.') ADVANCE(199);
      END_STATE();
    case 80:
      if (lookahead == '/') ADVANCE(519);
      END_STATE();
    case 81:
      if (lookahead == '=') ADVANCE(193);
      END_STATE();
    case 82:
      if (lookahead == '?') ADVANCE(90);
      if (lookahead == ']') ADVANCE(423);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(430);
      END_STATE();
    case 83:
      if (lookahead == '?') ADVANCE(477);
      if (lookahead == '`') ADVANCE(479);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(86);
      if (lookahead != 0) ADVANCE(480);
      END_STATE();
    case 84:
      if (lookahead == '?') ADVANCE(481);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(87);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 85:
      if (lookahead == '?') ADVANCE(468);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(87);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 86:
      if (lookahead == '?') ADVANCE(93);
      if (lookahead == '`') ADVANCE(507);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 87:
      if (lookahead == '?') ADVANCE(148);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 88:
      if (lookahead == '?') ADVANCE(82);
      if (lookahead == ']') ADVANCE(512);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(87);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 89:
      if (lookahead == ']') ADVANCE(509);
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
      if (lookahead == ']') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[') ADVANCE(90);
      END_STATE();
    case 91:
      if (lookahead == ']') ADVANCE(624);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 92:
      if (lookahead == '`') ADVANCE(499);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 93:
      if (lookahead == '`') ADVANCE(423);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(92);
      if (lookahead != 0) ADVANCE(435);
      END_STATE();
    case 94:
      if (lookahead == '`') ADVANCE(445);
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
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(155);
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
      if (lookahead == 'f') ADVANCE(165);
      END_STATE();
    case 107:
      if (lookahead == 'f') ADVANCE(169);
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
      if (lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(159);
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
      if (lookahead == 'n') ADVANCE(185);
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
      if (lookahead == 's') ADVANCE(172);
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
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(190);
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
          lookahead == '\'') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 139:
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 140:
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 141:
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 142:
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 143:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(618);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      END_STATE();
    case 144:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      END_STATE();
    case 145:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
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
          lookahead != '?') ADVANCE(423);
      END_STATE();
    case 149:
      if (eof) ADVANCE(154);
      if (lookahead == '\n') SKIP(149)
      if (lookahead == '!') ADVANCE(658);
      if (lookahead == '#') ADVANCE(664);
      if (lookahead == '-') ADVANCE(667);
      if (lookahead == '.') ADVANCE(663);
      if (lookahead == '/') ADVANCE(657);
      if (lookahead == '=') ADVANCE(197);
      if (lookahead == 'c') ADVANCE(527);
      if (lookahead == 'd') ADVANCE(545);
      if (lookahead == 'e') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(553);
      if (lookahead == 's') ADVANCE(532);
      if (lookahead == 'u') ADVANCE(573);
      if (lookahead == 'w') ADVANCE(557);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0) ADVANCE(665);
      END_STATE();
    case 150:
      if (eof) ADVANCE(154);
      if (lookahead == '\n') SKIP(150)
      if (lookahead == '!') ADVANCE(658);
      if (lookahead == '#') ADVANCE(664);
      if (lookahead == '-') ADVANCE(667);
      if (lookahead == '.') ADVANCE(663);
      if (lookahead == '/') ADVANCE(657);
      if (lookahead == '=') ADVANCE(197);
      if (lookahead == 'c') ADVANCE(527);
      if (lookahead == 'd') ADVANCE(576);
      if (lookahead == 'e') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(553);
      if (lookahead == 's') ADVANCE(532);
      if (lookahead == 'u') ADVANCE(573);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0) ADVANCE(665);
      END_STATE();
    case 151:
      if (eof) ADVANCE(154);
      if (lookahead == ' ') SKIP(151)
      if (lookahead == '!') ADVANCE(642);
      if (lookahead == '#') ADVANCE(647);
      if (lookahead == '-') ADVANCE(668);
      if (lookahead == '.') ADVANCE(646);
      if (lookahead == '/') ADVANCE(641);
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == 'c') ADVANCE(529);
      if (lookahead == 'd') ADVANCE(577);
      if (lookahead == 'e') ADVANCE(569);
      if (lookahead == 'i') ADVANCE(556);
      if (lookahead == 's') ADVANCE(534);
      if (lookahead == 'u') ADVANCE(574);
      if (lookahead == '|') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead != 0) ADVANCE(648);
      END_STATE();
    case 152:
      if (eof) ADVANCE(154);
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '-') ADVANCE(666);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '=') ADVANCE(196);
      if (lookahead == 'c') ADVANCE(525);
      if (lookahead == 'd') ADVANCE(542);
      if (lookahead == 'e') ADVANCE(567);
      if (lookahead == 'i') ADVANCE(552);
      if (lookahead == 's') ADVANCE(530);
      if (lookahead == 'u') ADVANCE(572);
      if (lookahead == 'w') ADVANCE(558);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(152)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 153:
      if (eof) ADVANCE(154);
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '-') ADVANCE(666);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == '=') ADVANCE(196);
      if (lookahead == 'c') ADVANCE(525);
      if (lookahead == 'd') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(567);
      if (lookahead == 'i') ADVANCE(552);
      if (lookahead == 's') ADVANCE(530);
      if (lookahead == 'u') ADVANCE(572);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '}') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(153)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_doctype);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_strict);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_xml);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(660);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(644);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(111);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(111);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__when_keyword_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(189);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__when_keyword_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_script_DOT);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_script_DOT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_script_DOT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_script_block_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_script_block_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(618);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '"') ADVANCE(210);
      if (lookahead == '`') ADVANCE(503);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '\'') ADVANCE(211);
      if (lookahead == '`') ADVANCE(504);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(212);
      if (lookahead == '`') ADVANCE(508);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == ']') ADVANCE(510);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(64);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\'') ADVANCE(214);
      if (lookahead == ']') ADVANCE(511);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(66);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == ']') ADVANCE(513);
      if (lookahead == '`') ADVANCE(215);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(94);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(216);
      if (lookahead == ']') ADVANCE(514);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(138);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(217);
      if (lookahead == ']') ADVANCE(515);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(139);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(218);
      if (lookahead == ']') ADVANCE(516);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(140);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(219);
      if (lookahead == ']') ADVANCE(517);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(142);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '"') ADVANCE(220);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(490);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(64);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(221);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(491);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(66);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '`') ADVANCE(222);
      if (lookahead == '}') ADVANCE(492);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(94);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(223);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(493);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(138);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(224);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(494);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(139);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(225);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(495);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(140);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(226);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(496);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(142);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '"') ADVANCE(227);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == '`') ADVANCE(229);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(230);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(231);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(232);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(233);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == ')') ADVANCE(452);
      if (lookahead == '`') ADVANCE(500);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(235);
      if (lookahead == ')') ADVANCE(453);
      if (lookahead == '`') ADVANCE(501);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(236);
      if (lookahead == ')') ADVANCE(454);
      if (lookahead == '`') ADVANCE(502);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"') ADVANCE(237);
      if (lookahead == ')') ADVANCE(475);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(238);
      if (lookahead == ')') ADVANCE(476);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ')') ADVANCE(485);
      if (lookahead == '`') ADVANCE(239);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(240);
      if (lookahead == ')') ADVANCE(486);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(241);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(242);
      if (lookahead == ')') ADVANCE(488);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(243);
      if (lookahead == ')') ADVANCE(489);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(244);
      if (lookahead == '"') ADVANCE(244);
      if (lookahead == '\'') ADVANCE(250);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '?') ADVANCE(317);
      if (lookahead == '`') ADVANCE(252);
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(244);
      if (lookahead == '"') ADVANCE(244);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '?') ADVANCE(317);
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(246);
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '\'') ADVANCE(246);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(318);
      if (lookahead == '`') ADVANCE(254);
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(246);
      if (lookahead == '\'') ADVANCE(246);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(318);
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(248);
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '\'') ADVANCE(254);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == '?') ADVANCE(319);
      if (lookahead == '`') ADVANCE(248);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(248);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == '?') ADVANCE(319);
      if (lookahead == '`') ADVANCE(248);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(250);
      if (lookahead == '"') ADVANCE(250);
      if (lookahead == '\'') ADVANCE(250);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(320);
      if (lookahead == '`') ADVANCE(256);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(250);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(250);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(320);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(252);
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(321);
      if (lookahead == '`') ADVANCE(252);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(252);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(252);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(321);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(254);
      if (lookahead == '"') ADVANCE(256);
      if (lookahead == '\'') ADVANCE(254);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '?') ADVANCE(322);
      if (lookahead == '`') ADVANCE(254);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(254);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(254);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '?') ADVANCE(322);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(256);
      if (lookahead == '"') ADVANCE(256);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == '?') ADVANCE(323);
      if (lookahead == '`') ADVANCE(256);
      if (lookahead != 0) ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(256);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(256);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == '?') ADVANCE(323);
      if (lookahead != 0) ADVANCE(256);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(258);
      if (lookahead == '"') ADVANCE(258);
      if (lookahead == '\'') ADVANCE(264);
      if (lookahead == ')') ADVANCE(475);
      if (lookahead == '?') ADVANCE(324);
      if (lookahead == '`') ADVANCE(266);
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(258);
      if (lookahead == '"') ADVANCE(258);
      if (lookahead == ')') ADVANCE(475);
      if (lookahead == '?') ADVANCE(324);
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(260);
      if (lookahead == '"') ADVANCE(264);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == ')') ADVANCE(476);
      if (lookahead == '?') ADVANCE(325);
      if (lookahead == '`') ADVANCE(268);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(260);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == ')') ADVANCE(476);
      if (lookahead == '?') ADVANCE(325);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(262);
      if (lookahead == '"') ADVANCE(266);
      if (lookahead == '\'') ADVANCE(268);
      if (lookahead == ')') ADVANCE(485);
      if (lookahead == '?') ADVANCE(326);
      if (lookahead == '`') ADVANCE(262);
      if (lookahead != 0) ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(262);
      if (lookahead == ')') ADVANCE(485);
      if (lookahead == '?') ADVANCE(326);
      if (lookahead == '`') ADVANCE(262);
      if (lookahead != 0) ADVANCE(262);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(264);
      if (lookahead == '"') ADVANCE(264);
      if (lookahead == '\'') ADVANCE(264);
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == '?') ADVANCE(327);
      if (lookahead == '`') ADVANCE(270);
      if (lookahead != 0) ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(264);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(264);
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == '?') ADVANCE(327);
      if (lookahead != 0) ADVANCE(264);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(266);
      if (lookahead == '"') ADVANCE(266);
      if (lookahead == '\'') ADVANCE(270);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == '?') ADVANCE(328);
      if (lookahead == '`') ADVANCE(266);
      if (lookahead != 0) ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(266);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(266);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == '?') ADVANCE(328);
      if (lookahead != 0) ADVANCE(266);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(268);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '\'') ADVANCE(268);
      if (lookahead == ')') ADVANCE(488);
      if (lookahead == '?') ADVANCE(329);
      if (lookahead == '`') ADVANCE(268);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(268);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(268);
      if (lookahead == ')') ADVANCE(488);
      if (lookahead == '?') ADVANCE(329);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(270);
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '\'') ADVANCE(270);
      if (lookahead == ')') ADVANCE(489);
      if (lookahead == '?') ADVANCE(330);
      if (lookahead == '`') ADVANCE(270);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(427);
      if (lookahead == ' ') ADVANCE(270);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(270);
      if (lookahead == ')') ADVANCE(489);
      if (lookahead == '?') ADVANCE(330);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(244);
      if (lookahead == '"') ADVANCE(272);
      if (lookahead == '\'') ADVANCE(278);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '?') ADVANCE(331);
      if (lookahead == '`') ADVANCE(280);
      if (lookahead != 0) ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(244);
      if (lookahead == '"') ADVANCE(272);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '?') ADVANCE(331);
      if (lookahead != 0) ADVANCE(272);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(246);
      if (lookahead == '"') ADVANCE(278);
      if (lookahead == '\'') ADVANCE(274);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(332);
      if (lookahead == '`') ADVANCE(282);
      if (lookahead != 0) ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(246);
      if (lookahead == '\'') ADVANCE(274);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(332);
      if (lookahead != 0) ADVANCE(274);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(248);
      if (lookahead == '"') ADVANCE(280);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == '(') ADVANCE(262);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == '?') ADVANCE(333);
      if (lookahead == '`') ADVANCE(276);
      if (lookahead != 0) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(248);
      if (lookahead == '(') ADVANCE(262);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == '?') ADVANCE(333);
      if (lookahead == '`') ADVANCE(276);
      if (lookahead != 0) ADVANCE(276);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(250);
      if (lookahead == '"') ADVANCE(278);
      if (lookahead == '\'') ADVANCE(278);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(334);
      if (lookahead == '`') ADVANCE(284);
      if (lookahead != 0) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(250);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(278);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(334);
      if (lookahead != 0) ADVANCE(278);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(252);
      if (lookahead == '"') ADVANCE(280);
      if (lookahead == '\'') ADVANCE(284);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(335);
      if (lookahead == '`') ADVANCE(280);
      if (lookahead != 0) ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(252);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(280);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(335);
      if (lookahead != 0) ADVANCE(280);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(254);
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '?') ADVANCE(336);
      if (lookahead == '`') ADVANCE(282);
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(254);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(282);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '?') ADVANCE(336);
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(256);
      if (lookahead == '"') ADVANCE(284);
      if (lookahead == '\'') ADVANCE(284);
      if (lookahead == '(') ADVANCE(270);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == '?') ADVANCE(337);
      if (lookahead == '`') ADVANCE(284);
      if (lookahead != 0) ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(256);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(284);
      if (lookahead == '(') ADVANCE(270);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == '?') ADVANCE(337);
      if (lookahead != 0) ADVANCE(284);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == ' ') ADVANCE(382);
      if (lookahead == '"') ADVANCE(286);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '(') ADVANCE(392);
      if (lookahead == ')') ADVANCE(1);
      if (lookahead == '?') ADVANCE(344);
      if (lookahead == '`') ADVANCE(280);
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == ' ') ADVANCE(383);
      if (lookahead == '"') ADVANCE(288);
      if (lookahead == '\'') ADVANCE(287);
      if (lookahead == '(') ADVANCE(393);
      if (lookahead == ')') ADVANCE(2);
      if (lookahead == '?') ADVANCE(345);
      if (lookahead == '`') ADVANCE(282);
      if (lookahead != 0) ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == ' ') ADVANCE(384);
      if (lookahead == '"') ADVANCE(288);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '(') ADVANCE(394);
      if (lookahead == ')') ADVANCE(3);
      if (lookahead == '?') ADVANCE(346);
      if (lookahead == '`') ADVANCE(284);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(430);
      if (lookahead == ' ') ADVANCE(289);
      if (lookahead == '"') ADVANCE(289);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '?') ADVANCE(347);
      if (lookahead == ']') ADVANCE(244);
      if (lookahead == '`') ADVANCE(293);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(244);
      if (lookahead != 0) ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(430);
      if (lookahead == ' ') ADVANCE(290);
      if (lookahead == '"') ADVANCE(292);
      if (lookahead == '\'') ADVANCE(290);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(348);
      if (lookahead == ']') ADVANCE(246);
      if (lookahead == '`') ADVANCE(294);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(246);
      if (lookahead != 0) ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(430);
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead == '"') ADVANCE(293);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == '?') ADVANCE(349);
      if (lookahead == ']') ADVANCE(248);
      if (lookahead == '`') ADVANCE(291);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(248);
      if (lookahead != 0) ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(430);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == '"') ADVANCE(292);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(350);
      if (lookahead == ']') ADVANCE(250);
      if (lookahead == '`') ADVANCE(295);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(250);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(430);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '"') ADVANCE(293);
      if (lookahead == '\'') ADVANCE(295);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(351);
      if (lookahead == ']') ADVANCE(252);
      if (lookahead == '`') ADVANCE(293);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(252);
      if (lookahead != 0) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(430);
      if (lookahead == ' ') ADVANCE(294);
      if (lookahead == '"') ADVANCE(295);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '?') ADVANCE(352);
      if (lookahead == ']') ADVANCE(254);
      if (lookahead == '`') ADVANCE(294);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(254);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(430);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == '"') ADVANCE(295);
      if (lookahead == '\'') ADVANCE(295);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == '?') ADVANCE(353);
      if (lookahead == ']') ADVANCE(256);
      if (lookahead == '`') ADVANCE(295);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(256);
      if (lookahead != 0) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(289);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '\'') ADVANCE(299);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '?') ADVANCE(354);
      if (lookahead == '[') ADVANCE(272);
      if (lookahead == ']') ADVANCE(272);
      if (lookahead == '`') ADVANCE(300);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(290);
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '\'') ADVANCE(297);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(355);
      if (lookahead == '[') ADVANCE(274);
      if (lookahead == ']') ADVANCE(274);
      if (lookahead == '`') ADVANCE(301);
      if (lookahead != 0) ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '\'') ADVANCE(301);
      if (lookahead == '(') ADVANCE(262);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == '?') ADVANCE(356);
      if (lookahead == '[') ADVANCE(276);
      if (lookahead == ']') ADVANCE(276);
      if (lookahead == '`') ADVANCE(298);
      if (lookahead != 0) ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '\'') ADVANCE(299);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(357);
      if (lookahead == '[') ADVANCE(278);
      if (lookahead == ']') ADVANCE(278);
      if (lookahead == '`') ADVANCE(302);
      if (lookahead != 0) ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '\'') ADVANCE(302);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(358);
      if (lookahead == '[') ADVANCE(280);
      if (lookahead == ']') ADVANCE(280);
      if (lookahead == '`') ADVANCE(300);
      if (lookahead != 0) ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(294);
      if (lookahead == '"') ADVANCE(302);
      if (lookahead == '\'') ADVANCE(301);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '?') ADVANCE(359);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == ']') ADVANCE(282);
      if (lookahead == '`') ADVANCE(301);
      if (lookahead != 0) ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(431);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == '"') ADVANCE(302);
      if (lookahead == '\'') ADVANCE(302);
      if (lookahead == '(') ADVANCE(270);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == '?') ADVANCE(360);
      if (lookahead == '[') ADVANCE(284);
      if (lookahead == ']') ADVANCE(284);
      if (lookahead == '`') ADVANCE(302);
      if (lookahead != 0) ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(303);
      if (lookahead == '"') ADVANCE(303);
      if (lookahead == '\'') ADVANCE(306);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == ',') ADVANCE(303);
      if (lookahead == '?') ADVANCE(361);
      if (lookahead == '`') ADVANCE(307);
      if (lookahead == '}') ADVANCE(303);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(244);
      if (lookahead != 0) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(304);
      if (lookahead == '"') ADVANCE(306);
      if (lookahead == '\'') ADVANCE(304);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(304);
      if (lookahead == '?') ADVANCE(362);
      if (lookahead == '`') ADVANCE(308);
      if (lookahead == '}') ADVANCE(304);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(246);
      if (lookahead != 0) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(305);
      if (lookahead == '"') ADVANCE(307);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == ',') ADVANCE(305);
      if (lookahead == '?') ADVANCE(363);
      if (lookahead == '`') ADVANCE(305);
      if (lookahead == '}') ADVANCE(305);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead != 0) ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(306);
      if (lookahead == '"') ADVANCE(306);
      if (lookahead == '\'') ADVANCE(306);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == ',') ADVANCE(306);
      if (lookahead == '?') ADVANCE(364);
      if (lookahead == '`') ADVANCE(309);
      if (lookahead == '}') ADVANCE(306);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(250);
      if (lookahead != 0) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(307);
      if (lookahead == '"') ADVANCE(307);
      if (lookahead == '\'') ADVANCE(309);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ',') ADVANCE(307);
      if (lookahead == '?') ADVANCE(365);
      if (lookahead == '`') ADVANCE(307);
      if (lookahead == '}') ADVANCE(307);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(252);
      if (lookahead != 0) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == '"') ADVANCE(309);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == ',') ADVANCE(308);
      if (lookahead == '?') ADVANCE(366);
      if (lookahead == '`') ADVANCE(308);
      if (lookahead == '}') ADVANCE(308);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(309);
      if (lookahead == '"') ADVANCE(309);
      if (lookahead == '\'') ADVANCE(309);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == ',') ADVANCE(309);
      if (lookahead == '?') ADVANCE(367);
      if (lookahead == '`') ADVANCE(309);
      if (lookahead == '}') ADVANCE(309);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(256);
      if (lookahead != 0) ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(433);
      if (lookahead == ' ') ADVANCE(303);
      if (lookahead == '"') ADVANCE(310);
      if (lookahead == '\'') ADVANCE(313);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == ',') ADVANCE(310);
      if (lookahead == '?') ADVANCE(368);
      if (lookahead == '`') ADVANCE(314);
      if (lookahead == '}') ADVANCE(310);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(272);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(433);
      if (lookahead == ' ') ADVANCE(304);
      if (lookahead == '"') ADVANCE(313);
      if (lookahead == '\'') ADVANCE(311);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(311);
      if (lookahead == '?') ADVANCE(369);
      if (lookahead == '`') ADVANCE(315);
      if (lookahead == '}') ADVANCE(311);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(274);
      if (lookahead != 0) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(433);
      if (lookahead == ' ') ADVANCE(305);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '\'') ADVANCE(315);
      if (lookahead == '(') ADVANCE(262);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == ',') ADVANCE(312);
      if (lookahead == '?') ADVANCE(370);
      if (lookahead == '`') ADVANCE(312);
      if (lookahead == '}') ADVANCE(312);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(276);
      if (lookahead != 0) ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(433);
      if (lookahead == ' ') ADVANCE(306);
      if (lookahead == '"') ADVANCE(313);
      if (lookahead == '\'') ADVANCE(313);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == ',') ADVANCE(313);
      if (lookahead == '?') ADVANCE(371);
      if (lookahead == '`') ADVANCE(316);
      if (lookahead == '}') ADVANCE(313);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(278);
      if (lookahead != 0) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(433);
      if (lookahead == ' ') ADVANCE(307);
      if (lookahead == '"') ADVANCE(314);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ',') ADVANCE(314);
      if (lookahead == '?') ADVANCE(372);
      if (lookahead == '`') ADVANCE(314);
      if (lookahead == '}') ADVANCE(314);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(280);
      if (lookahead != 0) ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(433);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == '"') ADVANCE(316);
      if (lookahead == '\'') ADVANCE(315);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == ',') ADVANCE(315);
      if (lookahead == '?') ADVANCE(373);
      if (lookahead == '`') ADVANCE(315);
      if (lookahead == '}') ADVANCE(315);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(282);
      if (lookahead != 0) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(433);
      if (lookahead == ' ') ADVANCE(309);
      if (lookahead == '"') ADVANCE(316);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == '(') ADVANCE(270);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == ',') ADVANCE(316);
      if (lookahead == '?') ADVANCE(374);
      if (lookahead == '`') ADVANCE(316);
      if (lookahead == '}') ADVANCE(316);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(284);
      if (lookahead != 0) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(450);
      if (lookahead == '"') ADVANCE(317);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(64);
      if (lookahead != 0) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(450);
      if (lookahead == '\'') ADVANCE(318);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(66);
      if (lookahead != 0) ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(450);
      if (lookahead == '`') ADVANCE(319);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(94);
      if (lookahead != 0) ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(450);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(320);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(138);
      if (lookahead != 0) ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(450);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(321);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(139);
      if (lookahead != 0) ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(450);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(322);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(140);
      if (lookahead != 0) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(450);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(323);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(142);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '"') ADVANCE(324);
      if (lookahead == ')') ADVANCE(475);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(325);
      if (lookahead == ')') ADVANCE(476);
      if (lookahead != 0) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == ')') ADVANCE(485);
      if (lookahead == '`') ADVANCE(326);
      if (lookahead != 0) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(327);
      if (lookahead == ')') ADVANCE(486);
      if (lookahead != 0) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(328);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead != 0) ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(329);
      if (lookahead == ')') ADVANCE(488);
      if (lookahead != 0) ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(330);
      if (lookahead == ')') ADVANCE(489);
      if (lookahead != 0) ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == '"') ADVANCE(331);
      if (lookahead == '(') ADVANCE(324);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(64);
      if (lookahead != 0) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == '\'') ADVANCE(332);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(66);
      if (lookahead != 0) ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == '(') ADVANCE(326);
      if (lookahead == '`') ADVANCE(333);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(94);
      if (lookahead != 0) ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(334);
      if (lookahead == '(') ADVANCE(327);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(138);
      if (lookahead != 0) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(335);
      if (lookahead == '(') ADVANCE(328);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(139);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(336);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(140);
      if (lookahead != 0) ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(442);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(337);
      if (lookahead == '(') ADVANCE(330);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(142);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(444);
      if (lookahead == '"') ADVANCE(338);
      if (lookahead == '`') ADVANCE(317);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(1);
      if (lookahead != 0) ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(444);
      if (lookahead == '\'') ADVANCE(339);
      if (lookahead == '`') ADVANCE(318);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(2);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(444);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(340);
      if (lookahead == '`') ADVANCE(320);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(3);
      if (lookahead != 0) ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '"') ADVANCE(341);
      if (lookahead == ')') ADVANCE(452);
      if (lookahead == '`') ADVANCE(324);
      if (lookahead != 0) ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(342);
      if (lookahead == ')') ADVANCE(453);
      if (lookahead == '`') ADVANCE(325);
      if (lookahead != 0) ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(343);
      if (lookahead == ')') ADVANCE(454);
      if (lookahead == '`') ADVANCE(327);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(443);
      if (lookahead == '"') ADVANCE(344);
      if (lookahead == '(') ADVANCE(341);
      if (lookahead == '`') ADVANCE(331);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(1);
      if (lookahead != 0) ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(443);
      if (lookahead == '\'') ADVANCE(345);
      if (lookahead == '(') ADVANCE(342);
      if (lookahead == '`') ADVANCE(332);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(2);
      if (lookahead != 0) ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(443);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(346);
      if (lookahead == '(') ADVANCE(343);
      if (lookahead == '`') ADVANCE(334);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(3);
      if (lookahead != 0) ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '"') ADVANCE(347);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == ']') ADVANCE(317);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(317);
      if (lookahead != 0) ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(348);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ']') ADVANCE(318);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(318);
      if (lookahead != 0) ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == ']') ADVANCE(319);
      if (lookahead == '`') ADVANCE(349);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(319);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(350);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == ']') ADVANCE(320);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(320);
      if (lookahead != 0) ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(351);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ']') ADVANCE(321);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(321);
      if (lookahead != 0) ADVANCE(351);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(352);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == ']') ADVANCE(322);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(322);
      if (lookahead != 0) ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(417);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(353);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == ']') ADVANCE(323);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(323);
      if (lookahead != 0) ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '"') ADVANCE(354);
      if (lookahead == '(') ADVANCE(324);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '[') ADVANCE(331);
      if (lookahead == ']') ADVANCE(331);
      if (lookahead != 0) ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(355);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '[') ADVANCE(332);
      if (lookahead == ']') ADVANCE(332);
      if (lookahead != 0) ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '(') ADVANCE(326);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == '[') ADVANCE(333);
      if (lookahead == ']') ADVANCE(333);
      if (lookahead == '`') ADVANCE(356);
      if (lookahead != 0) ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(357);
      if (lookahead == '(') ADVANCE(327);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '[') ADVANCE(334);
      if (lookahead == ']') ADVANCE(334);
      if (lookahead != 0) ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(358);
      if (lookahead == '(') ADVANCE(328);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '[') ADVANCE(335);
      if (lookahead == ']') ADVANCE(335);
      if (lookahead != 0) ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(359);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '[') ADVANCE(336);
      if (lookahead == ']') ADVANCE(336);
      if (lookahead != 0) ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(416);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(360);
      if (lookahead == '(') ADVANCE(330);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == '[') ADVANCE(337);
      if (lookahead == ']') ADVANCE(337);
      if (lookahead != 0) ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '"') ADVANCE(361);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == ',') ADVANCE(361);
      if (lookahead == '}') ADVANCE(361);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(317);
      if (lookahead != 0) ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(362);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(362);
      if (lookahead == '}') ADVANCE(362);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(318);
      if (lookahead != 0) ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == ',') ADVANCE(363);
      if (lookahead == '`') ADVANCE(363);
      if (lookahead == '}') ADVANCE(363);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(319);
      if (lookahead != 0) ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(364);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == ',') ADVANCE(364);
      if (lookahead == '}') ADVANCE(364);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(320);
      if (lookahead != 0) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(365);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ',') ADVANCE(365);
      if (lookahead == '}') ADVANCE(365);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(321);
      if (lookahead != 0) ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(366);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == ',') ADVANCE(366);
      if (lookahead == '}') ADVANCE(366);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(322);
      if (lookahead != 0) ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(367);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == ',') ADVANCE(367);
      if (lookahead == '}') ADVANCE(367);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(323);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '"') ADVANCE(368);
      if (lookahead == '(') ADVANCE(324);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == ',') ADVANCE(368);
      if (lookahead == '}') ADVANCE(368);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(331);
      if (lookahead != 0) ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(369);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(369);
      if (lookahead == '}') ADVANCE(369);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(332);
      if (lookahead != 0) ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '(') ADVANCE(326);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == ',') ADVANCE(370);
      if (lookahead == '`') ADVANCE(370);
      if (lookahead == '}') ADVANCE(370);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(333);
      if (lookahead != 0) ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(371);
      if (lookahead == '(') ADVANCE(327);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == ',') ADVANCE(371);
      if (lookahead == '}') ADVANCE(371);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(334);
      if (lookahead != 0) ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(372);
      if (lookahead == '(') ADVANCE(328);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ',') ADVANCE(372);
      if (lookahead == '}') ADVANCE(372);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(335);
      if (lookahead != 0) ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(373);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == ',') ADVANCE(373);
      if (lookahead == '}') ADVANCE(373);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(336);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(374);
      if (lookahead == '(') ADVANCE(330);
      if (lookahead == ')') ADVANCE(142);
      if (lookahead == ',') ADVANCE(374);
      if (lookahead == '}') ADVANCE(374);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(337);
      if (lookahead != 0) ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '"') ADVANCE(375);
      if (lookahead == '(') ADVANCE(324);
      if (lookahead == ')') ADVANCE(475);
      if (lookahead != 0) ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(376);
      if (lookahead == '(') ADVANCE(325);
      if (lookahead == ')') ADVANCE(476);
      if (lookahead != 0) ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == '(') ADVANCE(326);
      if (lookahead == ')') ADVANCE(485);
      if (lookahead == '`') ADVANCE(377);
      if (lookahead != 0) ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(378);
      if (lookahead == '(') ADVANCE(327);
      if (lookahead == ')') ADVANCE(486);
      if (lookahead != 0) ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(379);
      if (lookahead == '(') ADVANCE(328);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead != 0) ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(380);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == ')') ADVANCE(488);
      if (lookahead != 0) ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(381);
      if (lookahead == '(') ADVANCE(330);
      if (lookahead == ')') ADVANCE(489);
      if (lookahead != 0) ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead == ' ') ADVANCE(382);
      if (lookahead == '"') ADVANCE(382);
      if (lookahead == '\'') ADVANCE(384);
      if (lookahead == ')') ADVANCE(1);
      if (lookahead == '?') ADVANCE(338);
      if (lookahead == '`') ADVANCE(252);
      if (lookahead != 0) ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead == ' ') ADVANCE(383);
      if (lookahead == '"') ADVANCE(384);
      if (lookahead == '\'') ADVANCE(383);
      if (lookahead == ')') ADVANCE(2);
      if (lookahead == '?') ADVANCE(339);
      if (lookahead == '`') ADVANCE(254);
      if (lookahead != 0) ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead == ' ') ADVANCE(384);
      if (lookahead == '"') ADVANCE(384);
      if (lookahead == '\'') ADVANCE(384);
      if (lookahead == ')') ADVANCE(3);
      if (lookahead == '?') ADVANCE(340);
      if (lookahead == '`') ADVANCE(256);
      if (lookahead != 0) ADVANCE(384);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(402);
      if (lookahead == '"') ADVANCE(385);
      if (lookahead == '\'') ADVANCE(388);
      if (lookahead == '(') ADVANCE(409);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '?') ADVANCE(273);
      if (lookahead == '`') ADVANCE(389);
      if (lookahead != 0) ADVANCE(385);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(403);
      if (lookahead == '"') ADVANCE(388);
      if (lookahead == '\'') ADVANCE(386);
      if (lookahead == '(') ADVANCE(410);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '?') ADVANCE(275);
      if (lookahead == '`') ADVANCE(390);
      if (lookahead != 0) ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(404);
      if (lookahead == '"') ADVANCE(389);
      if (lookahead == '\'') ADVANCE(390);
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '?') ADVANCE(277);
      if (lookahead == '`') ADVANCE(387);
      if (lookahead != 0) ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(405);
      if (lookahead == '"') ADVANCE(388);
      if (lookahead == '\'') ADVANCE(388);
      if (lookahead == '(') ADVANCE(412);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '?') ADVANCE(279);
      if (lookahead == '`') ADVANCE(391);
      if (lookahead != 0) ADVANCE(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(406);
      if (lookahead == '"') ADVANCE(389);
      if (lookahead == '\'') ADVANCE(391);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '?') ADVANCE(281);
      if (lookahead == '`') ADVANCE(389);
      if (lookahead != 0) ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(407);
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '\'') ADVANCE(390);
      if (lookahead == '(') ADVANCE(414);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '?') ADVANCE(283);
      if (lookahead == '`') ADVANCE(390);
      if (lookahead != 0) ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(408);
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '\'') ADVANCE(391);
      if (lookahead == '(') ADVANCE(415);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '?') ADVANCE(285);
      if (lookahead == '`') ADVANCE(391);
      if (lookahead != 0) ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == ' ') ADVANCE(392);
      if (lookahead == '"') ADVANCE(392);
      if (lookahead == '\'') ADVANCE(394);
      if (lookahead == ')') ADVANCE(452);
      if (lookahead == '?') ADVANCE(341);
      if (lookahead == '`') ADVANCE(266);
      if (lookahead != 0) ADVANCE(392);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == ' ') ADVANCE(393);
      if (lookahead == '"') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(393);
      if (lookahead == ')') ADVANCE(453);
      if (lookahead == '?') ADVANCE(342);
      if (lookahead == '`') ADVANCE(268);
      if (lookahead != 0) ADVANCE(393);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == ' ') ADVANCE(394);
      if (lookahead == '"') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(394);
      if (lookahead == ')') ADVANCE(454);
      if (lookahead == '?') ADVANCE(343);
      if (lookahead == '`') ADVANCE(270);
      if (lookahead != 0) ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(258);
      if (lookahead == '"') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == ')') ADVANCE(475);
      if (lookahead == '?') ADVANCE(375);
      if (lookahead == '`') ADVANCE(399);
      if (lookahead != 0) ADVANCE(395);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(260);
      if (lookahead == '"') ADVANCE(398);
      if (lookahead == '\'') ADVANCE(396);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == ')') ADVANCE(476);
      if (lookahead == '?') ADVANCE(376);
      if (lookahead == '`') ADVANCE(400);
      if (lookahead != 0) ADVANCE(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(262);
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(400);
      if (lookahead == '(') ADVANCE(262);
      if (lookahead == ')') ADVANCE(485);
      if (lookahead == '?') ADVANCE(377);
      if (lookahead == '`') ADVANCE(397);
      if (lookahead != 0) ADVANCE(397);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(264);
      if (lookahead == '"') ADVANCE(398);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == '?') ADVANCE(378);
      if (lookahead == '`') ADVANCE(401);
      if (lookahead != 0) ADVANCE(398);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(266);
      if (lookahead == '"') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(401);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == '?') ADVANCE(379);
      if (lookahead == '`') ADVANCE(399);
      if (lookahead != 0) ADVANCE(399);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(268);
      if (lookahead == '"') ADVANCE(401);
      if (lookahead == '\'') ADVANCE(400);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == ')') ADVANCE(488);
      if (lookahead == '?') ADVANCE(380);
      if (lookahead == '`') ADVANCE(400);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(428);
      if (lookahead == ' ') ADVANCE(270);
      if (lookahead == '"') ADVANCE(401);
      if (lookahead == '\'') ADVANCE(401);
      if (lookahead == '(') ADVANCE(270);
      if (lookahead == ')') ADVANCE(489);
      if (lookahead == '?') ADVANCE(381);
      if (lookahead == '`') ADVANCE(401);
      if (lookahead != 0) ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(438);
      if (lookahead == ' ') ADVANCE(402);
      if (lookahead == '"') ADVANCE(402);
      if (lookahead == '\'') ADVANCE(405);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '?') ADVANCE(245);
      if (lookahead == '`') ADVANCE(406);
      if (lookahead != 0) ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(438);
      if (lookahead == ' ') ADVANCE(403);
      if (lookahead == '"') ADVANCE(405);
      if (lookahead == '\'') ADVANCE(403);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '?') ADVANCE(247);
      if (lookahead == '`') ADVANCE(407);
      if (lookahead != 0) ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(438);
      if (lookahead == ' ') ADVANCE(404);
      if (lookahead == '"') ADVANCE(406);
      if (lookahead == '\'') ADVANCE(407);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '?') ADVANCE(249);
      if (lookahead == '`') ADVANCE(404);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(438);
      if (lookahead == ' ') ADVANCE(405);
      if (lookahead == '"') ADVANCE(405);
      if (lookahead == '\'') ADVANCE(405);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '?') ADVANCE(251);
      if (lookahead == '`') ADVANCE(408);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(438);
      if (lookahead == ' ') ADVANCE(406);
      if (lookahead == '"') ADVANCE(406);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '?') ADVANCE(253);
      if (lookahead == '`') ADVANCE(406);
      if (lookahead != 0) ADVANCE(406);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(438);
      if (lookahead == ' ') ADVANCE(407);
      if (lookahead == '"') ADVANCE(408);
      if (lookahead == '\'') ADVANCE(407);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '?') ADVANCE(255);
      if (lookahead == '`') ADVANCE(407);
      if (lookahead != 0) ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(438);
      if (lookahead == ' ') ADVANCE(408);
      if (lookahead == '"') ADVANCE(408);
      if (lookahead == '\'') ADVANCE(408);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '?') ADVANCE(257);
      if (lookahead == '`') ADVANCE(408);
      if (lookahead != 0) ADVANCE(408);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == ' ') ADVANCE(409);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '\'') ADVANCE(412);
      if (lookahead == ')') ADVANCE(455);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == '`') ADVANCE(413);
      if (lookahead != 0) ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == ' ') ADVANCE(410);
      if (lookahead == '"') ADVANCE(412);
      if (lookahead == '\'') ADVANCE(410);
      if (lookahead == ')') ADVANCE(456);
      if (lookahead == '?') ADVANCE(261);
      if (lookahead == '`') ADVANCE(414);
      if (lookahead != 0) ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == ' ') ADVANCE(411);
      if (lookahead == '"') ADVANCE(413);
      if (lookahead == '\'') ADVANCE(414);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '?') ADVANCE(263);
      if (lookahead == '`') ADVANCE(411);
      if (lookahead != 0) ADVANCE(411);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == ' ') ADVANCE(412);
      if (lookahead == '"') ADVANCE(412);
      if (lookahead == '\'') ADVANCE(412);
      if (lookahead == ')') ADVANCE(458);
      if (lookahead == '?') ADVANCE(265);
      if (lookahead == '`') ADVANCE(415);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == ' ') ADVANCE(413);
      if (lookahead == '"') ADVANCE(413);
      if (lookahead == '\'') ADVANCE(415);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '`') ADVANCE(413);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == ' ') ADVANCE(414);
      if (lookahead == '"') ADVANCE(415);
      if (lookahead == '\'') ADVANCE(414);
      if (lookahead == ')') ADVANCE(460);
      if (lookahead == '?') ADVANCE(269);
      if (lookahead == '`') ADVANCE(414);
      if (lookahead != 0) ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == ' ') ADVANCE(415);
      if (lookahead == '"') ADVANCE(415);
      if (lookahead == '\'') ADVANCE(415);
      if (lookahead == ')') ADVANCE(461);
      if (lookahead == '?') ADVANCE(271);
      if (lookahead == '`') ADVANCE(415);
      if (lookahead != 0) ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead == '(') ADVANCE(422);
      if (lookahead == '[') ADVANCE(442);
      if (lookahead == ']') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead == ']') ADVANCE(450);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == '(') ADVANCE(422);
      if (lookahead == ',') ADVANCE(418);
      if (lookahead == '}') ADVANCE(418);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(418);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == ',') ADVANCE(419);
      if (lookahead == '}') ADVANCE(419);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(419);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(70);
      if (lookahead == ')') ADVANCE(484);
      if (lookahead == '`') ADVANCE(422);
      if (lookahead != 0) ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == '(') ADVANCE(422);
      if (lookahead == ')') ADVANCE(451);
      if (lookahead != 0) ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == ')') ADVANCE(451);
      if (lookahead != 0) ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(423);
      if (lookahead == '"') ADVANCE(244);
      if (lookahead == '\'') ADVANCE(246);
      if (lookahead == '?') ADVANCE(450);
      if (lookahead == '`') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(423);
      if (lookahead == '"') ADVANCE(272);
      if (lookahead == '\'') ADVANCE(274);
      if (lookahead == '(') ADVANCE(427);
      if (lookahead == '?') ADVANCE(442);
      if (lookahead == '`') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(424);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(423);
      if (lookahead == '(') ADVANCE(427);
      if (lookahead == '?') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(424);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(423);
      if (lookahead == '?') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(423);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(427);
      if (lookahead == '"') ADVANCE(258);
      if (lookahead == '\'') ADVANCE(260);
      if (lookahead == ')') ADVANCE(451);
      if (lookahead == '?') ADVANCE(422);
      if (lookahead == '`') ADVANCE(262);
      if (lookahead != 0) ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(427);
      if (lookahead == '"') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(396);
      if (lookahead == '(') ADVANCE(427);
      if (lookahead == ')') ADVANCE(451);
      if (lookahead == '?') ADVANCE(421);
      if (lookahead == '`') ADVANCE(397);
      if (lookahead != 0) ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(427);
      if (lookahead == ')') ADVANCE(451);
      if (lookahead == '?') ADVANCE(422);
      if (lookahead != 0) ADVANCE(427);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(430);
      if (lookahead == '"') ADVANCE(289);
      if (lookahead == '\'') ADVANCE(290);
      if (lookahead == '?') ADVANCE(417);
      if (lookahead == ']') ADVANCE(423);
      if (lookahead == '`') ADVANCE(291);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(430);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(430);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '\'') ADVANCE(297);
      if (lookahead == '(') ADVANCE(427);
      if (lookahead == '?') ADVANCE(416);
      if (lookahead == '[') ADVANCE(424);
      if (lookahead == ']') ADVANCE(424);
      if (lookahead == '`') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(431);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(432);
      if (lookahead == '"') ADVANCE(303);
      if (lookahead == '\'') ADVANCE(304);
      if (lookahead == ',') ADVANCE(432);
      if (lookahead == '?') ADVANCE(419);
      if (lookahead == '`') ADVANCE(305);
      if (lookahead == '}') ADVANCE(432);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(432);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(432);
      if (lookahead == '"') ADVANCE(310);
      if (lookahead == '\'') ADVANCE(311);
      if (lookahead == '(') ADVANCE(427);
      if (lookahead == ',') ADVANCE(433);
      if (lookahead == '?') ADVANCE(418);
      if (lookahead == '`') ADVANCE(312);
      if (lookahead == '}') ADVANCE(433);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(433);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(435);
      if (lookahead == '"') ADVANCE(286);
      if (lookahead == '\'') ADVANCE(287);
      if (lookahead == '(') ADVANCE(436);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '?') ADVANCE(443);
      if (lookahead == '`') ADVANCE(276);
      if (lookahead != 0) ADVANCE(434);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(435);
      if (lookahead == '"') ADVANCE(382);
      if (lookahead == '\'') ADVANCE(383);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '?') ADVANCE(444);
      if (lookahead == '`') ADVANCE(248);
      if (lookahead != 0) ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(436);
      if (lookahead == '"') ADVANCE(392);
      if (lookahead == '\'') ADVANCE(393);
      if (lookahead == ')') ADVANCE(484);
      if (lookahead == '?') ADVANCE(420);
      if (lookahead == '`') ADVANCE(262);
      if (lookahead != 0) ADVANCE(436);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(438);
      if (lookahead == '"') ADVANCE(385);
      if (lookahead == '\'') ADVANCE(386);
      if (lookahead == '(') ADVANCE(439);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '?') ADVANCE(425);
      if (lookahead == '`') ADVANCE(387);
      if (lookahead != 0) ADVANCE(437);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(438);
      if (lookahead == '"') ADVANCE(402);
      if (lookahead == '\'') ADVANCE(403);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '?') ADVANCE(426);
      if (lookahead == '`') ADVANCE(404);
      if (lookahead != 0) ADVANCE(438);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(439);
      if (lookahead == '"') ADVANCE(409);
      if (lookahead == '\'') ADVANCE(410);
      if (lookahead == ')') ADVANCE(483);
      if (lookahead == '?') ADVANCE(429);
      if (lookahead == '`') ADVANCE(411);
      if (lookahead != 0) ADVANCE(439);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '(') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(442);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '(') ADVANCE(420);
      if (lookahead == '`') ADVANCE(442);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(92);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '`') ADVANCE(450);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(92);
      if (lookahead != 0) ADVANCE(444);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '`') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(450);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '"') ADVANCE(210);
      if (lookahead == '`') ADVANCE(503);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '\'') ADVANCE(211);
      if (lookahead == '`') ADVANCE(504);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(212);
      if (lookahead == '`') ADVANCE(508);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '"') ADVANCE(227);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == '`') ADVANCE(229);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(230);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(231);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(232);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(233);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == '[') ADVANCE(481);
      if (lookahead == ']') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(462);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == ',') ADVANCE(463);
      if (lookahead == '}') ADVANCE(463);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(463);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(71);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(483);
      if (lookahead == '?') ADVANCE(469);
      if (lookahead != 0) ADVANCE(464);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '?') ADVANCE(470);
      if (lookahead == '[') ADVANCE(479);
      if (lookahead == ']') ADVANCE(479);
      if (lookahead != 0) ADVANCE(465);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(77);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == ',') ADVANCE(466);
      if (lookahead == '?') ADVANCE(471);
      if (lookahead == '}') ADVANCE(466);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(479);
      if (lookahead != 0) ADVANCE(466);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == ')') ADVANCE(451);
      if (lookahead != 0) ADVANCE(467);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(423);
      if (lookahead == '(') ADVANCE(427);
      if (lookahead == '?') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(424);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(427);
      if (lookahead == '(') ADVANCE(427);
      if (lookahead == ')') ADVANCE(451);
      if (lookahead == '?') ADVANCE(467);
      if (lookahead != 0) ADVANCE(428);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(430);
      if (lookahead == '(') ADVANCE(427);
      if (lookahead == '?') ADVANCE(462);
      if (lookahead == '[') ADVANCE(424);
      if (lookahead == ']') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(431);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(432);
      if (lookahead == '(') ADVANCE(427);
      if (lookahead == ',') ADVANCE(433);
      if (lookahead == '?') ADVANCE(463);
      if (lookahead == '}') ADVANCE(433);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(433);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == '"') ADVANCE(632);
      if (lookahead == '\'') ADVANCE(628);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '?') ADVANCE(474);
      if (lookahead == '[') ADVANCE(465);
      if (lookahead == '`') ADVANCE(480);
      if (lookahead == '{') ADVANCE(466);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(472);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(435);
      if (lookahead == '(') ADVANCE(436);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead == '?') ADVANCE(477);
      if (lookahead == '`') ADVANCE(424);
      if (lookahead != 0) ADVANCE(434);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(438);
      if (lookahead == '(') ADVANCE(439);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '?') ADVANCE(481);
      if (lookahead != 0) ADVANCE(437);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '`') ADVANCE(481);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(92);
      if (lookahead != 0) ADVANCE(477);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == '?') ADVANCE(481);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(87);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == '?') ADVANCE(468);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(87);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == '?') ADVANCE(473);
      if (lookahead == '`') ADVANCE(479);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(86);
      if (lookahead != 0) ADVANCE(480);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(481);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '?') ADVANCE(93);
      if (lookahead == '`') ADVANCE(507);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '?') ADVANCE(148);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '`') ADVANCE(499);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '`') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '"') ADVANCE(220);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(490);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(64);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(221);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(491);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(66);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '`') ADVANCE(222);
      if (lookahead == '}') ADVANCE(492);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(94);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(223);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(493);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(138);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(224);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(494);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(139);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(225);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(495);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(140);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(226);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(496);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(142);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '}') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '?') ADVANCE(78);
      if (lookahead == '}') ADVANCE(498);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(87);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"') ADVANCE(237);
      if (lookahead == ')') ADVANCE(475);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(238);
      if (lookahead == ')') ADVANCE(476);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(240);
      if (lookahead == ')') ADVANCE(486);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '"') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == ')') ADVANCE(483);
      if (lookahead == '?') ADVANCE(74);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == ')') ADVANCE(451);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '?') ADVANCE(148);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '?') ADVANCE(148);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '`') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__attribute_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(518);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(587);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(607);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(591);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(608);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(597);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(584);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(599);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(585);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(602);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(586);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(605);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(179);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(554);
      if (lookahead == 'o') ADVANCE(531);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(570);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(593);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(555);
      if (lookahead == 'o') ADVANCE(533);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(571);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(594);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(596);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(167);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(526);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(528);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(168);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(546);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(543);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(578);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(579);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(582);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(544);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(601);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(604);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(547);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(551);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(590);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(595);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(598);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(187);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(562);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(565);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(566);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(531);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(533);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(535);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(600);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(603);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(538);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(541);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(606);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(550);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(559);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(560);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(561);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(536);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(173);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(537);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(539);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(588);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(589);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(540);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(592);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(548);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(549);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(609);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(522);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(191);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(610);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(523);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(192);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(611);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(524);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(563);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(564);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(580);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(581);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(583);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(615);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(618);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(616);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(619);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(617);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(620);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token1);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token2);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == '?') ADVANCE(468);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(87);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(630);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(630);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == '?') ADVANCE(468);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(87);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(634);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(634);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '{') ADVANCE(636);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '{') ADVANCE(636);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(649);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(651);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(639);
      if (lookahead == ' ') ADVANCE(639);
      if (lookahead == '!') ADVANCE(642);
      if (lookahead == '#') ADVANCE(647);
      if (lookahead == '-') ADVANCE(668);
      if (lookahead == '.') ADVANCE(646);
      if (lookahead == '/') ADVANCE(641);
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == 'c') ADVANCE(529);
      if (lookahead == 'd') ADVANCE(577);
      if (lookahead == 'e') ADVANCE(569);
      if (lookahead == 'i') ADVANCE(556);
      if (lookahead == 's') ADVANCE(534);
      if (lookahead == 'u') ADVANCE(574);
      if (lookahead == '|') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead != 0) ADVANCE(648);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\n') ADVANCE(640);
      if (lookahead == ' ') ADVANCE(640);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(640);
      if (lookahead != 0) ADVANCE(648);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '/') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '=') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == 'f') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == 'i') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(646);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(620);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
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
      if (lookahead == '=') ADVANCE(197);
      if (lookahead == 'c') ADVANCE(527);
      if (lookahead == 'd') ADVANCE(545);
      if (lookahead == 'e') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(553);
      if (lookahead == 's') ADVANCE(532);
      if (lookahead == 'u') ADVANCE(573);
      if (lookahead == 'w') ADVANCE(557);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
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
      if (lookahead == '=') ADVANCE(197);
      if (lookahead == 'c') ADVANCE(527);
      if (lookahead == 'd') ADVANCE(576);
      if (lookahead == 'e') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(553);
      if (lookahead == 's') ADVANCE(532);
      if (lookahead == 'u') ADVANCE(573);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '/') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'f') ADVANCE(170);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
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
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(619);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(665);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
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
          lookahead != '\n') ADVANCE(648);
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
  [1] = {.lex_state = 153},
  [2] = {.lex_state = 153},
  [3] = {.lex_state = 153},
  [4] = {.lex_state = 152, .external_lex_state = 2},
  [5] = {.lex_state = 152, .external_lex_state = 2},
  [6] = {.lex_state = 152, .external_lex_state = 2},
  [7] = {.lex_state = 152, .external_lex_state = 3},
  [8] = {.lex_state = 152, .external_lex_state = 2},
  [9] = {.lex_state = 149, .external_lex_state = 2},
  [10] = {.lex_state = 149, .external_lex_state = 2},
  [11] = {.lex_state = 152, .external_lex_state = 4},
  [12] = {.lex_state = 152, .external_lex_state = 2},
  [13] = {.lex_state = 152, .external_lex_state = 4},
  [14] = {.lex_state = 152, .external_lex_state = 2},
  [15] = {.lex_state = 152, .external_lex_state = 4},
  [16] = {.lex_state = 152, .external_lex_state = 4},
  [17] = {.lex_state = 152},
  [18] = {.lex_state = 152, .external_lex_state = 4},
  [19] = {.lex_state = 152, .external_lex_state = 3},
  [20] = {.lex_state = 152, .external_lex_state = 4},
  [21] = {.lex_state = 153, .external_lex_state = 2},
  [22] = {.lex_state = 153, .external_lex_state = 2},
  [23] = {.lex_state = 153, .external_lex_state = 2},
  [24] = {.lex_state = 152},
  [25] = {.lex_state = 152, .external_lex_state = 2},
  [26] = {.lex_state = 149, .external_lex_state = 2},
  [27] = {.lex_state = 152, .external_lex_state = 4},
  [28] = {.lex_state = 152, .external_lex_state = 4},
  [29] = {.lex_state = 151, .external_lex_state = 2},
  [30] = {.lex_state = 153, .external_lex_state = 4},
  [31] = {.lex_state = 152, .external_lex_state = 2},
  [32] = {.lex_state = 152, .external_lex_state = 2},
  [33] = {.lex_state = 152, .external_lex_state = 2},
  [34] = {.lex_state = 152, .external_lex_state = 2},
  [35] = {.lex_state = 152, .external_lex_state = 2},
  [36] = {.lex_state = 152, .external_lex_state = 2},
  [37] = {.lex_state = 152, .external_lex_state = 2},
  [38] = {.lex_state = 152, .external_lex_state = 2},
  [39] = {.lex_state = 152, .external_lex_state = 2},
  [40] = {.lex_state = 152, .external_lex_state = 2},
  [41] = {.lex_state = 152, .external_lex_state = 2},
  [42] = {.lex_state = 151, .external_lex_state = 2},
  [43] = {.lex_state = 150, .external_lex_state = 2},
  [44] = {.lex_state = 152, .external_lex_state = 2},
  [45] = {.lex_state = 153, .external_lex_state = 4},
  [46] = {.lex_state = 152, .external_lex_state = 2},
  [47] = {.lex_state = 152, .external_lex_state = 2},
  [48] = {.lex_state = 152, .external_lex_state = 2},
  [49] = {.lex_state = 152, .external_lex_state = 2},
  [50] = {.lex_state = 152, .external_lex_state = 2},
  [51] = {.lex_state = 152, .external_lex_state = 2},
  [52] = {.lex_state = 153, .external_lex_state = 4},
  [53] = {.lex_state = 152, .external_lex_state = 2},
  [54] = {.lex_state = 152, .external_lex_state = 2},
  [55] = {.lex_state = 150, .external_lex_state = 2},
  [56] = {.lex_state = 151, .external_lex_state = 2},
  [57] = {.lex_state = 151, .external_lex_state = 2},
  [58] = {.lex_state = 151, .external_lex_state = 2},
  [59] = {.lex_state = 152, .external_lex_state = 2},
  [60] = {.lex_state = 152, .external_lex_state = 2},
  [61] = {.lex_state = 152, .external_lex_state = 2},
  [62] = {.lex_state = 152, .external_lex_state = 2},
  [63] = {.lex_state = 152, .external_lex_state = 2},
  [64] = {.lex_state = 153, .external_lex_state = 4},
  [65] = {.lex_state = 153, .external_lex_state = 4},
  [66] = {.lex_state = 153, .external_lex_state = 4},
  [67] = {.lex_state = 153},
  [68] = {.lex_state = 153},
  [69] = {.lex_state = 153, .external_lex_state = 5},
  [70] = {.lex_state = 153},
  [71] = {.lex_state = 152},
  [72] = {.lex_state = 153, .external_lex_state = 5},
  [73] = {.lex_state = 153, .external_lex_state = 4},
  [74] = {.lex_state = 153, .external_lex_state = 5},
  [75] = {.lex_state = 153, .external_lex_state = 5},
  [76] = {.lex_state = 150, .external_lex_state = 2},
  [77] = {.lex_state = 151, .external_lex_state = 2},
  [78] = {.lex_state = 152},
  [79] = {.lex_state = 153, .external_lex_state = 5},
  [80] = {.lex_state = 153, .external_lex_state = 5},
  [81] = {.lex_state = 153, .external_lex_state = 2},
  [82] = {.lex_state = 153, .external_lex_state = 2},
  [83] = {.lex_state = 153, .external_lex_state = 2},
  [84] = {.lex_state = 153, .external_lex_state = 5},
  [85] = {.lex_state = 153, .external_lex_state = 2},
  [86] = {.lex_state = 153, .external_lex_state = 2},
  [87] = {.lex_state = 153, .external_lex_state = 2},
  [88] = {.lex_state = 153, .external_lex_state = 2},
  [89] = {.lex_state = 153, .external_lex_state = 5},
  [90] = {.lex_state = 153, .external_lex_state = 2},
  [91] = {.lex_state = 153, .external_lex_state = 2},
  [92] = {.lex_state = 153, .external_lex_state = 2},
  [93] = {.lex_state = 153, .external_lex_state = 2},
  [94] = {.lex_state = 153, .external_lex_state = 2},
  [95] = {.lex_state = 153, .external_lex_state = 5},
  [96] = {.lex_state = 153, .external_lex_state = 2},
  [97] = {.lex_state = 153, .external_lex_state = 2},
  [98] = {.lex_state = 153, .external_lex_state = 2},
  [99] = {.lex_state = 153, .external_lex_state = 2},
  [100] = {.lex_state = 153, .external_lex_state = 2},
  [101] = {.lex_state = 153, .external_lex_state = 2},
  [102] = {.lex_state = 153, .external_lex_state = 2},
  [103] = {.lex_state = 153, .external_lex_state = 2},
  [104] = {.lex_state = 153},
  [105] = {.lex_state = 153},
  [106] = {.lex_state = 153},
  [107] = {.lex_state = 153},
  [108] = {.lex_state = 153},
  [109] = {.lex_state = 153},
  [110] = {.lex_state = 153},
  [111] = {.lex_state = 153},
  [112] = {.lex_state = 153},
  [113] = {.lex_state = 153},
  [114] = {.lex_state = 153},
  [115] = {.lex_state = 153},
  [116] = {.lex_state = 153},
  [117] = {.lex_state = 153},
  [118] = {.lex_state = 153},
  [119] = {.lex_state = 153},
  [120] = {.lex_state = 153},
  [121] = {.lex_state = 153},
  [122] = {.lex_state = 153},
  [123] = {.lex_state = 153},
  [124] = {.lex_state = 153},
  [125] = {.lex_state = 153},
  [126] = {.lex_state = 153},
  [127] = {.lex_state = 153},
  [128] = {.lex_state = 153},
  [129] = {.lex_state = 54, .external_lex_state = 6},
  [130] = {.lex_state = 54, .external_lex_state = 6},
  [131] = {.lex_state = 54, .external_lex_state = 6},
  [132] = {.lex_state = 54, .external_lex_state = 6},
  [133] = {.lex_state = 54, .external_lex_state = 6},
  [134] = {.lex_state = 54, .external_lex_state = 6},
  [135] = {.lex_state = 54, .external_lex_state = 6},
  [136] = {.lex_state = 54, .external_lex_state = 6},
  [137] = {.lex_state = 61},
  [138] = {.lex_state = 61},
  [139] = {.lex_state = 61},
  [140] = {.lex_state = 61},
  [141] = {.lex_state = 61},
  [142] = {.lex_state = 61},
  [143] = {.lex_state = 61},
  [144] = {.lex_state = 61},
  [145] = {.lex_state = 61},
  [146] = {.lex_state = 61},
  [147] = {.lex_state = 61},
  [148] = {.lex_state = 61},
  [149] = {.lex_state = 55},
  [150] = {.lex_state = 55},
  [151] = {.lex_state = 67},
  [152] = {.lex_state = 67},
  [153] = {.lex_state = 67},
  [154] = {.lex_state = 54, .external_lex_state = 6},
  [155] = {.lex_state = 55, .external_lex_state = 6},
  [156] = {.lex_state = 55, .external_lex_state = 6},
  [157] = {.lex_state = 55, .external_lex_state = 6},
  [158] = {.lex_state = 61, .external_lex_state = 2},
  [159] = {.lex_state = 61, .external_lex_state = 2},
  [160] = {.lex_state = 55, .external_lex_state = 6},
  [161] = {.lex_state = 55, .external_lex_state = 6},
  [162] = {.lex_state = 55, .external_lex_state = 6},
  [163] = {.lex_state = 55, .external_lex_state = 6},
  [164] = {.lex_state = 55, .external_lex_state = 6},
  [165] = {.lex_state = 11, .external_lex_state = 2},
  [166] = {.lex_state = 61},
  [167] = {.lex_state = 61},
  [168] = {.lex_state = 11, .external_lex_state = 2},
  [169] = {.lex_state = 11, .external_lex_state = 2},
  [170] = {.lex_state = 61},
  [171] = {.lex_state = 11, .external_lex_state = 2},
  [172] = {.lex_state = 11, .external_lex_state = 2},
  [173] = {.lex_state = 61},
  [174] = {.lex_state = 11, .external_lex_state = 2},
  [175] = {.lex_state = 11, .external_lex_state = 2},
  [176] = {.lex_state = 62},
  [177] = {.lex_state = 11, .external_lex_state = 2},
  [178] = {.lex_state = 11, .external_lex_state = 2},
  [179] = {.lex_state = 11, .external_lex_state = 6},
  [180] = {.lex_state = 11},
  [181] = {.lex_state = 61, .external_lex_state = 4},
  [182] = {.lex_state = 11},
  [183] = {.lex_state = 11, .external_lex_state = 6},
  [184] = {.lex_state = 61, .external_lex_state = 4},
  [185] = {.lex_state = 11, .external_lex_state = 6},
  [186] = {.lex_state = 11, .external_lex_state = 6},
  [187] = {.lex_state = 11, .external_lex_state = 6},
  [188] = {.lex_state = 11, .external_lex_state = 6},
  [189] = {.lex_state = 11},
  [190] = {.lex_state = 11},
  [191] = {.lex_state = 61, .external_lex_state = 4},
  [192] = {.lex_state = 61, .external_lex_state = 4},
  [193] = {.lex_state = 11, .external_lex_state = 6},
  [194] = {.lex_state = 11, .external_lex_state = 6},
  [195] = {.lex_state = 61, .external_lex_state = 4},
  [196] = {.lex_state = 11, .external_lex_state = 6},
  [197] = {.lex_state = 11, .external_lex_state = 6},
  [198] = {.lex_state = 11, .external_lex_state = 6},
  [199] = {.lex_state = 11},
  [200] = {.lex_state = 11, .external_lex_state = 6},
  [201] = {.lex_state = 11},
  [202] = {.lex_state = 11, .external_lex_state = 6},
  [203] = {.lex_state = 61, .external_lex_state = 4},
  [204] = {.lex_state = 11, .external_lex_state = 6},
  [205] = {.lex_state = 11, .external_lex_state = 6},
  [206] = {.lex_state = 11, .external_lex_state = 6},
  [207] = {.lex_state = 11, .external_lex_state = 6},
  [208] = {.lex_state = 11},
  [209] = {.lex_state = 11, .external_lex_state = 6},
  [210] = {.lex_state = 11, .external_lex_state = 6},
  [211] = {.lex_state = 11, .external_lex_state = 6},
  [212] = {.lex_state = 11, .external_lex_state = 6},
  [213] = {.lex_state = 11, .external_lex_state = 6},
  [214] = {.lex_state = 11},
  [215] = {.lex_state = 61, .external_lex_state = 2},
  [216] = {.lex_state = 11},
  [217] = {.lex_state = 11},
  [218] = {.lex_state = 55, .external_lex_state = 6},
  [219] = {.lex_state = 11, .external_lex_state = 6},
  [220] = {.lex_state = 55, .external_lex_state = 6},
  [221] = {.lex_state = 61, .external_lex_state = 2},
  [222] = {.lex_state = 11},
  [223] = {.lex_state = 61, .external_lex_state = 2},
  [224] = {.lex_state = 11},
  [225] = {.lex_state = 11},
  [226] = {.lex_state = 11},
  [227] = {.lex_state = 61, .external_lex_state = 4},
  [228] = {.lex_state = 55, .external_lex_state = 6},
  [229] = {.lex_state = 11},
  [230] = {.lex_state = 11},
  [231] = {.lex_state = 55},
  [232] = {.lex_state = 11},
  [233] = {.lex_state = 61, .external_lex_state = 2},
  [234] = {.lex_state = 11},
  [235] = {.lex_state = 61, .external_lex_state = 2},
  [236] = {.lex_state = 11},
  [237] = {.lex_state = 11},
  [238] = {.lex_state = 67},
  [239] = {.lex_state = 61, .external_lex_state = 2},
  [240] = {.lex_state = 61, .external_lex_state = 2},
  [241] = {.lex_state = 61, .external_lex_state = 2},
  [242] = {.lex_state = 61, .external_lex_state = 2},
  [243] = {.lex_state = 61, .external_lex_state = 2},
  [244] = {.lex_state = 61, .external_lex_state = 2},
  [245] = {.lex_state = 61, .external_lex_state = 2},
  [246] = {.lex_state = 61, .external_lex_state = 2},
  [247] = {.lex_state = 61, .external_lex_state = 2},
  [248] = {.lex_state = 61, .external_lex_state = 2},
  [249] = {.lex_state = 55},
  [250] = {.lex_state = 61, .external_lex_state = 2},
  [251] = {.lex_state = 61, .external_lex_state = 2},
  [252] = {.lex_state = 61, .external_lex_state = 2},
  [253] = {.lex_state = 61, .external_lex_state = 2},
  [254] = {.lex_state = 61, .external_lex_state = 2},
  [255] = {.lex_state = 61, .external_lex_state = 2},
  [256] = {.lex_state = 61, .external_lex_state = 2},
  [257] = {.lex_state = 61, .external_lex_state = 2},
  [258] = {.lex_state = 61},
  [259] = {.lex_state = 61},
  [260] = {.lex_state = 11, .external_lex_state = 6},
  [261] = {.lex_state = 61},
  [262] = {.lex_state = 61},
  [263] = {.lex_state = 11, .external_lex_state = 6},
  [264] = {.lex_state = 61},
  [265] = {.lex_state = 61},
  [266] = {.lex_state = 55},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 11, .external_lex_state = 6},
  [269] = {.lex_state = 11, .external_lex_state = 6},
  [270] = {.lex_state = 61},
  [271] = {.lex_state = 11, .external_lex_state = 2},
  [272] = {.lex_state = 11, .external_lex_state = 6},
  [273] = {.lex_state = 61},
  [274] = {.lex_state = 61},
  [275] = {.lex_state = 50, .external_lex_state = 3},
  [276] = {.lex_state = 61},
  [277] = {.lex_state = 61},
  [278] = {.lex_state = 61},
  [279] = {.lex_state = 61},
  [280] = {.lex_state = 61},
  [281] = {.lex_state = 11, .external_lex_state = 6},
  [282] = {.lex_state = 53, .external_lex_state = 6},
  [283] = {.lex_state = 54},
  [284] = {.lex_state = 61},
  [285] = {.lex_state = 61},
  [286] = {.lex_state = 54},
  [287] = {.lex_state = 61},
  [288] = {.lex_state = 53, .external_lex_state = 6},
  [289] = {.lex_state = 50, .external_lex_state = 3},
  [290] = {.lex_state = 61},
  [291] = {.lex_state = 54},
  [292] = {.lex_state = 50, .external_lex_state = 3},
  [293] = {.lex_state = 53},
  [294] = {.lex_state = 53},
  [295] = {.lex_state = 54},
  [296] = {.lex_state = 54},
  [297] = {.lex_state = 54},
  [298] = {.lex_state = 54},
  [299] = {.lex_state = 53},
  [300] = {.lex_state = 53},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 54},
  [304] = {.lex_state = 54},
  [305] = {.lex_state = 54},
  [306] = {.lex_state = 54},
  [307] = {.lex_state = 50, .external_lex_state = 6},
  [308] = {.lex_state = 50, .external_lex_state = 3},
  [309] = {.lex_state = 53},
  [310] = {.lex_state = 53},
  [311] = {.lex_state = 61},
  [312] = {.lex_state = 54},
  [313] = {.lex_state = 54},
  [314] = {.lex_state = 54},
  [315] = {.lex_state = 53},
  [316] = {.lex_state = 54},
  [317] = {.lex_state = 54},
  [318] = {.lex_state = 54},
  [319] = {.lex_state = 53},
  [320] = {.lex_state = 53},
  [321] = {.lex_state = 53},
  [322] = {.lex_state = 54},
  [323] = {.lex_state = 63},
  [324] = {.lex_state = 65},
  [325] = {.lex_state = 53},
  [326] = {.lex_state = 58, .external_lex_state = 6},
  [327] = {.lex_state = 54},
  [328] = {.lex_state = 65},
  [329] = {.lex_state = 63},
  [330] = {.lex_state = 0, .external_lex_state = 6},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0, .external_lex_state = 6},
  [334] = {.lex_state = 0, .external_lex_state = 6},
  [335] = {.lex_state = 67},
  [336] = {.lex_state = 51},
  [337] = {.lex_state = 0, .external_lex_state = 6},
  [338] = {.lex_state = 0, .external_lex_state = 5},
  [339] = {.lex_state = 0, .external_lex_state = 6},
  [340] = {.lex_state = 0, .external_lex_state = 5},
  [341] = {.lex_state = 0, .external_lex_state = 6},
  [342] = {.lex_state = 669},
  [343] = {.lex_state = 0, .external_lex_state = 6},
  [344] = {.lex_state = 0, .external_lex_state = 6},
  [345] = {.lex_state = 0, .external_lex_state = 5},
  [346] = {.lex_state = 153},
  [347] = {.lex_state = 0, .external_lex_state = 5},
  [348] = {.lex_state = 0, .external_lex_state = 6},
  [349] = {.lex_state = 52},
  [350] = {.lex_state = 52},
  [351] = {.lex_state = 0, .external_lex_state = 6},
  [352] = {.lex_state = 0, .external_lex_state = 5},
  [353] = {.lex_state = 669},
  [354] = {.lex_state = 0, .external_lex_state = 6},
  [355] = {.lex_state = 0, .external_lex_state = 6},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 53},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0, .external_lex_state = 5},
  [362] = {.lex_state = 0, .external_lex_state = 5},
  [363] = {.lex_state = 0, .external_lex_state = 5},
  [364] = {.lex_state = 0, .external_lex_state = 5},
  [365] = {.lex_state = 0, .external_lex_state = 5},
  [366] = {.lex_state = 0, .external_lex_state = 5},
  [367] = {.lex_state = 0, .external_lex_state = 5},
  [368] = {.lex_state = 0, .external_lex_state = 6},
  [369] = {.lex_state = 0, .external_lex_state = 6},
  [370] = {.lex_state = 0, .external_lex_state = 6},
  [371] = {.lex_state = 0, .external_lex_state = 6},
  [372] = {.lex_state = 0, .external_lex_state = 6},
  [373] = {.lex_state = 0, .external_lex_state = 6},
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
    [sym_source_file] = STATE(331),
    [sym_doctype] = STATE(3),
    [sym_pipe] = STATE(3),
    [sym_conditional] = STATE(3),
    [sym_case] = STATE(3),
    [sym_unescaped_buffered_code] = STATE(3),
    [sym_buffered_code] = STATE(3),
    [sym_script_block] = STATE(3),
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
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_doctype,
    ACTIONS(36), 1,
      anon_sym_PIPE,
    ACTIONS(42), 1,
      anon_sym_elseif,
    ACTIONS(45), 1,
      anon_sym_else,
    ACTIONS(48), 1,
      anon_sym_case,
    ACTIONS(51), 1,
      anon_sym_BANG_EQ,
    ACTIONS(54), 1,
      anon_sym_EQ,
    ACTIONS(57), 1,
      anon_sym_script_DOT,
    ACTIONS(60), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(63), 1,
      sym_tag_name,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(39), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(66), 2,
      sym_class,
      sym_id,
    STATE(2), 11,
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
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(27), 2,
      sym_class,
      sym_id,
    STATE(2), 11,
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
  [116] = 6,
    ACTIONS(78), 1,
      anon_sym_PIPE,
    ACTIONS(81), 1,
      sym_tag_name,
    ACTIONS(84), 2,
      sym_class,
      sym_id,
    STATE(4), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(76), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(74), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [152] = 7,
    ACTIONS(91), 1,
      anon_sym_PIPE,
    ACTIONS(93), 1,
      sym_tag_name,
    ACTIONS(97), 1,
      sym__dedent,
    ACTIONS(95), 2,
      sym_class,
      sym_id,
    STATE(4), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(87), 7,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
    ACTIONS(89), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
  [190] = 7,
    ACTIONS(93), 1,
      sym_tag_name,
    ACTIONS(103), 1,
      anon_sym_DASH,
    STATE(61), 1,
      sym_unbuffered_code,
    ACTIONS(95), 2,
      sym_class,
      sym_id,
    STATE(12), 2,
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
  [227] = 6,
    ACTIONS(109), 1,
      anon_sym_COLON,
    ACTIONS(111), 1,
      sym__newline,
    ACTIONS(113), 1,
      sym__dedent,
    STATE(46), 1,
      sym__when_content,
    ACTIONS(107), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(105), 10,
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
  [262] = 7,
    ACTIONS(93), 1,
      sym_tag_name,
    ACTIONS(103), 1,
      anon_sym_DASH,
    STATE(59), 1,
      sym_unbuffered_code,
    ACTIONS(95), 2,
      sym_class,
      sym_id,
    STATE(14), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(117), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(115), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
  [299] = 4,
    ACTIONS(123), 1,
      sym__un_delimited_javascript_line,
    STATE(9), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(119), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(121), 17,
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
  [329] = 4,
    ACTIONS(130), 1,
      sym__un_delimited_javascript_line,
    STATE(9), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(126), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(128), 17,
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
  [359] = 4,
    ACTIONS(136), 1,
      sym__indent,
    STATE(53), 1,
      sym_children,
    ACTIONS(134), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(132), 11,
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
  [389] = 5,
    ACTIONS(93), 1,
      sym_tag_name,
    ACTIONS(95), 2,
      sym_class,
      sym_id,
    STATE(25), 2,
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
    ACTIONS(138), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [421] = 4,
    ACTIONS(146), 1,
      sym__indent,
    STATE(49), 1,
      sym_children,
    ACTIONS(144), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(142), 11,
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
  [451] = 5,
    ACTIONS(93), 1,
      sym_tag_name,
    ACTIONS(95), 2,
      sym_class,
      sym_id,
    STATE(25), 2,
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
  [483] = 4,
    ACTIONS(148), 1,
      sym__indent,
    STATE(49), 1,
      sym_children,
    ACTIONS(144), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(142), 11,
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
  [513] = 4,
    ACTIONS(146), 1,
      sym__indent,
    STATE(35), 1,
      sym_children,
    ACTIONS(152), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(150), 11,
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
  [543] = 6,
    ACTIONS(158), 1,
      anon_sym_when,
    ACTIONS(161), 1,
      anon_sym_default,
    STATE(7), 1,
      sym__when_keyword,
    STATE(17), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(156), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(154), 10,
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
  [577] = 4,
    ACTIONS(168), 1,
      sym__indent,
    STATE(39), 1,
      sym_children,
    ACTIONS(166), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(164), 11,
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
  [607] = 2,
    ACTIONS(172), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(170), 13,
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
  [633] = 4,
    ACTIONS(146), 1,
      sym__indent,
    STATE(32), 1,
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
    ACTIONS(174), 11,
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
  [663] = 6,
    ACTIONS(178), 1,
      anon_sym_PIPE,
    ACTIONS(181), 1,
      sym_tag_name,
    ACTIONS(184), 2,
      sym_class,
      sym_id,
    STATE(21), 4,
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
    ACTIONS(74), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [697] = 7,
    ACTIONS(187), 1,
      anon_sym_PIPE,
    ACTIONS(189), 1,
      sym_tag_name,
    ACTIONS(193), 1,
      sym__dedent,
    ACTIONS(191), 2,
      sym_class,
      sym_id,
    STATE(21), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(89), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
    ACTIONS(87), 7,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [733] = 7,
    ACTIONS(187), 1,
      anon_sym_PIPE,
    ACTIONS(189), 1,
      sym_tag_name,
    ACTIONS(195), 1,
      sym__dedent,
    ACTIONS(191), 2,
      sym_class,
      sym_id,
    STATE(21), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(89), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
    ACTIONS(87), 7,
      ts_builtin_sym_end,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [769] = 6,
    ACTIONS(201), 1,
      anon_sym_when,
    ACTIONS(203), 1,
      anon_sym_default,
    STATE(7), 1,
      sym__when_keyword,
    STATE(17), 2,
      sym_when,
      aux_sym_case_repeat1,
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
  [803] = 5,
    ACTIONS(209), 1,
      sym_tag_name,
    ACTIONS(212), 2,
      sym_class,
      sym_id,
    STATE(25), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(207), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(205), 9,
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
  [889] = 3,
    ACTIONS(231), 1,
      sym__indent,
    ACTIONS(229), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(227), 11,
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
  [916] = 5,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
    ACTIONS(237), 1,
      sym__comment_content,
    ACTIONS(239), 1,
      sym__dedent,
    STATE(42), 1,
      aux_sym_comment_repeat1,
    ACTIONS(235), 15,
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
  [946] = 4,
    ACTIONS(241), 1,
      sym__indent,
    STATE(98), 1,
      sym_children,
    ACTIONS(166), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(164), 11,
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
  [974] = 2,
    ACTIONS(245), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(243), 11,
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
  [998] = 2,
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
  [1022] = 2,
    ACTIONS(176), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(174), 11,
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
  [1046] = 2,
    ACTIONS(253), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(251), 11,
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
  [1070] = 2,
    ACTIONS(176), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(174), 11,
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
  [1094] = 2,
    ACTIONS(166), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(164), 11,
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
  [1118] = 2,
    ACTIONS(257), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(255), 11,
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
  [1142] = 2,
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
  [1166] = 2,
    ACTIONS(134), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(132), 11,
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
  [1190] = 2,
    ACTIONS(134), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(132), 11,
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
  [1214] = 2,
    ACTIONS(265), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(263), 11,
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
  [1238] = 4,
    ACTIONS(271), 1,
      sym__comment_content,
    STATE(42), 1,
      aux_sym_comment_repeat1,
    ACTIONS(267), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(269), 15,
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
  [1266] = 4,
    ACTIONS(274), 1,
      sym__un_delimited_javascript_line,
    STATE(55), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(126), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(128), 15,
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
  [1294] = 2,
    ACTIONS(278), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(276), 11,
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
  [1318] = 4,
    ACTIONS(280), 1,
      sym__indent,
    STATE(87), 1,
      sym_children,
    ACTIONS(176), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(174), 11,
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
  [1346] = 3,
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
  [1372] = 2,
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
  [1396] = 2,
    ACTIONS(152), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(150), 11,
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
  [1420] = 2,
    ACTIONS(152), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(150), 11,
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
  [1444] = 2,
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
  [1468] = 3,
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
  [1494] = 4,
    ACTIONS(280), 1,
      sym__indent,
    STATE(101), 1,
      sym_children,
    ACTIONS(152), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(150), 11,
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
  [1522] = 2,
    ACTIONS(144), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(142), 11,
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
  [1546] = 2,
    ACTIONS(298), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(296), 11,
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
  [1570] = 4,
    ACTIONS(300), 1,
      sym__un_delimited_javascript_line,
    STATE(55), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(119), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(121), 15,
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
  [1598] = 5,
    ACTIONS(237), 1,
      sym__comment_content,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
    ACTIONS(307), 1,
      sym__dedent,
    STATE(29), 1,
      aux_sym_comment_repeat1,
    ACTIONS(305), 15,
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
  [1628] = 5,
    ACTIONS(237), 1,
      sym__comment_content,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
    ACTIONS(307), 1,
      sym__dedent,
    STATE(42), 1,
      aux_sym_comment_repeat1,
    ACTIONS(305), 15,
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
  [1658] = 5,
    ACTIONS(237), 1,
      sym__comment_content,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
    ACTIONS(313), 1,
      sym__dedent,
    STATE(57), 1,
      aux_sym_comment_repeat1,
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
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1688] = 2,
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
  [1712] = 2,
    ACTIONS(144), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(142), 11,
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
  [1736] = 2,
    ACTIONS(140), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(138), 11,
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
  [1760] = 3,
    ACTIONS(319), 1,
      sym__dedent,
    ACTIONS(317), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(315), 10,
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
  [1786] = 2,
    ACTIONS(323), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      sym_tag_name,
    ACTIONS(321), 11,
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
  [1810] = 4,
    ACTIONS(325), 1,
      sym__indent,
    STATE(90), 1,
      sym_children,
    ACTIONS(144), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(142), 11,
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
  [1838] = 4,
    ACTIONS(327), 1,
      sym__indent,
    STATE(88), 1,
      sym_children,
    ACTIONS(134), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(132), 11,
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
  [1866] = 4,
    ACTIONS(280), 1,
      sym__indent,
    STATE(90), 1,
      sym_children,
    ACTIONS(144), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(142), 11,
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
  [1894] = 5,
    ACTIONS(329), 1,
      sym_tag_name,
    ACTIONS(332), 2,
      sym_class,
      sym_id,
    STATE(67), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(207), 5,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
    ACTIONS(205), 8,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH,
      anon_sym_DASH,
  [1923] = 3,
    STATE(67), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(337), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(335), 10,
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
  [1948] = 4,
    ACTIONS(339), 1,
      sym__indent,
    STATE(124), 1,
      sym_children,
    ACTIONS(144), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(142), 10,
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
  [1975] = 3,
    STATE(67), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
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
  [2000] = 2,
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
  [2023] = 4,
    ACTIONS(345), 1,
      sym__indent,
    STATE(104), 1,
      sym_children,
    ACTIONS(176), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(174), 10,
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
  [2050] = 3,
    ACTIONS(347), 1,
      sym__indent,
    ACTIONS(229), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(227), 11,
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
  [2075] = 4,
    ACTIONS(349), 1,
      sym__indent,
    STATE(105), 1,
      sym_children,
    ACTIONS(134), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(132), 10,
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
  [2102] = 4,
    ACTIONS(345), 1,
      sym__indent,
    STATE(124), 1,
      sym_children,
    ACTIONS(144), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(142), 10,
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
  [2129] = 2,
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
  [2152] = 2,
    ACTIONS(267), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(269), 16,
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
  [2175] = 2,
    ACTIONS(353), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
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
  [2198] = 4,
    ACTIONS(355), 1,
      sym__indent,
    STATE(125), 1,
      sym_children,
    ACTIONS(166), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(164), 10,
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
  [2225] = 4,
    ACTIONS(345), 1,
      sym__indent,
    STATE(112), 1,
      sym_children,
    ACTIONS(152), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(150), 10,
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
  [2252] = 2,
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
  [2274] = 2,
    ACTIONS(253), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(251), 11,
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
  [2296] = 2,
    ACTIONS(265), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(263), 11,
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
  [2318] = 3,
    ACTIONS(361), 1,
      sym__indent,
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
  [2342] = 2,
    ACTIONS(298), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(296), 11,
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
  [2364] = 2,
    ACTIONS(257), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(255), 11,
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
  [2386] = 2,
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
  [2408] = 2,
    ACTIONS(144), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(142), 11,
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
  [2430] = 3,
    ACTIONS(363), 1,
      sym__indent,
    ACTIONS(311), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(309), 10,
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
  [2454] = 2,
    ACTIONS(152), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(150), 11,
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
  [2476] = 2,
    ACTIONS(245), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(243), 11,
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
  [2498] = 3,
    ACTIONS(365), 1,
      sym__dedent,
    ACTIONS(317), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(315), 10,
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
  [2522] = 2,
    ACTIONS(166), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(164), 11,
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
  [2544] = 2,
    ACTIONS(176), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(174), 11,
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
  [2566] = 3,
    ACTIONS(367), 1,
      sym__indent,
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
  [2590] = 2,
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
  [2612] = 3,
    ACTIONS(369), 1,
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
  [2636] = 2,
    ACTIONS(134), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(132), 11,
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
  [2658] = 2,
    ACTIONS(152), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(150), 11,
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
  [2680] = 2,
    ACTIONS(134), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(132), 11,
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
  [2702] = 2,
    ACTIONS(176), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(174), 11,
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
  [2724] = 2,
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
  [2746] = 2,
    ACTIONS(144), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(142), 11,
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
  [2768] = 2,
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
  [2789] = 2,
    ACTIONS(144), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(142), 10,
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
  [2810] = 2,
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
  [2831] = 2,
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
  [2852] = 2,
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
  [2873] = 2,
    ACTIONS(257), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(255), 10,
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
  [2894] = 2,
    ACTIONS(323), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(321), 10,
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
  [2915] = 2,
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
  [2936] = 2,
    ACTIONS(176), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(174), 10,
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
  [2957] = 2,
    ACTIONS(176), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(174), 10,
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
  [2978] = 2,
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
  [2999] = 2,
    ACTIONS(278), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(276), 10,
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
  [3020] = 2,
    ACTIONS(144), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(142), 10,
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
  [3041] = 2,
    ACTIONS(235), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(233), 10,
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
  [3062] = 2,
    ACTIONS(265), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(263), 10,
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
  [3083] = 2,
    ACTIONS(166), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(164), 10,
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
  [3104] = 2,
    ACTIONS(305), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(303), 10,
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
  [3125] = 2,
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
  [3146] = 2,
    ACTIONS(381), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(379), 10,
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
  [3167] = 2,
    ACTIONS(152), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(150), 10,
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
  [3188] = 2,
    ACTIONS(152), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(150), 10,
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
  [3209] = 2,
    ACTIONS(134), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(132), 10,
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
  [3230] = 2,
    ACTIONS(134), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(132), 10,
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
  [3251] = 2,
    ACTIONS(245), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(243), 10,
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
  [3272] = 2,
    ACTIONS(253), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      sym_tag_name,
    ACTIONS(251), 10,
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
  [3293] = 11,
    ACTIONS(383), 1,
      anon_sym_COLON,
    ACTIONS(385), 1,
      anon_sym_BANG_EQ,
    ACTIONS(387), 1,
      anon_sym_EQ,
    ACTIONS(389), 1,
      anon_sym_,
    ACTIONS(391), 1,
      anon_sym_DOT,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(397), 1,
      sym__newline,
    STATE(132), 1,
      aux_sym_tag_repeat1,
    STATE(160), 1,
      sym_attributes,
    ACTIONS(395), 2,
      sym_class,
      sym_id,
    STATE(93), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3330] = 11,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_COLON,
    ACTIONS(401), 1,
      anon_sym_BANG_EQ,
    ACTIONS(403), 1,
      anon_sym_EQ,
    ACTIONS(405), 1,
      anon_sym_,
    ACTIONS(407), 1,
      anon_sym_DOT,
    ACTIONS(411), 1,
      sym__newline,
    STATE(136), 1,
      aux_sym_tag_repeat1,
    STATE(162), 1,
      sym_attributes,
    ACTIONS(409), 2,
      sym_class,
      sym_id,
    STATE(254), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3367] = 11,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_COLON,
    ACTIONS(415), 1,
      anon_sym_BANG_EQ,
    ACTIONS(417), 1,
      anon_sym_EQ,
    ACTIONS(419), 1,
      anon_sym_,
    ACTIONS(421), 1,
      anon_sym_DOT,
    ACTIONS(425), 1,
      sym__newline,
    STATE(154), 1,
      aux_sym_tag_repeat1,
    STATE(157), 1,
      sym_attributes,
    ACTIONS(423), 2,
      sym_class,
      sym_id,
    STATE(126), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3404] = 11,
    ACTIONS(385), 1,
      anon_sym_BANG_EQ,
    ACTIONS(387), 1,
      anon_sym_EQ,
    ACTIONS(391), 1,
      anon_sym_DOT,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(427), 1,
      anon_sym_COLON,
    ACTIONS(429), 1,
      anon_sym_,
    ACTIONS(431), 1,
      sym__newline,
    STATE(154), 1,
      aux_sym_tag_repeat1,
    STATE(156), 1,
      sym_attributes,
    ACTIONS(423), 2,
      sym_class,
      sym_id,
    STATE(100), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3441] = 11,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      anon_sym_COLON,
    ACTIONS(435), 1,
      anon_sym_BANG_EQ,
    ACTIONS(437), 1,
      anon_sym_EQ,
    ACTIONS(439), 1,
      anon_sym_,
    ACTIONS(441), 1,
      anon_sym_DOT,
    ACTIONS(443), 1,
      sym__newline,
    STATE(154), 1,
      aux_sym_tag_repeat1,
    STATE(155), 1,
      sym_attributes,
    ACTIONS(423), 2,
      sym_class,
      sym_id,
    STATE(40), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3478] = 11,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(435), 1,
      anon_sym_BANG_EQ,
    ACTIONS(437), 1,
      anon_sym_EQ,
    ACTIONS(441), 1,
      anon_sym_DOT,
    ACTIONS(445), 1,
      anon_sym_COLON,
    ACTIONS(447), 1,
      anon_sym_,
    ACTIONS(451), 1,
      sym__newline,
    STATE(133), 1,
      aux_sym_tag_repeat1,
    STATE(161), 1,
      sym_attributes,
    ACTIONS(449), 2,
      sym_class,
      sym_id,
    STATE(36), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3515] = 11,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(415), 1,
      anon_sym_BANG_EQ,
    ACTIONS(417), 1,
      anon_sym_EQ,
    ACTIONS(421), 1,
      anon_sym_DOT,
    ACTIONS(453), 1,
      anon_sym_COLON,
    ACTIONS(455), 1,
      anon_sym_,
    ACTIONS(459), 1,
      sym__newline,
    STATE(131), 1,
      aux_sym_tag_repeat1,
    STATE(164), 1,
      sym_attributes,
    ACTIONS(457), 2,
      sym_class,
      sym_id,
    STATE(119), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3552] = 11,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_BANG_EQ,
    ACTIONS(403), 1,
      anon_sym_EQ,
    ACTIONS(407), 1,
      anon_sym_DOT,
    ACTIONS(461), 1,
      anon_sym_COLON,
    ACTIONS(463), 1,
      anon_sym_,
    ACTIONS(465), 1,
      sym__newline,
    STATE(154), 1,
      aux_sym_tag_repeat1,
    STATE(163), 1,
      sym_attributes,
    ACTIONS(423), 2,
      sym_class,
      sym_id,
    STATE(251), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [3589] = 7,
    ACTIONS(91), 1,
      anon_sym_PIPE,
    ACTIONS(467), 1,
      anon_sym_BANG_EQ,
    ACTIONS(469), 1,
      anon_sym_EQ,
    ACTIONS(471), 1,
      anon_sym_DOT,
    STATE(60), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(95), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(5), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3617] = 7,
    ACTIONS(187), 1,
      anon_sym_PIPE,
    ACTIONS(473), 1,
      anon_sym_BANG_EQ,
    ACTIONS(475), 1,
      anon_sym_EQ,
    ACTIONS(477), 1,
      anon_sym_DOT,
    STATE(103), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(191), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(22), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3645] = 7,
    ACTIONS(91), 1,
      anon_sym_PIPE,
    ACTIONS(467), 1,
      anon_sym_BANG_EQ,
    ACTIONS(469), 1,
      anon_sym_EQ,
    ACTIONS(471), 1,
      anon_sym_DOT,
    STATE(33), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(95), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(5), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3673] = 7,
    ACTIONS(17), 1,
      anon_sym_BANG_EQ,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(187), 1,
      anon_sym_PIPE,
    ACTIONS(479), 1,
      anon_sym_DOT,
    STATE(123), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(191), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(23), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3701] = 7,
    ACTIONS(481), 1,
      anon_sym_PIPE,
    ACTIONS(483), 1,
      anon_sym_BANG_EQ,
    ACTIONS(485), 1,
      anon_sym_EQ,
    ACTIONS(487), 1,
      anon_sym_DOT,
    STATE(250), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(489), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(158), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3729] = 7,
    ACTIONS(91), 1,
      anon_sym_PIPE,
    ACTIONS(467), 1,
      anon_sym_BANG_EQ,
    ACTIONS(469), 1,
      anon_sym_EQ,
    ACTIONS(471), 1,
      anon_sym_DOT,
    STATE(48), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(95), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(5), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3757] = 7,
    ACTIONS(17), 1,
      anon_sym_BANG_EQ,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(187), 1,
      anon_sym_PIPE,
    ACTIONS(479), 1,
      anon_sym_DOT,
    STATE(113), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(191), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(23), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3785] = 7,
    ACTIONS(17), 1,
      anon_sym_BANG_EQ,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(187), 1,
      anon_sym_PIPE,
    ACTIONS(479), 1,
      anon_sym_DOT,
    STATE(116), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(191), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(23), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3813] = 7,
    ACTIONS(187), 1,
      anon_sym_PIPE,
    ACTIONS(473), 1,
      anon_sym_BANG_EQ,
    ACTIONS(475), 1,
      anon_sym_EQ,
    ACTIONS(477), 1,
      anon_sym_DOT,
    STATE(99), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(191), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(22), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3841] = 7,
    ACTIONS(481), 1,
      anon_sym_PIPE,
    ACTIONS(483), 1,
      anon_sym_BANG_EQ,
    ACTIONS(485), 1,
      anon_sym_EQ,
    ACTIONS(487), 1,
      anon_sym_DOT,
    STATE(253), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(489), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(158), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3869] = 7,
    ACTIONS(187), 1,
      anon_sym_PIPE,
    ACTIONS(473), 1,
      anon_sym_BANG_EQ,
    ACTIONS(475), 1,
      anon_sym_EQ,
    ACTIONS(477), 1,
      anon_sym_DOT,
    STATE(94), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(191), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(22), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3897] = 7,
    ACTIONS(481), 1,
      anon_sym_PIPE,
    ACTIONS(483), 1,
      anon_sym_BANG_EQ,
    ACTIONS(485), 1,
      anon_sym_EQ,
    ACTIONS(487), 1,
      anon_sym_DOT,
    STATE(244), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    ACTIONS(489), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(158), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3925] = 6,
    ACTIONS(491), 1,
      anon_sym_EQ,
    ACTIONS(493), 1,
      anon_sym_,
    ACTIONS(495), 1,
      anon_sym_DOT,
    STATE(231), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(497), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(313), 6,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
  [3950] = 6,
    ACTIONS(491), 1,
      anon_sym_EQ,
    ACTIONS(495), 1,
      anon_sym_DOT,
    ACTIONS(499), 1,
      anon_sym_,
    STATE(149), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(501), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(297), 6,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
  [3975] = 8,
    ACTIONS(503), 1,
      anon_sym_RPAREN,
    ACTIONS(505), 1,
      aux_sym__attribute_token1,
    STATE(150), 1,
      sym_attribute_name,
    STATE(153), 1,
      aux_sym_attributes_repeat1,
    STATE(283), 1,
      sym_angular_attribute_name,
    STATE(318), 1,
      sym_attribute,
    STATE(317), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(507), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [4003] = 8,
    ACTIONS(509), 1,
      anon_sym_RPAREN,
    ACTIONS(511), 1,
      aux_sym__attribute_token1,
    STATE(150), 1,
      sym_attribute_name,
    STATE(152), 1,
      aux_sym_attributes_repeat1,
    STATE(283), 1,
      sym_angular_attribute_name,
    STATE(327), 1,
      sym_attribute,
    STATE(317), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(514), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [4031] = 8,
    ACTIONS(505), 1,
      aux_sym__attribute_token1,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      sym_attribute_name,
    STATE(152), 1,
      aux_sym_attributes_repeat1,
    STATE(283), 1,
      sym_angular_attribute_name,
    STATE(296), 1,
      sym_attribute,
    STATE(317), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(507), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [4059] = 4,
    STATE(154), 1,
      aux_sym_tag_repeat1,
    ACTIONS(521), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(523), 2,
      sym_class,
      sym_id,
    ACTIONS(519), 5,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LPAREN,
  [4078] = 7,
    ACTIONS(435), 1,
      anon_sym_BANG_EQ,
    ACTIONS(437), 1,
      anon_sym_EQ,
    ACTIONS(441), 1,
      anon_sym_DOT,
    ACTIONS(526), 1,
      anon_sym_COLON,
    ACTIONS(528), 1,
      anon_sym_,
    ACTIONS(530), 1,
      sym__newline,
    STATE(60), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4102] = 7,
    ACTIONS(385), 1,
      anon_sym_BANG_EQ,
    ACTIONS(387), 1,
      anon_sym_EQ,
    ACTIONS(391), 1,
      anon_sym_DOT,
    ACTIONS(532), 1,
      anon_sym_COLON,
    ACTIONS(534), 1,
      anon_sym_,
    ACTIONS(536), 1,
      sym__newline,
    STATE(103), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4126] = 7,
    ACTIONS(415), 1,
      anon_sym_BANG_EQ,
    ACTIONS(417), 1,
      anon_sym_EQ,
    ACTIONS(421), 1,
      anon_sym_DOT,
    ACTIONS(538), 1,
      anon_sym_COLON,
    ACTIONS(540), 1,
      anon_sym_,
    ACTIONS(542), 1,
      sym__newline,
    STATE(116), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4150] = 4,
    ACTIONS(481), 1,
      anon_sym_PIPE,
    ACTIONS(544), 1,
      sym__dedent,
    ACTIONS(489), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(159), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4168] = 4,
    ACTIONS(74), 1,
      sym__dedent,
    ACTIONS(546), 1,
      anon_sym_PIPE,
    ACTIONS(549), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(159), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4186] = 7,
    ACTIONS(385), 1,
      anon_sym_BANG_EQ,
    ACTIONS(387), 1,
      anon_sym_EQ,
    ACTIONS(391), 1,
      anon_sym_DOT,
    ACTIONS(427), 1,
      anon_sym_COLON,
    ACTIONS(429), 1,
      anon_sym_,
    ACTIONS(431), 1,
      sym__newline,
    STATE(100), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4210] = 7,
    ACTIONS(433), 1,
      anon_sym_COLON,
    ACTIONS(435), 1,
      anon_sym_BANG_EQ,
    ACTIONS(437), 1,
      anon_sym_EQ,
    ACTIONS(439), 1,
      anon_sym_,
    ACTIONS(441), 1,
      anon_sym_DOT,
    ACTIONS(443), 1,
      sym__newline,
    STATE(40), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4234] = 7,
    ACTIONS(401), 1,
      anon_sym_BANG_EQ,
    ACTIONS(403), 1,
      anon_sym_EQ,
    ACTIONS(407), 1,
      anon_sym_DOT,
    ACTIONS(461), 1,
      anon_sym_COLON,
    ACTIONS(463), 1,
      anon_sym_,
    ACTIONS(465), 1,
      sym__newline,
    STATE(251), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4258] = 7,
    ACTIONS(401), 1,
      anon_sym_BANG_EQ,
    ACTIONS(403), 1,
      anon_sym_EQ,
    ACTIONS(407), 1,
      anon_sym_DOT,
    ACTIONS(552), 1,
      anon_sym_COLON,
    ACTIONS(554), 1,
      anon_sym_,
    ACTIONS(556), 1,
      sym__newline,
    STATE(250), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4282] = 7,
    ACTIONS(413), 1,
      anon_sym_COLON,
    ACTIONS(415), 1,
      anon_sym_BANG_EQ,
    ACTIONS(417), 1,
      anon_sym_EQ,
    ACTIONS(419), 1,
      anon_sym_,
    ACTIONS(421), 1,
      anon_sym_DOT,
    ACTIONS(425), 1,
      sym__newline,
    STATE(126), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4306] = 7,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(564), 1,
      sym__dedent,
    STATE(171), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(213), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4329] = 3,
    ACTIONS(481), 1,
      anon_sym_PIPE,
    ACTIONS(489), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(158), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4344] = 3,
    ACTIONS(187), 1,
      anon_sym_PIPE,
    ACTIONS(191), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(22), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4359] = 7,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(566), 1,
      sym__dedent,
    STATE(171), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(213), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4382] = 7,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(568), 1,
      sym__dedent,
    STATE(171), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(213), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4405] = 3,
    ACTIONS(91), 1,
      anon_sym_PIPE,
    ACTIONS(95), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(5), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4420] = 7,
    ACTIONS(570), 1,
      aux_sym_content_token1,
    ACTIONS(573), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(576), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(579), 1,
      sym__dedent,
    STATE(171), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(213), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4443] = 7,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(581), 1,
      sym__dedent,
    STATE(171), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(213), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4466] = 3,
    ACTIONS(187), 1,
      anon_sym_PIPE,
    ACTIONS(191), 3,
      sym_tag_name,
      sym_class,
      sym_id,
    STATE(23), 4,
      sym_pipe,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4481] = 7,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(583), 1,
      sym__dedent,
    STATE(171), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(213), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4504] = 7,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(585), 1,
      sym__dedent,
    STATE(171), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(213), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4527] = 8,
    ACTIONS(587), 1,
      aux_sym__ternary_attribute_value_token1,
    ACTIONS(589), 1,
      aux_sym__variable_attribute_value_token1,
    ACTIONS(591), 1,
      aux_sym__object_attribute_value_token1,
    ACTIONS(593), 1,
      aux_sym__template_attribute_value_token1,
    ACTIONS(595), 1,
      aux_sym__array_attribute_value_token1,
    ACTIONS(597), 1,
      anon_sym_SQUOTE,
    ACTIONS(599), 1,
      anon_sym_DQUOTE,
    STATE(312), 1,
      sym_quoted_attribute_value,
  [4552] = 7,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(601), 1,
      sym__dedent,
    STATE(171), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(213), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4575] = 7,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(603), 1,
      sym__dedent,
    STATE(171), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(213), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4598] = 6,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(605), 1,
      sym__newline,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(210), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4618] = 6,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(169), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(213), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4638] = 3,
    ACTIONS(607), 1,
      sym__indent,
    STATE(246), 1,
      sym_children,
    ACTIONS(174), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4652] = 6,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(172), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(213), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4672] = 6,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(609), 1,
      sym__newline,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(210), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4692] = 3,
    ACTIONS(607), 1,
      sym__indent,
    STATE(243), 1,
      sym_children,
    ACTIONS(150), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4706] = 6,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(611), 1,
      sym__newline,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(210), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4726] = 6,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(613), 1,
      sym__newline,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(194), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4746] = 6,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(615), 1,
      sym__newline,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(210), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4766] = 6,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(617), 1,
      sym__newline,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(210), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4786] = 6,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(165), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(213), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4806] = 6,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(178), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(213), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4826] = 3,
    ACTIONS(619), 1,
      sym__indent,
    STATE(248), 1,
      sym_children,
    ACTIONS(142), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4840] = 3,
    ACTIONS(607), 1,
      sym__indent,
    STATE(248), 1,
      sym_children,
    ACTIONS(142), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4854] = 6,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(621), 1,
      sym__newline,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(183), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4874] = 6,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(623), 1,
      sym__newline,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(210), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4894] = 3,
    ACTIONS(625), 1,
      sym__indent,
    STATE(245), 1,
      sym_children,
    ACTIONS(132), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [4908] = 6,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(627), 1,
      sym__newline,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(210), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4928] = 6,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(629), 1,
      sym__newline,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(210), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4948] = 6,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(631), 1,
      sym__newline,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(210), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4968] = 6,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(168), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(213), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [4988] = 6,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(633), 1,
      sym__newline,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(206), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5008] = 6,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(175), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(213), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5028] = 6,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(635), 1,
      sym__newline,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(210), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5048] = 3,
    ACTIONS(637), 1,
      sym__indent,
    STATE(252), 1,
      sym_children,
    ACTIONS(164), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5062] = 6,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(639), 1,
      sym__newline,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(210), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5082] = 6,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(641), 1,
      sym__newline,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(210), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5102] = 6,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(643), 1,
      sym__newline,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(210), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5122] = 6,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(645), 1,
      sym__newline,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(210), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5142] = 6,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(177), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(213), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5162] = 6,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(647), 1,
      sym__newline,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(205), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5182] = 6,
    ACTIONS(649), 1,
      aux_sym_content_token1,
    ACTIONS(652), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(655), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(658), 1,
      sym__newline,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(210), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5202] = 6,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(660), 1,
      sym__newline,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(210), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5222] = 6,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(662), 1,
      sym__newline,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(210), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5242] = 6,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(664), 1,
      sym__newline,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(210), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5262] = 6,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(174), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(213), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5282] = 3,
    ACTIONS(205), 1,
      sym__dedent,
    STATE(215), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(666), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5295] = 5,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(187), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5312] = 5,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(197), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5329] = 2,
    ACTIONS(671), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(669), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [5340] = 4,
    ACTIONS(675), 1,
      anon_sym_POUND,
    ACTIONS(677), 1,
      anon_sym_LBRACE,
    ACTIONS(673), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(679), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [5355] = 2,
    ACTIONS(683), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(681), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [5366] = 3,
    ACTIONS(685), 1,
      sym__dedent,
    STATE(215), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(489), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5379] = 5,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(211), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5396] = 3,
    ACTIONS(687), 1,
      sym__dedent,
    STATE(215), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(489), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5409] = 5,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(179), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5426] = 5,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(212), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5443] = 5,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(196), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5460] = 2,
    ACTIONS(689), 1,
      sym__indent,
    ACTIONS(227), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5471] = 2,
    ACTIONS(693), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(691), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [5482] = 5,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(207), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5499] = 5,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(204), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5516] = 4,
    ACTIONS(697), 1,
      anon_sym_,
    ACTIONS(699), 1,
      anon_sym_DOT,
    STATE(231), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(695), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5531] = 5,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(202), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5548] = 3,
    ACTIONS(702), 1,
      sym__dedent,
    STATE(215), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(489), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5561] = 5,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(198), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5578] = 3,
    ACTIONS(704), 1,
      sym__dedent,
    STATE(215), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(489), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5591] = 5,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(188), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5608] = 5,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(560), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(268), 1,
      aux_sym_content_repeat1,
    STATE(185), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5625] = 1,
    ACTIONS(509), 5,
      anon_sym_RPAREN,
      aux_sym__attribute_token1,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [5633] = 1,
    ACTIONS(259), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5641] = 1,
    ACTIONS(286), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5649] = 1,
    ACTIONS(282), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5657] = 1,
    ACTIONS(255), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5665] = 1,
    ACTIONS(174), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5673] = 1,
    ACTIONS(174), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5681] = 1,
    ACTIONS(142), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5689] = 1,
    ACTIONS(247), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5697] = 1,
    ACTIONS(296), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5705] = 1,
    ACTIONS(150), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5713] = 2,
    ACTIONS(708), 1,
      anon_sym_,
    ACTIONS(706), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5723] = 1,
    ACTIONS(142), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5731] = 1,
    ACTIONS(132), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5739] = 1,
    ACTIONS(132), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5747] = 1,
    ACTIONS(150), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5755] = 1,
    ACTIONS(164), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5763] = 1,
    ACTIONS(251), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5771] = 1,
    ACTIONS(243), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5779] = 1,
    ACTIONS(263), 5,
      sym__dedent,
      anon_sym_PIPE,
      sym_tag_name,
      sym_class,
      sym_id,
  [5787] = 2,
    STATE(68), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(27), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5797] = 2,
    STATE(70), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(27), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5807] = 3,
    ACTIONS(712), 1,
      anon_sym_LBRACE,
    ACTIONS(710), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(714), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [5819] = 2,
    STATE(221), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(489), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5829] = 2,
    STATE(235), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(489), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5839] = 4,
    ACTIONS(710), 1,
      sym__newline,
    ACTIONS(716), 1,
      aux_sym_content_token1,
    STATE(263), 1,
      aux_sym_content_repeat1,
    ACTIONS(714), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [5853] = 2,
    STATE(233), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(489), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5863] = 2,
    STATE(223), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(489), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5873] = 2,
    ACTIONS(721), 1,
      anon_sym_,
    ACTIONS(719), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5883] = 4,
    ACTIONS(723), 1,
      anon_sym_when,
    ACTIONS(725), 1,
      anon_sym_default,
    STATE(7), 1,
      sym__when_keyword,
    STATE(24), 2,
      sym_when,
      aux_sym_case_repeat1,
  [5897] = 4,
    ACTIONS(558), 1,
      aux_sym_content_token1,
    ACTIONS(729), 1,
      sym__newline,
    STATE(263), 1,
      aux_sym_content_repeat1,
    ACTIONS(727), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [5911] = 2,
    ACTIONS(731), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(733), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [5920] = 2,
    STATE(253), 1,
      sym_tag,
    ACTIONS(489), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5929] = 2,
    ACTIONS(579), 2,
      sym__dedent,
      aux_sym_content_token1,
    ACTIONS(735), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [5938] = 2,
    ACTIONS(737), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(739), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [5947] = 2,
    STATE(40), 1,
      sym_tag,
    ACTIONS(95), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5956] = 2,
    STATE(250), 1,
      sym_tag,
    ACTIONS(489), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5965] = 4,
    ACTIONS(741), 1,
      aux_sym_script_block_token1,
    ACTIONS(743), 1,
      sym__newline,
    ACTIONS(745), 1,
      sym__dedent,
    STATE(289), 1,
      aux_sym_script_block_repeat1,
  [5978] = 2,
    STATE(48), 1,
      sym_tag,
    ACTIONS(95), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5987] = 2,
    STATE(251), 1,
      sym_tag,
    ACTIONS(489), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5996] = 2,
    STATE(116), 1,
      sym_tag,
    ACTIONS(27), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [6005] = 2,
    STATE(100), 1,
      sym_tag,
    ACTIONS(191), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [6014] = 2,
    STATE(60), 1,
      sym_tag,
    ACTIONS(95), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [6023] = 2,
    ACTIONS(710), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(714), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [6032] = 4,
    ACTIONS(747), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(749), 1,
      sym__newline,
    STATE(62), 1,
      sym__single_line_buf_code,
    STATE(344), 1,
      sym__un_delimited_javascript,
  [6045] = 3,
    ACTIONS(751), 1,
      anon_sym_EQ,
    ACTIONS(753), 1,
      anon_sym_,
    ACTIONS(755), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6056] = 2,
    STATE(123), 1,
      sym_tag,
    ACTIONS(27), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [6065] = 2,
    STATE(103), 1,
      sym_tag,
    ACTIONS(191), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [6074] = 2,
    ACTIONS(759), 1,
      anon_sym_,
    ACTIONS(757), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6083] = 2,
    STATE(126), 1,
      sym_tag,
    ACTIONS(27), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [6092] = 4,
    ACTIONS(747), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(761), 1,
      sym__newline,
    STATE(92), 1,
      sym__single_line_buf_code,
    STATE(330), 1,
      sym__un_delimited_javascript,
  [6105] = 4,
    ACTIONS(763), 1,
      aux_sym_script_block_token1,
    ACTIONS(766), 1,
      sym__newline,
    ACTIONS(769), 1,
      sym__dedent,
    STATE(289), 1,
      aux_sym_script_block_repeat1,
  [6118] = 2,
    STATE(99), 1,
      sym_tag,
    ACTIONS(191), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [6127] = 2,
    ACTIONS(771), 1,
      anon_sym_,
    ACTIONS(773), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6135] = 1,
    ACTIONS(769), 3,
      sym__newline,
      sym__dedent,
      aux_sym_script_block_token1,
  [6141] = 3,
    ACTIONS(775), 1,
      sym__un_delimited_javascript_line,
    STATE(10), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(51), 1,
      sym__multi_line_buf_code,
  [6151] = 3,
    ACTIONS(777), 1,
      sym__un_delimited_javascript_line,
    STATE(43), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(97), 1,
      sym__multi_line_buf_code,
  [6161] = 2,
    ACTIONS(779), 1,
      anon_sym_,
    ACTIONS(781), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6169] = 3,
    ACTIONS(783), 1,
      anon_sym_,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    ACTIONS(787), 1,
      anon_sym_RPAREN,
  [6179] = 2,
    ACTIONS(493), 1,
      anon_sym_,
    ACTIONS(497), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6187] = 2,
    ACTIONS(789), 1,
      anon_sym_,
    ACTIONS(791), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6195] = 3,
    ACTIONS(747), 1,
      sym__un_delimited_javascript_line,
    STATE(256), 1,
      sym__single_line_buf_code,
    STATE(333), 1,
      sym__un_delimited_javascript,
  [6205] = 3,
    ACTIONS(747), 1,
      sym__un_delimited_javascript_line,
    STATE(255), 1,
      sym__single_line_buf_code,
    STATE(333), 1,
      sym__un_delimited_javascript,
  [6215] = 3,
    ACTIONS(793), 1,
      anon_sym_SQUOTE,
    ACTIONS(795), 1,
      anon_sym_DQUOTE,
    STATE(298), 1,
      sym_quoted_javascript,
  [6225] = 1,
    ACTIONS(797), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [6231] = 2,
    ACTIONS(799), 1,
      anon_sym_,
    ACTIONS(801), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6239] = 2,
    ACTIONS(803), 1,
      anon_sym_,
    ACTIONS(805), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6247] = 2,
    ACTIONS(807), 1,
      anon_sym_,
    ACTIONS(809), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6255] = 2,
    ACTIONS(811), 1,
      anon_sym_,
    ACTIONS(813), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6263] = 3,
    ACTIONS(741), 1,
      aux_sym_script_block_token1,
    ACTIONS(743), 1,
      sym__newline,
    STATE(275), 1,
      aux_sym_script_block_repeat1,
  [6273] = 1,
    ACTIONS(815), 3,
      sym__newline,
      sym__dedent,
      aux_sym_script_block_token1,
  [6279] = 3,
    ACTIONS(747), 1,
      sym__un_delimited_javascript_line,
    STATE(82), 1,
      sym__single_line_buf_code,
    STATE(330), 1,
      sym__un_delimited_javascript,
  [6289] = 3,
    ACTIONS(747), 1,
      sym__un_delimited_javascript_line,
    STATE(91), 1,
      sym__single_line_buf_code,
    STATE(330), 1,
      sym__un_delimited_javascript,
  [6299] = 1,
    ACTIONS(817), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [6305] = 2,
    ACTIONS(819), 1,
      anon_sym_,
    ACTIONS(821), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6313] = 2,
    ACTIONS(823), 1,
      anon_sym_,
    ACTIONS(825), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6321] = 2,
    ACTIONS(827), 1,
      anon_sym_,
    ACTIONS(829), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6329] = 3,
    ACTIONS(747), 1,
      sym__un_delimited_javascript_line,
    STATE(128), 1,
      sym__single_line_buf_code,
    STATE(341), 1,
      sym__un_delimited_javascript,
  [6339] = 2,
    ACTIONS(831), 1,
      anon_sym_,
    ACTIONS(833), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6347] = 2,
    ACTIONS(835), 1,
      anon_sym_,
    ACTIONS(837), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6355] = 3,
    ACTIONS(783), 1,
      anon_sym_,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    ACTIONS(839), 1,
      anon_sym_RPAREN,
  [6365] = 3,
    ACTIONS(747), 1,
      sym__un_delimited_javascript_line,
    STATE(127), 1,
      sym__single_line_buf_code,
    STATE(341), 1,
      sym__un_delimited_javascript,
  [6375] = 3,
    ACTIONS(747), 1,
      sym__un_delimited_javascript_line,
    STATE(31), 1,
      sym__single_line_buf_code,
    STATE(344), 1,
      sym__un_delimited_javascript,
  [6385] = 3,
    ACTIONS(747), 1,
      sym__un_delimited_javascript_line,
    STATE(34), 1,
      sym__single_line_buf_code,
    STATE(344), 1,
      sym__un_delimited_javascript,
  [6395] = 2,
    ACTIONS(841), 1,
      anon_sym_,
    ACTIONS(843), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6403] = 2,
    ACTIONS(845), 1,
      anon_sym_DQUOTE,
    ACTIONS(847), 1,
      aux_sym_quoted_javascript_token2,
  [6410] = 2,
    ACTIONS(849), 1,
      anon_sym_SQUOTE,
    ACTIONS(851), 1,
      aux_sym_quoted_javascript_token1,
  [6417] = 2,
    ACTIONS(853), 1,
      sym__un_delimited_javascript_line,
    STATE(259), 1,
      sym__un_delimited_javascript,
  [6424] = 2,
    ACTIONS(855), 1,
      sym__comment_content,
    ACTIONS(857), 1,
      sym__newline,
  [6431] = 2,
    ACTIONS(783), 1,
      anon_sym_,
    ACTIONS(785), 1,
      anon_sym_COMMA,
  [6438] = 2,
    ACTIONS(845), 1,
      anon_sym_SQUOTE,
    ACTIONS(859), 1,
      aux_sym_quoted_javascript_token1,
  [6445] = 2,
    ACTIONS(849), 1,
      anon_sym_DQUOTE,
    ACTIONS(861), 1,
      aux_sym_quoted_javascript_token2,
  [6452] = 1,
    ACTIONS(863), 1,
      sym__newline,
  [6456] = 1,
    ACTIONS(865), 1,
      ts_builtin_sym_end,
  [6460] = 1,
    ACTIONS(867), 1,
      anon_sym_RBRACE,
  [6464] = 1,
    ACTIONS(869), 1,
      sym__newline,
  [6468] = 1,
    ACTIONS(871), 1,
      sym__newline,
  [6472] = 1,
    ACTIONS(873), 1,
      aux_sym__attribute_token1,
  [6476] = 1,
    ACTIONS(875), 1,
      aux_sym__when_keyword_token1,
  [6480] = 1,
    ACTIONS(877), 1,
      sym__newline,
  [6484] = 1,
    ACTIONS(879), 1,
      sym__indent,
  [6488] = 1,
    ACTIONS(881), 1,
      sym__newline,
  [6492] = 1,
    ACTIONS(883), 1,
      sym__indent,
  [6496] = 1,
    ACTIONS(885), 1,
      sym__newline,
  [6500] = 1,
    ACTIONS(887), 1,
      aux_sym_unbuffered_code_token1,
  [6504] = 1,
    ACTIONS(889), 1,
      sym__newline,
  [6508] = 1,
    ACTIONS(891), 1,
      sym__newline,
  [6512] = 1,
    ACTIONS(893), 1,
      sym__indent,
  [6516] = 1,
    ACTIONS(867), 1,
      anon_sym_RBRACE_RBRACE,
  [6520] = 1,
    ACTIONS(895), 1,
      sym__indent,
  [6524] = 1,
    ACTIONS(897), 1,
      sym__newline,
  [6528] = 1,
    ACTIONS(899), 1,
      sym__delimited_javascript,
  [6532] = 1,
    ACTIONS(901), 1,
      sym__delimited_javascript,
  [6536] = 1,
    ACTIONS(903), 1,
      sym__newline,
  [6540] = 1,
    ACTIONS(905), 1,
      sym__indent,
  [6544] = 1,
    ACTIONS(907), 1,
      aux_sym_unbuffered_code_token1,
  [6548] = 1,
    ACTIONS(817), 1,
      sym__newline,
  [6552] = 1,
    ACTIONS(909), 1,
      sym__newline,
  [6556] = 1,
    ACTIONS(911), 1,
      anon_sym_SQUOTE,
  [6560] = 1,
    ACTIONS(911), 1,
      anon_sym_DQUOTE,
  [6564] = 1,
    ACTIONS(913), 1,
      anon_sym_SQUOTE,
  [6568] = 1,
    ACTIONS(915), 1,
      sym__un_delimited_javascript_line,
  [6572] = 1,
    ACTIONS(913), 1,
      anon_sym_DQUOTE,
  [6576] = 1,
    ACTIONS(917), 1,
      sym__indent,
  [6580] = 1,
    ACTIONS(919), 1,
      sym__indent,
  [6584] = 1,
    ACTIONS(921), 1,
      sym__indent,
  [6588] = 1,
    ACTIONS(923), 1,
      sym__indent,
  [6592] = 1,
    ACTIONS(925), 1,
      sym__indent,
  [6596] = 1,
    ACTIONS(927), 1,
      sym__indent,
  [6600] = 1,
    ACTIONS(929), 1,
      sym__indent,
  [6604] = 1,
    ACTIONS(931), 1,
      sym__newline,
  [6608] = 1,
    ACTIONS(933), 1,
      sym__newline,
  [6612] = 1,
    ACTIONS(935), 1,
      sym__newline,
  [6616] = 1,
    ACTIONS(937), 1,
      sym__newline,
  [6620] = 1,
    ACTIONS(939), 1,
      sym__newline,
  [6624] = 1,
    ACTIONS(941), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 58,
  [SMALL_STATE(4)] = 116,
  [SMALL_STATE(5)] = 152,
  [SMALL_STATE(6)] = 190,
  [SMALL_STATE(7)] = 227,
  [SMALL_STATE(8)] = 262,
  [SMALL_STATE(9)] = 299,
  [SMALL_STATE(10)] = 329,
  [SMALL_STATE(11)] = 359,
  [SMALL_STATE(12)] = 389,
  [SMALL_STATE(13)] = 421,
  [SMALL_STATE(14)] = 451,
  [SMALL_STATE(15)] = 483,
  [SMALL_STATE(16)] = 513,
  [SMALL_STATE(17)] = 543,
  [SMALL_STATE(18)] = 577,
  [SMALL_STATE(19)] = 607,
  [SMALL_STATE(20)] = 633,
  [SMALL_STATE(21)] = 663,
  [SMALL_STATE(22)] = 697,
  [SMALL_STATE(23)] = 733,
  [SMALL_STATE(24)] = 769,
  [SMALL_STATE(25)] = 803,
  [SMALL_STATE(26)] = 835,
  [SMALL_STATE(27)] = 860,
  [SMALL_STATE(28)] = 889,
  [SMALL_STATE(29)] = 916,
  [SMALL_STATE(30)] = 946,
  [SMALL_STATE(31)] = 974,
  [SMALL_STATE(32)] = 998,
  [SMALL_STATE(33)] = 1022,
  [SMALL_STATE(34)] = 1046,
  [SMALL_STATE(35)] = 1070,
  [SMALL_STATE(36)] = 1094,
  [SMALL_STATE(37)] = 1118,
  [SMALL_STATE(38)] = 1142,
  [SMALL_STATE(39)] = 1166,
  [SMALL_STATE(40)] = 1190,
  [SMALL_STATE(41)] = 1214,
  [SMALL_STATE(42)] = 1238,
  [SMALL_STATE(43)] = 1266,
  [SMALL_STATE(44)] = 1294,
  [SMALL_STATE(45)] = 1318,
  [SMALL_STATE(46)] = 1346,
  [SMALL_STATE(47)] = 1372,
  [SMALL_STATE(48)] = 1396,
  [SMALL_STATE(49)] = 1420,
  [SMALL_STATE(50)] = 1444,
  [SMALL_STATE(51)] = 1468,
  [SMALL_STATE(52)] = 1494,
  [SMALL_STATE(53)] = 1522,
  [SMALL_STATE(54)] = 1546,
  [SMALL_STATE(55)] = 1570,
  [SMALL_STATE(56)] = 1598,
  [SMALL_STATE(57)] = 1628,
  [SMALL_STATE(58)] = 1658,
  [SMALL_STATE(59)] = 1688,
  [SMALL_STATE(60)] = 1712,
  [SMALL_STATE(61)] = 1736,
  [SMALL_STATE(62)] = 1760,
  [SMALL_STATE(63)] = 1786,
  [SMALL_STATE(64)] = 1810,
  [SMALL_STATE(65)] = 1838,
  [SMALL_STATE(66)] = 1866,
  [SMALL_STATE(67)] = 1894,
  [SMALL_STATE(68)] = 1923,
  [SMALL_STATE(69)] = 1948,
  [SMALL_STATE(70)] = 1975,
  [SMALL_STATE(71)] = 2000,
  [SMALL_STATE(72)] = 2023,
  [SMALL_STATE(73)] = 2050,
  [SMALL_STATE(74)] = 2075,
  [SMALL_STATE(75)] = 2102,
  [SMALL_STATE(76)] = 2129,
  [SMALL_STATE(77)] = 2152,
  [SMALL_STATE(78)] = 2175,
  [SMALL_STATE(79)] = 2198,
  [SMALL_STATE(80)] = 2225,
  [SMALL_STATE(81)] = 2252,
  [SMALL_STATE(82)] = 2274,
  [SMALL_STATE(83)] = 2296,
  [SMALL_STATE(84)] = 2318,
  [SMALL_STATE(85)] = 2342,
  [SMALL_STATE(86)] = 2364,
  [SMALL_STATE(87)] = 2386,
  [SMALL_STATE(88)] = 2408,
  [SMALL_STATE(89)] = 2430,
  [SMALL_STATE(90)] = 2454,
  [SMALL_STATE(91)] = 2476,
  [SMALL_STATE(92)] = 2498,
  [SMALL_STATE(93)] = 2522,
  [SMALL_STATE(94)] = 2544,
  [SMALL_STATE(95)] = 2566,
  [SMALL_STATE(96)] = 2590,
  [SMALL_STATE(97)] = 2612,
  [SMALL_STATE(98)] = 2636,
  [SMALL_STATE(99)] = 2658,
  [SMALL_STATE(100)] = 2680,
  [SMALL_STATE(101)] = 2702,
  [SMALL_STATE(102)] = 2724,
  [SMALL_STATE(103)] = 2746,
  [SMALL_STATE(104)] = 2768,
  [SMALL_STATE(105)] = 2789,
  [SMALL_STATE(106)] = 2810,
  [SMALL_STATE(107)] = 2831,
  [SMALL_STATE(108)] = 2852,
  [SMALL_STATE(109)] = 2873,
  [SMALL_STATE(110)] = 2894,
  [SMALL_STATE(111)] = 2915,
  [SMALL_STATE(112)] = 2936,
  [SMALL_STATE(113)] = 2957,
  [SMALL_STATE(114)] = 2978,
  [SMALL_STATE(115)] = 2999,
  [SMALL_STATE(116)] = 3020,
  [SMALL_STATE(117)] = 3041,
  [SMALL_STATE(118)] = 3062,
  [SMALL_STATE(119)] = 3083,
  [SMALL_STATE(120)] = 3104,
  [SMALL_STATE(121)] = 3125,
  [SMALL_STATE(122)] = 3146,
  [SMALL_STATE(123)] = 3167,
  [SMALL_STATE(124)] = 3188,
  [SMALL_STATE(125)] = 3209,
  [SMALL_STATE(126)] = 3230,
  [SMALL_STATE(127)] = 3251,
  [SMALL_STATE(128)] = 3272,
  [SMALL_STATE(129)] = 3293,
  [SMALL_STATE(130)] = 3330,
  [SMALL_STATE(131)] = 3367,
  [SMALL_STATE(132)] = 3404,
  [SMALL_STATE(133)] = 3441,
  [SMALL_STATE(134)] = 3478,
  [SMALL_STATE(135)] = 3515,
  [SMALL_STATE(136)] = 3552,
  [SMALL_STATE(137)] = 3589,
  [SMALL_STATE(138)] = 3617,
  [SMALL_STATE(139)] = 3645,
  [SMALL_STATE(140)] = 3673,
  [SMALL_STATE(141)] = 3701,
  [SMALL_STATE(142)] = 3729,
  [SMALL_STATE(143)] = 3757,
  [SMALL_STATE(144)] = 3785,
  [SMALL_STATE(145)] = 3813,
  [SMALL_STATE(146)] = 3841,
  [SMALL_STATE(147)] = 3869,
  [SMALL_STATE(148)] = 3897,
  [SMALL_STATE(149)] = 3925,
  [SMALL_STATE(150)] = 3950,
  [SMALL_STATE(151)] = 3975,
  [SMALL_STATE(152)] = 4003,
  [SMALL_STATE(153)] = 4031,
  [SMALL_STATE(154)] = 4059,
  [SMALL_STATE(155)] = 4078,
  [SMALL_STATE(156)] = 4102,
  [SMALL_STATE(157)] = 4126,
  [SMALL_STATE(158)] = 4150,
  [SMALL_STATE(159)] = 4168,
  [SMALL_STATE(160)] = 4186,
  [SMALL_STATE(161)] = 4210,
  [SMALL_STATE(162)] = 4234,
  [SMALL_STATE(163)] = 4258,
  [SMALL_STATE(164)] = 4282,
  [SMALL_STATE(165)] = 4306,
  [SMALL_STATE(166)] = 4329,
  [SMALL_STATE(167)] = 4344,
  [SMALL_STATE(168)] = 4359,
  [SMALL_STATE(169)] = 4382,
  [SMALL_STATE(170)] = 4405,
  [SMALL_STATE(171)] = 4420,
  [SMALL_STATE(172)] = 4443,
  [SMALL_STATE(173)] = 4466,
  [SMALL_STATE(174)] = 4481,
  [SMALL_STATE(175)] = 4504,
  [SMALL_STATE(176)] = 4527,
  [SMALL_STATE(177)] = 4552,
  [SMALL_STATE(178)] = 4575,
  [SMALL_STATE(179)] = 4598,
  [SMALL_STATE(180)] = 4618,
  [SMALL_STATE(181)] = 4638,
  [SMALL_STATE(182)] = 4652,
  [SMALL_STATE(183)] = 4672,
  [SMALL_STATE(184)] = 4692,
  [SMALL_STATE(185)] = 4706,
  [SMALL_STATE(186)] = 4726,
  [SMALL_STATE(187)] = 4746,
  [SMALL_STATE(188)] = 4766,
  [SMALL_STATE(189)] = 4786,
  [SMALL_STATE(190)] = 4806,
  [SMALL_STATE(191)] = 4826,
  [SMALL_STATE(192)] = 4840,
  [SMALL_STATE(193)] = 4854,
  [SMALL_STATE(194)] = 4874,
  [SMALL_STATE(195)] = 4894,
  [SMALL_STATE(196)] = 4908,
  [SMALL_STATE(197)] = 4928,
  [SMALL_STATE(198)] = 4948,
  [SMALL_STATE(199)] = 4968,
  [SMALL_STATE(200)] = 4988,
  [SMALL_STATE(201)] = 5008,
  [SMALL_STATE(202)] = 5028,
  [SMALL_STATE(203)] = 5048,
  [SMALL_STATE(204)] = 5062,
  [SMALL_STATE(205)] = 5082,
  [SMALL_STATE(206)] = 5102,
  [SMALL_STATE(207)] = 5122,
  [SMALL_STATE(208)] = 5142,
  [SMALL_STATE(209)] = 5162,
  [SMALL_STATE(210)] = 5182,
  [SMALL_STATE(211)] = 5202,
  [SMALL_STATE(212)] = 5222,
  [SMALL_STATE(213)] = 5242,
  [SMALL_STATE(214)] = 5262,
  [SMALL_STATE(215)] = 5282,
  [SMALL_STATE(216)] = 5295,
  [SMALL_STATE(217)] = 5312,
  [SMALL_STATE(218)] = 5329,
  [SMALL_STATE(219)] = 5340,
  [SMALL_STATE(220)] = 5355,
  [SMALL_STATE(221)] = 5366,
  [SMALL_STATE(222)] = 5379,
  [SMALL_STATE(223)] = 5396,
  [SMALL_STATE(224)] = 5409,
  [SMALL_STATE(225)] = 5426,
  [SMALL_STATE(226)] = 5443,
  [SMALL_STATE(227)] = 5460,
  [SMALL_STATE(228)] = 5471,
  [SMALL_STATE(229)] = 5482,
  [SMALL_STATE(230)] = 5499,
  [SMALL_STATE(231)] = 5516,
  [SMALL_STATE(232)] = 5531,
  [SMALL_STATE(233)] = 5548,
  [SMALL_STATE(234)] = 5561,
  [SMALL_STATE(235)] = 5578,
  [SMALL_STATE(236)] = 5591,
  [SMALL_STATE(237)] = 5608,
  [SMALL_STATE(238)] = 5625,
  [SMALL_STATE(239)] = 5633,
  [SMALL_STATE(240)] = 5641,
  [SMALL_STATE(241)] = 5649,
  [SMALL_STATE(242)] = 5657,
  [SMALL_STATE(243)] = 5665,
  [SMALL_STATE(244)] = 5673,
  [SMALL_STATE(245)] = 5681,
  [SMALL_STATE(246)] = 5689,
  [SMALL_STATE(247)] = 5697,
  [SMALL_STATE(248)] = 5705,
  [SMALL_STATE(249)] = 5713,
  [SMALL_STATE(250)] = 5723,
  [SMALL_STATE(251)] = 5731,
  [SMALL_STATE(252)] = 5739,
  [SMALL_STATE(253)] = 5747,
  [SMALL_STATE(254)] = 5755,
  [SMALL_STATE(255)] = 5763,
  [SMALL_STATE(256)] = 5771,
  [SMALL_STATE(257)] = 5779,
  [SMALL_STATE(258)] = 5787,
  [SMALL_STATE(259)] = 5797,
  [SMALL_STATE(260)] = 5807,
  [SMALL_STATE(261)] = 5819,
  [SMALL_STATE(262)] = 5829,
  [SMALL_STATE(263)] = 5839,
  [SMALL_STATE(264)] = 5853,
  [SMALL_STATE(265)] = 5863,
  [SMALL_STATE(266)] = 5873,
  [SMALL_STATE(267)] = 5883,
  [SMALL_STATE(268)] = 5897,
  [SMALL_STATE(269)] = 5911,
  [SMALL_STATE(270)] = 5920,
  [SMALL_STATE(271)] = 5929,
  [SMALL_STATE(272)] = 5938,
  [SMALL_STATE(273)] = 5947,
  [SMALL_STATE(274)] = 5956,
  [SMALL_STATE(275)] = 5965,
  [SMALL_STATE(276)] = 5978,
  [SMALL_STATE(277)] = 5987,
  [SMALL_STATE(278)] = 5996,
  [SMALL_STATE(279)] = 6005,
  [SMALL_STATE(280)] = 6014,
  [SMALL_STATE(281)] = 6023,
  [SMALL_STATE(282)] = 6032,
  [SMALL_STATE(283)] = 6045,
  [SMALL_STATE(284)] = 6056,
  [SMALL_STATE(285)] = 6065,
  [SMALL_STATE(286)] = 6074,
  [SMALL_STATE(287)] = 6083,
  [SMALL_STATE(288)] = 6092,
  [SMALL_STATE(289)] = 6105,
  [SMALL_STATE(290)] = 6118,
  [SMALL_STATE(291)] = 6127,
  [SMALL_STATE(292)] = 6135,
  [SMALL_STATE(293)] = 6141,
  [SMALL_STATE(294)] = 6151,
  [SMALL_STATE(295)] = 6161,
  [SMALL_STATE(296)] = 6169,
  [SMALL_STATE(297)] = 6179,
  [SMALL_STATE(298)] = 6187,
  [SMALL_STATE(299)] = 6195,
  [SMALL_STATE(300)] = 6205,
  [SMALL_STATE(301)] = 6215,
  [SMALL_STATE(302)] = 6225,
  [SMALL_STATE(303)] = 6231,
  [SMALL_STATE(304)] = 6239,
  [SMALL_STATE(305)] = 6247,
  [SMALL_STATE(306)] = 6255,
  [SMALL_STATE(307)] = 6263,
  [SMALL_STATE(308)] = 6273,
  [SMALL_STATE(309)] = 6279,
  [SMALL_STATE(310)] = 6289,
  [SMALL_STATE(311)] = 6299,
  [SMALL_STATE(312)] = 6305,
  [SMALL_STATE(313)] = 6313,
  [SMALL_STATE(314)] = 6321,
  [SMALL_STATE(315)] = 6329,
  [SMALL_STATE(316)] = 6339,
  [SMALL_STATE(317)] = 6347,
  [SMALL_STATE(318)] = 6355,
  [SMALL_STATE(319)] = 6365,
  [SMALL_STATE(320)] = 6375,
  [SMALL_STATE(321)] = 6385,
  [SMALL_STATE(322)] = 6395,
  [SMALL_STATE(323)] = 6403,
  [SMALL_STATE(324)] = 6410,
  [SMALL_STATE(325)] = 6417,
  [SMALL_STATE(326)] = 6424,
  [SMALL_STATE(327)] = 6431,
  [SMALL_STATE(328)] = 6438,
  [SMALL_STATE(329)] = 6445,
  [SMALL_STATE(330)] = 6452,
  [SMALL_STATE(331)] = 6456,
  [SMALL_STATE(332)] = 6460,
  [SMALL_STATE(333)] = 6464,
  [SMALL_STATE(334)] = 6468,
  [SMALL_STATE(335)] = 6472,
  [SMALL_STATE(336)] = 6476,
  [SMALL_STATE(337)] = 6480,
  [SMALL_STATE(338)] = 6484,
  [SMALL_STATE(339)] = 6488,
  [SMALL_STATE(340)] = 6492,
  [SMALL_STATE(341)] = 6496,
  [SMALL_STATE(342)] = 6500,
  [SMALL_STATE(343)] = 6504,
  [SMALL_STATE(344)] = 6508,
  [SMALL_STATE(345)] = 6512,
  [SMALL_STATE(346)] = 6516,
  [SMALL_STATE(347)] = 6520,
  [SMALL_STATE(348)] = 6524,
  [SMALL_STATE(349)] = 6528,
  [SMALL_STATE(350)] = 6532,
  [SMALL_STATE(351)] = 6536,
  [SMALL_STATE(352)] = 6540,
  [SMALL_STATE(353)] = 6544,
  [SMALL_STATE(354)] = 6548,
  [SMALL_STATE(355)] = 6552,
  [SMALL_STATE(356)] = 6556,
  [SMALL_STATE(357)] = 6560,
  [SMALL_STATE(358)] = 6564,
  [SMALL_STATE(359)] = 6568,
  [SMALL_STATE(360)] = 6572,
  [SMALL_STATE(361)] = 6576,
  [SMALL_STATE(362)] = 6580,
  [SMALL_STATE(363)] = 6584,
  [SMALL_STATE(364)] = 6588,
  [SMALL_STATE(365)] = 6592,
  [SMALL_STATE(366)] = 6596,
  [SMALL_STATE(367)] = 6600,
  [SMALL_STATE(368)] = 6604,
  [SMALL_STATE(369)] = 6608,
  [SMALL_STATE(370)] = 6612,
  [SMALL_STATE(371)] = 6616,
  [SMALL_STATE(372)] = 6620,
  [SMALL_STATE(373)] = 6624,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(302),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(186),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(325),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(325),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(258),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(359),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(319),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(315),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(355),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(326),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(135),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(135),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(353),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(200),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(134),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(134),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(26),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 4),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 4),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(336),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(7),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_keyword, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_keyword, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(209),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(129),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(129),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 5, .production_id = 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 5, .production_id = 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(134),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(134),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 5),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 5),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unescaped_buffered_code, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unescaped_buffered_code, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 7),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffered_code, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffered_code, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 5, .production_id = 5),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 5, .production_id = 5),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 3),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 2),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(351),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 6),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 6),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 5),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 5),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 5),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 5),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 7, .production_id = 7),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 7, .production_id = 7),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(76),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 3),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 4),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 4),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(135),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(135),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 2),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 3),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 6),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 6),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_block, 5, .production_id = 2),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_block, 5, .production_id = 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 2),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 2),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 2),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 2),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 1),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 1),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(249),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(286),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [523] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(154),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(193),
  [549] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(130),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(219),
  [573] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(350),
  [576] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(349),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(219),
  [652] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(350),
  [655] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(349),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [666] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(130),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 1),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 1),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [699] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2), SHIFT_REPEAT(335),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_name, 1),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [716] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(219),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 3),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 3),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 3),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 3),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 3),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 3),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 1),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 1),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_angular_attribute_name, 1),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_angular_attribute_name, 1),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [763] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(348),
  [766] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(308),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 6),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 6),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ternary_attribute_value, 2),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ternary_attribute_value, 2),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 3),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 3),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_attribute_value, 2),
  [801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable_attribute_value, 2),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_attribute_value, 2),
  [805] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__object_attribute_value, 2),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_attribute_value, 2),
  [809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__template_attribute_value, 2),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_attribute_value, 2),
  [813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__array_attribute_value, 2),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 1),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__un_delimited_javascript, 1),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_attribute_value, 2),
  [821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_attribute_value, 2),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 3),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 3),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 2),
  [829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 2),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [833] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 3),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 3),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [865] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
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
