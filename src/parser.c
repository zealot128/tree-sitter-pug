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
#define STATE_COUNT 442
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 106
#define ALIAS_COUNT 2
#define TOKEN_COUNT 57
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
  anon_sym_SLASH_SLASH_DASH = 31,
  sym_tag_name = 32,
  sym_class = 33,
  sym_id = 34,
  aux_sym_angular_attribute_name_token1 = 35,
  aux_sym_angular_attribute_name_token2 = 36,
  aux_sym_angular_attribute_name_token3 = 37,
  anon_sym_SQUOTE = 38,
  aux_sym_quoted_javascript_token1 = 39,
  anon_sym_DQUOTE = 40,
  aux_sym_quoted_javascript_token2 = 41,
  aux_sym_content_token1 = 42,
  anon_sym_POUND = 43,
  anon_sym_LBRACE = 44,
  sym__comment_content = 45,
  anon_sym_POUND_LBRACE = 46,
  anon_sym_RBRACE = 47,
  anon_sym_LBRACE_LBRACE = 48,
  anon_sym_RBRACE_RBRACE = 49,
  sym__delimited_javascript = 50,
  sym__un_delimited_javascript_line = 51,
  anon_sym_DASH = 52,
  aux_sym_unbuffered_code_token1 = 53,
  sym__newline = 54,
  sym__indent = 55,
  sym__dedent = 56,
  sym_source_file = 57,
  sym_doctype = 58,
  sym_pipe = 59,
  sym_conditional = 60,
  sym_case = 61,
  sym__when_content = 62,
  sym__when_keyword = 63,
  sym_when = 64,
  sym_unescaped_buffered_code = 65,
  sym_buffered_code = 66,
  sym_script_block = 67,
  sym_tag = 68,
  sym__content_after_dot = 69,
  sym_attributes = 70,
  sym_attribute = 71,
  sym__ternary_attribute_value = 72,
  sym__string_attribute_value = 73,
  sym__variable_attribute_value = 74,
  sym__object_attribute_value = 75,
  sym__template_attribute_value = 76,
  sym__array_attribute_value = 77,
  sym__attribute = 78,
  sym__angular_attribute = 79,
  sym_children = 80,
  sym__children_choice = 81,
  sym_comment = 82,
  sym_angular_attribute_name = 83,
  sym_attribute_name = 84,
  sym_quoted_javascript = 85,
  sym_quoted_attribute_value = 86,
  sym_content = 87,
  aux_sym__content_or_javascript = 88,
  sym__un_delimited_javascript = 89,
  aux_sym__un_delimited_javascript_multiline = 90,
  sym__single_line_buf_code = 91,
  sym__multi_line_buf_code = 92,
  sym_unbuffered_code = 93,
  aux_sym_source_file_repeat1 = 94,
  aux_sym_conditional_repeat1 = 95,
  aux_sym_case_repeat1 = 96,
  aux_sym_script_block_repeat1 = 97,
  aux_sym_tag_repeat1 = 98,
  aux_sym__content_after_dot_repeat1 = 99,
  aux_sym_attributes_repeat1 = 100,
  aux_sym__attribute_repeat1 = 101,
  aux_sym_children_repeat1 = 102,
  aux_sym_comment_repeat1 = 103,
  aux_sym_content_repeat1 = 104,
  aux_sym__single_line_buf_code_repeat1 = 105,
  alias_sym_attribute_modifier = 106,
  alias_sym_attribute_value = 107,
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
  [anon_sym_SLASH_SLASH_DASH] = "//-",
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
  [anon_sym_SLASH_SLASH_DASH] = anon_sym_SLASH_SLASH_DASH,
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
      if (lookahead == '"') ADVANCE(633);
      if (lookahead == '#') ADVANCE(639);
      if (lookahead == '\'') ADVANCE(629);
      if (lookahead == '(') ADVANCE(206);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead == ',') ADVANCE(207);
      if (lookahead == '-') ADVANCE(669);
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
      if (lookahead == '{') ADVANCE(640);
      if (lookahead == '|') ADVANCE(161);
      if (lookahead == '}') ADVANCE(653);
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
      if (lookahead == '#') ADVANCE(639);
      if (lookahead == '{') ADVANCE(640);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(637);
      if (lookahead != 0) ADVANCE(638);
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
          lookahead == ' ') ADVANCE(665);
      if (lookahead != 0) ADVANCE(668);
      END_STATE();
    case 51:
      if (lookahead == '\n') SKIP(51)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(188);
      END_STATE();
    case 52:
      if (lookahead == '\n') SKIP(52)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(657);
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
      if (lookahead == '"') ADVANCE(634);
      if (lookahead == '\'') ADVANCE(630);
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
      if (lookahead == '"') ADVANCE(634);
      if (lookahead == '\'') ADVANCE(630);
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
      if (lookahead == 'e') ADVANCE(569);
      if (lookahead == 'i') ADVANCE(554);
      if (lookahead == 'u') ADVANCE(574);
      if (lookahead == '|') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(60)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 61:
      if (lookahead == '"') ADVANCE(633);
      if (lookahead == '\'') ADVANCE(629);
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
      if (lookahead == '"') ADVANCE(633);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(635);
      if (lookahead != 0) ADVANCE(636);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 65:
      if (lookahead == '\'') ADVANCE(629);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(631);
      if (lookahead != 0) ADVANCE(632);
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
      if (lookahead == ')') ADVANCE(627);
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
      if (lookahead == ']') ADVANCE(626);
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
      if (lookahead == '}') ADVANCE(655);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
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
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(620);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      END_STATE();
    case 144:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 145:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
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
      if (lookahead == '!') ADVANCE(661);
      if (lookahead == '#') ADVANCE(667);
      if (lookahead == '-') ADVANCE(670);
      if (lookahead == '.') ADVANCE(666);
      if (lookahead == '/') ADVANCE(660);
      if (lookahead == '=') ADVANCE(196);
      if (lookahead == 'c') ADVANCE(529);
      if (lookahead == 'd') ADVANCE(547);
      if (lookahead == 'e') ADVANCE(570);
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead == 's') ADVANCE(534);
      if (lookahead == 'u') ADVANCE(575);
      if (lookahead == 'w') ADVANCE(559);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0) ADVANCE(668);
      END_STATE();
    case 150:
      if (eof) ADVANCE(153);
      if (lookahead == '\n') SKIP(150)
      if (lookahead == '!') ADVANCE(661);
      if (lookahead == '#') ADVANCE(667);
      if (lookahead == '-') ADVANCE(670);
      if (lookahead == '.') ADVANCE(666);
      if (lookahead == '/') ADVANCE(660);
      if (lookahead == '=') ADVANCE(196);
      if (lookahead == 'c') ADVANCE(529);
      if (lookahead == 'd') ADVANCE(578);
      if (lookahead == 'e') ADVANCE(570);
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead == 's') ADVANCE(534);
      if (lookahead == 'u') ADVANCE(575);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0) ADVANCE(668);
      END_STATE();
    case 151:
      if (eof) ADVANCE(153);
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '-') ADVANCE(669);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == ':') ADVANCE(183);
      if (lookahead == '=') ADVANCE(195);
      if (lookahead == 'c') ADVANCE(527);
      if (lookahead == 'd') ADVANCE(544);
      if (lookahead == 'e') ADVANCE(569);
      if (lookahead == 'i') ADVANCE(554);
      if (lookahead == 's') ADVANCE(532);
      if (lookahead == 'u') ADVANCE(574);
      if (lookahead == 'w') ADVANCE(560);
      if (lookahead == '|') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(151)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 152:
      if (eof) ADVANCE(153);
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '-') ADVANCE(669);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == '=') ADVANCE(195);
      if (lookahead == 'c') ADVANCE(527);
      if (lookahead == 'd') ADVANCE(577);
      if (lookahead == 'e') ADVANCE(569);
      if (lookahead == 'i') ADVANCE(554);
      if (lookahead == 's') ADVANCE(532);
      if (lookahead == 'u') ADVANCE(574);
      if (lookahead == '|') ADVANCE(161);
      if (lookahead == '}') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(152)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
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
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(663);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(645);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_script_DOT);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_script_DOT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_script_DOT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
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
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(620);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
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
      if (lookahead == '"') ADVANCE(634);
      if (lookahead == '\'') ADVANCE(630);
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
      if (lookahead == '-') ADVANCE(521);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '-') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '-') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '.') ADVANCE(199);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '.') ADVANCE(200);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(589);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(609);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(593);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(610);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(599);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(586);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(601);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(587);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(604);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(588);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(607);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(556);
      if (lookahead == 'o') ADVANCE(533);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(572);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(595);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(557);
      if (lookahead == 'o') ADVANCE(535);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(573);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(596);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(598);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(165);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(528);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(530);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(167);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(548);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(545);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(580);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(581);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(584);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(546);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(603);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(606);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(549);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(553);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(592);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(597);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(600);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(185);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(564);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(567);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(568);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(533);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(535);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(537);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(602);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(605);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(540);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(543);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(608);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(552);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(561);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(562);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(563);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(538);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(172);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(173);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(539);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(541);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(590);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(591);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(542);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(594);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(550);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(551);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(611);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(524);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(190);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(612);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(525);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(191);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(613);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(526);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(565);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(566);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(582);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(583);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(585);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(614);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(617);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(620);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(617);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(618);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(621);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(619);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(620);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token1);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token2);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == '?') ADVANCE(467);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(87);
      if (lookahead != 0) ADVANCE(478);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(632);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(632);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == '?') ADVANCE(467);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(87);
      if (lookahead != 0) ADVANCE(478);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(636);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(636);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '{') ADVANCE(638);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '{') ADVANCE(638);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(652);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(654);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '!') ADVANCE(643);
      if (lookahead == '#') ADVANCE(649);
      if (lookahead == '-') ADVANCE(671);
      if (lookahead == '.') ADVANCE(648);
      if (lookahead == '/') ADVANCE(642);
      if (lookahead == '=') ADVANCE(197);
      if (lookahead == 'c') ADVANCE(531);
      if (lookahead == 'd') ADVANCE(579);
      if (lookahead == 'e') ADVANCE(571);
      if (lookahead == 'i') ADVANCE(558);
      if (lookahead == 's') ADVANCE(536);
      if (lookahead == 'u') ADVANCE(576);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '/') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == 'f') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == 'i') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(647);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(648);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(622);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__comment_content);
      if (eof) ADVANCE(153);
      if (lookahead == '!') ADVANCE(643);
      if (lookahead == '#') ADVANCE(649);
      if (lookahead == '-') ADVANCE(671);
      if (lookahead == '.') ADVANCE(648);
      if (lookahead == '/') ADVANCE(642);
      if (lookahead == '=') ADVANCE(197);
      if (lookahead == 'c') ADVANCE(531);
      if (lookahead == 'd') ADVANCE(579);
      if (lookahead == 'e') ADVANCE(571);
      if (lookahead == 'i') ADVANCE(558);
      if (lookahead == 's') ADVANCE(536);
      if (lookahead == 'u') ADVANCE(576);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__delimited_javascript);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(657);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__delimited_javascript);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(657);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(661);
      if (lookahead == '#') ADVANCE(667);
      if (lookahead == '-') ADVANCE(670);
      if (lookahead == '.') ADVANCE(666);
      if (lookahead == '/') ADVANCE(660);
      if (lookahead == '=') ADVANCE(196);
      if (lookahead == 'c') ADVANCE(529);
      if (lookahead == 'd') ADVANCE(547);
      if (lookahead == 'e') ADVANCE(570);
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead == 's') ADVANCE(534);
      if (lookahead == 'u') ADVANCE(575);
      if (lookahead == 'w') ADVANCE(559);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(661);
      if (lookahead == '#') ADVANCE(667);
      if (lookahead == '-') ADVANCE(670);
      if (lookahead == '.') ADVANCE(666);
      if (lookahead == '/') ADVANCE(660);
      if (lookahead == '=') ADVANCE(196);
      if (lookahead == 'c') ADVANCE(529);
      if (lookahead == 'd') ADVANCE(578);
      if (lookahead == 'e') ADVANCE(570);
      if (lookahead == 'i') ADVANCE(555);
      if (lookahead == 's') ADVANCE(534);
      if (lookahead == 'u') ADVANCE(575);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '/') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '=') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'f') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'i') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(666);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(621);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(668);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(650);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_unbuffered_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(672);
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
  [6] = {.lex_state = 151, .external_lex_state = 2},
  [7] = {.lex_state = 152, .external_lex_state = 2},
  [8] = {.lex_state = 152, .external_lex_state = 2},
  [9] = {.lex_state = 151, .external_lex_state = 3},
  [10] = {.lex_state = 152, .external_lex_state = 2},
  [11] = {.lex_state = 151, .external_lex_state = 2},
  [12] = {.lex_state = 151, .external_lex_state = 4},
  [13] = {.lex_state = 151, .external_lex_state = 4},
  [14] = {.lex_state = 151},
  [15] = {.lex_state = 151, .external_lex_state = 4},
  [16] = {.lex_state = 151, .external_lex_state = 2},
  [17] = {.lex_state = 151},
  [18] = {.lex_state = 151, .external_lex_state = 2},
  [19] = {.lex_state = 151, .external_lex_state = 4},
  [20] = {.lex_state = 151, .external_lex_state = 4},
  [21] = {.lex_state = 151, .external_lex_state = 2},
  [22] = {.lex_state = 151, .external_lex_state = 2},
  [23] = {.lex_state = 151, .external_lex_state = 4},
  [24] = {.lex_state = 149, .external_lex_state = 2},
  [25] = {.lex_state = 149, .external_lex_state = 2},
  [26] = {.lex_state = 151, .external_lex_state = 3},
  [27] = {.lex_state = 149, .external_lex_state = 2},
  [28] = {.lex_state = 151, .external_lex_state = 4},
  [29] = {.lex_state = 151, .external_lex_state = 4},
  [30] = {.lex_state = 151, .external_lex_state = 2},
  [31] = {.lex_state = 151, .external_lex_state = 2},
  [32] = {.lex_state = 151, .external_lex_state = 2},
  [33] = {.lex_state = 151, .external_lex_state = 2},
  [34] = {.lex_state = 151, .external_lex_state = 2},
  [35] = {.lex_state = 151, .external_lex_state = 2},
  [36] = {.lex_state = 151, .external_lex_state = 2},
  [37] = {.lex_state = 151, .external_lex_state = 2},
  [38] = {.lex_state = 651, .external_lex_state = 2},
  [39] = {.lex_state = 151, .external_lex_state = 2},
  [40] = {.lex_state = 152, .external_lex_state = 4},
  [41] = {.lex_state = 151, .external_lex_state = 2},
  [42] = {.lex_state = 152, .external_lex_state = 4},
  [43] = {.lex_state = 151, .external_lex_state = 2},
  [44] = {.lex_state = 152, .external_lex_state = 4},
  [45] = {.lex_state = 152, .external_lex_state = 4},
  [46] = {.lex_state = 152, .external_lex_state = 2},
  [47] = {.lex_state = 151, .external_lex_state = 2},
  [48] = {.lex_state = 151, .external_lex_state = 2},
  [49] = {.lex_state = 152, .external_lex_state = 4},
  [50] = {.lex_state = 151, .external_lex_state = 2},
  [51] = {.lex_state = 151, .external_lex_state = 2},
  [52] = {.lex_state = 152, .external_lex_state = 2},
  [53] = {.lex_state = 152, .external_lex_state = 4},
  [54] = {.lex_state = 151, .external_lex_state = 2},
  [55] = {.lex_state = 151, .external_lex_state = 2},
  [56] = {.lex_state = 151, .external_lex_state = 2},
  [57] = {.lex_state = 651, .external_lex_state = 3},
  [58] = {.lex_state = 151, .external_lex_state = 2},
  [59] = {.lex_state = 151, .external_lex_state = 2},
  [60] = {.lex_state = 150, .external_lex_state = 2},
  [61] = {.lex_state = 651, .external_lex_state = 2},
  [62] = {.lex_state = 151, .external_lex_state = 2},
  [63] = {.lex_state = 151, .external_lex_state = 2},
  [64] = {.lex_state = 151, .external_lex_state = 2},
  [65] = {.lex_state = 651, .external_lex_state = 2},
  [66] = {.lex_state = 151, .external_lex_state = 2},
  [67] = {.lex_state = 150, .external_lex_state = 2},
  [68] = {.lex_state = 151, .external_lex_state = 2},
  [69] = {.lex_state = 152, .external_lex_state = 5},
  [70] = {.lex_state = 150, .external_lex_state = 2},
  [71] = {.lex_state = 152, .external_lex_state = 5},
  [72] = {.lex_state = 151},
  [73] = {.lex_state = 152, .external_lex_state = 5},
  [74] = {.lex_state = 151},
  [75] = {.lex_state = 152, .external_lex_state = 5},
  [76] = {.lex_state = 152},
  [77] = {.lex_state = 152, .external_lex_state = 4},
  [78] = {.lex_state = 152, .external_lex_state = 5},
  [79] = {.lex_state = 152, .external_lex_state = 4},
  [80] = {.lex_state = 651, .external_lex_state = 2},
  [81] = {.lex_state = 152},
  [82] = {.lex_state = 152, .external_lex_state = 5},
  [83] = {.lex_state = 152, .external_lex_state = 2},
  [84] = {.lex_state = 60},
  [85] = {.lex_state = 152, .external_lex_state = 2},
  [86] = {.lex_state = 152, .external_lex_state = 2},
  [87] = {.lex_state = 60},
  [88] = {.lex_state = 152, .external_lex_state = 2},
  [89] = {.lex_state = 152, .external_lex_state = 2},
  [90] = {.lex_state = 152, .external_lex_state = 2},
  [91] = {.lex_state = 60},
  [92] = {.lex_state = 152, .external_lex_state = 2},
  [93] = {.lex_state = 60},
  [94] = {.lex_state = 152, .external_lex_state = 2},
  [95] = {.lex_state = 152, .external_lex_state = 2},
  [96] = {.lex_state = 152, .external_lex_state = 2},
  [97] = {.lex_state = 60},
  [98] = {.lex_state = 152, .external_lex_state = 2},
  [99] = {.lex_state = 60},
  [100] = {.lex_state = 152, .external_lex_state = 2},
  [101] = {.lex_state = 152, .external_lex_state = 2},
  [102] = {.lex_state = 60},
  [103] = {.lex_state = 60},
  [104] = {.lex_state = 152, .external_lex_state = 2},
  [105] = {.lex_state = 152, .external_lex_state = 2},
  [106] = {.lex_state = 152, .external_lex_state = 2},
  [107] = {.lex_state = 60},
  [108] = {.lex_state = 60},
  [109] = {.lex_state = 60},
  [110] = {.lex_state = 152, .external_lex_state = 2},
  [111] = {.lex_state = 152, .external_lex_state = 5},
  [112] = {.lex_state = 60},
  [113] = {.lex_state = 152, .external_lex_state = 2},
  [114] = {.lex_state = 152, .external_lex_state = 5},
  [115] = {.lex_state = 60},
  [116] = {.lex_state = 152, .external_lex_state = 2},
  [117] = {.lex_state = 60},
  [118] = {.lex_state = 152, .external_lex_state = 2},
  [119] = {.lex_state = 60},
  [120] = {.lex_state = 152, .external_lex_state = 2},
  [121] = {.lex_state = 152},
  [122] = {.lex_state = 152},
  [123] = {.lex_state = 152},
  [124] = {.lex_state = 152},
  [125] = {.lex_state = 152},
  [126] = {.lex_state = 152},
  [127] = {.lex_state = 152},
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
  [146] = {.lex_state = 60, .external_lex_state = 3},
  [147] = {.lex_state = 60, .external_lex_state = 3},
  [148] = {.lex_state = 60, .external_lex_state = 3},
  [149] = {.lex_state = 54, .external_lex_state = 6},
  [150] = {.lex_state = 54, .external_lex_state = 6},
  [151] = {.lex_state = 54, .external_lex_state = 6},
  [152] = {.lex_state = 54, .external_lex_state = 6},
  [153] = {.lex_state = 54, .external_lex_state = 6},
  [154] = {.lex_state = 54, .external_lex_state = 6},
  [155] = {.lex_state = 54, .external_lex_state = 6},
  [156] = {.lex_state = 54, .external_lex_state = 6},
  [157] = {.lex_state = 54, .external_lex_state = 6},
  [158] = {.lex_state = 54, .external_lex_state = 6},
  [159] = {.lex_state = 60},
  [160] = {.lex_state = 60},
  [161] = {.lex_state = 60},
  [162] = {.lex_state = 60},
  [163] = {.lex_state = 60},
  [164] = {.lex_state = 60, .external_lex_state = 1},
  [165] = {.lex_state = 60, .external_lex_state = 1},
  [166] = {.lex_state = 55},
  [167] = {.lex_state = 60, .external_lex_state = 1},
  [168] = {.lex_state = 60, .external_lex_state = 3},
  [169] = {.lex_state = 55},
  [170] = {.lex_state = 60, .external_lex_state = 1},
  [171] = {.lex_state = 60, .external_lex_state = 3},
  [172] = {.lex_state = 60, .external_lex_state = 1},
  [173] = {.lex_state = 60, .external_lex_state = 1},
  [174] = {.lex_state = 67},
  [175] = {.lex_state = 67},
  [176] = {.lex_state = 60, .external_lex_state = 1},
  [177] = {.lex_state = 67},
  [178] = {.lex_state = 60, .external_lex_state = 3},
  [179] = {.lex_state = 60, .external_lex_state = 3},
  [180] = {.lex_state = 60, .external_lex_state = 3},
  [181] = {.lex_state = 60, .external_lex_state = 3},
  [182] = {.lex_state = 60, .external_lex_state = 3},
  [183] = {.lex_state = 60, .external_lex_state = 3},
  [184] = {.lex_state = 60, .external_lex_state = 3},
  [185] = {.lex_state = 60, .external_lex_state = 3},
  [186] = {.lex_state = 60, .external_lex_state = 3},
  [187] = {.lex_state = 54, .external_lex_state = 6},
  [188] = {.lex_state = 60, .external_lex_state = 3},
  [189] = {.lex_state = 60, .external_lex_state = 3},
  [190] = {.lex_state = 60, .external_lex_state = 3},
  [191] = {.lex_state = 60, .external_lex_state = 3},
  [192] = {.lex_state = 60, .external_lex_state = 3},
  [193] = {.lex_state = 60, .external_lex_state = 3},
  [194] = {.lex_state = 60, .external_lex_state = 3},
  [195] = {.lex_state = 60, .external_lex_state = 3},
  [196] = {.lex_state = 60, .external_lex_state = 3},
  [197] = {.lex_state = 55, .external_lex_state = 6},
  [198] = {.lex_state = 55, .external_lex_state = 6},
  [199] = {.lex_state = 55, .external_lex_state = 6},
  [200] = {.lex_state = 55, .external_lex_state = 6},
  [201] = {.lex_state = 55, .external_lex_state = 6},
  [202] = {.lex_state = 55, .external_lex_state = 6},
  [203] = {.lex_state = 55, .external_lex_state = 6},
  [204] = {.lex_state = 55, .external_lex_state = 6},
  [205] = {.lex_state = 55, .external_lex_state = 6},
  [206] = {.lex_state = 55, .external_lex_state = 6},
  [207] = {.lex_state = 11, .external_lex_state = 2},
  [208] = {.lex_state = 11, .external_lex_state = 2},
  [209] = {.lex_state = 11, .external_lex_state = 2},
  [210] = {.lex_state = 11, .external_lex_state = 2},
  [211] = {.lex_state = 11, .external_lex_state = 2},
  [212] = {.lex_state = 11, .external_lex_state = 2},
  [213] = {.lex_state = 11, .external_lex_state = 2},
  [214] = {.lex_state = 11, .external_lex_state = 2},
  [215] = {.lex_state = 61},
  [216] = {.lex_state = 11, .external_lex_state = 2},
  [217] = {.lex_state = 11, .external_lex_state = 2},
  [218] = {.lex_state = 11, .external_lex_state = 2},
  [219] = {.lex_state = 11, .external_lex_state = 6},
  [220] = {.lex_state = 11, .external_lex_state = 6},
  [221] = {.lex_state = 11, .external_lex_state = 6},
  [222] = {.lex_state = 64, .external_lex_state = 3},
  [223] = {.lex_state = 11, .external_lex_state = 6},
  [224] = {.lex_state = 64, .external_lex_state = 3},
  [225] = {.lex_state = 64, .external_lex_state = 1},
  [226] = {.lex_state = 11, .external_lex_state = 6},
  [227] = {.lex_state = 11, .external_lex_state = 6},
  [228] = {.lex_state = 11},
  [229] = {.lex_state = 11, .external_lex_state = 6},
  [230] = {.lex_state = 11, .external_lex_state = 6},
  [231] = {.lex_state = 11, .external_lex_state = 6},
  [232] = {.lex_state = 64, .external_lex_state = 1},
  [233] = {.lex_state = 11, .external_lex_state = 6},
  [234] = {.lex_state = 11, .external_lex_state = 6},
  [235] = {.lex_state = 11, .external_lex_state = 6},
  [236] = {.lex_state = 64, .external_lex_state = 1},
  [237] = {.lex_state = 11, .external_lex_state = 6},
  [238] = {.lex_state = 64, .external_lex_state = 1},
  [239] = {.lex_state = 64, .external_lex_state = 3},
  [240] = {.lex_state = 11, .external_lex_state = 6},
  [241] = {.lex_state = 64, .external_lex_state = 3},
  [242] = {.lex_state = 11, .external_lex_state = 6},
  [243] = {.lex_state = 64, .external_lex_state = 1},
  [244] = {.lex_state = 11, .external_lex_state = 6},
  [245] = {.lex_state = 11, .external_lex_state = 6},
  [246] = {.lex_state = 11},
  [247] = {.lex_state = 11, .external_lex_state = 6},
  [248] = {.lex_state = 64, .external_lex_state = 1},
  [249] = {.lex_state = 11, .external_lex_state = 6},
  [250] = {.lex_state = 11, .external_lex_state = 6},
  [251] = {.lex_state = 11},
  [252] = {.lex_state = 64, .external_lex_state = 3},
  [253] = {.lex_state = 11},
  [254] = {.lex_state = 11, .external_lex_state = 6},
  [255] = {.lex_state = 11, .external_lex_state = 6},
  [256] = {.lex_state = 64, .external_lex_state = 3},
  [257] = {.lex_state = 11},
  [258] = {.lex_state = 11, .external_lex_state = 6},
  [259] = {.lex_state = 11, .external_lex_state = 6},
  [260] = {.lex_state = 11},
  [261] = {.lex_state = 11, .external_lex_state = 6},
  [262] = {.lex_state = 11},
  [263] = {.lex_state = 11},
  [264] = {.lex_state = 11},
  [265] = {.lex_state = 11},
  [266] = {.lex_state = 55, .external_lex_state = 6},
  [267] = {.lex_state = 11},
  [268] = {.lex_state = 11, .external_lex_state = 6},
  [269] = {.lex_state = 11},
  [270] = {.lex_state = 11},
  [271] = {.lex_state = 64, .external_lex_state = 6},
  [272] = {.lex_state = 11},
  [273] = {.lex_state = 11},
  [274] = {.lex_state = 64, .external_lex_state = 6},
  [275] = {.lex_state = 11},
  [276] = {.lex_state = 11},
  [277] = {.lex_state = 64, .external_lex_state = 6},
  [278] = {.lex_state = 11},
  [279] = {.lex_state = 11},
  [280] = {.lex_state = 64, .external_lex_state = 1},
  [281] = {.lex_state = 11},
  [282] = {.lex_state = 11},
  [283] = {.lex_state = 55, .external_lex_state = 6},
  [284] = {.lex_state = 11},
  [285] = {.lex_state = 55},
  [286] = {.lex_state = 55, .external_lex_state = 6},
  [287] = {.lex_state = 64, .external_lex_state = 6},
  [288] = {.lex_state = 11},
  [289] = {.lex_state = 11},
  [290] = {.lex_state = 64, .external_lex_state = 6},
  [291] = {.lex_state = 11},
  [292] = {.lex_state = 64, .external_lex_state = 3},
  [293] = {.lex_state = 64, .external_lex_state = 3},
  [294] = {.lex_state = 64},
  [295] = {.lex_state = 11, .external_lex_state = 6},
  [296] = {.lex_state = 11, .external_lex_state = 6},
  [297] = {.lex_state = 64, .external_lex_state = 3},
  [298] = {.lex_state = 64, .external_lex_state = 3},
  [299] = {.lex_state = 64, .external_lex_state = 3},
  [300] = {.lex_state = 64, .external_lex_state = 3},
  [301] = {.lex_state = 64},
  [302] = {.lex_state = 64, .external_lex_state = 3},
  [303] = {.lex_state = 64, .external_lex_state = 3},
  [304] = {.lex_state = 64, .external_lex_state = 3},
  [305] = {.lex_state = 64},
  [306] = {.lex_state = 67},
  [307] = {.lex_state = 64, .external_lex_state = 3},
  [308] = {.lex_state = 64},
  [309] = {.lex_state = 64, .external_lex_state = 3},
  [310] = {.lex_state = 11, .external_lex_state = 6},
  [311] = {.lex_state = 55},
  [312] = {.lex_state = 64, .external_lex_state = 3},
  [313] = {.lex_state = 64, .external_lex_state = 3},
  [314] = {.lex_state = 64, .external_lex_state = 3},
  [315] = {.lex_state = 55},
  [316] = {.lex_state = 64, .external_lex_state = 3},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 64, .external_lex_state = 3},
  [319] = {.lex_state = 64},
  [320] = {.lex_state = 64},
  [321] = {.lex_state = 64},
  [322] = {.lex_state = 64},
  [323] = {.lex_state = 64},
  [324] = {.lex_state = 64},
  [325] = {.lex_state = 64},
  [326] = {.lex_state = 50, .external_lex_state = 6},
  [327] = {.lex_state = 64},
  [328] = {.lex_state = 11, .external_lex_state = 6},
  [329] = {.lex_state = 64},
  [330] = {.lex_state = 64},
  [331] = {.lex_state = 54},
  [332] = {.lex_state = 64},
  [333] = {.lex_state = 11, .external_lex_state = 6},
  [334] = {.lex_state = 54},
  [335] = {.lex_state = 64},
  [336] = {.lex_state = 11, .external_lex_state = 2},
  [337] = {.lex_state = 53, .external_lex_state = 3},
  [338] = {.lex_state = 64},
  [339] = {.lex_state = 53, .external_lex_state = 3},
  [340] = {.lex_state = 50, .external_lex_state = 6},
  [341] = {.lex_state = 64},
  [342] = {.lex_state = 64},
  [343] = {.lex_state = 11, .external_lex_state = 6},
  [344] = {.lex_state = 50},
  [345] = {.lex_state = 50},
  [346] = {.lex_state = 64},
  [347] = {.lex_state = 54},
  [348] = {.lex_state = 53, .external_lex_state = 3},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 54},
  [351] = {.lex_state = 50},
  [352] = {.lex_state = 50},
  [353] = {.lex_state = 50},
  [354] = {.lex_state = 50},
  [355] = {.lex_state = 54},
  [356] = {.lex_state = 54},
  [357] = {.lex_state = 54},
  [358] = {.lex_state = 50},
  [359] = {.lex_state = 50},
  [360] = {.lex_state = 54},
  [361] = {.lex_state = 53, .external_lex_state = 6},
  [362] = {.lex_state = 54},
  [363] = {.lex_state = 54},
  [364] = {.lex_state = 54},
  [365] = {.lex_state = 54},
  [366] = {.lex_state = 53, .external_lex_state = 3},
  [367] = {.lex_state = 54},
  [368] = {.lex_state = 50},
  [369] = {.lex_state = 54},
  [370] = {.lex_state = 54},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 54},
  [373] = {.lex_state = 54},
  [374] = {.lex_state = 50},
  [375] = {.lex_state = 50},
  [376] = {.lex_state = 54},
  [377] = {.lex_state = 50},
  [378] = {.lex_state = 50},
  [379] = {.lex_state = 65},
  [380] = {.lex_state = 54},
  [381] = {.lex_state = 62},
  [382] = {.lex_state = 647},
  [383] = {.lex_state = 647},
  [384] = {.lex_state = 50},
  [385] = {.lex_state = 647, .external_lex_state = 6},
  [386] = {.lex_state = 65},
  [387] = {.lex_state = 50},
  [388] = {.lex_state = 50},
  [389] = {.lex_state = 62},
  [390] = {.lex_state = 0, .external_lex_state = 6},
  [391] = {.lex_state = 0, .external_lex_state = 6},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0, .external_lex_state = 5},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0, .external_lex_state = 6},
  [396] = {.lex_state = 672},
  [397] = {.lex_state = 0, .external_lex_state = 6},
  [398] = {.lex_state = 0, .external_lex_state = 6},
  [399] = {.lex_state = 0, .external_lex_state = 5},
  [400] = {.lex_state = 0, .external_lex_state = 6},
  [401] = {.lex_state = 0, .external_lex_state = 6},
  [402] = {.lex_state = 0, .external_lex_state = 6},
  [403] = {.lex_state = 50},
  [404] = {.lex_state = 67},
  [405] = {.lex_state = 0, .external_lex_state = 6},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 51},
  [408] = {.lex_state = 0, .external_lex_state = 6},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0, .external_lex_state = 5},
  [411] = {.lex_state = 672},
  [412] = {.lex_state = 0, .external_lex_state = 6},
  [413] = {.lex_state = 0, .external_lex_state = 6},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 52},
  [417] = {.lex_state = 52},
  [418] = {.lex_state = 0, .external_lex_state = 5},
  [419] = {.lex_state = 0, .external_lex_state = 5},
  [420] = {.lex_state = 0, .external_lex_state = 6},
  [421] = {.lex_state = 0, .external_lex_state = 6},
  [422] = {.lex_state = 0, .external_lex_state = 5},
  [423] = {.lex_state = 152},
  [424] = {.lex_state = 0, .external_lex_state = 6},
  [425] = {.lex_state = 0, .external_lex_state = 6},
  [426] = {.lex_state = 0, .external_lex_state = 5},
  [427] = {.lex_state = 0, .external_lex_state = 5},
  [428] = {.lex_state = 0, .external_lex_state = 5},
  [429] = {.lex_state = 0, .external_lex_state = 5},
  [430] = {.lex_state = 0, .external_lex_state = 5},
  [431] = {.lex_state = 0, .external_lex_state = 5},
  [432] = {.lex_state = 0, .external_lex_state = 5},
  [433] = {.lex_state = 0, .external_lex_state = 5},
  [434] = {.lex_state = 0, .external_lex_state = 6},
  [435] = {.lex_state = 0, .external_lex_state = 6},
  [436] = {.lex_state = 0, .external_lex_state = 6},
  [437] = {.lex_state = 0, .external_lex_state = 6},
  [438] = {.lex_state = 0, .external_lex_state = 6},
  [439] = {.lex_state = 0, .external_lex_state = 6},
  [440] = {.lex_state = 0, .external_lex_state = 6},
  [441] = {.lex_state = 0, .external_lex_state = 6},
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
    [sym_source_file] = STATE(414),
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
    [anon_sym_SLASH_SLASH_DASH] = ACTIONS(25),
    [sym_tag_name] = ACTIONS(27),
    [sym_class] = ACTIONS(29),
    [sym_id] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
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
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(27), 1,
      sym_tag_name,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(29), 2,
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
  [61] = 16,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_doctype,
    ACTIONS(40), 1,
      anon_sym_PIPE,
    ACTIONS(46), 1,
      anon_sym_elseif,
    ACTIONS(49), 1,
      anon_sym_else,
    ACTIONS(52), 1,
      anon_sym_case,
    ACTIONS(55), 1,
      anon_sym_BANG_EQ,
    ACTIONS(58), 1,
      anon_sym_EQ,
    ACTIONS(61), 1,
      anon_sym_script_DOT,
    ACTIONS(64), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(67), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(70), 1,
      sym_tag_name,
    ACTIONS(76), 1,
      anon_sym_DASH,
    ACTIONS(43), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(73), 2,
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
  [122] = 10,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_elseif,
    ACTIONS(89), 1,
      anon_sym_else,
    ACTIONS(91), 1,
      sym_tag_name,
    ACTIONS(95), 1,
      sym__dedent,
    ACTIONS(85), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(93), 2,
      sym_class,
      sym_id,
    ACTIONS(81), 5,
      anon_sym_doctype,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
    STATE(5), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(79), 6,
      ts_builtin_sym_end,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_DASH,
  [168] = 9,
    ACTIONS(101), 1,
      anon_sym_PIPE,
    ACTIONS(107), 1,
      anon_sym_elseif,
    ACTIONS(110), 1,
      anon_sym_else,
    ACTIONS(113), 1,
      sym_tag_name,
    ACTIONS(104), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(116), 2,
      sym_class,
      sym_id,
    ACTIONS(99), 5,
      anon_sym_doctype,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
    STATE(5), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(97), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_DASH,
  [212] = 7,
    ACTIONS(91), 1,
      sym_tag_name,
    ACTIONS(123), 1,
      anon_sym_DASH,
    STATE(31), 1,
      sym_unbuffered_code,
    ACTIONS(93), 2,
      sym_class,
      sym_id,
    STATE(16), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(119), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(121), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
  [250] = 9,
    ACTIONS(125), 1,
      anon_sym_PIPE,
    ACTIONS(131), 1,
      anon_sym_elseif,
    ACTIONS(134), 1,
      anon_sym_else,
    ACTIONS(137), 1,
      sym_tag_name,
    ACTIONS(128), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(140), 2,
      sym_class,
      sym_id,
    ACTIONS(99), 3,
      anon_sym_doctype,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
    STATE(7), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(97), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_DASH,
  [292] = 10,
    ACTIONS(143), 1,
      anon_sym_PIPE,
    ACTIONS(147), 1,
      anon_sym_elseif,
    ACTIONS(149), 1,
      anon_sym_else,
    ACTIONS(151), 1,
      sym_tag_name,
    ACTIONS(155), 1,
      sym__dedent,
    ACTIONS(145), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(153), 2,
      sym_class,
      sym_id,
    ACTIONS(81), 3,
      anon_sym_doctype,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
    STATE(7), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(79), 6,
      ts_builtin_sym_end,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_DASH,
  [336] = 6,
    ACTIONS(161), 1,
      anon_sym_COLON,
    ACTIONS(163), 1,
      sym__newline,
    ACTIONS(165), 1,
      sym__dedent,
    STATE(63), 1,
      sym__when_content,
    ACTIONS(159), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(157), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [372] = 10,
    ACTIONS(143), 1,
      anon_sym_PIPE,
    ACTIONS(147), 1,
      anon_sym_elseif,
    ACTIONS(149), 1,
      anon_sym_else,
    ACTIONS(151), 1,
      sym_tag_name,
    ACTIONS(167), 1,
      sym__dedent,
    ACTIONS(145), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(153), 2,
      sym_class,
      sym_id,
    ACTIONS(81), 3,
      anon_sym_doctype,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
    STATE(7), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(79), 6,
      ts_builtin_sym_end,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_DASH,
  [416] = 7,
    ACTIONS(91), 1,
      sym_tag_name,
    ACTIONS(123), 1,
      anon_sym_DASH,
    STATE(55), 1,
      sym_unbuffered_code,
    ACTIONS(93), 2,
      sym_class,
      sym_id,
    STATE(18), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(169), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(171), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
  [454] = 4,
    ACTIONS(177), 1,
      sym__indent,
    STATE(64), 1,
      sym_children,
    ACTIONS(175), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(173), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [485] = 4,
    ACTIONS(177), 1,
      sym__indent,
    STATE(51), 1,
      sym_children,
    ACTIONS(181), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(179), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [516] = 6,
    ACTIONS(187), 1,
      anon_sym_when,
    ACTIONS(190), 1,
      anon_sym_default,
    STATE(9), 1,
      sym__when_keyword,
    STATE(14), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(185), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(183), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [551] = 4,
    ACTIONS(193), 1,
      sym__indent,
    STATE(64), 1,
      sym_children,
    ACTIONS(175), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(173), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [582] = 5,
    ACTIONS(91), 1,
      sym_tag_name,
    ACTIONS(93), 2,
      sym_class,
      sym_id,
    STATE(22), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(171), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
    ACTIONS(169), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_DASH,
  [615] = 6,
    ACTIONS(199), 1,
      anon_sym_when,
    ACTIONS(201), 1,
      anon_sym_default,
    STATE(9), 1,
      sym__when_keyword,
    STATE(14), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(197), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(195), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [650] = 5,
    ACTIONS(91), 1,
      sym_tag_name,
    ACTIONS(93), 2,
      sym_class,
      sym_id,
    STATE(22), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(205), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
    ACTIONS(203), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_DASH,
  [683] = 4,
    ACTIONS(211), 1,
      sym__indent,
    STATE(59), 1,
      sym_children,
    ACTIONS(209), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(207), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [714] = 4,
    ACTIONS(177), 1,
      sym__indent,
    STATE(48), 1,
      sym_children,
    ACTIONS(215), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(213), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [745] = 3,
    STATE(22), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(219), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(217), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [774] = 5,
    ACTIONS(225), 1,
      sym_tag_name,
    ACTIONS(228), 2,
      sym_class,
      sym_id,
    STATE(22), 2,
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
      anon_sym_SLASH_SLASH,
    ACTIONS(221), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_DASH,
  [807] = 4,
    ACTIONS(235), 1,
      sym__indent,
    STATE(32), 1,
      sym_children,
    ACTIONS(233), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(231), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [838] = 4,
    ACTIONS(241), 1,
      sym__un_delimited_javascript_line,
    STATE(25), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(237), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(239), 18,
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
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [869] = 4,
    ACTIONS(247), 1,
      sym__un_delimited_javascript_line,
    STATE(25), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(243), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(245), 18,
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
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [900] = 2,
    ACTIONS(252), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(250), 13,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [927] = 2,
    ACTIONS(254), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(256), 19,
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
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      sym__un_delimited_javascript_line,
      anon_sym_DASH,
  [953] = 3,
    ACTIONS(262), 1,
      sym__indent,
    ACTIONS(260), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(258), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [981] = 4,
    ACTIONS(268), 1,
      sym__indent,
    ACTIONS(270), 1,
      sym__dedent,
    ACTIONS(266), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(264), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1011] = 2,
    ACTIONS(209), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(207), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1036] = 2,
    ACTIONS(171), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(169), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1061] = 2,
    ACTIONS(209), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(207), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1086] = 2,
    ACTIONS(274), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(272), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1111] = 2,
    ACTIONS(233), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(231), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1136] = 2,
    ACTIONS(278), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(276), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1161] = 2,
    ACTIONS(282), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(280), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1186] = 2,
    ACTIONS(286), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(284), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1211] = 4,
    ACTIONS(292), 1,
      sym__comment_content,
    STATE(38), 1,
      aux_sym_comment_repeat1,
    ACTIONS(288), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(290), 16,
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
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1240] = 2,
    ACTIONS(297), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(295), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1265] = 4,
    ACTIONS(299), 1,
      sym__indent,
    STATE(83), 1,
      sym_children,
    ACTIONS(215), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(213), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1294] = 3,
    ACTIONS(305), 1,
      sym__dedent,
    ACTIONS(303), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(301), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1321] = 4,
    ACTIONS(299), 1,
      sym__indent,
    STATE(89), 1,
      sym_children,
    ACTIONS(181), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(179), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1350] = 2,
    ACTIONS(309), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(307), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1375] = 4,
    ACTIONS(311), 1,
      sym__indent,
    STATE(101), 1,
      sym_children,
    ACTIONS(175), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(173), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1404] = 4,
    ACTIONS(299), 1,
      sym__indent,
    STATE(101), 1,
      sym_children,
    ACTIONS(175), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(173), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1433] = 5,
    ACTIONS(313), 1,
      sym_tag_name,
    ACTIONS(316), 2,
      sym_class,
      sym_id,
    STATE(46), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(223), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
    ACTIONS(221), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_DASH,
  [1464] = 3,
    ACTIONS(323), 1,
      sym__dedent,
    ACTIONS(321), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(319), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1491] = 2,
    ACTIONS(327), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(325), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1516] = 4,
    ACTIONS(329), 1,
      sym__indent,
    STATE(106), 1,
      sym_children,
    ACTIONS(209), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(207), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1545] = 2,
    ACTIONS(215), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(213), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1570] = 2,
    ACTIONS(215), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(213), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1595] = 3,
    STATE(46), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(219), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(217), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1622] = 4,
    ACTIONS(331), 1,
      sym__indent,
    STATE(118), 1,
      sym_children,
    ACTIONS(233), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(231), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1651] = 2,
    ACTIONS(335), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(333), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1676] = 2,
    ACTIONS(205), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(203), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1701] = 2,
    ACTIONS(175), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(173), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1726] = 3,
    ACTIONS(341), 1,
      sym__newline,
    ACTIONS(337), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(339), 17,
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
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      sym__comment_content,
      anon_sym_DASH,
  [1753] = 2,
    ACTIONS(345), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(343), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1778] = 2,
    ACTIONS(175), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(173), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1803] = 4,
    ACTIONS(347), 1,
      sym__un_delimited_javascript_line,
    STATE(60), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(243), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(245), 16,
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
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1832] = 5,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
    ACTIONS(354), 1,
      sym__comment_content,
    ACTIONS(356), 1,
      sym__dedent,
    STATE(38), 1,
      aux_sym_comment_repeat1,
    ACTIONS(352), 16,
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
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1863] = 2,
    ACTIONS(360), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(358), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1888] = 3,
    ACTIONS(270), 1,
      sym__dedent,
    ACTIONS(266), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(264), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1915] = 2,
    ACTIONS(181), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(179), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1940] = 5,
    ACTIONS(354), 1,
      sym__comment_content,
    ACTIONS(362), 1,
      ts_builtin_sym_end,
    ACTIONS(366), 1,
      sym__dedent,
    STATE(38), 1,
      aux_sym_comment_repeat1,
    ACTIONS(364), 16,
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
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1971] = 2,
    ACTIONS(181), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(179), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1996] = 4,
    ACTIONS(368), 1,
      sym__un_delimited_javascript_line,
    STATE(60), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(237), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(239), 16,
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
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2025] = 2,
    ACTIONS(372), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(370), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2050] = 4,
    ACTIONS(374), 1,
      sym__indent,
    STATE(141), 1,
      sym_children,
    ACTIONS(209), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(207), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2078] = 2,
    ACTIONS(254), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(256), 17,
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
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      sym__un_delimited_javascript_line,
      anon_sym_DASH,
  [2102] = 4,
    ACTIONS(376), 1,
      sym__indent,
    STATE(130), 1,
      sym_children,
    ACTIONS(181), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(179), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2130] = 2,
    ACTIONS(266), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(264), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2154] = 4,
    ACTIONS(376), 1,
      sym__indent,
    STATE(125), 1,
      sym_children,
    ACTIONS(215), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(213), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2182] = 2,
    ACTIONS(380), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(378), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2206] = 4,
    ACTIONS(382), 1,
      sym__indent,
    STATE(123), 1,
      sym_children,
    ACTIONS(175), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(173), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2234] = 5,
    ACTIONS(384), 1,
      sym_tag_name,
    ACTIONS(387), 2,
      sym_class,
      sym_id,
    STATE(76), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(223), 6,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
    ACTIONS(221), 8,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_DASH,
  [2264] = 3,
    ACTIONS(390), 1,
      sym__indent,
    ACTIONS(260), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(258), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2290] = 4,
    ACTIONS(376), 1,
      sym__indent,
    STATE(123), 1,
      sym_children,
    ACTIONS(175), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(173), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2318] = 4,
    ACTIONS(392), 1,
      sym__indent,
    ACTIONS(394), 1,
      sym__dedent,
    ACTIONS(260), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(258), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2346] = 2,
    ACTIONS(288), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(290), 17,
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
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      sym__comment_content,
      anon_sym_DASH,
  [2370] = 3,
    STATE(76), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(219), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(217), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2396] = 4,
    ACTIONS(396), 1,
      sym__indent,
    STATE(140), 1,
      sym_children,
    ACTIONS(233), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(231), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2424] = 2,
    ACTIONS(327), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(325), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2447] = 11,
    ACTIONS(17), 1,
      anon_sym_BANG_EQ,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(143), 1,
      anon_sym_PIPE,
    ACTIONS(147), 1,
      anon_sym_elseif,
    ACTIONS(149), 1,
      anon_sym_else,
    ACTIONS(151), 1,
      sym_tag_name,
    ACTIONS(398), 1,
      anon_sym_DOT,
    ACTIONS(145), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(153), 2,
      sym_class,
      sym_id,
    STATE(145), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(8), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2488] = 3,
    ACTIONS(400), 1,
      sym__dedent,
    ACTIONS(321), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(319), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2513] = 3,
    ACTIONS(402), 1,
      sym__dedent,
    ACTIONS(372), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(370), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2538] = 11,
    ACTIONS(404), 1,
      anon_sym_PIPE,
    ACTIONS(408), 1,
      anon_sym_elseif,
    ACTIONS(410), 1,
      anon_sym_else,
    ACTIONS(412), 1,
      anon_sym_BANG_EQ,
    ACTIONS(414), 1,
      anon_sym_EQ,
    ACTIONS(416), 1,
      anon_sym_DOT,
    ACTIONS(418), 1,
      sym_tag_name,
    ACTIONS(406), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(420), 2,
      sym_class,
      sym_id,
    STATE(185), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(148), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2579] = 2,
    ACTIONS(215), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(213), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2602] = 2,
    ACTIONS(215), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(213), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2625] = 3,
    ACTIONS(422), 1,
      sym__dedent,
    ACTIONS(303), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(301), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2650] = 11,
    ACTIONS(404), 1,
      anon_sym_PIPE,
    ACTIONS(408), 1,
      anon_sym_elseif,
    ACTIONS(410), 1,
      anon_sym_else,
    ACTIONS(412), 1,
      anon_sym_BANG_EQ,
    ACTIONS(414), 1,
      anon_sym_EQ,
    ACTIONS(416), 1,
      anon_sym_DOT,
    ACTIONS(418), 1,
      sym_tag_name,
    ACTIONS(406), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(420), 2,
      sym_class,
      sym_id,
    STATE(183), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(148), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2691] = 2,
    ACTIONS(345), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(343), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2714] = 11,
    ACTIONS(404), 1,
      anon_sym_PIPE,
    ACTIONS(408), 1,
      anon_sym_elseif,
    ACTIONS(410), 1,
      anon_sym_else,
    ACTIONS(412), 1,
      anon_sym_BANG_EQ,
    ACTIONS(414), 1,
      anon_sym_EQ,
    ACTIONS(416), 1,
      anon_sym_DOT,
    ACTIONS(418), 1,
      sym_tag_name,
    ACTIONS(406), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(420), 2,
      sym_class,
      sym_id,
    STATE(192), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(148), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2755] = 2,
    ACTIONS(286), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(284), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2778] = 2,
    ACTIONS(372), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(370), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2801] = 2,
    ACTIONS(282), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(280), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2824] = 11,
    ACTIONS(17), 1,
      anon_sym_BANG_EQ,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(143), 1,
      anon_sym_PIPE,
    ACTIONS(147), 1,
      anon_sym_elseif,
    ACTIONS(149), 1,
      anon_sym_else,
    ACTIONS(151), 1,
      sym_tag_name,
    ACTIONS(398), 1,
      anon_sym_DOT,
    ACTIONS(145), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(153), 2,
      sym_class,
      sym_id,
    STATE(129), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(8), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2865] = 2,
    ACTIONS(335), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(333), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2888] = 11,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_elseif,
    ACTIONS(89), 1,
      anon_sym_else,
    ACTIONS(91), 1,
      sym_tag_name,
    ACTIONS(424), 1,
      anon_sym_BANG_EQ,
    ACTIONS(426), 1,
      anon_sym_EQ,
    ACTIONS(428), 1,
      anon_sym_DOT,
    ACTIONS(85), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(93), 2,
      sym_class,
      sym_id,
    STATE(50), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(4), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2929] = 2,
    ACTIONS(181), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(179), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2952] = 2,
    ACTIONS(181), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(179), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2975] = 11,
    ACTIONS(404), 1,
      anon_sym_PIPE,
    ACTIONS(408), 1,
      anon_sym_elseif,
    ACTIONS(410), 1,
      anon_sym_else,
    ACTIONS(418), 1,
      sym_tag_name,
    ACTIONS(430), 1,
      anon_sym_BANG_EQ,
    ACTIONS(432), 1,
      anon_sym_EQ,
    ACTIONS(434), 1,
      anon_sym_DOT,
    ACTIONS(406), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(420), 2,
      sym_class,
      sym_id,
    STATE(313), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(147), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3016] = 11,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_elseif,
    ACTIONS(89), 1,
      anon_sym_else,
    ACTIONS(91), 1,
      sym_tag_name,
    ACTIONS(424), 1,
      anon_sym_BANG_EQ,
    ACTIONS(426), 1,
      anon_sym_EQ,
    ACTIONS(428), 1,
      anon_sym_DOT,
    ACTIONS(85), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(93), 2,
      sym_class,
      sym_id,
    STATE(66), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(4), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3057] = 2,
    ACTIONS(360), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(358), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3080] = 2,
    ACTIONS(278), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(276), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3103] = 2,
    ACTIONS(175), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(173), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3126] = 11,
    ACTIONS(17), 1,
      anon_sym_BANG_EQ,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(143), 1,
      anon_sym_PIPE,
    ACTIONS(147), 1,
      anon_sym_elseif,
    ACTIONS(149), 1,
      anon_sym_else,
    ACTIONS(151), 1,
      sym_tag_name,
    ACTIONS(398), 1,
      anon_sym_DOT,
    ACTIONS(145), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(153), 2,
      sym_class,
      sym_id,
    STATE(142), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(8), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3167] = 11,
    ACTIONS(143), 1,
      anon_sym_PIPE,
    ACTIONS(147), 1,
      anon_sym_elseif,
    ACTIONS(149), 1,
      anon_sym_else,
    ACTIONS(151), 1,
      sym_tag_name,
    ACTIONS(436), 1,
      anon_sym_BANG_EQ,
    ACTIONS(438), 1,
      anon_sym_EQ,
    ACTIONS(440), 1,
      anon_sym_DOT,
    ACTIONS(145), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(153), 2,
      sym_class,
      sym_id,
    STATE(116), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(10), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3208] = 11,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_elseif,
    ACTIONS(89), 1,
      anon_sym_else,
    ACTIONS(91), 1,
      sym_tag_name,
    ACTIONS(424), 1,
      anon_sym_BANG_EQ,
    ACTIONS(426), 1,
      anon_sym_EQ,
    ACTIONS(428), 1,
      anon_sym_DOT,
    ACTIONS(85), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(93), 2,
      sym_class,
      sym_id,
    STATE(56), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(4), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3249] = 2,
    ACTIONS(233), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(231), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3272] = 3,
    ACTIONS(446), 1,
      sym__indent,
    ACTIONS(444), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(442), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3297] = 11,
    ACTIONS(143), 1,
      anon_sym_PIPE,
    ACTIONS(147), 1,
      anon_sym_elseif,
    ACTIONS(149), 1,
      anon_sym_else,
    ACTIONS(151), 1,
      sym_tag_name,
    ACTIONS(436), 1,
      anon_sym_BANG_EQ,
    ACTIONS(438), 1,
      anon_sym_EQ,
    ACTIONS(440), 1,
      anon_sym_DOT,
    ACTIONS(145), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(153), 2,
      sym_class,
      sym_id,
    STATE(100), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(10), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3338] = 2,
    ACTIONS(274), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(272), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3361] = 3,
    ACTIONS(452), 1,
      sym__indent,
    ACTIONS(450), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(448), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3386] = 11,
    ACTIONS(404), 1,
      anon_sym_PIPE,
    ACTIONS(408), 1,
      anon_sym_elseif,
    ACTIONS(410), 1,
      anon_sym_else,
    ACTIONS(418), 1,
      sym_tag_name,
    ACTIONS(430), 1,
      anon_sym_BANG_EQ,
    ACTIONS(432), 1,
      anon_sym_EQ,
    ACTIONS(434), 1,
      anon_sym_DOT,
    ACTIONS(406), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(420), 2,
      sym_class,
      sym_id,
    STATE(303), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(147), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3427] = 2,
    ACTIONS(175), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(173), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3450] = 11,
    ACTIONS(143), 1,
      anon_sym_PIPE,
    ACTIONS(147), 1,
      anon_sym_elseif,
    ACTIONS(149), 1,
      anon_sym_else,
    ACTIONS(151), 1,
      sym_tag_name,
    ACTIONS(436), 1,
      anon_sym_BANG_EQ,
    ACTIONS(438), 1,
      anon_sym_EQ,
    ACTIONS(440), 1,
      anon_sym_DOT,
    ACTIONS(145), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(153), 2,
      sym_class,
      sym_id,
    STATE(88), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(10), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3491] = 2,
    ACTIONS(209), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(207), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3514] = 11,
    ACTIONS(404), 1,
      anon_sym_PIPE,
    ACTIONS(408), 1,
      anon_sym_elseif,
    ACTIONS(410), 1,
      anon_sym_else,
    ACTIONS(418), 1,
      sym_tag_name,
    ACTIONS(430), 1,
      anon_sym_BANG_EQ,
    ACTIONS(432), 1,
      anon_sym_EQ,
    ACTIONS(434), 1,
      anon_sym_DOT,
    ACTIONS(406), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(420), 2,
      sym_class,
      sym_id,
    STATE(316), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(147), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3555] = 2,
    ACTIONS(209), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(207), 11,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3578] = 2,
    ACTIONS(352), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(350), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3600] = 2,
    ACTIONS(335), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(333), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3622] = 2,
    ACTIONS(181), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(179), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3644] = 2,
    ACTIONS(282), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(280), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3666] = 2,
    ACTIONS(327), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(325), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3688] = 2,
    ACTIONS(360), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(358), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3710] = 2,
    ACTIONS(456), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(454), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3732] = 2,
    ACTIONS(297), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(295), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3754] = 2,
    ACTIONS(215), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(213), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3776] = 2,
    ACTIONS(215), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(213), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3798] = 2,
    ACTIONS(286), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(284), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3820] = 2,
    ACTIONS(233), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(231), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3842] = 2,
    ACTIONS(460), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(458), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3864] = 2,
    ACTIONS(345), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(343), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3886] = 2,
    ACTIONS(309), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(307), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3908] = 2,
    ACTIONS(464), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(462), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3930] = 2,
    ACTIONS(468), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(466), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3952] = 2,
    ACTIONS(209), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(207), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3974] = 2,
    ACTIONS(472), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(470), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3996] = 2,
    ACTIONS(209), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(207), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4018] = 2,
    ACTIONS(175), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(173), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4040] = 2,
    ACTIONS(181), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(179), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4062] = 2,
    ACTIONS(274), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(272), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4084] = 2,
    ACTIONS(278), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(276), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4106] = 2,
    ACTIONS(175), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(173), 10,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4128] = 8,
    ACTIONS(474), 1,
      anon_sym_PIPE,
    ACTIONS(480), 1,
      anon_sym_elseif,
    ACTIONS(483), 1,
      anon_sym_else,
    ACTIONS(486), 1,
      sym_tag_name,
    ACTIONS(97), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(477), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(489), 2,
      sym_class,
      sym_id,
    STATE(146), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4160] = 9,
    ACTIONS(79), 1,
      sym__newline,
    ACTIONS(404), 1,
      anon_sym_PIPE,
    ACTIONS(408), 1,
      anon_sym_elseif,
    ACTIONS(410), 1,
      anon_sym_else,
    ACTIONS(418), 1,
      sym_tag_name,
    ACTIONS(492), 1,
      sym__dedent,
    ACTIONS(406), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(420), 2,
      sym_class,
      sym_id,
    STATE(146), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4194] = 9,
    ACTIONS(79), 1,
      sym__newline,
    ACTIONS(404), 1,
      anon_sym_PIPE,
    ACTIONS(408), 1,
      anon_sym_elseif,
    ACTIONS(410), 1,
      anon_sym_else,
    ACTIONS(418), 1,
      sym_tag_name,
    ACTIONS(494), 1,
      sym__dedent,
    ACTIONS(406), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(420), 2,
      sym_class,
      sym_id,
    STATE(146), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4228] = 11,
    ACTIONS(496), 1,
      anon_sym_COLON,
    ACTIONS(498), 1,
      anon_sym_BANG_EQ,
    ACTIONS(500), 1,
      anon_sym_EQ,
    ACTIONS(502), 1,
      anon_sym_,
    ACTIONS(504), 1,
      anon_sym_DOT,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      sym__newline,
    STATE(157), 1,
      aux_sym_tag_repeat1,
    STATE(199), 1,
      sym_attributes,
    ACTIONS(508), 2,
      sym_class,
      sym_id,
    STATE(132), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4265] = 11,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(512), 1,
      anon_sym_COLON,
    ACTIONS(514), 1,
      anon_sym_BANG_EQ,
    ACTIONS(516), 1,
      anon_sym_EQ,
    ACTIONS(518), 1,
      anon_sym_,
    ACTIONS(520), 1,
      anon_sym_DOT,
    ACTIONS(524), 1,
      sym__newline,
    STATE(151), 1,
      aux_sym_tag_repeat1,
    STATE(202), 1,
      sym_attributes,
    ACTIONS(522), 2,
      sym_class,
      sym_id,
    STATE(195), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4302] = 11,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_BANG_EQ,
    ACTIONS(516), 1,
      anon_sym_EQ,
    ACTIONS(520), 1,
      anon_sym_DOT,
    ACTIONS(526), 1,
      anon_sym_COLON,
    ACTIONS(528), 1,
      anon_sym_,
    ACTIONS(532), 1,
      sym__newline,
    STATE(187), 1,
      aux_sym_tag_repeat1,
    STATE(201), 1,
      sym_attributes,
    ACTIONS(530), 2,
      sym_class,
      sym_id,
    STATE(194), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4339] = 11,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(534), 1,
      anon_sym_COLON,
    ACTIONS(536), 1,
      anon_sym_BANG_EQ,
    ACTIONS(538), 1,
      anon_sym_EQ,
    ACTIONS(540), 1,
      anon_sym_,
    ACTIONS(542), 1,
      anon_sym_DOT,
    ACTIONS(546), 1,
      sym__newline,
    STATE(153), 1,
      aux_sym_tag_repeat1,
    STATE(200), 1,
      sym_attributes,
    ACTIONS(544), 2,
      sym_class,
      sym_id,
    STATE(110), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4376] = 11,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(536), 1,
      anon_sym_BANG_EQ,
    ACTIONS(538), 1,
      anon_sym_EQ,
    ACTIONS(542), 1,
      anon_sym_DOT,
    ACTIONS(548), 1,
      anon_sym_COLON,
    ACTIONS(550), 1,
      anon_sym_,
    ACTIONS(552), 1,
      sym__newline,
    STATE(187), 1,
      aux_sym_tag_repeat1,
    STATE(197), 1,
      sym_attributes,
    ACTIONS(530), 2,
      sym_class,
      sym_id,
    STATE(120), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4413] = 11,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(554), 1,
      anon_sym_COLON,
    ACTIONS(556), 1,
      anon_sym_BANG_EQ,
    ACTIONS(558), 1,
      anon_sym_EQ,
    ACTIONS(560), 1,
      anon_sym_,
    ACTIONS(562), 1,
      anon_sym_DOT,
    ACTIONS(564), 1,
      sym__newline,
    STATE(187), 1,
      aux_sym_tag_repeat1,
    STATE(205), 1,
      sym_attributes,
    ACTIONS(530), 2,
      sym_class,
      sym_id,
    STATE(30), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4450] = 11,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(556), 1,
      anon_sym_BANG_EQ,
    ACTIONS(558), 1,
      anon_sym_EQ,
    ACTIONS(562), 1,
      anon_sym_DOT,
    ACTIONS(566), 1,
      anon_sym_COLON,
    ACTIONS(568), 1,
      anon_sym_,
    ACTIONS(572), 1,
      sym__newline,
    STATE(154), 1,
      aux_sym_tag_repeat1,
    STATE(206), 1,
      sym_attributes,
    ACTIONS(570), 2,
      sym_class,
      sym_id,
    STATE(34), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4487] = 11,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(574), 1,
      anon_sym_COLON,
    ACTIONS(576), 1,
      anon_sym_BANG_EQ,
    ACTIONS(578), 1,
      anon_sym_EQ,
    ACTIONS(580), 1,
      anon_sym_,
    ACTIONS(582), 1,
      anon_sym_DOT,
    ACTIONS(586), 1,
      sym__newline,
    STATE(158), 1,
      aux_sym_tag_repeat1,
    STATE(198), 1,
      sym_attributes,
    ACTIONS(584), 2,
      sym_class,
      sym_id,
    STATE(300), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4524] = 11,
    ACTIONS(498), 1,
      anon_sym_BANG_EQ,
    ACTIONS(500), 1,
      anon_sym_EQ,
    ACTIONS(504), 1,
      anon_sym_DOT,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(588), 1,
      anon_sym_COLON,
    ACTIONS(590), 1,
      anon_sym_,
    ACTIONS(592), 1,
      sym__newline,
    STATE(187), 1,
      aux_sym_tag_repeat1,
    STATE(204), 1,
      sym_attributes,
    ACTIONS(530), 2,
      sym_class,
      sym_id,
    STATE(138), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4561] = 11,
    ACTIONS(506), 1,
      anon_sym_LPAREN,
    ACTIONS(576), 1,
      anon_sym_BANG_EQ,
    ACTIONS(578), 1,
      anon_sym_EQ,
    ACTIONS(582), 1,
      anon_sym_DOT,
    ACTIONS(594), 1,
      anon_sym_COLON,
    ACTIONS(596), 1,
      anon_sym_,
    ACTIONS(598), 1,
      sym__newline,
    STATE(187), 1,
      aux_sym_tag_repeat1,
    STATE(203), 1,
      sym_attributes,
    ACTIONS(530), 2,
      sym_class,
      sym_id,
    STATE(309), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [4598] = 7,
    ACTIONS(404), 1,
      anon_sym_PIPE,
    ACTIONS(408), 1,
      anon_sym_elseif,
    ACTIONS(410), 1,
      anon_sym_else,
    ACTIONS(418), 1,
      sym_tag_name,
    ACTIONS(406), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(420), 2,
      sym_class,
      sym_id,
    STATE(147), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4626] = 7,
    ACTIONS(404), 1,
      anon_sym_PIPE,
    ACTIONS(408), 1,
      anon_sym_elseif,
    ACTIONS(410), 1,
      anon_sym_else,
    ACTIONS(418), 1,
      sym_tag_name,
    ACTIONS(406), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(420), 2,
      sym_class,
      sym_id,
    STATE(148), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4654] = 7,
    ACTIONS(83), 1,
      anon_sym_PIPE,
    ACTIONS(87), 1,
      anon_sym_elseif,
    ACTIONS(89), 1,
      anon_sym_else,
    ACTIONS(91), 1,
      sym_tag_name,
    ACTIONS(85), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(93), 2,
      sym_class,
      sym_id,
    STATE(4), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4682] = 7,
    ACTIONS(143), 1,
      anon_sym_PIPE,
    ACTIONS(147), 1,
      anon_sym_elseif,
    ACTIONS(149), 1,
      anon_sym_else,
    ACTIONS(151), 1,
      sym_tag_name,
    ACTIONS(145), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(153), 2,
      sym_class,
      sym_id,
    STATE(8), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4710] = 7,
    ACTIONS(143), 1,
      anon_sym_PIPE,
    ACTIONS(147), 1,
      anon_sym_elseif,
    ACTIONS(149), 1,
      anon_sym_else,
    ACTIONS(151), 1,
      sym_tag_name,
    ACTIONS(145), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(153), 2,
      sym_class,
      sym_id,
    STATE(10), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4738] = 4,
    ACTIONS(600), 1,
      sym__indent,
    STATE(178), 1,
      sym_children,
    ACTIONS(215), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(213), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [4759] = 4,
    ACTIONS(602), 1,
      sym__indent,
    STATE(180), 1,
      sym_children,
    ACTIONS(175), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(173), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [4780] = 6,
    ACTIONS(604), 1,
      anon_sym_EQ,
    ACTIONS(606), 1,
      anon_sym_,
    ACTIONS(608), 1,
      anon_sym_DOT,
    STATE(285), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(610), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(373), 6,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
  [4805] = 4,
    ACTIONS(600), 1,
      sym__indent,
    STATE(180), 1,
      sym_children,
    ACTIONS(175), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(173), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [4826] = 3,
    STATE(171), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(219), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(217), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [4845] = 6,
    ACTIONS(604), 1,
      anon_sym_EQ,
    ACTIONS(608), 1,
      anon_sym_DOT,
    ACTIONS(612), 1,
      anon_sym_,
    STATE(166), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(614), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(369), 6,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
  [4870] = 4,
    ACTIONS(616), 1,
      sym__indent,
    STATE(191), 1,
      sym_children,
    ACTIONS(209), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(207), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [4891] = 5,
    ACTIONS(618), 1,
      sym_tag_name,
    ACTIONS(621), 2,
      sym_class,
      sym_id,
    STATE(171), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(223), 3,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
    ACTIONS(221), 4,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
  [4914] = 4,
    ACTIONS(624), 1,
      sym__indent,
    STATE(196), 1,
      sym_children,
    ACTIONS(233), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(231), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [4935] = 4,
    ACTIONS(600), 1,
      sym__indent,
    STATE(179), 1,
      sym_children,
    ACTIONS(181), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(179), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [4956] = 8,
    ACTIONS(626), 1,
      anon_sym_RPAREN,
    ACTIONS(628), 1,
      aux_sym__attribute_token1,
    STATE(169), 1,
      sym_attribute_name,
    STATE(177), 1,
      aux_sym_attributes_repeat1,
    STATE(334), 1,
      sym_angular_attribute_name,
    STATE(362), 1,
      sym_attribute,
    STATE(376), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(630), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [4984] = 8,
    ACTIONS(632), 1,
      anon_sym_RPAREN,
    ACTIONS(634), 1,
      aux_sym__attribute_token1,
    STATE(169), 1,
      sym_attribute_name,
    STATE(175), 1,
      aux_sym_attributes_repeat1,
    STATE(334), 1,
      sym_angular_attribute_name,
    STATE(380), 1,
      sym_attribute,
    STATE(376), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(637), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [5012] = 3,
    ACTIONS(640), 1,
      sym__indent,
    ACTIONS(260), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(258), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5030] = 8,
    ACTIONS(628), 1,
      aux_sym__attribute_token1,
    ACTIONS(642), 1,
      anon_sym_RPAREN,
    STATE(169), 1,
      sym_attribute_name,
    STATE(175), 1,
      aux_sym_attributes_repeat1,
    STATE(334), 1,
      sym_angular_attribute_name,
    STATE(365), 1,
      sym_attribute,
    STATE(376), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(630), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [5058] = 2,
    ACTIONS(327), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(325), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5073] = 2,
    ACTIONS(215), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(213), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5088] = 2,
    ACTIONS(181), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(179), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5103] = 2,
    ACTIONS(278), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(276), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5118] = 2,
    ACTIONS(282), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(280), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5133] = 2,
    ACTIONS(181), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(179), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5148] = 2,
    ACTIONS(360), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(358), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5163] = 2,
    ACTIONS(215), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(213), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5178] = 2,
    ACTIONS(286), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(284), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5193] = 4,
    STATE(187), 1,
      aux_sym_tag_repeat1,
    ACTIONS(646), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(648), 2,
      sym_class,
      sym_id,
    ACTIONS(644), 5,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LPAREN,
  [5212] = 2,
    ACTIONS(345), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(343), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5227] = 2,
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
  [5242] = 2,
    ACTIONS(274), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(272), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5257] = 2,
    ACTIONS(175), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(173), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5272] = 2,
    ACTIONS(175), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(173), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5287] = 2,
    ACTIONS(372), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(370), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5302] = 2,
    ACTIONS(209), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(207), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5317] = 2,
    ACTIONS(233), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(231), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5332] = 2,
    ACTIONS(209), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(207), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5347] = 7,
    ACTIONS(536), 1,
      anon_sym_BANG_EQ,
    ACTIONS(538), 1,
      anon_sym_EQ,
    ACTIONS(542), 1,
      anon_sym_DOT,
    ACTIONS(651), 1,
      anon_sym_COLON,
    ACTIONS(653), 1,
      anon_sym_,
    ACTIONS(655), 1,
      sym__newline,
    STATE(116), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5371] = 7,
    ACTIONS(576), 1,
      anon_sym_BANG_EQ,
    ACTIONS(578), 1,
      anon_sym_EQ,
    ACTIONS(582), 1,
      anon_sym_DOT,
    ACTIONS(594), 1,
      anon_sym_COLON,
    ACTIONS(596), 1,
      anon_sym_,
    ACTIONS(598), 1,
      sym__newline,
    STATE(309), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5395] = 7,
    ACTIONS(498), 1,
      anon_sym_BANG_EQ,
    ACTIONS(500), 1,
      anon_sym_EQ,
    ACTIONS(504), 1,
      anon_sym_DOT,
    ACTIONS(588), 1,
      anon_sym_COLON,
    ACTIONS(590), 1,
      anon_sym_,
    ACTIONS(592), 1,
      sym__newline,
    STATE(138), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5419] = 7,
    ACTIONS(536), 1,
      anon_sym_BANG_EQ,
    ACTIONS(538), 1,
      anon_sym_EQ,
    ACTIONS(542), 1,
      anon_sym_DOT,
    ACTIONS(548), 1,
      anon_sym_COLON,
    ACTIONS(550), 1,
      anon_sym_,
    ACTIONS(552), 1,
      sym__newline,
    STATE(120), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5443] = 7,
    ACTIONS(514), 1,
      anon_sym_BANG_EQ,
    ACTIONS(516), 1,
      anon_sym_EQ,
    ACTIONS(520), 1,
      anon_sym_DOT,
    ACTIONS(657), 1,
      anon_sym_COLON,
    ACTIONS(659), 1,
      anon_sym_,
    ACTIONS(661), 1,
      sym__newline,
    STATE(192), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5467] = 7,
    ACTIONS(514), 1,
      anon_sym_BANG_EQ,
    ACTIONS(516), 1,
      anon_sym_EQ,
    ACTIONS(520), 1,
      anon_sym_DOT,
    ACTIONS(526), 1,
      anon_sym_COLON,
    ACTIONS(528), 1,
      anon_sym_,
    ACTIONS(532), 1,
      sym__newline,
    STATE(194), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5491] = 7,
    ACTIONS(576), 1,
      anon_sym_BANG_EQ,
    ACTIONS(578), 1,
      anon_sym_EQ,
    ACTIONS(582), 1,
      anon_sym_DOT,
    ACTIONS(663), 1,
      anon_sym_COLON,
    ACTIONS(665), 1,
      anon_sym_,
    ACTIONS(667), 1,
      sym__newline,
    STATE(313), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5515] = 7,
    ACTIONS(498), 1,
      anon_sym_BANG_EQ,
    ACTIONS(500), 1,
      anon_sym_EQ,
    ACTIONS(504), 1,
      anon_sym_DOT,
    ACTIONS(669), 1,
      anon_sym_COLON,
    ACTIONS(671), 1,
      anon_sym_,
    ACTIONS(673), 1,
      sym__newline,
    STATE(145), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5539] = 7,
    ACTIONS(556), 1,
      anon_sym_BANG_EQ,
    ACTIONS(558), 1,
      anon_sym_EQ,
    ACTIONS(562), 1,
      anon_sym_DOT,
    ACTIONS(675), 1,
      anon_sym_COLON,
    ACTIONS(677), 1,
      anon_sym_,
    ACTIONS(679), 1,
      sym__newline,
    STATE(56), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5563] = 7,
    ACTIONS(554), 1,
      anon_sym_COLON,
    ACTIONS(556), 1,
      anon_sym_BANG_EQ,
    ACTIONS(558), 1,
      anon_sym_EQ,
    ACTIONS(560), 1,
      anon_sym_,
    ACTIONS(562), 1,
      anon_sym_DOT,
    ACTIONS(564), 1,
      sym__newline,
    STATE(30), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5587] = 7,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(687), 1,
      sym__dedent,
    STATE(208), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(227), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5610] = 7,
    ACTIONS(689), 1,
      aux_sym_content_token1,
    ACTIONS(692), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(695), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(698), 1,
      sym__dedent,
    STATE(208), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(227), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5633] = 7,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(700), 1,
      sym__dedent,
    STATE(208), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(227), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5656] = 7,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(702), 1,
      sym__dedent,
    STATE(208), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(227), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5679] = 7,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(704), 1,
      sym__dedent,
    STATE(208), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(227), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5702] = 7,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(706), 1,
      sym__dedent,
    STATE(208), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(227), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5725] = 7,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(708), 1,
      sym__dedent,
    STATE(208), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(227), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5748] = 7,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(710), 1,
      sym__dedent,
    STATE(208), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(227), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5771] = 8,
    ACTIONS(712), 1,
      aux_sym__ternary_attribute_value_token1,
    ACTIONS(714), 1,
      aux_sym__variable_attribute_value_token1,
    ACTIONS(716), 1,
      aux_sym__object_attribute_value_token1,
    ACTIONS(718), 1,
      aux_sym__template_attribute_value_token1,
    ACTIONS(720), 1,
      aux_sym__array_attribute_value_token1,
    ACTIONS(722), 1,
      anon_sym_SQUOTE,
    ACTIONS(724), 1,
      anon_sym_DQUOTE,
    STATE(372), 1,
      sym_quoted_attribute_value,
  [5796] = 7,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(726), 1,
      sym__dedent,
    STATE(208), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(227), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5819] = 7,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(728), 1,
      sym__dedent,
    STATE(208), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(227), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5842] = 7,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(730), 1,
      sym__dedent,
    STATE(208), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(227), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5865] = 6,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(732), 1,
      sym__newline,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(221), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5885] = 6,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(734), 1,
      sym__newline,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(254), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5905] = 6,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(736), 1,
      sym__newline,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(254), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5925] = 4,
    ACTIONS(740), 1,
      sym__newline,
    ACTIONS(742), 1,
      sym__dedent,
    STATE(252), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(738), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5941] = 6,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(744), 1,
      sym__newline,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(254), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [5961] = 4,
    ACTIONS(740), 1,
      sym__newline,
    ACTIONS(746), 1,
      sym__dedent,
    STATE(252), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(738), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [5977] = 3,
    ACTIONS(748), 1,
      sym__indent,
    STATE(307), 1,
      sym_children,
    ACTIONS(231), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [5991] = 6,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(750), 1,
      sym__newline,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(254), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6011] = 6,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(752), 1,
      sym__newline,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(254), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6031] = 6,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(212), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(227), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6051] = 6,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(754), 1,
      sym__newline,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(254), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6071] = 6,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(756), 1,
      sym__newline,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(254), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6091] = 6,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(758), 1,
      sym__newline,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(230), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6111] = 3,
    ACTIONS(760), 1,
      sym__indent,
    STATE(314), 1,
      sym_children,
    ACTIONS(207), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [6125] = 6,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(762), 1,
      sym__newline,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(254), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6145] = 6,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(764), 1,
      sym__newline,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(254), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6165] = 6,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(766), 1,
      sym__newline,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(254), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6185] = 3,
    ACTIONS(768), 1,
      sym__indent,
    STATE(293), 1,
      sym_children,
    ACTIONS(173), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [6199] = 6,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(770), 1,
      sym__newline,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(254), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6219] = 3,
    ACTIONS(772), 1,
      sym__indent,
    STATE(293), 1,
      sym_children,
    ACTIONS(173), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [6233] = 4,
    ACTIONS(740), 1,
      sym__newline,
    ACTIONS(774), 1,
      sym__dedent,
    STATE(252), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(738), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [6249] = 6,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(776), 1,
      sym__newline,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(254), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6269] = 4,
    ACTIONS(740), 1,
      sym__newline,
    ACTIONS(778), 1,
      sym__dedent,
    STATE(252), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(738), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [6285] = 6,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(780), 1,
      sym__newline,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(261), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6305] = 3,
    ACTIONS(768), 1,
      sym__indent,
    STATE(304), 1,
      sym_children,
    ACTIONS(179), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [6319] = 6,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(782), 1,
      sym__newline,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(254), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6339] = 6,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(784), 1,
      sym__newline,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(254), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6359] = 6,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(210), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(227), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6379] = 6,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(786), 1,
      sym__newline,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(245), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6399] = 3,
    ACTIONS(768), 1,
      sym__indent,
    STATE(302), 1,
      sym_children,
    ACTIONS(213), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [6413] = 6,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(788), 1,
      sym__newline,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(254), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6433] = 6,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(790), 1,
      sym__newline,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(254), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6453] = 6,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(209), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(227), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6473] = 4,
    ACTIONS(795), 1,
      sym__newline,
    ACTIONS(798), 1,
      sym__dedent,
    STATE(252), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(792), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [6489] = 6,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(216), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(227), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6509] = 6,
    ACTIONS(800), 1,
      aux_sym_content_token1,
    ACTIONS(803), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(806), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(809), 1,
      sym__newline,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(254), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6529] = 6,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(811), 1,
      sym__newline,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(254), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6549] = 4,
    ACTIONS(740), 1,
      sym__newline,
    ACTIONS(813), 1,
      sym__dedent,
    STATE(252), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(738), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [6565] = 6,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(213), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(227), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6585] = 6,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(815), 1,
      sym__newline,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(254), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6605] = 6,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(817), 1,
      sym__newline,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(254), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6625] = 6,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(214), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(227), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6645] = 6,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(819), 1,
      sym__newline,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(254), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6665] = 6,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(211), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(227), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6685] = 6,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(207), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(227), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6705] = 6,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(218), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(227), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6725] = 6,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(217), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(227), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6745] = 2,
    ACTIONS(823), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(821), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [6756] = 5,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(233), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6773] = 4,
    ACTIONS(827), 1,
      anon_sym_POUND,
    ACTIONS(829), 1,
      anon_sym_LBRACE,
    ACTIONS(825), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(831), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [6788] = 5,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(223), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6805] = 5,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(237), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6822] = 3,
    ACTIONS(833), 1,
      sym__newline,
    STATE(224), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(738), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [6835] = 5,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(226), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6852] = 5,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(229), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6869] = 3,
    ACTIONS(835), 1,
      sym__newline,
    STATE(241), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(738), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [6882] = 5,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(234), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6899] = 5,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(249), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6916] = 3,
    ACTIONS(837), 1,
      sym__newline,
    STATE(239), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(738), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [6929] = 5,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(240), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6946] = 5,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(220), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6963] = 2,
    ACTIONS(839), 1,
      sym__indent,
    ACTIONS(258), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [6974] = 5,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(244), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6991] = 5,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(258), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7008] = 2,
    ACTIONS(843), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(841), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [7019] = 5,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(259), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7036] = 4,
    ACTIONS(847), 1,
      anon_sym_,
    ACTIONS(849), 1,
      anon_sym_DOT,
    STATE(285), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(845), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7051] = 2,
    ACTIONS(854), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(852), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [7062] = 3,
    ACTIONS(856), 1,
      sym__newline,
    STATE(222), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(738), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7075] = 5,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(250), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7092] = 5,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(255), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7109] = 3,
    ACTIONS(858), 1,
      sym__newline,
    STATE(256), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(738), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7122] = 5,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(683), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(685), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(310), 1,
      aux_sym_content_repeat1,
    STATE(235), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7139] = 1,
    ACTIONS(343), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7147] = 1,
    ACTIONS(179), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7155] = 2,
    STATE(21), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(93), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7165] = 4,
    ACTIONS(860), 1,
      aux_sym_content_token1,
    ACTIONS(865), 1,
      sym__newline,
    STATE(295), 1,
      aux_sym_content_repeat1,
    ACTIONS(863), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [7179] = 3,
    ACTIONS(867), 1,
      anon_sym_LBRACE,
    ACTIONS(863), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(865), 2,
      sym__newline,
      aux_sym_content_token1,
  [7191] = 1,
    ACTIONS(280), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7199] = 1,
    ACTIONS(276), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7207] = 1,
    ACTIONS(333), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7215] = 1,
    ACTIONS(231), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7223] = 2,
    STATE(81), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(29), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7233] = 1,
    ACTIONS(325), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7241] = 1,
    ACTIONS(213), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7249] = 1,
    ACTIONS(213), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7257] = 2,
    STATE(168), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(420), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7267] = 1,
    ACTIONS(632), 5,
      anon_sym_RPAREN,
      aux_sym__attribute_token1,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [7275] = 1,
    ACTIONS(207), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7283] = 2,
    STATE(52), 2,
      sym_tag,
      aux_sym_conditional_repeat1,
    ACTIONS(153), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7293] = 1,
    ACTIONS(207), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7301] = 4,
    ACTIONS(681), 1,
      aux_sym_content_token1,
    ACTIONS(871), 1,
      sym__newline,
    STATE(295), 1,
      aux_sym_content_repeat1,
    ACTIONS(869), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [7315] = 2,
    ACTIONS(875), 1,
      anon_sym_,
    ACTIONS(873), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7325] = 1,
    ACTIONS(370), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7333] = 1,
    ACTIONS(173), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7341] = 1,
    ACTIONS(173), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7349] = 2,
    ACTIONS(879), 1,
      anon_sym_,
    ACTIONS(877), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7359] = 1,
    ACTIONS(179), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7367] = 4,
    ACTIONS(881), 1,
      anon_sym_when,
    ACTIONS(883), 1,
      anon_sym_default,
    STATE(9), 1,
      sym__when_keyword,
    STATE(17), 2,
      sym_when,
      aux_sym_case_repeat1,
  [7381] = 1,
    ACTIONS(358), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7389] = 2,
    STATE(145), 1,
      sym_tag,
    ACTIONS(29), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7398] = 2,
    STATE(66), 1,
      sym_tag,
    ACTIONS(93), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7407] = 2,
    STATE(138), 1,
      sym_tag,
    ACTIONS(29), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7416] = 2,
    STATE(116), 1,
      sym_tag,
    ACTIONS(153), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7425] = 2,
    STATE(100), 1,
      sym_tag,
    ACTIONS(153), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7434] = 2,
    STATE(56), 1,
      sym_tag,
    ACTIONS(93), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7443] = 2,
    STATE(142), 1,
      sym_tag,
    ACTIONS(29), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7452] = 4,
    ACTIONS(885), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(887), 1,
      sym__newline,
    STATE(47), 1,
      sym__single_line_buf_code,
    STATE(398), 1,
      sym__un_delimited_javascript,
  [7465] = 2,
    STATE(120), 1,
      sym_tag,
    ACTIONS(153), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7474] = 2,
    ACTIONS(863), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(865), 2,
      sym__newline,
      aux_sym_content_token1,
  [7483] = 2,
    STATE(194), 1,
      sym_tag,
    ACTIONS(420), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7492] = 2,
    STATE(309), 1,
      sym_tag,
    ACTIONS(738), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7501] = 2,
    ACTIONS(891), 1,
      anon_sym_,
    ACTIONS(889), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7510] = 2,
    STATE(313), 1,
      sym_tag,
    ACTIONS(738), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7519] = 2,
    ACTIONS(893), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(895), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [7528] = 3,
    ACTIONS(897), 1,
      anon_sym_EQ,
    ACTIONS(899), 1,
      anon_sym_,
    ACTIONS(901), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7539] = 2,
    STATE(316), 1,
      sym_tag,
    ACTIONS(738), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7548] = 2,
    ACTIONS(698), 2,
      sym__dedent,
      aux_sym_content_token1,
    ACTIONS(903), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [7557] = 4,
    ACTIONS(905), 1,
      aux_sym_script_block_token1,
    ACTIONS(908), 1,
      sym__newline,
    ACTIONS(911), 1,
      sym__dedent,
    STATE(337), 1,
      aux_sym_script_block_repeat1,
  [7570] = 2,
    STATE(192), 1,
      sym_tag,
    ACTIONS(420), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7579] = 4,
    ACTIONS(913), 1,
      aux_sym_script_block_token1,
    ACTIONS(915), 1,
      sym__newline,
    ACTIONS(917), 1,
      sym__dedent,
    STATE(337), 1,
      aux_sym_script_block_repeat1,
  [7592] = 4,
    ACTIONS(885), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(919), 1,
      sym__newline,
    STATE(85), 1,
      sym__single_line_buf_code,
    STATE(391), 1,
      sym__un_delimited_javascript,
  [7605] = 2,
    STATE(183), 1,
      sym_tag,
    ACTIONS(420), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7614] = 2,
    STATE(30), 1,
      sym_tag,
    ACTIONS(93), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7623] = 2,
    ACTIONS(921), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(923), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [7632] = 3,
    ACTIONS(885), 1,
      sym__un_delimited_javascript_line,
    STATE(298), 1,
      sym__single_line_buf_code,
    STATE(397), 1,
      sym__un_delimited_javascript,
  [7642] = 3,
    ACTIONS(885), 1,
      sym__un_delimited_javascript_line,
    STATE(96), 1,
      sym__single_line_buf_code,
    STATE(391), 1,
      sym__un_delimited_javascript,
  [7652] = 1,
    ACTIONS(925), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7658] = 2,
    ACTIONS(927), 1,
      anon_sym_,
    ACTIONS(929), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7666] = 1,
    ACTIONS(911), 3,
      sym__newline,
      sym__dedent,
      aux_sym_script_block_token1,
  [7672] = 1,
    ACTIONS(931), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [7678] = 2,
    ACTIONS(933), 1,
      anon_sym_,
    ACTIONS(935), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7686] = 3,
    ACTIONS(885), 1,
      sym__un_delimited_javascript_line,
    STATE(144), 1,
      sym__single_line_buf_code,
    STATE(421), 1,
      sym__un_delimited_javascript,
  [7696] = 3,
    ACTIONS(885), 1,
      sym__un_delimited_javascript_line,
    STATE(36), 1,
      sym__single_line_buf_code,
    STATE(398), 1,
      sym__un_delimited_javascript,
  [7706] = 3,
    ACTIONS(885), 1,
      sym__un_delimited_javascript_line,
    STATE(35), 1,
      sym__single_line_buf_code,
    STATE(398), 1,
      sym__un_delimited_javascript,
  [7716] = 3,
    ACTIONS(885), 1,
      sym__un_delimited_javascript_line,
    STATE(124), 1,
      sym__single_line_buf_code,
    STATE(421), 1,
      sym__un_delimited_javascript,
  [7726] = 2,
    ACTIONS(937), 1,
      anon_sym_,
    ACTIONS(939), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7734] = 2,
    ACTIONS(941), 1,
      anon_sym_,
    ACTIONS(943), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7742] = 2,
    ACTIONS(945), 1,
      anon_sym_,
    ACTIONS(947), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7750] = 3,
    ACTIONS(885), 1,
      sym__un_delimited_javascript_line,
    STATE(297), 1,
      sym__single_line_buf_code,
    STATE(397), 1,
      sym__un_delimited_javascript,
  [7760] = 3,
    ACTIONS(949), 1,
      sym__un_delimited_javascript_line,
    STATE(67), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(90), 1,
      sym__multi_line_buf_code,
  [7770] = 2,
    ACTIONS(951), 1,
      anon_sym_,
    ACTIONS(953), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7778] = 3,
    ACTIONS(913), 1,
      aux_sym_script_block_token1,
    ACTIONS(915), 1,
      sym__newline,
    STATE(339), 1,
      aux_sym_script_block_repeat1,
  [7788] = 3,
    ACTIONS(955), 1,
      anon_sym_,
    ACTIONS(957), 1,
      anon_sym_COMMA,
    ACTIONS(959), 1,
      anon_sym_RPAREN,
  [7798] = 2,
    ACTIONS(961), 1,
      anon_sym_,
    ACTIONS(963), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7806] = 2,
    ACTIONS(965), 1,
      anon_sym_,
    ACTIONS(967), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7814] = 3,
    ACTIONS(955), 1,
      anon_sym_,
    ACTIONS(957), 1,
      anon_sym_COMMA,
    ACTIONS(969), 1,
      anon_sym_RPAREN,
  [7824] = 1,
    ACTIONS(971), 3,
      sym__newline,
      sym__dedent,
      aux_sym_script_block_token1,
  [7830] = 2,
    ACTIONS(973), 1,
      anon_sym_,
    ACTIONS(975), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7838] = 3,
    ACTIONS(977), 1,
      sym__un_delimited_javascript_line,
    STATE(24), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(41), 1,
      sym__multi_line_buf_code,
  [7848] = 2,
    ACTIONS(606), 1,
      anon_sym_,
    ACTIONS(610), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7856] = 2,
    ACTIONS(979), 1,
      anon_sym_,
    ACTIONS(981), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7864] = 3,
    ACTIONS(983), 1,
      anon_sym_SQUOTE,
    ACTIONS(985), 1,
      anon_sym_DQUOTE,
    STATE(347), 1,
      sym_quoted_javascript,
  [7874] = 2,
    ACTIONS(987), 1,
      anon_sym_,
    ACTIONS(989), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7882] = 2,
    ACTIONS(991), 1,
      anon_sym_,
    ACTIONS(993), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7890] = 3,
    ACTIONS(885), 1,
      sym__un_delimited_javascript_line,
    STATE(182), 1,
      sym__single_line_buf_code,
    STATE(408), 1,
      sym__un_delimited_javascript,
  [7900] = 3,
    ACTIONS(885), 1,
      sym__un_delimited_javascript_line,
    STATE(181), 1,
      sym__single_line_buf_code,
    STATE(408), 1,
      sym__un_delimited_javascript,
  [7910] = 2,
    ACTIONS(995), 1,
      anon_sym_,
    ACTIONS(997), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7918] = 3,
    ACTIONS(885), 1,
      sym__un_delimited_javascript_line,
    STATE(105), 1,
      sym__single_line_buf_code,
    STATE(391), 1,
      sym__un_delimited_javascript,
  [7928] = 2,
    ACTIONS(999), 1,
      sym__un_delimited_javascript_line,
    STATE(308), 1,
      sym__un_delimited_javascript,
  [7935] = 2,
    ACTIONS(1001), 1,
      anon_sym_SQUOTE,
    ACTIONS(1003), 1,
      aux_sym_quoted_javascript_token1,
  [7942] = 2,
    ACTIONS(955), 1,
      anon_sym_,
    ACTIONS(957), 1,
      anon_sym_COMMA,
  [7949] = 2,
    ACTIONS(1005), 1,
      anon_sym_DQUOTE,
    ACTIONS(1007), 1,
      aux_sym_quoted_javascript_token2,
  [7956] = 2,
    ACTIONS(1009), 1,
      sym__comment_content,
    STATE(61), 1,
      aux_sym_comment_repeat1,
  [7963] = 2,
    ACTIONS(1009), 1,
      sym__comment_content,
    STATE(65), 1,
      aux_sym_comment_repeat1,
  [7970] = 2,
    ACTIONS(999), 1,
      sym__un_delimited_javascript_line,
    STATE(294), 1,
      sym__un_delimited_javascript,
  [7977] = 2,
    ACTIONS(1011), 1,
      sym__comment_content,
    ACTIONS(1013), 1,
      sym__newline,
  [7984] = 2,
    ACTIONS(1005), 1,
      anon_sym_SQUOTE,
    ACTIONS(1015), 1,
      aux_sym_quoted_javascript_token1,
  [7991] = 2,
    ACTIONS(999), 1,
      sym__un_delimited_javascript_line,
    STATE(305), 1,
      sym__un_delimited_javascript,
  [7998] = 2,
    ACTIONS(999), 1,
      sym__un_delimited_javascript_line,
    STATE(301), 1,
      sym__un_delimited_javascript,
  [8005] = 2,
    ACTIONS(1001), 1,
      anon_sym_DQUOTE,
    ACTIONS(1017), 1,
      aux_sym_quoted_javascript_token2,
  [8012] = 1,
    ACTIONS(1019), 1,
      sym__newline,
  [8016] = 1,
    ACTIONS(1021), 1,
      sym__newline,
  [8020] = 1,
    ACTIONS(1023), 1,
      anon_sym_DQUOTE,
  [8024] = 1,
    ACTIONS(1025), 1,
      sym__indent,
  [8028] = 1,
    ACTIONS(1027), 1,
      anon_sym_RBRACE,
  [8032] = 1,
    ACTIONS(1029), 1,
      sym__newline,
  [8036] = 1,
    ACTIONS(1031), 1,
      aux_sym_unbuffered_code_token1,
  [8040] = 1,
    ACTIONS(1033), 1,
      sym__newline,
  [8044] = 1,
    ACTIONS(1035), 1,
      sym__newline,
  [8048] = 1,
    ACTIONS(1037), 1,
      sym__indent,
  [8052] = 1,
    ACTIONS(925), 1,
      sym__newline,
  [8056] = 1,
    ACTIONS(1039), 1,
      sym__newline,
  [8060] = 1,
    ACTIONS(1041), 1,
      sym__newline,
  [8064] = 1,
    ACTIONS(1043), 1,
      sym__un_delimited_javascript_line,
  [8068] = 1,
    ACTIONS(1045), 1,
      aux_sym__attribute_token1,
  [8072] = 1,
    ACTIONS(1047), 1,
      sym__newline,
  [8076] = 1,
    ACTIONS(1049), 1,
      anon_sym_DQUOTE,
  [8080] = 1,
    ACTIONS(1051), 1,
      aux_sym__when_keyword_token1,
  [8084] = 1,
    ACTIONS(1053), 1,
      sym__newline,
  [8088] = 1,
    ACTIONS(1049), 1,
      anon_sym_SQUOTE,
  [8092] = 1,
    ACTIONS(1055), 1,
      sym__indent,
  [8096] = 1,
    ACTIONS(1057), 1,
      aux_sym_unbuffered_code_token1,
  [8100] = 1,
    ACTIONS(1059), 1,
      sym__newline,
  [8104] = 1,
    ACTIONS(1061), 1,
      sym__newline,
  [8108] = 1,
    ACTIONS(1063), 1,
      ts_builtin_sym_end,
  [8112] = 1,
    ACTIONS(1023), 1,
      anon_sym_SQUOTE,
  [8116] = 1,
    ACTIONS(1065), 1,
      sym__delimited_javascript,
  [8120] = 1,
    ACTIONS(1067), 1,
      sym__delimited_javascript,
  [8124] = 1,
    ACTIONS(1069), 1,
      sym__indent,
  [8128] = 1,
    ACTIONS(1071), 1,
      sym__indent,
  [8132] = 1,
    ACTIONS(1073), 1,
      sym__newline,
  [8136] = 1,
    ACTIONS(1075), 1,
      sym__newline,
  [8140] = 1,
    ACTIONS(1077), 1,
      sym__indent,
  [8144] = 1,
    ACTIONS(1027), 1,
      anon_sym_RBRACE_RBRACE,
  [8148] = 1,
    ACTIONS(1079), 1,
      sym__newline,
  [8152] = 1,
    ACTIONS(1081), 1,
      sym__newline,
  [8156] = 1,
    ACTIONS(1083), 1,
      sym__indent,
  [8160] = 1,
    ACTIONS(1085), 1,
      sym__indent,
  [8164] = 1,
    ACTIONS(1087), 1,
      sym__indent,
  [8168] = 1,
    ACTIONS(1089), 1,
      sym__indent,
  [8172] = 1,
    ACTIONS(1091), 1,
      sym__indent,
  [8176] = 1,
    ACTIONS(1093), 1,
      sym__indent,
  [8180] = 1,
    ACTIONS(1095), 1,
      sym__indent,
  [8184] = 1,
    ACTIONS(1097), 1,
      sym__indent,
  [8188] = 1,
    ACTIONS(1099), 1,
      sym__newline,
  [8192] = 1,
    ACTIONS(1101), 1,
      sym__newline,
  [8196] = 1,
    ACTIONS(1103), 1,
      sym__newline,
  [8200] = 1,
    ACTIONS(1105), 1,
      sym__newline,
  [8204] = 1,
    ACTIONS(1107), 1,
      sym__newline,
  [8208] = 1,
    ACTIONS(1109), 1,
      sym__newline,
  [8212] = 1,
    ACTIONS(1111), 1,
      sym__newline,
  [8216] = 1,
    ACTIONS(1113), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 61,
  [SMALL_STATE(4)] = 122,
  [SMALL_STATE(5)] = 168,
  [SMALL_STATE(6)] = 212,
  [SMALL_STATE(7)] = 250,
  [SMALL_STATE(8)] = 292,
  [SMALL_STATE(9)] = 336,
  [SMALL_STATE(10)] = 372,
  [SMALL_STATE(11)] = 416,
  [SMALL_STATE(12)] = 454,
  [SMALL_STATE(13)] = 485,
  [SMALL_STATE(14)] = 516,
  [SMALL_STATE(15)] = 551,
  [SMALL_STATE(16)] = 582,
  [SMALL_STATE(17)] = 615,
  [SMALL_STATE(18)] = 650,
  [SMALL_STATE(19)] = 683,
  [SMALL_STATE(20)] = 714,
  [SMALL_STATE(21)] = 745,
  [SMALL_STATE(22)] = 774,
  [SMALL_STATE(23)] = 807,
  [SMALL_STATE(24)] = 838,
  [SMALL_STATE(25)] = 869,
  [SMALL_STATE(26)] = 900,
  [SMALL_STATE(27)] = 927,
  [SMALL_STATE(28)] = 953,
  [SMALL_STATE(29)] = 981,
  [SMALL_STATE(30)] = 1011,
  [SMALL_STATE(31)] = 1036,
  [SMALL_STATE(32)] = 1061,
  [SMALL_STATE(33)] = 1086,
  [SMALL_STATE(34)] = 1111,
  [SMALL_STATE(35)] = 1136,
  [SMALL_STATE(36)] = 1161,
  [SMALL_STATE(37)] = 1186,
  [SMALL_STATE(38)] = 1211,
  [SMALL_STATE(39)] = 1240,
  [SMALL_STATE(40)] = 1265,
  [SMALL_STATE(41)] = 1294,
  [SMALL_STATE(42)] = 1321,
  [SMALL_STATE(43)] = 1350,
  [SMALL_STATE(44)] = 1375,
  [SMALL_STATE(45)] = 1404,
  [SMALL_STATE(46)] = 1433,
  [SMALL_STATE(47)] = 1464,
  [SMALL_STATE(48)] = 1491,
  [SMALL_STATE(49)] = 1516,
  [SMALL_STATE(50)] = 1545,
  [SMALL_STATE(51)] = 1570,
  [SMALL_STATE(52)] = 1595,
  [SMALL_STATE(53)] = 1622,
  [SMALL_STATE(54)] = 1651,
  [SMALL_STATE(55)] = 1676,
  [SMALL_STATE(56)] = 1701,
  [SMALL_STATE(57)] = 1726,
  [SMALL_STATE(58)] = 1753,
  [SMALL_STATE(59)] = 1778,
  [SMALL_STATE(60)] = 1803,
  [SMALL_STATE(61)] = 1832,
  [SMALL_STATE(62)] = 1863,
  [SMALL_STATE(63)] = 1888,
  [SMALL_STATE(64)] = 1915,
  [SMALL_STATE(65)] = 1940,
  [SMALL_STATE(66)] = 1971,
  [SMALL_STATE(67)] = 1996,
  [SMALL_STATE(68)] = 2025,
  [SMALL_STATE(69)] = 2050,
  [SMALL_STATE(70)] = 2078,
  [SMALL_STATE(71)] = 2102,
  [SMALL_STATE(72)] = 2130,
  [SMALL_STATE(73)] = 2154,
  [SMALL_STATE(74)] = 2182,
  [SMALL_STATE(75)] = 2206,
  [SMALL_STATE(76)] = 2234,
  [SMALL_STATE(77)] = 2264,
  [SMALL_STATE(78)] = 2290,
  [SMALL_STATE(79)] = 2318,
  [SMALL_STATE(80)] = 2346,
  [SMALL_STATE(81)] = 2370,
  [SMALL_STATE(82)] = 2396,
  [SMALL_STATE(83)] = 2424,
  [SMALL_STATE(84)] = 2447,
  [SMALL_STATE(85)] = 2488,
  [SMALL_STATE(86)] = 2513,
  [SMALL_STATE(87)] = 2538,
  [SMALL_STATE(88)] = 2579,
  [SMALL_STATE(89)] = 2602,
  [SMALL_STATE(90)] = 2625,
  [SMALL_STATE(91)] = 2650,
  [SMALL_STATE(92)] = 2691,
  [SMALL_STATE(93)] = 2714,
  [SMALL_STATE(94)] = 2755,
  [SMALL_STATE(95)] = 2778,
  [SMALL_STATE(96)] = 2801,
  [SMALL_STATE(97)] = 2824,
  [SMALL_STATE(98)] = 2865,
  [SMALL_STATE(99)] = 2888,
  [SMALL_STATE(100)] = 2929,
  [SMALL_STATE(101)] = 2952,
  [SMALL_STATE(102)] = 2975,
  [SMALL_STATE(103)] = 3016,
  [SMALL_STATE(104)] = 3057,
  [SMALL_STATE(105)] = 3080,
  [SMALL_STATE(106)] = 3103,
  [SMALL_STATE(107)] = 3126,
  [SMALL_STATE(108)] = 3167,
  [SMALL_STATE(109)] = 3208,
  [SMALL_STATE(110)] = 3249,
  [SMALL_STATE(111)] = 3272,
  [SMALL_STATE(112)] = 3297,
  [SMALL_STATE(113)] = 3338,
  [SMALL_STATE(114)] = 3361,
  [SMALL_STATE(115)] = 3386,
  [SMALL_STATE(116)] = 3427,
  [SMALL_STATE(117)] = 3450,
  [SMALL_STATE(118)] = 3491,
  [SMALL_STATE(119)] = 3514,
  [SMALL_STATE(120)] = 3555,
  [SMALL_STATE(121)] = 3578,
  [SMALL_STATE(122)] = 3600,
  [SMALL_STATE(123)] = 3622,
  [SMALL_STATE(124)] = 3644,
  [SMALL_STATE(125)] = 3666,
  [SMALL_STATE(126)] = 3688,
  [SMALL_STATE(127)] = 3710,
  [SMALL_STATE(128)] = 3732,
  [SMALL_STATE(129)] = 3754,
  [SMALL_STATE(130)] = 3776,
  [SMALL_STATE(131)] = 3798,
  [SMALL_STATE(132)] = 3820,
  [SMALL_STATE(133)] = 3842,
  [SMALL_STATE(134)] = 3864,
  [SMALL_STATE(135)] = 3886,
  [SMALL_STATE(136)] = 3908,
  [SMALL_STATE(137)] = 3930,
  [SMALL_STATE(138)] = 3952,
  [SMALL_STATE(139)] = 3974,
  [SMALL_STATE(140)] = 3996,
  [SMALL_STATE(141)] = 4018,
  [SMALL_STATE(142)] = 4040,
  [SMALL_STATE(143)] = 4062,
  [SMALL_STATE(144)] = 4084,
  [SMALL_STATE(145)] = 4106,
  [SMALL_STATE(146)] = 4128,
  [SMALL_STATE(147)] = 4160,
  [SMALL_STATE(148)] = 4194,
  [SMALL_STATE(149)] = 4228,
  [SMALL_STATE(150)] = 4265,
  [SMALL_STATE(151)] = 4302,
  [SMALL_STATE(152)] = 4339,
  [SMALL_STATE(153)] = 4376,
  [SMALL_STATE(154)] = 4413,
  [SMALL_STATE(155)] = 4450,
  [SMALL_STATE(156)] = 4487,
  [SMALL_STATE(157)] = 4524,
  [SMALL_STATE(158)] = 4561,
  [SMALL_STATE(159)] = 4598,
  [SMALL_STATE(160)] = 4626,
  [SMALL_STATE(161)] = 4654,
  [SMALL_STATE(162)] = 4682,
  [SMALL_STATE(163)] = 4710,
  [SMALL_STATE(164)] = 4738,
  [SMALL_STATE(165)] = 4759,
  [SMALL_STATE(166)] = 4780,
  [SMALL_STATE(167)] = 4805,
  [SMALL_STATE(168)] = 4826,
  [SMALL_STATE(169)] = 4845,
  [SMALL_STATE(170)] = 4870,
  [SMALL_STATE(171)] = 4891,
  [SMALL_STATE(172)] = 4914,
  [SMALL_STATE(173)] = 4935,
  [SMALL_STATE(174)] = 4956,
  [SMALL_STATE(175)] = 4984,
  [SMALL_STATE(176)] = 5012,
  [SMALL_STATE(177)] = 5030,
  [SMALL_STATE(178)] = 5058,
  [SMALL_STATE(179)] = 5073,
  [SMALL_STATE(180)] = 5088,
  [SMALL_STATE(181)] = 5103,
  [SMALL_STATE(182)] = 5118,
  [SMALL_STATE(183)] = 5133,
  [SMALL_STATE(184)] = 5148,
  [SMALL_STATE(185)] = 5163,
  [SMALL_STATE(186)] = 5178,
  [SMALL_STATE(187)] = 5193,
  [SMALL_STATE(188)] = 5212,
  [SMALL_STATE(189)] = 5227,
  [SMALL_STATE(190)] = 5242,
  [SMALL_STATE(191)] = 5257,
  [SMALL_STATE(192)] = 5272,
  [SMALL_STATE(193)] = 5287,
  [SMALL_STATE(194)] = 5302,
  [SMALL_STATE(195)] = 5317,
  [SMALL_STATE(196)] = 5332,
  [SMALL_STATE(197)] = 5347,
  [SMALL_STATE(198)] = 5371,
  [SMALL_STATE(199)] = 5395,
  [SMALL_STATE(200)] = 5419,
  [SMALL_STATE(201)] = 5443,
  [SMALL_STATE(202)] = 5467,
  [SMALL_STATE(203)] = 5491,
  [SMALL_STATE(204)] = 5515,
  [SMALL_STATE(205)] = 5539,
  [SMALL_STATE(206)] = 5563,
  [SMALL_STATE(207)] = 5587,
  [SMALL_STATE(208)] = 5610,
  [SMALL_STATE(209)] = 5633,
  [SMALL_STATE(210)] = 5656,
  [SMALL_STATE(211)] = 5679,
  [SMALL_STATE(212)] = 5702,
  [SMALL_STATE(213)] = 5725,
  [SMALL_STATE(214)] = 5748,
  [SMALL_STATE(215)] = 5771,
  [SMALL_STATE(216)] = 5796,
  [SMALL_STATE(217)] = 5819,
  [SMALL_STATE(218)] = 5842,
  [SMALL_STATE(219)] = 5865,
  [SMALL_STATE(220)] = 5885,
  [SMALL_STATE(221)] = 5905,
  [SMALL_STATE(222)] = 5925,
  [SMALL_STATE(223)] = 5941,
  [SMALL_STATE(224)] = 5961,
  [SMALL_STATE(225)] = 5977,
  [SMALL_STATE(226)] = 5991,
  [SMALL_STATE(227)] = 6011,
  [SMALL_STATE(228)] = 6031,
  [SMALL_STATE(229)] = 6051,
  [SMALL_STATE(230)] = 6071,
  [SMALL_STATE(231)] = 6091,
  [SMALL_STATE(232)] = 6111,
  [SMALL_STATE(233)] = 6125,
  [SMALL_STATE(234)] = 6145,
  [SMALL_STATE(235)] = 6165,
  [SMALL_STATE(236)] = 6185,
  [SMALL_STATE(237)] = 6199,
  [SMALL_STATE(238)] = 6219,
  [SMALL_STATE(239)] = 6233,
  [SMALL_STATE(240)] = 6249,
  [SMALL_STATE(241)] = 6269,
  [SMALL_STATE(242)] = 6285,
  [SMALL_STATE(243)] = 6305,
  [SMALL_STATE(244)] = 6319,
  [SMALL_STATE(245)] = 6339,
  [SMALL_STATE(246)] = 6359,
  [SMALL_STATE(247)] = 6379,
  [SMALL_STATE(248)] = 6399,
  [SMALL_STATE(249)] = 6413,
  [SMALL_STATE(250)] = 6433,
  [SMALL_STATE(251)] = 6453,
  [SMALL_STATE(252)] = 6473,
  [SMALL_STATE(253)] = 6489,
  [SMALL_STATE(254)] = 6509,
  [SMALL_STATE(255)] = 6529,
  [SMALL_STATE(256)] = 6549,
  [SMALL_STATE(257)] = 6565,
  [SMALL_STATE(258)] = 6585,
  [SMALL_STATE(259)] = 6605,
  [SMALL_STATE(260)] = 6625,
  [SMALL_STATE(261)] = 6645,
  [SMALL_STATE(262)] = 6665,
  [SMALL_STATE(263)] = 6685,
  [SMALL_STATE(264)] = 6705,
  [SMALL_STATE(265)] = 6725,
  [SMALL_STATE(266)] = 6745,
  [SMALL_STATE(267)] = 6756,
  [SMALL_STATE(268)] = 6773,
  [SMALL_STATE(269)] = 6788,
  [SMALL_STATE(270)] = 6805,
  [SMALL_STATE(271)] = 6822,
  [SMALL_STATE(272)] = 6835,
  [SMALL_STATE(273)] = 6852,
  [SMALL_STATE(274)] = 6869,
  [SMALL_STATE(275)] = 6882,
  [SMALL_STATE(276)] = 6899,
  [SMALL_STATE(277)] = 6916,
  [SMALL_STATE(278)] = 6929,
  [SMALL_STATE(279)] = 6946,
  [SMALL_STATE(280)] = 6963,
  [SMALL_STATE(281)] = 6974,
  [SMALL_STATE(282)] = 6991,
  [SMALL_STATE(283)] = 7008,
  [SMALL_STATE(284)] = 7019,
  [SMALL_STATE(285)] = 7036,
  [SMALL_STATE(286)] = 7051,
  [SMALL_STATE(287)] = 7062,
  [SMALL_STATE(288)] = 7075,
  [SMALL_STATE(289)] = 7092,
  [SMALL_STATE(290)] = 7109,
  [SMALL_STATE(291)] = 7122,
  [SMALL_STATE(292)] = 7139,
  [SMALL_STATE(293)] = 7147,
  [SMALL_STATE(294)] = 7155,
  [SMALL_STATE(295)] = 7165,
  [SMALL_STATE(296)] = 7179,
  [SMALL_STATE(297)] = 7191,
  [SMALL_STATE(298)] = 7199,
  [SMALL_STATE(299)] = 7207,
  [SMALL_STATE(300)] = 7215,
  [SMALL_STATE(301)] = 7223,
  [SMALL_STATE(302)] = 7233,
  [SMALL_STATE(303)] = 7241,
  [SMALL_STATE(304)] = 7249,
  [SMALL_STATE(305)] = 7257,
  [SMALL_STATE(306)] = 7267,
  [SMALL_STATE(307)] = 7275,
  [SMALL_STATE(308)] = 7283,
  [SMALL_STATE(309)] = 7293,
  [SMALL_STATE(310)] = 7301,
  [SMALL_STATE(311)] = 7315,
  [SMALL_STATE(312)] = 7325,
  [SMALL_STATE(313)] = 7333,
  [SMALL_STATE(314)] = 7341,
  [SMALL_STATE(315)] = 7349,
  [SMALL_STATE(316)] = 7359,
  [SMALL_STATE(317)] = 7367,
  [SMALL_STATE(318)] = 7381,
  [SMALL_STATE(319)] = 7389,
  [SMALL_STATE(320)] = 7398,
  [SMALL_STATE(321)] = 7407,
  [SMALL_STATE(322)] = 7416,
  [SMALL_STATE(323)] = 7425,
  [SMALL_STATE(324)] = 7434,
  [SMALL_STATE(325)] = 7443,
  [SMALL_STATE(326)] = 7452,
  [SMALL_STATE(327)] = 7465,
  [SMALL_STATE(328)] = 7474,
  [SMALL_STATE(329)] = 7483,
  [SMALL_STATE(330)] = 7492,
  [SMALL_STATE(331)] = 7501,
  [SMALL_STATE(332)] = 7510,
  [SMALL_STATE(333)] = 7519,
  [SMALL_STATE(334)] = 7528,
  [SMALL_STATE(335)] = 7539,
  [SMALL_STATE(336)] = 7548,
  [SMALL_STATE(337)] = 7557,
  [SMALL_STATE(338)] = 7570,
  [SMALL_STATE(339)] = 7579,
  [SMALL_STATE(340)] = 7592,
  [SMALL_STATE(341)] = 7605,
  [SMALL_STATE(342)] = 7614,
  [SMALL_STATE(343)] = 7623,
  [SMALL_STATE(344)] = 7632,
  [SMALL_STATE(345)] = 7642,
  [SMALL_STATE(346)] = 7652,
  [SMALL_STATE(347)] = 7658,
  [SMALL_STATE(348)] = 7666,
  [SMALL_STATE(349)] = 7672,
  [SMALL_STATE(350)] = 7678,
  [SMALL_STATE(351)] = 7686,
  [SMALL_STATE(352)] = 7696,
  [SMALL_STATE(353)] = 7706,
  [SMALL_STATE(354)] = 7716,
  [SMALL_STATE(355)] = 7726,
  [SMALL_STATE(356)] = 7734,
  [SMALL_STATE(357)] = 7742,
  [SMALL_STATE(358)] = 7750,
  [SMALL_STATE(359)] = 7760,
  [SMALL_STATE(360)] = 7770,
  [SMALL_STATE(361)] = 7778,
  [SMALL_STATE(362)] = 7788,
  [SMALL_STATE(363)] = 7798,
  [SMALL_STATE(364)] = 7806,
  [SMALL_STATE(365)] = 7814,
  [SMALL_STATE(366)] = 7824,
  [SMALL_STATE(367)] = 7830,
  [SMALL_STATE(368)] = 7838,
  [SMALL_STATE(369)] = 7848,
  [SMALL_STATE(370)] = 7856,
  [SMALL_STATE(371)] = 7864,
  [SMALL_STATE(372)] = 7874,
  [SMALL_STATE(373)] = 7882,
  [SMALL_STATE(374)] = 7890,
  [SMALL_STATE(375)] = 7900,
  [SMALL_STATE(376)] = 7910,
  [SMALL_STATE(377)] = 7918,
  [SMALL_STATE(378)] = 7928,
  [SMALL_STATE(379)] = 7935,
  [SMALL_STATE(380)] = 7942,
  [SMALL_STATE(381)] = 7949,
  [SMALL_STATE(382)] = 7956,
  [SMALL_STATE(383)] = 7963,
  [SMALL_STATE(384)] = 7970,
  [SMALL_STATE(385)] = 7977,
  [SMALL_STATE(386)] = 7984,
  [SMALL_STATE(387)] = 7991,
  [SMALL_STATE(388)] = 7998,
  [SMALL_STATE(389)] = 8005,
  [SMALL_STATE(390)] = 8012,
  [SMALL_STATE(391)] = 8016,
  [SMALL_STATE(392)] = 8020,
  [SMALL_STATE(393)] = 8024,
  [SMALL_STATE(394)] = 8028,
  [SMALL_STATE(395)] = 8032,
  [SMALL_STATE(396)] = 8036,
  [SMALL_STATE(397)] = 8040,
  [SMALL_STATE(398)] = 8044,
  [SMALL_STATE(399)] = 8048,
  [SMALL_STATE(400)] = 8052,
  [SMALL_STATE(401)] = 8056,
  [SMALL_STATE(402)] = 8060,
  [SMALL_STATE(403)] = 8064,
  [SMALL_STATE(404)] = 8068,
  [SMALL_STATE(405)] = 8072,
  [SMALL_STATE(406)] = 8076,
  [SMALL_STATE(407)] = 8080,
  [SMALL_STATE(408)] = 8084,
  [SMALL_STATE(409)] = 8088,
  [SMALL_STATE(410)] = 8092,
  [SMALL_STATE(411)] = 8096,
  [SMALL_STATE(412)] = 8100,
  [SMALL_STATE(413)] = 8104,
  [SMALL_STATE(414)] = 8108,
  [SMALL_STATE(415)] = 8112,
  [SMALL_STATE(416)] = 8116,
  [SMALL_STATE(417)] = 8120,
  [SMALL_STATE(418)] = 8124,
  [SMALL_STATE(419)] = 8128,
  [SMALL_STATE(420)] = 8132,
  [SMALL_STATE(421)] = 8136,
  [SMALL_STATE(422)] = 8140,
  [SMALL_STATE(423)] = 8144,
  [SMALL_STATE(424)] = 8148,
  [SMALL_STATE(425)] = 8152,
  [SMALL_STATE(426)] = 8156,
  [SMALL_STATE(427)] = 8160,
  [SMALL_STATE(428)] = 8164,
  [SMALL_STATE(429)] = 8168,
  [SMALL_STATE(430)] = 8172,
  [SMALL_STATE(431)] = 8176,
  [SMALL_STATE(432)] = 8180,
  [SMALL_STATE(433)] = 8184,
  [SMALL_STATE(434)] = 8188,
  [SMALL_STATE(435)] = 8192,
  [SMALL_STATE(436)] = 8196,
  [SMALL_STATE(437)] = 8200,
  [SMALL_STATE(438)] = 8204,
  [SMALL_STATE(439)] = 8208,
  [SMALL_STATE(440)] = 8212,
  [SMALL_STATE(441)] = 8216,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(349),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(242),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(388),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(388),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(402),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(403),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(354),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(351),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(390),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(385),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(385),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(149),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(149),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(411),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(219),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(384),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(384),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(413),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(155),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(155),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(247),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(378),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(378),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(395),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(152),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(152),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(407),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(9),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 5, .production_id = 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 5, .production_id = 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(155),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(155),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 4),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 4),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(27),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_keyword, 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_keyword, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 2),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 2),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 3),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffered_code, 2),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffered_code, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unescaped_buffered_code, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unescaped_buffered_code, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(57),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 6),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 6),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 5),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 5),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 4),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 4),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(152),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(152),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 3),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 7),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 7, .production_id = 7),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 7, .production_id = 7),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 1),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 5, .production_id = 5),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 5, .production_id = 5),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(70),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 5),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 5),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 5),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 5),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 3),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 3),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(149),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(149),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 6),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 6),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_block, 5, .production_id = 2),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_block, 5, .production_id = 2),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 6),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 6),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 3),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 3),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 2),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 2),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(231),
  [477] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(387),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(387),
  [483] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(405),
  [486] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(150),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(150),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 2),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 2),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 1),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 1),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [618] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(150),
  [621] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(150),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(311),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(331),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [648] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(187),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [689] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(268),
  [692] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(416),
  [695] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(417),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [792] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2), SHIFT_REPEAT(156),
  [795] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2), SHIFT_REPEAT(252),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2),
  [800] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(268),
  [803] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(416),
  [806] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(417),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 1),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [831] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 1),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [849] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2), SHIFT_REPEAT(404),
  [852] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [860] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(268),
  [863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [869] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_name, 1),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 3),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 3),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [889] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_angular_attribute_name, 1),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_angular_attribute_name, 1),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 3),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 3),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 1),
  [901] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 1),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [905] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(412),
  [908] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(366),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 3),
  [923] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 3),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__un_delimited_javascript, 1),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 3),
  [929] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 3),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_attribute_value, 2),
  [935] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable_attribute_value, 2),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_attribute_value, 2),
  [939] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__object_attribute_value, 2),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 6),
  [943] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 6),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 3),
  [947] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 3),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ternary_attribute_value, 2),
  [953] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ternary_attribute_value, 2),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [957] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_attribute_value, 2),
  [963] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__template_attribute_value, 2),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_attribute_value, 2),
  [967] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__array_attribute_value, 2),
  [969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 1),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [975] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 2),
  [981] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 2),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_attribute_value, 2),
  [989] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_attribute_value, 2),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 3),
  [993] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 3),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [997] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1063] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
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
