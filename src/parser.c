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
#define STATE_COUNT 509
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
  aux_sym_case_repeat1 = 95,
  aux_sym__when_content_repeat1 = 96,
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
  [aux_sym_case_repeat1] = "case_repeat1",
  [aux_sym__when_content_repeat1] = "_when_content_repeat1",
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
  [aux_sym_case_repeat1] = aux_sym_case_repeat1,
  [aux_sym__when_content_repeat1] = aux_sym__when_content_repeat1,
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
  [aux_sym_case_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__when_content_repeat1] = {
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
          lookahead == ' ') ADVANCE(201);
      if (lookahead != 0) ADVANCE(202);
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
          lookahead == ' ') ADVANCE(665);
      if (lookahead != 0) ADVANCE(668);
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
  [9] = {.lex_state = 152, .external_lex_state = 2},
  [10] = {.lex_state = 151, .external_lex_state = 1},
  [11] = {.lex_state = 151, .external_lex_state = 1},
  [12] = {.lex_state = 151, .external_lex_state = 1},
  [13] = {.lex_state = 151, .external_lex_state = 1},
  [14] = {.lex_state = 151, .external_lex_state = 1},
  [15] = {.lex_state = 151, .external_lex_state = 1},
  [16] = {.lex_state = 151, .external_lex_state = 2},
  [17] = {.lex_state = 151, .external_lex_state = 3},
  [18] = {.lex_state = 151, .external_lex_state = 3},
  [19] = {.lex_state = 151, .external_lex_state = 3},
  [20] = {.lex_state = 151, .external_lex_state = 3},
  [21] = {.lex_state = 151, .external_lex_state = 4},
  [22] = {.lex_state = 151, .external_lex_state = 1},
  [23] = {.lex_state = 151, .external_lex_state = 4},
  [24] = {.lex_state = 151, .external_lex_state = 4},
  [25] = {.lex_state = 151, .external_lex_state = 4},
  [26] = {.lex_state = 151},
  [27] = {.lex_state = 151, .external_lex_state = 4},
  [28] = {.lex_state = 151, .external_lex_state = 2},
  [29] = {.lex_state = 149, .external_lex_state = 3},
  [30] = {.lex_state = 151, .external_lex_state = 3},
  [31] = {.lex_state = 151, .external_lex_state = 4},
  [32] = {.lex_state = 149, .external_lex_state = 3},
  [33] = {.lex_state = 151},
  [34] = {.lex_state = 151, .external_lex_state = 2},
  [35] = {.lex_state = 151, .external_lex_state = 2},
  [36] = {.lex_state = 151, .external_lex_state = 2},
  [37] = {.lex_state = 149, .external_lex_state = 3},
  [38] = {.lex_state = 152, .external_lex_state = 1},
  [39] = {.lex_state = 151, .external_lex_state = 2},
  [40] = {.lex_state = 152, .external_lex_state = 1},
  [41] = {.lex_state = 152, .external_lex_state = 1},
  [42] = {.lex_state = 151, .external_lex_state = 2},
  [43] = {.lex_state = 152, .external_lex_state = 1},
  [44] = {.lex_state = 151, .external_lex_state = 2},
  [45] = {.lex_state = 152, .external_lex_state = 1},
  [46] = {.lex_state = 151, .external_lex_state = 2},
  [47] = {.lex_state = 151, .external_lex_state = 2},
  [48] = {.lex_state = 151, .external_lex_state = 2},
  [49] = {.lex_state = 152, .external_lex_state = 1},
  [50] = {.lex_state = 151, .external_lex_state = 2},
  [51] = {.lex_state = 151, .external_lex_state = 2},
  [52] = {.lex_state = 151, .external_lex_state = 2},
  [53] = {.lex_state = 151, .external_lex_state = 2},
  [54] = {.lex_state = 151, .external_lex_state = 4},
  [55] = {.lex_state = 151, .external_lex_state = 2},
  [56] = {.lex_state = 151, .external_lex_state = 2},
  [57] = {.lex_state = 151, .external_lex_state = 2},
  [58] = {.lex_state = 151, .external_lex_state = 4},
  [59] = {.lex_state = 151, .external_lex_state = 2},
  [60] = {.lex_state = 151, .external_lex_state = 2},
  [61] = {.lex_state = 151, .external_lex_state = 2},
  [62] = {.lex_state = 151, .external_lex_state = 2},
  [63] = {.lex_state = 151, .external_lex_state = 3},
  [64] = {.lex_state = 151, .external_lex_state = 3},
  [65] = {.lex_state = 152, .external_lex_state = 1},
  [66] = {.lex_state = 151, .external_lex_state = 3},
  [67] = {.lex_state = 151, .external_lex_state = 3},
  [68] = {.lex_state = 151, .external_lex_state = 3},
  [69] = {.lex_state = 150, .external_lex_state = 3},
  [70] = {.lex_state = 151, .external_lex_state = 3},
  [71] = {.lex_state = 651, .external_lex_state = 3},
  [72] = {.lex_state = 151, .external_lex_state = 3},
  [73] = {.lex_state = 151, .external_lex_state = 3},
  [74] = {.lex_state = 151, .external_lex_state = 3},
  [75] = {.lex_state = 151, .external_lex_state = 3},
  [76] = {.lex_state = 151, .external_lex_state = 3},
  [77] = {.lex_state = 151, .external_lex_state = 3},
  [78] = {.lex_state = 151, .external_lex_state = 3},
  [79] = {.lex_state = 150, .external_lex_state = 3},
  [80] = {.lex_state = 151, .external_lex_state = 3},
  [81] = {.lex_state = 151, .external_lex_state = 3},
  [82] = {.lex_state = 151, .external_lex_state = 3},
  [83] = {.lex_state = 651, .external_lex_state = 3},
  [84] = {.lex_state = 151, .external_lex_state = 3},
  [85] = {.lex_state = 151, .external_lex_state = 3},
  [86] = {.lex_state = 151, .external_lex_state = 3},
  [87] = {.lex_state = 651, .external_lex_state = 2},
  [88] = {.lex_state = 651, .external_lex_state = 3},
  [89] = {.lex_state = 151, .external_lex_state = 3},
  [90] = {.lex_state = 151, .external_lex_state = 3},
  [91] = {.lex_state = 151, .external_lex_state = 3},
  [92] = {.lex_state = 151, .external_lex_state = 3},
  [93] = {.lex_state = 152, .external_lex_state = 2},
  [94] = {.lex_state = 152, .external_lex_state = 5},
  [95] = {.lex_state = 60, .external_lex_state = 6},
  [96] = {.lex_state = 60, .external_lex_state = 6},
  [97] = {.lex_state = 60, .external_lex_state = 6},
  [98] = {.lex_state = 60, .external_lex_state = 6},
  [99] = {.lex_state = 152, .external_lex_state = 2},
  [100] = {.lex_state = 60, .external_lex_state = 6},
  [101] = {.lex_state = 152, .external_lex_state = 5},
  [102] = {.lex_state = 60, .external_lex_state = 6},
  [103] = {.lex_state = 60, .external_lex_state = 6},
  [104] = {.lex_state = 60, .external_lex_state = 6},
  [105] = {.lex_state = 152, .external_lex_state = 2},
  [106] = {.lex_state = 152, .external_lex_state = 2},
  [107] = {.lex_state = 150, .external_lex_state = 3},
  [108] = {.lex_state = 152, .external_lex_state = 2},
  [109] = {.lex_state = 152, .external_lex_state = 2},
  [110] = {.lex_state = 152, .external_lex_state = 2},
  [111] = {.lex_state = 152, .external_lex_state = 4},
  [112] = {.lex_state = 60, .external_lex_state = 6},
  [113] = {.lex_state = 152, .external_lex_state = 5},
  [114] = {.lex_state = 152, .external_lex_state = 5},
  [115] = {.lex_state = 60, .external_lex_state = 6},
  [116] = {.lex_state = 152, .external_lex_state = 2},
  [117] = {.lex_state = 152, .external_lex_state = 2},
  [118] = {.lex_state = 60, .external_lex_state = 6},
  [119] = {.lex_state = 152, .external_lex_state = 2},
  [120] = {.lex_state = 60, .external_lex_state = 6},
  [121] = {.lex_state = 152, .external_lex_state = 2},
  [122] = {.lex_state = 60, .external_lex_state = 6},
  [123] = {.lex_state = 152, .external_lex_state = 2},
  [124] = {.lex_state = 152, .external_lex_state = 2},
  [125] = {.lex_state = 651, .external_lex_state = 3},
  [126] = {.lex_state = 152, .external_lex_state = 2},
  [127] = {.lex_state = 152, .external_lex_state = 2},
  [128] = {.lex_state = 152, .external_lex_state = 4},
  [129] = {.lex_state = 152, .external_lex_state = 2},
  [130] = {.lex_state = 152, .external_lex_state = 2},
  [131] = {.lex_state = 152, .external_lex_state = 2},
  [132] = {.lex_state = 152, .external_lex_state = 2},
  [133] = {.lex_state = 152, .external_lex_state = 2},
  [134] = {.lex_state = 60, .external_lex_state = 6},
  [135] = {.lex_state = 60, .external_lex_state = 6},
  [136] = {.lex_state = 151},
  [137] = {.lex_state = 152, .external_lex_state = 5},
  [138] = {.lex_state = 60, .external_lex_state = 6},
  [139] = {.lex_state = 152, .external_lex_state = 5},
  [140] = {.lex_state = 151},
  [141] = {.lex_state = 60, .external_lex_state = 6},
  [142] = {.lex_state = 60, .external_lex_state = 6},
  [143] = {.lex_state = 152, .external_lex_state = 5},
  [144] = {.lex_state = 152, .external_lex_state = 3},
  [145] = {.lex_state = 152, .external_lex_state = 3},
  [146] = {.lex_state = 152, .external_lex_state = 5},
  [147] = {.lex_state = 152, .external_lex_state = 3},
  [148] = {.lex_state = 152, .external_lex_state = 3},
  [149] = {.lex_state = 152},
  [150] = {.lex_state = 152},
  [151] = {.lex_state = 152},
  [152] = {.lex_state = 152},
  [153] = {.lex_state = 152},
  [154] = {.lex_state = 152},
  [155] = {.lex_state = 152},
  [156] = {.lex_state = 152},
  [157] = {.lex_state = 152},
  [158] = {.lex_state = 152},
  [159] = {.lex_state = 152},
  [160] = {.lex_state = 152},
  [161] = {.lex_state = 152},
  [162] = {.lex_state = 152},
  [163] = {.lex_state = 152},
  [164] = {.lex_state = 152},
  [165] = {.lex_state = 152},
  [166] = {.lex_state = 152},
  [167] = {.lex_state = 152},
  [168] = {.lex_state = 152},
  [169] = {.lex_state = 152},
  [170] = {.lex_state = 152},
  [171] = {.lex_state = 152},
  [172] = {.lex_state = 152},
  [173] = {.lex_state = 152},
  [174] = {.lex_state = 152},
  [175] = {.lex_state = 152},
  [176] = {.lex_state = 60, .external_lex_state = 2},
  [177] = {.lex_state = 60, .external_lex_state = 2},
  [178] = {.lex_state = 60, .external_lex_state = 2},
  [179] = {.lex_state = 60, .external_lex_state = 6},
  [180] = {.lex_state = 54, .external_lex_state = 6},
  [181] = {.lex_state = 54, .external_lex_state = 6},
  [182] = {.lex_state = 60, .external_lex_state = 6},
  [183] = {.lex_state = 60, .external_lex_state = 6},
  [184] = {.lex_state = 54, .external_lex_state = 6},
  [185] = {.lex_state = 60, .external_lex_state = 6},
  [186] = {.lex_state = 60, .external_lex_state = 6},
  [187] = {.lex_state = 54, .external_lex_state = 6},
  [188] = {.lex_state = 54, .external_lex_state = 6},
  [189] = {.lex_state = 54, .external_lex_state = 6},
  [190] = {.lex_state = 54, .external_lex_state = 6},
  [191] = {.lex_state = 60, .external_lex_state = 6},
  [192] = {.lex_state = 54, .external_lex_state = 6},
  [193] = {.lex_state = 54, .external_lex_state = 6},
  [194] = {.lex_state = 54, .external_lex_state = 6},
  [195] = {.lex_state = 54, .external_lex_state = 6},
  [196] = {.lex_state = 54, .external_lex_state = 6},
  [197] = {.lex_state = 60, .external_lex_state = 1},
  [198] = {.lex_state = 60, .external_lex_state = 1},
  [199] = {.lex_state = 60, .external_lex_state = 1},
  [200] = {.lex_state = 55},
  [201] = {.lex_state = 60, .external_lex_state = 1},
  [202] = {.lex_state = 60, .external_lex_state = 1},
  [203] = {.lex_state = 60, .external_lex_state = 1},
  [204] = {.lex_state = 55},
  [205] = {.lex_state = 67},
  [206] = {.lex_state = 67},
  [207] = {.lex_state = 60, .external_lex_state = 1},
  [208] = {.lex_state = 67},
  [209] = {.lex_state = 60, .external_lex_state = 2},
  [210] = {.lex_state = 60, .external_lex_state = 2},
  [211] = {.lex_state = 60, .external_lex_state = 2},
  [212] = {.lex_state = 60, .external_lex_state = 2},
  [213] = {.lex_state = 60, .external_lex_state = 2},
  [214] = {.lex_state = 60, .external_lex_state = 2},
  [215] = {.lex_state = 60, .external_lex_state = 2},
  [216] = {.lex_state = 60, .external_lex_state = 2},
  [217] = {.lex_state = 60, .external_lex_state = 2},
  [218] = {.lex_state = 60, .external_lex_state = 2},
  [219] = {.lex_state = 60, .external_lex_state = 2},
  [220] = {.lex_state = 60, .external_lex_state = 2},
  [221] = {.lex_state = 60, .external_lex_state = 2},
  [222] = {.lex_state = 60, .external_lex_state = 2},
  [223] = {.lex_state = 60, .external_lex_state = 2},
  [224] = {.lex_state = 60, .external_lex_state = 2},
  [225] = {.lex_state = 54, .external_lex_state = 6},
  [226] = {.lex_state = 60, .external_lex_state = 2},
  [227] = {.lex_state = 60, .external_lex_state = 2},
  [228] = {.lex_state = 60, .external_lex_state = 2},
  [229] = {.lex_state = 60, .external_lex_state = 2},
  [230] = {.lex_state = 55, .external_lex_state = 6},
  [231] = {.lex_state = 55, .external_lex_state = 6},
  [232] = {.lex_state = 55, .external_lex_state = 6},
  [233] = {.lex_state = 55, .external_lex_state = 6},
  [234] = {.lex_state = 55, .external_lex_state = 6},
  [235] = {.lex_state = 55, .external_lex_state = 6},
  [236] = {.lex_state = 55, .external_lex_state = 6},
  [237] = {.lex_state = 55, .external_lex_state = 6},
  [238] = {.lex_state = 55, .external_lex_state = 6},
  [239] = {.lex_state = 55, .external_lex_state = 6},
  [240] = {.lex_state = 55, .external_lex_state = 6},
  [241] = {.lex_state = 55, .external_lex_state = 6},
  [242] = {.lex_state = 11, .external_lex_state = 3},
  [243] = {.lex_state = 11, .external_lex_state = 3},
  [244] = {.lex_state = 11, .external_lex_state = 3},
  [245] = {.lex_state = 11, .external_lex_state = 3},
  [246] = {.lex_state = 11, .external_lex_state = 3},
  [247] = {.lex_state = 11, .external_lex_state = 3},
  [248] = {.lex_state = 11, .external_lex_state = 3},
  [249] = {.lex_state = 11, .external_lex_state = 3},
  [250] = {.lex_state = 61},
  [251] = {.lex_state = 11, .external_lex_state = 3},
  [252] = {.lex_state = 11, .external_lex_state = 3},
  [253] = {.lex_state = 11, .external_lex_state = 3},
  [254] = {.lex_state = 11, .external_lex_state = 3},
  [255] = {.lex_state = 11, .external_lex_state = 3},
  [256] = {.lex_state = 11, .external_lex_state = 6},
  [257] = {.lex_state = 11, .external_lex_state = 6},
  [258] = {.lex_state = 11, .external_lex_state = 6},
  [259] = {.lex_state = 11, .external_lex_state = 6},
  [260] = {.lex_state = 11, .external_lex_state = 6},
  [261] = {.lex_state = 64, .external_lex_state = 1},
  [262] = {.lex_state = 11, .external_lex_state = 6},
  [263] = {.lex_state = 64, .external_lex_state = 2},
  [264] = {.lex_state = 11, .external_lex_state = 6},
  [265] = {.lex_state = 64, .external_lex_state = 1},
  [266] = {.lex_state = 11, .external_lex_state = 6},
  [267] = {.lex_state = 64, .external_lex_state = 1},
  [268] = {.lex_state = 64, .external_lex_state = 2},
  [269] = {.lex_state = 11, .external_lex_state = 6},
  [270] = {.lex_state = 64, .external_lex_state = 1},
  [271] = {.lex_state = 11, .external_lex_state = 6},
  [272] = {.lex_state = 11, .external_lex_state = 6},
  [273] = {.lex_state = 11, .external_lex_state = 6},
  [274] = {.lex_state = 11, .external_lex_state = 6},
  [275] = {.lex_state = 11, .external_lex_state = 6},
  [276] = {.lex_state = 64, .external_lex_state = 1},
  [277] = {.lex_state = 11, .external_lex_state = 6},
  [278] = {.lex_state = 11, .external_lex_state = 6},
  [279] = {.lex_state = 64, .external_lex_state = 2},
  [280] = {.lex_state = 64, .external_lex_state = 2},
  [281] = {.lex_state = 11},
  [282] = {.lex_state = 11, .external_lex_state = 6},
  [283] = {.lex_state = 11},
  [284] = {.lex_state = 11, .external_lex_state = 6},
  [285] = {.lex_state = 11, .external_lex_state = 6},
  [286] = {.lex_state = 11, .external_lex_state = 6},
  [287] = {.lex_state = 11},
  [288] = {.lex_state = 11, .external_lex_state = 6},
  [289] = {.lex_state = 11, .external_lex_state = 6},
  [290] = {.lex_state = 11},
  [291] = {.lex_state = 64, .external_lex_state = 2},
  [292] = {.lex_state = 11, .external_lex_state = 6},
  [293] = {.lex_state = 11},
  [294] = {.lex_state = 64, .external_lex_state = 2},
  [295] = {.lex_state = 11, .external_lex_state = 6},
  [296] = {.lex_state = 11, .external_lex_state = 6},
  [297] = {.lex_state = 64, .external_lex_state = 2},
  [298] = {.lex_state = 11, .external_lex_state = 6},
  [299] = {.lex_state = 11},
  [300] = {.lex_state = 11},
  [301] = {.lex_state = 11},
  [302] = {.lex_state = 11},
  [303] = {.lex_state = 64, .external_lex_state = 1},
  [304] = {.lex_state = 11},
  [305] = {.lex_state = 11, .external_lex_state = 6},
  [306] = {.lex_state = 64, .external_lex_state = 2},
  [307] = {.lex_state = 11},
  [308] = {.lex_state = 11},
  [309] = {.lex_state = 11, .external_lex_state = 6},
  [310] = {.lex_state = 11},
  [311] = {.lex_state = 11},
  [312] = {.lex_state = 64, .external_lex_state = 6},
  [313] = {.lex_state = 55, .external_lex_state = 6},
  [314] = {.lex_state = 11},
  [315] = {.lex_state = 11},
  [316] = {.lex_state = 11},
  [317] = {.lex_state = 64, .external_lex_state = 1},
  [318] = {.lex_state = 11},
  [319] = {.lex_state = 11},
  [320] = {.lex_state = 64, .external_lex_state = 6},
  [321] = {.lex_state = 11},
  [322] = {.lex_state = 11},
  [323] = {.lex_state = 64, .external_lex_state = 6},
  [324] = {.lex_state = 11},
  [325] = {.lex_state = 11},
  [326] = {.lex_state = 11},
  [327] = {.lex_state = 11},
  [328] = {.lex_state = 11, .external_lex_state = 6},
  [329] = {.lex_state = 11},
  [330] = {.lex_state = 55, .external_lex_state = 6},
  [331] = {.lex_state = 64, .external_lex_state = 6},
  [332] = {.lex_state = 64, .external_lex_state = 6},
  [333] = {.lex_state = 55},
  [334] = {.lex_state = 55, .external_lex_state = 6},
  [335] = {.lex_state = 64, .external_lex_state = 6},
  [336] = {.lex_state = 11},
  [337] = {.lex_state = 64, .external_lex_state = 6},
  [338] = {.lex_state = 11},
  [339] = {.lex_state = 11},
  [340] = {.lex_state = 11},
  [341] = {.lex_state = 64, .external_lex_state = 2},
  [342] = {.lex_state = 67},
  [343] = {.lex_state = 64, .external_lex_state = 2},
  [344] = {.lex_state = 64, .external_lex_state = 2},
  [345] = {.lex_state = 64, .external_lex_state = 2},
  [346] = {.lex_state = 64, .external_lex_state = 2},
  [347] = {.lex_state = 64, .external_lex_state = 2},
  [348] = {.lex_state = 11, .external_lex_state = 6},
  [349] = {.lex_state = 64, .external_lex_state = 2},
  [350] = {.lex_state = 64, .external_lex_state = 2},
  [351] = {.lex_state = 64, .external_lex_state = 2},
  [352] = {.lex_state = 11, .external_lex_state = 6},
  [353] = {.lex_state = 64, .external_lex_state = 2},
  [354] = {.lex_state = 11, .external_lex_state = 6},
  [355] = {.lex_state = 64, .external_lex_state = 2},
  [356] = {.lex_state = 64, .external_lex_state = 2},
  [357] = {.lex_state = 64, .external_lex_state = 2},
  [358] = {.lex_state = 55},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 64, .external_lex_state = 2},
  [361] = {.lex_state = 64, .external_lex_state = 2},
  [362] = {.lex_state = 64, .external_lex_state = 2},
  [363] = {.lex_state = 55},
  [364] = {.lex_state = 64},
  [365] = {.lex_state = 50, .external_lex_state = 2},
  [366] = {.lex_state = 64},
  [367] = {.lex_state = 54},
  [368] = {.lex_state = 11, .external_lex_state = 3},
  [369] = {.lex_state = 64},
  [370] = {.lex_state = 64},
  [371] = {.lex_state = 50, .external_lex_state = 2},
  [372] = {.lex_state = 64},
  [373] = {.lex_state = 64},
  [374] = {.lex_state = 54},
  [375] = {.lex_state = 64},
  [376] = {.lex_state = 64},
  [377] = {.lex_state = 64},
  [378] = {.lex_state = 64},
  [379] = {.lex_state = 64},
  [380] = {.lex_state = 11, .external_lex_state = 6},
  [381] = {.lex_state = 64},
  [382] = {.lex_state = 64},
  [383] = {.lex_state = 64},
  [384] = {.lex_state = 53, .external_lex_state = 6},
  [385] = {.lex_state = 64},
  [386] = {.lex_state = 53, .external_lex_state = 6},
  [387] = {.lex_state = 64},
  [388] = {.lex_state = 11, .external_lex_state = 6},
  [389] = {.lex_state = 64},
  [390] = {.lex_state = 64},
  [391] = {.lex_state = 11, .external_lex_state = 6},
  [392] = {.lex_state = 54},
  [393] = {.lex_state = 53},
  [394] = {.lex_state = 53},
  [395] = {.lex_state = 50, .external_lex_state = 2},
  [396] = {.lex_state = 53},
  [397] = {.lex_state = 53},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 54},
  [400] = {.lex_state = 53},
  [401] = {.lex_state = 54},
  [402] = {.lex_state = 54},
  [403] = {.lex_state = 54},
  [404] = {.lex_state = 54},
  [405] = {.lex_state = 54},
  [406] = {.lex_state = 53},
  [407] = {.lex_state = 50, .external_lex_state = 2},
  [408] = {.lex_state = 54},
  [409] = {.lex_state = 53},
  [410] = {.lex_state = 53},
  [411] = {.lex_state = 54},
  [412] = {.lex_state = 54},
  [413] = {.lex_state = 53},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 53},
  [416] = {.lex_state = 53},
  [417] = {.lex_state = 54},
  [418] = {.lex_state = 53},
  [419] = {.lex_state = 53},
  [420] = {.lex_state = 54},
  [421] = {.lex_state = 50, .external_lex_state = 6},
  [422] = {.lex_state = 53},
  [423] = {.lex_state = 54},
  [424] = {.lex_state = 54},
  [425] = {.lex_state = 54},
  [426] = {.lex_state = 54},
  [427] = {.lex_state = 647},
  [428] = {.lex_state = 65},
  [429] = {.lex_state = 647, .external_lex_state = 6},
  [430] = {.lex_state = 62},
  [431] = {.lex_state = 0, .external_lex_state = 5},
  [432] = {.lex_state = 65},
  [433] = {.lex_state = 0, .external_lex_state = 5},
  [434] = {.lex_state = 62},
  [435] = {.lex_state = 54},
  [436] = {.lex_state = 0, .external_lex_state = 5},
  [437] = {.lex_state = 0, .external_lex_state = 5},
  [438] = {.lex_state = 0, .external_lex_state = 5},
  [439] = {.lex_state = 0, .external_lex_state = 5},
  [440] = {.lex_state = 0, .external_lex_state = 5},
  [441] = {.lex_state = 53},
  [442] = {.lex_state = 0, .external_lex_state = 5},
  [443] = {.lex_state = 53},
  [444] = {.lex_state = 53},
  [445] = {.lex_state = 53},
  [446] = {.lex_state = 647},
  [447] = {.lex_state = 0, .external_lex_state = 6},
  [448] = {.lex_state = 0, .external_lex_state = 6},
  [449] = {.lex_state = 0, .external_lex_state = 6},
  [450] = {.lex_state = 0, .external_lex_state = 6},
  [451] = {.lex_state = 0, .external_lex_state = 6},
  [452] = {.lex_state = 0, .external_lex_state = 5},
  [453] = {.lex_state = 0, .external_lex_state = 6},
  [454] = {.lex_state = 672},
  [455] = {.lex_state = 0, .external_lex_state = 6},
  [456] = {.lex_state = 67},
  [457] = {.lex_state = 0, .external_lex_state = 6},
  [458] = {.lex_state = 0, .external_lex_state = 6},
  [459] = {.lex_state = 0, .external_lex_state = 6},
  [460] = {.lex_state = 0, .external_lex_state = 6},
  [461] = {.lex_state = 51},
  [462] = {.lex_state = 53},
  [463] = {.lex_state = 0, .external_lex_state = 5},
  [464] = {.lex_state = 0, .external_lex_state = 5},
  [465] = {.lex_state = 0, .external_lex_state = 6},
  [466] = {.lex_state = 0, .external_lex_state = 6},
  [467] = {.lex_state = 0, .external_lex_state = 6},
  [468] = {.lex_state = 0, .external_lex_state = 6},
  [469] = {.lex_state = 672},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0, .external_lex_state = 5},
  [472] = {.lex_state = 0, .external_lex_state = 5},
  [473] = {.lex_state = 52},
  [474] = {.lex_state = 52},
  [475] = {.lex_state = 0, .external_lex_state = 6},
  [476] = {.lex_state = 0, .external_lex_state = 6},
  [477] = {.lex_state = 0, .external_lex_state = 6},
  [478] = {.lex_state = 0, .external_lex_state = 6},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 152},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0, .external_lex_state = 6},
  [486] = {.lex_state = 0, .external_lex_state = 6},
  [487] = {.lex_state = 0, .external_lex_state = 5},
  [488] = {.lex_state = 0, .external_lex_state = 5},
  [489] = {.lex_state = 0, .external_lex_state = 5},
  [490] = {.lex_state = 0, .external_lex_state = 5},
  [491] = {.lex_state = 0, .external_lex_state = 5},
  [492] = {.lex_state = 0, .external_lex_state = 6},
  [493] = {.lex_state = 0, .external_lex_state = 5},
  [494] = {.lex_state = 0, .external_lex_state = 5},
  [495] = {.lex_state = 0, .external_lex_state = 5},
  [496] = {.lex_state = 0, .external_lex_state = 5},
  [497] = {.lex_state = 0, .external_lex_state = 5},
  [498] = {.lex_state = 0, .external_lex_state = 5},
  [499] = {.lex_state = 0, .external_lex_state = 6},
  [500] = {.lex_state = 0, .external_lex_state = 6},
  [501] = {.lex_state = 0, .external_lex_state = 6},
  [502] = {.lex_state = 0, .external_lex_state = 6},
  [503] = {.lex_state = 0, .external_lex_state = 6},
  [504] = {.lex_state = 0, .external_lex_state = 6},
  [505] = {.lex_state = 0, .external_lex_state = 6},
  [506] = {.lex_state = 0, .external_lex_state = 6},
  [507] = {.lex_state = 0, .external_lex_state = 6},
  [508] = {.lex_state = 0, .external_lex_state = 6},
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
    [sym_source_file] = STATE(470),
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
    ACTIONS(89), 1,
      anon_sym_elseif,
    ACTIONS(92), 1,
      anon_sym_else,
    ACTIONS(95), 1,
      sym_tag_name,
    ACTIONS(101), 1,
      sym__newline,
    ACTIONS(86), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(98), 2,
      sym_class,
      sym_id,
    ACTIONS(81), 5,
      anon_sym_doctype,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
    STATE(4), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(79), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_DASH,
  [169] = 11,
    ACTIONS(108), 1,
      anon_sym_PIPE,
    ACTIONS(112), 1,
      anon_sym_elseif,
    ACTIONS(114), 1,
      anon_sym_else,
    ACTIONS(116), 1,
      sym_tag_name,
    ACTIONS(120), 1,
      sym__newline,
    ACTIONS(122), 1,
      sym__dedent,
    ACTIONS(110), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(118), 2,
      sym_class,
      sym_id,
    ACTIONS(106), 5,
      anon_sym_doctype,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
    STATE(4), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(104), 6,
      ts_builtin_sym_end,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_DASH,
  [218] = 11,
    ACTIONS(108), 1,
      anon_sym_PIPE,
    ACTIONS(112), 1,
      anon_sym_elseif,
    ACTIONS(114), 1,
      anon_sym_else,
    ACTIONS(116), 1,
      sym_tag_name,
    ACTIONS(120), 1,
      sym__newline,
    ACTIONS(124), 1,
      sym__dedent,
    ACTIONS(110), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(118), 2,
      sym_class,
      sym_id,
    ACTIONS(106), 5,
      anon_sym_doctype,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
    STATE(4), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(104), 6,
      ts_builtin_sym_end,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_DASH,
  [267] = 10,
    ACTIONS(126), 1,
      anon_sym_PIPE,
    ACTIONS(132), 1,
      anon_sym_elseif,
    ACTIONS(135), 1,
      anon_sym_else,
    ACTIONS(138), 1,
      sym_tag_name,
    ACTIONS(144), 1,
      sym__newline,
    ACTIONS(129), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(141), 2,
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
    ACTIONS(79), 7,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_DASH,
  [312] = 11,
    ACTIONS(147), 1,
      anon_sym_PIPE,
    ACTIONS(151), 1,
      anon_sym_elseif,
    ACTIONS(153), 1,
      anon_sym_else,
    ACTIONS(155), 1,
      sym_tag_name,
    ACTIONS(159), 1,
      sym__newline,
    ACTIONS(161), 1,
      sym__dedent,
    ACTIONS(149), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(157), 2,
      sym_class,
      sym_id,
    ACTIONS(106), 3,
      anon_sym_doctype,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
    STATE(7), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(104), 6,
      ts_builtin_sym_end,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_DASH,
  [359] = 11,
    ACTIONS(147), 1,
      anon_sym_PIPE,
    ACTIONS(151), 1,
      anon_sym_elseif,
    ACTIONS(153), 1,
      anon_sym_else,
    ACTIONS(155), 1,
      sym_tag_name,
    ACTIONS(159), 1,
      sym__newline,
    ACTIONS(163), 1,
      sym__dedent,
    ACTIONS(149), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(157), 2,
      sym_class,
      sym_id,
    ACTIONS(106), 3,
      anon_sym_doctype,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
    STATE(7), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
    ACTIONS(104), 6,
      ts_builtin_sym_end,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_DASH,
  [406] = 4,
    ACTIONS(169), 1,
      sym__indent,
    STATE(44), 1,
      sym_children,
    ACTIONS(167), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(165), 12,
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
  [438] = 4,
    ACTIONS(175), 1,
      sym__indent,
    STATE(34), 1,
      sym_children,
    ACTIONS(173), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(171), 12,
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
  [470] = 4,
    ACTIONS(169), 1,
      sym__indent,
    STATE(61), 1,
      sym_children,
    ACTIONS(179), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(177), 12,
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
  [502] = 4,
    ACTIONS(185), 1,
      sym__indent,
    STATE(57), 1,
      sym_children,
    ACTIONS(183), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(181), 12,
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
  [534] = 4,
    ACTIONS(187), 1,
      sym__indent,
    STATE(61), 1,
      sym_children,
    ACTIONS(179), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(177), 12,
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
  [566] = 4,
    ACTIONS(169), 1,
      sym__indent,
    STATE(39), 1,
      sym_children,
    ACTIONS(191), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(189), 12,
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
  [598] = 6,
    ACTIONS(197), 1,
      anon_sym_COLON,
    ACTIONS(199), 1,
      sym__newline,
    ACTIONS(201), 1,
      sym__dedent,
    STATE(73), 1,
      sym__when_content,
    ACTIONS(195), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(193), 10,
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
  [634] = 7,
    ACTIONS(207), 1,
      sym_tag_name,
    ACTIONS(211), 1,
      anon_sym_DASH,
    STATE(63), 1,
      sym_unbuffered_code,
    ACTIONS(209), 2,
      sym_class,
      sym_id,
    STATE(19), 2,
      sym_tag,
      aux_sym__when_content_repeat1,
    ACTIONS(203), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(205), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
  [672] = 7,
    ACTIONS(207), 1,
      sym_tag_name,
    ACTIONS(211), 1,
      anon_sym_DASH,
    STATE(85), 1,
      sym_unbuffered_code,
    ACTIONS(209), 2,
      sym_class,
      sym_id,
    STATE(30), 2,
      sym_tag,
      aux_sym__when_content_repeat1,
    ACTIONS(213), 8,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
    ACTIONS(215), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
  [710] = 5,
    ACTIONS(207), 1,
      sym_tag_name,
    ACTIONS(209), 2,
      sym_class,
      sym_id,
    STATE(20), 2,
      sym_tag,
      aux_sym__when_content_repeat1,
    ACTIONS(215), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
    ACTIONS(213), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_DASH,
  [743] = 5,
    ACTIONS(221), 1,
      sym_tag_name,
    ACTIONS(224), 2,
      sym_class,
      sym_id,
    STATE(20), 2,
      sym_tag,
      aux_sym__when_content_repeat1,
    ACTIONS(219), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
    ACTIONS(217), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_DASH,
  [776] = 4,
    ACTIONS(227), 1,
      sym__indent,
    STATE(89), 1,
      sym_children,
    ACTIONS(191), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(189), 11,
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
  [807] = 3,
    ACTIONS(233), 1,
      sym__indent,
    ACTIONS(231), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(229), 12,
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
  [836] = 4,
    ACTIONS(235), 1,
      sym__indent,
    STATE(74), 1,
      sym_children,
    ACTIONS(183), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(181), 11,
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
  [867] = 4,
    ACTIONS(237), 1,
      sym__indent,
    STATE(80), 1,
      sym_children,
    ACTIONS(179), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(177), 11,
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
  [898] = 4,
    ACTIONS(227), 1,
      sym__indent,
    STATE(80), 1,
      sym_children,
    ACTIONS(179), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(177), 11,
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
  [929] = 6,
    ACTIONS(243), 1,
      anon_sym_when,
    ACTIONS(245), 1,
      anon_sym_default,
    STATE(16), 1,
      sym__when_keyword,
    STATE(33), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(241), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(239), 10,
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
  [964] = 4,
    ACTIONS(247), 1,
      sym__indent,
    STATE(72), 1,
      sym_children,
    ACTIONS(173), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(171), 11,
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
  [995] = 2,
    ACTIONS(251), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(249), 13,
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
  [1022] = 4,
    ACTIONS(257), 1,
      sym__un_delimited_javascript_line,
    STATE(29), 1,
      aux_sym__un_delimited_javascript_multiline,
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
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [1053] = 5,
    ACTIONS(207), 1,
      sym_tag_name,
    ACTIONS(209), 2,
      sym_class,
      sym_id,
    STATE(20), 2,
      sym_tag,
      aux_sym__when_content_repeat1,
    ACTIONS(262), 8,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
    ACTIONS(260), 9,
      sym__dedent,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      anon_sym_elseif,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_script_DOT,
      anon_sym_SLASH_SLASH_DASH,
      anon_sym_DASH,
  [1086] = 4,
    ACTIONS(227), 1,
      sym__indent,
    STATE(77), 1,
      sym_children,
    ACTIONS(167), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(165), 11,
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
  [1117] = 4,
    ACTIONS(268), 1,
      sym__un_delimited_javascript_line,
    STATE(29), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(264), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(266), 18,
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
  [1148] = 6,
    ACTIONS(274), 1,
      anon_sym_when,
    ACTIONS(277), 1,
      anon_sym_default,
    STATE(16), 1,
      sym__when_keyword,
    STATE(33), 2,
      sym_when,
      aux_sym_case_repeat1,
    ACTIONS(272), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(270), 10,
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
  [1183] = 2,
    ACTIONS(179), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(177), 12,
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
  [1209] = 2,
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
    ACTIONS(280), 12,
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
  [1235] = 2,
    ACTIONS(173), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(171), 12,
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
  [1261] = 2,
    ACTIONS(284), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(286), 19,
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
  [1287] = 4,
    ACTIONS(288), 1,
      sym__indent,
    STATE(109), 1,
      sym_children,
    ACTIONS(191), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(189), 12,
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
  [1317] = 2,
    ACTIONS(167), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(165), 12,
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
  [1343] = 4,
    ACTIONS(290), 1,
      sym__indent,
    STATE(117), 1,
      sym_children,
    ACTIONS(179), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(177), 12,
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
  [1373] = 4,
    ACTIONS(288), 1,
      sym__indent,
    STATE(117), 1,
      sym_children,
    ACTIONS(179), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(177), 12,
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
  [1403] = 2,
    ACTIONS(167), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(165), 12,
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
  [1429] = 4,
    ACTIONS(292), 1,
      sym__indent,
    STATE(121), 1,
      sym_children,
    ACTIONS(173), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(171), 12,
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
  [1459] = 2,
    ACTIONS(296), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(294), 12,
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
  [1485] = 4,
    ACTIONS(298), 1,
      sym__indent,
    STATE(127), 1,
      sym_children,
    ACTIONS(183), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(181), 12,
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
  [1515] = 2,
    ACTIONS(302), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(300), 12,
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
  [1541] = 2,
    ACTIONS(306), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(304), 12,
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
  [1567] = 2,
    ACTIONS(310), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(308), 12,
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
  [1593] = 4,
    ACTIONS(288), 1,
      sym__indent,
    STATE(106), 1,
      sym_children,
    ACTIONS(167), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(165), 12,
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
  [1623] = 2,
    ACTIONS(314), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(312), 12,
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
  [1649] = 2,
    ACTIONS(179), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(177), 12,
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
  [1675] = 2,
    ACTIONS(318), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(316), 12,
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
  [1701] = 2,
    ACTIONS(322), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(320), 12,
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
  [1727] = 3,
    ACTIONS(324), 1,
      sym__indent,
    ACTIONS(231), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(229), 11,
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
  [1755] = 2,
    ACTIONS(183), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(181), 12,
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
  [1781] = 2,
    ACTIONS(328), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(326), 12,
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
  [1807] = 2,
    ACTIONS(173), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(171), 12,
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
  [1833] = 4,
    ACTIONS(334), 1,
      sym__indent,
    ACTIONS(336), 1,
      sym__dedent,
    ACTIONS(332), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(330), 10,
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
  [1863] = 2,
    ACTIONS(340), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(338), 12,
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
  [1889] = 2,
    ACTIONS(344), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(342), 12,
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
  [1915] = 2,
    ACTIONS(191), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(189), 12,
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
  [1941] = 2,
    ACTIONS(191), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(189), 12,
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
  [1967] = 2,
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
  [1992] = 2,
    ACTIONS(344), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(342), 11,
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
  [2017] = 3,
    ACTIONS(346), 1,
      sym__indent,
    ACTIONS(231), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(229), 12,
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
  [2044] = 2,
    ACTIONS(179), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(177), 11,
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
  [2069] = 2,
    ACTIONS(350), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(348), 11,
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
  [2094] = 2,
    ACTIONS(306), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(304), 11,
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
  [2119] = 4,
    ACTIONS(352), 1,
      sym__un_delimited_javascript_line,
    STATE(79), 1,
      aux_sym__un_delimited_javascript_multiline,
    ACTIONS(264), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(266), 16,
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
  [2148] = 2,
    ACTIONS(173), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(171), 11,
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
  [2173] = 5,
    ACTIONS(354), 1,
      ts_builtin_sym_end,
    ACTIONS(358), 1,
      sym__comment_content,
    ACTIONS(360), 1,
      sym__dedent,
    STATE(83), 1,
      aux_sym_comment_repeat1,
    ACTIONS(356), 16,
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
  [2204] = 2,
    ACTIONS(179), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(177), 11,
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
  [2229] = 3,
    ACTIONS(336), 1,
      sym__dedent,
    ACTIONS(332), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(330), 10,
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
  [2256] = 2,
    ACTIONS(173), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(171), 11,
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
  [2281] = 2,
    ACTIONS(302), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(300), 11,
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
  [2306] = 2,
    ACTIONS(318), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(316), 11,
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
  [2331] = 2,
    ACTIONS(296), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(294), 11,
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
  [2356] = 3,
    ACTIONS(366), 1,
      sym__dedent,
    ACTIONS(364), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(362), 10,
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
  [2383] = 4,
    ACTIONS(368), 1,
      sym__un_delimited_javascript_line,
    STATE(79), 1,
      aux_sym__un_delimited_javascript_multiline,
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
      anon_sym_SLASH_SLASH_DASH,
      sym_tag_name,
      sym_class,
      sym_id,
      anon_sym_DASH,
  [2412] = 2,
    ACTIONS(191), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(189), 11,
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
  [2437] = 2,
    ACTIONS(310), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(308), 11,
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
  [2462] = 2,
    ACTIONS(314), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(312), 11,
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
  [2487] = 4,
    ACTIONS(375), 1,
      sym__comment_content,
    STATE(83), 1,
      aux_sym_comment_repeat1,
    ACTIONS(371), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(373), 16,
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
  [2516] = 2,
    ACTIONS(167), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(165), 11,
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
  [2541] = 2,
    ACTIONS(262), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(260), 11,
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
  [2566] = 2,
    ACTIONS(191), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(189), 11,
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
  [2591] = 3,
    ACTIONS(382), 1,
      sym__newline,
    ACTIONS(378), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(380), 17,
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
  [2618] = 5,
    ACTIONS(358), 1,
      sym__comment_content,
    ACTIONS(384), 1,
      ts_builtin_sym_end,
    ACTIONS(388), 1,
      sym__dedent,
    STATE(83), 1,
      aux_sym_comment_repeat1,
    ACTIONS(386), 16,
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
  [2649] = 2,
    ACTIONS(167), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(165), 11,
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
  [2674] = 3,
    ACTIONS(394), 1,
      sym__dedent,
    ACTIONS(392), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(390), 10,
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
  [2701] = 2,
    ACTIONS(183), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(181), 11,
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
  [2726] = 2,
    ACTIONS(398), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(396), 11,
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
  [2751] = 2,
    ACTIONS(183), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(181), 12,
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
  [2775] = 4,
    ACTIONS(400), 1,
      sym__indent,
    STATE(172), 1,
      sym_children,
    ACTIONS(179), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(177), 10,
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
  [2803] = 12,
    ACTIONS(147), 1,
      anon_sym_PIPE,
    ACTIONS(151), 1,
      anon_sym_elseif,
    ACTIONS(153), 1,
      anon_sym_else,
    ACTIONS(155), 1,
      sym_tag_name,
    ACTIONS(402), 1,
      anon_sym_BANG_EQ,
    ACTIONS(404), 1,
      anon_sym_EQ,
    ACTIONS(406), 1,
      anon_sym_DOT,
    ACTIONS(408), 1,
      sym__newline,
    ACTIONS(149), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(157), 2,
      sym_class,
      sym_id,
    STATE(108), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(9), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2847] = 12,
    ACTIONS(108), 1,
      anon_sym_PIPE,
    ACTIONS(112), 1,
      anon_sym_elseif,
    ACTIONS(114), 1,
      anon_sym_else,
    ACTIONS(116), 1,
      sym_tag_name,
    ACTIONS(410), 1,
      anon_sym_BANG_EQ,
    ACTIONS(412), 1,
      anon_sym_EQ,
    ACTIONS(414), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      sym__newline,
    ACTIONS(110), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(118), 2,
      sym_class,
      sym_id,
    STATE(51), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(5), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2891] = 12,
    ACTIONS(147), 1,
      anon_sym_PIPE,
    ACTIONS(151), 1,
      anon_sym_elseif,
    ACTIONS(153), 1,
      anon_sym_else,
    ACTIONS(155), 1,
      sym_tag_name,
    ACTIONS(402), 1,
      anon_sym_BANG_EQ,
    ACTIONS(404), 1,
      anon_sym_EQ,
    ACTIONS(406), 1,
      anon_sym_DOT,
    ACTIONS(408), 1,
      sym__newline,
    ACTIONS(149), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(157), 2,
      sym_class,
      sym_id,
    STATE(116), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(9), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2935] = 12,
    ACTIONS(418), 1,
      anon_sym_PIPE,
    ACTIONS(422), 1,
      anon_sym_elseif,
    ACTIONS(424), 1,
      anon_sym_else,
    ACTIONS(426), 1,
      anon_sym_BANG_EQ,
    ACTIONS(428), 1,
      anon_sym_EQ,
    ACTIONS(430), 1,
      anon_sym_DOT,
    ACTIONS(432), 1,
      sym_tag_name,
    ACTIONS(436), 1,
      sym__newline,
    ACTIONS(420), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(434), 2,
      sym_class,
      sym_id,
    STATE(218), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(176), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [2979] = 2,
    ACTIONS(306), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(304), 12,
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
  [3003] = 12,
    ACTIONS(108), 1,
      anon_sym_PIPE,
    ACTIONS(112), 1,
      anon_sym_elseif,
    ACTIONS(114), 1,
      anon_sym_else,
    ACTIONS(116), 1,
      sym_tag_name,
    ACTIONS(438), 1,
      anon_sym_BANG_EQ,
    ACTIONS(440), 1,
      anon_sym_EQ,
    ACTIONS(442), 1,
      anon_sym_DOT,
    ACTIONS(444), 1,
      sym__newline,
    ACTIONS(110), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(118), 2,
      sym_class,
      sym_id,
    STATE(84), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(6), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3047] = 4,
    ACTIONS(446), 1,
      sym__indent,
    STATE(159), 1,
      sym_children,
    ACTIONS(173), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(171), 10,
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
  [3075] = 12,
    ACTIONS(147), 1,
      anon_sym_PIPE,
    ACTIONS(151), 1,
      anon_sym_elseif,
    ACTIONS(153), 1,
      anon_sym_else,
    ACTIONS(155), 1,
      sym_tag_name,
    ACTIONS(402), 1,
      anon_sym_BANG_EQ,
    ACTIONS(404), 1,
      anon_sym_EQ,
    ACTIONS(406), 1,
      anon_sym_DOT,
    ACTIONS(408), 1,
      sym__newline,
    ACTIONS(149), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(157), 2,
      sym_class,
      sym_id,
    STATE(123), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(9), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3119] = 12,
    ACTIONS(108), 1,
      anon_sym_PIPE,
    ACTIONS(112), 1,
      anon_sym_elseif,
    ACTIONS(114), 1,
      anon_sym_else,
    ACTIONS(116), 1,
      sym_tag_name,
    ACTIONS(438), 1,
      anon_sym_BANG_EQ,
    ACTIONS(440), 1,
      anon_sym_EQ,
    ACTIONS(442), 1,
      anon_sym_DOT,
    ACTIONS(444), 1,
      sym__newline,
    ACTIONS(110), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(118), 2,
      sym_class,
      sym_id,
    STATE(86), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(6), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3163] = 12,
    ACTIONS(108), 1,
      anon_sym_PIPE,
    ACTIONS(112), 1,
      anon_sym_elseif,
    ACTIONS(114), 1,
      anon_sym_else,
    ACTIONS(116), 1,
      sym_tag_name,
    ACTIONS(438), 1,
      anon_sym_BANG_EQ,
    ACTIONS(440), 1,
      anon_sym_EQ,
    ACTIONS(442), 1,
      anon_sym_DOT,
    ACTIONS(444), 1,
      sym__newline,
    ACTIONS(110), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(118), 2,
      sym_class,
      sym_id,
    STATE(66), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(6), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3207] = 2,
    ACTIONS(302), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(300), 12,
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
  [3231] = 2,
    ACTIONS(296), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(294), 12,
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
  [3255] = 2,
    ACTIONS(284), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(286), 17,
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
  [3279] = 2,
    ACTIONS(167), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(165), 12,
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
  [3303] = 2,
    ACTIONS(167), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(165), 12,
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
  [3327] = 2,
    ACTIONS(310), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(308), 12,
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
  [3351] = 4,
    ACTIONS(448), 1,
      sym__indent,
    ACTIONS(450), 1,
      sym__dedent,
    ACTIONS(231), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(229), 10,
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
  [3379] = 12,
    ACTIONS(17), 1,
      anon_sym_BANG_EQ,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(147), 1,
      anon_sym_PIPE,
    ACTIONS(151), 1,
      anon_sym_elseif,
    ACTIONS(153), 1,
      anon_sym_else,
    ACTIONS(155), 1,
      sym_tag_name,
    ACTIONS(452), 1,
      anon_sym_DOT,
    ACTIONS(454), 1,
      sym__newline,
    ACTIONS(149), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(157), 2,
      sym_class,
      sym_id,
    STATE(150), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(8), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3423] = 4,
    ACTIONS(456), 1,
      sym__indent,
    STATE(172), 1,
      sym_children,
    ACTIONS(179), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(177), 10,
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
  [3451] = 4,
    ACTIONS(458), 1,
      sym__indent,
    STATE(161), 1,
      sym_children,
    ACTIONS(183), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(181), 10,
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
  [3479] = 12,
    ACTIONS(418), 1,
      anon_sym_PIPE,
    ACTIONS(422), 1,
      anon_sym_elseif,
    ACTIONS(424), 1,
      anon_sym_else,
    ACTIONS(432), 1,
      sym_tag_name,
    ACTIONS(460), 1,
      anon_sym_BANG_EQ,
    ACTIONS(462), 1,
      anon_sym_EQ,
    ACTIONS(464), 1,
      anon_sym_DOT,
    ACTIONS(466), 1,
      sym__newline,
    ACTIONS(420), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(434), 2,
      sym_class,
      sym_id,
    STATE(360), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(177), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3523] = 2,
    ACTIONS(191), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(189), 12,
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
  [3547] = 2,
    ACTIONS(191), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(189), 12,
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
  [3571] = 12,
    ACTIONS(17), 1,
      anon_sym_BANG_EQ,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(147), 1,
      anon_sym_PIPE,
    ACTIONS(151), 1,
      anon_sym_elseif,
    ACTIONS(153), 1,
      anon_sym_else,
    ACTIONS(155), 1,
      sym_tag_name,
    ACTIONS(452), 1,
      anon_sym_DOT,
    ACTIONS(454), 1,
      sym__newline,
    ACTIONS(149), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(157), 2,
      sym_class,
      sym_id,
    STATE(157), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(8), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3615] = 2,
    ACTIONS(344), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(342), 12,
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
  [3639] = 12,
    ACTIONS(108), 1,
      anon_sym_PIPE,
    ACTIONS(112), 1,
      anon_sym_elseif,
    ACTIONS(114), 1,
      anon_sym_else,
    ACTIONS(116), 1,
      sym_tag_name,
    ACTIONS(410), 1,
      anon_sym_BANG_EQ,
    ACTIONS(412), 1,
      anon_sym_EQ,
    ACTIONS(414), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      sym__newline,
    ACTIONS(110), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(118), 2,
      sym_class,
      sym_id,
    STATE(62), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(5), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3683] = 2,
    ACTIONS(179), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(177), 12,
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
  [3707] = 12,
    ACTIONS(418), 1,
      anon_sym_PIPE,
    ACTIONS(422), 1,
      anon_sym_elseif,
    ACTIONS(424), 1,
      anon_sym_else,
    ACTIONS(432), 1,
      sym_tag_name,
    ACTIONS(460), 1,
      anon_sym_BANG_EQ,
    ACTIONS(462), 1,
      anon_sym_EQ,
    ACTIONS(464), 1,
      anon_sym_DOT,
    ACTIONS(466), 1,
      sym__newline,
    ACTIONS(420), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(434), 2,
      sym_class,
      sym_id,
    STATE(351), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(177), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [3751] = 2,
    ACTIONS(179), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(177), 12,
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
  [3775] = 2,
    ACTIONS(282), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(280), 12,
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
  [3799] = 2,
    ACTIONS(371), 2,
      sym__dedent,
      ts_builtin_sym_end,
    ACTIONS(373), 17,
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
  [3823] = 2,
    ACTIONS(173), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(171), 12,
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
  [3847] = 2,
    ACTIONS(173), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(171), 12,
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
  [3871] = 3,
    ACTIONS(468), 1,
      sym__indent,
    ACTIONS(231), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(229), 11,
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
  [3897] = 2,
    ACTIONS(322), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(320), 12,
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
  [3921] = 2,
    ACTIONS(340), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(338), 12,
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
  [3945] = 2,
    ACTIONS(314), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(312), 12,
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
  [3969] = 2,
    ACTIONS(318), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(316), 12,
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
  [3993] = 2,
    ACTIONS(328), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(326), 12,
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
  [4017] = 12,
    ACTIONS(418), 1,
      anon_sym_PIPE,
    ACTIONS(422), 1,
      anon_sym_elseif,
    ACTIONS(424), 1,
      anon_sym_else,
    ACTIONS(432), 1,
      sym_tag_name,
    ACTIONS(460), 1,
      anon_sym_BANG_EQ,
    ACTIONS(462), 1,
      anon_sym_EQ,
    ACTIONS(464), 1,
      anon_sym_DOT,
    ACTIONS(466), 1,
      sym__newline,
    ACTIONS(420), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(434), 2,
      sym_class,
      sym_id,
    STATE(345), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(177), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4061] = 12,
    ACTIONS(108), 1,
      anon_sym_PIPE,
    ACTIONS(112), 1,
      anon_sym_elseif,
    ACTIONS(114), 1,
      anon_sym_else,
    ACTIONS(116), 1,
      sym_tag_name,
    ACTIONS(410), 1,
      anon_sym_BANG_EQ,
    ACTIONS(412), 1,
      anon_sym_EQ,
    ACTIONS(414), 1,
      anon_sym_DOT,
    ACTIONS(416), 1,
      sym__newline,
    ACTIONS(110), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(118), 2,
      sym_class,
      sym_id,
    STATE(42), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(5), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4105] = 2,
    ACTIONS(472), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
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
  [4129] = 4,
    ACTIONS(456), 1,
      sym__indent,
    STATE(171), 1,
      sym_children,
    ACTIONS(191), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(189), 10,
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
  [4157] = 12,
    ACTIONS(418), 1,
      anon_sym_PIPE,
    ACTIONS(422), 1,
      anon_sym_elseif,
    ACTIONS(424), 1,
      anon_sym_else,
    ACTIONS(426), 1,
      anon_sym_BANG_EQ,
    ACTIONS(428), 1,
      anon_sym_EQ,
    ACTIONS(430), 1,
      anon_sym_DOT,
    ACTIONS(432), 1,
      sym_tag_name,
    ACTIONS(436), 1,
      sym__newline,
    ACTIONS(420), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(434), 2,
      sym_class,
      sym_id,
    STATE(219), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(176), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4201] = 4,
    ACTIONS(456), 1,
      sym__indent,
    STATE(164), 1,
      sym_children,
    ACTIONS(167), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(165), 10,
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
  [4229] = 2,
    ACTIONS(332), 9,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_when,
      anon_sym_default,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(330), 10,
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
  [4253] = 12,
    ACTIONS(418), 1,
      anon_sym_PIPE,
    ACTIONS(422), 1,
      anon_sym_elseif,
    ACTIONS(424), 1,
      anon_sym_else,
    ACTIONS(426), 1,
      anon_sym_BANG_EQ,
    ACTIONS(428), 1,
      anon_sym_EQ,
    ACTIONS(430), 1,
      anon_sym_DOT,
    ACTIONS(432), 1,
      sym_tag_name,
    ACTIONS(436), 1,
      sym__newline,
    ACTIONS(420), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(434), 2,
      sym_class,
      sym_id,
    STATE(211), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(176), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4297] = 12,
    ACTIONS(17), 1,
      anon_sym_BANG_EQ,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(147), 1,
      anon_sym_PIPE,
    ACTIONS(151), 1,
      anon_sym_elseif,
    ACTIONS(153), 1,
      anon_sym_else,
    ACTIONS(155), 1,
      sym_tag_name,
    ACTIONS(452), 1,
      anon_sym_DOT,
    ACTIONS(454), 1,
      sym__newline,
    ACTIONS(149), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(157), 2,
      sym_class,
      sym_id,
    STATE(167), 2,
      sym_unescaped_buffered_code,
      sym_buffered_code,
    STATE(8), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [4341] = 3,
    ACTIONS(478), 1,
      sym__indent,
    ACTIONS(476), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(474), 10,
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
  [4366] = 3,
    ACTIONS(480), 1,
      sym__dedent,
    ACTIONS(306), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(304), 10,
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
  [4391] = 3,
    ACTIONS(482), 1,
      sym__dedent,
    ACTIONS(364), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(362), 10,
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
  [4416] = 3,
    ACTIONS(488), 1,
      sym__indent,
    ACTIONS(486), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(484), 10,
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
  [4441] = 2,
    ACTIONS(306), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(304), 11,
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
  [4464] = 3,
    ACTIONS(490), 1,
      sym__dedent,
    ACTIONS(392), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(390), 10,
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
  [4489] = 2,
    ACTIONS(350), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(348), 10,
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
  [4511] = 2,
    ACTIONS(167), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(165), 10,
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
  [4533] = 2,
    ACTIONS(183), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(181), 10,
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
  [4555] = 2,
    ACTIONS(356), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(354), 10,
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
  [4577] = 2,
    ACTIONS(494), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(492), 10,
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
  [4599] = 2,
    ACTIONS(498), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(496), 10,
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
  [4621] = 2,
    ACTIONS(328), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(326), 10,
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
  [4643] = 2,
    ACTIONS(344), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(342), 10,
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
  [4665] = 2,
    ACTIONS(191), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(189), 10,
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
  [4687] = 2,
    ACTIONS(398), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(396), 10,
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
  [4709] = 2,
    ACTIONS(179), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(177), 10,
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
  [4731] = 2,
    ACTIONS(173), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(171), 10,
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
  [4753] = 2,
    ACTIONS(173), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(171), 10,
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
    ACTIONS(302), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(300), 10,
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
  [4797] = 2,
    ACTIONS(502), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
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
  [4819] = 2,
    ACTIONS(296), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(294), 10,
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
  [4841] = 2,
    ACTIONS(310), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(308), 10,
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
  [4863] = 2,
    ACTIONS(340), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(338), 10,
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
  [4885] = 2,
    ACTIONS(179), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(177), 10,
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
  [4907] = 2,
    ACTIONS(318), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(316), 10,
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
  [4929] = 2,
    ACTIONS(314), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(312), 10,
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
  [4951] = 2,
    ACTIONS(506), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(504), 10,
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
  [4973] = 2,
    ACTIONS(167), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(165), 10,
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
  [4995] = 2,
    ACTIONS(191), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(189), 10,
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
  [5017] = 2,
    ACTIONS(322), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      anon_sym_case,
      anon_sym_SLASH_SLASH,
      sym_tag_name,
    ACTIONS(320), 10,
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
  [5039] = 2,
    ACTIONS(510), 7,
      anon_sym_doctype,
      anon_sym_if,
      anon_sym_unless,
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
  [5061] = 2,
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
  [5083] = 9,
    ACTIONS(418), 1,
      anon_sym_PIPE,
    ACTIONS(422), 1,
      anon_sym_elseif,
    ACTIONS(424), 1,
      anon_sym_else,
    ACTIONS(432), 1,
      sym_tag_name,
    ACTIONS(512), 1,
      sym__newline,
    ACTIONS(514), 1,
      sym__dedent,
    ACTIONS(420), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(434), 2,
      sym_class,
      sym_id,
    STATE(178), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [5117] = 9,
    ACTIONS(418), 1,
      anon_sym_PIPE,
    ACTIONS(422), 1,
      anon_sym_elseif,
    ACTIONS(424), 1,
      anon_sym_else,
    ACTIONS(432), 1,
      sym_tag_name,
    ACTIONS(512), 1,
      sym__newline,
    ACTIONS(516), 1,
      sym__dedent,
    ACTIONS(420), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(434), 2,
      sym_class,
      sym_id,
    STATE(178), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [5151] = 9,
    ACTIONS(79), 1,
      sym__dedent,
    ACTIONS(518), 1,
      anon_sym_PIPE,
    ACTIONS(524), 1,
      anon_sym_elseif,
    ACTIONS(527), 1,
      anon_sym_else,
    ACTIONS(530), 1,
      sym_tag_name,
    ACTIONS(536), 1,
      sym__newline,
    ACTIONS(521), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(533), 2,
      sym_class,
      sym_id,
    STATE(178), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [5185] = 8,
    ACTIONS(147), 1,
      anon_sym_PIPE,
    ACTIONS(151), 1,
      anon_sym_elseif,
    ACTIONS(153), 1,
      anon_sym_else,
    ACTIONS(155), 1,
      sym_tag_name,
    ACTIONS(408), 1,
      sym__newline,
    ACTIONS(149), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(157), 2,
      sym_class,
      sym_id,
    STATE(9), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [5216] = 11,
    ACTIONS(539), 1,
      anon_sym_COLON,
    ACTIONS(541), 1,
      anon_sym_BANG_EQ,
    ACTIONS(543), 1,
      anon_sym_EQ,
    ACTIONS(545), 1,
      anon_sym_,
    ACTIONS(547), 1,
      anon_sym_DOT,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(553), 1,
      sym__newline,
    STATE(225), 1,
      aux_sym_tag_repeat1,
    STATE(235), 1,
      sym_attributes,
    ACTIONS(551), 2,
      sym_class,
      sym_id,
    STATE(126), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5253] = 11,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(557), 1,
      anon_sym_BANG_EQ,
    ACTIONS(559), 1,
      anon_sym_EQ,
    ACTIONS(561), 1,
      anon_sym_,
    ACTIONS(563), 1,
      anon_sym_DOT,
    ACTIONS(567), 1,
      sym__newline,
    STATE(189), 1,
      aux_sym_tag_repeat1,
    STATE(236), 1,
      sym_attributes,
    ACTIONS(565), 2,
      sym_class,
      sym_id,
    STATE(91), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5290] = 8,
    ACTIONS(108), 1,
      anon_sym_PIPE,
    ACTIONS(112), 1,
      anon_sym_elseif,
    ACTIONS(114), 1,
      anon_sym_else,
    ACTIONS(116), 1,
      sym_tag_name,
    ACTIONS(444), 1,
      sym__newline,
    ACTIONS(110), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(118), 2,
      sym_class,
      sym_id,
    STATE(6), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [5321] = 8,
    ACTIONS(418), 1,
      anon_sym_PIPE,
    ACTIONS(422), 1,
      anon_sym_elseif,
    ACTIONS(424), 1,
      anon_sym_else,
    ACTIONS(432), 1,
      sym_tag_name,
    ACTIONS(466), 1,
      sym__newline,
    ACTIONS(420), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(434), 2,
      sym_class,
      sym_id,
    STATE(177), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [5352] = 11,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(569), 1,
      anon_sym_COLON,
    ACTIONS(571), 1,
      anon_sym_BANG_EQ,
    ACTIONS(573), 1,
      anon_sym_EQ,
    ACTIONS(575), 1,
      anon_sym_,
    ACTIONS(577), 1,
      anon_sym_DOT,
    ACTIONS(579), 1,
      sym__newline,
    STATE(225), 1,
      aux_sym_tag_repeat1,
    STATE(232), 1,
      sym_attributes,
    ACTIONS(551), 2,
      sym_class,
      sym_id,
    STATE(353), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5389] = 8,
    ACTIONS(418), 1,
      anon_sym_PIPE,
    ACTIONS(422), 1,
      anon_sym_elseif,
    ACTIONS(424), 1,
      anon_sym_else,
    ACTIONS(432), 1,
      sym_tag_name,
    ACTIONS(436), 1,
      sym__newline,
    ACTIONS(420), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(434), 2,
      sym_class,
      sym_id,
    STATE(176), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [5420] = 8,
    ACTIONS(147), 1,
      anon_sym_PIPE,
    ACTIONS(151), 1,
      anon_sym_elseif,
    ACTIONS(153), 1,
      anon_sym_else,
    ACTIONS(155), 1,
      sym_tag_name,
    ACTIONS(454), 1,
      sym__newline,
    ACTIONS(149), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(157), 2,
      sym_class,
      sym_id,
    STATE(8), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [5451] = 11,
    ACTIONS(549), 1,
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
    ACTIONS(593), 1,
      sym__newline,
    STATE(190), 1,
      aux_sym_tag_repeat1,
    STATE(239), 1,
      sym_attributes,
    ACTIONS(591), 2,
      sym_class,
      sym_id,
    STATE(229), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5488] = 11,
    ACTIONS(541), 1,
      anon_sym_BANG_EQ,
    ACTIONS(543), 1,
      anon_sym_EQ,
    ACTIONS(547), 1,
      anon_sym_DOT,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(595), 1,
      anon_sym_COLON,
    ACTIONS(597), 1,
      anon_sym_,
    ACTIONS(601), 1,
      sym__newline,
    STATE(180), 1,
      aux_sym_tag_repeat1,
    STATE(240), 1,
      sym_attributes,
    ACTIONS(599), 2,
      sym_class,
      sym_id,
    STATE(93), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5525] = 11,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(557), 1,
      anon_sym_BANG_EQ,
    ACTIONS(559), 1,
      anon_sym_EQ,
    ACTIONS(563), 1,
      anon_sym_DOT,
    ACTIONS(603), 1,
      anon_sym_COLON,
    ACTIONS(605), 1,
      anon_sym_,
    ACTIONS(607), 1,
      sym__newline,
    STATE(225), 1,
      aux_sym_tag_repeat1,
    STATE(233), 1,
      sym_attributes,
    ACTIONS(551), 2,
      sym_class,
      sym_id,
    STATE(70), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5562] = 11,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(583), 1,
      anon_sym_BANG_EQ,
    ACTIONS(585), 1,
      anon_sym_EQ,
    ACTIONS(589), 1,
      anon_sym_DOT,
    ACTIONS(609), 1,
      anon_sym_COLON,
    ACTIONS(611), 1,
      anon_sym_,
    ACTIONS(613), 1,
      sym__newline,
    STATE(225), 1,
      aux_sym_tag_repeat1,
    STATE(231), 1,
      sym_attributes,
    ACTIONS(551), 2,
      sym_class,
      sym_id,
    STATE(221), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5599] = 8,
    ACTIONS(108), 1,
      anon_sym_PIPE,
    ACTIONS(112), 1,
      anon_sym_elseif,
    ACTIONS(114), 1,
      anon_sym_else,
    ACTIONS(116), 1,
      sym_tag_name,
    ACTIONS(416), 1,
      sym__newline,
    ACTIONS(110), 2,
      anon_sym_if,
      anon_sym_unless,
    ACTIONS(118), 2,
      sym_class,
      sym_id,
    STATE(5), 5,
      sym_pipe,
      sym_conditional,
      sym_tag,
      sym__children_choice,
      aux_sym_children_repeat1,
  [5630] = 11,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(615), 1,
      anon_sym_COLON,
    ACTIONS(617), 1,
      anon_sym_BANG_EQ,
    ACTIONS(619), 1,
      anon_sym_EQ,
    ACTIONS(621), 1,
      anon_sym_,
    ACTIONS(623), 1,
      anon_sym_DOT,
    ACTIONS(625), 1,
      sym__newline,
    STATE(225), 1,
      aux_sym_tag_repeat1,
    STATE(230), 1,
      sym_attributes,
    ACTIONS(551), 2,
      sym_class,
      sym_id,
    STATE(160), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5667] = 11,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(617), 1,
      anon_sym_BANG_EQ,
    ACTIONS(619), 1,
      anon_sym_EQ,
    ACTIONS(623), 1,
      anon_sym_DOT,
    ACTIONS(627), 1,
      anon_sym_COLON,
    ACTIONS(629), 1,
      anon_sym_,
    ACTIONS(633), 1,
      sym__newline,
    STATE(192), 1,
      aux_sym_tag_repeat1,
    STATE(238), 1,
      sym_attributes,
    ACTIONS(631), 2,
      sym_class,
      sym_id,
    STATE(151), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5704] = 11,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(571), 1,
      anon_sym_BANG_EQ,
    ACTIONS(573), 1,
      anon_sym_EQ,
    ACTIONS(577), 1,
      anon_sym_DOT,
    ACTIONS(635), 1,
      anon_sym_COLON,
    ACTIONS(637), 1,
      anon_sym_,
    ACTIONS(641), 1,
      sym__newline,
    STATE(184), 1,
      aux_sym_tag_repeat1,
    STATE(241), 1,
      sym_attributes,
    ACTIONS(639), 2,
      sym_class,
      sym_id,
    STATE(343), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5741] = 11,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(643), 1,
      anon_sym_COLON,
    ACTIONS(645), 1,
      anon_sym_BANG_EQ,
    ACTIONS(647), 1,
      anon_sym_EQ,
    ACTIONS(649), 1,
      anon_sym_,
    ACTIONS(651), 1,
      anon_sym_DOT,
    ACTIONS(655), 1,
      sym__newline,
    STATE(196), 1,
      aux_sym_tag_repeat1,
    STATE(237), 1,
      sym_attributes,
    ACTIONS(653), 2,
      sym_class,
      sym_id,
    STATE(55), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5778] = 11,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(645), 1,
      anon_sym_BANG_EQ,
    ACTIONS(647), 1,
      anon_sym_EQ,
    ACTIONS(651), 1,
      anon_sym_DOT,
    ACTIONS(657), 1,
      anon_sym_COLON,
    ACTIONS(659), 1,
      anon_sym_,
    ACTIONS(661), 1,
      sym__newline,
    STATE(225), 1,
      aux_sym_tag_repeat1,
    STATE(234), 1,
      sym_attributes,
    ACTIONS(551), 2,
      sym_class,
      sym_id,
    STATE(36), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [5815] = 4,
    ACTIONS(663), 1,
      sym__indent,
    STATE(212), 1,
      sym_children,
    ACTIONS(191), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(189), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5836] = 4,
    ACTIONS(665), 1,
      sym__indent,
    STATE(217), 1,
      sym_children,
    ACTIONS(179), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(177), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5857] = 4,
    ACTIONS(663), 1,
      sym__indent,
    STATE(217), 1,
      sym_children,
    ACTIONS(179), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(177), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5878] = 6,
    ACTIONS(667), 1,
      anon_sym_EQ,
    ACTIONS(669), 1,
      anon_sym_,
    ACTIONS(671), 1,
      anon_sym_DOT,
    STATE(204), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(673), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(392), 6,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
  [5903] = 4,
    ACTIONS(675), 1,
      sym__indent,
    STATE(215), 1,
      sym_children,
    ACTIONS(173), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(171), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5924] = 4,
    ACTIONS(663), 1,
      sym__indent,
    STATE(220), 1,
      sym_children,
    ACTIONS(167), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(165), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5945] = 4,
    ACTIONS(677), 1,
      sym__indent,
    STATE(224), 1,
      sym_children,
    ACTIONS(183), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(181), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [5966] = 6,
    ACTIONS(667), 1,
      anon_sym_EQ,
    ACTIONS(671), 1,
      anon_sym_DOT,
    ACTIONS(679), 1,
      anon_sym_,
    STATE(333), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(681), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(411), 6,
      sym__ternary_attribute_value,
      sym__string_attribute_value,
      sym__variable_attribute_value,
      sym__object_attribute_value,
      sym__template_attribute_value,
      sym__array_attribute_value,
  [5991] = 8,
    ACTIONS(683), 1,
      anon_sym_RPAREN,
    ACTIONS(685), 1,
      aux_sym__attribute_token1,
    STATE(200), 1,
      sym_attribute_name,
    STATE(205), 1,
      aux_sym_attributes_repeat1,
    STATE(374), 1,
      sym_angular_attribute_name,
    STATE(435), 1,
      sym_attribute,
    STATE(408), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(688), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [6019] = 8,
    ACTIONS(691), 1,
      anon_sym_RPAREN,
    ACTIONS(693), 1,
      aux_sym__attribute_token1,
    STATE(200), 1,
      sym_attribute_name,
    STATE(208), 1,
      aux_sym_attributes_repeat1,
    STATE(374), 1,
      sym_angular_attribute_name,
    STATE(425), 1,
      sym_attribute,
    STATE(408), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(695), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [6047] = 3,
    ACTIONS(697), 1,
      sym__indent,
    ACTIONS(231), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(229), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [6065] = 8,
    ACTIONS(693), 1,
      aux_sym__attribute_token1,
    ACTIONS(699), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      sym_attribute_name,
    STATE(205), 1,
      aux_sym_attributes_repeat1,
    STATE(374), 1,
      sym_angular_attribute_name,
    STATE(401), 1,
      sym_attribute,
    STATE(408), 2,
      sym__attribute,
      sym__angular_attribute,
    ACTIONS(695), 3,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [6093] = 2,
    ACTIONS(328), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(326), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [6108] = 2,
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
  [6123] = 2,
    ACTIONS(167), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(165), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [6138] = 2,
    ACTIONS(167), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(165), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [6153] = 2,
    ACTIONS(310), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(308), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [6168] = 2,
    ACTIONS(344), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(342), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [6183] = 2,
    ACTIONS(179), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(177), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [6198] = 2,
    ACTIONS(306), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(304), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [6213] = 2,
    ACTIONS(191), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(189), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [6228] = 2,
    ACTIONS(179), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(177), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [6243] = 2,
    ACTIONS(191), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(189), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [6258] = 2,
    ACTIONS(296), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(294), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [6273] = 2,
    ACTIONS(173), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(171), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [6288] = 2,
    ACTIONS(318), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(316), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [6303] = 2,
    ACTIONS(314), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(312), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [6318] = 2,
    ACTIONS(173), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(171), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [6333] = 4,
    STATE(225), 1,
      aux_sym_tag_repeat1,
    ACTIONS(703), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(705), 2,
      sym_class,
      sym_id,
    ACTIONS(701), 5,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LPAREN,
  [6352] = 2,
    ACTIONS(302), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(300), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [6367] = 2,
    ACTIONS(340), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(338), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [6382] = 2,
    ACTIONS(322), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(320), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [6397] = 2,
    ACTIONS(183), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_else,
      sym_tag_name,
    ACTIONS(181), 6,
      sym__newline,
      sym__dedent,
      anon_sym_PIPE,
      anon_sym_elseif,
      sym_class,
      sym_id,
  [6412] = 7,
    ACTIONS(617), 1,
      anon_sym_BANG_EQ,
    ACTIONS(619), 1,
      anon_sym_EQ,
    ACTIONS(623), 1,
      anon_sym_DOT,
    ACTIONS(708), 1,
      anon_sym_COLON,
    ACTIONS(710), 1,
      anon_sym_,
    ACTIONS(712), 1,
      sym__newline,
    STATE(167), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [6436] = 7,
    ACTIONS(583), 1,
      anon_sym_BANG_EQ,
    ACTIONS(585), 1,
      anon_sym_EQ,
    ACTIONS(589), 1,
      anon_sym_DOT,
    ACTIONS(714), 1,
      anon_sym_COLON,
    ACTIONS(716), 1,
      anon_sym_,
    ACTIONS(718), 1,
      sym__newline,
    STATE(218), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [6460] = 7,
    ACTIONS(571), 1,
      anon_sym_BANG_EQ,
    ACTIONS(573), 1,
      anon_sym_EQ,
    ACTIONS(577), 1,
      anon_sym_DOT,
    ACTIONS(720), 1,
      anon_sym_COLON,
    ACTIONS(722), 1,
      anon_sym_,
    ACTIONS(724), 1,
      sym__newline,
    STATE(345), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [6484] = 7,
    ACTIONS(557), 1,
      anon_sym_BANG_EQ,
    ACTIONS(559), 1,
      anon_sym_EQ,
    ACTIONS(563), 1,
      anon_sym_DOT,
    ACTIONS(726), 1,
      anon_sym_COLON,
    ACTIONS(728), 1,
      anon_sym_,
    ACTIONS(730), 1,
      sym__newline,
    STATE(66), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [6508] = 7,
    ACTIONS(645), 1,
      anon_sym_BANG_EQ,
    ACTIONS(647), 1,
      anon_sym_EQ,
    ACTIONS(651), 1,
      anon_sym_DOT,
    ACTIONS(732), 1,
      anon_sym_COLON,
    ACTIONS(734), 1,
      anon_sym_,
    ACTIONS(736), 1,
      sym__newline,
    STATE(51), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [6532] = 7,
    ACTIONS(541), 1,
      anon_sym_BANG_EQ,
    ACTIONS(543), 1,
      anon_sym_EQ,
    ACTIONS(547), 1,
      anon_sym_DOT,
    ACTIONS(738), 1,
      anon_sym_COLON,
    ACTIONS(740), 1,
      anon_sym_,
    ACTIONS(742), 1,
      sym__newline,
    STATE(123), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [6556] = 7,
    ACTIONS(557), 1,
      anon_sym_BANG_EQ,
    ACTIONS(559), 1,
      anon_sym_EQ,
    ACTIONS(563), 1,
      anon_sym_DOT,
    ACTIONS(603), 1,
      anon_sym_COLON,
    ACTIONS(605), 1,
      anon_sym_,
    ACTIONS(607), 1,
      sym__newline,
    STATE(70), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [6580] = 7,
    ACTIONS(645), 1,
      anon_sym_BANG_EQ,
    ACTIONS(647), 1,
      anon_sym_EQ,
    ACTIONS(651), 1,
      anon_sym_DOT,
    ACTIONS(657), 1,
      anon_sym_COLON,
    ACTIONS(659), 1,
      anon_sym_,
    ACTIONS(661), 1,
      sym__newline,
    STATE(36), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [6604] = 7,
    ACTIONS(615), 1,
      anon_sym_COLON,
    ACTIONS(617), 1,
      anon_sym_BANG_EQ,
    ACTIONS(619), 1,
      anon_sym_EQ,
    ACTIONS(621), 1,
      anon_sym_,
    ACTIONS(623), 1,
      anon_sym_DOT,
    ACTIONS(625), 1,
      sym__newline,
    STATE(160), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [6628] = 7,
    ACTIONS(583), 1,
      anon_sym_BANG_EQ,
    ACTIONS(585), 1,
      anon_sym_EQ,
    ACTIONS(589), 1,
      anon_sym_DOT,
    ACTIONS(609), 1,
      anon_sym_COLON,
    ACTIONS(611), 1,
      anon_sym_,
    ACTIONS(613), 1,
      sym__newline,
    STATE(221), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [6652] = 7,
    ACTIONS(539), 1,
      anon_sym_COLON,
    ACTIONS(541), 1,
      anon_sym_BANG_EQ,
    ACTIONS(543), 1,
      anon_sym_EQ,
    ACTIONS(545), 1,
      anon_sym_,
    ACTIONS(547), 1,
      anon_sym_DOT,
    ACTIONS(553), 1,
      sym__newline,
    STATE(126), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [6676] = 7,
    ACTIONS(569), 1,
      anon_sym_COLON,
    ACTIONS(571), 1,
      anon_sym_BANG_EQ,
    ACTIONS(573), 1,
      anon_sym_EQ,
    ACTIONS(575), 1,
      anon_sym_,
    ACTIONS(577), 1,
      anon_sym_DOT,
    ACTIONS(579), 1,
      sym__newline,
    STATE(353), 3,
      sym_unescaped_buffered_code,
      sym_buffered_code,
      sym__content_after_dot,
  [6700] = 7,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(750), 1,
      sym__dedent,
    STATE(245), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(309), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6723] = 7,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(752), 1,
      sym__dedent,
    STATE(245), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(309), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6746] = 7,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(754), 1,
      sym__dedent,
    STATE(245), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(309), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6769] = 7,
    ACTIONS(756), 1,
      aux_sym_content_token1,
    ACTIONS(759), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(765), 1,
      sym__dedent,
    STATE(245), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(309), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6792] = 7,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(767), 1,
      sym__dedent,
    STATE(245), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(309), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6815] = 7,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(769), 1,
      sym__dedent,
    STATE(245), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(309), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6838] = 7,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(771), 1,
      sym__dedent,
    STATE(245), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(309), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6861] = 7,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(773), 1,
      sym__dedent,
    STATE(245), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(309), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6884] = 8,
    ACTIONS(775), 1,
      aux_sym__ternary_attribute_value_token1,
    ACTIONS(777), 1,
      aux_sym__variable_attribute_value_token1,
    ACTIONS(779), 1,
      aux_sym__object_attribute_value_token1,
    ACTIONS(781), 1,
      aux_sym__template_attribute_value_token1,
    ACTIONS(783), 1,
      aux_sym__array_attribute_value_token1,
    ACTIONS(785), 1,
      anon_sym_SQUOTE,
    ACTIONS(787), 1,
      anon_sym_DQUOTE,
    STATE(412), 1,
      sym_quoted_attribute_value,
  [6909] = 7,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(789), 1,
      sym__dedent,
    STATE(245), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(309), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6932] = 7,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(791), 1,
      sym__dedent,
    STATE(245), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(309), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6955] = 7,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(793), 1,
      sym__dedent,
    STATE(245), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(309), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [6978] = 7,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(795), 1,
      sym__dedent,
    STATE(245), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(309), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7001] = 7,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(797), 1,
      sym__dedent,
    STATE(245), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(309), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7024] = 6,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(799), 1,
      sym__newline,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(269), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7044] = 6,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(801), 1,
      sym__newline,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(269), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7064] = 6,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(803), 1,
      sym__newline,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(269), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7084] = 6,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(805), 1,
      sym__newline,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(269), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7104] = 6,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(807), 1,
      sym__newline,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(259), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7124] = 3,
    ACTIONS(809), 1,
      sym__indent,
    STATE(350), 1,
      sym_children,
    ACTIONS(177), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7138] = 6,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(811), 1,
      sym__newline,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(269), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7158] = 4,
    ACTIONS(815), 1,
      sym__newline,
    ACTIONS(817), 1,
      sym__dedent,
    STATE(291), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(813), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7174] = 6,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(819), 1,
      sym__newline,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(269), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7194] = 3,
    ACTIONS(821), 1,
      sym__indent,
    STATE(350), 1,
      sym_children,
    ACTIONS(177), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7208] = 6,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(823), 1,
      sym__newline,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(269), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7228] = 3,
    ACTIONS(825), 1,
      sym__indent,
    STATE(341), 1,
      sym_children,
    ACTIONS(181), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7242] = 4,
    ACTIONS(815), 1,
      sym__newline,
    ACTIONS(827), 1,
      sym__dedent,
    STATE(291), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(813), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7258] = 6,
    ACTIONS(829), 1,
      aux_sym_content_token1,
    ACTIONS(832), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(835), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(838), 1,
      sym__newline,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(269), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7278] = 3,
    ACTIONS(809), 1,
      sym__indent,
    STATE(357), 1,
      sym_children,
    ACTIONS(189), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7292] = 6,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(840), 1,
      sym__newline,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(269), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7312] = 6,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(842), 1,
      sym__newline,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(269), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7332] = 6,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(844), 1,
      sym__newline,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(269), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7352] = 6,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(846), 1,
      sym__newline,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(269), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7372] = 6,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(848), 1,
      sym__newline,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(272), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7392] = 3,
    ACTIONS(809), 1,
      sym__indent,
    STATE(361), 1,
      sym_children,
    ACTIONS(165), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7406] = 6,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(850), 1,
      sym__newline,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(269), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7426] = 6,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(852), 1,
      sym__newline,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(269), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7446] = 4,
    ACTIONS(815), 1,
      sym__newline,
    ACTIONS(854), 1,
      sym__dedent,
    STATE(291), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(813), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7462] = 4,
    ACTIONS(815), 1,
      sym__newline,
    ACTIONS(856), 1,
      sym__dedent,
    STATE(291), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(813), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7478] = 6,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(255), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(309), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7498] = 6,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(858), 1,
      sym__newline,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(269), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7518] = 6,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(254), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(309), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7538] = 6,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(860), 1,
      sym__newline,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(269), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7558] = 6,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(862), 1,
      sym__newline,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(269), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7578] = 6,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(864), 1,
      sym__newline,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(269), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7598] = 6,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(248), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(309), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7618] = 6,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(866), 1,
      sym__newline,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(269), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7638] = 6,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(868), 1,
      sym__newline,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(269), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7658] = 6,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(244), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(309), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7678] = 4,
    ACTIONS(873), 1,
      sym__newline,
    ACTIONS(876), 1,
      sym__dedent,
    STATE(291), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(870), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7694] = 6,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(878), 1,
      sym__newline,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(269), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7714] = 6,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(246), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(309), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7734] = 4,
    ACTIONS(815), 1,
      sym__newline,
    ACTIONS(880), 1,
      sym__dedent,
    STATE(291), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(813), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7750] = 6,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(882), 1,
      sym__newline,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(269), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7770] = 6,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(884), 1,
      sym__newline,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(289), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7790] = 4,
    ACTIONS(815), 1,
      sym__newline,
    ACTIONS(886), 1,
      sym__dedent,
    STATE(291), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(813), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7806] = 6,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(888), 1,
      sym__newline,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(273), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7826] = 6,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(251), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(309), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7846] = 6,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(242), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(309), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7866] = 6,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(243), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(309), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7886] = 6,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(252), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(309), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7906] = 3,
    ACTIONS(890), 1,
      sym__indent,
    STATE(347), 1,
      sym_children,
    ACTIONS(171), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [7920] = 6,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(247), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(309), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7940] = 6,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(892), 1,
      sym__newline,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(269), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7960] = 4,
    ACTIONS(815), 1,
      sym__newline,
    ACTIONS(894), 1,
      sym__dedent,
    STATE(291), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(813), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [7976] = 6,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(253), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(309), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [7996] = 6,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(249), 1,
      aux_sym__content_after_dot_repeat1,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(309), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [8016] = 6,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(896), 1,
      sym__newline,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(269), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [8036] = 5,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(286), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [8053] = 5,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(278), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [8070] = 3,
    ACTIONS(898), 1,
      sym__newline,
    STATE(263), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(813), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8083] = 2,
    ACTIONS(902), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(900), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [8094] = 5,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(256), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [8111] = 5,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(264), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [8128] = 5,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(292), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [8145] = 2,
    ACTIONS(904), 1,
      sym__indent,
    ACTIONS(229), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [8156] = 5,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(258), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [8173] = 5,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(266), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [8190] = 3,
    ACTIONS(906), 1,
      sym__newline,
    STATE(268), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(813), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8203] = 5,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(257), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [8220] = 5,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(271), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [8237] = 3,
    ACTIONS(908), 1,
      sym__newline,
    STATE(280), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(813), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8250] = 5,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(262), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [8267] = 5,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(274), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [8284] = 5,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(284), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [8301] = 5,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(277), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [8318] = 4,
    ACTIONS(912), 1,
      anon_sym_POUND,
    ACTIONS(914), 1,
      anon_sym_LBRACE,
    ACTIONS(910), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(916), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [8333] = 5,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(285), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [8350] = 2,
    ACTIONS(920), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(918), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [8361] = 3,
    ACTIONS(922), 1,
      sym__newline,
    STATE(306), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(813), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8374] = 3,
    ACTIONS(924), 1,
      sym__newline,
    STATE(279), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(813), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8387] = 4,
    ACTIONS(928), 1,
      anon_sym_,
    ACTIONS(930), 1,
      anon_sym_DOT,
    STATE(333), 1,
      aux_sym__attribute_repeat1,
    ACTIONS(926), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8402] = 2,
    ACTIONS(935), 2,
      sym__newline,
      anon_sym_,
    ACTIONS(933), 4,
      anon_sym_COLON,
      anon_sym_BANG_EQ,
      anon_sym_EQ,
      anon_sym_DOT,
  [8413] = 3,
    ACTIONS(937), 1,
      sym__newline,
    STATE(297), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(813), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8426] = 5,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(295), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [8443] = 3,
    ACTIONS(939), 1,
      sym__newline,
    STATE(294), 2,
      sym_tag,
      aux_sym__single_line_buf_code_repeat1,
    ACTIONS(813), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8456] = 5,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(282), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [8473] = 5,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(305), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [8490] = 5,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(746), 1,
      anon_sym_POUND_LBRACE,
    ACTIONS(748), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(354), 1,
      aux_sym_content_repeat1,
    STATE(288), 2,
      sym_content,
      aux_sym__content_or_javascript,
  [8507] = 1,
    ACTIONS(171), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [8515] = 1,
    ACTIONS(683), 5,
      anon_sym_RPAREN,
      aux_sym__attribute_token1,
      aux_sym_angular_attribute_name_token1,
      aux_sym_angular_attribute_name_token2,
      aux_sym_angular_attribute_name_token3,
  [8523] = 1,
    ACTIONS(181), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [8531] = 1,
    ACTIONS(316), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [8539] = 1,
    ACTIONS(177), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [8547] = 1,
    ACTIONS(312), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [8555] = 1,
    ACTIONS(177), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [8563] = 3,
    ACTIONS(943), 1,
      anon_sym_LBRACE,
    ACTIONS(941), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(945), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [8575] = 1,
    ACTIONS(342), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [8583] = 1,
    ACTIONS(189), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [8591] = 1,
    ACTIONS(189), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [8599] = 4,
    ACTIONS(941), 1,
      sym__newline,
    ACTIONS(947), 1,
      aux_sym_content_token1,
    STATE(352), 1,
      aux_sym_content_repeat1,
    ACTIONS(945), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [8613] = 1,
    ACTIONS(171), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [8621] = 4,
    ACTIONS(744), 1,
      aux_sym_content_token1,
    ACTIONS(952), 1,
      sym__newline,
    STATE(352), 1,
      aux_sym_content_repeat1,
    ACTIONS(950), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [8635] = 1,
    ACTIONS(300), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [8643] = 1,
    ACTIONS(308), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [8651] = 1,
    ACTIONS(165), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [8659] = 2,
    ACTIONS(956), 1,
      anon_sym_,
    ACTIONS(954), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8669] = 4,
    ACTIONS(958), 1,
      anon_sym_when,
    ACTIONS(960), 1,
      anon_sym_default,
    STATE(16), 1,
      sym__when_keyword,
    STATE(26), 2,
      sym_when,
      aux_sym_case_repeat1,
  [8683] = 1,
    ACTIONS(165), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [8691] = 1,
    ACTIONS(294), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [8699] = 1,
    ACTIONS(304), 5,
      sym__newline,
      sym__dedent,
      sym_tag_name,
      sym_class,
      sym_id,
  [8707] = 2,
    ACTIONS(964), 1,
      anon_sym_,
    ACTIONS(962), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8717] = 2,
    STATE(126), 1,
      sym_tag,
    ACTIONS(157), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8726] = 4,
    ACTIONS(966), 1,
      aux_sym_script_block_token1,
    ACTIONS(969), 1,
      sym__newline,
    ACTIONS(972), 1,
      sym__dedent,
    STATE(365), 1,
      aux_sym_script_block_repeat1,
  [8739] = 2,
    STATE(66), 1,
      sym_tag,
    ACTIONS(209), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8748] = 2,
    ACTIONS(976), 1,
      anon_sym_,
    ACTIONS(974), 3,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8757] = 2,
    ACTIONS(765), 2,
      sym__dedent,
      aux_sym_content_token1,
    ACTIONS(978), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [8766] = 2,
    STATE(62), 1,
      sym_tag,
    ACTIONS(118), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8775] = 2,
    STATE(221), 1,
      sym_tag,
    ACTIONS(434), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8784] = 4,
    ACTIONS(980), 1,
      aux_sym_script_block_token1,
    ACTIONS(982), 1,
      sym__newline,
    ACTIONS(984), 1,
      sym__dedent,
    STATE(365), 1,
      aux_sym_script_block_repeat1,
  [8797] = 2,
    STATE(353), 1,
      sym_tag,
    ACTIONS(813), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8806] = 2,
    STATE(116), 1,
      sym_tag,
    ACTIONS(157), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8815] = 3,
    ACTIONS(986), 1,
      anon_sym_EQ,
    ACTIONS(988), 1,
      anon_sym_,
    ACTIONS(990), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8826] = 2,
    STATE(36), 1,
      sym_tag,
    ACTIONS(118), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8835] = 2,
    STATE(70), 1,
      sym_tag,
    ACTIONS(209), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8844] = 2,
    STATE(218), 1,
      sym_tag,
    ACTIONS(434), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8853] = 2,
    STATE(219), 1,
      sym_tag,
    ACTIONS(434), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8862] = 2,
    STATE(345), 1,
      sym_tag,
    ACTIONS(813), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8871] = 2,
    ACTIONS(941), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(945), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [8880] = 2,
    STATE(167), 1,
      sym_tag,
    ACTIONS(29), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8889] = 2,
    STATE(351), 1,
      sym_tag,
    ACTIONS(813), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8898] = 2,
    STATE(123), 1,
      sym_tag,
    ACTIONS(157), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8907] = 4,
    ACTIONS(992), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(994), 1,
      sym__newline,
    STATE(148), 1,
      sym__single_line_buf_code,
    STATE(460), 1,
      sym__un_delimited_javascript,
  [8920] = 2,
    STATE(51), 1,
      sym_tag,
    ACTIONS(118), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8929] = 4,
    ACTIONS(992), 1,
      sym__un_delimited_javascript_line,
    ACTIONS(996), 1,
      sym__newline,
    STATE(90), 1,
      sym__single_line_buf_code,
    STATE(476), 1,
      sym__un_delimited_javascript,
  [8942] = 2,
    STATE(157), 1,
      sym_tag,
    ACTIONS(29), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8951] = 2,
    ACTIONS(998), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1000), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [8960] = 2,
    STATE(86), 1,
      sym_tag,
    ACTIONS(209), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8969] = 2,
    STATE(160), 1,
      sym_tag,
    ACTIONS(29), 3,
      sym_tag_name,
      sym_class,
      sym_id,
  [8978] = 2,
    ACTIONS(1002), 2,
      sym__newline,
      aux_sym_content_token1,
    ACTIONS(1004), 2,
      anon_sym_POUND_LBRACE,
      anon_sym_LBRACE_LBRACE,
  [8987] = 2,
    ACTIONS(679), 1,
      anon_sym_,
    ACTIONS(681), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8995] = 3,
    ACTIONS(992), 1,
      sym__un_delimited_javascript_line,
    STATE(169), 1,
      sym__single_line_buf_code,
    STATE(486), 1,
      sym__un_delimited_javascript,
  [9005] = 3,
    ACTIONS(992), 1,
      sym__un_delimited_javascript_line,
    STATE(82), 1,
      sym__single_line_buf_code,
    STATE(476), 1,
      sym__un_delimited_javascript,
  [9015] = 1,
    ACTIONS(1006), 3,
      sym__newline,
      sym__dedent,
      aux_sym_script_block_token1,
  [9021] = 3,
    ACTIONS(992), 1,
      sym__un_delimited_javascript_line,
    STATE(132), 1,
      sym__single_line_buf_code,
    STATE(475), 1,
      sym__un_delimited_javascript,
  [9031] = 3,
    ACTIONS(992), 1,
      sym__un_delimited_javascript_line,
    STATE(131), 1,
      sym__single_line_buf_code,
    STATE(475), 1,
      sym__un_delimited_javascript,
  [9041] = 3,
    ACTIONS(1008), 1,
      anon_sym_SQUOTE,
    ACTIONS(1010), 1,
      anon_sym_DQUOTE,
    STATE(403), 1,
      sym_quoted_javascript,
  [9051] = 2,
    ACTIONS(1012), 1,
      anon_sym_,
    ACTIONS(1014), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9059] = 3,
    ACTIONS(992), 1,
      sym__un_delimited_javascript_line,
    STATE(76), 1,
      sym__single_line_buf_code,
    STATE(476), 1,
      sym__un_delimited_javascript,
  [9069] = 3,
    ACTIONS(1016), 1,
      anon_sym_,
    ACTIONS(1018), 1,
      anon_sym_COMMA,
    ACTIONS(1020), 1,
      anon_sym_RPAREN,
  [9079] = 2,
    ACTIONS(1022), 1,
      anon_sym_,
    ACTIONS(1024), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9087] = 2,
    ACTIONS(1026), 1,
      anon_sym_,
    ACTIONS(1028), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9095] = 2,
    ACTIONS(1030), 1,
      anon_sym_,
    ACTIONS(1032), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9103] = 2,
    ACTIONS(1034), 1,
      anon_sym_,
    ACTIONS(1036), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9111] = 3,
    ACTIONS(1038), 1,
      sym__un_delimited_javascript_line,
    STATE(69), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(145), 1,
      sym__multi_line_buf_code,
  [9121] = 1,
    ACTIONS(972), 3,
      sym__newline,
      sym__dedent,
      aux_sym_script_block_token1,
  [9127] = 2,
    ACTIONS(1040), 1,
      anon_sym_,
    ACTIONS(1042), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9135] = 3,
    ACTIONS(992), 1,
      sym__un_delimited_javascript_line,
    STATE(222), 1,
      sym__single_line_buf_code,
    STATE(468), 1,
      sym__un_delimited_javascript,
  [9145] = 3,
    ACTIONS(992), 1,
      sym__un_delimited_javascript_line,
    STATE(223), 1,
      sym__single_line_buf_code,
    STATE(468), 1,
      sym__un_delimited_javascript,
  [9155] = 2,
    ACTIONS(1044), 1,
      anon_sym_,
    ACTIONS(1046), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9163] = 2,
    ACTIONS(1048), 1,
      anon_sym_,
    ACTIONS(1050), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9171] = 3,
    ACTIONS(992), 1,
      sym__un_delimited_javascript_line,
    STATE(168), 1,
      sym__single_line_buf_code,
    STATE(486), 1,
      sym__un_delimited_javascript,
  [9181] = 1,
    ACTIONS(1052), 3,
      anon_sym_html,
      anon_sym_strict,
      anon_sym_xml,
  [9187] = 3,
    ACTIONS(1054), 1,
      sym__un_delimited_javascript_line,
    STATE(32), 1,
      aux_sym__un_delimited_javascript_multiline,
    STATE(78), 1,
      sym__multi_line_buf_code,
  [9197] = 3,
    ACTIONS(992), 1,
      sym__un_delimited_javascript_line,
    STATE(50), 1,
      sym__single_line_buf_code,
    STATE(449), 1,
      sym__un_delimited_javascript,
  [9207] = 2,
    ACTIONS(1056), 1,
      anon_sym_,
    ACTIONS(1058), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9215] = 3,
    ACTIONS(992), 1,
      sym__un_delimited_javascript_line,
    STATE(346), 1,
      sym__single_line_buf_code,
    STATE(450), 1,
      sym__un_delimited_javascript,
  [9225] = 3,
    ACTIONS(992), 1,
      sym__un_delimited_javascript_line,
    STATE(344), 1,
      sym__single_line_buf_code,
    STATE(450), 1,
      sym__un_delimited_javascript,
  [9235] = 2,
    ACTIONS(1060), 1,
      anon_sym_,
    ACTIONS(1062), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9243] = 3,
    ACTIONS(980), 1,
      aux_sym_script_block_token1,
    ACTIONS(982), 1,
      sym__newline,
    STATE(371), 1,
      aux_sym_script_block_repeat1,
  [9253] = 3,
    ACTIONS(992), 1,
      sym__un_delimited_javascript_line,
    STATE(52), 1,
      sym__single_line_buf_code,
    STATE(449), 1,
      sym__un_delimited_javascript,
  [9263] = 2,
    ACTIONS(1064), 1,
      anon_sym_,
    ACTIONS(1066), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9271] = 2,
    ACTIONS(1068), 1,
      anon_sym_,
    ACTIONS(1070), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9279] = 3,
    ACTIONS(1016), 1,
      anon_sym_,
    ACTIONS(1018), 1,
      anon_sym_COMMA,
    ACTIONS(1072), 1,
      anon_sym_RPAREN,
  [9289] = 2,
    ACTIONS(1074), 1,
      anon_sym_,
    ACTIONS(1076), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9297] = 2,
    ACTIONS(1078), 1,
      sym__comment_content,
    STATE(88), 1,
      aux_sym_comment_repeat1,
  [9304] = 2,
    ACTIONS(1080), 1,
      anon_sym_SQUOTE,
    ACTIONS(1082), 1,
      aux_sym_quoted_javascript_token1,
  [9311] = 2,
    ACTIONS(1084), 1,
      sym__comment_content,
    ACTIONS(1086), 1,
      sym__newline,
  [9318] = 2,
    ACTIONS(1088), 1,
      anon_sym_DQUOTE,
    ACTIONS(1090), 1,
      aux_sym_quoted_javascript_token2,
  [9325] = 2,
    ACTIONS(456), 1,
      sym__indent,
    STATE(175), 1,
      sym_children,
  [9332] = 2,
    ACTIONS(1088), 1,
      anon_sym_SQUOTE,
    ACTIONS(1092), 1,
      aux_sym_quoted_javascript_token1,
  [9339] = 2,
    ACTIONS(663), 1,
      sym__indent,
    STATE(228), 1,
      sym_children,
  [9346] = 2,
    ACTIONS(1080), 1,
      anon_sym_DQUOTE,
    ACTIONS(1094), 1,
      aux_sym_quoted_javascript_token2,
  [9353] = 2,
    ACTIONS(1016), 1,
      anon_sym_,
    ACTIONS(1018), 1,
      anon_sym_COMMA,
  [9360] = 2,
    ACTIONS(663), 1,
      sym__indent,
    STATE(210), 1,
      sym_children,
  [9367] = 2,
    ACTIONS(456), 1,
      sym__indent,
    STATE(173), 1,
      sym_children,
  [9374] = 2,
    ACTIONS(288), 1,
      sym__indent,
    STATE(124), 1,
      sym_children,
  [9381] = 2,
    ACTIONS(169), 1,
      sym__indent,
    STATE(53), 1,
      sym_children,
  [9388] = 2,
    ACTIONS(288), 1,
      sym__indent,
    STATE(129), 1,
      sym_children,
  [9395] = 2,
    ACTIONS(992), 1,
      sym__un_delimited_javascript_line,
    STATE(478), 1,
      sym__un_delimited_javascript,
  [9402] = 2,
    ACTIONS(169), 1,
      sym__indent,
    STATE(35), 1,
      sym_children,
  [9409] = 2,
    ACTIONS(992), 1,
      sym__un_delimited_javascript_line,
    STATE(448), 1,
      sym__un_delimited_javascript,
  [9416] = 2,
    ACTIONS(992), 1,
      sym__un_delimited_javascript_line,
    STATE(458), 1,
      sym__un_delimited_javascript,
  [9423] = 2,
    ACTIONS(992), 1,
      sym__un_delimited_javascript_line,
    STATE(466), 1,
      sym__un_delimited_javascript,
  [9430] = 2,
    ACTIONS(1078), 1,
      sym__comment_content,
    STATE(71), 1,
      aux_sym_comment_repeat1,
  [9437] = 1,
    ACTIONS(1096), 1,
      sym__newline,
  [9441] = 1,
    ACTIONS(1098), 1,
      sym__newline,
  [9445] = 1,
    ACTIONS(1100), 1,
      sym__newline,
  [9449] = 1,
    ACTIONS(1102), 1,
      sym__newline,
  [9453] = 1,
    ACTIONS(1104), 1,
      sym__newline,
  [9457] = 1,
    ACTIONS(1106), 1,
      sym__indent,
  [9461] = 1,
    ACTIONS(1108), 1,
      sym__newline,
  [9465] = 1,
    ACTIONS(1110), 1,
      aux_sym_unbuffered_code_token1,
  [9469] = 1,
    ACTIONS(1112), 1,
      sym__newline,
  [9473] = 1,
    ACTIONS(1114), 1,
      aux_sym__attribute_token1,
  [9477] = 1,
    ACTIONS(1116), 1,
      sym__newline,
  [9481] = 1,
    ACTIONS(1118), 1,
      sym__newline,
  [9485] = 1,
    ACTIONS(1120), 1,
      sym__newline,
  [9489] = 1,
    ACTIONS(1122), 1,
      sym__newline,
  [9493] = 1,
    ACTIONS(1124), 1,
      aux_sym__when_keyword_token1,
  [9497] = 1,
    ACTIONS(1126), 1,
      sym__un_delimited_javascript_line,
  [9501] = 1,
    ACTIONS(1128), 1,
      sym__indent,
  [9505] = 1,
    ACTIONS(1130), 1,
      sym__indent,
  [9509] = 1,
    ACTIONS(1132), 1,
      sym__newline,
  [9513] = 1,
    ACTIONS(1134), 1,
      sym__newline,
  [9517] = 1,
    ACTIONS(1136), 1,
      sym__newline,
  [9521] = 1,
    ACTIONS(1138), 1,
      sym__newline,
  [9525] = 1,
    ACTIONS(1140), 1,
      aux_sym_unbuffered_code_token1,
  [9529] = 1,
    ACTIONS(1142), 1,
      ts_builtin_sym_end,
  [9533] = 1,
    ACTIONS(1144), 1,
      sym__indent,
  [9537] = 1,
    ACTIONS(1146), 1,
      sym__indent,
  [9541] = 1,
    ACTIONS(1148), 1,
      sym__delimited_javascript,
  [9545] = 1,
    ACTIONS(1150), 1,
      sym__delimited_javascript,
  [9549] = 1,
    ACTIONS(1152), 1,
      sym__newline,
  [9553] = 1,
    ACTIONS(1154), 1,
      sym__newline,
  [9557] = 1,
    ACTIONS(1156), 1,
      sym__newline,
  [9561] = 1,
    ACTIONS(1158), 1,
      sym__newline,
  [9565] = 1,
    ACTIONS(1160), 1,
      anon_sym_SQUOTE,
  [9569] = 1,
    ACTIONS(1160), 1,
      anon_sym_DQUOTE,
  [9573] = 1,
    ACTIONS(1162), 1,
      anon_sym_RBRACE_RBRACE,
  [9577] = 1,
    ACTIONS(1164), 1,
      anon_sym_SQUOTE,
  [9581] = 1,
    ACTIONS(1164), 1,
      anon_sym_DQUOTE,
  [9585] = 1,
    ACTIONS(1162), 1,
      anon_sym_RBRACE,
  [9589] = 1,
    ACTIONS(1166), 1,
      sym__newline,
  [9593] = 1,
    ACTIONS(1168), 1,
      sym__newline,
  [9597] = 1,
    ACTIONS(1170), 1,
      sym__indent,
  [9601] = 1,
    ACTIONS(1172), 1,
      sym__indent,
  [9605] = 1,
    ACTIONS(1174), 1,
      sym__indent,
  [9609] = 1,
    ACTIONS(1176), 1,
      sym__indent,
  [9613] = 1,
    ACTIONS(1178), 1,
      sym__indent,
  [9617] = 1,
    ACTIONS(1180), 1,
      sym__newline,
  [9621] = 1,
    ACTIONS(1182), 1,
      sym__indent,
  [9625] = 1,
    ACTIONS(1184), 1,
      sym__indent,
  [9629] = 1,
    ACTIONS(1186), 1,
      sym__indent,
  [9633] = 1,
    ACTIONS(1188), 1,
      sym__indent,
  [9637] = 1,
    ACTIONS(1190), 1,
      sym__indent,
  [9641] = 1,
    ACTIONS(1192), 1,
      sym__indent,
  [9645] = 1,
    ACTIONS(1194), 1,
      sym__newline,
  [9649] = 1,
    ACTIONS(1196), 1,
      sym__newline,
  [9653] = 1,
    ACTIONS(1198), 1,
      sym__newline,
  [9657] = 1,
    ACTIONS(1200), 1,
      sym__newline,
  [9661] = 1,
    ACTIONS(1202), 1,
      sym__newline,
  [9665] = 1,
    ACTIONS(1204), 1,
      sym__newline,
  [9669] = 1,
    ACTIONS(1206), 1,
      sym__newline,
  [9673] = 1,
    ACTIONS(1208), 1,
      sym__newline,
  [9677] = 1,
    ACTIONS(1210), 1,
      sym__newline,
  [9681] = 1,
    ACTIONS(1212), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 61,
  [SMALL_STATE(4)] = 122,
  [SMALL_STATE(5)] = 169,
  [SMALL_STATE(6)] = 218,
  [SMALL_STATE(7)] = 267,
  [SMALL_STATE(8)] = 312,
  [SMALL_STATE(9)] = 359,
  [SMALL_STATE(10)] = 406,
  [SMALL_STATE(11)] = 438,
  [SMALL_STATE(12)] = 470,
  [SMALL_STATE(13)] = 502,
  [SMALL_STATE(14)] = 534,
  [SMALL_STATE(15)] = 566,
  [SMALL_STATE(16)] = 598,
  [SMALL_STATE(17)] = 634,
  [SMALL_STATE(18)] = 672,
  [SMALL_STATE(19)] = 710,
  [SMALL_STATE(20)] = 743,
  [SMALL_STATE(21)] = 776,
  [SMALL_STATE(22)] = 807,
  [SMALL_STATE(23)] = 836,
  [SMALL_STATE(24)] = 867,
  [SMALL_STATE(25)] = 898,
  [SMALL_STATE(26)] = 929,
  [SMALL_STATE(27)] = 964,
  [SMALL_STATE(28)] = 995,
  [SMALL_STATE(29)] = 1022,
  [SMALL_STATE(30)] = 1053,
  [SMALL_STATE(31)] = 1086,
  [SMALL_STATE(32)] = 1117,
  [SMALL_STATE(33)] = 1148,
  [SMALL_STATE(34)] = 1183,
  [SMALL_STATE(35)] = 1209,
  [SMALL_STATE(36)] = 1235,
  [SMALL_STATE(37)] = 1261,
  [SMALL_STATE(38)] = 1287,
  [SMALL_STATE(39)] = 1317,
  [SMALL_STATE(40)] = 1343,
  [SMALL_STATE(41)] = 1373,
  [SMALL_STATE(42)] = 1403,
  [SMALL_STATE(43)] = 1429,
  [SMALL_STATE(44)] = 1459,
  [SMALL_STATE(45)] = 1485,
  [SMALL_STATE(46)] = 1515,
  [SMALL_STATE(47)] = 1541,
  [SMALL_STATE(48)] = 1567,
  [SMALL_STATE(49)] = 1593,
  [SMALL_STATE(50)] = 1623,
  [SMALL_STATE(51)] = 1649,
  [SMALL_STATE(52)] = 1675,
  [SMALL_STATE(53)] = 1701,
  [SMALL_STATE(54)] = 1727,
  [SMALL_STATE(55)] = 1755,
  [SMALL_STATE(56)] = 1781,
  [SMALL_STATE(57)] = 1807,
  [SMALL_STATE(58)] = 1833,
  [SMALL_STATE(59)] = 1863,
  [SMALL_STATE(60)] = 1889,
  [SMALL_STATE(61)] = 1915,
  [SMALL_STATE(62)] = 1941,
  [SMALL_STATE(63)] = 1967,
  [SMALL_STATE(64)] = 1992,
  [SMALL_STATE(65)] = 2017,
  [SMALL_STATE(66)] = 2044,
  [SMALL_STATE(67)] = 2069,
  [SMALL_STATE(68)] = 2094,
  [SMALL_STATE(69)] = 2119,
  [SMALL_STATE(70)] = 2148,
  [SMALL_STATE(71)] = 2173,
  [SMALL_STATE(72)] = 2204,
  [SMALL_STATE(73)] = 2229,
  [SMALL_STATE(74)] = 2256,
  [SMALL_STATE(75)] = 2281,
  [SMALL_STATE(76)] = 2306,
  [SMALL_STATE(77)] = 2331,
  [SMALL_STATE(78)] = 2356,
  [SMALL_STATE(79)] = 2383,
  [SMALL_STATE(80)] = 2412,
  [SMALL_STATE(81)] = 2437,
  [SMALL_STATE(82)] = 2462,
  [SMALL_STATE(83)] = 2487,
  [SMALL_STATE(84)] = 2516,
  [SMALL_STATE(85)] = 2541,
  [SMALL_STATE(86)] = 2566,
  [SMALL_STATE(87)] = 2591,
  [SMALL_STATE(88)] = 2618,
  [SMALL_STATE(89)] = 2649,
  [SMALL_STATE(90)] = 2674,
  [SMALL_STATE(91)] = 2701,
  [SMALL_STATE(92)] = 2726,
  [SMALL_STATE(93)] = 2751,
  [SMALL_STATE(94)] = 2775,
  [SMALL_STATE(95)] = 2803,
  [SMALL_STATE(96)] = 2847,
  [SMALL_STATE(97)] = 2891,
  [SMALL_STATE(98)] = 2935,
  [SMALL_STATE(99)] = 2979,
  [SMALL_STATE(100)] = 3003,
  [SMALL_STATE(101)] = 3047,
  [SMALL_STATE(102)] = 3075,
  [SMALL_STATE(103)] = 3119,
  [SMALL_STATE(104)] = 3163,
  [SMALL_STATE(105)] = 3207,
  [SMALL_STATE(106)] = 3231,
  [SMALL_STATE(107)] = 3255,
  [SMALL_STATE(108)] = 3279,
  [SMALL_STATE(109)] = 3303,
  [SMALL_STATE(110)] = 3327,
  [SMALL_STATE(111)] = 3351,
  [SMALL_STATE(112)] = 3379,
  [SMALL_STATE(113)] = 3423,
  [SMALL_STATE(114)] = 3451,
  [SMALL_STATE(115)] = 3479,
  [SMALL_STATE(116)] = 3523,
  [SMALL_STATE(117)] = 3547,
  [SMALL_STATE(118)] = 3571,
  [SMALL_STATE(119)] = 3615,
  [SMALL_STATE(120)] = 3639,
  [SMALL_STATE(121)] = 3683,
  [SMALL_STATE(122)] = 3707,
  [SMALL_STATE(123)] = 3751,
  [SMALL_STATE(124)] = 3775,
  [SMALL_STATE(125)] = 3799,
  [SMALL_STATE(126)] = 3823,
  [SMALL_STATE(127)] = 3847,
  [SMALL_STATE(128)] = 3871,
  [SMALL_STATE(129)] = 3897,
  [SMALL_STATE(130)] = 3921,
  [SMALL_STATE(131)] = 3945,
  [SMALL_STATE(132)] = 3969,
  [SMALL_STATE(133)] = 3993,
  [SMALL_STATE(134)] = 4017,
  [SMALL_STATE(135)] = 4061,
  [SMALL_STATE(136)] = 4105,
  [SMALL_STATE(137)] = 4129,
  [SMALL_STATE(138)] = 4157,
  [SMALL_STATE(139)] = 4201,
  [SMALL_STATE(140)] = 4229,
  [SMALL_STATE(141)] = 4253,
  [SMALL_STATE(142)] = 4297,
  [SMALL_STATE(143)] = 4341,
  [SMALL_STATE(144)] = 4366,
  [SMALL_STATE(145)] = 4391,
  [SMALL_STATE(146)] = 4416,
  [SMALL_STATE(147)] = 4441,
  [SMALL_STATE(148)] = 4464,
  [SMALL_STATE(149)] = 4489,
  [SMALL_STATE(150)] = 4511,
  [SMALL_STATE(151)] = 4533,
  [SMALL_STATE(152)] = 4555,
  [SMALL_STATE(153)] = 4577,
  [SMALL_STATE(154)] = 4599,
  [SMALL_STATE(155)] = 4621,
  [SMALL_STATE(156)] = 4643,
  [SMALL_STATE(157)] = 4665,
  [SMALL_STATE(158)] = 4687,
  [SMALL_STATE(159)] = 4709,
  [SMALL_STATE(160)] = 4731,
  [SMALL_STATE(161)] = 4753,
  [SMALL_STATE(162)] = 4775,
  [SMALL_STATE(163)] = 4797,
  [SMALL_STATE(164)] = 4819,
  [SMALL_STATE(165)] = 4841,
  [SMALL_STATE(166)] = 4863,
  [SMALL_STATE(167)] = 4885,
  [SMALL_STATE(168)] = 4907,
  [SMALL_STATE(169)] = 4929,
  [SMALL_STATE(170)] = 4951,
  [SMALL_STATE(171)] = 4973,
  [SMALL_STATE(172)] = 4995,
  [SMALL_STATE(173)] = 5017,
  [SMALL_STATE(174)] = 5039,
  [SMALL_STATE(175)] = 5061,
  [SMALL_STATE(176)] = 5083,
  [SMALL_STATE(177)] = 5117,
  [SMALL_STATE(178)] = 5151,
  [SMALL_STATE(179)] = 5185,
  [SMALL_STATE(180)] = 5216,
  [SMALL_STATE(181)] = 5253,
  [SMALL_STATE(182)] = 5290,
  [SMALL_STATE(183)] = 5321,
  [SMALL_STATE(184)] = 5352,
  [SMALL_STATE(185)] = 5389,
  [SMALL_STATE(186)] = 5420,
  [SMALL_STATE(187)] = 5451,
  [SMALL_STATE(188)] = 5488,
  [SMALL_STATE(189)] = 5525,
  [SMALL_STATE(190)] = 5562,
  [SMALL_STATE(191)] = 5599,
  [SMALL_STATE(192)] = 5630,
  [SMALL_STATE(193)] = 5667,
  [SMALL_STATE(194)] = 5704,
  [SMALL_STATE(195)] = 5741,
  [SMALL_STATE(196)] = 5778,
  [SMALL_STATE(197)] = 5815,
  [SMALL_STATE(198)] = 5836,
  [SMALL_STATE(199)] = 5857,
  [SMALL_STATE(200)] = 5878,
  [SMALL_STATE(201)] = 5903,
  [SMALL_STATE(202)] = 5924,
  [SMALL_STATE(203)] = 5945,
  [SMALL_STATE(204)] = 5966,
  [SMALL_STATE(205)] = 5991,
  [SMALL_STATE(206)] = 6019,
  [SMALL_STATE(207)] = 6047,
  [SMALL_STATE(208)] = 6065,
  [SMALL_STATE(209)] = 6093,
  [SMALL_STATE(210)] = 6108,
  [SMALL_STATE(211)] = 6123,
  [SMALL_STATE(212)] = 6138,
  [SMALL_STATE(213)] = 6153,
  [SMALL_STATE(214)] = 6168,
  [SMALL_STATE(215)] = 6183,
  [SMALL_STATE(216)] = 6198,
  [SMALL_STATE(217)] = 6213,
  [SMALL_STATE(218)] = 6228,
  [SMALL_STATE(219)] = 6243,
  [SMALL_STATE(220)] = 6258,
  [SMALL_STATE(221)] = 6273,
  [SMALL_STATE(222)] = 6288,
  [SMALL_STATE(223)] = 6303,
  [SMALL_STATE(224)] = 6318,
  [SMALL_STATE(225)] = 6333,
  [SMALL_STATE(226)] = 6352,
  [SMALL_STATE(227)] = 6367,
  [SMALL_STATE(228)] = 6382,
  [SMALL_STATE(229)] = 6397,
  [SMALL_STATE(230)] = 6412,
  [SMALL_STATE(231)] = 6436,
  [SMALL_STATE(232)] = 6460,
  [SMALL_STATE(233)] = 6484,
  [SMALL_STATE(234)] = 6508,
  [SMALL_STATE(235)] = 6532,
  [SMALL_STATE(236)] = 6556,
  [SMALL_STATE(237)] = 6580,
  [SMALL_STATE(238)] = 6604,
  [SMALL_STATE(239)] = 6628,
  [SMALL_STATE(240)] = 6652,
  [SMALL_STATE(241)] = 6676,
  [SMALL_STATE(242)] = 6700,
  [SMALL_STATE(243)] = 6723,
  [SMALL_STATE(244)] = 6746,
  [SMALL_STATE(245)] = 6769,
  [SMALL_STATE(246)] = 6792,
  [SMALL_STATE(247)] = 6815,
  [SMALL_STATE(248)] = 6838,
  [SMALL_STATE(249)] = 6861,
  [SMALL_STATE(250)] = 6884,
  [SMALL_STATE(251)] = 6909,
  [SMALL_STATE(252)] = 6932,
  [SMALL_STATE(253)] = 6955,
  [SMALL_STATE(254)] = 6978,
  [SMALL_STATE(255)] = 7001,
  [SMALL_STATE(256)] = 7024,
  [SMALL_STATE(257)] = 7044,
  [SMALL_STATE(258)] = 7064,
  [SMALL_STATE(259)] = 7084,
  [SMALL_STATE(260)] = 7104,
  [SMALL_STATE(261)] = 7124,
  [SMALL_STATE(262)] = 7138,
  [SMALL_STATE(263)] = 7158,
  [SMALL_STATE(264)] = 7174,
  [SMALL_STATE(265)] = 7194,
  [SMALL_STATE(266)] = 7208,
  [SMALL_STATE(267)] = 7228,
  [SMALL_STATE(268)] = 7242,
  [SMALL_STATE(269)] = 7258,
  [SMALL_STATE(270)] = 7278,
  [SMALL_STATE(271)] = 7292,
  [SMALL_STATE(272)] = 7312,
  [SMALL_STATE(273)] = 7332,
  [SMALL_STATE(274)] = 7352,
  [SMALL_STATE(275)] = 7372,
  [SMALL_STATE(276)] = 7392,
  [SMALL_STATE(277)] = 7406,
  [SMALL_STATE(278)] = 7426,
  [SMALL_STATE(279)] = 7446,
  [SMALL_STATE(280)] = 7462,
  [SMALL_STATE(281)] = 7478,
  [SMALL_STATE(282)] = 7498,
  [SMALL_STATE(283)] = 7518,
  [SMALL_STATE(284)] = 7538,
  [SMALL_STATE(285)] = 7558,
  [SMALL_STATE(286)] = 7578,
  [SMALL_STATE(287)] = 7598,
  [SMALL_STATE(288)] = 7618,
  [SMALL_STATE(289)] = 7638,
  [SMALL_STATE(290)] = 7658,
  [SMALL_STATE(291)] = 7678,
  [SMALL_STATE(292)] = 7694,
  [SMALL_STATE(293)] = 7714,
  [SMALL_STATE(294)] = 7734,
  [SMALL_STATE(295)] = 7750,
  [SMALL_STATE(296)] = 7770,
  [SMALL_STATE(297)] = 7790,
  [SMALL_STATE(298)] = 7806,
  [SMALL_STATE(299)] = 7826,
  [SMALL_STATE(300)] = 7846,
  [SMALL_STATE(301)] = 7866,
  [SMALL_STATE(302)] = 7886,
  [SMALL_STATE(303)] = 7906,
  [SMALL_STATE(304)] = 7920,
  [SMALL_STATE(305)] = 7940,
  [SMALL_STATE(306)] = 7960,
  [SMALL_STATE(307)] = 7976,
  [SMALL_STATE(308)] = 7996,
  [SMALL_STATE(309)] = 8016,
  [SMALL_STATE(310)] = 8036,
  [SMALL_STATE(311)] = 8053,
  [SMALL_STATE(312)] = 8070,
  [SMALL_STATE(313)] = 8083,
  [SMALL_STATE(314)] = 8094,
  [SMALL_STATE(315)] = 8111,
  [SMALL_STATE(316)] = 8128,
  [SMALL_STATE(317)] = 8145,
  [SMALL_STATE(318)] = 8156,
  [SMALL_STATE(319)] = 8173,
  [SMALL_STATE(320)] = 8190,
  [SMALL_STATE(321)] = 8203,
  [SMALL_STATE(322)] = 8220,
  [SMALL_STATE(323)] = 8237,
  [SMALL_STATE(324)] = 8250,
  [SMALL_STATE(325)] = 8267,
  [SMALL_STATE(326)] = 8284,
  [SMALL_STATE(327)] = 8301,
  [SMALL_STATE(328)] = 8318,
  [SMALL_STATE(329)] = 8333,
  [SMALL_STATE(330)] = 8350,
  [SMALL_STATE(331)] = 8361,
  [SMALL_STATE(332)] = 8374,
  [SMALL_STATE(333)] = 8387,
  [SMALL_STATE(334)] = 8402,
  [SMALL_STATE(335)] = 8413,
  [SMALL_STATE(336)] = 8426,
  [SMALL_STATE(337)] = 8443,
  [SMALL_STATE(338)] = 8456,
  [SMALL_STATE(339)] = 8473,
  [SMALL_STATE(340)] = 8490,
  [SMALL_STATE(341)] = 8507,
  [SMALL_STATE(342)] = 8515,
  [SMALL_STATE(343)] = 8523,
  [SMALL_STATE(344)] = 8531,
  [SMALL_STATE(345)] = 8539,
  [SMALL_STATE(346)] = 8547,
  [SMALL_STATE(347)] = 8555,
  [SMALL_STATE(348)] = 8563,
  [SMALL_STATE(349)] = 8575,
  [SMALL_STATE(350)] = 8583,
  [SMALL_STATE(351)] = 8591,
  [SMALL_STATE(352)] = 8599,
  [SMALL_STATE(353)] = 8613,
  [SMALL_STATE(354)] = 8621,
  [SMALL_STATE(355)] = 8635,
  [SMALL_STATE(356)] = 8643,
  [SMALL_STATE(357)] = 8651,
  [SMALL_STATE(358)] = 8659,
  [SMALL_STATE(359)] = 8669,
  [SMALL_STATE(360)] = 8683,
  [SMALL_STATE(361)] = 8691,
  [SMALL_STATE(362)] = 8699,
  [SMALL_STATE(363)] = 8707,
  [SMALL_STATE(364)] = 8717,
  [SMALL_STATE(365)] = 8726,
  [SMALL_STATE(366)] = 8739,
  [SMALL_STATE(367)] = 8748,
  [SMALL_STATE(368)] = 8757,
  [SMALL_STATE(369)] = 8766,
  [SMALL_STATE(370)] = 8775,
  [SMALL_STATE(371)] = 8784,
  [SMALL_STATE(372)] = 8797,
  [SMALL_STATE(373)] = 8806,
  [SMALL_STATE(374)] = 8815,
  [SMALL_STATE(375)] = 8826,
  [SMALL_STATE(376)] = 8835,
  [SMALL_STATE(377)] = 8844,
  [SMALL_STATE(378)] = 8853,
  [SMALL_STATE(379)] = 8862,
  [SMALL_STATE(380)] = 8871,
  [SMALL_STATE(381)] = 8880,
  [SMALL_STATE(382)] = 8889,
  [SMALL_STATE(383)] = 8898,
  [SMALL_STATE(384)] = 8907,
  [SMALL_STATE(385)] = 8920,
  [SMALL_STATE(386)] = 8929,
  [SMALL_STATE(387)] = 8942,
  [SMALL_STATE(388)] = 8951,
  [SMALL_STATE(389)] = 8960,
  [SMALL_STATE(390)] = 8969,
  [SMALL_STATE(391)] = 8978,
  [SMALL_STATE(392)] = 8987,
  [SMALL_STATE(393)] = 8995,
  [SMALL_STATE(394)] = 9005,
  [SMALL_STATE(395)] = 9015,
  [SMALL_STATE(396)] = 9021,
  [SMALL_STATE(397)] = 9031,
  [SMALL_STATE(398)] = 9041,
  [SMALL_STATE(399)] = 9051,
  [SMALL_STATE(400)] = 9059,
  [SMALL_STATE(401)] = 9069,
  [SMALL_STATE(402)] = 9079,
  [SMALL_STATE(403)] = 9087,
  [SMALL_STATE(404)] = 9095,
  [SMALL_STATE(405)] = 9103,
  [SMALL_STATE(406)] = 9111,
  [SMALL_STATE(407)] = 9121,
  [SMALL_STATE(408)] = 9127,
  [SMALL_STATE(409)] = 9135,
  [SMALL_STATE(410)] = 9145,
  [SMALL_STATE(411)] = 9155,
  [SMALL_STATE(412)] = 9163,
  [SMALL_STATE(413)] = 9171,
  [SMALL_STATE(414)] = 9181,
  [SMALL_STATE(415)] = 9187,
  [SMALL_STATE(416)] = 9197,
  [SMALL_STATE(417)] = 9207,
  [SMALL_STATE(418)] = 9215,
  [SMALL_STATE(419)] = 9225,
  [SMALL_STATE(420)] = 9235,
  [SMALL_STATE(421)] = 9243,
  [SMALL_STATE(422)] = 9253,
  [SMALL_STATE(423)] = 9263,
  [SMALL_STATE(424)] = 9271,
  [SMALL_STATE(425)] = 9279,
  [SMALL_STATE(426)] = 9289,
  [SMALL_STATE(427)] = 9297,
  [SMALL_STATE(428)] = 9304,
  [SMALL_STATE(429)] = 9311,
  [SMALL_STATE(430)] = 9318,
  [SMALL_STATE(431)] = 9325,
  [SMALL_STATE(432)] = 9332,
  [SMALL_STATE(433)] = 9339,
  [SMALL_STATE(434)] = 9346,
  [SMALL_STATE(435)] = 9353,
  [SMALL_STATE(436)] = 9360,
  [SMALL_STATE(437)] = 9367,
  [SMALL_STATE(438)] = 9374,
  [SMALL_STATE(439)] = 9381,
  [SMALL_STATE(440)] = 9388,
  [SMALL_STATE(441)] = 9395,
  [SMALL_STATE(442)] = 9402,
  [SMALL_STATE(443)] = 9409,
  [SMALL_STATE(444)] = 9416,
  [SMALL_STATE(445)] = 9423,
  [SMALL_STATE(446)] = 9430,
  [SMALL_STATE(447)] = 9437,
  [SMALL_STATE(448)] = 9441,
  [SMALL_STATE(449)] = 9445,
  [SMALL_STATE(450)] = 9449,
  [SMALL_STATE(451)] = 9453,
  [SMALL_STATE(452)] = 9457,
  [SMALL_STATE(453)] = 9461,
  [SMALL_STATE(454)] = 9465,
  [SMALL_STATE(455)] = 9469,
  [SMALL_STATE(456)] = 9473,
  [SMALL_STATE(457)] = 9477,
  [SMALL_STATE(458)] = 9481,
  [SMALL_STATE(459)] = 9485,
  [SMALL_STATE(460)] = 9489,
  [SMALL_STATE(461)] = 9493,
  [SMALL_STATE(462)] = 9497,
  [SMALL_STATE(463)] = 9501,
  [SMALL_STATE(464)] = 9505,
  [SMALL_STATE(465)] = 9509,
  [SMALL_STATE(466)] = 9513,
  [SMALL_STATE(467)] = 9517,
  [SMALL_STATE(468)] = 9521,
  [SMALL_STATE(469)] = 9525,
  [SMALL_STATE(470)] = 9529,
  [SMALL_STATE(471)] = 9533,
  [SMALL_STATE(472)] = 9537,
  [SMALL_STATE(473)] = 9541,
  [SMALL_STATE(474)] = 9545,
  [SMALL_STATE(475)] = 9549,
  [SMALL_STATE(476)] = 9553,
  [SMALL_STATE(477)] = 9557,
  [SMALL_STATE(478)] = 9561,
  [SMALL_STATE(479)] = 9565,
  [SMALL_STATE(480)] = 9569,
  [SMALL_STATE(481)] = 9573,
  [SMALL_STATE(482)] = 9577,
  [SMALL_STATE(483)] = 9581,
  [SMALL_STATE(484)] = 9585,
  [SMALL_STATE(485)] = 9589,
  [SMALL_STATE(486)] = 9593,
  [SMALL_STATE(487)] = 9597,
  [SMALL_STATE(488)] = 9601,
  [SMALL_STATE(489)] = 9605,
  [SMALL_STATE(490)] = 9609,
  [SMALL_STATE(491)] = 9613,
  [SMALL_STATE(492)] = 9617,
  [SMALL_STATE(493)] = 9621,
  [SMALL_STATE(494)] = 9625,
  [SMALL_STATE(495)] = 9629,
  [SMALL_STATE(496)] = 9633,
  [SMALL_STATE(497)] = 9637,
  [SMALL_STATE(498)] = 9641,
  [SMALL_STATE(499)] = 9645,
  [SMALL_STATE(500)] = 9649,
  [SMALL_STATE(501)] = 9653,
  [SMALL_STATE(502)] = 9657,
  [SMALL_STATE(503)] = 9661,
  [SMALL_STATE(504)] = 9665,
  [SMALL_STATE(505)] = 9669,
  [SMALL_STATE(506)] = 9673,
  [SMALL_STATE(507)] = 9677,
  [SMALL_STATE(508)] = 9681,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(414),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(298),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(443),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(443),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(459),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(462),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(413),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(393),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(467),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(429),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(429),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(193),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(193),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(469),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(260),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(445),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(445),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(465),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(195),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(195),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(4),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(296),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(441),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(441),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(451),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(188),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(188),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(7),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__when_content_repeat1, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__when_content_repeat1, 2),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__when_content_repeat1, 2), SHIFT_REPEAT(181),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__when_content_repeat1, 2), SHIFT_REPEAT(181),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 5, .production_id = 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 5, .production_id = 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_keyword, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_keyword, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(37),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__when_content, 3),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__when_content, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 4),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_buf_code, 1, .production_id = 4),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(461),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(16),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 4),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 4),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 7),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 7),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 7, .production_id = 7),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 7, .production_id = 7),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 5),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 5),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content_after_dot, 5, .production_id = 5),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content_after_dot, 5, .production_id = 5),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffered_code, 2),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffered_code, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unescaped_buffered_code, 2),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unescaped_buffered_code, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 3),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 2),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 2),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe, 3),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 6),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 6),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 5),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 5),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 5),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 5),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__un_delimited_javascript_multiline, 2), SHIFT_REPEAT(107),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [375] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(87),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 1),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 3),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unbuffered_code, 4),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unbuffered_code, 4),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 3),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when, 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_block, 5, .production_id = 2),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_block, 5, .production_id = 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 2),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 6),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 6),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 6),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 6),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_line_buf_code, 3),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_line_buf_code, 3),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(275),
  [521] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(444),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(444),
  [527] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(457),
  [530] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(187),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(187),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(178),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 1),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 1),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 2),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 2),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [685] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(358),
  [688] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(367),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2),
  [705] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_repeat1, 2), SHIFT_REPEAT(225),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [756] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(328),
  [759] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(473),
  [762] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2), SHIFT_REPEAT(474),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [829] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(328),
  [832] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(473),
  [835] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 2), SHIFT_REPEAT(474),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 2),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [870] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2), SHIFT_REPEAT(194),
  [873] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2), SHIFT_REPEAT(291),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__single_line_buf_code_repeat1, 2),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 1),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 1),
  [918] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [926] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2),
  [930] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2), SHIFT_REPEAT(456),
  [933] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [945] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [947] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(328),
  [950] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [954] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_name, 1),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [962] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 3),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attribute_repeat1, 2, .production_id = 3),
  [966] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(447),
  [969] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(395),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2),
  [974] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_angular_attribute_name, 1),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_angular_attribute_name, 1),
  [978] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_after_dot_repeat1, 2),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 1),
  [990] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 1),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 3),
  [1000] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 3),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__content_or_javascript, 3),
  [1004] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__content_or_javascript, 3),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 1),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 6),
  [1014] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 3, .production_id = 6),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [1020] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 3),
  [1024] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 3),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__angular_attribute, 3),
  [1028] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__angular_attribute, 3),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [1032] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_attribute_value, 2),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_javascript, 2),
  [1036] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_javascript, 2),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [1042] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute, 3),
  [1046] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute, 3),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_attribute_value, 2),
  [1050] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_attribute_value, 2),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_attribute_value, 2),
  [1058] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__array_attribute_value, 2),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__template_attribute_value, 2),
  [1062] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__template_attribute_value, 2),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_attribute_value, 2),
  [1066] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__object_attribute_value, 2),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_attribute_value, 2),
  [1070] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable_attribute_value, 2),
  [1072] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ternary_attribute_value, 2),
  [1076] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ternary_attribute_value, 2),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1088] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1142] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__un_delimited_javascript, 1),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
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
