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
#define STATE_COUNT 668
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 106
#define ALIAS_COUNT 1
#define TOKEN_COUNT 58
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
  anon_sym_unless = 6,
  anon_sym_if = 7,
  anon_sym_elseif = 8,
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
  sym_attribute_name = 38,
  anon_sym_SQUOTE = 39,
  aux_sym_quoted_javascript_token1 = 40,
  anon_sym_DQUOTE = 41,
  aux_sym_quoted_javascript_token2 = 42,
  aux_sym_content_token1 = 43,
  anon_sym_POUND = 44,
  anon_sym_LBRACE = 45,
  sym__comment_content = 46,
  anon_sym_POUND_LBRACE = 47,
  anon_sym_RBRACE = 48,
  anon_sym_LBRACE_LBRACE = 49,
  anon_sym_RBRACE_RBRACE = 50,
  sym__delimited_javascript = 51,
  sym__un_delimited_javascript_line = 52,
  anon_sym_DASH = 53,
  aux_sym_unbuffered_code_token1 = 54,
  sym__newline = 55,
  sym__indent = 56,
  sym__dedent = 57,
  sym_source_file = 58,
  sym_doctype = 59,
  sym_pipe = 60,
  sym_conditional = 61,
  sym_case = 62,
  sym__when_content = 63,
  sym__dummy_tag = 64,
  sym__when_keyword = 65,
  sym_when = 66,
  sym_unescaped_buffered_code = 67,
  sym_buffered_code = 68,
  sym_script_block = 69,
  sym_tag = 70,
  sym__content_after_dot = 71,
  sym_attributes = 72,
  sym_attribute = 73,
  sym__ternary_attribute_value = 74,
  sym__string_attribute_value = 75,
  sym__variable_attribute_value = 76,
  sym__object_attribute_value = 77,
  sym__template_attribute_value = 78,
  sym__array_attribute_value = 79,
  sym__attribute = 80,
  sym__angular_attribute = 81,
  sym_children = 82,
  sym__children_choice = 83,
  sym_comment = 84,
  sym_angular_attribute_name = 85,
  sym_quoted_javascript = 86,
  sym_quoted_attribute_value = 87,
  sym_content = 88,
  aux_sym__content_or_javascript = 89,
  sym__un_delimited_javascript = 90,
  aux_sym__un_delimited_javascript_multiline = 91,
  sym__single_line_buf_code = 92,
  sym__multi_line_buf_code = 93,
  sym_unbuffered_code = 94,
  aux_sym_source_file_repeat1 = 95,
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
  alias_sym_attribute_value = 106,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_doctype] = "doctype",
  [anon_sym_html] = "doctype_name",
  [anon_sym_strict] = "doctype_name",
  [anon_sym_xml] = "doctype_name",
  [anon_sym_PIPE] = "|",
  [anon_sym_unless] = "unless",
  [anon_sym_if] = "if",
  [anon_sym_elseif] = "else if",
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
  [sym_angular_attribute_name] = "attribute_name",
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
  [alias_sym_attribute_value] = "attribute_value",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_doctype] = anon_sym_doctype,
  [anon_sym_html] = anon_sym_html,
  [anon_sym_strict] = anon_sym_html,
  [anon_sym_xml] = anon_sym_html,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_unless] = anon_sym_unless,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_elseif] = anon_sym_elseif,
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
  [sym_attribute_name] = sym_attribute_name,
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
  [sym_angular_attribute_name] = sym_attribute_name,
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
      if (eof) ADVANCE(154);
      if (lookahead == '!') ADVANCE(80);
      if (lookahead == '"') ADVANCE(646);
      if (lookahead == '#') ADVANCE(652);
      if (lookahead == '\'') ADVANCE(642);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == ')') ADVANCE(211);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead == ',') ADVANCE(210);
      if (lookahead == '-') ADVANCE(684);
      if (lookahead == '.') ADVANCE(208);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '=') ADVANCE(198);
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
      if (lookahead == '{') ADVANCE(653);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '}') ADVANCE(668);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == '`') ADVANCE(505);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(213);
      if (lookahead == '`') ADVANCE(506);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(214);
      if (lookahead == '`') ADVANCE(510);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"') ADVANCE(215);
      if (lookahead == ']') ADVANCE(512);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(62);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(216);
      if (lookahead == ']') ADVANCE(513);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(66);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ']') ADVANCE(515);
      if (lookahead == '`') ADVANCE(217);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(93);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(218);
      if (lookahead == ']') ADVANCE(516);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(137);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(219);
      if (lookahead == ']') ADVANCE(517);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(138);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(220);
      if (lookahead == ']') ADVANCE(518);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(139);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(221);
      if (lookahead == ']') ADVANCE(519);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(141);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '#') ADVANCE(652);
      if (lookahead == '{') ADVANCE(653);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(650);
      if (lookahead != 0) ADVANCE(651);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(492);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(62);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(223);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(493);
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
      if (lookahead == '`') ADVANCE(224);
      if (lookahead == '}') ADVANCE(494);
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
          lookahead == '\'') ADVANCE(225);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(495);
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
          lookahead == '`') ADVANCE(226);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(496);
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
          lookahead == '`') ADVANCE(227);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(497);
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
          lookahead == '`') ADVANCE(228);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(498);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(141);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(492);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(62);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(223);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(493);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(66);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '`') ADVANCE(224);
      if (lookahead == '}') ADVANCE(494);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(93);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(225);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(495);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(137);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(226);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(496);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(138);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(227);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(497);
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
          lookahead == '`') ADVANCE(228);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(498);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(141);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(230);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == '`') ADVANCE(231);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(232);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(233);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(234);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(235);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '"') ADVANCE(236);
      if (lookahead == ')') ADVANCE(454);
      if (lookahead == '`') ADVANCE(502);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == ')') ADVANCE(455);
      if (lookahead == '`') ADVANCE(503);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(238);
      if (lookahead == ')') ADVANCE(456);
      if (lookahead == '`') ADVANCE(504);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"') ADVANCE(239);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(240);
      if (lookahead == ')') ADVANCE(478);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == '`') ADVANCE(241);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(242);
      if (lookahead == ')') ADVANCE(488);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(243);
      if (lookahead == ')') ADVANCE(489);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(244);
      if (lookahead == ')') ADVANCE(490);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(245);
      if (lookahead == ')') ADVANCE(491);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(62);
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 44:
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == '\'') ADVANCE(248);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(66);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 45:
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == '`') ADVANCE(250);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(93);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 46:
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(252);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(137);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 47:
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(254);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(138);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 48:
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(256);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(139);
      if (lookahead != 0) ADVANCE(256);
      END_STATE();
    case 49:
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(258);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(141);
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 50:
      if (lookahead == '\n') SKIP(50)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(680);
      if (lookahead != 0) ADVANCE(683);
      END_STATE();
    case 51:
      if (lookahead == '\n') SKIP(51)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(672);
      END_STATE();
    case 52:
      if (lookahead == '\n') SKIP(52)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(190);
      END_STATE();
    case 53:
      if (lookahead == '\n') SKIP(53)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(204);
      if (lookahead != 0) ADVANCE(205);
      END_STATE();
    case 54:
      if (lookahead == ' ') ADVANCE(206);
      if (lookahead == '!') ADVANCE(80);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '(') ADVANCE(209);
      if (lookahead == ')') ADVANCE(211);
      if (lookahead == ',') ADVANCE(210);
      if (lookahead == '.') ADVANCE(208);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(54)
      END_STATE();
    case 55:
      if (lookahead == ' ') ADVANCE(206);
      if (lookahead == '!') ADVANCE(80);
      if (lookahead == ')') ADVANCE(211);
      if (lookahead == ',') ADVANCE(210);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(55)
      END_STATE();
    case 56:
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '}') ADVANCE(499);
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
      if (lookahead == '}') ADVANCE(500);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(86);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 58:
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '"') ADVANCE(647);
      if (lookahead == '\'') ADVANCE(643);
      if (lookahead == '?') ADVANCE(476);
      if (lookahead == '[') ADVANCE(467);
      if (lookahead == '`') ADVANCE(482);
      if (lookahead == '{') ADVANCE(468);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(474);
      if (lookahead != 0) ADVANCE(481);
      END_STATE();
    case 59:
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '"') ADVANCE(647);
      if (lookahead == '\'') ADVANCE(643);
      if (lookahead == '?') ADVANCE(480);
      if (lookahead == '[') ADVANCE(467);
      if (lookahead == '`') ADVANCE(482);
      if (lookahead == '{') ADVANCE(468);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(474);
      if (lookahead != 0) ADVANCE(481);
      END_STATE();
    case 60:
      if (lookahead == '"') ADVANCE(646);
      if (lookahead == '\'') ADVANCE(642);
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
      if (lookahead == '"') ADVANCE(646);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(648);
      if (lookahead != 0) ADVANCE(649);
      END_STATE();
    case 62:
      if (lookahead == '"') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 63:
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 64:
      if (lookahead == '#') ADVANCE(146);
      if (lookahead == '(') ADVANCE(147);
      if (lookahead == ')') ADVANCE(211);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead == '[') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 65:
      if (lookahead == '\'') ADVANCE(642);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(644);
      if (lookahead != 0) ADVANCE(645);
      END_STATE();
    case 66:
      if (lookahead == '\'') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 67:
      if (lookahead == ')') ADVANCE(639);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == '?') ADVANCE(69);
      if (lookahead == '`') ADVANCE(429);
      if (lookahead != 0) ADVANCE(438);
      END_STATE();
    case 69:
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == '`') ADVANCE(508);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 70:
      if (lookahead == ')') ADVANCE(485);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 71:
      if (lookahead == ')') ADVANCE(485);
      if (lookahead == '?') ADVANCE(471);
      if (lookahead == ' ' ||
          lookahead == '(') ADVANCE(70);
      if (lookahead != 0) ADVANCE(466);
      END_STATE();
    case 72:
      if (lookahead == ')') ADVANCE(484);
      if (lookahead == '?') ADVANCE(68);
      if (lookahead == '`') ADVANCE(507);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 73:
      if (lookahead == ')') ADVANCE(453);
      if (lookahead == '?') ADVANCE(74);
      if (lookahead != 0) ADVANCE(429);
      END_STATE();
    case 74:
      if (lookahead == ')') ADVANCE(453);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 75:
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '}') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(75);
      END_STATE();
    case 76:
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '?') ADVANCE(77);
      if (lookahead == '}') ADVANCE(500);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(86);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 77:
      if (lookahead == ',') ADVANCE(434);
      if (lookahead == '?') ADVANCE(75);
      if (lookahead == '}') ADVANCE(434);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(434);
      END_STATE();
    case 78:
      if (lookahead == '.') ADVANCE(201);
      END_STATE();
    case 79:
      if (lookahead == '/') ADVANCE(521);
      END_STATE();
    case 80:
      if (lookahead == '=') ADVANCE(195);
      END_STATE();
    case 81:
      if (lookahead == '?') ADVANCE(89);
      if (lookahead == ']') ADVANCE(425);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(432);
      END_STATE();
    case 82:
      if (lookahead == '?') ADVANCE(479);
      if (lookahead == '`') ADVANCE(481);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(85);
      if (lookahead != 0) ADVANCE(482);
      END_STATE();
    case 83:
      if (lookahead == '?') ADVANCE(483);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(86);
      if (lookahead != 0) ADVANCE(481);
      END_STATE();
    case 84:
      if (lookahead == '?') ADVANCE(470);
      if (lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(86);
      if (lookahead != 0) ADVANCE(481);
      END_STATE();
    case 85:
      if (lookahead == '?') ADVANCE(92);
      if (lookahead == '`') ADVANCE(509);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 86:
      if (lookahead == '?') ADVANCE(149);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 87:
      if (lookahead == '?') ADVANCE(81);
      if (lookahead == ']') ADVANCE(514);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(86);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 88:
      if (lookahead == ']') ADVANCE(511);
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
      if (lookahead == ']') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[') ADVANCE(89);
      END_STATE();
    case 90:
      if (lookahead == ']') ADVANCE(638);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 91:
      if (lookahead == '`') ADVANCE(501);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 92:
      if (lookahead == '`') ADVANCE(425);
      if (lookahead == ')' ||
          lookahead == '?') ADVANCE(91);
      if (lookahead != 0) ADVANCE(437);
      END_STATE();
    case 93:
      if (lookahead == '`') ADVANCE(447);
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
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(155);
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
      if (lookahead == 'f') ADVANCE(169);
      END_STATE();
    case 106:
      if (lookahead == 'f') ADVANCE(173);
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
      if (lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(159);
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
      if (lookahead == 'n') ADVANCE(185);
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
      if (lookahead == 's') ADVANCE(165);
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
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(191);
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
      if (lookahead == '}') ADVANCE(670);
      END_STATE();
    case 137:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 138:
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 139:
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 140:
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 141:
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 142:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(142)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 143:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(632);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 144:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(635);
      END_STATE();
    case 145:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 146:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 147:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 148:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 149:
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '?') ADVANCE(425);
      END_STATE();
    case 150:
      if (eof) ADVANCE(154);
      if (lookahead == '\n') SKIP(150)
      if (lookahead == '!') ADVANCE(676);
      if (lookahead == '#') ADVANCE(682);
      if (lookahead == '-') ADVANCE(685);
      if (lookahead == '.') ADVANCE(681);
      if (lookahead == '/') ADVANCE(675);
      if (lookahead == '=') ADVANCE(199);
      if (lookahead == 'c') ADVANCE(532);
      if (lookahead == 'd') ADVANCE(551);
      if (lookahead == 'e') ADVANCE(579);
      if (lookahead == 'i') ADVANCE(561);
      if (lookahead == 's') ADVANCE(538);
      if (lookahead == 'u') ADVANCE(584);
      if (lookahead == 'w') ADVANCE(566);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0) ADVANCE(683);
      END_STATE();
    case 151:
      if (eof) ADVANCE(154);
      if (lookahead == '\n') SKIP(151)
      if (lookahead == '!') ADVANCE(676);
      if (lookahead == '#') ADVANCE(682);
      if (lookahead == '-') ADVANCE(685);
      if (lookahead == '.') ADVANCE(681);
      if (lookahead == '/') ADVANCE(675);
      if (lookahead == '=') ADVANCE(199);
      if (lookahead == 'c') ADVANCE(532);
      if (lookahead == 'd') ADVANCE(588);
      if (lookahead == 'e') ADVANCE(579);
      if (lookahead == 'i') ADVANCE(561);
      if (lookahead == 's') ADVANCE(538);
      if (lookahead == 'u') ADVANCE(584);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0) ADVANCE(683);
      END_STATE();
    case 152:
      if (eof) ADVANCE(154);
      if (lookahead == '!') ADVANCE(80);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '-') ADVANCE(684);
      if (lookahead == '.') ADVANCE(208);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == 'c') ADVANCE(530);
      if (lookahead == 'd') ADVANCE(587);
      if (lookahead == 'e') ADVANCE(578);
      if (lookahead == 'i') ADVANCE(560);
      if (lookahead == 's') ADVANCE(536);
      if (lookahead == 'u') ADVANCE(583);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '}') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(152)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 153:
      if (eof) ADVANCE(154);
      if (lookahead == '!') ADVANCE(80);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '-') ADVANCE(684);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == 'c') ADVANCE(530);
      if (lookahead == 'd') ADVANCE(548);
      if (lookahead == 'e') ADVANCE(578);
      if (lookahead == 'i') ADVANCE(560);
      if (lookahead == 's') ADVANCE(536);
      if (lookahead == 'u') ADVANCE(583);
      if (lookahead == 'w') ADVANCE(567);
      if (lookahead == '|') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(153)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
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
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_doctype);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
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
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_unless);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(678);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(659);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(110);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(110);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
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
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__when_keyword_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(190);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__when_keyword_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_script_DOT);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_script_DOT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_script_DOT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_script_block_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_script_block_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(632);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == '`') ADVANCE(505);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(213);
      if (lookahead == '`') ADVANCE(506);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(214);
      if (lookahead == '`') ADVANCE(510);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"') ADVANCE(215);
      if (lookahead == ']') ADVANCE(512);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(62);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(216);
      if (lookahead == ']') ADVANCE(513);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(66);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ']') ADVANCE(515);
      if (lookahead == '`') ADVANCE(217);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(93);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(218);
      if (lookahead == ']') ADVANCE(516);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(137);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(219);
      if (lookahead == ']') ADVANCE(517);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(138);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(220);
      if (lookahead == ']') ADVANCE(518);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(139);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(221);
      if (lookahead == ']') ADVANCE(519);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[') ADVANCE(141);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(492);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(62);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(223);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(493);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(66);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '`') ADVANCE(224);
      if (lookahead == '}') ADVANCE(494);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(93);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(225);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(495);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(137);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(226);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(496);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(138);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(227);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(497);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(139);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(228);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(498);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(141);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(230);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == '`') ADVANCE(231);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(232);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(233);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(234);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(235);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '"') ADVANCE(236);
      if (lookahead == ')') ADVANCE(454);
      if (lookahead == '`') ADVANCE(502);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(237);
      if (lookahead == ')') ADVANCE(455);
      if (lookahead == '`') ADVANCE(503);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(238);
      if (lookahead == ')') ADVANCE(456);
      if (lookahead == '`') ADVANCE(504);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"') ADVANCE(239);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(240);
      if (lookahead == ')') ADVANCE(478);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == '`') ADVANCE(241);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(242);
      if (lookahead == ')') ADVANCE(488);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(243);
      if (lookahead == ')') ADVANCE(489);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(244);
      if (lookahead == ')') ADVANCE(490);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(245);
      if (lookahead == ')') ADVANCE(491);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(246);
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '\'') ADVANCE(252);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '?') ADVANCE(319);
      if (lookahead == '`') ADVANCE(254);
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(246);
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '?') ADVANCE(319);
      if (lookahead != 0) ADVANCE(246);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(248);
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '\'') ADVANCE(248);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(320);
      if (lookahead == '`') ADVANCE(256);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(248);
      if (lookahead == '\'') ADVANCE(248);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(320);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(250);
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '?') ADVANCE(321);
      if (lookahead == '`') ADVANCE(250);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(250);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '?') ADVANCE(321);
      if (lookahead == '`') ADVANCE(250);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(252);
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '\'') ADVANCE(252);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '?') ADVANCE(322);
      if (lookahead == '`') ADVANCE(258);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(252);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(252);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '?') ADVANCE(322);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(254);
      if (lookahead == '"') ADVANCE(254);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(323);
      if (lookahead == '`') ADVANCE(254);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(254);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(254);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(323);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(256);
      if (lookahead == '"') ADVANCE(258);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(324);
      if (lookahead == '`') ADVANCE(256);
      if (lookahead != 0) ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(256);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(256);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(324);
      if (lookahead != 0) ADVANCE(256);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(258);
      if (lookahead == '"') ADVANCE(258);
      if (lookahead == '\'') ADVANCE(258);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == '?') ADVANCE(325);
      if (lookahead == '`') ADVANCE(258);
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(425);
      if (lookahead == ' ') ADVANCE(258);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(258);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == '?') ADVANCE(325);
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(260);
      if (lookahead == '"') ADVANCE(260);
      if (lookahead == '\'') ADVANCE(266);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead == '?') ADVANCE(326);
      if (lookahead == '`') ADVANCE(268);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(260);
      if (lookahead == '"') ADVANCE(260);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead == '?') ADVANCE(326);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(262);
      if (lookahead == '"') ADVANCE(266);
      if (lookahead == '\'') ADVANCE(262);
      if (lookahead == ')') ADVANCE(478);
      if (lookahead == '?') ADVANCE(327);
      if (lookahead == '`') ADVANCE(270);
      if (lookahead != 0) ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(262);
      if (lookahead == '\'') ADVANCE(262);
      if (lookahead == ')') ADVANCE(478);
      if (lookahead == '?') ADVANCE(327);
      if (lookahead != 0) ADVANCE(262);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(264);
      if (lookahead == '"') ADVANCE(268);
      if (lookahead == '\'') ADVANCE(270);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == '?') ADVANCE(328);
      if (lookahead == '`') ADVANCE(264);
      if (lookahead != 0) ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(264);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == '?') ADVANCE(328);
      if (lookahead == '`') ADVANCE(264);
      if (lookahead != 0) ADVANCE(264);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(266);
      if (lookahead == '"') ADVANCE(266);
      if (lookahead == '\'') ADVANCE(266);
      if (lookahead == ')') ADVANCE(488);
      if (lookahead == '?') ADVANCE(329);
      if (lookahead == '`') ADVANCE(272);
      if (lookahead != 0) ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(266);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(266);
      if (lookahead == ')') ADVANCE(488);
      if (lookahead == '?') ADVANCE(329);
      if (lookahead != 0) ADVANCE(266);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(268);
      if (lookahead == '"') ADVANCE(268);
      if (lookahead == '\'') ADVANCE(272);
      if (lookahead == ')') ADVANCE(489);
      if (lookahead == '?') ADVANCE(330);
      if (lookahead == '`') ADVANCE(268);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(268);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(268);
      if (lookahead == ')') ADVANCE(489);
      if (lookahead == '?') ADVANCE(330);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(270);
      if (lookahead == '"') ADVANCE(272);
      if (lookahead == '\'') ADVANCE(270);
      if (lookahead == ')') ADVANCE(490);
      if (lookahead == '?') ADVANCE(331);
      if (lookahead == '`') ADVANCE(270);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(270);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(270);
      if (lookahead == ')') ADVANCE(490);
      if (lookahead == '?') ADVANCE(331);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(272);
      if (lookahead == '"') ADVANCE(272);
      if (lookahead == '\'') ADVANCE(272);
      if (lookahead == ')') ADVANCE(491);
      if (lookahead == '?') ADVANCE(332);
      if (lookahead == '`') ADVANCE(272);
      if (lookahead != 0) ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(429);
      if (lookahead == ' ') ADVANCE(272);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(272);
      if (lookahead == ')') ADVANCE(491);
      if (lookahead == '?') ADVANCE(332);
      if (lookahead != 0) ADVANCE(272);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(246);
      if (lookahead == '"') ADVANCE(274);
      if (lookahead == '\'') ADVANCE(280);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '?') ADVANCE(333);
      if (lookahead == '`') ADVANCE(282);
      if (lookahead != 0) ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(246);
      if (lookahead == '"') ADVANCE(274);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '?') ADVANCE(333);
      if (lookahead != 0) ADVANCE(274);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(248);
      if (lookahead == '"') ADVANCE(280);
      if (lookahead == '\'') ADVANCE(276);
      if (lookahead == '(') ADVANCE(262);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(334);
      if (lookahead == '`') ADVANCE(284);
      if (lookahead != 0) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(248);
      if (lookahead == '\'') ADVANCE(276);
      if (lookahead == '(') ADVANCE(262);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(334);
      if (lookahead != 0) ADVANCE(276);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(250);
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '\'') ADVANCE(284);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '?') ADVANCE(335);
      if (lookahead == '`') ADVANCE(278);
      if (lookahead != 0) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(250);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '?') ADVANCE(335);
      if (lookahead == '`') ADVANCE(278);
      if (lookahead != 0) ADVANCE(278);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(252);
      if (lookahead == '"') ADVANCE(280);
      if (lookahead == '\'') ADVANCE(280);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '?') ADVANCE(336);
      if (lookahead == '`') ADVANCE(286);
      if (lookahead != 0) ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(252);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(280);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '?') ADVANCE(336);
      if (lookahead != 0) ADVANCE(280);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(254);
      if (lookahead == '"') ADVANCE(282);
      if (lookahead == '\'') ADVANCE(286);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(337);
      if (lookahead == '`') ADVANCE(282);
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(254);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(282);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(337);
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(256);
      if (lookahead == '"') ADVANCE(286);
      if (lookahead == '\'') ADVANCE(284);
      if (lookahead == '(') ADVANCE(270);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(338);
      if (lookahead == '`') ADVANCE(284);
      if (lookahead != 0) ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(256);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(284);
      if (lookahead == '(') ADVANCE(270);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(338);
      if (lookahead != 0) ADVANCE(284);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(258);
      if (lookahead == '"') ADVANCE(286);
      if (lookahead == '\'') ADVANCE(286);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == '?') ADVANCE(339);
      if (lookahead == '`') ADVANCE(286);
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(426);
      if (lookahead == ' ') ADVANCE(258);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(286);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == '?') ADVANCE(339);
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == ' ') ADVANCE(384);
      if (lookahead == '"') ADVANCE(288);
      if (lookahead == '\'') ADVANCE(290);
      if (lookahead == '(') ADVANCE(394);
      if (lookahead == ')') ADVANCE(1);
      if (lookahead == '?') ADVANCE(346);
      if (lookahead == '`') ADVANCE(282);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == ' ') ADVANCE(385);
      if (lookahead == '"') ADVANCE(290);
      if (lookahead == '\'') ADVANCE(289);
      if (lookahead == '(') ADVANCE(395);
      if (lookahead == ')') ADVANCE(2);
      if (lookahead == '?') ADVANCE(347);
      if (lookahead == '`') ADVANCE(284);
      if (lookahead != 0) ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(436);
      if (lookahead == ' ') ADVANCE(386);
      if (lookahead == '"') ADVANCE(290);
      if (lookahead == '\'') ADVANCE(290);
      if (lookahead == '(') ADVANCE(396);
      if (lookahead == ')') ADVANCE(3);
      if (lookahead == '?') ADVANCE(348);
      if (lookahead == '`') ADVANCE(286);
      if (lookahead != 0) ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead == '"') ADVANCE(291);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '?') ADVANCE(349);
      if (lookahead == ']') ADVANCE(246);
      if (lookahead == '`') ADVANCE(295);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(246);
      if (lookahead != 0) ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == '"') ADVANCE(294);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(350);
      if (lookahead == ']') ADVANCE(248);
      if (lookahead == '`') ADVANCE(296);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(248);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '"') ADVANCE(295);
      if (lookahead == '\'') ADVANCE(296);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '?') ADVANCE(351);
      if (lookahead == ']') ADVANCE(250);
      if (lookahead == '`') ADVANCE(293);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(250);
      if (lookahead != 0) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(294);
      if (lookahead == '"') ADVANCE(294);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '?') ADVANCE(352);
      if (lookahead == ']') ADVANCE(252);
      if (lookahead == '`') ADVANCE(297);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(252);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == '"') ADVANCE(295);
      if (lookahead == '\'') ADVANCE(297);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(353);
      if (lookahead == ']') ADVANCE(254);
      if (lookahead == '`') ADVANCE(295);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(254);
      if (lookahead != 0) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(296);
      if (lookahead == '"') ADVANCE(297);
      if (lookahead == '\'') ADVANCE(296);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(354);
      if (lookahead == ']') ADVANCE(256);
      if (lookahead == '`') ADVANCE(296);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(256);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(432);
      if (lookahead == ' ') ADVANCE(297);
      if (lookahead == '"') ADVANCE(297);
      if (lookahead == '\'') ADVANCE(297);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == '?') ADVANCE(355);
      if (lookahead == ']') ADVANCE(258);
      if (lookahead == '`') ADVANCE(297);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(258);
      if (lookahead != 0) ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(433);
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead == '"') ADVANCE(298);
      if (lookahead == '\'') ADVANCE(301);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '?') ADVANCE(356);
      if (lookahead == '[') ADVANCE(274);
      if (lookahead == ']') ADVANCE(274);
      if (lookahead == '`') ADVANCE(302);
      if (lookahead != 0) ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(433);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '\'') ADVANCE(299);
      if (lookahead == '(') ADVANCE(262);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '?') ADVANCE(357);
      if (lookahead == '[') ADVANCE(276);
      if (lookahead == ']') ADVANCE(276);
      if (lookahead == '`') ADVANCE(303);
      if (lookahead != 0) ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(433);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '"') ADVANCE(302);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '?') ADVANCE(358);
      if (lookahead == '[') ADVANCE(278);
      if (lookahead == ']') ADVANCE(278);
      if (lookahead == '`') ADVANCE(300);
      if (lookahead != 0) ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(433);
      if (lookahead == ' ') ADVANCE(294);
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '\'') ADVANCE(301);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '?') ADVANCE(359);
      if (lookahead == '[') ADVANCE(280);
      if (lookahead == ']') ADVANCE(280);
      if (lookahead == '`') ADVANCE(304);
      if (lookahead != 0) ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(433);
      if (lookahead == ' ') ADVANCE(295);
      if (lookahead == '"') ADVANCE(302);
      if (lookahead == '\'') ADVANCE(304);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '?') ADVANCE(360);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == ']') ADVANCE(282);
      if (lookahead == '`') ADVANCE(302);
      if (lookahead != 0) ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(433);
      if (lookahead == ' ') ADVANCE(296);
      if (lookahead == '"') ADVANCE(304);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '(') ADVANCE(270);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '?') ADVANCE(361);
      if (lookahead == '[') ADVANCE(284);
      if (lookahead == ']') ADVANCE(284);
      if (lookahead == '`') ADVANCE(303);
      if (lookahead != 0) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(433);
      if (lookahead == ' ') ADVANCE(297);
      if (lookahead == '"') ADVANCE(304);
      if (lookahead == '\'') ADVANCE(304);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == '?') ADVANCE(362);
      if (lookahead == '[') ADVANCE(286);
      if (lookahead == ']') ADVANCE(286);
      if (lookahead == '`') ADVANCE(304);
      if (lookahead != 0) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == ' ') ADVANCE(305);
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == ',') ADVANCE(305);
      if (lookahead == '?') ADVANCE(363);
      if (lookahead == '`') ADVANCE(309);
      if (lookahead == '}') ADVANCE(305);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(246);
      if (lookahead != 0) ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == ' ') ADVANCE(306);
      if (lookahead == '"') ADVANCE(308);
      if (lookahead == '\'') ADVANCE(306);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(306);
      if (lookahead == '?') ADVANCE(364);
      if (lookahead == '`') ADVANCE(310);
      if (lookahead == '}') ADVANCE(306);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(248);
      if (lookahead != 0) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == ' ') ADVANCE(307);
      if (lookahead == '"') ADVANCE(309);
      if (lookahead == '\'') ADVANCE(310);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == ',') ADVANCE(307);
      if (lookahead == '?') ADVANCE(365);
      if (lookahead == '`') ADVANCE(307);
      if (lookahead == '}') ADVANCE(307);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(250);
      if (lookahead != 0) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == '"') ADVANCE(308);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == ',') ADVANCE(308);
      if (lookahead == '?') ADVANCE(366);
      if (lookahead == '`') ADVANCE(311);
      if (lookahead == '}') ADVANCE(308);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(252);
      if (lookahead != 0) ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == ' ') ADVANCE(309);
      if (lookahead == '"') ADVANCE(309);
      if (lookahead == '\'') ADVANCE(311);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == ',') ADVANCE(309);
      if (lookahead == '?') ADVANCE(367);
      if (lookahead == '`') ADVANCE(309);
      if (lookahead == '}') ADVANCE(309);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(254);
      if (lookahead != 0) ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == ' ') ADVANCE(310);
      if (lookahead == '"') ADVANCE(311);
      if (lookahead == '\'') ADVANCE(310);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ',') ADVANCE(310);
      if (lookahead == '?') ADVANCE(368);
      if (lookahead == '`') ADVANCE(310);
      if (lookahead == '}') ADVANCE(310);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(256);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(434);
      if (lookahead == ' ') ADVANCE(311);
      if (lookahead == '"') ADVANCE(311);
      if (lookahead == '\'') ADVANCE(311);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == ',') ADVANCE(311);
      if (lookahead == '?') ADVANCE(369);
      if (lookahead == '`') ADVANCE(311);
      if (lookahead == '}') ADVANCE(311);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(258);
      if (lookahead != 0) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead == ' ') ADVANCE(305);
      if (lookahead == '"') ADVANCE(312);
      if (lookahead == '\'') ADVANCE(315);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == ',') ADVANCE(312);
      if (lookahead == '?') ADVANCE(370);
      if (lookahead == '`') ADVANCE(316);
      if (lookahead == '}') ADVANCE(312);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(274);
      if (lookahead != 0) ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead == ' ') ADVANCE(306);
      if (lookahead == '"') ADVANCE(315);
      if (lookahead == '\'') ADVANCE(313);
      if (lookahead == '(') ADVANCE(262);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(313);
      if (lookahead == '?') ADVANCE(371);
      if (lookahead == '`') ADVANCE(317);
      if (lookahead == '}') ADVANCE(313);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(276);
      if (lookahead != 0) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead == ' ') ADVANCE(307);
      if (lookahead == '"') ADVANCE(316);
      if (lookahead == '\'') ADVANCE(317);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == ',') ADVANCE(314);
      if (lookahead == '?') ADVANCE(372);
      if (lookahead == '`') ADVANCE(314);
      if (lookahead == '}') ADVANCE(314);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(278);
      if (lookahead != 0) ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead == '"') ADVANCE(315);
      if (lookahead == '\'') ADVANCE(315);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == ',') ADVANCE(315);
      if (lookahead == '?') ADVANCE(373);
      if (lookahead == '`') ADVANCE(318);
      if (lookahead == '}') ADVANCE(315);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(280);
      if (lookahead != 0) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead == ' ') ADVANCE(309);
      if (lookahead == '"') ADVANCE(316);
      if (lookahead == '\'') ADVANCE(318);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == ',') ADVANCE(316);
      if (lookahead == '?') ADVANCE(374);
      if (lookahead == '`') ADVANCE(316);
      if (lookahead == '}') ADVANCE(316);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(282);
      if (lookahead != 0) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead == ' ') ADVANCE(310);
      if (lookahead == '"') ADVANCE(318);
      if (lookahead == '\'') ADVANCE(317);
      if (lookahead == '(') ADVANCE(270);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ',') ADVANCE(317);
      if (lookahead == '?') ADVANCE(375);
      if (lookahead == '`') ADVANCE(317);
      if (lookahead == '}') ADVANCE(317);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(284);
      if (lookahead != 0) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(435);
      if (lookahead == ' ') ADVANCE(311);
      if (lookahead == '"') ADVANCE(318);
      if (lookahead == '\'') ADVANCE(318);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == ',') ADVANCE(318);
      if (lookahead == '?') ADVANCE(376);
      if (lookahead == '`') ADVANCE(318);
      if (lookahead == '}') ADVANCE(318);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(286);
      if (lookahead != 0) ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(452);
      if (lookahead == '"') ADVANCE(319);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(62);
      if (lookahead != 0) ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(452);
      if (lookahead == '\'') ADVANCE(320);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(66);
      if (lookahead != 0) ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(452);
      if (lookahead == '`') ADVANCE(321);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(93);
      if (lookahead != 0) ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(452);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(322);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(137);
      if (lookahead != 0) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(452);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(323);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(138);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(452);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(324);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(139);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(452);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(325);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(141);
      if (lookahead != 0) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '"') ADVANCE(326);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead != 0) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(327);
      if (lookahead == ')') ADVANCE(478);
      if (lookahead != 0) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == '`') ADVANCE(328);
      if (lookahead != 0) ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(329);
      if (lookahead == ')') ADVANCE(488);
      if (lookahead != 0) ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(330);
      if (lookahead == ')') ADVANCE(489);
      if (lookahead != 0) ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(331);
      if (lookahead == ')') ADVANCE(490);
      if (lookahead != 0) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(424);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(332);
      if (lookahead == ')') ADVANCE(491);
      if (lookahead != 0) ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(444);
      if (lookahead == '"') ADVANCE(333);
      if (lookahead == '(') ADVANCE(326);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(62);
      if (lookahead != 0) ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(444);
      if (lookahead == '\'') ADVANCE(334);
      if (lookahead == '(') ADVANCE(327);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(66);
      if (lookahead != 0) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(444);
      if (lookahead == '(') ADVANCE(328);
      if (lookahead == '`') ADVANCE(335);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(93);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(444);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(336);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(137);
      if (lookahead != 0) ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(444);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(337);
      if (lookahead == '(') ADVANCE(330);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(138);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(444);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(338);
      if (lookahead == '(') ADVANCE(331);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(139);
      if (lookahead != 0) ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(444);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(339);
      if (lookahead == '(') ADVANCE(332);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(141);
      if (lookahead != 0) ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(446);
      if (lookahead == '"') ADVANCE(340);
      if (lookahead == '`') ADVANCE(319);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(1);
      if (lookahead != 0) ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(446);
      if (lookahead == '\'') ADVANCE(341);
      if (lookahead == '`') ADVANCE(320);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(2);
      if (lookahead != 0) ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(446);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(342);
      if (lookahead == '`') ADVANCE(322);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(3);
      if (lookahead != 0) ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '"') ADVANCE(343);
      if (lookahead == ')') ADVANCE(454);
      if (lookahead == '`') ADVANCE(326);
      if (lookahead != 0) ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(344);
      if (lookahead == ')') ADVANCE(455);
      if (lookahead == '`') ADVANCE(327);
      if (lookahead != 0) ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(345);
      if (lookahead == ')') ADVANCE(456);
      if (lookahead == '`') ADVANCE(329);
      if (lookahead != 0) ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(445);
      if (lookahead == '"') ADVANCE(346);
      if (lookahead == '(') ADVANCE(343);
      if (lookahead == '`') ADVANCE(333);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(1);
      if (lookahead != 0) ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(445);
      if (lookahead == '\'') ADVANCE(347);
      if (lookahead == '(') ADVANCE(344);
      if (lookahead == '`') ADVANCE(334);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(2);
      if (lookahead != 0) ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(445);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(348);
      if (lookahead == '(') ADVANCE(345);
      if (lookahead == '`') ADVANCE(336);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(3);
      if (lookahead != 0) ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '"') ADVANCE(349);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == ']') ADVANCE(319);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(319);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(350);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ']') ADVANCE(320);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(320);
      if (lookahead != 0) ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == ']') ADVANCE(321);
      if (lookahead == '`') ADVANCE(351);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(321);
      if (lookahead != 0) ADVANCE(351);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(352);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == ']') ADVANCE(322);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(322);
      if (lookahead != 0) ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(353);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == ']') ADVANCE(323);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(323);
      if (lookahead != 0) ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(354);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ']') ADVANCE(324);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(324);
      if (lookahead != 0) ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(419);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(355);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == ']') ADVANCE(325);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(325);
      if (lookahead != 0) ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '"') ADVANCE(356);
      if (lookahead == '(') ADVANCE(326);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '[') ADVANCE(333);
      if (lookahead == ']') ADVANCE(333);
      if (lookahead != 0) ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead == '(') ADVANCE(327);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '[') ADVANCE(334);
      if (lookahead == ']') ADVANCE(334);
      if (lookahead != 0) ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '(') ADVANCE(328);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '[') ADVANCE(335);
      if (lookahead == ']') ADVANCE(335);
      if (lookahead == '`') ADVANCE(358);
      if (lookahead != 0) ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(359);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '[') ADVANCE(336);
      if (lookahead == ']') ADVANCE(336);
      if (lookahead != 0) ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(360);
      if (lookahead == '(') ADVANCE(330);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == '[') ADVANCE(337);
      if (lookahead == ']') ADVANCE(337);
      if (lookahead != 0) ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(361);
      if (lookahead == '(') ADVANCE(331);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == '[') ADVANCE(338);
      if (lookahead == ']') ADVANCE(338);
      if (lookahead != 0) ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(418);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(362);
      if (lookahead == '(') ADVANCE(332);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == '[') ADVANCE(339);
      if (lookahead == ']') ADVANCE(339);
      if (lookahead != 0) ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '"') ADVANCE(363);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == ',') ADVANCE(363);
      if (lookahead == '}') ADVANCE(363);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(319);
      if (lookahead != 0) ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(364);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(364);
      if (lookahead == '}') ADVANCE(364);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(320);
      if (lookahead != 0) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == ',') ADVANCE(365);
      if (lookahead == '`') ADVANCE(365);
      if (lookahead == '}') ADVANCE(365);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(321);
      if (lookahead != 0) ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(366);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == ',') ADVANCE(366);
      if (lookahead == '}') ADVANCE(366);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(322);
      if (lookahead != 0) ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(367);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == ',') ADVANCE(367);
      if (lookahead == '}') ADVANCE(367);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(323);
      if (lookahead != 0) ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(368);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ',') ADVANCE(368);
      if (lookahead == '}') ADVANCE(368);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(324);
      if (lookahead != 0) ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(421);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(369);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == ',') ADVANCE(369);
      if (lookahead == '}') ADVANCE(369);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(325);
      if (lookahead != 0) ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '"') ADVANCE(370);
      if (lookahead == '(') ADVANCE(326);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == ',') ADVANCE(370);
      if (lookahead == '}') ADVANCE(370);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(333);
      if (lookahead != 0) ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(371);
      if (lookahead == '(') ADVANCE(327);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(371);
      if (lookahead == '}') ADVANCE(371);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(334);
      if (lookahead != 0) ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == '(') ADVANCE(328);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == ',') ADVANCE(372);
      if (lookahead == '`') ADVANCE(372);
      if (lookahead == '}') ADVANCE(372);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(335);
      if (lookahead != 0) ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(373);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == ',') ADVANCE(373);
      if (lookahead == '}') ADVANCE(373);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(336);
      if (lookahead != 0) ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(374);
      if (lookahead == '(') ADVANCE(330);
      if (lookahead == ')') ADVANCE(138);
      if (lookahead == ',') ADVANCE(374);
      if (lookahead == '}') ADVANCE(374);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(337);
      if (lookahead != 0) ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(375);
      if (lookahead == '(') ADVANCE(331);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ',') ADVANCE(375);
      if (lookahead == '}') ADVANCE(375);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(338);
      if (lookahead != 0) ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(420);
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(376);
      if (lookahead == '(') ADVANCE(332);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == ',') ADVANCE(376);
      if (lookahead == '}') ADVANCE(376);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(339);
      if (lookahead != 0) ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '"') ADVANCE(377);
      if (lookahead == '(') ADVANCE(326);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead != 0) ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(378);
      if (lookahead == '(') ADVANCE(327);
      if (lookahead == ')') ADVANCE(478);
      if (lookahead != 0) ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == '(') ADVANCE(328);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == '`') ADVANCE(379);
      if (lookahead != 0) ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(380);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == ')') ADVANCE(488);
      if (lookahead != 0) ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(381);
      if (lookahead == '(') ADVANCE(330);
      if (lookahead == ')') ADVANCE(489);
      if (lookahead != 0) ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(41);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(382);
      if (lookahead == '(') ADVANCE(331);
      if (lookahead == ')') ADVANCE(490);
      if (lookahead != 0) ADVANCE(382);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(383);
      if (lookahead == '(') ADVANCE(332);
      if (lookahead == ')') ADVANCE(491);
      if (lookahead != 0) ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(384);
      if (lookahead == '"') ADVANCE(384);
      if (lookahead == '\'') ADVANCE(386);
      if (lookahead == ')') ADVANCE(1);
      if (lookahead == '?') ADVANCE(340);
      if (lookahead == '`') ADVANCE(254);
      if (lookahead != 0) ADVANCE(384);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(385);
      if (lookahead == '"') ADVANCE(386);
      if (lookahead == '\'') ADVANCE(385);
      if (lookahead == ')') ADVANCE(2);
      if (lookahead == '?') ADVANCE(341);
      if (lookahead == '`') ADVANCE(256);
      if (lookahead != 0) ADVANCE(385);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(437);
      if (lookahead == ' ') ADVANCE(386);
      if (lookahead == '"') ADVANCE(386);
      if (lookahead == '\'') ADVANCE(386);
      if (lookahead == ')') ADVANCE(3);
      if (lookahead == '?') ADVANCE(342);
      if (lookahead == '`') ADVANCE(258);
      if (lookahead != 0) ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == ' ') ADVANCE(404);
      if (lookahead == '"') ADVANCE(387);
      if (lookahead == '\'') ADVANCE(390);
      if (lookahead == '(') ADVANCE(411);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '?') ADVANCE(275);
      if (lookahead == '`') ADVANCE(391);
      if (lookahead != 0) ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == ' ') ADVANCE(405);
      if (lookahead == '"') ADVANCE(390);
      if (lookahead == '\'') ADVANCE(388);
      if (lookahead == '(') ADVANCE(412);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '?') ADVANCE(277);
      if (lookahead == '`') ADVANCE(392);
      if (lookahead != 0) ADVANCE(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == ' ') ADVANCE(406);
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '\'') ADVANCE(392);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '?') ADVANCE(279);
      if (lookahead == '`') ADVANCE(389);
      if (lookahead != 0) ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == ' ') ADVANCE(407);
      if (lookahead == '"') ADVANCE(390);
      if (lookahead == '\'') ADVANCE(390);
      if (lookahead == '(') ADVANCE(414);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '?') ADVANCE(281);
      if (lookahead == '`') ADVANCE(393);
      if (lookahead != 0) ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == ' ') ADVANCE(408);
      if (lookahead == '"') ADVANCE(391);
      if (lookahead == '\'') ADVANCE(393);
      if (lookahead == '(') ADVANCE(415);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '?') ADVANCE(283);
      if (lookahead == '`') ADVANCE(391);
      if (lookahead != 0) ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == ' ') ADVANCE(409);
      if (lookahead == '"') ADVANCE(393);
      if (lookahead == '\'') ADVANCE(392);
      if (lookahead == '(') ADVANCE(416);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '?') ADVANCE(285);
      if (lookahead == '`') ADVANCE(392);
      if (lookahead != 0) ADVANCE(392);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(439);
      if (lookahead == ' ') ADVANCE(410);
      if (lookahead == '"') ADVANCE(393);
      if (lookahead == '\'') ADVANCE(393);
      if (lookahead == '(') ADVANCE(417);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '?') ADVANCE(287);
      if (lookahead == '`') ADVANCE(393);
      if (lookahead != 0) ADVANCE(393);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(438);
      if (lookahead == ' ') ADVANCE(394);
      if (lookahead == '"') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(396);
      if (lookahead == ')') ADVANCE(454);
      if (lookahead == '?') ADVANCE(343);
      if (lookahead == '`') ADVANCE(268);
      if (lookahead != 0) ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(438);
      if (lookahead == ' ') ADVANCE(395);
      if (lookahead == '"') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(395);
      if (lookahead == ')') ADVANCE(455);
      if (lookahead == '?') ADVANCE(344);
      if (lookahead == '`') ADVANCE(270);
      if (lookahead != 0) ADVANCE(395);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(438);
      if (lookahead == ' ') ADVANCE(396);
      if (lookahead == '"') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(396);
      if (lookahead == ')') ADVANCE(456);
      if (lookahead == '?') ADVANCE(345);
      if (lookahead == '`') ADVANCE(272);
      if (lookahead != 0) ADVANCE(396);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(430);
      if (lookahead == ' ') ADVANCE(260);
      if (lookahead == '"') ADVANCE(397);
      if (lookahead == '\'') ADVANCE(400);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead == '?') ADVANCE(377);
      if (lookahead == '`') ADVANCE(401);
      if (lookahead != 0) ADVANCE(397);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(430);
      if (lookahead == ' ') ADVANCE(262);
      if (lookahead == '"') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == '(') ADVANCE(262);
      if (lookahead == ')') ADVANCE(478);
      if (lookahead == '?') ADVANCE(378);
      if (lookahead == '`') ADVANCE(402);
      if (lookahead != 0) ADVANCE(398);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(430);
      if (lookahead == ' ') ADVANCE(264);
      if (lookahead == '"') ADVANCE(401);
      if (lookahead == '\'') ADVANCE(402);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == ')') ADVANCE(487);
      if (lookahead == '?') ADVANCE(379);
      if (lookahead == '`') ADVANCE(399);
      if (lookahead != 0) ADVANCE(399);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(430);
      if (lookahead == ' ') ADVANCE(266);
      if (lookahead == '"') ADVANCE(400);
      if (lookahead == '\'') ADVANCE(400);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ')') ADVANCE(488);
      if (lookahead == '?') ADVANCE(380);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead != 0) ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(430);
      if (lookahead == ' ') ADVANCE(268);
      if (lookahead == '"') ADVANCE(401);
      if (lookahead == '\'') ADVANCE(403);
      if (lookahead == '(') ADVANCE(268);
      if (lookahead == ')') ADVANCE(489);
      if (lookahead == '?') ADVANCE(381);
      if (lookahead == '`') ADVANCE(401);
      if (lookahead != 0) ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(430);
      if (lookahead == ' ') ADVANCE(270);
      if (lookahead == '"') ADVANCE(403);
      if (lookahead == '\'') ADVANCE(402);
      if (lookahead == '(') ADVANCE(270);
      if (lookahead == ')') ADVANCE(490);
      if (lookahead == '?') ADVANCE(382);
      if (lookahead == '`') ADVANCE(402);
      if (lookahead != 0) ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(430);
      if (lookahead == ' ') ADVANCE(272);
      if (lookahead == '"') ADVANCE(403);
      if (lookahead == '\'') ADVANCE(403);
      if (lookahead == '(') ADVANCE(272);
      if (lookahead == ')') ADVANCE(491);
      if (lookahead == '?') ADVANCE(383);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead != 0) ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(440);
      if (lookahead == ' ') ADVANCE(404);
      if (lookahead == '"') ADVANCE(404);
      if (lookahead == '\'') ADVANCE(407);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '?') ADVANCE(247);
      if (lookahead == '`') ADVANCE(408);
      if (lookahead != 0) ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(440);
      if (lookahead == ' ') ADVANCE(405);
      if (lookahead == '"') ADVANCE(407);
      if (lookahead == '\'') ADVANCE(405);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == '?') ADVANCE(249);
      if (lookahead == '`') ADVANCE(409);
      if (lookahead != 0) ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(440);
      if (lookahead == ' ') ADVANCE(406);
      if (lookahead == '"') ADVANCE(408);
      if (lookahead == '\'') ADVANCE(409);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '?') ADVANCE(251);
      if (lookahead == '`') ADVANCE(406);
      if (lookahead != 0) ADVANCE(406);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(440);
      if (lookahead == ' ') ADVANCE(407);
      if (lookahead == '"') ADVANCE(407);
      if (lookahead == '\'') ADVANCE(407);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '?') ADVANCE(253);
      if (lookahead == '`') ADVANCE(410);
      if (lookahead != 0) ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(440);
      if (lookahead == ' ') ADVANCE(408);
      if (lookahead == '"') ADVANCE(408);
      if (lookahead == '\'') ADVANCE(410);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '?') ADVANCE(255);
      if (lookahead == '`') ADVANCE(408);
      if (lookahead != 0) ADVANCE(408);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(440);
      if (lookahead == ' ') ADVANCE(409);
      if (lookahead == '"') ADVANCE(410);
      if (lookahead == '\'') ADVANCE(409);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '?') ADVANCE(257);
      if (lookahead == '`') ADVANCE(409);
      if (lookahead != 0) ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(440);
      if (lookahead == ' ') ADVANCE(410);
      if (lookahead == '"') ADVANCE(410);
      if (lookahead == '\'') ADVANCE(410);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '?') ADVANCE(259);
      if (lookahead == '`') ADVANCE(410);
      if (lookahead != 0) ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(441);
      if (lookahead == ' ') ADVANCE(411);
      if (lookahead == '"') ADVANCE(411);
      if (lookahead == '\'') ADVANCE(414);
      if (lookahead == ')') ADVANCE(457);
      if (lookahead == '?') ADVANCE(261);
      if (lookahead == '`') ADVANCE(415);
      if (lookahead != 0) ADVANCE(411);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(441);
      if (lookahead == ' ') ADVANCE(412);
      if (lookahead == '"') ADVANCE(414);
      if (lookahead == '\'') ADVANCE(412);
      if (lookahead == ')') ADVANCE(458);
      if (lookahead == '?') ADVANCE(263);
      if (lookahead == '`') ADVANCE(416);
      if (lookahead != 0) ADVANCE(412);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(441);
      if (lookahead == ' ') ADVANCE(413);
      if (lookahead == '"') ADVANCE(415);
      if (lookahead == '\'') ADVANCE(416);
      if (lookahead == ')') ADVANCE(459);
      if (lookahead == '?') ADVANCE(265);
      if (lookahead == '`') ADVANCE(413);
      if (lookahead != 0) ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(441);
      if (lookahead == ' ') ADVANCE(414);
      if (lookahead == '"') ADVANCE(414);
      if (lookahead == '\'') ADVANCE(414);
      if (lookahead == ')') ADVANCE(460);
      if (lookahead == '?') ADVANCE(267);
      if (lookahead == '`') ADVANCE(417);
      if (lookahead != 0) ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(441);
      if (lookahead == ' ') ADVANCE(415);
      if (lookahead == '"') ADVANCE(415);
      if (lookahead == '\'') ADVANCE(417);
      if (lookahead == ')') ADVANCE(461);
      if (lookahead == '?') ADVANCE(269);
      if (lookahead == '`') ADVANCE(415);
      if (lookahead != 0) ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(441);
      if (lookahead == ' ') ADVANCE(416);
      if (lookahead == '"') ADVANCE(417);
      if (lookahead == '\'') ADVANCE(416);
      if (lookahead == ')') ADVANCE(462);
      if (lookahead == '?') ADVANCE(271);
      if (lookahead == '`') ADVANCE(416);
      if (lookahead != 0) ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(441);
      if (lookahead == ' ') ADVANCE(417);
      if (lookahead == '"') ADVANCE(417);
      if (lookahead == '\'') ADVANCE(417);
      if (lookahead == ')') ADVANCE(463);
      if (lookahead == '?') ADVANCE(273);
      if (lookahead == '`') ADVANCE(417);
      if (lookahead != 0) ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(89);
      if (lookahead == '(') ADVANCE(424);
      if (lookahead == '[') ADVANCE(444);
      if (lookahead == ']') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(418);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(89);
      if (lookahead == ']') ADVANCE(452);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(419);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == '(') ADVANCE(424);
      if (lookahead == ',') ADVANCE(420);
      if (lookahead == '}') ADVANCE(420);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == ',') ADVANCE(421);
      if (lookahead == '}') ADVANCE(421);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(69);
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == '`') ADVANCE(424);
      if (lookahead != 0) ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == '(') ADVANCE(424);
      if (lookahead == ')') ADVANCE(453);
      if (lookahead != 0) ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == ')') ADVANCE(453);
      if (lookahead != 0) ADVANCE(424);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(425);
      if (lookahead == '"') ADVANCE(246);
      if (lookahead == '\'') ADVANCE(248);
      if (lookahead == '?') ADVANCE(452);
      if (lookahead == '`') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(425);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(425);
      if (lookahead == '"') ADVANCE(274);
      if (lookahead == '\'') ADVANCE(276);
      if (lookahead == '(') ADVANCE(429);
      if (lookahead == '?') ADVANCE(444);
      if (lookahead == '`') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(425);
      if (lookahead == '(') ADVANCE(429);
      if (lookahead == '?') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(426);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(425);
      if (lookahead == '?') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(425);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(429);
      if (lookahead == '"') ADVANCE(260);
      if (lookahead == '\'') ADVANCE(262);
      if (lookahead == ')') ADVANCE(453);
      if (lookahead == '?') ADVANCE(424);
      if (lookahead == '`') ADVANCE(264);
      if (lookahead != 0) ADVANCE(429);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(429);
      if (lookahead == '"') ADVANCE(397);
      if (lookahead == '\'') ADVANCE(398);
      if (lookahead == '(') ADVANCE(429);
      if (lookahead == ')') ADVANCE(453);
      if (lookahead == '?') ADVANCE(423);
      if (lookahead == '`') ADVANCE(399);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(429);
      if (lookahead == ')') ADVANCE(453);
      if (lookahead == '?') ADVANCE(424);
      if (lookahead != 0) ADVANCE(429);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(432);
      if (lookahead == '"') ADVANCE(291);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '?') ADVANCE(419);
      if (lookahead == ']') ADVANCE(425);
      if (lookahead == '`') ADVANCE(293);
      if (lookahead == '(' ||
          lookahead == '[') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(432);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(432);
      if (lookahead == '"') ADVANCE(298);
      if (lookahead == '\'') ADVANCE(299);
      if (lookahead == '(') ADVANCE(429);
      if (lookahead == '?') ADVANCE(418);
      if (lookahead == '[') ADVANCE(426);
      if (lookahead == ']') ADVANCE(426);
      if (lookahead == '`') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(433);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(434);
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '\'') ADVANCE(306);
      if (lookahead == ',') ADVANCE(434);
      if (lookahead == '?') ADVANCE(421);
      if (lookahead == '`') ADVANCE(307);
      if (lookahead == '}') ADVANCE(434);
      if (lookahead == '(' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(434);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(434);
      if (lookahead == '"') ADVANCE(312);
      if (lookahead == '\'') ADVANCE(313);
      if (lookahead == '(') ADVANCE(429);
      if (lookahead == ',') ADVANCE(435);
      if (lookahead == '?') ADVANCE(420);
      if (lookahead == '`') ADVANCE(314);
      if (lookahead == '}') ADVANCE(435);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(437);
      if (lookahead == '"') ADVANCE(288);
      if (lookahead == '\'') ADVANCE(289);
      if (lookahead == '(') ADVANCE(438);
      if (lookahead == ')') ADVANCE(91);
      if (lookahead == '?') ADVANCE(445);
      if (lookahead == '`') ADVANCE(278);
      if (lookahead != 0) ADVANCE(436);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(437);
      if (lookahead == '"') ADVANCE(384);
      if (lookahead == '\'') ADVANCE(385);
      if (lookahead == ')') ADVANCE(91);
      if (lookahead == '?') ADVANCE(446);
      if (lookahead == '`') ADVANCE(250);
      if (lookahead != 0) ADVANCE(437);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(438);
      if (lookahead == '"') ADVANCE(394);
      if (lookahead == '\'') ADVANCE(395);
      if (lookahead == ')') ADVANCE(486);
      if (lookahead == '?') ADVANCE(422);
      if (lookahead == '`') ADVANCE(264);
      if (lookahead != 0) ADVANCE(438);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(440);
      if (lookahead == '"') ADVANCE(387);
      if (lookahead == '\'') ADVANCE(388);
      if (lookahead == '(') ADVANCE(441);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '?') ADVANCE(427);
      if (lookahead == '`') ADVANCE(389);
      if (lookahead != 0) ADVANCE(439);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(440);
      if (lookahead == '"') ADVANCE(404);
      if (lookahead == '\'') ADVANCE(405);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '?') ADVANCE(428);
      if (lookahead == '`') ADVANCE(406);
      if (lookahead != 0) ADVANCE(440);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(441);
      if (lookahead == '"') ADVANCE(411);
      if (lookahead == '\'') ADVANCE(412);
      if (lookahead == ')') ADVANCE(485);
      if (lookahead == '?') ADVANCE(431);
      if (lookahead == '`') ADVANCE(413);
      if (lookahead != 0) ADVANCE(441);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '(') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(444);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '(') ADVANCE(422);
      if (lookahead == '`') ADVANCE(444);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(91);
      if (lookahead != 0) ADVANCE(445);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '`') ADVANCE(452);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(91);
      if (lookahead != 0) ADVANCE(446);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '`') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym__ternary_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(452);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"') ADVANCE(212);
      if (lookahead == '`') ADVANCE(505);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(213);
      if (lookahead == '`') ADVANCE(506);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(214);
      if (lookahead == '`') ADVANCE(510);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '?') ADVANCE(43);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(230);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '?') ADVANCE(45);
      if (lookahead == '`') ADVANCE(231);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(232);
      if (lookahead == '?') ADVANCE(46);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(233);
      if (lookahead == '?') ADVANCE(47);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(234);
      if (lookahead == '?') ADVANCE(48);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(235);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(89);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == '[') ADVANCE(483);
      if (lookahead == ']') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(464);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ',') ADVANCE(465);
      if (lookahead == '}') ADVANCE(465);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(465);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(70);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(485);
      if (lookahead == '?') ADVANCE(471);
      if (lookahead != 0) ADVANCE(466);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(87);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '?') ADVANCE(472);
      if (lookahead == '[') ADVANCE(481);
      if (lookahead == ']') ADVANCE(481);
      if (lookahead != 0) ADVANCE(467);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == ',') ADVANCE(468);
      if (lookahead == '?') ADVANCE(473);
      if (lookahead == '}') ADVANCE(468);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(481);
      if (lookahead != 0) ADVANCE(468);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(453);
      if (lookahead != 0) ADVANCE(469);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(425);
      if (lookahead == '(') ADVANCE(429);
      if (lookahead == '?') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(426);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(429);
      if (lookahead == '(') ADVANCE(429);
      if (lookahead == ')') ADVANCE(453);
      if (lookahead == '?') ADVANCE(469);
      if (lookahead != 0) ADVANCE(430);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(432);
      if (lookahead == '(') ADVANCE(429);
      if (lookahead == '?') ADVANCE(464);
      if (lookahead == '[') ADVANCE(426);
      if (lookahead == ']') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(433);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(434);
      if (lookahead == '(') ADVANCE(429);
      if (lookahead == ',') ADVANCE(435);
      if (lookahead == '?') ADVANCE(465);
      if (lookahead == '}') ADVANCE(435);
      if (lookahead == '[' ||
          lookahead == ']') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(435);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '"') ADVANCE(647);
      if (lookahead == '\'') ADVANCE(643);
      if (lookahead == '(') ADVANCE(71);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == '?') ADVANCE(476);
      if (lookahead == '[') ADVANCE(467);
      if (lookahead == '`') ADVANCE(482);
      if (lookahead == '{') ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(474);
      if (lookahead != 0) ADVANCE(481);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(437);
      if (lookahead == '(') ADVANCE(438);
      if (lookahead == ')') ADVANCE(91);
      if (lookahead == '?') ADVANCE(479);
      if (lookahead == '`') ADVANCE(426);
      if (lookahead != 0) ADVANCE(436);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == ' ') ADVANCE(440);
      if (lookahead == '(') ADVANCE(441);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '?') ADVANCE(483);
      if (lookahead != 0) ADVANCE(439);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == '`') ADVANCE(483);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(91);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '?') ADVANCE(483);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(86);
      if (lookahead != 0) ADVANCE(481);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '?') ADVANCE(470);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(86);
      if (lookahead != 0) ADVANCE(481);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == '?') ADVANCE(475);
      if (lookahead == '`') ADVANCE(481);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(85);
      if (lookahead != 0) ADVANCE(482);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(483);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '?') ADVANCE(92);
      if (lookahead == '`') ADVANCE(509);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '?') ADVANCE(149);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '`') ADVANCE(501);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '`') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym__variable_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '}') ADVANCE(492);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(62);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(223);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '}') ADVANCE(493);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(66);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '`') ADVANCE(224);
      if (lookahead == '}') ADVANCE(494);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(93);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(225);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(495);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(137);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(226);
      if (lookahead == ',') ADVANCE(16);
      if (lookahead == '}') ADVANCE(496);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(138);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(227);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '}') ADVANCE(497);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(139);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(228);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '}') ADVANCE(498);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(141);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '}') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(75);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__object_attribute_value_token1);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '?') ADVANCE(77);
      if (lookahead == '}') ADVANCE(500);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(86);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"') ADVANCE(239);
      if (lookahead == ')') ADVANCE(477);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(240);
      if (lookahead == ')') ADVANCE(478);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(242);
      if (lookahead == ')') ADVANCE(488);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '"') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == ')') ADVANCE(485);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == ')') ADVANCE(453);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '?') ADVANCE(149);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__template_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '\'') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '?') ADVANCE(149);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '`') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym__array_attribute_value_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(141);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym__attribute_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(520);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '-') ADVANCE(524);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '-') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '-') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '.') ADVANCE(203);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(599);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(620);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(603);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(621);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(622);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(609);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(596);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(611);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(597);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(614);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(598);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(617);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(179);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(562);
      if (lookahead == 'o') ADVANCE(537);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(581);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(605);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(563);
      if (lookahead == 'o') ADVANCE(539);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(582);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(606);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(565);
      if (lookahead == 'o') ADVANCE(541);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(585);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(608);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(170);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(171);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(531);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(533);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(172);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(534);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(552);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(549);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'h') ADVANCE(558);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(590);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(591);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(594);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(550);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(613);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(616);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(553);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(619);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(559);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(602);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(607);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(610);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(187);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(572);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(575);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(188);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(577);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(537);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(539);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(541);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(612);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(615);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(544);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(547);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(618);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(556);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(569);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(570);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(571);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(542);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(166);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(167);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(543);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(545);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(168);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(600);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(601);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(546);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(604);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(554);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(555);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(623);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(527);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(192);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(624);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(528);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(193);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(625);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(529);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(573);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(574);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(576);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(592);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(593);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'y') ADVANCE(595);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(629);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(632);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(629);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(630);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(633);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(631);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(634);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(632);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(635);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token1);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token2);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_angular_attribute_name_token3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(640);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(641);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '?') ADVANCE(470);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(86);
      if (lookahead != 0) ADVANCE(481);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(645);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(645);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '?') ADVANCE(470);
      if (lookahead == ' ' ||
          lookahead == ')') ADVANCE(86);
      if (lookahead != 0) ADVANCE(481);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(649);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_quoted_javascript_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(649);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '{') ADVANCE(651);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '{') ADVANCE(651);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '{') ADVANCE(667);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(669);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '!') ADVANCE(657);
      if (lookahead == '#') ADVANCE(663);
      if (lookahead == '-') ADVANCE(686);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == '/') ADVANCE(656);
      if (lookahead == '=') ADVANCE(200);
      if (lookahead == 'c') ADVANCE(535);
      if (lookahead == 'd') ADVANCE(589);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(564);
      if (lookahead == 's') ADVANCE(540);
      if (lookahead == 'u') ADVANCE(586);
      if (lookahead == '|') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '!') ADVANCE(657);
      if (lookahead == '#') ADVANCE(663);
      if (lookahead == '-') ADVANCE(686);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == '/') ADVANCE(656);
      if (lookahead == '=') ADVANCE(200);
      if (lookahead == 'c') ADVANCE(535);
      if (lookahead == 'd') ADVANCE(557);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(564);
      if (lookahead == 's') ADVANCE(540);
      if (lookahead == 'u') ADVANCE(586);
      if (lookahead == 'w') ADVANCE(568);
      if (lookahead == '|') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '/') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '=') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == 'f') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == 'i') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(662);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(634);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__comment_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__comment_content);
      if (eof) ADVANCE(154);
      if (lookahead == '!') ADVANCE(657);
      if (lookahead == '#') ADVANCE(663);
      if (lookahead == '-') ADVANCE(686);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == '/') ADVANCE(656);
      if (lookahead == '=') ADVANCE(200);
      if (lookahead == 'c') ADVANCE(535);
      if (lookahead == 'd') ADVANCE(589);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(564);
      if (lookahead == 's') ADVANCE(540);
      if (lookahead == 'u') ADVANCE(586);
      if (lookahead == '|') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__comment_content);
      if (eof) ADVANCE(154);
      if (lookahead == '!') ADVANCE(657);
      if (lookahead == '#') ADVANCE(663);
      if (lookahead == '-') ADVANCE(686);
      if (lookahead == '.') ADVANCE(662);
      if (lookahead == '/') ADVANCE(656);
      if (lookahead == '=') ADVANCE(200);
      if (lookahead == 'c') ADVANCE(535);
      if (lookahead == 'd') ADVANCE(557);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(564);
      if (lookahead == 's') ADVANCE(540);
      if (lookahead == 'u') ADVANCE(586);
      if (lookahead == 'w') ADVANCE(568);
      if (lookahead == '|') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__delimited_javascript);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(672);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__delimited_javascript);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '}') ADVANCE(672);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(676);
      if (lookahead == '#') ADVANCE(682);
      if (lookahead == '-') ADVANCE(685);
      if (lookahead == '.') ADVANCE(681);
      if (lookahead == '/') ADVANCE(675);
      if (lookahead == '=') ADVANCE(199);
      if (lookahead == 'c') ADVANCE(532);
      if (lookahead == 'd') ADVANCE(551);
      if (lookahead == 'e') ADVANCE(579);
      if (lookahead == 'i') ADVANCE(561);
      if (lookahead == 's') ADVANCE(538);
      if (lookahead == 'u') ADVANCE(584);
      if (lookahead == 'w') ADVANCE(566);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '!') ADVANCE(676);
      if (lookahead == '#') ADVANCE(682);
      if (lookahead == '-') ADVANCE(685);
      if (lookahead == '.') ADVANCE(681);
      if (lookahead == '/') ADVANCE(675);
      if (lookahead == '=') ADVANCE(199);
      if (lookahead == 'c') ADVANCE(532);
      if (lookahead == 'd') ADVANCE(588);
      if (lookahead == 'e') ADVANCE(579);
      if (lookahead == 'i') ADVANCE(561);
      if (lookahead == 's') ADVANCE(538);
      if (lookahead == 'u') ADVANCE(584);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '/') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '=') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'f') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == 'i') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(681);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(633);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__un_delimited_javascript_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(683);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(664);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_unbuffered_code_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(687);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 152},
  [2] = {.lex_state = 153, .external_lex_state = 2},
  [3] = {.lex_state = 153, .external_lex_state = 2},
  [4] = {.lex_state = 153, .external_lex_state = 2},
  [5] = {.lex_state = 153, .external_lex_state = 2},
  [6] = {.lex_state = 153, .external_lex_state = 2},
  [7] = {.lex_state = 152, .external_lex_state = 2},
  [8] = {.lex_state = 152, .external_lex_state = 2},
  [9] = {.lex_state = 152, .external_lex_state = 2},
  [10] = {.lex_state = 152, .external_lex_state = 3},
  [11] = {.lex_state = 152, .external_lex_state = 3},
  [12] = {.lex_state = 152, .external_lex_state = 2},
  [13] = {.lex_state = 152, .external_lex_state = 3},
  [14] = {.lex_state = 152, .external_lex_state = 3},
  [15] = {.lex_state = 152, .external_lex_state = 3},
  [16] = {.lex_state = 152, .external_lex_state = 3},
  [17] = {.lex_state = 152, .external_lex_state = 2},
  [18] = {.lex_state = 152, .external_lex_state = 3},
  [19] = {.lex_state = 152, .external_lex_state = 3},
  [20] = {.lex_state = 152, .external_lex_state = 3},
  [21] = {.lex_state = 152, .external_lex_state = 3},
  [22] = {.lex_state = 152, .external_lex_state = 3},
  [23] = {.lex_state = 152, .external_lex_state = 3},
  [24] = {.lex_state = 152, .external_lex_state = 3},
  [25] = {.lex_state = 152, .external_lex_state = 3},
  [26] = {.lex_state = 152, .external_lex_state = 3},
  [27] = {.lex_state = 152, .external_lex_state = 2},
  [28] = {.lex_state = 152, .external_lex_state = 3},
  [29] = {.lex_state = 152, .external_lex_state = 3},
  [30] = {.lex_state = 152, .external_lex_state = 3},
  [31] = {.lex_state = 152, .external_lex_state = 3},
  [32] = {.lex_state = 152, .external_lex_state = 3},
  [33] = {.lex_state = 152, .external_lex_state = 3},
  [34] = {.lex_state = 152, .external_lex_state = 3},
  [35] = {.lex_state = 152, .external_lex_state = 3},
  [36] = {.lex_state = 152, .external_lex_state = 3},
  [37] = {.lex_state = 152, .external_lex_state = 3},
  [38] = {.lex_state = 152, .external_lex_state = 3},
  [39] = {.lex_state = 152, .external_lex_state = 3},
  [40] = {.lex_state = 152, .external_lex_state = 3},
  [41] = {.lex_state = 152},
  [42] = {.lex_state = 152},
  [43] = {.lex_state = 153, .external_lex_state = 2},
  [44] = {.lex_state = 153, .external_lex_state = 2},
  [45] = {.lex_state = 153, .external_lex_state = 2},
  [46] = {.lex_state = 153, .external_lex_state = 1},
  [47] = {.lex_state = 150, .external_lex_state = 2},
  [48] = {.lex_state = 153, .external_lex_state = 2},
  [49] = {.lex_state = 153, .external_lex_state = 1},
  [50] = {.lex_state = 666, .external_lex_state = 2},
  [51] = {.lex_state = 153, .external_lex_state = 1},
  [52] = {.lex_state = 666, .external_lex_state = 2},
  [53] = {.lex_state = 153, .external_lex_state = 1},
  [54] = {.lex_state = 666, .external_lex_state = 2},
  [55] = {.lex_state = 153, .external_lex_state = 1},
  [56] = {.lex_state = 153, .external_lex_state = 1},
  [57] = {.lex_state = 150, .external_lex_state = 2},
  [58] = {.lex_state = 153, .external_lex_state = 1},
  [59] = {.lex_state = 153, .external_lex_state = 4},
  [60] = {.lex_state = 153, .external_lex_state = 1},
  [61] = {.lex_state = 666, .external_lex_state = 2},
  [62] = {.lex_state = 150, .external_lex_state = 2},
  [63] = {.lex_state = 153, .external_lex_state = 1},
  [64] = {.lex_state = 150, .external_lex_state = 2},
  [65] = {.lex_state = 153, .external_lex_state = 1},
  [66] = {.lex_state = 153, .external_lex_state = 1},
  [67] = {.lex_state = 150, .external_lex_state = 2},
  [68] = {.lex_state = 153, .external_lex_state = 4},
  [69] = {.lex_state = 153, .external_lex_state = 4},
  [70] = {.lex_state = 666, .external_lex_state = 2},
  [71] = {.lex_state = 666, .external_lex_state = 2},
  [72] = {.lex_state = 153, .external_lex_state = 1},
  [73] = {.lex_state = 153, .external_lex_state = 4},
  [74] = {.lex_state = 153},
  [75] = {.lex_state = 153, .external_lex_state = 4},
  [76] = {.lex_state = 153, .external_lex_state = 1},
  [77] = {.lex_state = 153, .external_lex_state = 1},
  [78] = {.lex_state = 153, .external_lex_state = 4},
  [79] = {.lex_state = 666, .external_lex_state = 2},
  [80] = {.lex_state = 153, .external_lex_state = 1},
  [81] = {.lex_state = 153, .external_lex_state = 4},
  [82] = {.lex_state = 153, .external_lex_state = 1},
  [83] = {.lex_state = 666, .external_lex_state = 2},
  [84] = {.lex_state = 153},
  [85] = {.lex_state = 153, .external_lex_state = 1},
  [86] = {.lex_state = 665, .external_lex_state = 2},
  [87] = {.lex_state = 153, .external_lex_state = 2},
  [88] = {.lex_state = 153, .external_lex_state = 2},
  [89] = {.lex_state = 153, .external_lex_state = 2},
  [90] = {.lex_state = 153, .external_lex_state = 2},
  [91] = {.lex_state = 153, .external_lex_state = 4},
  [92] = {.lex_state = 153, .external_lex_state = 1},
  [93] = {.lex_state = 153, .external_lex_state = 2},
  [94] = {.lex_state = 151, .external_lex_state = 2},
  [95] = {.lex_state = 153, .external_lex_state = 2},
  [96] = {.lex_state = 153, .external_lex_state = 2},
  [97] = {.lex_state = 152, .external_lex_state = 1},
  [98] = {.lex_state = 153, .external_lex_state = 2},
  [99] = {.lex_state = 152, .external_lex_state = 1},
  [100] = {.lex_state = 151, .external_lex_state = 2},
  [101] = {.lex_state = 152, .external_lex_state = 1},
  [102] = {.lex_state = 153, .external_lex_state = 2},
  [103] = {.lex_state = 665, .external_lex_state = 2},
  [104] = {.lex_state = 666, .external_lex_state = 2},
  [105] = {.lex_state = 153, .external_lex_state = 2},
  [106] = {.lex_state = 665, .external_lex_state = 2},
  [107] = {.lex_state = 153, .external_lex_state = 1},
  [108] = {.lex_state = 153, .external_lex_state = 2},
  [109] = {.lex_state = 153, .external_lex_state = 2},
  [110] = {.lex_state = 153, .external_lex_state = 2},
  [111] = {.lex_state = 153, .external_lex_state = 2},
  [112] = {.lex_state = 153, .external_lex_state = 2},
  [113] = {.lex_state = 666, .external_lex_state = 2},
  [114] = {.lex_state = 153, .external_lex_state = 2},
  [115] = {.lex_state = 153, .external_lex_state = 2},
  [116] = {.lex_state = 153, .external_lex_state = 2},
  [117] = {.lex_state = 153, .external_lex_state = 2},
  [118] = {.lex_state = 152, .external_lex_state = 1},
  [119] = {.lex_state = 150, .external_lex_state = 2},
  [120] = {.lex_state = 153, .external_lex_state = 2},
  [121] = {.lex_state = 153, .external_lex_state = 2},
  [122] = {.lex_state = 152, .external_lex_state = 1},
  [123] = {.lex_state = 153, .external_lex_state = 2},
  [124] = {.lex_state = 153, .external_lex_state = 2},
  [125] = {.lex_state = 152, .external_lex_state = 1},
  [126] = {.lex_state = 153, .external_lex_state = 1},
  [127] = {.lex_state = 153, .external_lex_state = 2},
  [128] = {.lex_state = 153, .external_lex_state = 2},
  [129] = {.lex_state = 153, .external_lex_state = 5},
  [130] = {.lex_state = 153, .external_lex_state = 2},
  [131] = {.lex_state = 153, .external_lex_state = 2},
  [132] = {.lex_state = 153, .external_lex_state = 5},
  [133] = {.lex_state = 153, .external_lex_state = 5},
  [134] = {.lex_state = 665, .external_lex_state = 2},
  [135] = {.lex_state = 153, .external_lex_state = 2},
  [136] = {.lex_state = 665, .external_lex_state = 2},
  [137] = {.lex_state = 153, .external_lex_state = 5},
  [138] = {.lex_state = 153, .external_lex_state = 2},
  [139] = {.lex_state = 153, .external_lex_state = 5},
  [140] = {.lex_state = 665, .external_lex_state = 2},
  [141] = {.lex_state = 153, .external_lex_state = 5},
  [142] = {.lex_state = 151, .external_lex_state = 2},
  [143] = {.lex_state = 153, .external_lex_state = 5},
  [144] = {.lex_state = 151, .external_lex_state = 5},
  [145] = {.lex_state = 153, .external_lex_state = 5},
  [146] = {.lex_state = 151, .external_lex_state = 2},
  [147] = {.lex_state = 153, .external_lex_state = 5},
  [148] = {.lex_state = 153, .external_lex_state = 5},
  [149] = {.lex_state = 153, .external_lex_state = 5},
  [150] = {.lex_state = 153, .external_lex_state = 2},
  [151] = {.lex_state = 153, .external_lex_state = 2},
  [152] = {.lex_state = 153, .external_lex_state = 5},
  [153] = {.lex_state = 152, .external_lex_state = 1},
  [154] = {.lex_state = 153, .external_lex_state = 5},
  [155] = {.lex_state = 153, .external_lex_state = 2},
  [156] = {.lex_state = 153, .external_lex_state = 2},
  [157] = {.lex_state = 153, .external_lex_state = 2},
  [158] = {.lex_state = 153, .external_lex_state = 2},
  [159] = {.lex_state = 153, .external_lex_state = 2},
  [160] = {.lex_state = 153, .external_lex_state = 2},
  [161] = {.lex_state = 153, .external_lex_state = 2},
  [162] = {.lex_state = 153, .external_lex_state = 2},
  [163] = {.lex_state = 152, .external_lex_state = 1},
  [164] = {.lex_state = 152, .external_lex_state = 1},
  [165] = {.lex_state = 151, .external_lex_state = 5},
  [166] = {.lex_state = 152, .external_lex_state = 1},
  [167] = {.lex_state = 152, .external_lex_state = 1},
  [168] = {.lex_state = 153, .external_lex_state = 5},
  [169] = {.lex_state = 153, .external_lex_state = 5},
  [170] = {.lex_state = 152, .external_lex_state = 1},
  [171] = {.lex_state = 151, .external_lex_state = 2},
  [172] = {.lex_state = 152, .external_lex_state = 1},
  [173] = {.lex_state = 153, .external_lex_state = 2},
  [174] = {.lex_state = 153, .external_lex_state = 2},
  [175] = {.lex_state = 153, .external_lex_state = 2},
  [176] = {.lex_state = 665, .external_lex_state = 2},
  [177] = {.lex_state = 153, .external_lex_state = 2},
  [178] = {.lex_state = 153, .external_lex_state = 2},
  [179] = {.lex_state = 153, .external_lex_state = 2},
  [180] = {.lex_state = 152, .external_lex_state = 1},
  [181] = {.lex_state = 153, .external_lex_state = 2},
  [182] = {.lex_state = 153, .external_lex_state = 2},
  [183] = {.lex_state = 153, .external_lex_state = 2},
  [184] = {.lex_state = 153, .external_lex_state = 2},
  [185] = {.lex_state = 665, .external_lex_state = 2},
  [186] = {.lex_state = 152, .external_lex_state = 1},
  [187] = {.lex_state = 153, .external_lex_state = 2},
  [188] = {.lex_state = 153},
  [189] = {.lex_state = 152, .external_lex_state = 6},
  [190] = {.lex_state = 152, .external_lex_state = 2},
  [191] = {.lex_state = 152, .external_lex_state = 2},
  [192] = {.lex_state = 152, .external_lex_state = 4},
  [193] = {.lex_state = 152, .external_lex_state = 2},
  [194] = {.lex_state = 152, .external_lex_state = 2},
  [195] = {.lex_state = 152, .external_lex_state = 2},
  [196] = {.lex_state = 665, .external_lex_state = 3},
  [197] = {.lex_state = 152, .external_lex_state = 2},
  [198] = {.lex_state = 665},
  [199] = {.lex_state = 152, .external_lex_state = 2},
  [200] = {.lex_state = 152, .external_lex_state = 2},
  [201] = {.lex_state = 152, .external_lex_state = 2},
  [202] = {.lex_state = 152, .external_lex_state = 2},
  [203] = {.lex_state = 152, .external_lex_state = 2},
  [204] = {.lex_state = 152, .external_lex_state = 2},
  [205] = {.lex_state = 152, .external_lex_state = 2},
  [206] = {.lex_state = 152, .external_lex_state = 6},
  [207] = {.lex_state = 152, .external_lex_state = 2},
  [208] = {.lex_state = 152, .external_lex_state = 6},
  [209] = {.lex_state = 151, .external_lex_state = 2},
  [210] = {.lex_state = 152, .external_lex_state = 4},
  [211] = {.lex_state = 665, .external_lex_state = 2},
  [212] = {.lex_state = 152, .external_lex_state = 2},
  [213] = {.lex_state = 665, .external_lex_state = 2},
  [214] = {.lex_state = 665},
  [215] = {.lex_state = 152, .external_lex_state = 6},
  [216] = {.lex_state = 152, .external_lex_state = 1},
  [217] = {.lex_state = 152, .external_lex_state = 2},
  [218] = {.lex_state = 152, .external_lex_state = 2},
  [219] = {.lex_state = 665},
  [220] = {.lex_state = 152, .external_lex_state = 1},
  [221] = {.lex_state = 152, .external_lex_state = 2},
  [222] = {.lex_state = 152, .external_lex_state = 1},
  [223] = {.lex_state = 152, .external_lex_state = 6},
  [224] = {.lex_state = 152, .external_lex_state = 2},
  [225] = {.lex_state = 152, .external_lex_state = 2},
  [226] = {.lex_state = 152, .external_lex_state = 2},
  [227] = {.lex_state = 152, .external_lex_state = 6},
  [228] = {.lex_state = 151, .external_lex_state = 5},
  [229] = {.lex_state = 152, .external_lex_state = 2},
  [230] = {.lex_state = 152, .external_lex_state = 2},
  [231] = {.lex_state = 152, .external_lex_state = 2},
  [232] = {.lex_state = 152, .external_lex_state = 5},
  [233] = {.lex_state = 152, .external_lex_state = 2},
  [234] = {.lex_state = 152, .external_lex_state = 2},
  [235] = {.lex_state = 152, .external_lex_state = 2},
  [236] = {.lex_state = 152, .external_lex_state = 2},
  [237] = {.lex_state = 152, .external_lex_state = 2},
  [238] = {.lex_state = 152, .external_lex_state = 5},
  [239] = {.lex_state = 152, .external_lex_state = 2},
  [240] = {.lex_state = 152, .external_lex_state = 6},
  [241] = {.lex_state = 152, .external_lex_state = 2},
  [242] = {.lex_state = 665},
  [243] = {.lex_state = 152, .external_lex_state = 5},
  [244] = {.lex_state = 152, .external_lex_state = 2},
  [245] = {.lex_state = 152, .external_lex_state = 2},
  [246] = {.lex_state = 152, .external_lex_state = 5},
  [247] = {.lex_state = 152, .external_lex_state = 2},
  [248] = {.lex_state = 152, .external_lex_state = 2},
  [249] = {.lex_state = 152, .external_lex_state = 2},
  [250] = {.lex_state = 152, .external_lex_state = 6},
  [251] = {.lex_state = 152, .external_lex_state = 2},
  [252] = {.lex_state = 152, .external_lex_state = 2},
  [253] = {.lex_state = 152, .external_lex_state = 2},
  [254] = {.lex_state = 152, .external_lex_state = 2},
  [255] = {.lex_state = 152, .external_lex_state = 2},
  [256] = {.lex_state = 152, .external_lex_state = 2},
  [257] = {.lex_state = 152, .external_lex_state = 2},
  [258] = {.lex_state = 152, .external_lex_state = 2},
  [259] = {.lex_state = 152},
  [260] = {.lex_state = 152},
  [261] = {.lex_state = 152},
  [262] = {.lex_state = 152},
  [263] = {.lex_state = 152},
  [264] = {.lex_state = 152},
  [265] = {.lex_state = 152},
  [266] = {.lex_state = 152},
  [267] = {.lex_state = 152},
  [268] = {.lex_state = 152},
  [269] = {.lex_state = 152},
  [270] = {.lex_state = 152},
  [271] = {.lex_state = 152},
  [272] = {.lex_state = 152},
  [273] = {.lex_state = 152},
  [274] = {.lex_state = 152},
  [275] = {.lex_state = 152},
  [276] = {.lex_state = 152},
  [277] = {.lex_state = 152},
  [278] = {.lex_state = 152},
  [279] = {.lex_state = 152},
  [280] = {.lex_state = 54, .external_lex_state = 3},
  [281] = {.lex_state = 54, .external_lex_state = 3},
  [282] = {.lex_state = 54, .external_lex_state = 3},
  [283] = {.lex_state = 54, .external_lex_state = 3},
  [284] = {.lex_state = 54, .external_lex_state = 3},
  [285] = {.lex_state = 54, .external_lex_state = 3},
  [286] = {.lex_state = 54, .external_lex_state = 3},
  [287] = {.lex_state = 54, .external_lex_state = 3},
  [288] = {.lex_state = 54, .external_lex_state = 3},
  [289] = {.lex_state = 54, .external_lex_state = 3},
  [290] = {.lex_state = 54, .external_lex_state = 3},
  [291] = {.lex_state = 54, .external_lex_state = 3},
  [292] = {.lex_state = 54, .external_lex_state = 3},
  [293] = {.lex_state = 54, .external_lex_state = 3},
  [294] = {.lex_state = 55},
  [295] = {.lex_state = 55},
  [296] = {.lex_state = 64},
  [297] = {.lex_state = 64},
  [298] = {.lex_state = 54, .external_lex_state = 3},
  [299] = {.lex_state = 64},
  [300] = {.lex_state = 55, .external_lex_state = 3},
  [301] = {.lex_state = 55, .external_lex_state = 3},
  [302] = {.lex_state = 55, .external_lex_state = 3},
  [303] = {.lex_state = 55, .external_lex_state = 3},
  [304] = {.lex_state = 55, .external_lex_state = 3},
  [305] = {.lex_state = 55, .external_lex_state = 3},
  [306] = {.lex_state = 55, .external_lex_state = 3},
  [307] = {.lex_state = 55, .external_lex_state = 3},
  [308] = {.lex_state = 55, .external_lex_state = 3},
  [309] = {.lex_state = 55, .external_lex_state = 3},
  [310] = {.lex_state = 55, .external_lex_state = 3},
  [311] = {.lex_state = 55, .external_lex_state = 3},
  [312] = {.lex_state = 55, .external_lex_state = 3},
  [313] = {.lex_state = 55, .external_lex_state = 3},
  [314] = {.lex_state = 11, .external_lex_state = 5},
  [315] = {.lex_state = 11, .external_lex_state = 5},
  [316] = {.lex_state = 11, .external_lex_state = 5},
  [317] = {.lex_state = 11, .external_lex_state = 5},
  [318] = {.lex_state = 11, .external_lex_state = 5},
  [319] = {.lex_state = 11, .external_lex_state = 5},
  [320] = {.lex_state = 11, .external_lex_state = 5},
  [321] = {.lex_state = 11, .external_lex_state = 5},
  [322] = {.lex_state = 11, .external_lex_state = 5},
  [323] = {.lex_state = 60},
  [324] = {.lex_state = 11, .external_lex_state = 5},
  [325] = {.lex_state = 11, .external_lex_state = 5},
  [326] = {.lex_state = 11, .external_lex_state = 5},
  [327] = {.lex_state = 11, .external_lex_state = 5},
  [328] = {.lex_state = 11, .external_lex_state = 5},
  [329] = {.lex_state = 11, .external_lex_state = 5},
  [330] = {.lex_state = 63, .external_lex_state = 2},
  [331] = {.lex_state = 63, .external_lex_state = 1},
  [332] = {.lex_state = 11, .external_lex_state = 3},
  [333] = {.lex_state = 63, .external_lex_state = 2},
  [334] = {.lex_state = 11, .external_lex_state = 3},
  [335] = {.lex_state = 11},
  [336] = {.lex_state = 11, .external_lex_state = 3},
  [337] = {.lex_state = 11},
  [338] = {.lex_state = 63, .external_lex_state = 1},
  [339] = {.lex_state = 11, .external_lex_state = 3},
  [340] = {.lex_state = 63, .external_lex_state = 2},
  [341] = {.lex_state = 11},
  [342] = {.lex_state = 11, .external_lex_state = 3},
  [343] = {.lex_state = 11},
  [344] = {.lex_state = 11, .external_lex_state = 3},
  [345] = {.lex_state = 63, .external_lex_state = 1},
  [346] = {.lex_state = 11, .external_lex_state = 3},
  [347] = {.lex_state = 63, .external_lex_state = 2},
  [348] = {.lex_state = 11, .external_lex_state = 3},
  [349] = {.lex_state = 11, .external_lex_state = 3},
  [350] = {.lex_state = 11, .external_lex_state = 3},
  [351] = {.lex_state = 63, .external_lex_state = 2},
  [352] = {.lex_state = 11, .external_lex_state = 3},
  [353] = {.lex_state = 11, .external_lex_state = 3},
  [354] = {.lex_state = 11, .external_lex_state = 3},
  [355] = {.lex_state = 11, .external_lex_state = 3},
  [356] = {.lex_state = 63, .external_lex_state = 1},
  [357] = {.lex_state = 63, .external_lex_state = 2},
  [358] = {.lex_state = 11, .external_lex_state = 3},
  [359] = {.lex_state = 11, .external_lex_state = 3},
  [360] = {.lex_state = 11, .external_lex_state = 3},
  [361] = {.lex_state = 11, .external_lex_state = 3},
  [362] = {.lex_state = 63, .external_lex_state = 2},
  [363] = {.lex_state = 11, .external_lex_state = 3},
  [364] = {.lex_state = 11, .external_lex_state = 3},
  [365] = {.lex_state = 11},
  [366] = {.lex_state = 63, .external_lex_state = 2},
  [367] = {.lex_state = 11, .external_lex_state = 3},
  [368] = {.lex_state = 11, .external_lex_state = 3},
  [369] = {.lex_state = 11},
  [370] = {.lex_state = 11},
  [371] = {.lex_state = 11},
  [372] = {.lex_state = 63, .external_lex_state = 2},
  [373] = {.lex_state = 11, .external_lex_state = 3},
  [374] = {.lex_state = 11, .external_lex_state = 3},
  [375] = {.lex_state = 11, .external_lex_state = 3},
  [376] = {.lex_state = 11, .external_lex_state = 3},
  [377] = {.lex_state = 11},
  [378] = {.lex_state = 11, .external_lex_state = 3},
  [379] = {.lex_state = 63, .external_lex_state = 1},
  [380] = {.lex_state = 11, .external_lex_state = 3},
  [381] = {.lex_state = 11},
  [382] = {.lex_state = 11, .external_lex_state = 3},
  [383] = {.lex_state = 11},
  [384] = {.lex_state = 11, .external_lex_state = 3},
  [385] = {.lex_state = 11, .external_lex_state = 3},
  [386] = {.lex_state = 11},
  [387] = {.lex_state = 11},
  [388] = {.lex_state = 11, .external_lex_state = 3},
  [389] = {.lex_state = 11, .external_lex_state = 3},
  [390] = {.lex_state = 63, .external_lex_state = 1},
  [391] = {.lex_state = 11},
  [392] = {.lex_state = 11},
  [393] = {.lex_state = 63, .external_lex_state = 1},
  [394] = {.lex_state = 11},
  [395] = {.lex_state = 63, .external_lex_state = 3},
  [396] = {.lex_state = 11},
  [397] = {.lex_state = 63, .external_lex_state = 3},
  [398] = {.lex_state = 55},
  [399] = {.lex_state = 11},
  [400] = {.lex_state = 63, .external_lex_state = 3},
  [401] = {.lex_state = 11},
  [402] = {.lex_state = 11},
  [403] = {.lex_state = 55, .external_lex_state = 3},
  [404] = {.lex_state = 11},
  [405] = {.lex_state = 11},
  [406] = {.lex_state = 11},
  [407] = {.lex_state = 11},
  [408] = {.lex_state = 11},
  [409] = {.lex_state = 11},
  [410] = {.lex_state = 11},
  [411] = {.lex_state = 63, .external_lex_state = 3},
  [412] = {.lex_state = 11},
  [413] = {.lex_state = 63, .external_lex_state = 3},
  [414] = {.lex_state = 11},
  [415] = {.lex_state = 11, .external_lex_state = 3},
  [416] = {.lex_state = 63, .external_lex_state = 3},
  [417] = {.lex_state = 63, .external_lex_state = 3},
  [418] = {.lex_state = 55, .external_lex_state = 3},
  [419] = {.lex_state = 11},
  [420] = {.lex_state = 11},
  [421] = {.lex_state = 11},
  [422] = {.lex_state = 63, .external_lex_state = 3},
  [423] = {.lex_state = 11},
  [424] = {.lex_state = 55, .external_lex_state = 3},
  [425] = {.lex_state = 11},
  [426] = {.lex_state = 11},
  [427] = {.lex_state = 64},
  [428] = {.lex_state = 63, .external_lex_state = 2},
  [429] = {.lex_state = 11, .external_lex_state = 3},
  [430] = {.lex_state = 63},
  [431] = {.lex_state = 63},
  [432] = {.lex_state = 63, .external_lex_state = 2},
  [433] = {.lex_state = 11, .external_lex_state = 3},
  [434] = {.lex_state = 63, .external_lex_state = 2},
  [435] = {.lex_state = 63},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 63, .external_lex_state = 2},
  [438] = {.lex_state = 63, .external_lex_state = 2},
  [439] = {.lex_state = 63, .external_lex_state = 2},
  [440] = {.lex_state = 63, .external_lex_state = 2},
  [441] = {.lex_state = 63, .external_lex_state = 2},
  [442] = {.lex_state = 63, .external_lex_state = 2},
  [443] = {.lex_state = 63, .external_lex_state = 2},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 63, .external_lex_state = 2},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 63, .external_lex_state = 2},
  [448] = {.lex_state = 11, .external_lex_state = 3},
  [449] = {.lex_state = 55},
  [450] = {.lex_state = 54},
  [451] = {.lex_state = 63},
  [452] = {.lex_state = 63},
  [453] = {.lex_state = 63},
  [454] = {.lex_state = 63},
  [455] = {.lex_state = 63},
  [456] = {.lex_state = 11, .external_lex_state = 3},
  [457] = {.lex_state = 50, .external_lex_state = 3},
  [458] = {.lex_state = 11, .external_lex_state = 3},
  [459] = {.lex_state = 11, .external_lex_state = 5},
  [460] = {.lex_state = 63},
  [461] = {.lex_state = 63},
  [462] = {.lex_state = 53, .external_lex_state = 2},
  [463] = {.lex_state = 63},
  [464] = {.lex_state = 53, .external_lex_state = 2},
  [465] = {.lex_state = 53, .external_lex_state = 2},
  [466] = {.lex_state = 63},
  [467] = {.lex_state = 63},
  [468] = {.lex_state = 53, .external_lex_state = 2},
  [469] = {.lex_state = 63},
  [470] = {.lex_state = 11, .external_lex_state = 3},
  [471] = {.lex_state = 50, .external_lex_state = 3},
  [472] = {.lex_state = 63},
  [473] = {.lex_state = 50, .external_lex_state = 3},
  [474] = {.lex_state = 63},
  [475] = {.lex_state = 63},
  [476] = {.lex_state = 63},
  [477] = {.lex_state = 63},
  [478] = {.lex_state = 54},
  [479] = {.lex_state = 53, .external_lex_state = 2},
  [480] = {.lex_state = 63},
  [481] = {.lex_state = 63},
  [482] = {.lex_state = 63},
  [483] = {.lex_state = 63},
  [484] = {.lex_state = 50, .external_lex_state = 3},
  [485] = {.lex_state = 63},
  [486] = {.lex_state = 50, .external_lex_state = 3},
  [487] = {.lex_state = 53, .external_lex_state = 2},
  [488] = {.lex_state = 50},
  [489] = {.lex_state = 50},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 50},
  [492] = {.lex_state = 54},
  [493] = {.lex_state = 50},
  [494] = {.lex_state = 54},
  [495] = {.lex_state = 50},
  [496] = {.lex_state = 54},
  [497] = {.lex_state = 54},
  [498] = {.lex_state = 54},
  [499] = {.lex_state = 0, .external_lex_state = 3},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 54},
  [502] = {.lex_state = 50},
  [503] = {.lex_state = 50},
  [504] = {.lex_state = 54},
  [505] = {.lex_state = 53, .external_lex_state = 3},
  [506] = {.lex_state = 54},
  [507] = {.lex_state = 53, .external_lex_state = 3},
  [508] = {.lex_state = 50},
  [509] = {.lex_state = 50},
  [510] = {.lex_state = 54},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 54},
  [514] = {.lex_state = 0, .external_lex_state = 3},
  [515] = {.lex_state = 50},
  [516] = {.lex_state = 50},
  [517] = {.lex_state = 54},
  [518] = {.lex_state = 54},
  [519] = {.lex_state = 53, .external_lex_state = 3},
  [520] = {.lex_state = 53, .external_lex_state = 3},
  [521] = {.lex_state = 50},
  [522] = {.lex_state = 50},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0, .external_lex_state = 3},
  [525] = {.lex_state = 54},
  [526] = {.lex_state = 54},
  [527] = {.lex_state = 50},
  [528] = {.lex_state = 50},
  [529] = {.lex_state = 50},
  [530] = {.lex_state = 53, .external_lex_state = 2},
  [531] = {.lex_state = 50},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 53, .external_lex_state = 3},
  [534] = {.lex_state = 54},
  [535] = {.lex_state = 53, .external_lex_state = 2},
  [536] = {.lex_state = 50},
  [537] = {.lex_state = 50},
  [538] = {.lex_state = 54},
  [539] = {.lex_state = 661},
  [540] = {.lex_state = 661},
  [541] = {.lex_state = 661},
  [542] = {.lex_state = 661, .external_lex_state = 3},
  [543] = {.lex_state = 0, .external_lex_state = 6},
  [544] = {.lex_state = 0, .external_lex_state = 6},
  [545] = {.lex_state = 54},
  [546] = {.lex_state = 50},
  [547] = {.lex_state = 50},
  [548] = {.lex_state = 50},
  [549] = {.lex_state = 50},
  [550] = {.lex_state = 661},
  [551] = {.lex_state = 661},
  [552] = {.lex_state = 0, .external_lex_state = 6},
  [553] = {.lex_state = 661},
  [554] = {.lex_state = 0, .external_lex_state = 3},
  [555] = {.lex_state = 661},
  [556] = {.lex_state = 661},
  [557] = {.lex_state = 661, .external_lex_state = 3},
  [558] = {.lex_state = 0, .external_lex_state = 6},
  [559] = {.lex_state = 0, .external_lex_state = 6},
  [560] = {.lex_state = 661, .external_lex_state = 3},
  [561] = {.lex_state = 65},
  [562] = {.lex_state = 61},
  [563] = {.lex_state = 0, .external_lex_state = 6},
  [564] = {.lex_state = 0, .external_lex_state = 6},
  [565] = {.lex_state = 0, .external_lex_state = 6},
  [566] = {.lex_state = 0, .external_lex_state = 6},
  [567] = {.lex_state = 61},
  [568] = {.lex_state = 661, .external_lex_state = 3},
  [569] = {.lex_state = 65},
  [570] = {.lex_state = 50},
  [571] = {.lex_state = 661},
  [572] = {.lex_state = 0, .external_lex_state = 6},
  [573] = {.lex_state = 661, .external_lex_state = 3},
  [574] = {.lex_state = 661},
  [575] = {.lex_state = 0, .external_lex_state = 3},
  [576] = {.lex_state = 0, .external_lex_state = 3},
  [577] = {.lex_state = 0, .external_lex_state = 3},
  [578] = {.lex_state = 50},
  [579] = {.lex_state = 0, .external_lex_state = 6},
  [580] = {.lex_state = 0, .external_lex_state = 3},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0, .external_lex_state = 6},
  [583] = {.lex_state = 0, .external_lex_state = 3},
  [584] = {.lex_state = 0, .external_lex_state = 3},
  [585] = {.lex_state = 687},
  [586] = {.lex_state = 0, .external_lex_state = 3},
  [587] = {.lex_state = 0, .external_lex_state = 3},
  [588] = {.lex_state = 0, .external_lex_state = 6},
  [589] = {.lex_state = 0, .external_lex_state = 6},
  [590] = {.lex_state = 51},
  [591] = {.lex_state = 51},
  [592] = {.lex_state = 0, .external_lex_state = 3},
  [593] = {.lex_state = 0, .external_lex_state = 3},
  [594] = {.lex_state = 687},
  [595] = {.lex_state = 0, .external_lex_state = 3},
  [596] = {.lex_state = 0, .external_lex_state = 3},
  [597] = {.lex_state = 0, .external_lex_state = 3},
  [598] = {.lex_state = 0, .external_lex_state = 3},
  [599] = {.lex_state = 0, .external_lex_state = 6},
  [600] = {.lex_state = 0, .external_lex_state = 3},
  [601] = {.lex_state = 0, .external_lex_state = 3},
  [602] = {.lex_state = 0, .external_lex_state = 3},
  [603] = {.lex_state = 0, .external_lex_state = 3},
  [604] = {.lex_state = 0, .external_lex_state = 3},
  [605] = {.lex_state = 687},
  [606] = {.lex_state = 0, .external_lex_state = 3},
  [607] = {.lex_state = 0, .external_lex_state = 3},
  [608] = {.lex_state = 0, .external_lex_state = 3},
  [609] = {.lex_state = 0, .external_lex_state = 3},
  [610] = {.lex_state = 0, .external_lex_state = 6},
  [611] = {.lex_state = 687},
  [612] = {.lex_state = 0, .external_lex_state = 6},
  [613] = {.lex_state = 0, .external_lex_state = 3},
  [614] = {.lex_state = 0, .external_lex_state = 3},
  [615] = {.lex_state = 0, .external_lex_state = 6},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 152},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 52},
  [621] = {.lex_state = 0, .external_lex_state = 6},
  [622] = {.lex_state = 687},
  [623] = {.lex_state = 0, .external_lex_state = 6},
  [624] = {.lex_state = 142},
  [625] = {.lex_state = 0, .external_lex_state = 6},
  [626] = {.lex_state = 0, .external_lex_state = 3},
  [627] = {.lex_state = 0, .external_lex_state = 3},
  [628] = {.lex_state = 0, .external_lex_state = 3},
  [629] = {.lex_state = 0, .external_lex_state = 3},
  [630] = {.lex_state = 0, .external_lex_state = 6},
  [631] = {.lex_state = 0, .external_lex_state = 6},
  [632] = {.lex_state = 0, .external_lex_state = 6},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0, .external_lex_state = 3},
  [635] = {.lex_state = 0, .external_lex_state = 6},
  [636] = {.lex_state = 0, .external_lex_state = 6},
  [637] = {.lex_state = 0, .external_lex_state = 6},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0, .external_lex_state = 6},
  [640] = {.lex_state = 0, .external_lex_state = 6},
  [641] = {.lex_state = 0, .external_lex_state = 6},
  [642] = {.lex_state = 0, .external_lex_state = 3},
  [643] = {.lex_state = 0, .external_lex_state = 6},
  [644] = {.lex_state = 0, .external_lex_state = 6},
  [645] = {.lex_state = 0, .external_lex_state = 6},
  [646] = {.lex_state = 0, .external_lex_state = 6},
  [647] = {.lex_state = 0, .external_lex_state = 6},
  [648] = {.lex_state = 0, .external_lex_state = 6},
  [649] = {.lex_state = 0, .external_lex_state = 6},
  [650] = {.lex_state = 50},
  [651] = {.lex_state = 0, .external_lex_state = 3},
  [652] = {.lex_state = 0, .external_lex_state = 3},
  [653] = {.lex_state = 0, .external_lex_state = 3},
  [654] = {.lex_state = 50},
  [655] = {.lex_state = 0, .external_lex_state = 3},
  [656] = {.lex_state = 0, .external_lex_state = 3},
  [657] = {.lex_state = 0, .external_lex_state = 3},
  [658] = {.lex_state = 0, .external_lex_state = 3},
  [659] = {.lex_state = 0, .external_lex_state = 3},
  [660] = {.lex_state = 0, .external_lex_state = 3},
  [661] = {.lex_state = 0, .external_lex_state = 3},
  [662] = {.lex_state = 0, .external_lex_state = 3},
  [663] = {.lex_state = 0, .external_lex_state = 3},
  [664] = {.lex_state = 0, .external_lex_state = 3},
  [665] = {.lex_state = 0, .external_lex_state = 3},
  [666] = {.lex_state = 0, .external_lex_state = 3},
  [667] = {.lex_state = 0, .external_lex_state = 3},
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
    [anon_sym_unless] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_elseif] = ACTIONS(1),
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
    [sym_source_file] = STATE(581),
    [sym_doctype] = STATE(41),
    [sym_pipe] = STATE(41),
    [sym_conditional] = STATE(41),
    [sym_case] = STATE(41),
    [sym_unescaped_buffered_code] = STATE(41),
    [sym_buffered_code] = STATE(41),
    [sym_script_block] = STATE(41),
    [sym_tag] = STATE(41),
    [sym_comment] = STATE(41),
    [sym_unbuffered_code] = STATE(41),
    [aux_sym_source_file_repeat1] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_doctype] = ACTIONS(5),
    [anon_sym_PIPE] = ACTIONS(7),
    [anon_sym_unless] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_elseif] = ACTIONS(11),
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
  [0] = 18,
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
    ACTIONS(79), 1,
      sym__newline,
    ACTIONS(33), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(41), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(53), 2,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(73), 2,
      sym_class,
      sym_id,
    STATE(2), 12,
      sym_doctype,
      sym_pipe,
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
  [70] = 19,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 1,
      anon_sym_doctype,
    ACTIONS(86), 1,
      anon_sym_PIPE,
    ACTIONS(90), 1,
      anon_sym_elseif,
    ACTIONS(92), 1,
      anon_sym_else,
    ACTIONS(94), 1,
      anon_sym_case,
    ACTIONS(98), 1,
      anon_sym_BANG_EQ,
    ACTIONS(100), 1,
      anon_sym_EQ,
    ACTIONS(102), 1,
      anon_sym_script_DOT,
    ACTIONS(104), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(106), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(108), 1,
      sym_tag_name,
    ACTIONS(112), 1,
      anon_sym_DASH,
    ACTIONS(114), 1,
      sym__newline,
    ACTIONS(116), 1,
      sym__dedent,
    ACTIONS(88), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(96), 2,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(110), 2,
      sym_class,
      sym_id,
    STATE(2), 12,
      sym_doctype,
      sym_pipe,
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
  [142] = 19,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 1,
      anon_sym_doctype,
    ACTIONS(86), 1,
      anon_sym_PIPE,
    ACTIONS(90), 1,
      anon_sym_elseif,
    ACTIONS(92), 1,
      anon_sym_else,
    ACTIONS(94), 1,
      anon_sym_case,
    ACTIONS(98), 1,
      anon_sym_BANG_EQ,
    ACTIONS(100), 1,
      anon_sym_EQ,
    ACTIONS(102), 1,
      anon_sym_script_DOT,
    ACTIONS(104), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(106), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(108), 1,
      sym_tag_name,
    ACTIONS(112), 1,
      anon_sym_DASH,
    ACTIONS(114), 1,
      sym__newline,
    ACTIONS(118), 1,
      sym__dedent,
    ACTIONS(88), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(96), 2,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(110), 2,
      sym_class,
      sym_id,
    STATE(2), 12,
      sym_doctype,
      sym_pipe,
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
  [214] = 18,
    ACTIONS(120), 1,
      anon_sym_doctype,
    ACTIONS(122), 1,
      anon_sym_PIPE,
    ACTIONS(126), 1,
      anon_sym_elseif,
    ACTIONS(128), 1,
      anon_sym_else,
    ACTIONS(130), 1,
      anon_sym_case,
    ACTIONS(132), 1,
      anon_sym_BANG_EQ,
    ACTIONS(134), 1,
      anon_sym_EQ,
    ACTIONS(136), 1,
      anon_sym_script_DOT,
    ACTIONS(138), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(140), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(142), 1,
      sym_tag_name,
    ACTIONS(146), 1,
      anon_sym_DASH,
    ACTIONS(148), 1,
      sym__newline,
    ACTIONS(150), 1,
      sym__dedent,
    ACTIONS(96), 2,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(124), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(144), 2,
      sym_class,
      sym_id,
    STATE(6), 12,
      sym_doctype,
      sym_pipe,
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
  [283] = 18,
    ACTIONS(33), 1,
      sym__dedent,
    ACTIONS(152), 1,
      anon_sym_doctype,
    ACTIONS(155), 1,
      anon_sym_PIPE,
    ACTIONS(161), 1,
      anon_sym_elseif,
    ACTIONS(164), 1,
      anon_sym_else,
    ACTIONS(167), 1,
      anon_sym_case,
    ACTIONS(170), 1,
      anon_sym_BANG_EQ,
    ACTIONS(173), 1,
      anon_sym_EQ,
    ACTIONS(176), 1,
      anon_sym_script_DOT,
    ACTIONS(179), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(182), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(185), 1,
      sym_tag_name,
    ACTIONS(191), 1,
      anon_sym_DASH,
    ACTIONS(194), 1,
      sym__newline,
    ACTIONS(53), 2,
      anon_sym_when,
      anon_sym_default,
    ACTIONS(158), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(188), 2,
      sym_class,
      sym_id,
    STATE(6), 12,
      sym_doctype,
      sym_pipe,
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
  [352] = 17,
    ACTIONS(50), 1,
      anon_sym_case,
    ACTIONS(197), 1,
      anon_sym_doctype,
    ACTIONS(200), 1,
      anon_sym_PIPE,
    ACTIONS(206), 1,
      anon_sym_elseif,
    ACTIONS(209), 1,
      anon_sym_else,
    ACTIONS(212), 1,
      anon_sym_BANG_EQ,
    ACTIONS(215), 1,
      anon_sym_EQ,
    ACTIONS(218), 1,
      anon_sym_script_DOT,
    ACTIONS(221), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(224), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(227), 1,
      sym_tag_name,
    ACTIONS(233), 1,
      anon_sym_DASH,
    ACTIONS(236), 1,
      sym__newline,
    ACTIONS(33), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(203), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(230), 2,
      sym_class,
      sym_id,
    STATE(7), 12,
      sym_doctype,
      sym_pipe,
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
  [418] = 18,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 1,
      anon_sym_case,
    ACTIONS(239), 1,
      anon_sym_doctype,
    ACTIONS(241), 1,
      anon_sym_PIPE,
    ACTIONS(245), 1,
      anon_sym_elseif,
    ACTIONS(247), 1,
      anon_sym_else,
    ACTIONS(249), 1,
      anon_sym_BANG_EQ,
    ACTIONS(251), 1,
      anon_sym_EQ,
    ACTIONS(253), 1,
      anon_sym_script_DOT,
    ACTIONS(255), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(257), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(259), 1,
      sym_tag_name,
    ACTIONS(263), 1,
      anon_sym_DASH,
    ACTIONS(265), 1,
      sym__newline,
    ACTIONS(267), 1,
      sym__dedent,
    ACTIONS(243), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(261), 2,
      sym_class,
      sym_id,
    STATE(7), 12,
      sym_doctype,
      sym_pipe,
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
  [486] = 18,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 1,
      anon_sym_case,
    ACTIONS(239), 1,
      anon_sym_doctype,
    ACTIONS(241), 1,
      anon_sym_PIPE,
    ACTIONS(245), 1,
      anon_sym_elseif,
    ACTIONS(247), 1,
      anon_sym_else,
    ACTIONS(249), 1,
      anon_sym_BANG_EQ,
    ACTIONS(251), 1,
      anon_sym_EQ,
    ACTIONS(253), 1,
      anon_sym_script_DOT,
    ACTIONS(255), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(257), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(259), 1,
      sym_tag_name,
    ACTIONS(263), 1,
      anon_sym_DASH,
    ACTIONS(265), 1,
      sym__newline,
    ACTIONS(269), 1,
      sym__dedent,
    ACTIONS(243), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(261), 2,
      sym_class,
      sym_id,
    STATE(7), 12,
      sym_doctype,
      sym_pipe,
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
  [554] = 17,
    ACTIONS(84), 1,
      anon_sym_doctype,
    ACTIONS(86), 1,
      anon_sym_PIPE,
    ACTIONS(90), 1,
      anon_sym_elseif,
    ACTIONS(92), 1,
      anon_sym_else,
    ACTIONS(94), 1,
      anon_sym_case,
    ACTIONS(98), 1,
      anon_sym_BANG_EQ,
    ACTIONS(100), 1,
      anon_sym_EQ,
    ACTIONS(102), 1,
      anon_sym_script_DOT,
    ACTIONS(104), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(106), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(108), 1,
      sym_tag_name,
    ACTIONS(112), 1,
      anon_sym_DASH,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(273), 1,
      sym__newline,
    ACTIONS(88), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(110), 2,
      sym_class,
      sym_id,
    STATE(4), 12,
      sym_doctype,
      sym_pipe,
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
  [619] = 17,
    ACTIONS(94), 1,
      anon_sym_case,
    ACTIONS(239), 1,
      anon_sym_doctype,
    ACTIONS(241), 1,
      anon_sym_PIPE,
    ACTIONS(245), 1,
      anon_sym_elseif,
    ACTIONS(247), 1,
      anon_sym_else,
    ACTIONS(249), 1,
      anon_sym_BANG_EQ,
    ACTIONS(251), 1,
      anon_sym_EQ,
    ACTIONS(253), 1,
      anon_sym_script_DOT,
    ACTIONS(255), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(257), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(259), 1,
      sym_tag_name,
    ACTIONS(263), 1,
      anon_sym_DASH,
    ACTIONS(275), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      sym__newline,
    ACTIONS(243), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(261), 2,
      sym_class,
      sym_id,
    STATE(8), 12,
      sym_doctype,
      sym_pipe,
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
  [684] = 17,
    ACTIONS(130), 1,
      anon_sym_case,
    ACTIONS(279), 1,
      anon_sym_doctype,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(285), 1,
      anon_sym_elseif,
    ACTIONS(287), 1,
      anon_sym_else,
    ACTIONS(289), 1,
      anon_sym_BANG_EQ,
    ACTIONS(291), 1,
      anon_sym_EQ,
    ACTIONS(293), 1,
      anon_sym_script_DOT,
    ACTIONS(295), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(297), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(299), 1,
      sym_tag_name,
    ACTIONS(303), 1,
      anon_sym_DASH,
    ACTIONS(305), 1,
      sym__newline,
    ACTIONS(307), 1,
      sym__dedent,
    ACTIONS(283), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(301), 2,
      sym_class,
      sym_id,
    STATE(27), 12,
      sym_doctype,
      sym_pipe,
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
  [749] = 17,
    ACTIONS(84), 1,
      anon_sym_doctype,
    ACTIONS(86), 1,
      anon_sym_PIPE,
    ACTIONS(90), 1,
      anon_sym_elseif,
    ACTIONS(92), 1,
      anon_sym_else,
    ACTIONS(94), 1,
      anon_sym_case,
    ACTIONS(98), 1,
      anon_sym_BANG_EQ,
    ACTIONS(100), 1,
      anon_sym_EQ,
    ACTIONS(102), 1,
      anon_sym_script_DOT,
    ACTIONS(104), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(106), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(108), 1,
      sym_tag_name,
    ACTIONS(112), 1,
      anon_sym_DASH,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      sym__newline,
    ACTIONS(88), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(110), 2,
      sym_class,
      sym_id,
    STATE(3), 12,
      sym_doctype,
      sym_pipe,
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
  [814] = 17,
    ACTIONS(130), 1,
      anon_sym_case,
    ACTIONS(279), 1,
      anon_sym_doctype,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(285), 1,
      anon_sym_elseif,
    ACTIONS(287), 1,
      anon_sym_else,
    ACTIONS(289), 1,
      anon_sym_BANG_EQ,
    ACTIONS(291), 1,
      anon_sym_EQ,
    ACTIONS(293), 1,
      anon_sym_script_DOT,
    ACTIONS(295), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(297), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(299), 1,
      sym_tag_name,
    ACTIONS(303), 1,
      anon_sym_DASH,
    ACTIONS(313), 1,
      anon_sym_DOT,
    ACTIONS(315), 1,
      sym__newline,
    ACTIONS(283), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(301), 2,
      sym_class,
      sym_id,
    STATE(12), 12,
      sym_doctype,
      sym_pipe,
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
  [879] = 17,
    ACTIONS(94), 1,
      anon_sym_case,
    ACTIONS(239), 1,
      anon_sym_doctype,
    ACTIONS(241), 1,
      anon_sym_PIPE,
    ACTIONS(245), 1,
      anon_sym_elseif,
    ACTIONS(247), 1,
      anon_sym_else,
    ACTIONS(249), 1,
      anon_sym_BANG_EQ,
    ACTIONS(251), 1,
      anon_sym_EQ,
    ACTIONS(253), 1,
      anon_sym_script_DOT,
    ACTIONS(255), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(257), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(259), 1,
      sym_tag_name,
    ACTIONS(263), 1,
      anon_sym_DASH,
    ACTIONS(317), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      sym__newline,
    ACTIONS(243), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(261), 2,
      sym_class,
      sym_id,
    STATE(9), 12,
      sym_doctype,
      sym_pipe,
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
  [944] = 17,
    ACTIONS(84), 1,
      anon_sym_doctype,
    ACTIONS(86), 1,
      anon_sym_PIPE,
    ACTIONS(90), 1,
      anon_sym_elseif,
    ACTIONS(92), 1,
      anon_sym_else,
    ACTIONS(94), 1,
      anon_sym_case,
    ACTIONS(98), 1,
      anon_sym_BANG_EQ,
    ACTIONS(100), 1,
      anon_sym_EQ,
    ACTIONS(102), 1,
      anon_sym_script_DOT,
    ACTIONS(104), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(106), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(108), 1,
      sym_tag_name,
    ACTIONS(112), 1,
      anon_sym_DASH,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(273), 1,
      sym__newline,
    ACTIONS(88), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(110), 2,
      sym_class,
      sym_id,
    STATE(4), 12,
      sym_doctype,
      sym_pipe,
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
  [1009] = 17,
    ACTIONS(130), 1,
      anon_sym_case,
    ACTIONS(279), 1,
      anon_sym_doctype,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(285), 1,
      anon_sym_elseif,
    ACTIONS(287), 1,
      anon_sym_else,
    ACTIONS(289), 1,
      anon_sym_BANG_EQ,
    ACTIONS(291), 1,
      anon_sym_EQ,
    ACTIONS(293), 1,
      anon_sym_script_DOT,
    ACTIONS(295), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(297), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(299), 1,
      sym_tag_name,
    ACTIONS(303), 1,
      anon_sym_DASH,
    ACTIONS(305), 1,
      sym__newline,
    ACTIONS(321), 1,
      sym__dedent,
    ACTIONS(283), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(301), 2,
      sym_class,
      sym_id,
    STATE(27), 12,
      sym_doctype,
      sym_pipe,
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
  [1074] = 17,
    ACTIONS(120), 1,
      anon_sym_doctype,
    ACTIONS(122), 1,
      anon_sym_PIPE,
    ACTIONS(126), 1,
      anon_sym_elseif,
    ACTIONS(128), 1,
      anon_sym_else,
    ACTIONS(130), 1,
      anon_sym_case,
    ACTIONS(132), 1,
      anon_sym_BANG_EQ,
    ACTIONS(134), 1,
      anon_sym_EQ,
    ACTIONS(136), 1,
      anon_sym_script_DOT,
    ACTIONS(138), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(140), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(142), 1,
      sym_tag_name,
    ACTIONS(146), 1,
      anon_sym_DASH,
    ACTIONS(323), 1,
      anon_sym_DOT,
    ACTIONS(325), 1,
      sym__newline,
    ACTIONS(124), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(144), 2,
      sym_class,
      sym_id,
    STATE(5), 12,
      sym_doctype,
      sym_pipe,
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
  [1139] = 17,
    ACTIONS(120), 1,
      anon_sym_doctype,
    ACTIONS(122), 1,
      anon_sym_PIPE,
    ACTIONS(126), 1,
      anon_sym_elseif,
    ACTIONS(128), 1,
      anon_sym_else,
    ACTIONS(130), 1,
      anon_sym_case,
    ACTIONS(132), 1,
      anon_sym_BANG_EQ,
    ACTIONS(134), 1,
      anon_sym_EQ,
    ACTIONS(136), 1,
      anon_sym_script_DOT,
    ACTIONS(138), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(140), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(142), 1,
      sym_tag_name,
    ACTIONS(146), 1,
      anon_sym_DASH,
    ACTIONS(323), 1,
      anon_sym_DOT,
    ACTIONS(325), 1,
      sym__newline,
    ACTIONS(124), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(144), 2,
      sym_class,
      sym_id,
    STATE(5), 12,
      sym_doctype,
      sym_pipe,
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
  [1204] = 17,
    ACTIONS(130), 1,
      anon_sym_case,
    ACTIONS(279), 1,
      anon_sym_doctype,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(285), 1,
      anon_sym_elseif,
    ACTIONS(287), 1,
      anon_sym_else,
    ACTIONS(289), 1,
      anon_sym_BANG_EQ,
    ACTIONS(291), 1,
      anon_sym_EQ,
    ACTIONS(293), 1,
      anon_sym_script_DOT,
    ACTIONS(295), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(297), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(299), 1,
      sym_tag_name,
    ACTIONS(303), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      sym__newline,
    ACTIONS(283), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(301), 2,
      sym_class,
      sym_id,
    STATE(17), 12,
      sym_doctype,
      sym_pipe,
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
  [1269] = 17,
    ACTIONS(84), 1,
      anon_sym_doctype,
    ACTIONS(86), 1,
      anon_sym_PIPE,
    ACTIONS(90), 1,
      anon_sym_elseif,
    ACTIONS(92), 1,
      anon_sym_else,
    ACTIONS(94), 1,
      anon_sym_case,
    ACTIONS(98), 1,
      anon_sym_BANG_EQ,
    ACTIONS(100), 1,
      anon_sym_EQ,
    ACTIONS(102), 1,
      anon_sym_script_DOT,
    ACTIONS(104), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(106), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(108), 1,
      sym_tag_name,
    ACTIONS(112), 1,
      anon_sym_DASH,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(273), 1,
      sym__newline,
    ACTIONS(88), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(110), 2,
      sym_class,
      sym_id,
    STATE(4), 12,
      sym_doctype,
      sym_pipe,
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
  [1334] = 17,
    ACTIONS(94), 1,
      anon_sym_case,
    ACTIONS(239), 1,
      anon_sym_doctype,
    ACTIONS(241), 1,
      anon_sym_PIPE,
    ACTIONS(245), 1,
      anon_sym_elseif,
    ACTIONS(247), 1,
      anon_sym_else,
    ACTIONS(249), 1,
      anon_sym_BANG_EQ,
    ACTIONS(251), 1,
      anon_sym_EQ,
    ACTIONS(253), 1,
      anon_sym_script_DOT,
    ACTIONS(255), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(257), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(259), 1,
      sym_tag_name,
    ACTIONS(263), 1,
      anon_sym_DASH,
    ACTIONS(275), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      sym__newline,
    ACTIONS(243), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(261), 2,
      sym_class,
      sym_id,
    STATE(8), 12,
      sym_doctype,
      sym_pipe,
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
  [1399] = 17,
    ACTIONS(130), 1,
      anon_sym_case,
    ACTIONS(279), 1,
      anon_sym_doctype,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(285), 1,
      anon_sym_elseif,
    ACTIONS(287), 1,
      anon_sym_else,
    ACTIONS(289), 1,
      anon_sym_BANG_EQ,
    ACTIONS(291), 1,
      anon_sym_EQ,
    ACTIONS(293), 1,
      anon_sym_script_DOT,
    ACTIONS(295), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(297), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(299), 1,
      sym_tag_name,
    ACTIONS(303), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      sym__newline,
    ACTIONS(283), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(301), 2,
      sym_class,
      sym_id,
    STATE(17), 12,
      sym_doctype,
      sym_pipe,
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
  [1464] = 17,
    ACTIONS(130), 1,
      anon_sym_case,
    ACTIONS(279), 1,
      anon_sym_doctype,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(285), 1,
      anon_sym_elseif,
    ACTIONS(287), 1,
      anon_sym_else,
    ACTIONS(289), 1,
      anon_sym_BANG_EQ,
    ACTIONS(291), 1,
      anon_sym_EQ,
    ACTIONS(293), 1,
      anon_sym_script_DOT,
    ACTIONS(295), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(297), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(299), 1,
      sym_tag_name,
    ACTIONS(303), 1,
      anon_sym_DASH,
    ACTIONS(313), 1,
      anon_sym_DOT,
    ACTIONS(315), 1,
      sym__newline,
    ACTIONS(283), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(301), 2,
      sym_class,
      sym_id,
    STATE(12), 12,
      sym_doctype,
      sym_pipe,
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
  [1529] = 17,
    ACTIONS(84), 1,
      anon_sym_doctype,
    ACTIONS(86), 1,
      anon_sym_PIPE,
    ACTIONS(90), 1,
      anon_sym_elseif,
    ACTIONS(92), 1,
      anon_sym_else,
    ACTIONS(94), 1,
      anon_sym_case,
    ACTIONS(98), 1,
      anon_sym_BANG_EQ,
    ACTIONS(100), 1,
      anon_sym_EQ,
    ACTIONS(102), 1,
      anon_sym_script_DOT,
    ACTIONS(104), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(106), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(108), 1,
      sym_tag_name,
    ACTIONS(112), 1,
      anon_sym_DASH,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      sym__newline,
    ACTIONS(88), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(110), 2,
      sym_class,
      sym_id,
    STATE(3), 12,
      sym_doctype,
      sym_pipe,
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
  [1594] = 17,
    ACTIONS(94), 1,
      anon_sym_case,
    ACTIONS(239), 1,
      anon_sym_doctype,
    ACTIONS(241), 1,
      anon_sym_PIPE,
    ACTIONS(245), 1,
      anon_sym_elseif,
    ACTIONS(247), 1,
      anon_sym_else,
    ACTIONS(249), 1,
      anon_sym_BANG_EQ,
    ACTIONS(251), 1,
      anon_sym_EQ,
    ACTIONS(253), 1,
      anon_sym_script_DOT,
    ACTIONS(255), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(257), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(259), 1,
      sym_tag_name,
    ACTIONS(263), 1,
      anon_sym_DASH,
    ACTIONS(317), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      sym__newline,
    ACTIONS(243), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(261), 2,
      sym_class,
      sym_id,
    STATE(9), 12,
      sym_doctype,
      sym_pipe,
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
  [1659] = 17,
    ACTIONS(33), 1,
      sym__dedent,
    ACTIONS(167), 1,
      anon_sym_case,
    ACTIONS(331), 1,
      anon_sym_doctype,
    ACTIONS(334), 1,
      anon_sym_PIPE,
    ACTIONS(340), 1,
      anon_sym_elseif,
    ACTIONS(343), 1,
      anon_sym_else,
    ACTIONS(346), 1,
      anon_sym_BANG_EQ,
    ACTIONS(349), 1,
      anon_sym_EQ,
    ACTIONS(352), 1,
      anon_sym_script_DOT,
    ACTIONS(355), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(358), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(361), 1,
      sym_tag_name,
    ACTIONS(367), 1,
      anon_sym_DASH,
    ACTIONS(370), 1,
      sym__newline,
    ACTIONS(337), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(364), 2,
      sym_class,
      sym_id,
    STATE(27), 12,
      sym_doctype,
      sym_pipe,
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
  [1724] = 17,
    ACTIONS(120), 1,
      anon_sym_doctype,
    ACTIONS(122), 1,
      anon_sym_PIPE,
    ACTIONS(126), 1,
      anon_sym_elseif,
    ACTIONS(128), 1,
      anon_sym_else,
    ACTIONS(130), 1,
      anon_sym_case,
    ACTIONS(132), 1,
      anon_sym_BANG_EQ,
    ACTIONS(134), 1,
      anon_sym_EQ,
    ACTIONS(136), 1,
      anon_sym_script_DOT,
    ACTIONS(138), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(140), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(142), 1,
      sym_tag_name,
    ACTIONS(146), 1,
      anon_sym_DASH,
    ACTIONS(323), 1,
      anon_sym_DOT,
    ACTIONS(325), 1,
      sym__newline,
    ACTIONS(124), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(144), 2,
      sym_class,
      sym_id,
    STATE(5), 12,
      sym_doctype,
      sym_pipe,
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
  [1789] = 17,
    ACTIONS(84), 1,
      anon_sym_doctype,
    ACTIONS(86), 1,
      anon_sym_PIPE,
    ACTIONS(90), 1,
      anon_sym_elseif,
    ACTIONS(92), 1,
      anon_sym_else,
    ACTIONS(94), 1,
      anon_sym_case,
    ACTIONS(98), 1,
      anon_sym_BANG_EQ,
    ACTIONS(100), 1,
      anon_sym_EQ,
    ACTIONS(102), 1,
      anon_sym_script_DOT,
    ACTIONS(104), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(106), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(108), 1,
      sym_tag_name,
    ACTIONS(112), 1,
      anon_sym_DASH,
    ACTIONS(309), 1,
      anon_sym_DOT,
    ACTIONS(311), 1,
      sym__newline,
    ACTIONS(88), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(110), 2,
      sym_class,
      sym_id,
    STATE(3), 12,
      sym_doctype,
      sym_pipe,
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
  [1854] = 17,
    ACTIONS(94), 1,
      anon_sym_case,
    ACTIONS(239), 1,
      anon_sym_doctype,
    ACTIONS(241), 1,
      anon_sym_PIPE,
    ACTIONS(245), 1,
      anon_sym_elseif,
    ACTIONS(247), 1,
      anon_sym_else,
    ACTIONS(249), 1,
      anon_sym_BANG_EQ,
    ACTIONS(251), 1,
      anon_sym_EQ,
    ACTIONS(253), 1,
      anon_sym_script_DOT,
    ACTIONS(255), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(257), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(259), 1,
      sym_tag_name,
    ACTIONS(263), 1,
      anon_sym_DASH,
    ACTIONS(317), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      sym__newline,
    ACTIONS(243), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(261), 2,
      sym_class,
      sym_id,
    STATE(9), 12,
      sym_doctype,
      sym_pipe,
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
  [1919] = 17,
    ACTIONS(130), 1,
      anon_sym_case,
    ACTIONS(279), 1,
      anon_sym_doctype,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(285), 1,
      anon_sym_elseif,
    ACTIONS(287), 1,
      anon_sym_else,
    ACTIONS(289), 1,
      anon_sym_BANG_EQ,
    ACTIONS(291), 1,
      anon_sym_EQ,
    ACTIONS(293), 1,
      anon_sym_script_DOT,
    ACTIONS(295), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(297), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(299), 1,
      sym_tag_name,
    ACTIONS(303), 1,
      anon_sym_DASH,
    ACTIONS(313), 1,
      anon_sym_DOT,
    ACTIONS(315), 1,
      sym__newline,
    ACTIONS(283), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(301), 2,
      sym_class,
      sym_id,
    STATE(12), 12,
      sym_doctype,
      sym_pipe,
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
  [1984] = 17,
    ACTIONS(94), 1,
      anon_sym_case,
    ACTIONS(239), 1,
      anon_sym_doctype,
    ACTIONS(241), 1,
      anon_sym_PIPE,
    ACTIONS(245), 1,
      anon_sym_elseif,
    ACTIONS(247), 1,
      anon_sym_else,
    ACTIONS(249), 1,
      anon_sym_BANG_EQ,
    ACTIONS(251), 1,
      anon_sym_EQ,
    ACTIONS(253), 1,
      anon_sym_script_DOT,
    ACTIONS(255), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(257), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(259), 1,
      sym_tag_name,
    ACTIONS(263), 1,
      anon_sym_DASH,
    ACTIONS(275), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      sym__newline,
    ACTIONS(243), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(261), 2,
      sym_class,
      sym_id,
    STATE(8), 12,
      sym_doctype,
      sym_pipe,
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
  [2049] = 17,
    ACTIONS(130), 1,
      anon_sym_case,
    ACTIONS(279), 1,
      anon_sym_doctype,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(285), 1,
      anon_sym_elseif,
    ACTIONS(287), 1,
      anon_sym_else,
    ACTIONS(289), 1,
      anon_sym_BANG_EQ,
    ACTIONS(291), 1,
      anon_sym_EQ,
    ACTIONS(293), 1,
      anon_sym_script_DOT,
    ACTIONS(295), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(297), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(299), 1,
      sym_tag_name,
    ACTIONS(303), 1,
      anon_sym_DASH,
    ACTIONS(327), 1,
      anon_sym_DOT,
    ACTIONS(329), 1,
      sym__newline,
    ACTIONS(283), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(301), 2,
      sym_class,
      sym_id,
    STATE(17), 12,
      sym_doctype,
      sym_pipe,
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
  [2114] = 16,
    ACTIONS(130), 1,
      anon_sym_case,
    ACTIONS(279), 1,
      anon_sym_doctype,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(285), 1,
      anon_sym_elseif,
    ACTIONS(287), 1,
      anon_sym_else,
    ACTIONS(289), 1,
      anon_sym_BANG_EQ,
    ACTIONS(291), 1,
      anon_sym_EQ,
    ACTIONS(293), 1,
      anon_sym_script_DOT,
    ACTIONS(295), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(297), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(299), 1,
      sym_tag_name,
    ACTIONS(303), 1,
      anon_sym_DASH,
    ACTIONS(315), 1,
      sym__newline,
    ACTIONS(283), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(301), 2,
      sym_class,
      sym_id,
    STATE(12), 12,
      sym_doctype,
      sym_pipe,
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
  [2176] = 16,
    ACTIONS(120), 1,
      anon_sym_doctype,
    ACTIONS(122), 1,
      anon_sym_PIPE,
    ACTIONS(126), 1,
      anon_sym_elseif,
    ACTIONS(128), 1,
      anon_sym_else,
    ACTIONS(130), 1,
      anon_sym_case,
    ACTIONS(132), 1,
      anon_sym_BANG_EQ,
    ACTIONS(134), 1,
      anon_sym_EQ,
    ACTIONS(136), 1,
      anon_sym_script_DOT,
    ACTIONS(138), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(140), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(142), 1,
      sym_tag_name,
    ACTIONS(146), 1,
      anon_sym_DASH,
    ACTIONS(325), 1,
      sym__newline,
    ACTIONS(124), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(144), 2,
      sym_class,
      sym_id,
    STATE(5), 12,
      sym_doctype,
      sym_pipe,
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
  [2238] = 16,
    ACTIONS(94), 1,
      anon_sym_case,
    ACTIONS(239), 1,
      anon_sym_doctype,
    ACTIONS(241), 1,
      anon_sym_PIPE,
    ACTIONS(245), 1,
      anon_sym_elseif,
    ACTIONS(247), 1,
      anon_sym_else,
    ACTIONS(249), 1,
      anon_sym_BANG_EQ,
    ACTIONS(251), 1,
      anon_sym_EQ,
    ACTIONS(253), 1,
      anon_sym_script_DOT,
    ACTIONS(255), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(257), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(259), 1,
      sym_tag_name,
    ACTIONS(263), 1,
      anon_sym_DASH,
    ACTIONS(277), 1,
      sym__newline,
    ACTIONS(243), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(261), 2,
      sym_class,
      sym_id,
    STATE(8), 12,
      sym_doctype,
      sym_pipe,
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
  [2300] = 16,
    ACTIONS(130), 1,
      anon_sym_case,
    ACTIONS(279), 1,
      anon_sym_doctype,
    ACTIONS(281), 1,
      anon_sym_PIPE,
    ACTIONS(285), 1,
      anon_sym_elseif,
    ACTIONS(287), 1,
      anon_sym_else,
    ACTIONS(289), 1,
      anon_sym_BANG_EQ,
    ACTIONS(291), 1,
      anon_sym_EQ,
    ACTIONS(293), 1,
      anon_sym_script_DOT,
    ACTIONS(295), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(297), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(299), 1,
      sym_tag_name,
    ACTIONS(303), 1,
      anon_sym_DASH,
    ACTIONS(329), 1,
      sym__newline,
    ACTIONS(283), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(301), 2,
      sym_class,
      sym_id,
    STATE(17), 12,
      sym_doctype,
      sym_pipe,
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
  [2362] = 16,
    ACTIONS(94), 1,
      anon_sym_case,
    ACTIONS(239), 1,
      anon_sym_doctype,
    ACTIONS(241), 1,
      anon_sym_PIPE,
    ACTIONS(245), 1,
      anon_sym_elseif,
    ACTIONS(247), 1,
      anon_sym_else,
    ACTIONS(249), 1,
      anon_sym_BANG_EQ,
    ACTIONS(251), 1,
      anon_sym_EQ,
    ACTIONS(253), 1,
      anon_sym_script_DOT,
    ACTIONS(255), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(257), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(259), 1,
      sym_tag_name,
    ACTIONS(263), 1,
      anon_sym_DASH,
    ACTIONS(319), 1,
      sym__newline,
    ACTIONS(243), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(261), 2,
      sym_class,
      sym_id,
    STATE(9), 12,
      sym_doctype,
      sym_pipe,
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
  [2424] = 16,
    ACTIONS(84), 1,
      anon_sym_doctype,
    ACTIONS(86), 1,
      anon_sym_PIPE,
    ACTIONS(90), 1,
      anon_sym_elseif,
    ACTIONS(92), 1,
      anon_sym_else,
    ACTIONS(94), 1,
      anon_sym_case,
    ACTIONS(98), 1,
      anon_sym_BANG_EQ,
    ACTIONS(100), 1,
      anon_sym_EQ,
    ACTIONS(102), 1,
      anon_sym_script_DOT,
    ACTIONS(104), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(106), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(108), 1,
      sym_tag_name,
    ACTIONS(112), 1,
      anon_sym_DASH,
    ACTIONS(273), 1,
      sym__newline,
    ACTIONS(88), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(110), 2,
      sym_class,
      sym_id,
    STATE(4), 12,
      sym_doctype,
      sym_pipe,
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
  [2486] = 16,
    ACTIONS(84), 1,
      anon_sym_doctype,
    ACTIONS(86), 1,
      anon_sym_PIPE,
    ACTIONS(90), 1,
      anon_sym_elseif,
    ACTIONS(92), 1,
      anon_sym_else,
    ACTIONS(94), 1,
      anon_sym_case,
    ACTIONS(98), 1,
      anon_sym_BANG_EQ,
    ACTIONS(100), 1,
      anon_sym_EQ,
    ACTIONS(102), 1,
      anon_sym_script_DOT,
    ACTIONS(104), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(106), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(108), 1,
      sym_tag_name,
    ACTIONS(112), 1,
      anon_sym_DASH,
    ACTIONS(311), 1,
      sym__newline,
    ACTIONS(88), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(110), 2,
      sym_class,
      sym_id,
    STATE(3), 12,
      sym_doctype,
      sym_pipe,
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
  [2548] = 16,
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
    ACTIONS(373), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(29), 2,
      sym_class,
      sym_id,
    STATE(42), 11,
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
  [2609] = 16,
    ACTIONS(375), 1,
      ts_builtin_sym_end,
    ACTIONS(377), 1,
      anon_sym_doctype,
    ACTIONS(380), 1,
      anon_sym_PIPE,
    ACTIONS(386), 1,
      anon_sym_elseif,
    ACTIONS(389), 1,
      anon_sym_else,
    ACTIONS(392), 1,
      anon_sym_case,
    ACTIONS(395), 1,
      anon_sym_BANG_EQ,
    ACTIONS(398), 1,
      anon_sym_EQ,
    ACTIONS(401), 1,
      anon_sym_script_DOT,
    ACTIONS(404), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(407), 1,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(410), 1,
      sym_tag_name,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(383), 2,
      anon_sym_unless,
      anon_sym_if,
    ACTIONS(413), 2,
      sym_class,
      sym_id,
    STATE(42), 11,
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
  [2670] = 6,
    ACTIONS(423), 1,
      anon_sym_when,
    ACTIONS(425), 1,
      anon_sym_default,
    STATE(499), 1,
      sym__when_keyword,
    STATE(44), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(421), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(419), 12,
      sym__newline,
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
  [2707] = 6,
    ACTIONS(431), 1,
      anon_sym_when,
    ACTIONS(434), 1,
      anon_sym_default,
    STATE(499), 1,
      sym__when_keyword,
    STATE(44), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(429), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(427), 12,
      sym__newline,
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
  [2744] = 6,
    ACTIONS(423), 1,
      anon_sym_when,
    ACTIONS(437), 1,
      anon_sym_default,
    STATE(514), 1,
      sym__when_keyword,
    STATE(48), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(421), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(419), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2780] = 4,
    ACTIONS(443), 1,
      sym__indent,
    STATE(114), 1,
      sym_children,
    ACTIONS(441), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(439), 12,
      sym__newline,
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
  [2812] = 4,
    ACTIONS(449), 1,
      sym__un_delimited_javascript_line,
    STATE(47), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(445), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(447), 18,
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
  [2844] = 6,
    ACTIONS(431), 1,
      anon_sym_when,
    ACTIONS(452), 1,
      anon_sym_default,
    STATE(514), 1,
      sym__when_keyword,
    STATE(48), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(429), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(427), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2880] = 4,
    ACTIONS(459), 1,
      sym__indent,
    STATE(120), 1,
      sym_children,
    ACTIONS(457), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(455), 12,
      sym__newline,
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
  [2912] = 4,
    ACTIONS(465), 1,
      sym__comment_content,
    STATE(52), 1,
      aux_sym_comment_repeat1,
    ACTIONS(461), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(463), 18,
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
  [2944] = 4,
    ACTIONS(471), 1,
      sym__indent,
    STATE(98), 1,
      sym_children,
    ACTIONS(469), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(467), 12,
      sym__newline,
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
  [2976] = 4,
    ACTIONS(477), 1,
      sym__comment_content,
    STATE(52), 1,
      aux_sym_comment_repeat1,
    ACTIONS(473), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(475), 18,
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
  [3008] = 4,
    ACTIONS(484), 1,
      sym__indent,
    STATE(109), 1,
      sym_children,
    ACTIONS(482), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(480), 12,
      sym__newline,
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
  [3040] = 4,
    ACTIONS(465), 1,
      sym__comment_content,
    STATE(52), 1,
      aux_sym_comment_repeat1,
    ACTIONS(486), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(488), 18,
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
  [3072] = 4,
    ACTIONS(459), 1,
      sym__indent,
    STATE(114), 1,
      sym_children,
    ACTIONS(441), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(439), 12,
      sym__newline,
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
  [3104] = 4,
    ACTIONS(459), 1,
      sym__indent,
    STATE(108), 1,
      sym_children,
    ACTIONS(492), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(490), 12,
      sym__newline,
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
  [3136] = 4,
    ACTIONS(498), 1,
      sym__un_delimited_javascript_line,
    STATE(47), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(494), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(496), 18,
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
  [3168] = 4,
    ACTIONS(459), 1,
      sym__indent,
    STATE(127), 1,
      sym_children,
    ACTIONS(502), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(500), 12,
      sym__newline,
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
  [3200] = 5,
    ACTIONS(504), 1,
      sym__indent,
    ACTIONS(506), 1,
      sym__dedent,
    STATE(168), 1,
      sym_children,
    ACTIONS(457), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(455), 10,
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
  [3233] = 3,
    ACTIONS(512), 1,
      sym__indent,
    ACTIONS(510), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(508), 12,
      sym__newline,
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
  [3262] = 2,
    ACTIONS(473), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(475), 19,
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
      sym__comment_content,
      anon_sym_DASH,
  [3289] = 4,
    ACTIONS(514), 1,
      sym__un_delimited_javascript_line,
    STATE(62), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(445), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(447), 18,
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
  [3320] = 4,
    ACTIONS(517), 1,
      sym__indent,
    STATE(184), 1,
      sym_children,
    ACTIONS(492), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(490), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3351] = 2,
    ACTIONS(519), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(521), 19,
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
      sym__un_delimited_javascript_line,
      anon_sym_DASH,
  [3378] = 4,
    ACTIONS(517), 1,
      sym__indent,
    STATE(131), 1,
      sym_children,
    ACTIONS(457), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(455), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3409] = 4,
    ACTIONS(517), 1,
      sym__indent,
    STATE(183), 1,
      sym_children,
    ACTIONS(502), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(500), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3440] = 4,
    ACTIONS(523), 1,
      sym__un_delimited_javascript_line,
    STATE(62), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(494), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(496), 18,
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
  [3471] = 4,
    ACTIONS(525), 1,
      sym__indent,
    STATE(132), 1,
      sym_children,
    ACTIONS(469), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(467), 11,
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
  [3502] = 4,
    ACTIONS(527), 1,
      sym__indent,
    STATE(137), 1,
      sym_children,
    ACTIONS(482), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(480), 11,
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
  [3533] = 4,
    ACTIONS(529), 1,
      sym__comment_content,
    STATE(71), 1,
      aux_sym_comment_repeat1,
    ACTIONS(486), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(488), 18,
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
  [3564] = 4,
    ACTIONS(531), 1,
      sym__comment_content,
    STATE(71), 1,
      aux_sym_comment_repeat1,
    ACTIONS(473), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(475), 18,
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
  [3595] = 4,
    ACTIONS(534), 1,
      sym__indent,
    STATE(181), 1,
      sym_children,
    ACTIONS(441), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(439), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3626] = 4,
    ACTIONS(504), 1,
      sym__indent,
    STATE(141), 1,
      sym_children,
    ACTIONS(441), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(439), 11,
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
  [3657] = 6,
    ACTIONS(423), 1,
      anon_sym_when,
    ACTIONS(536), 1,
      anon_sym_default,
    STATE(524), 1,
      sym__when_keyword,
    STATE(84), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(421), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(419), 10,
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
  [3692] = 4,
    ACTIONS(538), 1,
      sym__indent,
    STATE(141), 1,
      sym_children,
    ACTIONS(441), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(439), 11,
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
  [3723] = 4,
    ACTIONS(517), 1,
      sym__indent,
    STATE(181), 1,
      sym_children,
    ACTIONS(441), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(439), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3754] = 4,
    ACTIONS(540), 1,
      sym__indent,
    STATE(178), 1,
      sym_children,
    ACTIONS(482), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(480), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3785] = 4,
    ACTIONS(504), 1,
      sym__indent,
    STATE(145), 1,
      sym_children,
    ACTIONS(502), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(500), 11,
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
  [3816] = 4,
    ACTIONS(529), 1,
      sym__comment_content,
    STATE(71), 1,
      aux_sym_comment_repeat1,
    ACTIONS(461), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(463), 18,
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
  [3847] = 4,
    ACTIONS(542), 1,
      sym__indent,
    STATE(177), 1,
      sym_children,
    ACTIONS(469), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(467), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [3878] = 4,
    ACTIONS(504), 1,
      sym__indent,
    STATE(147), 1,
      sym_children,
    ACTIONS(492), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(490), 11,
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
  [3909] = 3,
    ACTIONS(548), 1,
      sym__indent,
    ACTIONS(546), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(544), 12,
      sym__newline,
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
  [3938] = 3,
    ACTIONS(554), 1,
      sym__newline,
    ACTIONS(550), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(552), 19,
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
      sym__comment_content,
      anon_sym_DASH,
  [3967] = 6,
    ACTIONS(431), 1,
      anon_sym_when,
    ACTIONS(557), 1,
      anon_sym_default,
    STATE(524), 1,
      sym__when_keyword,
    STATE(84), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(429), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(427), 10,
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
  [4002] = 3,
    ACTIONS(564), 1,
      sym__indent,
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
  [4031] = 4,
    ACTIONS(566), 1,
      sym__comment_content,
    STATE(106), 1,
      aux_sym_comment_repeat1,
    ACTIONS(461), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(463), 16,
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
  [4061] = 2,
    ACTIONS(570), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(568), 12,
      sym__newline,
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
  [4087] = 2,
    ACTIONS(574), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(572), 12,
      sym__newline,
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
  [4113] = 2,
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
  [4139] = 2,
    ACTIONS(469), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(467), 12,
      sym__newline,
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
  [4165] = 3,
    ACTIONS(580), 1,
      sym__indent,
    ACTIONS(510), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(508), 11,
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
  [4193] = 3,
    ACTIONS(582), 1,
      sym__indent,
    ACTIONS(546), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(544), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4221] = 3,
    ACTIONS(588), 1,
      sym__dedent,
    ACTIONS(586), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(584), 11,
      sym__newline,
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
  [4249] = 4,
    ACTIONS(590), 1,
      sym__un_delimited_javascript_line,
    STATE(94), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(445), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(447), 16,
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
  [4279] = 2,
    ACTIONS(595), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(593), 12,
      sym__newline,
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
  [4305] = 2,
    ACTIONS(457), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(455), 12,
      sym__newline,
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
  [4331] = 4,
    ACTIONS(597), 1,
      sym__indent,
    STATE(197), 1,
      sym_children,
    ACTIONS(482), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(480), 12,
      sym__newline,
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
  [4361] = 2,
    ACTIONS(482), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(480), 12,
      sym__newline,
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
  [4387] = 4,
    ACTIONS(599), 1,
      sym__indent,
    STATE(224), 1,
      sym_children,
    ACTIONS(492), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(490), 12,
      sym__newline,
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
  [4417] = 4,
    ACTIONS(601), 1,
      sym__un_delimited_javascript_line,
    STATE(94), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(494), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(496), 16,
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
  [4447] = 4,
    ACTIONS(599), 1,
      sym__indent,
    STATE(218), 1,
      sym_children,
    ACTIONS(502), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(500), 12,
      sym__newline,
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
  [4477] = 2,
    ACTIONS(605), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(603), 12,
      sym__newline,
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
  [4503] = 4,
    ACTIONS(566), 1,
      sym__comment_content,
    STATE(106), 1,
      aux_sym_comment_repeat1,
    ACTIONS(486), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(488), 16,
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
  [4533] = 3,
    ACTIONS(550), 1,
      sym__dedent,
    ACTIONS(607), 1,
      sym__newline,
    ACTIONS(552), 19,
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
      sym__comment_content,
      anon_sym_DASH,
  [4561] = 2,
    ACTIONS(612), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(610), 12,
      sym__newline,
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
  [4587] = 4,
    ACTIONS(614), 1,
      sym__comment_content,
    STATE(106), 1,
      aux_sym_comment_repeat1,
    ACTIONS(473), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(475), 16,
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
  [4617] = 3,
    ACTIONS(617), 1,
      sym__indent,
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
    ACTIONS(560), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [4645] = 2,
    ACTIONS(621), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(619), 12,
      sym__newline,
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
  [4671] = 2,
    ACTIONS(441), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(439), 12,
      sym__newline,
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
  [4697] = 2,
    ACTIONS(625), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(623), 12,
      sym__newline,
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
  [4723] = 2,
    ACTIONS(629), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(627), 12,
      sym__newline,
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
  [4749] = 2,
    ACTIONS(633), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(631), 12,
      sym__newline,
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
  [4775] = 2,
    ACTIONS(473), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(475), 19,
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
      sym__comment_content,
      anon_sym_DASH,
  [4801] = 2,
    ACTIONS(502), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(500), 12,
      sym__newline,
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
  [4827] = 2,
    ACTIONS(637), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(635), 12,
      sym__newline,
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
  [4853] = 2,
    ACTIONS(641), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(639), 12,
      sym__newline,
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
  [4879] = 2,
    ACTIONS(645), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(643), 12,
      sym__newline,
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
  [4905] = 4,
    ACTIONS(647), 1,
      sym__indent,
    STATE(207), 1,
      sym_children,
    ACTIONS(441), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(439), 12,
      sym__newline,
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
  [4935] = 2,
    ACTIONS(519), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(521), 19,
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
      sym__un_delimited_javascript_line,
      anon_sym_DASH,
  [4961] = 2,
    ACTIONS(651), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(649), 12,
      sym__newline,
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
  [4987] = 3,
    ACTIONS(657), 1,
      sym__dedent,
    ACTIONS(655), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(653), 11,
      sym__newline,
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
  [5015] = 4,
    ACTIONS(659), 1,
      sym__indent,
    STATE(193), 1,
      sym_children,
    ACTIONS(469), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(467), 12,
      sym__newline,
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
  [5045] = 2,
    ACTIONS(663), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(661), 12,
      sym__newline,
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
  [5071] = 2,
    ACTIONS(667), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(665), 12,
      sym__newline,
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
  [5097] = 4,
    ACTIONS(599), 1,
      sym__indent,
    STATE(207), 1,
      sym_children,
    ACTIONS(441), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(439), 12,
      sym__newline,
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
  [5127] = 3,
    ACTIONS(669), 1,
      sym__indent,
    ACTIONS(510), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(508), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5155] = 2,
    ACTIONS(492), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(490), 12,
      sym__newline,
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
  [5181] = 2,
    ACTIONS(673), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(671), 12,
      sym__newline,
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
  [5207] = 2,
    ACTIONS(663), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(661), 11,
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
  [5232] = 2,
    ACTIONS(633), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(631), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5257] = 2,
    ACTIONS(651), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(649), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5282] = 2,
    ACTIONS(482), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(480), 11,
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
  [5307] = 2,
    ACTIONS(469), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(467), 11,
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
  [5332] = 4,
    ACTIONS(675), 1,
      sym__comment_content,
    STATE(136), 1,
      aux_sym_comment_repeat1,
    ACTIONS(461), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(463), 16,
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
  [5361] = 2,
    ACTIONS(457), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(455), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5386] = 4,
    ACTIONS(677), 1,
      sym__comment_content,
    STATE(136), 1,
      aux_sym_comment_repeat1,
    ACTIONS(473), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(475), 16,
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
  [5415] = 2,
    ACTIONS(441), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(439), 11,
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
  [5440] = 2,
    ACTIONS(663), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(661), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5465] = 2,
    ACTIONS(629), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(627), 11,
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
  [5490] = 4,
    ACTIONS(675), 1,
      sym__comment_content,
    STATE(136), 1,
      aux_sym_comment_repeat1,
    ACTIONS(486), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(488), 16,
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
  [5519] = 2,
    ACTIONS(502), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(500), 11,
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
  [5544] = 4,
    ACTIONS(680), 1,
      sym__un_delimited_javascript_line,
    STATE(146), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(494), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(496), 16,
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
  [5573] = 2,
    ACTIONS(667), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(665), 11,
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
  [5598] = 4,
    ACTIONS(682), 1,
      sym__un_delimited_javascript_line,
    STATE(165), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(494), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(496), 16,
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
  [5627] = 2,
    ACTIONS(492), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(490), 11,
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
  [5652] = 4,
    ACTIONS(684), 1,
      sym__un_delimited_javascript_line,
    STATE(146), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(445), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(447), 16,
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
  [5681] = 2,
    ACTIONS(621), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(619), 11,
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
  [5706] = 2,
    ACTIONS(570), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(568), 11,
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
  [5731] = 3,
    ACTIONS(506), 1,
      sym__dedent,
    ACTIONS(457), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(455), 10,
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
  [5758] = 2,
    ACTIONS(625), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(623), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5783] = 2,
    ACTIONS(605), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(603), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5808] = 2,
    ACTIONS(641), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(639), 11,
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
  [5833] = 3,
    ACTIONS(687), 1,
      sym__indent,
    ACTIONS(510), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(508), 12,
      sym__newline,
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
  [5860] = 2,
    ACTIONS(637), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(635), 11,
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
  [5885] = 2,
    ACTIONS(574), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(572), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5910] = 2,
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
    ACTIONS(576), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5935] = 3,
    ACTIONS(689), 1,
      sym__dedent,
    ACTIONS(586), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(584), 10,
      sym__newline,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5962] = 2,
    ACTIONS(595), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(593), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [5987] = 2,
    ACTIONS(612), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(610), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6012] = 2,
    ACTIONS(673), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(671), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6037] = 3,
    ACTIONS(691), 1,
      sym__dedent,
    ACTIONS(655), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(653), 10,
      sym__newline,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6064] = 2,
    ACTIONS(645), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(643), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6089] = 4,
    ACTIONS(693), 1,
      sym__indent,
    STATE(249), 1,
      sym_children,
    ACTIONS(469), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(467), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6118] = 4,
    ACTIONS(695), 1,
      sym__indent,
    STATE(254), 1,
      sym_children,
    ACTIONS(482), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(480), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6147] = 4,
    ACTIONS(697), 1,
      sym__un_delimited_javascript_line,
    STATE(165), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(445), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(447), 16,
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
  [6176] = 4,
    ACTIONS(700), 1,
      sym__indent,
    STATE(258), 1,
      sym_children,
    ACTIONS(441), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(439), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6205] = 4,
    ACTIONS(702), 1,
      sym__indent,
    STATE(258), 1,
      sym_children,
    ACTIONS(441), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(439), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6234] = 2,
    ACTIONS(651), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(649), 11,
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
  [6259] = 2,
    ACTIONS(633), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(631), 11,
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
  [6284] = 4,
    ACTIONS(700), 1,
      sym__indent,
    STATE(245), 1,
      sym_children,
    ACTIONS(502), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(500), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6313] = 2,
    ACTIONS(519), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(521), 17,
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
      sym__un_delimited_javascript_line,
      anon_sym_DASH,
  [6338] = 4,
    ACTIONS(700), 1,
      sym__indent,
    STATE(255), 1,
      sym_children,
    ACTIONS(492), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(490), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6367] = 2,
    ACTIONS(641), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(639), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6392] = 2,
    ACTIONS(637), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(635), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6417] = 2,
    ACTIONS(469), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(467), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6442] = 2,
    ACTIONS(473), 3,
      sym__newline,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(475), 17,
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
      sym__comment_content,
      anon_sym_DASH,
  [6467] = 2,
    ACTIONS(482), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(480), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6492] = 2,
    ACTIONS(441), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(439), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6517] = 2,
    ACTIONS(629), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(627), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6542] = 3,
    ACTIONS(704), 1,
      sym__indent,
    ACTIONS(546), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(544), 12,
      sym__newline,
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
  [6569] = 2,
    ACTIONS(502), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(500), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6594] = 2,
    ACTIONS(667), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(665), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6619] = 2,
    ACTIONS(492), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(490), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6644] = 2,
    ACTIONS(621), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(619), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6669] = 3,
    ACTIONS(706), 1,
      sym__newline,
    ACTIONS(550), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(552), 17,
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
      sym__comment_content,
      anon_sym_DASH,
  [6696] = 3,
    ACTIONS(709), 1,
      sym__indent,
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
  [6723] = 2,
    ACTIONS(570), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(568), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [6748] = 2,
    ACTIONS(713), 9,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(711), 10,
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
  [6772] = 4,
    ACTIONS(715), 1,
      sym__indent,
    STATE(273), 1,
      sym_children,
    ACTIONS(502), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(500), 10,
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
  [6800] = 2,
    ACTIONS(574), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(572), 12,
      sym__newline,
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
  [6824] = 2,
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
  [6848] = 3,
    ACTIONS(717), 1,
      sym__indent,
    ACTIONS(510), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(508), 11,
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
  [6874] = 2,
    ACTIONS(482), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(480), 12,
      sym__newline,
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
  [6898] = 3,
    ACTIONS(719), 1,
      sym__dedent,
    ACTIONS(586), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(584), 11,
      sym__newline,
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
  [6924] = 2,
    ACTIONS(595), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(593), 12,
      sym__newline,
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
  [6948] = 3,
    ACTIONS(550), 1,
      ts_builtin_sym_end,
    ACTIONS(721), 1,
      sym__newline,
    ACTIONS(552), 17,
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
      sym__comment_content,
      anon_sym_DASH,
  [6974] = 2,
    ACTIONS(441), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(439), 12,
      sym__newline,
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
  [6998] = 4,
    ACTIONS(461), 1,
      ts_builtin_sym_end,
    ACTIONS(723), 1,
      sym__comment_content,
    STATE(214), 1,
      aux_sym_comment_repeat1,
    ACTIONS(463), 16,
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
  [7026] = 2,
    ACTIONS(612), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(610), 12,
      sym__newline,
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
  [7050] = 2,
    ACTIONS(629), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(627), 12,
      sym__newline,
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
  [7074] = 2,
    ACTIONS(637), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(635), 12,
      sym__newline,
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
  [7098] = 2,
    ACTIONS(641), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(639), 12,
      sym__newline,
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
  [7122] = 2,
    ACTIONS(673), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(671), 12,
      sym__newline,
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
  [7146] = 2,
    ACTIONS(605), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(603), 12,
      sym__newline,
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
  [7170] = 2,
    ACTIONS(625), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(623), 12,
      sym__newline,
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
  [7194] = 4,
    ACTIONS(725), 1,
      sym__indent,
    STATE(270), 1,
      sym_children,
    ACTIONS(482), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(480), 10,
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
  [7222] = 2,
    ACTIONS(502), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(500), 12,
      sym__newline,
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
  [7246] = 4,
    ACTIONS(727), 1,
      sym__indent,
    STATE(279), 1,
      sym_children,
    ACTIONS(441), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(439), 10,
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
  [7274] = 2,
    ACTIONS(519), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(521), 17,
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
      sym__un_delimited_javascript_line,
      anon_sym_DASH,
  [7298] = 4,
    ACTIONS(729), 1,
      sym__indent,
    ACTIONS(731), 1,
      sym__dedent,
    ACTIONS(510), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(508), 10,
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
  [7326] = 2,
    ACTIONS(473), 2,
      sym__newline,
      sym__dedent,
    ACTIONS(475), 17,
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
      sym__comment_content,
      anon_sym_DASH,
  [7350] = 3,
    ACTIONS(733), 1,
      sym__dedent,
    ACTIONS(655), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(653), 11,
      sym__newline,
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
  [7376] = 3,
    ACTIONS(550), 1,
      sym__dedent,
    ACTIONS(735), 1,
      sym__newline,
    ACTIONS(552), 17,
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
      sym__comment_content,
      anon_sym_DASH,
  [7402] = 4,
    ACTIONS(473), 1,
      ts_builtin_sym_end,
    ACTIONS(738), 1,
      sym__comment_content,
    STATE(214), 1,
      aux_sym_comment_repeat1,
    ACTIONS(475), 16,
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
  [7430] = 4,
    ACTIONS(715), 1,
      sym__indent,
    STATE(274), 1,
      sym_children,
    ACTIONS(492), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(490), 10,
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
  [7458] = 3,
    ACTIONS(741), 1,
      sym__indent,
    ACTIONS(562), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(560), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7484] = 2,
    ACTIONS(667), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(665), 12,
      sym__newline,
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
  [7508] = 2,
    ACTIONS(492), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(490), 12,
      sym__newline,
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
  [7532] = 4,
    ACTIONS(486), 1,
      ts_builtin_sym_end,
    ACTIONS(723), 1,
      sym__comment_content,
    STATE(214), 1,
      aux_sym_comment_repeat1,
    ACTIONS(488), 16,
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
  [7560] = 3,
    ACTIONS(743), 1,
      sym__indent,
    ACTIONS(546), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(544), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7586] = 2,
    ACTIONS(645), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(643), 12,
      sym__newline,
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
  [7610] = 3,
    ACTIONS(745), 1,
      sym__indent,
    ACTIONS(510), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(508), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7636] = 4,
    ACTIONS(747), 1,
      sym__indent,
    STATE(271), 1,
      sym_children,
    ACTIONS(469), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(467), 10,
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
  [7664] = 2,
    ACTIONS(621), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(619), 12,
      sym__newline,
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
  [7688] = 2,
    ACTIONS(570), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(568), 12,
      sym__newline,
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
  [7712] = 2,
    ACTIONS(663), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(661), 12,
      sym__newline,
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
  [7736] = 4,
    ACTIONS(715), 1,
      sym__indent,
    STATE(279), 1,
      sym_children,
    ACTIONS(441), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(439), 10,
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
  [7764] = 2,
    ACTIONS(519), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(521), 17,
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
      sym__un_delimited_javascript_line,
      anon_sym_DASH,
  [7788] = 2,
    ACTIONS(469), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(467), 12,
      sym__newline,
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
  [7812] = 2,
    ACTIONS(667), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(665), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7835] = 2,
    ACTIONS(637), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(635), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7858] = 3,
    ACTIONS(749), 1,
      sym__dedent,
    ACTIONS(586), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(584), 10,
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
  [7883] = 2,
    ACTIONS(574), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(572), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7906] = 2,
    ACTIONS(605), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(603), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7929] = 2,
    ACTIONS(625), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(623), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7952] = 2,
    ACTIONS(578), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(576), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7975] = 2,
    ACTIONS(570), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(568), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [7998] = 2,
    ACTIONS(663), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(661), 11,
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
  [8021] = 2,
    ACTIONS(663), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(661), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8044] = 3,
    ACTIONS(751), 1,
      sym__indent,
    ACTIONS(562), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(560), 10,
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
  [8069] = 2,
    ACTIONS(645), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(643), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8092] = 2,
    ACTIONS(473), 1,
      ts_builtin_sym_end,
    ACTIONS(475), 17,
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
      sym__comment_content,
      anon_sym_DASH,
  [8115] = 3,
    ACTIONS(753), 1,
      sym__dedent,
    ACTIONS(663), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(661), 10,
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
  [8140] = 2,
    ACTIONS(641), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(639), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8163] = 2,
    ACTIONS(492), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(490), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8186] = 3,
    ACTIONS(755), 1,
      sym__dedent,
    ACTIONS(655), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(653), 10,
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
  [8211] = 3,
    ACTIONS(757), 1,
      sym__dedent,
    ACTIONS(655), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(653), 10,
      sym__newline,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8236] = 2,
    ACTIONS(469), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(467), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8259] = 2,
    ACTIONS(482), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(480), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8282] = 3,
    ACTIONS(759), 1,
      sym__indent,
    ACTIONS(546), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(544), 10,
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
  [8307] = 3,
    ACTIONS(761), 1,
      sym__dedent,
    ACTIONS(586), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(584), 10,
      sym__newline,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8332] = 2,
    ACTIONS(595), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(593), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8355] = 2,
    ACTIONS(673), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(671), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8378] = 2,
    ACTIONS(441), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(439), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8401] = 2,
    ACTIONS(621), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(619), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8424] = 2,
    ACTIONS(612), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(610), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8447] = 2,
    ACTIONS(629), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(627), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8470] = 2,
    ACTIONS(502), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(500), 11,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [8493] = 2,
    ACTIONS(578), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(576), 10,
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
  [8515] = 2,
    ACTIONS(605), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(603), 10,
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
  [8537] = 2,
    ACTIONS(673), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(671), 10,
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
  [8559] = 2,
    ACTIONS(645), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(643), 10,
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
  [8581] = 2,
    ACTIONS(595), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(593), 10,
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
  [8603] = 2,
    ACTIONS(574), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(572), 10,
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
  [8625] = 2,
    ACTIONS(641), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(639), 10,
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
  [8647] = 2,
    ACTIONS(765), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(763), 10,
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
  [8669] = 2,
    ACTIONS(637), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(635), 10,
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
  [8691] = 2,
    ACTIONS(629), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(627), 10,
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
  [8713] = 2,
    ACTIONS(612), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(610), 10,
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
  [8735] = 2,
    ACTIONS(441), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(439), 10,
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
  [8757] = 2,
    ACTIONS(482), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(480), 10,
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
  [8779] = 2,
    ACTIONS(469), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(467), 10,
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
  [8801] = 2,
    ACTIONS(492), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(490), 10,
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
  [8823] = 2,
    ACTIONS(621), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(619), 10,
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
  [8845] = 2,
    ACTIONS(667), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(665), 10,
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
  [8867] = 2,
    ACTIONS(625), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(623), 10,
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
  [8889] = 2,
    ACTIONS(570), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(568), 10,
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
  [8911] = 2,
    ACTIONS(769), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(767), 10,
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
  [8933] = 2,
    ACTIONS(502), 7,
      anon_sym_doctype,
      anon_sym_unless,
      anon_sym_if,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(500), 10,
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
  [8955] = 11,
    ACTIONS(771), 1,
      anon_sym_COLON,
    ACTIONS(773), 1,
      anon_sym_BANG_EQ,
    ACTIONS(775), 1,
      anon_sym_EQ,
    ACTIONS(777), 1,
      anon_sym_,
    ACTIONS(779), 1,
      anon_sym_DOT,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(785), 1,
      sym__newline,
    STATE(281), 1,
      aux_sym_tag_repeat1,
    STATE(301), 1,
      sym_attributes,
    ACTIONS(783), 2,
      sym_class,
      sym_id,
    STATE(440), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [8992] = 11,
    ACTIONS(773), 1,
      anon_sym_BANG_EQ,
    ACTIONS(775), 1,
      anon_sym_EQ,
    ACTIONS(779), 1,
      anon_sym_DOT,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(787), 1,
      anon_sym_COLON,
    ACTIONS(789), 1,
      anon_sym_,
    ACTIONS(793), 1,
      sym__newline,
    STATE(298), 1,
      aux_sym_tag_repeat1,
    STATE(302), 1,
      sym_attributes,
    ACTIONS(791), 2,
      sym_class,
      sym_id,
    STATE(443), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9029] = 11,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(795), 1,
      anon_sym_COLON,
    ACTIONS(797), 1,
      anon_sym_BANG_EQ,
    ACTIONS(799), 1,
      anon_sym_EQ,
    ACTIONS(801), 1,
      anon_sym_,
    ACTIONS(803), 1,
      anon_sym_DOT,
    ACTIONS(807), 1,
      sym__newline,
    STATE(288), 1,
      aux_sym_tag_repeat1,
    STATE(303), 1,
      sym_attributes,
    ACTIONS(805), 2,
      sym_class,
      sym_id,
    STATE(175), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9066] = 11,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(809), 1,
      anon_sym_COLON,
    ACTIONS(811), 1,
      anon_sym_BANG_EQ,
    ACTIONS(813), 1,
      anon_sym_EQ,
    ACTIONS(815), 1,
      anon_sym_,
    ACTIONS(817), 1,
      anon_sym_DOT,
    ACTIONS(821), 1,
      sym__newline,
    STATE(293), 1,
      aux_sym_tag_repeat1,
    STATE(306), 1,
      sym_attributes,
    ACTIONS(819), 2,
      sym_class,
      sym_id,
    STATE(248), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9103] = 11,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(823), 1,
      anon_sym_COLON,
    ACTIONS(825), 1,
      anon_sym_BANG_EQ,
    ACTIONS(827), 1,
      anon_sym_EQ,
    ACTIONS(829), 1,
      anon_sym_,
    ACTIONS(831), 1,
      anon_sym_DOT,
    ACTIONS(833), 1,
      sym__newline,
    STATE(298), 1,
      aux_sym_tag_repeat1,
    STATE(300), 1,
      sym_attributes,
    ACTIONS(791), 2,
      sym_class,
      sym_id,
    STATE(271), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9140] = 11,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(825), 1,
      anon_sym_BANG_EQ,
    ACTIONS(827), 1,
      anon_sym_EQ,
    ACTIONS(831), 1,
      anon_sym_DOT,
    ACTIONS(835), 1,
      anon_sym_COLON,
    ACTIONS(837), 1,
      anon_sym_,
    ACTIONS(841), 1,
      sym__newline,
    STATE(284), 1,
      aux_sym_tag_repeat1,
    STATE(313), 1,
      sym_attributes,
    ACTIONS(839), 2,
      sym_class,
      sym_id,
    STATE(272), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9177] = 11,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(843), 1,
      anon_sym_COLON,
    ACTIONS(845), 1,
      anon_sym_BANG_EQ,
    ACTIONS(847), 1,
      anon_sym_EQ,
    ACTIONS(849), 1,
      anon_sym_,
    ACTIONS(851), 1,
      anon_sym_DOT,
    ACTIONS(853), 1,
      sym__newline,
    STATE(298), 1,
      aux_sym_tag_repeat1,
    STATE(312), 1,
      sym_attributes,
    ACTIONS(791), 2,
      sym_class,
      sym_id,
    STATE(132), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9214] = 11,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(855), 1,
      anon_sym_COLON,
    ACTIONS(857), 1,
      anon_sym_BANG_EQ,
    ACTIONS(859), 1,
      anon_sym_EQ,
    ACTIONS(861), 1,
      anon_sym_,
    ACTIONS(863), 1,
      anon_sym_DOT,
    ACTIONS(867), 1,
      sym__newline,
    STATE(292), 1,
      aux_sym_tag_repeat1,
    STATE(305), 1,
      sym_attributes,
    ACTIONS(865), 2,
      sym_class,
      sym_id,
    STATE(90), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9251] = 11,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(797), 1,
      anon_sym_BANG_EQ,
    ACTIONS(799), 1,
      anon_sym_EQ,
    ACTIONS(803), 1,
      anon_sym_DOT,
    ACTIONS(869), 1,
      anon_sym_COLON,
    ACTIONS(871), 1,
      anon_sym_,
    ACTIONS(873), 1,
      sym__newline,
    STATE(298), 1,
      aux_sym_tag_repeat1,
    STATE(311), 1,
      sym_attributes,
    ACTIONS(791), 2,
      sym_class,
      sym_id,
    STATE(177), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9288] = 11,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(875), 1,
      anon_sym_COLON,
    ACTIONS(877), 1,
      anon_sym_BANG_EQ,
    ACTIONS(879), 1,
      anon_sym_EQ,
    ACTIONS(881), 1,
      anon_sym_,
    ACTIONS(883), 1,
      anon_sym_DOT,
    ACTIONS(887), 1,
      sym__newline,
    STATE(291), 1,
      aux_sym_tag_repeat1,
    STATE(307), 1,
      sym_attributes,
    ACTIONS(885), 2,
      sym_class,
      sym_id,
    STATE(229), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9325] = 11,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(845), 1,
      anon_sym_BANG_EQ,
    ACTIONS(847), 1,
      anon_sym_EQ,
    ACTIONS(851), 1,
      anon_sym_DOT,
    ACTIONS(889), 1,
      anon_sym_COLON,
    ACTIONS(891), 1,
      anon_sym_,
    ACTIONS(895), 1,
      sym__newline,
    STATE(286), 1,
      aux_sym_tag_repeat1,
    STATE(308), 1,
      sym_attributes,
    ACTIONS(893), 2,
      sym_class,
      sym_id,
    STATE(133), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9362] = 11,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(877), 1,
      anon_sym_BANG_EQ,
    ACTIONS(879), 1,
      anon_sym_EQ,
    ACTIONS(883), 1,
      anon_sym_DOT,
    ACTIONS(897), 1,
      anon_sym_COLON,
    ACTIONS(899), 1,
      anon_sym_,
    ACTIONS(901), 1,
      sym__newline,
    STATE(298), 1,
      aux_sym_tag_repeat1,
    STATE(304), 1,
      sym_attributes,
    ACTIONS(791), 2,
      sym_class,
      sym_id,
    STATE(193), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9399] = 11,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(857), 1,
      anon_sym_BANG_EQ,
    ACTIONS(859), 1,
      anon_sym_EQ,
    ACTIONS(863), 1,
      anon_sym_DOT,
    ACTIONS(903), 1,
      anon_sym_COLON,
    ACTIONS(905), 1,
      anon_sym_,
    ACTIONS(907), 1,
      sym__newline,
    STATE(298), 1,
      aux_sym_tag_repeat1,
    STATE(310), 1,
      sym_attributes,
    ACTIONS(791), 2,
      sym_class,
      sym_id,
    STATE(98), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9436] = 11,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    ACTIONS(811), 1,
      anon_sym_BANG_EQ,
    ACTIONS(813), 1,
      anon_sym_EQ,
    ACTIONS(817), 1,
      anon_sym_DOT,
    ACTIONS(909), 1,
      anon_sym_COLON,
    ACTIONS(911), 1,
      anon_sym_,
    ACTIONS(913), 1,
      sym__newline,
    STATE(298), 1,
      aux_sym_tag_repeat1,
    STATE(309), 1,
      sym_attributes,
    ACTIONS(791), 2,
      sym_class,
      sym_id,
    STATE(249), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9473] = 6,
    ACTIONS(915), 1,
      anon_sym_EQ,
    ACTIONS(917), 1,
      anon_sym_,
    ACTIONS(919), 1,
      anon_sym_DOT,
    STATE(295), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(921), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(504), 6,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
  [9498] = 6,
    ACTIONS(915), 1,
      anon_sym_EQ,
    ACTIONS(919), 1,
      anon_sym_DOT,
    ACTIONS(923), 1,
      anon_sym_,
    STATE(398), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(925), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(506), 6,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
  [9523] = 7,
    ACTIONS(927), 1,
      anon_sym_RPAREN,
    ACTIONS(932), 1,
      sym_attribute_name,
    STATE(296), 1,
      aux_sym_attributes_repeat1,
    STATE(450), 1,
      sym_angular_attribute_name,
    STATE(545), 1,
      sym_attribute,
    STATE(498), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(929), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [9548] = 7,
    ACTIONS(935), 1,
      anon_sym_RPAREN,
    ACTIONS(939), 1,
      sym_attribute_name,
    STATE(299), 1,
      aux_sym_attributes_repeat1,
    STATE(450), 1,
      sym_angular_attribute_name,
    STATE(497), 1,
      sym_attribute,
    STATE(498), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(937), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [9573] = 4,
    STATE(298), 1,
      aux_sym_tag_repeat1,
    ACTIONS(943), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(945), 2,
      sym_class,
      sym_id,
    ACTIONS(941), 5,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LPAREN,
  [9592] = 7,
    ACTIONS(939), 1,
      sym_attribute_name,
    ACTIONS(948), 1,
      anon_sym_RPAREN,
    STATE(296), 1,
      aux_sym_attributes_repeat1,
    STATE(450), 1,
      sym_angular_attribute_name,
    STATE(494), 1,
      sym_attribute,
    STATE(498), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(937), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [9617] = 7,
    ACTIONS(825), 1,
      anon_sym_BANG_EQ,
    ACTIONS(827), 1,
      anon_sym_EQ,
    ACTIONS(831), 1,
      anon_sym_DOT,
    ACTIONS(950), 1,
      anon_sym_COLON,
    ACTIONS(952), 1,
      anon_sym_,
    ACTIONS(954), 1,
      sym__newline,
    STATE(270), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9641] = 7,
    ACTIONS(773), 1,
      anon_sym_BANG_EQ,
    ACTIONS(775), 1,
      anon_sym_EQ,
    ACTIONS(779), 1,
      anon_sym_DOT,
    ACTIONS(787), 1,
      anon_sym_COLON,
    ACTIONS(789), 1,
      anon_sym_,
    ACTIONS(793), 1,
      sym__newline,
    STATE(443), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9665] = 7,
    ACTIONS(773), 1,
      anon_sym_BANG_EQ,
    ACTIONS(775), 1,
      anon_sym_EQ,
    ACTIONS(779), 1,
      anon_sym_DOT,
    ACTIONS(956), 1,
      anon_sym_COLON,
    ACTIONS(958), 1,
      anon_sym_,
    ACTIONS(960), 1,
      sym__newline,
    STATE(437), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9689] = 7,
    ACTIONS(797), 1,
      anon_sym_BANG_EQ,
    ACTIONS(799), 1,
      anon_sym_EQ,
    ACTIONS(803), 1,
      anon_sym_DOT,
    ACTIONS(869), 1,
      anon_sym_COLON,
    ACTIONS(871), 1,
      anon_sym_,
    ACTIONS(873), 1,
      sym__newline,
    STATE(177), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9713] = 7,
    ACTIONS(877), 1,
      anon_sym_BANG_EQ,
    ACTIONS(879), 1,
      anon_sym_EQ,
    ACTIONS(883), 1,
      anon_sym_DOT,
    ACTIONS(962), 1,
      anon_sym_COLON,
    ACTIONS(964), 1,
      anon_sym_,
    ACTIONS(966), 1,
      sym__newline,
    STATE(197), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9737] = 7,
    ACTIONS(857), 1,
      anon_sym_BANG_EQ,
    ACTIONS(859), 1,
      anon_sym_EQ,
    ACTIONS(863), 1,
      anon_sym_DOT,
    ACTIONS(903), 1,
      anon_sym_COLON,
    ACTIONS(905), 1,
      anon_sym_,
    ACTIONS(907), 1,
      sym__newline,
    STATE(98), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9761] = 7,
    ACTIONS(811), 1,
      anon_sym_BANG_EQ,
    ACTIONS(813), 1,
      anon_sym_EQ,
    ACTIONS(817), 1,
      anon_sym_DOT,
    ACTIONS(909), 1,
      anon_sym_COLON,
    ACTIONS(911), 1,
      anon_sym_,
    ACTIONS(913), 1,
      sym__newline,
    STATE(249), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9785] = 7,
    ACTIONS(877), 1,
      anon_sym_BANG_EQ,
    ACTIONS(879), 1,
      anon_sym_EQ,
    ACTIONS(883), 1,
      anon_sym_DOT,
    ACTIONS(897), 1,
      anon_sym_COLON,
    ACTIONS(899), 1,
      anon_sym_,
    ACTIONS(901), 1,
      sym__newline,
    STATE(193), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9809] = 7,
    ACTIONS(843), 1,
      anon_sym_COLON,
    ACTIONS(845), 1,
      anon_sym_BANG_EQ,
    ACTIONS(847), 1,
      anon_sym_EQ,
    ACTIONS(849), 1,
      anon_sym_,
    ACTIONS(851), 1,
      anon_sym_DOT,
    ACTIONS(853), 1,
      sym__newline,
    STATE(132), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9833] = 7,
    ACTIONS(811), 1,
      anon_sym_BANG_EQ,
    ACTIONS(813), 1,
      anon_sym_EQ,
    ACTIONS(817), 1,
      anon_sym_DOT,
    ACTIONS(968), 1,
      anon_sym_COLON,
    ACTIONS(970), 1,
      anon_sym_,
    ACTIONS(972), 1,
      sym__newline,
    STATE(254), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9857] = 7,
    ACTIONS(857), 1,
      anon_sym_BANG_EQ,
    ACTIONS(859), 1,
      anon_sym_EQ,
    ACTIONS(863), 1,
      anon_sym_DOT,
    ACTIONS(974), 1,
      anon_sym_COLON,
    ACTIONS(976), 1,
      anon_sym_,
    ACTIONS(978), 1,
      sym__newline,
    STATE(109), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9881] = 7,
    ACTIONS(797), 1,
      anon_sym_BANG_EQ,
    ACTIONS(799), 1,
      anon_sym_EQ,
    ACTIONS(803), 1,
      anon_sym_DOT,
    ACTIONS(980), 1,
      anon_sym_COLON,
    ACTIONS(982), 1,
      anon_sym_,
    ACTIONS(984), 1,
      sym__newline,
    STATE(178), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9905] = 7,
    ACTIONS(845), 1,
      anon_sym_BANG_EQ,
    ACTIONS(847), 1,
      anon_sym_EQ,
    ACTIONS(851), 1,
      anon_sym_DOT,
    ACTIONS(986), 1,
      anon_sym_COLON,
    ACTIONS(988), 1,
      anon_sym_,
    ACTIONS(990), 1,
      sym__newline,
    STATE(137), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9929] = 7,
    ACTIONS(823), 1,
      anon_sym_COLON,
    ACTIONS(825), 1,
      anon_sym_BANG_EQ,
    ACTIONS(827), 1,
      anon_sym_EQ,
    ACTIONS(829), 1,
      anon_sym_,
    ACTIONS(831), 1,
      anon_sym_DOT,
    ACTIONS(833), 1,
      sym__newline,
    STATE(271), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [9953] = 7,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(998), 1,
      sym__dedent,
    STATE(325), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(384), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [9976] = 7,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1000), 1,
      sym__dedent,
    STATE(325), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(384), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [9999] = 7,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1002), 1,
      sym__dedent,
    STATE(325), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(384), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10022] = 7,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1004), 1,
      sym__dedent,
    STATE(325), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(384), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10045] = 7,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1006), 1,
      sym__dedent,
    STATE(325), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(384), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10068] = 7,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1008), 1,
      sym__dedent,
    STATE(325), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(384), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10091] = 7,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1010), 1,
      sym__dedent,
    STATE(325), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(384), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10114] = 7,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1012), 1,
      sym__dedent,
    STATE(325), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(384), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10137] = 7,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1014), 1,
      sym__dedent,
    STATE(325), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(384), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10160] = 8,
    ACTIONS(1016), 1,
      aux_sym__ternary_attribute_value_token1,
    ACTIONS(1018), 1,
      aux_sym__variable_attribute_value_token1,
    ACTIONS(1020), 1,
      aux_sym__object_attribute_value_token1,
    ACTIONS(1022), 1,
      aux_sym__template_attribute_value_token1,
    ACTIONS(1024), 1,
      aux_sym__array_attribute_value_token1,
    ACTIONS(1026), 1,
      anon_sym_SQUOTE,
    ACTIONS(1028), 1,
      anon_sym_DQUOTE,
    STATE(496), 1,
      sym_quoted_attribute_value,
  [10185] = 7,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1030), 1,
      sym__dedent,
    STATE(325), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(384), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10208] = 7,
    ACTIONS(1032), 1,
      aux_sym_content_token1,
    ACTIONS(1035), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1038), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1041), 1,
      sym__dedent,
    STATE(325), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(384), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10231] = 7,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1043), 1,
      sym__dedent,
    STATE(325), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(384), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10254] = 7,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1045), 1,
      sym__dedent,
    STATE(325), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(384), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10277] = 7,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1047), 1,
      sym__dedent,
    STATE(325), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(384), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10300] = 7,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1049), 1,
      sym__dedent,
    STATE(325), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(384), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10323] = 4,
    ACTIONS(1053), 1,
      sym__newline,
    ACTIONS(1055), 1,
      sym__dedent,
    STATE(347), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1051), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [10339] = 3,
    ACTIONS(1057), 1,
      sym__indent,
    STATE(438), 1,
      sym_children,
    ACTIONS(439), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [10353] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1059), 1,
      sym__newline,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(374), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10373] = 4,
    ACTIONS(1053), 1,
      sym__newline,
    ACTIONS(1061), 1,
      sym__dedent,
    STATE(347), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1051), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [10389] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1063), 1,
      sym__newline,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(374), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10409] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(314), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(384), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10429] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1065), 1,
      sym__newline,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(374), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10449] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(329), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(384), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10469] = 3,
    ACTIONS(1067), 1,
      sym__indent,
    STATE(443), 1,
      sym_children,
    ACTIONS(467), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [10483] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1069), 1,
      sym__newline,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(374), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10503] = 4,
    ACTIONS(1053), 1,
      sym__newline,
    ACTIONS(1071), 1,
      sym__dedent,
    STATE(347), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1051), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [10519] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(326), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(384), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10539] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1073), 1,
      sym__newline,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(374), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10559] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(318), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(384), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10579] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1075), 1,
      sym__newline,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(374), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10599] = 3,
    ACTIONS(1077), 1,
      sym__indent,
    STATE(437), 1,
      sym_children,
    ACTIONS(480), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [10613] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1079), 1,
      sym__newline,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(374), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10633] = 4,
    ACTIONS(1084), 1,
      sym__newline,
    ACTIONS(1087), 1,
      sym__dedent,
    STATE(347), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1081), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [10649] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1089), 1,
      sym__newline,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(346), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10669] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1091), 1,
      sym__newline,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(374), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10689] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1093), 1,
      sym__newline,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(374), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10709] = 4,
    ACTIONS(1053), 1,
      sym__newline,
    ACTIONS(1095), 1,
      sym__dedent,
    STATE(347), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1051), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [10725] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1097), 1,
      sym__newline,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(374), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10745] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1099), 1,
      sym__newline,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(374), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10765] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1101), 1,
      sym__newline,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(374), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10785] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1103), 1,
      sym__newline,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(374), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10805] = 3,
    ACTIONS(1105), 1,
      sym__indent,
    STATE(438), 1,
      sym_children,
    ACTIONS(439), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [10819] = 4,
    ACTIONS(1053), 1,
      sym__newline,
    ACTIONS(1107), 1,
      sym__dedent,
    STATE(347), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1051), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [10835] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1109), 1,
      sym__newline,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(374), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10855] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1111), 1,
      sym__newline,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(374), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10875] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1113), 1,
      sym__newline,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(374), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10895] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1115), 1,
      sym__newline,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(374), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10915] = 4,
    ACTIONS(1053), 1,
      sym__newline,
    ACTIONS(1117), 1,
      sym__dedent,
    STATE(347), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1051), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [10931] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1119), 1,
      sym__newline,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(360), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10951] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1121), 1,
      sym__newline,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(374), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10971] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(317), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(384), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [10991] = 4,
    ACTIONS(1053), 1,
      sym__newline,
    ACTIONS(1123), 1,
      sym__dedent,
    STATE(347), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1051), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [11007] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1125), 1,
      sym__newline,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(374), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11027] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1127), 1,
      sym__newline,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(374), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11047] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(322), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(384), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11067] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(324), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(384), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11087] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(321), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(384), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11107] = 4,
    ACTIONS(1053), 1,
      sym__newline,
    ACTIONS(1129), 1,
      sym__dedent,
    STATE(347), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1051), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [11123] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1131), 1,
      sym__newline,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(378), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11143] = 6,
    ACTIONS(1133), 1,
      aux_sym_content_token1,
    ACTIONS(1136), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(1139), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1142), 1,
      sym__newline,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(374), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11163] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1144), 1,
      sym__newline,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(374), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11183] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1146), 1,
      sym__newline,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(375), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11203] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(320), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(384), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11223] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1148), 1,
      sym__newline,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(374), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11243] = 3,
    ACTIONS(1057), 1,
      sym__indent,
    STATE(434), 1,
      sym_children,
    ACTIONS(500), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [11257] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1150), 1,
      sym__newline,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(374), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11277] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(328), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(384), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11297] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1152), 1,
      sym__newline,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(374), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11317] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(319), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(384), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11337] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1154), 1,
      sym__newline,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(374), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11357] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1156), 1,
      sym__newline,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(374), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11377] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(316), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(384), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11397] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(315), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(384), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11417] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1158), 1,
      sym__newline,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(374), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11437] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1160), 1,
      sym__newline,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(388), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11457] = 3,
    ACTIONS(1057), 1,
      sym__indent,
    STATE(432), 1,
      sym_children,
    ACTIONS(490), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [11471] = 6,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(327), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(384), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11491] = 5,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(354), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11508] = 2,
    ACTIONS(1162), 1,
      sym__indent,
    ACTIONS(508), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [11519] = 5,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(382), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11536] = 3,
    ACTIONS(1164), 1,
      sym__newline,
    STATE(340), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1051), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [11549] = 5,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(368), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11566] = 3,
    ACTIONS(1166), 1,
      sym__newline,
    STATE(333), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1051), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [11579] = 4,
    ACTIONS(1170), 1,
      anon_sym_,
    ACTIONS(1172), 1,
      anon_sym_DOT,
    STATE(398), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(1168), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11594] = 5,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(355), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11611] = 3,
    ACTIONS(1175), 1,
      sym__newline,
    STATE(330), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1051), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [11624] = 5,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(332), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11641] = 5,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(342), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11658] = 2,
    ACTIONS(1179), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(1177), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [11669] = 5,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(339), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11686] = 5,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(358), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11703] = 5,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(344), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11720] = 5,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(361), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11737] = 5,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(359), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11754] = 5,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(367), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11771] = 5,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(349), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11788] = 3,
    ACTIONS(1181), 1,
      sym__newline,
    STATE(357), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1051), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [11801] = 5,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(380), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11818] = 3,
    ACTIONS(1183), 1,
      sym__newline,
    STATE(351), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1051), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [11831] = 5,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(352), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11848] = 4,
    ACTIONS(1187), 1,
      anon_sym_POUND,
    ACTIONS(1189), 1,
      anon_sym_LBRACE,
    ACTIONS(1185), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1191), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [11863] = 3,
    ACTIONS(1193), 1,
      sym__newline,
    STATE(366), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1051), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [11876] = 3,
    ACTIONS(1195), 1,
      sym__newline,
    STATE(362), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1051), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [11889] = 2,
    ACTIONS(1199), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(1197), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [11900] = 5,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(353), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11917] = 5,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(334), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11934] = 5,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(336), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11951] = 3,
    ACTIONS(1201), 1,
      sym__newline,
    STATE(372), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(1051), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [11964] = 5,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(364), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [11981] = 2,
    ACTIONS(1205), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(1203), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [11992] = 5,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(350), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12009] = 5,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(994), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(996), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(433), 1,
      aux_sym_content_repeat1,
    STATE(385), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [12026] = 1,
    ACTIONS(927), 5,
      anon_sym_RPAREN,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
      sym_attribute_name,
  [12034] = 1,
    ACTIONS(639), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12042] = 3,
    ACTIONS(1209), 1,
      anon_sym_LBRACE,
    ACTIONS(1207), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1211), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [12054] = 3,
    STATE(130), 1,
      sym_tag,
    STATE(131), 1,
      sym__dummy_tag,
    ACTIONS(144), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12066] = 3,
    STATE(112), 1,
      sym_tag,
    STATE(120), 1,
      sym__dummy_tag,
    ACTIONS(110), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12078] = 1,
    ACTIONS(619), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12086] = 4,
    ACTIONS(992), 1,
      aux_sym_content_token1,
    ACTIONS(1215), 1,
      sym__newline,
    STATE(448), 1,
      aux_sym_content_repeat1,
    ACTIONS(1213), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [12100] = 1,
    ACTIONS(490), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12108] = 3,
    STATE(168), 1,
      sym__dummy_tag,
    STATE(169), 1,
      sym_tag,
    ACTIONS(1217), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12120] = 4,
    ACTIONS(1219), 1,
      anon_sym_when,
    ACTIONS(1221), 1,
      anon_sym_default,
    STATE(514), 1,
      sym__when_keyword,
    STATE(45), 2,
      sym_when,
      aux_sym_case_repeat1,
  [12134] = 1,
    ACTIONS(439), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12142] = 1,
    ACTIONS(500), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12150] = 1,
    ACTIONS(661), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12158] = 1,
    ACTIONS(467), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12166] = 1,
    ACTIONS(635), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12174] = 1,
    ACTIONS(627), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12182] = 1,
    ACTIONS(480), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12190] = 4,
    ACTIONS(1219), 1,
      anon_sym_when,
    ACTIONS(1223), 1,
      anon_sym_default,
    STATE(524), 1,
      sym__when_keyword,
    STATE(74), 2,
      sym_when,
      aux_sym_case_repeat1,
  [12204] = 1,
    ACTIONS(665), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12212] = 4,
    ACTIONS(1219), 1,
      anon_sym_when,
    ACTIONS(1225), 1,
      anon_sym_default,
    STATE(499), 1,
      sym__when_keyword,
    STATE(43), 2,
      sym_when,
      aux_sym_case_repeat1,
  [12226] = 1,
    ACTIONS(568), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [12234] = 4,
    ACTIONS(1207), 1,
      sym__newline,
    ACTIONS(1227), 1,
      aux_sym_content_token1,
    STATE(448), 1,
      aux_sym_content_repeat1,
    ACTIONS(1211), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [12248] = 2,
    ACTIONS(1170), 1,
      anon_sym_,
    ACTIONS(1168), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12258] = 3,
    ACTIONS(1230), 1,
      anon_sym_EQ,
    ACTIONS(1232), 1,
      anon_sym_,
    ACTIONS(1234), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12269] = 2,
    STATE(177), 1,
      sym_tag,
    ACTIONS(144), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12278] = 2,
    STATE(258), 1,
      sym_tag,
    ACTIONS(301), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12287] = 2,
    STATE(254), 1,
      sym_tag,
    ACTIONS(301), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12296] = 2,
    STATE(249), 1,
      sym_tag,
    ACTIONS(301), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12305] = 2,
    STATE(443), 1,
      sym_tag,
    ACTIONS(1051), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12314] = 2,
    ACTIONS(1236), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1238), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [12323] = 4,
    ACTIONS(1240), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1242), 1,
      sym__newline,
    STATE(93), 1,
      sym__single_line_buf_code,
    STATE(628), 1,
      sym__un_delimited_javascript,
  [12336] = 2,
    ACTIONS(1244), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1246), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [12345] = 2,
    ACTIONS(1041), 2,
      sym__dedent,
      aux_sym_content_token1,
    ACTIONS(1248), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [12354] = 2,
    STATE(437), 1,
      sym_tag,
    ACTIONS(1051), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12363] = 2,
    STATE(114), 1,
      sym_tag,
    ACTIONS(110), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12372] = 4,
    ACTIONS(1250), 1,
      aux_sym_script_block_token1,
    ACTIONS(1252), 1,
      sym__newline,
    ACTIONS(1254), 1,
      sym__dedent,
    STATE(468), 1,
      aux_sym_script_block_repeat1,
  [12385] = 2,
    STATE(438), 1,
      sym_tag,
    ACTIONS(1051), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12394] = 4,
    ACTIONS(1250), 1,
      aux_sym_script_block_token1,
    ACTIONS(1252), 1,
      sym__newline,
    ACTIONS(1256), 1,
      sym__dedent,
    STATE(468), 1,
      aux_sym_script_block_repeat1,
  [12407] = 4,
    ACTIONS(1250), 1,
      aux_sym_script_block_token1,
    ACTIONS(1252), 1,
      sym__newline,
    ACTIONS(1258), 1,
      sym__dedent,
    STATE(468), 1,
      aux_sym_script_block_repeat1,
  [12420] = 2,
    STATE(193), 1,
      sym_tag,
    ACTIONS(261), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12429] = 2,
    STATE(271), 1,
      sym_tag,
    ACTIONS(29), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12438] = 4,
    ACTIONS(1260), 1,
      aux_sym_script_block_token1,
    ACTIONS(1263), 1,
      sym__newline,
    ACTIONS(1266), 1,
      sym__dedent,
    STATE(468), 1,
      aux_sym_script_block_repeat1,
  [12451] = 2,
    STATE(109), 1,
      sym_tag,
    ACTIONS(110), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12460] = 2,
    ACTIONS(1207), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1211), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [12469] = 4,
    ACTIONS(1240), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1268), 1,
      sym__newline,
    STATE(157), 1,
      sym__single_line_buf_code,
    STATE(603), 1,
      sym__un_delimited_javascript,
  [12482] = 2,
    STATE(279), 1,
      sym_tag,
    ACTIONS(29), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12491] = 4,
    ACTIONS(1240), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1270), 1,
      sym__newline,
    STATE(194), 1,
      sym__single_line_buf_code,
    STATE(587), 1,
      sym__un_delimited_javascript,
  [12504] = 2,
    STATE(270), 1,
      sym_tag,
    ACTIONS(29), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12513] = 2,
    STATE(98), 1,
      sym_tag,
    ACTIONS(110), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12522] = 2,
    STATE(197), 1,
      sym_tag,
    ACTIONS(261), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12531] = 2,
    STATE(141), 1,
      sym_tag,
    ACTIONS(1217), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12540] = 2,
    ACTIONS(1274), 1,
      anon_sym_,
    ACTIONS(1272), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12549] = 4,
    ACTIONS(1250), 1,
      aux_sym_script_block_token1,
    ACTIONS(1252), 1,
      sym__newline,
    ACTIONS(1276), 1,
      sym__dedent,
    STATE(468), 1,
      aux_sym_script_block_repeat1,
  [12562] = 2,
    STATE(137), 1,
      sym_tag,
    ACTIONS(1217), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12571] = 2,
    STATE(132), 1,
      sym_tag,
    ACTIONS(1217), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12580] = 2,
    STATE(178), 1,
      sym_tag,
    ACTIONS(144), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12589] = 2,
    STATE(207), 1,
      sym_tag,
    ACTIONS(261), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12598] = 4,
    ACTIONS(1240), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1278), 1,
      sym__newline,
    STATE(251), 1,
      sym__single_line_buf_code,
    STATE(576), 1,
      sym__un_delimited_javascript,
  [12611] = 2,
    STATE(181), 1,
      sym_tag,
    ACTIONS(144), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [12620] = 4,
    ACTIONS(1240), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(1280), 1,
      sym__newline,
    STATE(232), 1,
      sym__single_line_buf_code,
    STATE(608), 1,
      sym__un_delimited_javascript,
  [12633] = 4,
    ACTIONS(1250), 1,
      aux_sym_script_block_token1,
    ACTIONS(1252), 1,
      sym__newline,
    ACTIONS(1282), 1,
      sym__dedent,
    STATE(468), 1,
      aux_sym_script_block_repeat1,
  [12646] = 3,
    ACTIONS(1284), 1,
      sym__un_delimited_javascript_line,
    STATE(142), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(247), 1,
      sym__multi_line_buf_code,
  [12656] = 3,
    ACTIONS(1286), 1,
      sym__un_delimited_javascript_line,
    STATE(144), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(246), 1,
      sym__multi_line_buf_code,
  [12666] = 3,
    ACTIONS(1288), 1,
      anon_sym_SQUOTE,
    ACTIONS(1290), 1,
      anon_sym_DQUOTE,
    STATE(518), 1,
      sym_quoted_javascript,
  [12676] = 3,
    ACTIONS(1292), 1,
      sym__un_delimited_javascript_line,
    STATE(100), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(212), 1,
      sym__multi_line_buf_code,
  [12686] = 2,
    ACTIONS(1294), 1,
      anon_sym_,
    ACTIONS(1296), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12694] = 3,
    ACTIONS(1240), 1,
      sym__un_delimited_javascript_line,
    STATE(441), 1,
      sym__single_line_buf_code,
    STATE(604), 1,
      sym__un_delimited_javascript,
  [12704] = 3,
    ACTIONS(1298), 1,
      anon_sym_,
    ACTIONS(1300), 1,
      anon_sym_COMMA,
    ACTIONS(1302), 1,
      anon_sym_RPAREN,
  [12714] = 3,
    ACTIONS(1240), 1,
      sym__un_delimited_javascript_line,
    STATE(428), 1,
      sym__single_line_buf_code,
    STATE(604), 1,
      sym__un_delimited_javascript,
  [12724] = 2,
    ACTIONS(1304), 1,
      anon_sym_,
    ACTIONS(1306), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12732] = 3,
    ACTIONS(1298), 1,
      anon_sym_,
    ACTIONS(1300), 1,
      anon_sym_COMMA,
    ACTIONS(1308), 1,
      anon_sym_RPAREN,
  [12742] = 2,
    ACTIONS(1310), 1,
      anon_sym_,
    ACTIONS(1312), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12750] = 3,
    ACTIONS(1314), 1,
      anon_sym_COLON,
    ACTIONS(1316), 1,
      sym__newline,
    STATE(96), 1,
      sym__when_content,
  [12760] = 1,
    ACTIONS(1318), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [12766] = 2,
    ACTIONS(1320), 1,
      anon_sym_,
    ACTIONS(1322), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12774] = 3,
    ACTIONS(1240), 1,
      sym__un_delimited_javascript_line,
    STATE(152), 1,
      sym__single_line_buf_code,
    STATE(597), 1,
      sym__un_delimited_javascript,
  [12784] = 3,
    ACTIONS(1240), 1,
      sym__un_delimited_javascript_line,
    STATE(154), 1,
      sym__single_line_buf_code,
    STATE(597), 1,
      sym__un_delimited_javascript,
  [12794] = 2,
    ACTIONS(923), 1,
      anon_sym_,
    ACTIONS(925), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12802] = 3,
    ACTIONS(1250), 1,
      aux_sym_script_block_token1,
    ACTIONS(1252), 1,
      sym__newline,
    STATE(487), 1,
      aux_sym_script_block_repeat1,
  [12812] = 2,
    ACTIONS(1324), 1,
      anon_sym_,
    ACTIONS(1326), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12820] = 3,
    ACTIONS(1250), 1,
      aux_sym_script_block_token1,
    ACTIONS(1252), 1,
      sym__newline,
    STATE(464), 1,
      aux_sym_script_block_repeat1,
  [12830] = 3,
    ACTIONS(1240), 1,
      sym__un_delimited_javascript_line,
    STATE(115), 1,
      sym__single_line_buf_code,
    STATE(628), 1,
      sym__un_delimited_javascript,
  [12840] = 3,
    ACTIONS(1240), 1,
      sym__un_delimited_javascript_line,
    STATE(116), 1,
      sym__single_line_buf_code,
    STATE(628), 1,
      sym__un_delimited_javascript,
  [12850] = 2,
    ACTIONS(1328), 1,
      anon_sym_,
    ACTIONS(1330), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12858] = 1,
    ACTIONS(1332), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [12864] = 1,
    ACTIONS(1334), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [12870] = 2,
    ACTIONS(1336), 1,
      anon_sym_,
    ACTIONS(1338), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12878] = 3,
    ACTIONS(1340), 1,
      anon_sym_COLON,
    ACTIONS(1342), 1,
      sym__newline,
    STATE(135), 1,
      sym__when_content,
  [12888] = 3,
    ACTIONS(1344), 1,
      sym__un_delimited_javascript_line,
    STATE(57), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(121), 1,
      sym__multi_line_buf_code,
  [12898] = 3,
    ACTIONS(1346), 1,
      sym__un_delimited_javascript_line,
    STATE(67), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(161), 1,
      sym__multi_line_buf_code,
  [12908] = 2,
    ACTIONS(1348), 1,
      anon_sym_,
    ACTIONS(1350), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12916] = 2,
    ACTIONS(1352), 1,
      anon_sym_,
    ACTIONS(1354), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12924] = 3,
    ACTIONS(1250), 1,
      aux_sym_script_block_token1,
    ACTIONS(1252), 1,
      sym__newline,
    STATE(479), 1,
      aux_sym_script_block_repeat1,
  [12934] = 3,
    ACTIONS(1250), 1,
      aux_sym_script_block_token1,
    ACTIONS(1252), 1,
      sym__newline,
    STATE(465), 1,
      aux_sym_script_block_repeat1,
  [12944] = 3,
    ACTIONS(1240), 1,
      sym__un_delimited_javascript_line,
    STATE(244), 1,
      sym__single_line_buf_code,
    STATE(576), 1,
      sym__un_delimited_javascript,
  [12954] = 3,
    ACTIONS(1240), 1,
      sym__un_delimited_javascript_line,
    STATE(231), 1,
      sym__single_line_buf_code,
    STATE(576), 1,
      sym__un_delimited_javascript,
  [12964] = 1,
    ACTIONS(1356), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [12970] = 3,
    ACTIONS(1358), 1,
      anon_sym_COLON,
    ACTIONS(1360), 1,
      sym__newline,
    STATE(149), 1,
      sym__when_content,
  [12980] = 2,
    ACTIONS(1362), 1,
      anon_sym_,
    ACTIONS(1364), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12988] = 2,
    ACTIONS(1366), 1,
      anon_sym_,
    ACTIONS(1368), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12996] = 3,
    ACTIONS(1240), 1,
      sym__un_delimited_javascript_line,
    STATE(267), 1,
      sym__single_line_buf_code,
    STATE(601), 1,
      sym__un_delimited_javascript,
  [13006] = 3,
    ACTIONS(1240), 1,
      sym__un_delimited_javascript_line,
    STATE(265), 1,
      sym__single_line_buf_code,
    STATE(601), 1,
      sym__un_delimited_javascript,
  [13016] = 3,
    ACTIONS(1240), 1,
      sym__un_delimited_javascript_line,
    STATE(201), 1,
      sym__single_line_buf_code,
    STATE(587), 1,
      sym__un_delimited_javascript,
  [13026] = 1,
    ACTIONS(1266), 3,
      sym__newline,
      sym__dedent,
      aux_sym_script_block_token1,
  [13032] = 3,
    ACTIONS(1240), 1,
      sym__un_delimited_javascript_line,
    STATE(202), 1,
      sym__single_line_buf_code,
    STATE(587), 1,
      sym__un_delimited_javascript,
  [13042] = 1,
    ACTIONS(1370), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [13048] = 3,
    ACTIONS(1250), 1,
      aux_sym_script_block_token1,
    ACTIONS(1252), 1,
      sym__newline,
    STATE(462), 1,
      aux_sym_script_block_repeat1,
  [13058] = 2,
    ACTIONS(1372), 1,
      anon_sym_,
    ACTIONS(1374), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13066] = 1,
    ACTIONS(1376), 3,
      sym__newline,
      sym__dedent,
      aux_sym_script_block_token1,
  [13072] = 3,
    ACTIONS(1240), 1,
      sym__un_delimited_javascript_line,
    STATE(173), 1,
      sym__single_line_buf_code,
    STATE(603), 1,
      sym__un_delimited_javascript,
  [13082] = 3,
    ACTIONS(1240), 1,
      sym__un_delimited_javascript_line,
    STATE(174), 1,
      sym__single_line_buf_code,
    STATE(603), 1,
      sym__un_delimited_javascript,
  [13092] = 2,
    ACTIONS(1378), 1,
      anon_sym_,
    ACTIONS(1380), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13100] = 2,
    ACTIONS(1382), 1,
      sym__comment_content,
    STATE(86), 1,
      aux_sym_comment_repeat1,
  [13107] = 2,
    ACTIONS(1384), 1,
      sym__comment_content,
    STATE(50), 1,
      aux_sym_comment_repeat1,
  [13114] = 2,
    ACTIONS(1386), 1,
      sym__comment_content,
    STATE(79), 1,
      aux_sym_comment_repeat1,
  [13121] = 2,
    ACTIONS(1388), 1,
      sym__comment_content,
    ACTIONS(1390), 1,
      sym__newline,
  [13128] = 2,
    ACTIONS(517), 1,
      sym__indent,
    STATE(156), 1,
      sym_children,
  [13135] = 2,
    ACTIONS(517), 1,
      sym__indent,
    STATE(158), 1,
      sym_children,
  [13142] = 2,
    ACTIONS(1298), 1,
      anon_sym_,
    ACTIONS(1300), 1,
      anon_sym_COMMA,
  [13149] = 2,
    ACTIONS(1240), 1,
      sym__un_delimited_javascript_line,
    STATE(606), 1,
      sym__un_delimited_javascript,
  [13156] = 2,
    ACTIONS(1240), 1,
      sym__un_delimited_javascript_line,
    STATE(595), 1,
      sym__un_delimited_javascript,
  [13163] = 2,
    ACTIONS(1240), 1,
      sym__un_delimited_javascript_line,
    STATE(586), 1,
      sym__un_delimited_javascript,
  [13170] = 2,
    ACTIONS(1240), 1,
      sym__un_delimited_javascript_line,
    STATE(577), 1,
      sym__un_delimited_javascript,
  [13177] = 2,
    ACTIONS(1386), 1,
      sym__comment_content,
    STATE(70), 1,
      aux_sym_comment_repeat1,
  [13184] = 2,
    ACTIONS(1392), 1,
      sym__comment_content,
    STATE(198), 1,
      aux_sym_comment_repeat1,
  [13191] = 2,
    ACTIONS(715), 1,
      sym__indent,
    STATE(263), 1,
      sym_children,
  [13198] = 2,
    ACTIONS(1394), 1,
      sym__comment_content,
    STATE(140), 1,
      aux_sym_comment_repeat1,
  [13205] = 1,
    ACTIONS(1396), 2,
      sym__newline,
      anon_sym_COLON,
  [13210] = 2,
    ACTIONS(1384), 1,
      sym__comment_content,
    STATE(54), 1,
      aux_sym_comment_repeat1,
  [13217] = 2,
    ACTIONS(1394), 1,
      sym__comment_content,
    STATE(134), 1,
      aux_sym_comment_repeat1,
  [13224] = 2,
    ACTIONS(1398), 1,
      sym__comment_content,
    ACTIONS(1400), 1,
      sym__newline,
  [13231] = 2,
    ACTIONS(599), 1,
      sym__indent,
    STATE(191), 1,
      sym_children,
  [13238] = 2,
    ACTIONS(700), 1,
      sym__indent,
    STATE(252), 1,
      sym_children,
  [13245] = 2,
    ACTIONS(1402), 1,
      sym__comment_content,
    ACTIONS(1404), 1,
      sym__newline,
  [13252] = 2,
    ACTIONS(1406), 1,
      anon_sym_SQUOTE,
    ACTIONS(1408), 1,
      aux_sym_quoted_javascript_token1,
  [13259] = 2,
    ACTIONS(1406), 1,
      anon_sym_DQUOTE,
    ACTIONS(1410), 1,
      aux_sym_quoted_javascript_token2,
  [13266] = 2,
    ACTIONS(599), 1,
      sym__indent,
    STATE(195), 1,
      sym_children,
  [13273] = 2,
    ACTIONS(700), 1,
      sym__indent,
    STATE(236), 1,
      sym_children,
  [13280] = 2,
    ACTIONS(715), 1,
      sym__indent,
    STATE(259), 1,
      sym_children,
  [13287] = 2,
    ACTIONS(459), 1,
      sym__indent,
    STATE(95), 1,
      sym_children,
  [13294] = 2,
    ACTIONS(1412), 1,
      anon_sym_DQUOTE,
    ACTIONS(1414), 1,
      aux_sym_quoted_javascript_token2,
  [13301] = 2,
    ACTIONS(1416), 1,
      sym__comment_content,
    ACTIONS(1418), 1,
      sym__newline,
  [13308] = 2,
    ACTIONS(1412), 1,
      anon_sym_SQUOTE,
    ACTIONS(1420), 1,
      aux_sym_quoted_javascript_token1,
  [13315] = 2,
    ACTIONS(1240), 1,
      sym__un_delimited_javascript_line,
    STATE(596), 1,
      sym__un_delimited_javascript,
  [13322] = 2,
    ACTIONS(1392), 1,
      sym__comment_content,
    STATE(219), 1,
      aux_sym_comment_repeat1,
  [13329] = 2,
    ACTIONS(459), 1,
      sym__indent,
    STATE(89), 1,
      sym_children,
  [13336] = 2,
    ACTIONS(1422), 1,
      sym__comment_content,
    ACTIONS(1424), 1,
      sym__newline,
  [13343] = 2,
    ACTIONS(1382), 1,
      sym__comment_content,
    STATE(103), 1,
      aux_sym_comment_repeat1,
  [13350] = 1,
    ACTIONS(1426), 1,
      sym__newline,
  [13354] = 1,
    ACTIONS(1428), 1,
      sym__newline,
  [13358] = 1,
    ACTIONS(1430), 1,
      sym__newline,
  [13362] = 1,
    ACTIONS(1432), 1,
      sym__un_delimited_javascript_line,
  [13366] = 1,
    ACTIONS(1434), 1,
      sym__indent,
  [13370] = 1,
    ACTIONS(1436), 1,
      sym__newline,
  [13374] = 1,
    ACTIONS(1438), 1,
      ts_builtin_sym_end,
  [13378] = 1,
    ACTIONS(1440), 1,
      sym__indent,
  [13382] = 1,
    ACTIONS(1442), 1,
      sym__newline,
  [13386] = 1,
    ACTIONS(1444), 1,
      sym__newline,
  [13390] = 1,
    ACTIONS(1446), 1,
      aux_sym_unbuffered_code_token1,
  [13394] = 1,
    ACTIONS(1448), 1,
      sym__newline,
  [13398] = 1,
    ACTIONS(1450), 1,
      sym__newline,
  [13402] = 1,
    ACTIONS(1452), 1,
      sym__indent,
  [13406] = 1,
    ACTIONS(1454), 1,
      sym__indent,
  [13410] = 1,
    ACTIONS(1456), 1,
      sym__delimited_javascript,
  [13414] = 1,
    ACTIONS(1458), 1,
      sym__delimited_javascript,
  [13418] = 1,
    ACTIONS(1460), 1,
      sym__newline,
  [13422] = 1,
    ACTIONS(1462), 1,
      sym__newline,
  [13426] = 1,
    ACTIONS(1464), 1,
      aux_sym_unbuffered_code_token1,
  [13430] = 1,
    ACTIONS(1466), 1,
      sym__newline,
  [13434] = 1,
    ACTIONS(1468), 1,
      sym__newline,
  [13438] = 1,
    ACTIONS(1470), 1,
      sym__newline,
  [13442] = 1,
    ACTIONS(1472), 1,
      sym__newline,
  [13446] = 1,
    ACTIONS(1474), 1,
      sym__indent,
  [13450] = 1,
    ACTIONS(1476), 1,
      sym__newline,
  [13454] = 1,
    ACTIONS(1478), 1,
      sym__newline,
  [13458] = 1,
    ACTIONS(1480), 1,
      sym__newline,
  [13462] = 1,
    ACTIONS(1482), 1,
      sym__newline,
  [13466] = 1,
    ACTIONS(1484), 1,
      sym__newline,
  [13470] = 1,
    ACTIONS(1486), 1,
      aux_sym_unbuffered_code_token1,
  [13474] = 1,
    ACTIONS(1488), 1,
      sym__newline,
  [13478] = 1,
    ACTIONS(1490), 1,
      sym__newline,
  [13482] = 1,
    ACTIONS(1492), 1,
      sym__newline,
  [13486] = 1,
    ACTIONS(1494), 1,
      sym__newline,
  [13490] = 1,
    ACTIONS(1496), 1,
      sym__indent,
  [13494] = 1,
    ACTIONS(1498), 1,
      aux_sym_unbuffered_code_token1,
  [13498] = 1,
    ACTIONS(1500), 1,
      sym__indent,
  [13502] = 1,
    ACTIONS(1502), 1,
      sym__newline,
  [13506] = 1,
    ACTIONS(1504), 1,
      sym__newline,
  [13510] = 1,
    ACTIONS(1506), 1,
      sym__indent,
  [13514] = 1,
    ACTIONS(1508), 1,
      anon_sym_RBRACE,
  [13518] = 1,
    ACTIONS(1508), 1,
      anon_sym_RBRACE_RBRACE,
  [13522] = 1,
    ACTIONS(1510), 1,
      anon_sym_DQUOTE,
  [13526] = 1,
    ACTIONS(1510), 1,
      anon_sym_SQUOTE,
  [13530] = 1,
    ACTIONS(1512), 1,
      aux_sym__when_keyword_token1,
  [13534] = 1,
    ACTIONS(1514), 1,
      sym__indent,
  [13538] = 1,
    ACTIONS(1516), 1,
      aux_sym_unbuffered_code_token1,
  [13542] = 1,
    ACTIONS(1518), 1,
      sym__indent,
  [13546] = 1,
    ACTIONS(1520), 1,
      aux_sym__attribute_token1,
  [13550] = 1,
    ACTIONS(1522), 1,
      sym__indent,
  [13554] = 1,
    ACTIONS(1524), 1,
      sym__newline,
  [13558] = 1,
    ACTIONS(1526), 1,
      sym__newline,
  [13562] = 1,
    ACTIONS(1528), 1,
      sym__newline,
  [13566] = 1,
    ACTIONS(1530), 1,
      sym__newline,
  [13570] = 1,
    ACTIONS(1532), 1,
      sym__indent,
  [13574] = 1,
    ACTIONS(1534), 1,
      sym__indent,
  [13578] = 1,
    ACTIONS(1536), 1,
      sym__indent,
  [13582] = 1,
    ACTIONS(1538), 1,
      anon_sym_DQUOTE,
  [13586] = 1,
    ACTIONS(1540), 1,
      sym__newline,
  [13590] = 1,
    ACTIONS(1542), 1,
      sym__indent,
  [13594] = 1,
    ACTIONS(1544), 1,
      sym__indent,
  [13598] = 1,
    ACTIONS(1546), 1,
      sym__indent,
  [13602] = 1,
    ACTIONS(1538), 1,
      anon_sym_SQUOTE,
  [13606] = 1,
    ACTIONS(1548), 1,
      sym__indent,
  [13610] = 1,
    ACTIONS(1550), 1,
      sym__indent,
  [13614] = 1,
    ACTIONS(1552), 1,
      sym__indent,
  [13618] = 1,
    ACTIONS(1554), 1,
      sym__newline,
  [13622] = 1,
    ACTIONS(1556), 1,
      sym__indent,
  [13626] = 1,
    ACTIONS(1558), 1,
      sym__indent,
  [13630] = 1,
    ACTIONS(1560), 1,
      sym__indent,
  [13634] = 1,
    ACTIONS(1562), 1,
      sym__indent,
  [13638] = 1,
    ACTIONS(1564), 1,
      sym__indent,
  [13642] = 1,
    ACTIONS(1566), 1,
      sym__indent,
  [13646] = 1,
    ACTIONS(1568), 1,
      sym__indent,
  [13650] = 1,
    ACTIONS(1570), 1,
      sym__un_delimited_javascript_line,
  [13654] = 1,
    ACTIONS(1572), 1,
      sym__newline,
  [13658] = 1,
    ACTIONS(1574), 1,
      sym__newline,
  [13662] = 1,
    ACTIONS(1576), 1,
      sym__newline,
  [13666] = 1,
    ACTIONS(1578), 1,
      sym__un_delimited_javascript_line,
  [13670] = 1,
    ACTIONS(1580), 1,
      sym__newline,
  [13674] = 1,
    ACTIONS(1582), 1,
      sym__newline,
  [13678] = 1,
    ACTIONS(1584), 1,
      sym__newline,
  [13682] = 1,
    ACTIONS(1586), 1,
      sym__newline,
  [13686] = 1,
    ACTIONS(1588), 1,
      sym__newline,
  [13690] = 1,
    ACTIONS(1590), 1,
      sym__newline,
  [13694] = 1,
    ACTIONS(1592), 1,
      sym__newline,
  [13698] = 1,
    ACTIONS(1594), 1,
      sym__newline,
  [13702] = 1,
    ACTIONS(1596), 1,
      sym__newline,
  [13706] = 1,
    ACTIONS(1598), 1,
      sym__newline,
  [13710] = 1,
    ACTIONS(1600), 1,
      sym__newline,
  [13714] = 1,
    ACTIONS(1602), 1,
      sym__newline,
  [13718] = 1,
    ACTIONS(1604), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 70,
  [SMALL_STATE(4)] = 142,
  [SMALL_STATE(5)] = 214,
  [SMALL_STATE(6)] = 283,
  [SMALL_STATE(7)] = 352,
  [SMALL_STATE(8)] = 418,
  [SMALL_STATE(9)] = 486,
  [SMALL_STATE(10)] = 554,
  [SMALL_STATE(11)] = 619,
  [SMALL_STATE(12)] = 684,
  [SMALL_STATE(13)] = 749,
  [SMALL_STATE(14)] = 814,
  [SMALL_STATE(15)] = 879,
  [SMALL_STATE(16)] = 944,
  [SMALL_STATE(17)] = 1009,
  [SMALL_STATE(18)] = 1074,
  [SMALL_STATE(19)] = 1139,
  [SMALL_STATE(20)] = 1204,
  [SMALL_STATE(21)] = 1269,
  [SMALL_STATE(22)] = 1334,
  [SMALL_STATE(23)] = 1399,
  [SMALL_STATE(24)] = 1464,
  [SMALL_STATE(25)] = 1529,
  [SMALL_STATE(26)] = 1594,
  [SMALL_STATE(27)] = 1659,
  [SMALL_STATE(28)] = 1724,
  [SMALL_STATE(29)] = 1789,
  [SMALL_STATE(30)] = 1854,
  [SMALL_STATE(31)] = 1919,
  [SMALL_STATE(32)] = 1984,
  [SMALL_STATE(33)] = 2049,
  [SMALL_STATE(34)] = 2114,
  [SMALL_STATE(35)] = 2176,
  [SMALL_STATE(36)] = 2238,
  [SMALL_STATE(37)] = 2300,
  [SMALL_STATE(38)] = 2362,
  [SMALL_STATE(39)] = 2424,
  [SMALL_STATE(40)] = 2486,
  [SMALL_STATE(41)] = 2548,
  [SMALL_STATE(42)] = 2609,
  [SMALL_STATE(43)] = 2670,
  [SMALL_STATE(44)] = 2707,
  [SMALL_STATE(45)] = 2744,
  [SMALL_STATE(46)] = 2780,
  [SMALL_STATE(47)] = 2812,
  [SMALL_STATE(48)] = 2844,
  [SMALL_STATE(49)] = 2880,
  [SMALL_STATE(50)] = 2912,
  [SMALL_STATE(51)] = 2944,
  [SMALL_STATE(52)] = 2976,
  [SMALL_STATE(53)] = 3008,
  [SMALL_STATE(54)] = 3040,
  [SMALL_STATE(55)] = 3072,
  [SMALL_STATE(56)] = 3104,
  [SMALL_STATE(57)] = 3136,
  [SMALL_STATE(58)] = 3168,
  [SMALL_STATE(59)] = 3200,
  [SMALL_STATE(60)] = 3233,
  [SMALL_STATE(61)] = 3262,
  [SMALL_STATE(62)] = 3289,
  [SMALL_STATE(63)] = 3320,
  [SMALL_STATE(64)] = 3351,
  [SMALL_STATE(65)] = 3378,
  [SMALL_STATE(66)] = 3409,
  [SMALL_STATE(67)] = 3440,
  [SMALL_STATE(68)] = 3471,
  [SMALL_STATE(69)] = 3502,
  [SMALL_STATE(70)] = 3533,
  [SMALL_STATE(71)] = 3564,
  [SMALL_STATE(72)] = 3595,
  [SMALL_STATE(73)] = 3626,
  [SMALL_STATE(74)] = 3657,
  [SMALL_STATE(75)] = 3692,
  [SMALL_STATE(76)] = 3723,
  [SMALL_STATE(77)] = 3754,
  [SMALL_STATE(78)] = 3785,
  [SMALL_STATE(79)] = 3816,
  [SMALL_STATE(80)] = 3847,
  [SMALL_STATE(81)] = 3878,
  [SMALL_STATE(82)] = 3909,
  [SMALL_STATE(83)] = 3938,
  [SMALL_STATE(84)] = 3967,
  [SMALL_STATE(85)] = 4002,
  [SMALL_STATE(86)] = 4031,
  [SMALL_STATE(87)] = 4061,
  [SMALL_STATE(88)] = 4087,
  [SMALL_STATE(89)] = 4113,
  [SMALL_STATE(90)] = 4139,
  [SMALL_STATE(91)] = 4165,
  [SMALL_STATE(92)] = 4193,
  [SMALL_STATE(93)] = 4221,
  [SMALL_STATE(94)] = 4249,
  [SMALL_STATE(95)] = 4279,
  [SMALL_STATE(96)] = 4305,
  [SMALL_STATE(97)] = 4331,
  [SMALL_STATE(98)] = 4361,
  [SMALL_STATE(99)] = 4387,
  [SMALL_STATE(100)] = 4417,
  [SMALL_STATE(101)] = 4447,
  [SMALL_STATE(102)] = 4477,
  [SMALL_STATE(103)] = 4503,
  [SMALL_STATE(104)] = 4533,
  [SMALL_STATE(105)] = 4561,
  [SMALL_STATE(106)] = 4587,
  [SMALL_STATE(107)] = 4617,
  [SMALL_STATE(108)] = 4645,
  [SMALL_STATE(109)] = 4671,
  [SMALL_STATE(110)] = 4697,
  [SMALL_STATE(111)] = 4723,
  [SMALL_STATE(112)] = 4749,
  [SMALL_STATE(113)] = 4775,
  [SMALL_STATE(114)] = 4801,
  [SMALL_STATE(115)] = 4827,
  [SMALL_STATE(116)] = 4853,
  [SMALL_STATE(117)] = 4879,
  [SMALL_STATE(118)] = 4905,
  [SMALL_STATE(119)] = 4935,
  [SMALL_STATE(120)] = 4961,
  [SMALL_STATE(121)] = 4987,
  [SMALL_STATE(122)] = 5015,
  [SMALL_STATE(123)] = 5045,
  [SMALL_STATE(124)] = 5071,
  [SMALL_STATE(125)] = 5097,
  [SMALL_STATE(126)] = 5127,
  [SMALL_STATE(127)] = 5155,
  [SMALL_STATE(128)] = 5181,
  [SMALL_STATE(129)] = 5207,
  [SMALL_STATE(130)] = 5232,
  [SMALL_STATE(131)] = 5257,
  [SMALL_STATE(132)] = 5282,
  [SMALL_STATE(133)] = 5307,
  [SMALL_STATE(134)] = 5332,
  [SMALL_STATE(135)] = 5361,
  [SMALL_STATE(136)] = 5386,
  [SMALL_STATE(137)] = 5415,
  [SMALL_STATE(138)] = 5440,
  [SMALL_STATE(139)] = 5465,
  [SMALL_STATE(140)] = 5490,
  [SMALL_STATE(141)] = 5519,
  [SMALL_STATE(142)] = 5544,
  [SMALL_STATE(143)] = 5573,
  [SMALL_STATE(144)] = 5598,
  [SMALL_STATE(145)] = 5627,
  [SMALL_STATE(146)] = 5652,
  [SMALL_STATE(147)] = 5681,
  [SMALL_STATE(148)] = 5706,
  [SMALL_STATE(149)] = 5731,
  [SMALL_STATE(150)] = 5758,
  [SMALL_STATE(151)] = 5783,
  [SMALL_STATE(152)] = 5808,
  [SMALL_STATE(153)] = 5833,
  [SMALL_STATE(154)] = 5860,
  [SMALL_STATE(155)] = 5885,
  [SMALL_STATE(156)] = 5910,
  [SMALL_STATE(157)] = 5935,
  [SMALL_STATE(158)] = 5962,
  [SMALL_STATE(159)] = 5987,
  [SMALL_STATE(160)] = 6012,
  [SMALL_STATE(161)] = 6037,
  [SMALL_STATE(162)] = 6064,
  [SMALL_STATE(163)] = 6089,
  [SMALL_STATE(164)] = 6118,
  [SMALL_STATE(165)] = 6147,
  [SMALL_STATE(166)] = 6176,
  [SMALL_STATE(167)] = 6205,
  [SMALL_STATE(168)] = 6234,
  [SMALL_STATE(169)] = 6259,
  [SMALL_STATE(170)] = 6284,
  [SMALL_STATE(171)] = 6313,
  [SMALL_STATE(172)] = 6338,
  [SMALL_STATE(173)] = 6367,
  [SMALL_STATE(174)] = 6392,
  [SMALL_STATE(175)] = 6417,
  [SMALL_STATE(176)] = 6442,
  [SMALL_STATE(177)] = 6467,
  [SMALL_STATE(178)] = 6492,
  [SMALL_STATE(179)] = 6517,
  [SMALL_STATE(180)] = 6542,
  [SMALL_STATE(181)] = 6569,
  [SMALL_STATE(182)] = 6594,
  [SMALL_STATE(183)] = 6619,
  [SMALL_STATE(184)] = 6644,
  [SMALL_STATE(185)] = 6669,
  [SMALL_STATE(186)] = 6696,
  [SMALL_STATE(187)] = 6723,
  [SMALL_STATE(188)] = 6748,
  [SMALL_STATE(189)] = 6772,
  [SMALL_STATE(190)] = 6800,
  [SMALL_STATE(191)] = 6824,
  [SMALL_STATE(192)] = 6848,
  [SMALL_STATE(193)] = 6874,
  [SMALL_STATE(194)] = 6898,
  [SMALL_STATE(195)] = 6924,
  [SMALL_STATE(196)] = 6948,
  [SMALL_STATE(197)] = 6974,
  [SMALL_STATE(198)] = 6998,
  [SMALL_STATE(199)] = 7026,
  [SMALL_STATE(200)] = 7050,
  [SMALL_STATE(201)] = 7074,
  [SMALL_STATE(202)] = 7098,
  [SMALL_STATE(203)] = 7122,
  [SMALL_STATE(204)] = 7146,
  [SMALL_STATE(205)] = 7170,
  [SMALL_STATE(206)] = 7194,
  [SMALL_STATE(207)] = 7222,
  [SMALL_STATE(208)] = 7246,
  [SMALL_STATE(209)] = 7274,
  [SMALL_STATE(210)] = 7298,
  [SMALL_STATE(211)] = 7326,
  [SMALL_STATE(212)] = 7350,
  [SMALL_STATE(213)] = 7376,
  [SMALL_STATE(214)] = 7402,
  [SMALL_STATE(215)] = 7430,
  [SMALL_STATE(216)] = 7458,
  [SMALL_STATE(217)] = 7484,
  [SMALL_STATE(218)] = 7508,
  [SMALL_STATE(219)] = 7532,
  [SMALL_STATE(220)] = 7560,
  [SMALL_STATE(221)] = 7586,
  [SMALL_STATE(222)] = 7610,
  [SMALL_STATE(223)] = 7636,
  [SMALL_STATE(224)] = 7664,
  [SMALL_STATE(225)] = 7688,
  [SMALL_STATE(226)] = 7712,
  [SMALL_STATE(227)] = 7736,
  [SMALL_STATE(228)] = 7764,
  [SMALL_STATE(229)] = 7788,
  [SMALL_STATE(230)] = 7812,
  [SMALL_STATE(231)] = 7835,
  [SMALL_STATE(232)] = 7858,
  [SMALL_STATE(233)] = 7883,
  [SMALL_STATE(234)] = 7906,
  [SMALL_STATE(235)] = 7929,
  [SMALL_STATE(236)] = 7952,
  [SMALL_STATE(237)] = 7975,
  [SMALL_STATE(238)] = 7998,
  [SMALL_STATE(239)] = 8021,
  [SMALL_STATE(240)] = 8044,
  [SMALL_STATE(241)] = 8069,
  [SMALL_STATE(242)] = 8092,
  [SMALL_STATE(243)] = 8115,
  [SMALL_STATE(244)] = 8140,
  [SMALL_STATE(245)] = 8163,
  [SMALL_STATE(246)] = 8186,
  [SMALL_STATE(247)] = 8211,
  [SMALL_STATE(248)] = 8236,
  [SMALL_STATE(249)] = 8259,
  [SMALL_STATE(250)] = 8282,
  [SMALL_STATE(251)] = 8307,
  [SMALL_STATE(252)] = 8332,
  [SMALL_STATE(253)] = 8355,
  [SMALL_STATE(254)] = 8378,
  [SMALL_STATE(255)] = 8401,
  [SMALL_STATE(256)] = 8424,
  [SMALL_STATE(257)] = 8447,
  [SMALL_STATE(258)] = 8470,
  [SMALL_STATE(259)] = 8493,
  [SMALL_STATE(260)] = 8515,
  [SMALL_STATE(261)] = 8537,
  [SMALL_STATE(262)] = 8559,
  [SMALL_STATE(263)] = 8581,
  [SMALL_STATE(264)] = 8603,
  [SMALL_STATE(265)] = 8625,
  [SMALL_STATE(266)] = 8647,
  [SMALL_STATE(267)] = 8669,
  [SMALL_STATE(268)] = 8691,
  [SMALL_STATE(269)] = 8713,
  [SMALL_STATE(270)] = 8735,
  [SMALL_STATE(271)] = 8757,
  [SMALL_STATE(272)] = 8779,
  [SMALL_STATE(273)] = 8801,
  [SMALL_STATE(274)] = 8823,
  [SMALL_STATE(275)] = 8845,
  [SMALL_STATE(276)] = 8867,
  [SMALL_STATE(277)] = 8889,
  [SMALL_STATE(278)] = 8911,
  [SMALL_STATE(279)] = 8933,
  [SMALL_STATE(280)] = 8955,
  [SMALL_STATE(281)] = 8992,
  [SMALL_STATE(282)] = 9029,
  [SMALL_STATE(283)] = 9066,
  [SMALL_STATE(284)] = 9103,
  [SMALL_STATE(285)] = 9140,
  [SMALL_STATE(286)] = 9177,
  [SMALL_STATE(287)] = 9214,
  [SMALL_STATE(288)] = 9251,
  [SMALL_STATE(289)] = 9288,
  [SMALL_STATE(290)] = 9325,
  [SMALL_STATE(291)] = 9362,
  [SMALL_STATE(292)] = 9399,
  [SMALL_STATE(293)] = 9436,
  [SMALL_STATE(294)] = 9473,
  [SMALL_STATE(295)] = 9498,
  [SMALL_STATE(296)] = 9523,
  [SMALL_STATE(297)] = 9548,
  [SMALL_STATE(298)] = 9573,
  [SMALL_STATE(299)] = 9592,
  [SMALL_STATE(300)] = 9617,
  [SMALL_STATE(301)] = 9641,
  [SMALL_STATE(302)] = 9665,
  [SMALL_STATE(303)] = 9689,
  [SMALL_STATE(304)] = 9713,
  [SMALL_STATE(305)] = 9737,
  [SMALL_STATE(306)] = 9761,
  [SMALL_STATE(307)] = 9785,
  [SMALL_STATE(308)] = 9809,
  [SMALL_STATE(309)] = 9833,
  [SMALL_STATE(310)] = 9857,
  [SMALL_STATE(311)] = 9881,
  [SMALL_STATE(312)] = 9905,
  [SMALL_STATE(313)] = 9929,
  [SMALL_STATE(314)] = 9953,
  [SMALL_STATE(315)] = 9976,
  [SMALL_STATE(316)] = 9999,
  [SMALL_STATE(317)] = 10022,
  [SMALL_STATE(318)] = 10045,
  [SMALL_STATE(319)] = 10068,
  [SMALL_STATE(320)] = 10091,
  [SMALL_STATE(321)] = 10114,
  [SMALL_STATE(322)] = 10137,
  [SMALL_STATE(323)] = 10160,
  [SMALL_STATE(324)] = 10185,
  [SMALL_STATE(325)] = 10208,
  [SMALL_STATE(326)] = 10231,
  [SMALL_STATE(327)] = 10254,
  [SMALL_STATE(328)] = 10277,
  [SMALL_STATE(329)] = 10300,
  [SMALL_STATE(330)] = 10323,
  [SMALL_STATE(331)] = 10339,
  [SMALL_STATE(332)] = 10353,
  [SMALL_STATE(333)] = 10373,
  [SMALL_STATE(334)] = 10389,
  [SMALL_STATE(335)] = 10409,
  [SMALL_STATE(336)] = 10429,
  [SMALL_STATE(337)] = 10449,
  [SMALL_STATE(338)] = 10469,
  [SMALL_STATE(339)] = 10483,
  [SMALL_STATE(340)] = 10503,
  [SMALL_STATE(341)] = 10519,
  [SMALL_STATE(342)] = 10539,
  [SMALL_STATE(343)] = 10559,
  [SMALL_STATE(344)] = 10579,
  [SMALL_STATE(345)] = 10599,
  [SMALL_STATE(346)] = 10613,
  [SMALL_STATE(347)] = 10633,
  [SMALL_STATE(348)] = 10649,
  [SMALL_STATE(349)] = 10669,
  [SMALL_STATE(350)] = 10689,
  [SMALL_STATE(351)] = 10709,
  [SMALL_STATE(352)] = 10725,
  [SMALL_STATE(353)] = 10745,
  [SMALL_STATE(354)] = 10765,
  [SMALL_STATE(355)] = 10785,
  [SMALL_STATE(356)] = 10805,
  [SMALL_STATE(357)] = 10819,
  [SMALL_STATE(358)] = 10835,
  [SMALL_STATE(359)] = 10855,
  [SMALL_STATE(360)] = 10875,
  [SMALL_STATE(361)] = 10895,
  [SMALL_STATE(362)] = 10915,
  [SMALL_STATE(363)] = 10931,
  [SMALL_STATE(364)] = 10951,
  [SMALL_STATE(365)] = 10971,
  [SMALL_STATE(366)] = 10991,
  [SMALL_STATE(367)] = 11007,
  [SMALL_STATE(368)] = 11027,
  [SMALL_STATE(369)] = 11047,
  [SMALL_STATE(370)] = 11067,
  [SMALL_STATE(371)] = 11087,
  [SMALL_STATE(372)] = 11107,
  [SMALL_STATE(373)] = 11123,
  [SMALL_STATE(374)] = 11143,
  [SMALL_STATE(375)] = 11163,
  [SMALL_STATE(376)] = 11183,
  [SMALL_STATE(377)] = 11203,
  [SMALL_STATE(378)] = 11223,
  [SMALL_STATE(379)] = 11243,
  [SMALL_STATE(380)] = 11257,
  [SMALL_STATE(381)] = 11277,
  [SMALL_STATE(382)] = 11297,
  [SMALL_STATE(383)] = 11317,
  [SMALL_STATE(384)] = 11337,
  [SMALL_STATE(385)] = 11357,
  [SMALL_STATE(386)] = 11377,
  [SMALL_STATE(387)] = 11397,
  [SMALL_STATE(388)] = 11417,
  [SMALL_STATE(389)] = 11437,
  [SMALL_STATE(390)] = 11457,
  [SMALL_STATE(391)] = 11471,
  [SMALL_STATE(392)] = 11491,
  [SMALL_STATE(393)] = 11508,
  [SMALL_STATE(394)] = 11519,
  [SMALL_STATE(395)] = 11536,
  [SMALL_STATE(396)] = 11549,
  [SMALL_STATE(397)] = 11566,
  [SMALL_STATE(398)] = 11579,
  [SMALL_STATE(399)] = 11594,
  [SMALL_STATE(400)] = 11611,
  [SMALL_STATE(401)] = 11624,
  [SMALL_STATE(402)] = 11641,
  [SMALL_STATE(403)] = 11658,
  [SMALL_STATE(404)] = 11669,
  [SMALL_STATE(405)] = 11686,
  [SMALL_STATE(406)] = 11703,
  [SMALL_STATE(407)] = 11720,
  [SMALL_STATE(408)] = 11737,
  [SMALL_STATE(409)] = 11754,
  [SMALL_STATE(410)] = 11771,
  [SMALL_STATE(411)] = 11788,
  [SMALL_STATE(412)] = 11801,
  [SMALL_STATE(413)] = 11818,
  [SMALL_STATE(414)] = 11831,
  [SMALL_STATE(415)] = 11848,
  [SMALL_STATE(416)] = 11863,
  [SMALL_STATE(417)] = 11876,
  [SMALL_STATE(418)] = 11889,
  [SMALL_STATE(419)] = 11900,
  [SMALL_STATE(420)] = 11917,
  [SMALL_STATE(421)] = 11934,
  [SMALL_STATE(422)] = 11951,
  [SMALL_STATE(423)] = 11964,
  [SMALL_STATE(424)] = 11981,
  [SMALL_STATE(425)] = 11992,
  [SMALL_STATE(426)] = 12009,
  [SMALL_STATE(427)] = 12026,
  [SMALL_STATE(428)] = 12034,
  [SMALL_STATE(429)] = 12042,
  [SMALL_STATE(430)] = 12054,
  [SMALL_STATE(431)] = 12066,
  [SMALL_STATE(432)] = 12078,
  [SMALL_STATE(433)] = 12086,
  [SMALL_STATE(434)] = 12100,
  [SMALL_STATE(435)] = 12108,
  [SMALL_STATE(436)] = 12120,
  [SMALL_STATE(437)] = 12134,
  [SMALL_STATE(438)] = 12142,
  [SMALL_STATE(439)] = 12150,
  [SMALL_STATE(440)] = 12158,
  [SMALL_STATE(441)] = 12166,
  [SMALL_STATE(442)] = 12174,
  [SMALL_STATE(443)] = 12182,
  [SMALL_STATE(444)] = 12190,
  [SMALL_STATE(445)] = 12204,
  [SMALL_STATE(446)] = 12212,
  [SMALL_STATE(447)] = 12226,
  [SMALL_STATE(448)] = 12234,
  [SMALL_STATE(449)] = 12248,
  [SMALL_STATE(450)] = 12258,
  [SMALL_STATE(451)] = 12269,
  [SMALL_STATE(452)] = 12278,
  [SMALL_STATE(453)] = 12287,
  [SMALL_STATE(454)] = 12296,
  [SMALL_STATE(455)] = 12305,
  [SMALL_STATE(456)] = 12314,
  [SMALL_STATE(457)] = 12323,
  [SMALL_STATE(458)] = 12336,
  [SMALL_STATE(459)] = 12345,
  [SMALL_STATE(460)] = 12354,
  [SMALL_STATE(461)] = 12363,
  [SMALL_STATE(462)] = 12372,
  [SMALL_STATE(463)] = 12385,
  [SMALL_STATE(464)] = 12394,
  [SMALL_STATE(465)] = 12407,
  [SMALL_STATE(466)] = 12420,
  [SMALL_STATE(467)] = 12429,
  [SMALL_STATE(468)] = 12438,
  [SMALL_STATE(469)] = 12451,
  [SMALL_STATE(470)] = 12460,
  [SMALL_STATE(471)] = 12469,
  [SMALL_STATE(472)] = 12482,
  [SMALL_STATE(473)] = 12491,
  [SMALL_STATE(474)] = 12504,
  [SMALL_STATE(475)] = 12513,
  [SMALL_STATE(476)] = 12522,
  [SMALL_STATE(477)] = 12531,
  [SMALL_STATE(478)] = 12540,
  [SMALL_STATE(479)] = 12549,
  [SMALL_STATE(480)] = 12562,
  [SMALL_STATE(481)] = 12571,
  [SMALL_STATE(482)] = 12580,
  [SMALL_STATE(483)] = 12589,
  [SMALL_STATE(484)] = 12598,
  [SMALL_STATE(485)] = 12611,
  [SMALL_STATE(486)] = 12620,
  [SMALL_STATE(487)] = 12633,
  [SMALL_STATE(488)] = 12646,
  [SMALL_STATE(489)] = 12656,
  [SMALL_STATE(490)] = 12666,
  [SMALL_STATE(491)] = 12676,
  [SMALL_STATE(492)] = 12686,
  [SMALL_STATE(493)] = 12694,
  [SMALL_STATE(494)] = 12704,
  [SMALL_STATE(495)] = 12714,
  [SMALL_STATE(496)] = 12724,
  [SMALL_STATE(497)] = 12732,
  [SMALL_STATE(498)] = 12742,
  [SMALL_STATE(499)] = 12750,
  [SMALL_STATE(500)] = 12760,
  [SMALL_STATE(501)] = 12766,
  [SMALL_STATE(502)] = 12774,
  [SMALL_STATE(503)] = 12784,
  [SMALL_STATE(504)] = 12794,
  [SMALL_STATE(505)] = 12802,
  [SMALL_STATE(506)] = 12812,
  [SMALL_STATE(507)] = 12820,
  [SMALL_STATE(508)] = 12830,
  [SMALL_STATE(509)] = 12840,
  [SMALL_STATE(510)] = 12850,
  [SMALL_STATE(511)] = 12858,
  [SMALL_STATE(512)] = 12864,
  [SMALL_STATE(513)] = 12870,
  [SMALL_STATE(514)] = 12878,
  [SMALL_STATE(515)] = 12888,
  [SMALL_STATE(516)] = 12898,
  [SMALL_STATE(517)] = 12908,
  [SMALL_STATE(518)] = 12916,
  [SMALL_STATE(519)] = 12924,
  [SMALL_STATE(520)] = 12934,
  [SMALL_STATE(521)] = 12944,
  [SMALL_STATE(522)] = 12954,
  [SMALL_STATE(523)] = 12964,
  [SMALL_STATE(524)] = 12970,
  [SMALL_STATE(525)] = 12980,
  [SMALL_STATE(526)] = 12988,
  [SMALL_STATE(527)] = 12996,
  [SMALL_STATE(528)] = 13006,
  [SMALL_STATE(529)] = 13016,
  [SMALL_STATE(530)] = 13026,
  [SMALL_STATE(531)] = 13032,
  [SMALL_STATE(532)] = 13042,
  [SMALL_STATE(533)] = 13048,
  [SMALL_STATE(534)] = 13058,
  [SMALL_STATE(535)] = 13066,
  [SMALL_STATE(536)] = 13072,
  [SMALL_STATE(537)] = 13082,
  [SMALL_STATE(538)] = 13092,
  [SMALL_STATE(539)] = 13100,
  [SMALL_STATE(540)] = 13107,
  [SMALL_STATE(541)] = 13114,
  [SMALL_STATE(542)] = 13121,
  [SMALL_STATE(543)] = 13128,
  [SMALL_STATE(544)] = 13135,
  [SMALL_STATE(545)] = 13142,
  [SMALL_STATE(546)] = 13149,
  [SMALL_STATE(547)] = 13156,
  [SMALL_STATE(548)] = 13163,
  [SMALL_STATE(549)] = 13170,
  [SMALL_STATE(550)] = 13177,
  [SMALL_STATE(551)] = 13184,
  [SMALL_STATE(552)] = 13191,
  [SMALL_STATE(553)] = 13198,
  [SMALL_STATE(554)] = 13205,
  [SMALL_STATE(555)] = 13210,
  [SMALL_STATE(556)] = 13217,
  [SMALL_STATE(557)] = 13224,
  [SMALL_STATE(558)] = 13231,
  [SMALL_STATE(559)] = 13238,
  [SMALL_STATE(560)] = 13245,
  [SMALL_STATE(561)] = 13252,
  [SMALL_STATE(562)] = 13259,
  [SMALL_STATE(563)] = 13266,
  [SMALL_STATE(564)] = 13273,
  [SMALL_STATE(565)] = 13280,
  [SMALL_STATE(566)] = 13287,
  [SMALL_STATE(567)] = 13294,
  [SMALL_STATE(568)] = 13301,
  [SMALL_STATE(569)] = 13308,
  [SMALL_STATE(570)] = 13315,
  [SMALL_STATE(571)] = 13322,
  [SMALL_STATE(572)] = 13329,
  [SMALL_STATE(573)] = 13336,
  [SMALL_STATE(574)] = 13343,
  [SMALL_STATE(575)] = 13350,
  [SMALL_STATE(576)] = 13354,
  [SMALL_STATE(577)] = 13358,
  [SMALL_STATE(578)] = 13362,
  [SMALL_STATE(579)] = 13366,
  [SMALL_STATE(580)] = 13370,
  [SMALL_STATE(581)] = 13374,
  [SMALL_STATE(582)] = 13378,
  [SMALL_STATE(583)] = 13382,
  [SMALL_STATE(584)] = 13386,
  [SMALL_STATE(585)] = 13390,
  [SMALL_STATE(586)] = 13394,
  [SMALL_STATE(587)] = 13398,
  [SMALL_STATE(588)] = 13402,
  [SMALL_STATE(589)] = 13406,
  [SMALL_STATE(590)] = 13410,
  [SMALL_STATE(591)] = 13414,
  [SMALL_STATE(592)] = 13418,
  [SMALL_STATE(593)] = 13422,
  [SMALL_STATE(594)] = 13426,
  [SMALL_STATE(595)] = 13430,
  [SMALL_STATE(596)] = 13434,
  [SMALL_STATE(597)] = 13438,
  [SMALL_STATE(598)] = 13442,
  [SMALL_STATE(599)] = 13446,
  [SMALL_STATE(600)] = 13450,
  [SMALL_STATE(601)] = 13454,
  [SMALL_STATE(602)] = 13458,
  [SMALL_STATE(603)] = 13462,
  [SMALL_STATE(604)] = 13466,
  [SMALL_STATE(605)] = 13470,
  [SMALL_STATE(606)] = 13474,
  [SMALL_STATE(607)] = 13478,
  [SMALL_STATE(608)] = 13482,
  [SMALL_STATE(609)] = 13486,
  [SMALL_STATE(610)] = 13490,
  [SMALL_STATE(611)] = 13494,
  [SMALL_STATE(612)] = 13498,
  [SMALL_STATE(613)] = 13502,
  [SMALL_STATE(614)] = 13506,
  [SMALL_STATE(615)] = 13510,
  [SMALL_STATE(616)] = 13514,
  [SMALL_STATE(617)] = 13518,
  [SMALL_STATE(618)] = 13522,
  [SMALL_STATE(619)] = 13526,
  [SMALL_STATE(620)] = 13530,
  [SMALL_STATE(621)] = 13534,
  [SMALL_STATE(622)] = 13538,
  [SMALL_STATE(623)] = 13542,
  [SMALL_STATE(624)] = 13546,
  [SMALL_STATE(625)] = 13550,
  [SMALL_STATE(626)] = 13554,
  [SMALL_STATE(627)] = 13558,
  [SMALL_STATE(628)] = 13562,
  [SMALL_STATE(629)] = 13566,
  [SMALL_STATE(630)] = 13570,
  [SMALL_STATE(631)] = 13574,
  [SMALL_STATE(632)] = 13578,
  [SMALL_STATE(633)] = 13582,
  [SMALL_STATE(634)] = 13586,
  [SMALL_STATE(635)] = 13590,
  [SMALL_STATE(636)] = 13594,
  [SMALL_STATE(637)] = 13598,
  [SMALL_STATE(638)] = 13602,
  [SMALL_STATE(639)] = 13606,
  [SMALL_STATE(640)] = 13610,
  [SMALL_STATE(641)] = 13614,
  [SMALL_STATE(642)] = 13618,
  [SMALL_STATE(643)] = 13622,
  [SMALL_STATE(644)] = 13626,
  [SMALL_STATE(645)] = 13630,
  [SMALL_STATE(646)] = 13634,
  [SMALL_STATE(647)] = 13638,
  [SMALL_STATE(648)] = 13642,
  [SMALL_STATE(649)] = 13646,
  [SMALL_STATE(650)] = 13650,
  [SMALL_STATE(651)] = 13654,
  [SMALL_STATE(652)] = 13658,
  [SMALL_STATE(653)] = 13662,
  [SMALL_STATE(654)] = 13666,
  [SMALL_STATE(655)] = 13670,
  [SMALL_STATE(656)] = 13674,
  [SMALL_STATE(657)] = 13678,
  [SMALL_STATE(658)] = 13682,
  [SMALL_STATE(659)] = 13686,
  [SMALL_STATE(660)] = 13690,
  [SMALL_STATE(661)] = 13694,
  [SMALL_STATE(662)] = 13698,
  [SMALL_STATE(663)] = 13702,
  [SMALL_STATE(664)] = 13706,
  [SMALL_STATE(665)] = 13710,
  [SMALL_STATE(666)] = 13714,
  [SMALL_STATE(667)] = 13718,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(570),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(580),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(578),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(560),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(512),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(376),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(548),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(548),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(584),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(650),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(509),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(508),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(655),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(573),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(573),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(287),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(287),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(585),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(548),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(584),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(650),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(573),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(575),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(654),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(500),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(348),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(546),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(546),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(575),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(654),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(536),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(537),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(661),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(542),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(542),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(282),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(282),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(605),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(6),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(532),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(389),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(549),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(549),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(602),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(531),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(529),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(651),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(557),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(557),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(289),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(289),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(622),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(7),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(602),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(557),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(663),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(653),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(547),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(568),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(660),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(657),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(626),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(667),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(665),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(511),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(363),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(547),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(547),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(593),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(521),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(522),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(658),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(568),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(568),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(283),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(283),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(594),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(27),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(523),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(373),
  [383] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(570),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(570),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(580),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(578),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(528),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(527),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(642),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(560),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(560),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(285),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(285),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(611),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 5, .production_id = 1),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 5, .production_id = 1),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(620),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2),
  [431] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(620),
  [434] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(499),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [449] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(64),
  [452] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(514),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 2),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 2),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [477] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(83),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 5),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 5),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 3),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 3),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 2),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 2),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [514] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(119),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [531] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(104),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 1),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 1),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 1), SHIFT_REPEAT(61),
  [557] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(524),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 7, .production_id = 6),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 7, .production_id = 6),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 3),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 3),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 3),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 3),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 3),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [590] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(171),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 4),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 4),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 2),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 2),
  [607] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 1), SHIFT_REPEAT(113),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 4),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 4),
  [614] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(185),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 7),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 2),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 2),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dummy_tag, 1),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__dummy_tag, 1),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffered_code, 2),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffered_code, 2),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unescaped_buffered_code, 2),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unescaped_buffered_code, 2),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 6),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 6),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 2),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 2),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 5),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 5),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 5),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 5),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 5, .production_id = 4),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 5, .production_id = 4),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_block, 5, .production_id = 2),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_block, 5, .production_id = 2),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [677] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(213),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [684] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(209),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [697] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(228),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [706] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 1), SHIFT_REPEAT(176),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 3),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 3),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [735] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 1), SHIFT_REPEAT(211),
  [738] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(196),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 6),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 6),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 3),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 3),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(656),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(666),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(664),
  [819] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(614),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(659),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(662),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(652),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 1),
  [919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(624),
  [921] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 1),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 2),
  [925] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 2),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [929] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(478),
  [932] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(294),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [941] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [945] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(298),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(590),
  [996] = {.entry = {.count = 1, .reusable = false}}, SHIFT(591),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [1020] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [1022] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [1024] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [1026] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [1028] = {.entry = {.count = 1, .reusable = false}}, SHIFT(562),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1032] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(415),
  [1035] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(590),
  [1038] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(591),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1081] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2), SHIFT_REPEAT(280),
  [1084] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2), SHIFT_REPEAT(347),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(415),
  [1136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(590),
  [1139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(591),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [1172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2), SHIFT_REPEAT(624),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 1),
  [1187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [1189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [1191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 1),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [1199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [1207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [1209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [1211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [1213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(415),
  [1230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 1),
  [1234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 1),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 3),
  [1238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 3),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 3),
  [1246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 3),
  [1248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(600),
  [1263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(535),
  [1266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_angular_attribute_name, 1),
  [1274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_angular_attribute_name, 1),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 5),
  [1296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 5),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [1302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [1304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_attribute_value, 2),
  [1306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_attribute_value, 2),
  [1308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [1310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [1312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_attribute_value, 2),
  [1322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__object_attribute_value, 2),
  [1324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 3),
  [1326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 3),
  [1328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_attribute_value, 2),
  [1330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__array_attribute_value, 2),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 3),
  [1338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 3),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ternary_attribute_value, 2),
  [1350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ternary_attribute_value, 2),
  [1352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 3),
  [1354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 3),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [1364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [1366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_attribute_value, 2),
  [1368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__template_attribute_value, 2),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_attribute_value, 2),
  [1374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable_attribute_value, 2),
  [1376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 1),
  [1378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 2),
  [1380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 2),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_keyword, 2),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1438] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__un_delimited_javascript, 1),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
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
